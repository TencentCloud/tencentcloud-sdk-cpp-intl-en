/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Billing modes:
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Disused field
`bandwidth_sep`: Disused field
When you change a daily billing mode to another, and there is network usage on the day of change, this field shows the new billing mode, which takes effect from the next day. If there is no network usage on the day of change, this field shows the new billing mode directly.
                     * @return PayType Billing modes:
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Disused field
`bandwidth_sep`: Disused field
When you change a daily billing mode to another, and there is network usage on the day of change, this field shows the new billing mode, which takes effect from the next day. If there is no network usage on the day of change, this field shows the new billing mode directly.
                     */
                    std::string GetPayType() const;

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Billing cycle:
`day`: Daily
`month`: Monthly 
`hour`: Hourly 
                     * @return BillingCycle Billing cycle:
`day`: Daily
`month`: Monthly 
`hour`: Hourly 
                     */
                    std::string GetBillingCycle() const;

                    /**
                     * 判断参数 BillingCycle 是否已赋值
                     * @return BillingCycle 是否已赋值
                     */
                    bool BillingCycleHasBeenSet() const;

                    /**
                     * 获取`monthMax`: Billed by the monthly average of daily peak traffic (monthly settlement)
`day95`: Billed by the daily 95th percentile bandwidth (monthly settlement)
`month95`: Billed by the monthly 95th percentile bandwidth (monthly settlement)
`sum`: Billed by the total traffic/total requests (daily or monthly settlement)
`max`: Billed by the peak bandwidth (daily settlement)
                     * @return StatType `monthMax`: Billed by the monthly average of daily peak traffic (monthly settlement)
`day95`: Billed by the daily 95th percentile bandwidth (monthly settlement)
`month95`: Billed by the monthly 95th percentile bandwidth (monthly settlement)
`sum`: Billed by the total traffic/total requests (daily or monthly settlement)
`max`: Billed by the peak bandwidth (daily settlement)
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取Billing method for regions outside the Chinese mainland:
`all`: Unified billing for all regions
`multiple`: Region-specific billing
                     * @return RegionType Billing method for regions outside the Chinese mainland:
`all`: Unified billing for all regions
`multiple`: Region-specific billing
                     */
                    std::string GetRegionType() const;

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取The current billing mode in effect:
`flux`: Billed by traffic
`bandwidth`: Billed by bandwidth
`request`: Billed by the number of requests
`flux_sep`: Disused field
`bandwidth_sep`: Disused field
                     * @return CurrentPayType The current billing mode in effect:
`flux`: Billed by traffic
`bandwidth`: Billed by bandwidth
`request`: Billed by the number of requests
`flux_sep`: Disused field
`bandwidth_sep`: Disused field
                     */
                    std::string GetCurrentPayType() const;

                    /**
                     * 判断参数 CurrentPayType 是否已赋值
                     * @return CurrentPayType 是否已赋值
                     */
                    bool CurrentPayTypeHasBeenSet() const;

                private:

                    /**
                     * Billing modes:
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
`request`: Bill by the number of requests
`flux_sep`: Disused field
`bandwidth_sep`: Disused field
When you change a daily billing mode to another, and there is network usage on the day of change, this field shows the new billing mode, which takes effect from the next day. If there is no network usage on the day of change, this field shows the new billing mode directly.
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Billing cycle:
`day`: Daily
`month`: Monthly 
`hour`: Hourly 
                     */
                    std::string m_billingCycle;
                    bool m_billingCycleHasBeenSet;

                    /**
                     * `monthMax`: Billed by the monthly average of daily peak traffic (monthly settlement)
`day95`: Billed by the daily 95th percentile bandwidth (monthly settlement)
`month95`: Billed by the monthly 95th percentile bandwidth (monthly settlement)
`sum`: Billed by the total traffic/total requests (daily or monthly settlement)
`max`: Billed by the peak bandwidth (daily settlement)
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * Billing method for regions outside the Chinese mainland:
`all`: Unified billing for all regions
`multiple`: Region-specific billing
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * The current billing mode in effect:
`flux`: Billed by traffic
`bandwidth`: Billed by bandwidth
`request`: Billed by the number of requests
`flux_sep`: Disused field
`bandwidth_sep`: Disused field
                     */
                    std::string m_currentPayType;
                    bool m_currentPayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_
