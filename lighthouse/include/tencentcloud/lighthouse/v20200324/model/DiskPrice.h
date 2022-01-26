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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKPRICE_H_

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
                * Cloud disk price
                */
                class DiskPrice : public AbstractModel
                {
                public:
                    DiskPrice();
                    ~DiskPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud disk unit price.
                     * @return OriginalDiskPrice Cloud disk unit price.
                     */
                    double GetOriginalDiskPrice() const;

                    /**
                     * 设置Cloud disk unit price.
                     * @param OriginalDiskPrice Cloud disk unit price.
                     */
                    void SetOriginalDiskPrice(const double& _originalDiskPrice);

                    /**
                     * 判断参数 OriginalDiskPrice 是否已赋值
                     * @return OriginalDiskPrice 是否已赋值
                     */
                    bool OriginalDiskPriceHasBeenSet() const;

                    /**
                     * 获取Total cloud disk price.
                     * @return OriginalPrice Total cloud disk price.
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Total cloud disk price.
                     * @param OriginalPrice Total cloud disk price.
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
                    double GetDiscount() const;

                    /**
                     * 设置Discount.
                     * @param Discount Discount.
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Discounted total price.
                     * @return DiscountPrice Discounted total price.
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted total price.
                     * @param DiscountPrice Discounted total price.
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     */
                    bool DiscountPriceHasBeenSet() const;

                private:

                    /**
                     * Cloud disk unit price.
                     */
                    double m_originalDiskPrice;
                    bool m_originalDiskPriceHasBeenSet;

                    /**
                     * Total cloud disk price.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted total price.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKPRICE_H_
