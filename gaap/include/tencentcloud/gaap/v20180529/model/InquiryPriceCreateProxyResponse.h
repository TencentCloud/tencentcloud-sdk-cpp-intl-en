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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/BandwidthPriceGradient.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateProxy response structure.
                */
                class InquiryPriceCreateProxyResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateProxyResponse();
                    ~InquiryPriceCreateProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Basic price of connection in USD/day.
                     * @return ProxyDailyPrice Basic price of connection in USD/day.
                     * 
                     */
                    double GetProxyDailyPrice() const;

                    /**
                     * 判断参数 ProxyDailyPrice 是否已赋值
                     * @return ProxyDailyPrice 是否已赋值
                     * 
                     */
                    bool ProxyDailyPriceHasBeenSet() const;

                    /**
                     * 获取Tiered price of connection bandwidth.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthUnitPrice Tiered price of connection bandwidth.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BandwidthPriceGradient> GetBandwidthUnitPrice() const;

                    /**
                     * 判断参数 BandwidthUnitPrice 是否已赋值
                     * @return BandwidthUnitPrice 是否已赋值
                     * 
                     */
                    bool BandwidthUnitPriceHasBeenSet() const;

                    /**
                     * 获取Discounted basic price of connection in USD/day.
                     * @return DiscountProxyDailyPrice Discounted basic price of connection in USD/day.
                     * 
                     */
                    double GetDiscountProxyDailyPrice() const;

                    /**
                     * 判断参数 DiscountProxyDailyPrice 是否已赋值
                     * @return DiscountProxyDailyPrice 是否已赋值
                     * 
                     */
                    bool DiscountProxyDailyPriceHasBeenSet() const;

                    /**
                     * 获取Currency, which supports CNY, USD, etc.
                     * @return Currency Currency, which supports CNY, USD, etc.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取Connection traffic price in USD/GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FlowUnitPrice Connection traffic price in USD/GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFlowUnitPrice() const;

                    /**
                     * 判断参数 FlowUnitPrice 是否已赋值
                     * @return FlowUnitPrice 是否已赋值
                     * 
                     */
                    bool FlowUnitPriceHasBeenSet() const;

                    /**
                     * 获取Discounted connection traffic price in USD/GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DiscountFlowUnitPrice Discounted connection traffic price in USD/GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDiscountFlowUnitPrice() const;

                    /**
                     * 判断参数 DiscountFlowUnitPrice 是否已赋值
                     * @return DiscountFlowUnitPrice 是否已赋值
                     * 
                     */
                    bool DiscountFlowUnitPriceHasBeenSet() const;

                    /**
                     * 获取Dedicated BGP bandwidth price. Unit: USD/Mbps/day
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Cn2BandwidthPrice Dedicated BGP bandwidth price. Unit: USD/Mbps/day
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetCn2BandwidthPrice() const;

                    /**
                     * 判断参数 Cn2BandwidthPrice 是否已赋值
                     * @return Cn2BandwidthPrice 是否已赋值
                     * 
                     */
                    bool Cn2BandwidthPriceHasBeenSet() const;

                    /**
                     * 获取Dedicated BGP bandwidth discount price. Unit: USD/Mbps/day
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Cn2BandwidthPriceWithDiscount Dedicated BGP bandwidth discount price. Unit: USD/Mbps/day
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetCn2BandwidthPriceWithDiscount() const;

                    /**
                     * 判断参数 Cn2BandwidthPriceWithDiscount 是否已赋值
                     * @return Cn2BandwidthPriceWithDiscount 是否已赋值
                     * 
                     */
                    bool Cn2BandwidthPriceWithDiscountHasBeenSet() const;

                private:

                    /**
                     * Basic price of connection in USD/day.
                     */
                    double m_proxyDailyPrice;
                    bool m_proxyDailyPriceHasBeenSet;

                    /**
                     * Tiered price of connection bandwidth.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BandwidthPriceGradient> m_bandwidthUnitPrice;
                    bool m_bandwidthUnitPriceHasBeenSet;

                    /**
                     * Discounted basic price of connection in USD/day.
                     */
                    double m_discountProxyDailyPrice;
                    bool m_discountProxyDailyPriceHasBeenSet;

                    /**
                     * Currency, which supports CNY, USD, etc.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Connection traffic price in USD/GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_flowUnitPrice;
                    bool m_flowUnitPriceHasBeenSet;

                    /**
                     * Discounted connection traffic price in USD/GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_discountFlowUnitPrice;
                    bool m_discountFlowUnitPriceHasBeenSet;

                    /**
                     * Dedicated BGP bandwidth price. Unit: USD/Mbps/day
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    double m_cn2BandwidthPrice;
                    bool m_cn2BandwidthPriceHasBeenSet;

                    /**
                     * Dedicated BGP bandwidth discount price. Unit: USD/Mbps/day
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    double m_cn2BandwidthPriceWithDiscount;
                    bool m_cn2BandwidthPriceWithDiscountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYRESPONSE_H_
