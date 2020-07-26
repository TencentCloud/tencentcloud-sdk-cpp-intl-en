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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PriceResource.h>


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


                    /**
                     * 获取Original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginalCost Original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取Discounted price.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DiscountCost Discounted price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDiscountCost() const;

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取Time unit of scale-out. Valid values:
<li>s: seconds.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Unit Time unit of scale-out. Valid values:
<li>s: seconds.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUnit() const;

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Node specification queried for price.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PriceSpec Node specification queried for price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PriceResource GetPriceSpec() const;

                    /**
                     * 判断参数 PriceSpec 是否已赋值
                     * @return PriceSpec 是否已赋值
                     */
                    bool PriceSpecHasBeenSet() const;

                private:

                    /**
                     * Original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Discounted price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * Time unit of scale-out. Valid values:
<li>s: seconds.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Node specification queried for price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PriceResource m_priceSpec;
                    bool m_priceSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_
