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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * BlueprintPrice	Custom image price parameter.
                */
                class BlueprintPrice : public AbstractModel
                {
                public:
                    BlueprintPrice();
                    ~BlueprintPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original image unit price in USD.
                     * @return OriginalBlueprintPrice Original image unit price in USD.
                     * 
                     */
                    double GetOriginalBlueprintPrice() const;

                    /**
                     * 设置Original image unit price in USD.
                     * @param _originalBlueprintPrice Original image unit price in USD.
                     * 
                     */
                    void SetOriginalBlueprintPrice(const double& _originalBlueprintPrice);

                    /**
                     * 判断参数 OriginalBlueprintPrice 是否已赋值
                     * @return OriginalBlueprintPrice 是否已赋值
                     * 
                     */
                    bool OriginalBlueprintPriceHasBeenSet() const;

                    /**
                     * 获取Original image total price in USD.
                     * @return OriginalPrice Original image total price in USD.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original image total price in USD.
                     * @param _originalPrice Original image total price in USD.
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discount.
                     * @return Discount Discount.
                     * 
                     */
                    int64_t GetDiscount() const;

                    /**
                     * 设置Discount.
                     * @param _discount Discount.
                     * 
                     */
                    void SetDiscount(const int64_t& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Discounted image total price in USD.
                     * @return DiscountPrice Discounted image total price in USD.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted image total price in USD.
                     * @param _discountPrice Discounted image total price in USD.
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                private:

                    /**
                     * Original image unit price in USD.
                     */
                    double m_originalBlueprintPrice;
                    bool m_originalBlueprintPriceHasBeenSet;

                    /**
                     * Original image total price in USD.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount.
                     */
                    int64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted image total price in USD.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTPRICE_H_
