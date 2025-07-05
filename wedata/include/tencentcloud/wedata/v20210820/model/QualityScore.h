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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableScoreStatisticsInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Quality Score
                */
                class QualityScore : public AbstractModel
                {
                public:
                    QualityScore();
                    ~QualityScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Composite Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompositeScore Composite Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetCompositeScore() const;

                    /**
                     * 设置Composite Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compositeScore Composite Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompositeScore(const double& _compositeScore);

                    /**
                     * 判断参数 CompositeScore 是否已赋值
                     * @return CompositeScore 是否已赋值
                     * 
                     */
                    bool CompositeScoreHasBeenSet() const;

                    /**
                     * 获取Score Distribution
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScoringDistribution Score Distribution
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TableScoreStatisticsInfo> GetScoringDistribution() const;

                    /**
                     * 设置Score Distribution
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scoringDistribution Score Distribution
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScoringDistribution(const std::vector<TableScoreStatisticsInfo>& _scoringDistribution);

                    /**
                     * 判断参数 ScoringDistribution 是否已赋值
                     * @return ScoringDistribution 是否已赋值
                     * 
                     */
                    bool ScoringDistributionHasBeenSet() const;

                    /**
                     * 获取Total Number of Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalTableNumber Total Number of Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalTableNumber() const;

                    /**
                     * 设置Total Number of Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalTableNumber Total Number of Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalTableNumber(const int64_t& _totalTableNumber);

                    /**
                     * 判断参数 TotalTableNumber 是否已赋值
                     * @return TotalTableNumber 是否已赋值
                     * 
                     */
                    bool TotalTableNumberHasBeenSet() const;

                private:

                    /**
                     * Composite Score
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_compositeScore;
                    bool m_compositeScoreHasBeenSet;

                    /**
                     * Score Distribution
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TableScoreStatisticsInfo> m_scoringDistribution;
                    bool m_scoringDistributionHasBeenSet;

                    /**
                     * Total Number of Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalTableNumber;
                    bool m_totalTableNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORE_H_
