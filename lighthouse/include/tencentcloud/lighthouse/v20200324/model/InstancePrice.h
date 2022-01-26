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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_

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
                * Price information of Lighthouse instances
                */
                class InstancePrice : public AbstractModel
                {
                public:
                    InstancePrice();
                    ~InstancePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original package unit price.
                     * @return OriginalBundlePrice Original package unit price.
                     */
                    double GetOriginalBundlePrice() const;

                    /**
                     * 设置Original package unit price.
                     * @param OriginalBundlePrice Original package unit price.
                     */
                    void SetOriginalBundlePrice(const double& _originalBundlePrice);

                    /**
                     * 判断参数 OriginalBundlePrice 是否已赋值
                     * @return OriginalBundlePrice 是否已赋值
                     */
                    bool OriginalBundlePriceHasBeenSet() const;

                    /**
                     * 获取Original price.
                     * @return OriginalPrice Original price.
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price.
                     * @param OriginalPrice Original price.
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discount.
                     * @return Discount Discount.
                     */
                    int64_t GetDiscount() const;

                    /**
                     * 设置Discount.
                     * @param Discount Discount.
                     */
                    void SetDiscount(const int64_t& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Discounted price.
                     * @return DiscountPrice Discounted price.
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted price.
                     * @param DiscountPrice Discounted price.
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     */
                    bool DiscountPriceHasBeenSet() const;

                private:

                    /**
                     * Original package unit price.
                     */
                    double m_originalBundlePrice;
                    bool m_originalBundlePriceHasBeenSet;

                    /**
                     * Original price.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount.
                     */
                    int64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted price.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
