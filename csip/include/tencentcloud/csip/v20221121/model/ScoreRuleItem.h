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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCORERULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCORERULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Scoring rule item
                */
                class ScoreRuleItem : public AbstractModel
                {
                public:
                    ScoreRuleItem();
                    ~ScoreRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule type<br>Enumeration value:<br>dimension: dimensional rule<br>category: category-level rule<br>severity: severity-level rule</p>
                     * @return RuleType <p>Rule type<br>Enumeration value:<br>dimension: dimensional rule<br>category: category-level rule<br>severity: severity-level rule</p>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>Rule type<br>Enumeration value:<br>dimension: dimensional rule<br>category: category-level rule<br>severity: severity-level rule</p>
                     * @param _ruleType <p>Rule type<br>Enumeration value:<br>dimension: dimensional rule<br>category: category-level rule<br>severity: severity-level rule</p>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Dimension ID</p>
                     * @return DimensionId <p>Dimension ID</p>
                     * 
                     */
                    std::string GetDimensionId() const;

                    /**
                     * 设置<p>Dimension ID</p>
                     * @param _dimensionId <p>Dimension ID</p>
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
                     * 获取<p>Dimension name</p>
                     * @return DimensionName <p>Dimension name</p>
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置<p>Dimension name</p>
                     * @param _dimensionName <p>Dimension name</p>
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
                     * 获取<p>Sub-item ID.</p>
                     * @return CategoryId <p>Sub-item ID.</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Sub-item ID.</p>
                     * @param _categoryId <p>Sub-item ID.</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>Sub-item point deduction rule description</p>
                     * @return CategoryDesc <p>Sub-item point deduction rule description</p>
                     * 
                     */
                    std::string GetCategoryDesc() const;

                    /**
                     * 设置<p>Sub-item point deduction rule description</p>
                     * @param _categoryDesc <p>Sub-item point deduction rule description</p>
                     * 
                     */
                    void SetCategoryDesc(const std::string& _categoryDesc);

                    /**
                     * 判断参数 CategoryDesc 是否已赋值
                     * @return CategoryDesc 是否已赋值
                     * 
                     */
                    bool CategoryDescHasBeenSet() const;

                    /**
                     * 获取<p>Sub-item name.</p>
                     * @return CategoryName <p>Sub-item name.</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>Sub-item name.</p>
                     * @param _categoryName <p>Sub-item name.</p>
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取<p>Severity<br>Enumeration values:<br>critical: Critical<br>high: High risk<br>medium: Medium risk<br>low: Low risk</p>
                     * @return Severity <p>Severity<br>Enumeration values:<br>critical: Critical<br>high: High risk<br>medium: Medium risk<br>low: Low risk</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>Severity<br>Enumeration values:<br>critical: Critical<br>high: High risk<br>medium: Medium risk<br>low: Low risk</p>
                     * @param _severity <p>Severity<br>Enumeration values:<br>critical: Critical<br>high: High risk<br>medium: Medium risk<br>low: Low risk</p>
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>Deduction limit</p>
                     * @return MaxDeductScore <p>Deduction limit</p>
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置<p>Deduction limit</p>
                     * @param _maxDeductScore <p>Deduction limit</p>
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
                     * 获取<p>Points deducted per time.</p>
                     * @return DeductPerItem <p>Points deducted per time.</p>
                     * 
                     */
                    int64_t GetDeductPerItem() const;

                    /**
                     * 设置<p>Points deducted per time.</p>
                     * @param _deductPerItem <p>Points deducted per time.</p>
                     * 
                     */
                    void SetDeductPerItem(const int64_t& _deductPerItem);

                    /**
                     * 判断参数 DeductPerItem 是否已赋值
                     * @return DeductPerItem 是否已赋值
                     * 
                     */
                    bool DeductPerItemHasBeenSet() const;

                    /**
                     * 获取<p>Whether individual deduction is non-editable (true for sub-items under Protection Configuration Dimension)</p>
                     * @return DeductPerItemDisabled <p>Whether individual deduction is non-editable (true for sub-items under Protection Configuration Dimension)</p>
                     * 
                     */
                    bool GetDeductPerItemDisabled() const;

                    /**
                     * 设置<p>Whether individual deduction is non-editable (true for sub-items under Protection Configuration Dimension)</p>
                     * @param _deductPerItemDisabled <p>Whether individual deduction is non-editable (true for sub-items under Protection Configuration Dimension)</p>
                     * 
                     */
                    void SetDeductPerItemDisabled(const bool& _deductPerItemDisabled);

                    /**
                     * 判断参数 DeductPerItemDisabled 是否已赋值
                     * @return DeductPerItemDisabled 是否已赋值
                     * 
                     */
                    bool DeductPerItemDisabledHasBeenSet() const;

                    /**
                     * 获取<p>Sorting serial number</p>
                     * @return SortOrder <p>Sorting serial number</p>
                     * 
                     */
                    int64_t GetSortOrder() const;

                    /**
                     * 设置<p>Sorting serial number</p>
                     * @param _sortOrder <p>Sorting serial number</p>
                     * 
                     */
                    void SetSortOrder(const int64_t& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * <p>Rule type<br>Enumeration value:<br>dimension: dimensional rule<br>category: category-level rule<br>severity: severity-level rule</p>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Dimension ID</p>
                     */
                    std::string m_dimensionId;
                    bool m_dimensionIdHasBeenSet;

                    /**
                     * <p>Dimension name</p>
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                    /**
                     * <p>Sub-item ID.</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Sub-item point deduction rule description</p>
                     */
                    std::string m_categoryDesc;
                    bool m_categoryDescHasBeenSet;

                    /**
                     * <p>Sub-item name.</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>Severity<br>Enumeration values:<br>critical: Critical<br>high: High risk<br>medium: Medium risk<br>low: Low risk</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>Deduction limit</p>
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * <p>Points deducted per time.</p>
                     */
                    int64_t m_deductPerItem;
                    bool m_deductPerItemHasBeenSet;

                    /**
                     * <p>Whether individual deduction is non-editable (true for sub-items under Protection Configuration Dimension)</p>
                     */
                    bool m_deductPerItemDisabled;
                    bool m_deductPerItemDisabledHasBeenSet;

                    /**
                     * <p>Sorting serial number</p>
                     */
                    int64_t m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCORERULEITEM_H_
