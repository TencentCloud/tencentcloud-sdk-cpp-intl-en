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


                    /**
                     * 获取Billing modes:
`flux`: bill-by-traffic
`bandwidth`: bill-by-bandwidth
When you switch the billing mode for a daily-billing-cycle account, if there is bandwidth usage on the day, this field indicates the billing mode that will take effect on the next day; otherwise, it indicates the billing mode that has already taken effect
                     * @return PayType Billing modes:
`flux`: bill-by-traffic
`bandwidth`: bill-by-bandwidth
When you switch the billing mode for a daily-billing-cycle account, if there is bandwidth usage on the day, this field indicates the billing mode that will take effect on the next day; otherwise, it indicates the billing mode that has already taken effect
                     */
                    std::string GetPayType() const;

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Billing cycle:
day: daily settlement
month: monthly settlement
                     * @return BillingCycle Billing cycle:
day: daily settlement
month: monthly settlement
                     */
                    std::string GetBillingCycle() const;

                    /**
                     * 判断参数 BillingCycle 是否已赋值
                     * @return BillingCycle 是否已赋值
                     */
                    bool BillingCycleHasBeenSet() const;

                    /**
                     * 获取Billing method:
monthMax: billed by the monthly average of daily peak traffic (monthly settlement)
day95: billed by the daily 95th percentile bandwidth (monthly settlement)
month95: billed by the monthly 95th percentile bandwidth (monthly settlement)
sum: billed by the total traffic (daily or monthly settlement)
max: billed by the peak bandwidth (daily settlement)
                     * @return StatType Billing method:
monthMax: billed by the monthly average of daily peak traffic (monthly settlement)
day95: billed by the daily 95th percentile bandwidth (monthly settlement)
month95: billed by the monthly 95th percentile bandwidth (monthly settlement)
sum: billed by the total traffic (daily or monthly settlement)
max: billed by the peak bandwidth (daily settlement)
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取Billing method outside Mainland China:
`all`: unified billing for all regions
`multiple`: separate billing for different regions
                     * @return RegionType Billing method outside Mainland China:
`all`: unified billing for all regions
`multiple`: separate billing for different regions
                     */
                    std::string GetRegionType() const;

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取Currently billing mode in effect:
`flux`: bill-by-traffic
`bandwidth`: bill-by-bandwidth
                     * @return CurrentPayType Currently billing mode in effect:
`flux`: bill-by-traffic
`bandwidth`: bill-by-bandwidth
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
`flux`: bill-by-traffic
`bandwidth`: bill-by-bandwidth
When you switch the billing mode for a daily-billing-cycle account, if there is bandwidth usage on the day, this field indicates the billing mode that will take effect on the next day; otherwise, it indicates the billing mode that has already taken effect
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Billing cycle:
day: daily settlement
month: monthly settlement
                     */
                    std::string m_billingCycle;
                    bool m_billingCycleHasBeenSet;

                    /**
                     * Billing method:
monthMax: billed by the monthly average of daily peak traffic (monthly settlement)
day95: billed by the daily 95th percentile bandwidth (monthly settlement)
month95: billed by the monthly 95th percentile bandwidth (monthly settlement)
sum: billed by the total traffic (daily or monthly settlement)
max: billed by the peak bandwidth (daily settlement)
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * Billing method outside Mainland China:
`all`: unified billing for all regions
`multiple`: separate billing for different regions
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * Currently billing mode in effect:
`flux`: bill-by-traffic
`bandwidth`: bill-by-bandwidth
                     */
                    std::string m_currentPayType;
                    bool m_currentPayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_
