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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribePayType response structure.
                */
                class DescribePayTypeResponse : public AbstractModel
                {
                public:
                    DescribePayTypeResponse();
                    ~DescribePayTypeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Bill by dynamic and static traffic separately 
`bandwidth_sep`: Bill by dynamic and static bandwidth separately
If you incur any usage when switching the billing mode, the new mode will take effect the next day. If no usage is incurred, the new mode takes effect immediately.
                     * @return PayType Billing type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Bill by dynamic and static traffic separately 
`bandwidth_sep`: Bill by dynamic and static bandwidth separately
If you incur any usage when switching the billing mode, the new mode will take effect the next day. If no usage is incurred, the new mode takes effect immediately.
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Billing cycle
`day`: Daily
`month`: Monthly
`hour`: Hourly
                     * @return BillingCycle Billing cycle
`day`: Daily
`month`: Monthly
`hour`: Hourly
                     * 
                     */
                    std::string GetBillingCycle() const;

                    /**
                     * 判断参数 BillingCycle 是否已赋值
                     * @return BillingCycle 是否已赋值
                     * 
                     */
                    bool BillingCycleHasBeenSet() const;

                    /**
                     * 获取Statistic data
`monthMax`: Billed monthly based on the monthly average daily peak traffic
`day95`: Billed monthly based on the daily 95th percentile bandwidth
`month95`: Billed monthly based on the monthly 95th percentile bandwidth
`sum`: Billed daily/monthly based on the total traffic or requests
`max`: Billed daily based on the peak bandwidth
                     * @return StatType Statistic data
`monthMax`: Billed monthly based on the monthly average daily peak traffic
`day95`: Billed monthly based on the daily 95th percentile bandwidth
`month95`: Billed monthly based on the monthly 95th percentile bandwidth
`sum`: Billed daily/monthly based on the total traffic or requests
`max`: Billed daily based on the peak bandwidth
                     * 
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取Regionl billing
`all`: Unified billing for all regions
`multiple`: Region-specific billing
                     * @return RegionType Regionl billing
`all`: Unified billing for all regions
`multiple`: Region-specific billing
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     * 
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取Current billing mode
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Bill by dynamic and static traffic separately 
`bandwidth_sep`: Bill by dynamic and static bandwidth separately
                     * @return CurrentPayType Current billing mode
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Bill by dynamic and static traffic separately 
`bandwidth_sep`: Bill by dynamic and static bandwidth separately
                     * 
                     */
                    std::string GetCurrentPayType() const;

                    /**
                     * 判断参数 CurrentPayType 是否已赋值
                     * @return CurrentPayType 是否已赋值
                     * 
                     */
                    bool CurrentPayTypeHasBeenSet() const;

                private:

                    /**
                     * Billing type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Bill by dynamic and static traffic separately 
`bandwidth_sep`: Bill by dynamic and static bandwidth separately
If you incur any usage when switching the billing mode, the new mode will take effect the next day. If no usage is incurred, the new mode takes effect immediately.
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Billing cycle
`day`: Daily
`month`: Monthly
`hour`: Hourly
                     */
                    std::string m_billingCycle;
                    bool m_billingCycleHasBeenSet;

                    /**
                     * Statistic data
`monthMax`: Billed monthly based on the monthly average daily peak traffic
`day95`: Billed monthly based on the daily 95th percentile bandwidth
`month95`: Billed monthly based on the monthly 95th percentile bandwidth
`sum`: Billed daily/monthly based on the total traffic or requests
`max`: Billed daily based on the peak bandwidth
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * Regionl billing
`all`: Unified billing for all regions
`multiple`: Region-specific billing
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * Current billing mode
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Bill by dynamic and static traffic separately 
`bandwidth_sep`: Bill by dynamic and static bandwidth separately
                     */
                    std::string m_currentPayType;
                    bool m_currentPayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_
