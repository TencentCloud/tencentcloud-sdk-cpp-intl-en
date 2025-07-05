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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSTATUS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ScoreDetail.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Instance health status.
                */
                class HealthStatus : public AbstractModel
                {
                public:
                    HealthStatus();
                    ~HealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Health score out of 100 points.
                     * @return HealthScore Health score out of 100 points.
                     * 
                     */
                    int64_t GetHealthScore() const;

                    /**
                     * 设置Health score out of 100 points.
                     * @param _healthScore Health score out of 100 points.
                     * 
                     */
                    void SetHealthScore(const int64_t& _healthScore);

                    /**
                     * 判断参数 HealthScore 是否已赋值
                     * @return HealthScore 是否已赋值
                     * 
                     */
                    bool HealthScoreHasBeenSet() const;

                    /**
                     * 获取Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (sub-healthy), `RISK` (dangerous), and `HIGH_RISK` (high-risk).
                     * @return HealthLevel Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (sub-healthy), `RISK` (dangerous), and `HIGH_RISK` (high-risk).
                     * 
                     */
                    std::string GetHealthLevel() const;

                    /**
                     * 设置Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (sub-healthy), `RISK` (dangerous), and `HIGH_RISK` (high-risk).
                     * @param _healthLevel Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (sub-healthy), `RISK` (dangerous), and `HIGH_RISK` (high-risk).
                     * 
                     */
                    void SetHealthLevel(const std::string& _healthLevel);

                    /**
                     * 判断参数 HealthLevel 是否已赋值
                     * @return HealthLevel 是否已赋值
                     * 
                     */
                    bool HealthLevelHasBeenSet() const;

                    /**
                     * 获取Total deducted scores.
                     * @return ScoreLost Total deducted scores.
                     * 
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置Total deducted scores.
                     * @param _scoreLost Total deducted scores.
                     * 
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     * 
                     */
                    bool ScoreLostHasBeenSet() const;

                    /**
                     * 获取Deduction details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScoreDetails Deduction details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ScoreDetail> GetScoreDetails() const;

                    /**
                     * 设置Deduction details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scoreDetails Deduction details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScoreDetails(const std::vector<ScoreDetail>& _scoreDetails);

                    /**
                     * 判断参数 ScoreDetails 是否已赋值
                     * @return ScoreDetails 是否已赋值
                     * 
                     */
                    bool ScoreDetailsHasBeenSet() const;

                private:

                    /**
                     * Health score out of 100 points.
                     */
                    int64_t m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (sub-healthy), `RISK` (dangerous), and `HIGH_RISK` (high-risk).
                     */
                    std::string m_healthLevel;
                    bool m_healthLevelHasBeenSet;

                    /**
                     * Total deducted scores.
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                    /**
                     * Deduction details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ScoreDetail> m_scoreDetails;
                    bool m_scoreDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSTATUS_H_
