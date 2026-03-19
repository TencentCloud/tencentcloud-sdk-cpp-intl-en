/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHIDENTITY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Authorizable identity of the organization member
                */
                class OrgMemberAuthIdentity : public AbstractModel
                {
                public:
                    OrgMemberAuthIdentity();
                    ~OrgMemberAuthIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identity ID.
                     * @return IdentityId Identity ID.
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置Identity ID.
                     * @param _identityId Identity ID.
                     * 
                     */
                    void SetIdentityId(const int64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取Role name of an identity.
                     * @return IdentityRoleName Role name of an identity.
                     * 
                     */
                    std::string GetIdentityRoleName() const;

                    /**
                     * 设置Role name of an identity.
                     * @param _identityRoleName Role name of an identity.
                     * 
                     */
                    void SetIdentityRoleName(const std::string& _identityRoleName);

                    /**
                     * 判断参数 IdentityRoleName 是否已赋值
                     * @return IdentityRoleName 是否已赋值
                     * 
                     */
                    bool IdentityRoleNameHasBeenSet() const;

                    /**
                     * 获取Role alias of an identity.
                     * @return IdentityRoleAliasName Role alias of an identity.
                     * 
                     */
                    std::string GetIdentityRoleAliasName() const;

                    /**
                     * 设置Role alias of an identity.
                     * @param _identityRoleAliasName Role alias of an identity.
                     * 
                     */
                    void SetIdentityRoleAliasName(const std::string& _identityRoleAliasName);

                    /**
                     * 判断参数 IdentityRoleAliasName 是否已赋值
                     * @return IdentityRoleAliasName 是否已赋值
                     * 
                     */
                    bool IdentityRoleAliasNameHasBeenSet() const;

                    /**
                     * 获取Identity description.
                     * @return Description Identity description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Identity description.
                     * @param _description Identity description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Time of initial configuration success.
                     * @return CreateTime Time of initial configuration success.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time of initial configuration success.
                     * @param _createTime Time of initial configuration success.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Time of the last successful configuration.
                     * @return UpdateTime Time of the last successful configuration.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Time of the last successful configuration.
                     * @param _updateTime Time of the last successful configuration.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Identity type. Valid values: 1: preset identity; 2: custom identity.
                     * @return IdentityType Identity type. Valid values: 1: preset identity; 2: custom identity.
                     * 
                     */
                    uint64_t GetIdentityType() const;

                    /**
                     * 设置Identity type. Valid values: 1: preset identity; 2: custom identity.
                     * @param _identityType Identity type. Valid values: 1: preset identity; 2: custom identity.
                     * 
                     */
                    void SetIdentityType(const uint64_t& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取Configuration status. Valid values: 1: configuration completed; 2: reconfiguration required.
                     * @return Status Configuration status. Valid values: 1: configuration completed; 2: reconfiguration required.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Configuration status. Valid values: 1: configuration completed; 2: reconfiguration required.
                     * @param _status Configuration status. Valid values: 1: configuration completed; 2: reconfiguration required.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Member UIN.
                     * @return MemberUin Member UIN.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN.
                     * @param _memberUin Member UIN.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Member name.
                     * @return MemberName Member name.
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置Member name.
                     * @param _memberName Member name.
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                private:

                    /**
                     * Identity ID.
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * Role name of an identity.
                     */
                    std::string m_identityRoleName;
                    bool m_identityRoleNameHasBeenSet;

                    /**
                     * Role alias of an identity.
                     */
                    std::string m_identityRoleAliasName;
                    bool m_identityRoleAliasNameHasBeenSet;

                    /**
                     * Identity description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Time of initial configuration success.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Time of the last successful configuration.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Identity type. Valid values: 1: preset identity; 2: custom identity.
                     */
                    uint64_t m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * Configuration status. Valid values: 1: configuration completed; 2: reconfiguration required.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Member UIN.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Member name.
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHIDENTITY_H_
