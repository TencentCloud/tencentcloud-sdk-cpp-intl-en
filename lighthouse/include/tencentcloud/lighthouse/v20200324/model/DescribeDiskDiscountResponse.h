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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiscountDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDiskDiscount response structure.
                */
                class DescribeDiskDiscountResponse : public AbstractModel
                {
                public:
                    DescribeDiskDiscountResponse();
                    ~DescribeDiskDiscountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Currency: CNY, USD.
                     * @return Currency Currency: CNY, USD.
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
                     * 获取Discount tier details. The information of each tier includes the duration, discounted quantity, total price, discounted price, and discount details (user discount, official website discount, or final discount).
                     * @return DiscountDetail Discount tier details. The information of each tier includes the duration, discounted quantity, total price, discounted price, and discount details (user discount, official website discount, or final discount).
                     * 
                     */
                    std::vector<DiscountDetail> GetDiscountDetail() const;

                    /**
                     * 判断参数 DiscountDetail 是否已赋值
                     * @return DiscountDetail 是否已赋值
                     * 
                     */
                    bool DiscountDetailHasBeenSet() const;

                private:

                    /**
                     * Currency: CNY, USD.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Discount tier details. The information of each tier includes the duration, discounted quantity, total price, discounted price, and discount details (user discount, official website discount, or final discount).
                     */
                    std::vector<DiscountDetail> m_discountDetail;
                    bool m_discountDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTRESPONSE_H_
