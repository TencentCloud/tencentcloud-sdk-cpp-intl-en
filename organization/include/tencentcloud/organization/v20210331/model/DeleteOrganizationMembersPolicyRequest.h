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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERSPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERSPOLICYREQUEST_H_

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
                * DeleteOrganizationMembersPolicy request structure.
                */
                class DeleteOrganizationMembersPolicyRequest : public AbstractModel
                {
                public:
                    DeleteOrganizationMembersPolicyRequest();
                    ~DeleteOrganizationMembersPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Access policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * @return PolicyId Access policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Access policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * @param _policyId Access policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Access policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERSPOLICYREQUEST_H_
