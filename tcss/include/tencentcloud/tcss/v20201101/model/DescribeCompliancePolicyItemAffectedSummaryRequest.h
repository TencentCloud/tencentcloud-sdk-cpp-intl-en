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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDSUMMARYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeCompliancePolicyItemAffectedSummary request structure.
                */
                class DescribeCompliancePolicyItemAffectedSummaryRequest : public AbstractModel
                {
                public:
                    DescribeCompliancePolicyItemAffectedSummaryRequest();
                    ~DescribeCompliancePolicyItemAffectedSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`CustomerPolicyItemId` returned by `DescribeComplianceTaskPolicyItemSummaryList`, which indicates the check item ID.
                     * @return CustomerPolicyItemId `CustomerPolicyItemId` returned by `DescribeComplianceTaskPolicyItemSummaryList`, which indicates the check item ID.
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置`CustomerPolicyItemId` returned by `DescribeComplianceTaskPolicyItemSummaryList`, which indicates the check item ID.
                     * @param _customerPolicyItemId `CustomerPolicyItemId` returned by `DescribeComplianceTaskPolicyItemSummaryList`, which indicates the check item ID.
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                private:

                    /**
                     * `CustomerPolicyItemId` returned by `DescribeComplianceTaskPolicyItemSummaryList`, which indicates the check item ID.
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDSUMMARYREQUEST_H_
