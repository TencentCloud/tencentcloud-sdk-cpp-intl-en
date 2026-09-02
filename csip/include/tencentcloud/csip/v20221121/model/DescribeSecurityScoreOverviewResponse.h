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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCOREOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCOREOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DimensionItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSecurityScoreOverview response structure.
                */
                class DescribeSecurityScoreOverviewResponse : public AbstractModel
                {
                public:
                    DescribeSecurityScoreOverviewResponse();
                    ~DescribeSecurityScoreOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Security score<br>Value range: [0, 100]</p>
                     * @return Score <p>Security score<br>Value range: [0, 100]</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>Security level<br>Enumeration values:<br>safe: safe (90-100 points)<br>good: good (70-89 points)<br>medium: general (40-69 points)<br>danger: dangerous (0-39 points)</p>
                     * @return Level <p>Security level<br>Enumeration values:<br>safe: safe (90-100 points)<br>good: good (70-89 points)<br>medium: general (40-69 points)<br>danger: dangerous (0-39 points)</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Score status<br>Enumeration values:<br>success: All data sources are normal<br>partial_error: Some data sources used cache<br>stale: Used the last complete snapshot<br>error: Unable to calculate</p>
                     * @return ScoreStatus <p>Score status<br>Enumeration values:<br>success: All data sources are normal<br>partial_error: Some data sources used cache<br>stale: Used the last complete snapshot<br>error: Unable to calculate</p>
                     * 
                     */
                    std::string GetScoreStatus() const;

                    /**
                     * 判断参数 ScoreStatus 是否已赋值
                     * @return ScoreStatus 是否已赋值
                     * 
                     */
                    bool ScoreStatusHasBeenSet() const;

                    /**
                     * 获取<p>Initial score<br>Default value: 100</p>
                     * @return InitialScore <p>Initial score<br>Default value: 100</p>
                     * 
                     */
                    int64_t GetInitialScore() const;

                    /**
                     * 判断参数 InitialScore 是否已赋值
                     * @return InitialScore 是否已赋值
                     * 
                     */
                    bool InitialScoreHasBeenSet() const;

                    /**
                     * 获取<p>Number of categories with risks (it is advisable to process category X risks as soon as possible)</p>
                     * @return RiskCategoryCount <p>Number of categories with risks (it is advisable to process category X risks as soon as possible)</p>
                     * 
                     */
                    int64_t GetRiskCategoryCount() const;

                    /**
                     * 判断参数 RiskCategoryCount 是否已赋值
                     * @return RiskCategoryCount 是否已赋值
                     * 
                     */
                    bool RiskCategoryCountHasBeenSet() const;

                    /**
                     * 获取<p>Total point deduction.</p>
                     * @return DeductScore <p>Total point deduction.</p>
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                    /**
                     * 获取<p>Calculation time<br>Parameter format: YYYY-MM-DDTHH:mm:ss+08:00</p>
                     * @return CalculatedAt <p>Calculation time<br>Parameter format: YYYY-MM-DDTHH:mm:ss+08:00</p>
                     * 
                     */
                    std::string GetCalculatedAt() const;

                    /**
                     * 判断参数 CalculatedAt 是否已赋值
                     * @return CalculatedAt 是否已赋值
                     * 
                     */
                    bool CalculatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Dimension details, including sub-item point deductions and to-do items</p>
                     * @return Dimensions <p>Dimension details, including sub-item point deductions and to-do items</p>
                     * 
                     */
                    std::vector<DimensionItem> GetDimensions() const;

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * <p>Security score<br>Value range: [0, 100]</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>Security level<br>Enumeration values:<br>safe: safe (90-100 points)<br>good: good (70-89 points)<br>medium: general (40-69 points)<br>danger: dangerous (0-39 points)</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Score status<br>Enumeration values:<br>success: All data sources are normal<br>partial_error: Some data sources used cache<br>stale: Used the last complete snapshot<br>error: Unable to calculate</p>
                     */
                    std::string m_scoreStatus;
                    bool m_scoreStatusHasBeenSet;

                    /**
                     * <p>Initial score<br>Default value: 100</p>
                     */
                    int64_t m_initialScore;
                    bool m_initialScoreHasBeenSet;

                    /**
                     * <p>Number of categories with risks (it is advisable to process category X risks as soon as possible)</p>
                     */
                    int64_t m_riskCategoryCount;
                    bool m_riskCategoryCountHasBeenSet;

                    /**
                     * <p>Total point deduction.</p>
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                    /**
                     * <p>Calculation time<br>Parameter format: YYYY-MM-DDTHH:mm:ss+08:00</p>
                     */
                    std::string m_calculatedAt;
                    bool m_calculatedAtHasBeenSet;

                    /**
                     * <p>Dimension details, including sub-item point deductions and to-do items</p>
                     */
                    std::vector<DimensionItem> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCOREOVERVIEWRESPONSE_H_
