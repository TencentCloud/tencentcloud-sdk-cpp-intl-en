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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_PREPAYPRICE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_PREPAYPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The cost of a prepaid order.
                */
                class PrepayPrice : public AbstractModel
                {
                public:
                    PrepayPrice();
                    ~PrepayPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     * @return OriginalPrice Original price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     * @param OriginalPrice Original price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discount price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     * @return DiscountPrice Discount price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discount price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     * @param DiscountPrice Discount price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     */
                    bool DiscountPriceHasBeenSet() const;

                private:

                    /**
                     * Original price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount price of the advanced payment for a prepaid cloud disk or snapshot (in CNY).
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_PREPAYPRICE_H_
