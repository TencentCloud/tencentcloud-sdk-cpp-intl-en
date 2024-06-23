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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEQUALITYDETAILSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEQUALITYDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableQualityDetails request structure.
                */
                class DescribeTableQualityDetailsRequest : public AbstractModel
                {
                public:
                    DescribeTableQualityDetailsRequest();
                    ~DescribeTableQualityDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistics Date
                     * @return StatisticsDate Statistics Date
                     * 
                     */
                    int64_t GetStatisticsDate() const;

                    /**
                     * 设置Statistics Date
                     * @param _statisticsDate Statistics Date
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
                     * 获取Pagination Index
                     * @return PageNumber Pagination Index
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Pagination Index
                     * @param _pageNumber Pagination Index
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page size
                     * @return PageSize Page size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size
                     * @param _pageSize Page size
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Filter Parameters TableName, DatabaseId, DatabaseName, OwnerUserName
                     * @return Filters Filter Parameters TableName, DatabaseId, DatabaseName, OwnerUserName
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter Parameters TableName, DatabaseId, DatabaseName, OwnerUserName
                     * @param _filters Filter Parameters TableName, DatabaseId, DatabaseName, OwnerUserName
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting Parameters Sort order DESC or ASC, Table score sorting TableScore
                     * @return OrderFields Sorting Parameters Sort order DESC or ASC, Table score sorting TableScore
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置Sorting Parameters Sort order DESC or ASC, Table score sorting TableScore
                     * @param _orderFields Sorting Parameters Sort order DESC or ASC, Table score sorting TableScore
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

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

                private:

                    /**
                     * Statistics Date
                     */
                    int64_t m_statisticsDate;
                    bool m_statisticsDateHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Pagination Index
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Filter Parameters TableName, DatabaseId, DatabaseName, OwnerUserName
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting Parameters Sort order DESC or ASC, Table score sorting TableScore
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEQUALITYDETAILSREQUEST_H_
