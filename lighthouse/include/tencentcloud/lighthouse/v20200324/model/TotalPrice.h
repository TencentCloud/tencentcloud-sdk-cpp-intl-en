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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TOTALPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TOTALPRICE_H_

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
                * Total price information
                */
                class TotalPrice : public AbstractModel
                {
                public:
                    TotalPrice();
                    ~TotalPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<P>Original total price.</p><p>unit: usd</p>.
                     * @return OriginalPrice <P>Original total price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置<P>Original total price.</p><p>unit: usd</p>.
                     * @param _originalPrice <P>Original total price.</p><p>unit: usd</p>.
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
                     * 获取<P>Total price after discount.</p><p>unit: usd</p>.
                     * @return DiscountPrice <P>Total price after discount.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置<P>Total price after discount.</p><p>unit: usd</p>.
                     * @param _discountPrice <P>Total price after discount.</p><p>unit: usd</p>.
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
                     * <P>Original total price.</p><p>unit: usd</p>.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <P>Total price after discount.</p><p>unit: usd</p>.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TOTALPRICE_H_
