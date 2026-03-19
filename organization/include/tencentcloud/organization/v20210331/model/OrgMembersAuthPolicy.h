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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERSAUTHPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERSAUTHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/MemberMainInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Organization member access authorization policy.
                */
                class OrgMembersAuthPolicy : public AbstractModel
                {
                public:
                    OrgMembersAuthPolicy();
                    ~OrgMembersAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Role name of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityRoleName Role name of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdentityRoleName() const;

                    /**
                     * 设置Role name of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityRoleName Role name of an identity.
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
                     * 获取Role alias of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityRoleAliasName Role alias of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdentityRoleAliasName() const;

                    /**
                     * 设置Role alias of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityRoleAliasName Role alias of an identity.
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
                     * 获取Member access policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyId Member access policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Member access policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyId Member access policy ID.
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
                     * 获取Member access policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyName Member access policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Member access policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyName Member access policy name.
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
                     * 获取Member UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberUin Member UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberUin Member UIN.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberName Member name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置Member name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberName Member name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取Sub-account UIN or user group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgSubAccountUin Sub-account UIN or user group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOrgSubAccountUin() const;

                    /**
                     * 设置Sub-account UIN or user group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orgSubAccountUin Sub-account UIN or user group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrgSubAccountUin(const int64_t& _orgSubAccountUin);

                    /**
                     * 判断参数 OrgSubAccountUin 是否已赋值
                     * @return OrgSubAccountUin 是否已赋值
                     * 
                     */
                    bool OrgSubAccountUinHasBeenSet() const;

                    /**
                     * 获取Sub-account name or user group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgSubAccountName Sub-account name or user group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgSubAccountName() const;

                    /**
                     * 设置Sub-account name or user group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orgSubAccountName Sub-account name or user group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrgSubAccountName(const std::string& _orgSubAccountName);

                    /**
                     * 判断参数 OrgSubAccountName 是否已赋值
                     * @return OrgSubAccountName 是否已赋值
                     * 
                     */
                    bool OrgSubAccountNameHasBeenSet() const;

                    /**
                     * 获取Binding type. 1: sub-account; 2: user group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindType Binding type. 1: sub-account; 2: user group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBindType() const;

                    /**
                     * 设置Binding type. 1: sub-account; 2: user group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindType Binding type. 1: sub-account; 2: user group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindType(const uint64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取Member information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Members Member information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MemberMainInfo> GetMembers() const;

                    /**
                     * 设置Member information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _members Member information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMembers(const std::vector<MemberMainInfo>& _members);

                    /**
                     * 判断参数 Members 是否已赋值
                     * @return Members 是否已赋值
                     * 
                     */
                    bool MembersHasBeenSet() const;

                private:

                    /**
                     * Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * Role name of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_identityRoleName;
                    bool m_identityRoleNameHasBeenSet;

                    /**
                     * Role alias of an identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_identityRoleAliasName;
                    bool m_identityRoleAliasNameHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Member access policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Member access policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Member UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Member name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * Sub-account UIN or user group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orgSubAccountUin;
                    bool m_orgSubAccountUinHasBeenSet;

                    /**
                     * Sub-account name or user group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgSubAccountName;
                    bool m_orgSubAccountNameHasBeenSet;

                    /**
                     * Binding type. 1: sub-account; 2: user group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * Member information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MemberMainInfo> m_members;
                    bool m_membersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERSAUTHPOLICY_H_
