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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICERESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrice response structure.
                */
                class DescribePriceResponse : public AbstractModel
                {
                public:
                    DescribePriceResponse();
                    ~DescribePriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Original price  
* Unit: Cent (default). If the request parameter contains `AmountUnit`, see `AmountUnit` description.
* Currency: CNY (Chinese site), USD (international site)
                     * @return OriginalPrice Original price  
* Unit: Cent (default). If the request parameter contains `AmountUnit`, see `AmountUnit` description.
* Currency: CNY (Chinese site), USD (international site)
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
                     * 获取The actual price may be different from the original price due to discounts. 
* Unit: Cent (default). If the request parameter contains `AmountUnit`, see `AmountUnit` description.
* Currency: CNY (Chinese site), USD (international site)
                     * @return Price The actual price may be different from the original price due to discounts. 
* Unit: Cent (default). If the request parameter contains `AmountUnit`, see `AmountUnit` description.
* Currency: CNY (Chinese site), USD (international site)
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * Original price  
* Unit: Cent (default). If the request parameter contains `AmountUnit`, see `AmountUnit` description.
* Currency: CNY (Chinese site), USD (international site)
                     */
                    int64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * The actual price may be different from the original price due to discounts. 
* Unit: Cent (default). If the request parameter contains `AmountUnit`, see `AmountUnit` description.
* Currency: CNY (Chinese site), USD (international site)
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICERESPONSE_H_
