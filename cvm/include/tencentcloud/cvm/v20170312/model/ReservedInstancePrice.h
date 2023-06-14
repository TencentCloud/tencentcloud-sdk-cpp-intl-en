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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Price of the reserved instance. Currently, RIs are only offered to beta users.
                */
                class ReservedInstancePrice : public AbstractModel
                {
                public:
                    ReservedInstancePrice();
                    ~ReservedInstancePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original upfront payment, in USD.
                     * @return OriginalFixedPrice Original upfront payment, in USD.
                     * 
                     */
                    double GetOriginalFixedPrice() const;

                    /**
                     * 设置Original upfront payment, in USD.
                     * @param _originalFixedPrice Original upfront payment, in USD.
                     * 
                     */
                    void SetOriginalFixedPrice(const double& _originalFixedPrice);

                    /**
                     * 判断参数 OriginalFixedPrice 是否已赋值
                     * @return OriginalFixedPrice 是否已赋值
                     * 
                     */
                    bool OriginalFixedPriceHasBeenSet() const;

                    /**
                     * 获取Discounted upfront payment, in USD.
                     * @return DiscountFixedPrice Discounted upfront payment, in USD.
                     * 
                     */
                    double GetDiscountFixedPrice() const;

                    /**
                     * 设置Discounted upfront payment, in USD.
                     * @param _discountFixedPrice Discounted upfront payment, in USD.
                     * 
                     */
                    void SetDiscountFixedPrice(const double& _discountFixedPrice);

                    /**
                     * 判断参数 DiscountFixedPrice 是否已赋值
                     * @return DiscountFixedPrice 是否已赋值
                     * 
                     */
                    bool DiscountFixedPriceHasBeenSet() const;

                    /**
                     * 获取Original subsequent unit price, in USD/hr.
                     * @return OriginalUsagePrice Original subsequent unit price, in USD/hr.
                     * 
                     */
                    double GetOriginalUsagePrice() const;

                    /**
                     * 设置Original subsequent unit price, in USD/hr.
                     * @param _originalUsagePrice Original subsequent unit price, in USD/hr.
                     * 
                     */
                    void SetOriginalUsagePrice(const double& _originalUsagePrice);

                    /**
                     * 判断参数 OriginalUsagePrice 是否已赋值
                     * @return OriginalUsagePrice 是否已赋值
                     * 
                     */
                    bool OriginalUsagePriceHasBeenSet() const;

                    /**
                     * 获取Discounted subsequent unit price, in USD/hr.
                     * @return DiscountUsagePrice Discounted subsequent unit price, in USD/hr.
                     * 
                     */
                    double GetDiscountUsagePrice() const;

                    /**
                     * 设置Discounted subsequent unit price, in USD/hr.
                     * @param _discountUsagePrice Discounted subsequent unit price, in USD/hr.
                     * 
                     */
                    void SetDiscountUsagePrice(const double& _discountUsagePrice);

                    /**
                     * 判断参数 DiscountUsagePrice 是否已赋值
                     * @return DiscountUsagePrice 是否已赋值
                     * 
                     */
                    bool DiscountUsagePriceHasBeenSet() const;

                private:

                    /**
                     * Original upfront payment, in USD.
                     */
                    double m_originalFixedPrice;
                    bool m_originalFixedPriceHasBeenSet;

                    /**
                     * Discounted upfront payment, in USD.
                     */
                    double m_discountFixedPrice;
                    bool m_discountFixedPriceHasBeenSet;

                    /**
                     * Original subsequent unit price, in USD/hr.
                     */
                    double m_originalUsagePrice;
                    bool m_originalUsagePriceHasBeenSet;

                    /**
                     * Discounted subsequent unit price, in USD/hr.
                     */
                    double m_discountUsagePrice;
                    bool m_discountUsagePriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICE_H_
