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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CategoryItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dimension deduction items
                */
                class DimensionItem : public AbstractModel
                {
                public:
                    DimensionItem();
                    ~DimensionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dimension ID
Enumeration value:
risk_governance: Risk Governance
threat_detection: threat detection
protection configuration
                     * @return DimensionId Dimension ID
Enumeration value:
risk_governance: Risk Governance
threat_detection: threat detection
protection configuration
                     * 
                     */
                    std::string GetDimensionId() const;

                    /**
                     * 设置Dimension ID
Enumeration value:
risk_governance: Risk Governance
threat_detection: threat detection
protection configuration
                     * @param _dimensionId Dimension ID
Enumeration value:
risk_governance: Risk Governance
threat_detection: threat detection
protection configuration
                     * 
                     */
                    void SetDimensionId(const std::string& _dimensionId);

                    /**
                     * 判断参数 DimensionId 是否已赋值
                     * @return DimensionId 是否已赋值
                     * 
                     */
                    bool DimensionIdHasBeenSet() const;

                    /**
                     * 获取Dimension Name
                     * @return DimensionName Dimension Name
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置Dimension Name
                     * @param _dimensionName Dimension Name
                     * 
                     */
                    void SetDimensionName(const std::string& _dimensionName);

                    /**
                     * 判断参数 DimensionName 是否已赋值
                     * @return DimensionName 是否已赋值
                     * 
                     */
                    bool DimensionNameHasBeenSet() const;

                    /**
                     * 获取Dimension deduction limit
                     * @return MaxDeductScore Dimension deduction limit
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置Dimension deduction limit
                     * @param _maxDeductScore Dimension deduction limit
                     * 
                     */
                    void SetMaxDeductScore(const int64_t& _maxDeductScore);

                    /**
                     * 判断参数 MaxDeductScore 是否已赋值
                     * @return MaxDeductScore 是否已赋值
                     * 
                     */
                    bool MaxDeductScoreHasBeenSet() const;

                    /**
                     * 获取Actual dimension deduction
                     * @return DeductScore Actual dimension deduction
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 设置Actual dimension deduction
                     * @param _deductScore Actual dimension deduction
                     * 
                     */
                    void SetDeductScore(const int64_t& _deductScore);

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                    /**
                     * 获取List of subitems
                     * @return Categories List of subitems
                     * 
                     */
                    std::vector<CategoryItem> GetCategories() const;

                    /**
                     * 设置List of subitems
                     * @param _categories List of subitems
                     * 
                     */
                    void SetCategories(const std::vector<CategoryItem>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                private:

                    /**
                     * Dimension ID
Enumeration value:
risk_governance: Risk Governance
threat_detection: threat detection
protection configuration
                     */
                    std::string m_dimensionId;
                    bool m_dimensionIdHasBeenSet;

                    /**
                     * Dimension Name
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                    /**
                     * Dimension deduction limit
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * Actual dimension deduction
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                    /**
                     * List of subitems
                     */
                    std::vector<CategoryItem> m_categories;
                    bool m_categoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONITEM_H_
