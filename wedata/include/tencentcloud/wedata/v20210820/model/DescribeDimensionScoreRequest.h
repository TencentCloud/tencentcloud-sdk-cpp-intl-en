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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDIMENSIONSCOREREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDIMENSIONSCOREREQUEST_H_

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
                * DescribeDimensionScore request structure.
                */
                class DescribeDimensionScoreRequest : public AbstractModel
                {
                public:
                    DescribeDimensionScoreRequest();
                    ~DescribeDimensionScoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistics Date Timestamp
                     * @return StatisticsDate Statistics Date Timestamp
                     * 
                     */
                    int64_t GetStatisticsDate() const;

                    /**
                     * 设置Statistics Date Timestamp
                     * @param _statisticsDate Statistics Date Timestamp
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
                     * Statistics Date Timestamp
                     */
                    int64_t m_statisticsDate;
                    bool m_statisticsDateHasBeenSet;

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
                     * Ignore Query String
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDIMENSIONSCOREREQUEST_H_
