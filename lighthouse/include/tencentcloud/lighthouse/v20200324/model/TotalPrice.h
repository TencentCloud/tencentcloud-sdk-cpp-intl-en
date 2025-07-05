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
                     * 获取Total original price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginalPrice Total original price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Total original price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _originalPrice Total original price
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Total discounted price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DiscountPrice Total discounted price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Total discounted price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _discountPrice Total discounted price
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * Total original price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Total discounted price
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TOTALPRICE_H_
