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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CANCELORGANIZATIONMEMBERAUTHACCOUNTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CANCELORGANIZATIONMEMBERAUTHACCOUNTREQUEST_H_

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
                * CancelOrganizationMemberAuthAccount request structure.
                */
                class CancelOrganizationMemberAuthAccountRequest : public AbstractModel
                {
                public:
                    CancelOrganizationMemberAuthAccountRequest();
                    ~CancelOrganizationMemberAuthAccountRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * @return PolicyId Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * @param _policyId Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
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
                     * 获取Organization sub-account UIN.
                     * @return OrgSubAccountUin Organization sub-account UIN.
                     * 
                     */
                    int64_t GetOrgSubAccountUin() const;

                    /**
                     * 设置Organization sub-account UIN.
                     * @param _orgSubAccountUin Organization sub-account UIN.
                     * 
                     */
                    void SetOrgSubAccountUin(const int64_t& _orgSubAccountUin);

                    /**
                     * 判断参数 OrgSubAccountUin 是否已赋值
                     * @return OrgSubAccountUin 是否已赋值
                     * 
                     */
                    bool OrgSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Member UIN.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Organization sub-account UIN.
                     */
                    int64_t m_orgSubAccountUin;
                    bool m_orgSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CANCELORGANIZATIONMEMBERAUTHACCOUNTREQUEST_H_
