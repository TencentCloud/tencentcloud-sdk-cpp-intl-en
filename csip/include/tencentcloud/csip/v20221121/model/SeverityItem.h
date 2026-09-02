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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SEVERITYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SEVERITYITEM_H_

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
                * Deduction detail by severity
                */
                class SeverityItem : public AbstractModel
                {
                public:
                    SeverityItem();
                    ~SeverityItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk level
Enumeration values:
critical: severe
high: high risk
Medium: medium risk
low: low-risk
                     * @return Severity Risk level
Enumeration values:
critical: severe
high: high risk
Medium: medium risk
low: low-risk
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置Risk level
Enumeration values:
critical: severe
high: high risk
Medium: medium risk
low: low-risk
                     * @param _severity Risk level
Enumeration values:
critical: severe
high: high risk
Medium: medium risk
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
                     * 获取Risk level name in Chinese
                     * @return SeverityName Risk level name in Chinese
                     * 
                     */
                    std::string GetSeverityName() const;

                    /**
                     * 设置Risk level name in Chinese
                     * @param _severityName Risk level name in Chinese
                     * 
                     */
                    void SetSeverityName(const std::string& _severityName);

                    /**
                     * 判断参数 SeverityName 是否已赋值
                     * @return SeverityName 是否已赋值
                     * 
                     */
                    bool SeverityNameHasBeenSet() const;

                    /**
                     * 获取Number of risks at this level
                     * @return RiskCount Number of risks at this level
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置Number of risks at this level
                     * @param _riskCount Number of risks at this level
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

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

                    /**
                     * 获取Severity deduction limit
                     * @return MaxDeductScore Severity deduction limit
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置Severity deduction limit
                     * @param _maxDeductScore Severity deduction limit
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
                     * 获取Actual point deduction
                     * @return DeductScore Actual point deduction
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 设置Actual point deduction
                     * @param _deductScore Actual point deduction
                     * 
                     */
                    void SetDeductScore(const int64_t& _deductScore);

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                private:

                    /**
                     * Risk level
Enumeration values:
critical: severe
high: high risk
Medium: medium risk
low: low-risk
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Risk level name in Chinese
                     */
                    std::string m_severityName;
                    bool m_severityNameHasBeenSet;

                    /**
                     * Number of risks at this level
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Points deducted per time.
                     */
                    int64_t m_deductPerItem;
                    bool m_deductPerItemHasBeenSet;

                    /**
                     * Severity deduction limit
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * Actual point deduction
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SEVERITYITEM_H_
