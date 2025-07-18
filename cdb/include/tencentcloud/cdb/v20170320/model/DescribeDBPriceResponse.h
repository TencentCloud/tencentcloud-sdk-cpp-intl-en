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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICERESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBPrice response structure.
                */
                class DescribeDBPriceResponse : public AbstractModel
                {
                public:
                    DescribeDBPriceResponse();
                    ~DescribeDBPriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance price. If `Currency` is set to `CNY`, the unit will be 0.01 CNY. If `Currency` is set to `USD`, the unit will be US Cent.
                     * @return Price Instance price. If `Currency` is set to `CNY`, the unit will be 0.01 CNY. If `Currency` is set to `USD`, the unit will be US Cent.
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Original price of the instance. If `Currency` is set to `CNY`, the unit will be 0.01 CNY. If `Currency` is set to `USD`, the unit will be US Cent.
                     * @return OriginalPrice Original price of the instance. If `Currency` is set to `CNY`, the unit will be 0.01 CNY. If `Currency` is set to `USD`, the unit will be US Cent.
                     * 
                     */
                    int64_t GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Currency: `CNY`, `USD`.
                     * @return Currency Currency: `CNY`, `USD`.
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
                     * Instance price. If `Currency` is set to `CNY`, the unit will be 0.01 CNY. If `Currency` is set to `USD`, the unit will be US Cent.
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Original price of the instance. If `Currency` is set to `CNY`, the unit will be 0.01 CNY. If `Currency` is set to `USD`, the unit will be US Cent.
                     */
                    int64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Currency: `CNY`, `USD`.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICERESPONSE_H_
