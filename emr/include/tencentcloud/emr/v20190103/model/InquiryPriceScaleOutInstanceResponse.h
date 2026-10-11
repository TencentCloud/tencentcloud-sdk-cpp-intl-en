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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PriceResource.h>
#include <tencentcloud/emr/v20190103/model/EmrPrice.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceScaleOutInstance response structure.
                */
                class InquiryPriceScaleOutInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceScaleOutInstanceResponse();
                    ~InquiryPriceScaleOutInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Original price (CNY).</p>
                     * @return OriginalCost <p>Original price (CNY).</p>
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取<p>Discounted price (CNY).</p>
                     * @return DiscountCost <p>Discounted price (CNY).</p>
                     * 
                     */
                    std::string GetDiscountCost() const;

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取<p>Time unit for the scale-out. Valid values:</p><li>s: indicates second.</li><li>m: indicates month.</li>
                     * @return Unit <p>Time unit for the scale-out. Valid values:</p><li>s: indicates second.</li><li>m: indicates month.</li>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>Node specifications for price inquiry.</p>
                     * @return PriceSpec <p>Node specifications for price inquiry.</p>
                     * 
                     */
                    PriceResource GetPriceSpec() const;

                    /**
                     * 判断参数 PriceSpec 是否已赋值
                     * @return PriceSpec 是否已赋值
                     * 
                     */
                    bool PriceSpecHasBeenSet() const;

                    /**
                     * 获取<p>Price inquiry results for multiple specifications in the input parameter MultipleResources. Other output parameters return the inquiry result of the first specifications.</p>
                     * @return MultipleEmrPrice <p>Price inquiry results for multiple specifications in the input parameter MultipleResources. Other output parameters return the inquiry result of the first specifications.</p>
                     * 
                     */
                    std::vector<EmrPrice> GetMultipleEmrPrice() const;

                    /**
                     * 判断参数 MultipleEmrPrice 是否已赋值
                     * @return MultipleEmrPrice 是否已赋值
                     * 
                     */
                    bool MultipleEmrPriceHasBeenSet() const;

                private:

                    /**
                     * <p>Original price (CNY).</p>
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * <p>Discounted price (CNY).</p>
                     */
                    std::string m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * <p>Time unit for the scale-out. Valid values:</p><li>s: indicates second.</li><li>m: indicates month.</li>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>Node specifications for price inquiry.</p>
                     */
                    PriceResource m_priceSpec;
                    bool m_priceSpecHasBeenSet;

                    /**
                     * <p>Price inquiry results for multiple specifications in the input parameter MultipleResources. Other output parameters return the inquiry result of the first specifications.</p>
                     */
                    std::vector<EmrPrice> m_multipleEmrPrice;
                    bool m_multipleEmrPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_
