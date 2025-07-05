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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCORETRENDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCORETRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTableScoreTrend request structure.
                */
                class DescribeTableScoreTrendRequest : public AbstractModel
                {
                public:
                    DescribeTableScoreTrendRequest();
                    ~DescribeTableScoreTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Start time Second-level Timestamp
                     * @return StatisticsStartDate Start time Second-level Timestamp
                     * 
                     */
                    int64_t GetStatisticsStartDate() const;

                    /**
                     * 设置Start time Second-level Timestamp
                     * @param _statisticsStartDate Start time Second-level Timestamp
                     * 
                     */
                    void SetStatisticsStartDate(const int64_t& _statisticsStartDate);

                    /**
                     * 判断参数 StatisticsStartDate 是否已赋值
                     * @return StatisticsStartDate 是否已赋值
                     * 
                     */
                    bool StatisticsStartDateHasBeenSet() const;

                    /**
                     * 获取End time Second-level Timestamp
                     * @return StatisticsEndDate End time Second-level Timestamp
                     * 
                     */
                    int64_t GetStatisticsEndDate() const;

                    /**
                     * 设置End time Second-level Timestamp
                     * @param _statisticsEndDate End time Second-level Timestamp
                     * 
                     */
                    void SetStatisticsEndDate(const int64_t& _statisticsEndDate);

                    /**
                     * 判断参数 StatisticsEndDate 是否已赋值
                     * @return StatisticsEndDate 是否已赋值
                     * 
                     */
                    bool StatisticsEndDateHasBeenSet() const;

                    /**
                     * 获取Table ID
                     * @return TableId Table ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
                     * @param _tableId Table ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取1: Calculate by full dimension weight, 2: Calculate by configured dimension weight, 3: Do not calculate by dimension weight, default is 1
                     * @return ScoreType 1: Calculate by full dimension weight, 2: Calculate by configured dimension weight, 3: Do not calculate by dimension weight, default is 1
                     * 
                     */
                    std::string GetScoreType() const;

                    /**
                     * 设置1: Calculate by full dimension weight, 2: Calculate by configured dimension weight, 3: Do not calculate by dimension weight, default is 1
                     * @param _scoreType 1: Calculate by full dimension weight, 2: Calculate by configured dimension weight, 3: Do not calculate by dimension weight, default is 1
                     * 
                     */
                    void SetScoreType(const std::string& _scoreType);

                    /**
                     * 判断参数 ScoreType 是否已赋值
                     * @return ScoreType 是否已赋值
                     * 
                     */
                    bool ScoreTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Start time Second-level Timestamp
                     */
                    int64_t m_statisticsStartDate;
                    bool m_statisticsStartDateHasBeenSet;

                    /**
                     * End time Second-level Timestamp
                     */
                    int64_t m_statisticsEndDate;
                    bool m_statisticsEndDateHasBeenSet;

                    /**
                     * Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 1: Calculate by full dimension weight, 2: Calculate by configured dimension weight, 3: Do not calculate by dimension weight, default is 1
                     */
                    std::string m_scoreType;
                    bool m_scoreTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCORETRENDREQUEST_H_
