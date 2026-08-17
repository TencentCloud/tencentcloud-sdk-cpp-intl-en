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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateInstance response structure.
                */
                class InquiryPriceCreateInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateInstanceResponse();
                    ~InquiryPriceCreateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Discounted price.</p>
                     * @return Price <p>Discounted price.</p>
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取<p>High-precision discounted price</p>
                     * @return HighPrecisionPrice <p>High-precision discounted price</p>
                     * 
                     */
                    double GetHighPrecisionPrice() const;

                    /**
                     * 判断参数 HighPrecisionPrice 是否已赋值
                     * @return HighPrecisionPrice 是否已赋值
                     * 
                     */
                    bool HighPrecisionPriceHasBeenSet() const;

                    /**
                     * 获取<p>Original price</p>
                     * @return OriginalPrice <p>Original price</p>
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取<p>High-precision original price</p>
                     * @return HighPrecisionOriginalPrice <p>High-precision original price</p>
                     * 
                     */
                    double GetHighPrecisionOriginalPrice() const;

                    /**
                     * 判断参数 HighPrecisionOriginalPrice 是否已赋值
                     * @return HighPrecisionOriginalPrice 是否已赋值
                     * 
                     */
                    bool HighPrecisionOriginalPriceHasBeenSet() const;

                    /**
                     * 获取<p>Currency</p>
                     * @return Currency <p>Currency</p>
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
                     * 获取<p>Price amount unit</p><ul><li>pent: cent</li><li>microPent: microcent</li></ul>
                     * @return AmountUnit <p>Price amount unit</p><ul><li>pent: cent</li><li>microPent: microcent</li></ul>
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

                private:

                    /**
                     * <p>Discounted price.</p>
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * <p>High-precision discounted price</p>
                     */
                    double m_highPrecisionPrice;
                    bool m_highPrecisionPriceHasBeenSet;

                    /**
                     * <p>Original price</p>
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <p>High-precision original price</p>
                     */
                    double m_highPrecisionOriginalPrice;
                    bool m_highPrecisionOriginalPriceHasBeenSet;

                    /**
                     * <p>Currency</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>Price amount unit</p><ul><li>pent: cent</li><li>microPent: microcent</li></ul>
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCERESPONSE_H_
