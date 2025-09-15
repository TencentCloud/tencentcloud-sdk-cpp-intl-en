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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRICE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * EMR inquiry description
                */
                class EmrPrice : public AbstractModel
                {
                public:
                    EmrPrice();
                    ~EmrPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List price.
                     * @return OriginalCost List price.
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置List price.
                     * @param _originalCost List price.
                     * 
                     */
                    void SetOriginalCost(const std::string& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取Discounted price.
                     * @return DiscountCost Discounted price.
                     * 
                     */
                    std::string GetDiscountCost() const;

                    /**
                     * 设置Discounted price.
                     * @param _discountCost Discounted price.
                     * 
                     */
                    void SetDiscountCost(const std::string& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取Unit.
                     * @return Unit Unit.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit.
                     * @param _unit Unit.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取The queried spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PriceSpec The queried spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PriceResource GetPriceSpec() const;

                    /**
                     * 设置The queried spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _priceSpec The queried spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPriceSpec(const PriceResource& _priceSpec);

                    /**
                     * 判断参数 PriceSpec 是否已赋值
                     * @return PriceSpec 是否已赋值
                     * 
                     */
                    bool PriceSpecHasBeenSet() const;

                    /**
                     * 获取Whether spot instances are supported.
                     * @return SupportSpotPaid Whether spot instances are supported.
                     * 
                     */
                    bool GetSupportSpotPaid() const;

                    /**
                     * 设置Whether spot instances are supported.
                     * @param _supportSpotPaid Whether spot instances are supported.
                     * 
                     */
                    void SetSupportSpotPaid(const bool& _supportSpotPaid);

                    /**
                     * 判断参数 SupportSpotPaid 是否已赋值
                     * @return SupportSpotPaid 是否已赋值
                     * 
                     */
                    bool SupportSpotPaidHasBeenSet() const;

                private:

                    /**
                     * List price.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Discounted price.
                     */
                    std::string m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * Unit.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * The queried spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PriceResource m_priceSpec;
                    bool m_priceSpecHasBeenSet;

                    /**
                     * Whether spot instances are supported.
                     */
                    bool m_supportSpotPaid;
                    bool m_supportSpotPaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRICE_H_
