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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERPOLICY_H_

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
                * Authorized policy of the organization member
                */
                class OrgMemberPolicy : public AbstractModel
                {
                public:
                    OrgMemberPolicy();
                    ~OrgMemberPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyId Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyId Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyName Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyName Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityId Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityId Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Identity role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityRoleName Identity role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdentityRoleName() const;

                    /**
                     * 设置Identity role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityRoleName Identity role name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Identity role alias.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityRoleAliasName Identity role alias.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdentityRoleAliasName() const;

                    /**
                     * 设置Identity role alias.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityRoleAliasName Identity role alias.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * Identity role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_identityRoleName;
                    bool m_identityRoleNameHasBeenSet;

                    /**
                     * Identity role alias.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_identityRoleAliasName;
                    bool m_identityRoleAliasNameHasBeenSet;

                    /**
                     * Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERPOLICY_H_
