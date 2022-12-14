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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PRICEDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pricing details
                */
                class PriceDetail : public AbstractModel
                {
                public:
                    PriceDetail();
                    ~PriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The node ID
                     * @return ResourceId The node ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The node ID
                     * @param ResourceId The node ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取The price formula
                     * @return Formula The price formula
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置The price formula
                     * @param Formula The price formula
                     */
                    void SetFormula(const std::string& _formula);

                    /**
                     * 判断参数 Formula 是否已赋值
                     * @return Formula 是否已赋值
                     */
                    bool FormulaHasBeenSet() const;

                    /**
                     * 获取The original price
                     * @return OriginalCost The original price
                     */
                    double GetOriginalCost() const;

                    /**
                     * 设置The original price
                     * @param OriginalCost The original price
                     */
                    void SetOriginalCost(const double& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取The discount price
                     * @return DiscountCost The discount price
                     */
                    double GetDiscountCost() const;

                    /**
                     * 设置The discount price
                     * @param DiscountCost The discount price
                     */
                    void SetDiscountCost(const double& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     */
                    bool DiscountCostHasBeenSet() const;

                private:

                    /**
                     * The node ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * The price formula
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * The original price
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * The discount price
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PRICEDETAIL_H_
