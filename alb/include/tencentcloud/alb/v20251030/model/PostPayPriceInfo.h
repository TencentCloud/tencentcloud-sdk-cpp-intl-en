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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_POSTPAYPRICEINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_POSTPAYPRICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Describes the price information of postpaid billing items.
                */
                class PostPayPriceInfo : public AbstractModel
                {
                public:
                    PostPayPriceInfo();
                    ~PostPayPriceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Discount, such as 20.0 representing 80% off.
                     * @return Discount Discount, such as 20.0 representing 80% off.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Discount, such as 20.0 representing 80% off.
                     * @param _discount Discount, such as 20.0 representing 80% off.
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Unit price, in CNY.
                     * @return UnitPrice Unit price, in CNY.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Unit price, in CNY.
                     * @param _unitPrice Unit price, in CNY.
                     * 
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取Discounted unit price. Unit: CNY.
                     * @return UnitPriceDiscount Discounted unit price. Unit: CNY.
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discounted unit price. Unit: CNY.
                     * @param _unitPriceDiscount Discounted unit price. Unit: CNY.
                     * 
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                private:

                    /**
                     * Discount, such as 20.0 representing 80% off.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Unit price, in CNY.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Discounted unit price. Unit: CNY.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_POSTPAYPRICEINFO_H_
