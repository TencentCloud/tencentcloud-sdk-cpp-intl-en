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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/UsageRecords.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeVoucherUsageDetails response structure.
                */
                class DescribeVoucherUsageDetailsResponse : public AbstractModel
                {
                public:
                    DescribeVoucherUsageDetailsResponse();
                    ~DescribeVoucherUsageDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of vouchers.
                     * @return TotalCount The total number of vouchers.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取The total amount used. The value of this parameter is the total amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * @return TotalUsedAmount The total amount used. The value of this parameter is the total amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * 
                     */
                    int64_t GetTotalUsedAmount() const;

                    /**
                     * 判断参数 TotalUsedAmount 是否已赋值
                     * @return TotalUsedAmount 是否已赋值
                     * 
                     */
                    bool TotalUsedAmountHasBeenSet() const;

                    /**
                     * 获取The usage details.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UsageRecords The usage details.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<UsageRecords> GetUsageRecords() const;

                    /**
                     * 判断参数 UsageRecords 是否已赋值
                     * @return UsageRecords 是否已赋值
                     * 
                     */
                    bool UsageRecordsHasBeenSet() const;

                private:

                    /**
                     * The total number of vouchers.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The total amount used. The value of this parameter is the total amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     */
                    int64_t m_totalUsedAmount;
                    bool m_totalUsedAmountHasBeenSet;

                    /**
                     * The usage details.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<UsageRecords> m_usageRecords;
                    bool m_usageRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSRESPONSE_H_
