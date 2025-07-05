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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DAILYSCOREINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DAILYSCOREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Daily Rating Information
                */
                class DailyScoreInfo : public AbstractModel
                {
                public:
                    DailyScoreInfo();
                    ~DailyScoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistics Date TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StatisticsDate Statistics Date TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStatisticsDate() const;

                    /**
                     * 设置Statistics Date TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _statisticsDate Statistics Date TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatisticsDate(const int64_t& _statisticsDate);

                    /**
                     * 判断参数 StatisticsDate 是否已赋值
                     * @return StatisticsDate 是否已赋值
                     * 
                     */
                    bool StatisticsDateHasBeenSet() const;

                    /**
                     * 获取ScoringNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Score ScoringNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置ScoringNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _score ScoringNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * Statistics Date TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_statisticsDate;
                    bool m_statisticsDateHasBeenSet;

                    /**
                     * ScoringNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DAILYSCOREINFO_H_
