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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERSPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERSPOLICYREQUEST_H_

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
                * UpdateOrganizationMembersPolicy request structure.
                */
                class UpdateOrganizationMembersPolicyRequest : public AbstractModel
                {
                public:
                    UpdateOrganizationMembersPolicyRequest();
                    ~UpdateOrganizationMembersPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Member UIN list, including up to 10 items.
                     * @return MemberUins Member UIN list, including up to 10 items.
                     * 
                     */
                    std::vector<int64_t> GetMemberUins() const;

                    /**
                     * 设置Member UIN list, including up to 10 items.
                     * @param _memberUins Member UIN list, including up to 10 items.
                     * 
                     */
                    void SetMemberUins(const std::vector<int64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取Member access policy ID, which can be obtained by calling DescribeOrganizationMemberPolicies.
                     * @return PolicyId Member access policy ID, which can be obtained by calling DescribeOrganizationMemberPolicies.
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Member access policy ID, which can be obtained by calling DescribeOrganizationMemberPolicies.
                     * @param _policyId Member access policy ID, which can be obtained by calling DescribeOrganizationMemberPolicies.
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Member access identity ID, which can be obtained by calling ListOrganizationIdentity.
                     * @return IdentityId Member access identity ID, which can be obtained by calling ListOrganizationIdentity.
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置Member access identity ID, which can be obtained by calling ListOrganizationIdentity.
                     * @param _identityId Member access identity ID, which can be obtained by calling ListOrganizationIdentity.
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
                     * 获取Policy description, which contains up to 128 characters.
                     * @return Description Policy description, which contains up to 128 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description, which contains up to 128 characters.
                     * @param _description Policy description, which contains up to 128 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Member UIN list, including up to 10 items.
                     */
                    std::vector<int64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * Member access policy ID, which can be obtained by calling DescribeOrganizationMemberPolicies.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Member access identity ID, which can be obtained by calling ListOrganizationIdentity.
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * Policy description, which contains up to 128 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERSPOLICYREQUEST_H_
