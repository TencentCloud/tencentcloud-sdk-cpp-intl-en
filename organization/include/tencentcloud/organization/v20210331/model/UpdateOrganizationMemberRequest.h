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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateOrganizationMember request structure.
                */
                class UpdateOrganizationMemberRequest : public AbstractModel
                {
                public:
                    UpdateOrganizationMemberRequest();
                    ~UpdateOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Member UIN.
                     * @return MemberUin Member UIN.
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN.
                     * @param _memberUin Member UIN.
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * @return Name Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * @param _name Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Remarks, which contain up to 40 characters.
                     * @return Remark Remarks, which contain up to 40 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks, which contain up to 40 characters.
                     * @param _remark Remarks, which contain up to 40 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Relationship policy type. When PolicyType is not empty, PermissionIds cannot be empty. Value: Financial.
                     * @return PolicyType Relationship policy type. When PolicyType is not empty, PermissionIds cannot be empty. Value: Financial.
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Relationship policy type. When PolicyType is not empty, PermissionIds cannot be empty. Value: Financial.
                     * @param _policyType Relationship policy type. When PolicyType is not empty, PermissionIds cannot be empty. Value: Financial.
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取List of member financial permission IDs. When PermissionIds is not empty, PolicyType cannot be empty.
Valid values: 1: View bills. 2: View balance. 3: Allocate funds. 4: Consolidate bills. 5: Issue invoices. 6: Inherit discounts. 7: Pay on behalf. 8: Analyze costs. 1 and 2 are required by default.
                     * @return PermissionIds List of member financial permission IDs. When PermissionIds is not empty, PolicyType cannot be empty.
Valid values: 1: View bills. 2: View balance. 3: Allocate funds. 4: Consolidate bills. 5: Issue invoices. 6: Inherit discounts. 7: Pay on behalf. 8: Analyze costs. 1 and 2 are required by default.
                     * 
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置List of member financial permission IDs. When PermissionIds is not empty, PolicyType cannot be empty.
Valid values: 1: View bills. 2: View balance. 3: Allocate funds. 4: Consolidate bills. 5: Issue invoices. 6: Inherit discounts. 7: Pay on behalf. 8: Analyze costs. 1 and 2 are required by default.
                     * @param _permissionIds List of member financial permission IDs. When PermissionIds is not empty, PolicyType cannot be empty.
Valid values: 1: View bills. 2: View balance. 3: Allocate funds. 4: Consolidate bills. 5: Issue invoices. 6: Inherit discounts. 7: Pay on behalf. 8: Analyze costs. 1 and 2 are required by default.
                     * 
                     */
                    void SetPermissionIds(const std::vector<uint64_t>& _permissionIds);

                    /**
                     * 判断参数 PermissionIds 是否已赋值
                     * @return PermissionIds 是否已赋值
                     * 
                     */
                    bool PermissionIdsHasBeenSet() const;

                    /**
                     * 获取Whether to allow members to exit an organization. Valid values: Allow: permitted, Denied: not permitted.
                     * @return IsAllowQuit Whether to allow members to exit an organization. Valid values: Allow: permitted, Denied: not permitted.
                     * 
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 设置Whether to allow members to exit an organization. Valid values: Allow: permitted, Denied: not permitted.
                     * @param _isAllowQuit Whether to allow members to exit an organization. Valid values: Allow: permitted, Denied: not permitted.
                     * 
                     */
                    void SetIsAllowQuit(const std::string& _isAllowQuit);

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     * 
                     */
                    bool IsAllowQuitHasBeenSet() const;

                    /**
                     * 获取Payer UIN, which is required when pay-on-behalf mode is used in member financial permission. The value is the principal administrator UIN of the corresponding member.
                     * @return PayUin Payer UIN, which is required when pay-on-behalf mode is used in member financial permission. The value is the principal administrator UIN of the corresponding member.
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置Payer UIN, which is required when pay-on-behalf mode is used in member financial permission. The value is the principal administrator UIN of the corresponding member.
                     * @param _payUin Payer UIN, which is required when pay-on-behalf mode is used in member financial permission. The value is the principal administrator UIN of the corresponding member.
                     * 
                     */
                    void SetPayUin(const std::string& _payUin);

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     * 
                     */
                    bool PayUinHasBeenSet() const;

                private:

                    /**
                     * Member UIN.
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Remarks, which contain up to 40 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Relationship policy type. When PolicyType is not empty, PermissionIds cannot be empty. Value: Financial.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * List of member financial permission IDs. When PermissionIds is not empty, PolicyType cannot be empty.
Valid values: 1: View bills. 2: View balance. 3: Allocate funds. 4: Consolidate bills. 5: Issue invoices. 6: Inherit discounts. 7: Pay on behalf. 8: Analyze costs. 1 and 2 are required by default.
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * Whether to allow members to exit an organization. Valid values: Allow: permitted, Denied: not permitted.
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * Payer UIN, which is required when pay-on-behalf mode is used in member financial permission. The value is the principal administrator UIN of the corresponding member.
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERREQUEST_H_
