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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORETREND_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORETREND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DailyScoreInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Quality Score Trend
                */
                class QualityScoreTrend : public AbstractModel
                {
                public:
                    QualityScoreTrend();
                    ~QualityScoreTrend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Periodic Average Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AverageScore Periodic Average Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetAverageScore() const;

                    /**
                     * 设置Periodic Average Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _averageScore Periodic Average Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAverageScore(const double& _averageScore);

                    /**
                     * 判断参数 AverageScore 是否已赋值
                     * @return AverageScore 是否已赋值
                     * 
                     */
                    bool AverageScoreHasBeenSet() const;

                    /**
                     * 获取Daily Score List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DailyScoreList Daily Score List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DailyScoreInfo> GetDailyScoreList() const;

                    /**
                     * 设置Daily Score List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dailyScoreList Daily Score List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDailyScoreList(const std::vector<DailyScoreInfo>& _dailyScoreList);

                    /**
                     * 判断参数 DailyScoreList 是否已赋值
                     * @return DailyScoreList 是否已赋值
                     * 
                     */
                    bool DailyScoreListHasBeenSet() const;

                private:

                    /**
                     * Periodic Average Score
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_averageScore;
                    bool m_averageScoreHasBeenSet;

                    /**
                     * Daily Score List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<DailyScoreInfo> m_dailyScoreList;
                    bool m_dailyScoreListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORETREND_H_
