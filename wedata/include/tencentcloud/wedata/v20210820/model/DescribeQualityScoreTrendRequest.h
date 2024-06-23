/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCORETRENDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCORETRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeQualityScoreTrend request structure.
                */
                class DescribeQualityScoreTrendRequest : public AbstractModel
                {
                public:
                    DescribeQualityScoreTrendRequest();
                    ~DescribeQualityScoreTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start Date of Statistics
                     * @return StatisticsStartDate Start Date of Statistics
                     * 
                     */
                    int64_t GetStatisticsStartDate() const;

                    /**
                     * 设置Start Date of Statistics
                     * @param _statisticsStartDate Start Date of Statistics
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
                     * 获取Statistics End Date
                     * @return StatisticsEndDate Statistics End Date
                     * 
                     */
                    int64_t GetStatisticsEndDate() const;

                    /**
                     * 设置Statistics End Date
                     * @param _statisticsEndDate Statistics End Date
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
                     * 获取Data source ID
                     * @return DatasourceId Data source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source ID
                     * @param _datasourceId Data source ID
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

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

                    /**
                     * 获取Ignore Query String
                     * @return Filters Ignore Query String
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Ignore Query String
                     * @param _filters Ignore Query String
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Start Date of Statistics
                     */
                    int64_t m_statisticsStartDate;
                    bool m_statisticsStartDateHasBeenSet;

                    /**
                     * Statistics End Date
                     */
                    int64_t m_statisticsEndDate;
                    bool m_statisticsEndDateHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Data source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 1: Calculate by full dimension weight, 2: Calculate by configured dimension weight, 3: Do not calculate by dimension weight, default is 1
                     */
                    std::string m_scoreType;
                    bool m_scoreTypeHasBeenSet;

                    /**
                     * Ignore Query String
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCORETRENDREQUEST_H_
