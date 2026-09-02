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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRULEITEM_H_

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
                * Modifies a rule item
                */
                class ModifyRuleItem : public AbstractModel
                {
                public:
                    ModifyRuleItem();
                    ~ModifyRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule type
Enumeration values:
Dimension: dimension-level rule
category: Subitem-level rule
Severity: severity-level rule
                     * @return RuleType Rule type
Enumeration values:
Dimension: dimension-level rule
category: Subitem-level rule
Severity: severity-level rule
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type
Enumeration values:
Dimension: dimension-level rule
category: Subitem-level rule
Severity: severity-level rule
                     * @param _ruleType Rule type
Enumeration values:
Dimension: dimension-level rule
category: Subitem-level rule
Severity: severity-level rule
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
                     * 获取Dimension ID
                     * @return DimensionId Dimension ID
                     * 
                     */
                    std::string GetDimensionId() const;

                    /**
                     * 设置Dimension ID
                     * @param _dimensionId Dimension ID
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
                     * 获取Sub-item ID, category, and severity level are required.
                     * @return CategoryId Sub-item ID, category, and severity level are required.
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置Sub-item ID, category, and severity level are required.
                     * @param _categoryId Sub-item ID, category, and severity level are required.
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
                     * 获取severity level. Required.
Enumeration values:
critical: severe
High: high risk
Medium: medium-risk
low: low-risk
                     * @return Severity severity level. Required.
Enumeration values:
critical: severe
High: high risk
Medium: medium-risk
low: low-risk
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置severity level. Required.
Enumeration values:
critical: severe
High: high risk
Medium: medium-risk
low: low-risk
                     * @param _severity severity level. Required.
Enumeration values:
critical: severe
High: high risk
Medium: medium-risk
low: low-risk
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
                     * 获取Deduction limit
                     * @return MaxDeductScore Deduction limit
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置Deduction limit
                     * @param _maxDeductScore Deduction limit
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
                     * 获取Points deducted per time.
                     * @return DeductPerItem Points deducted per time.
                     * 
                     */
                    int64_t GetDeductPerItem() const;

                    /**
                     * 设置Points deducted per time.
                     * @param _deductPerItem Points deducted per time.
                     * 
                     */
                    void SetDeductPerItem(const int64_t& _deductPerItem);

                    /**
                     * 判断参数 DeductPerItem 是否已赋值
                     * @return DeductPerItem 是否已赋值
                     * 
                     */
                    bool DeductPerItemHasBeenSet() const;

                private:

                    /**
                     * Rule type
Enumeration values:
Dimension: dimension-level rule
category: Subitem-level rule
Severity: severity-level rule
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Dimension ID
                     */
                    std::string m_dimensionId;
                    bool m_dimensionIdHasBeenSet;

                    /**
                     * Sub-item ID, category, and severity level are required.
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * severity level. Required.
Enumeration values:
critical: severe
High: high risk
Medium: medium-risk
low: low-risk
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Deduction limit
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * Points deducted per time.
                     */
                    int64_t m_deductPerItem;
                    bool m_deductPerItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRULEITEM_H_
