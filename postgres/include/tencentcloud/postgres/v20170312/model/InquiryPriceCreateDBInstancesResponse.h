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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateDBInstances response structure.
                */
                class InquiryPriceCreateDBInstancesResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesResponse();
                    ~InquiryPriceCreateDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Published price in US Cent
                     * @return OriginalPrice Published price in US Cent
                     * 
                     */
                    uint64_t GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discounted total amount in US Cent
                     * @return Price Discounted total amount in US Cent
                     * 
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Currency, such as USD.
                     * @return Currency Currency, such as USD.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * Published price in US Cent
                     */
                    uint64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discounted total amount in US Cent
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Currency, such as USD.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_
