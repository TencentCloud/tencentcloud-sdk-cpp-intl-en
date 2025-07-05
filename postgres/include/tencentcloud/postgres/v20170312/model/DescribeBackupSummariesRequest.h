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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBackupSummaries request structure.
                */
                class DescribeBackupSummariesRequest : public AbstractModel
                {
                public:
                    DescribeBackupSummariesRequest();
                    ~DescribeBackupSummariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The maximum number of results returned per page. Value range: 1-100. Default: `10`
                     * @return Limit The maximum number of results returned per page. Value range: 1-100. Default: `10`
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page. Value range: 1-100. Default: `10`
                     * @param _limit The maximum number of results returned per page. Value range: 1-100. Default: `10`
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Data offset, which starts from 0.
                     * @return Offset Data offset, which starts from 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset, which starts from 0.
                     * @param _offset Data offset, which starts from 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter instances using one or more criteria. Valid filter names:
db-instance-id: Filter by instance ID (in string format).
db-instance-name: Filter by instance name (in string format).
db-instance-ip: Filter by instance VPC IP (in string format).
                     * @return Filters Filter instances using one or more criteria. Valid filter names:
db-instance-id: Filter by instance ID (in string format).
db-instance-name: Filter by instance name (in string format).
db-instance-ip: Filter by instance VPC IP (in string format).
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter instances using one or more criteria. Valid filter names:
db-instance-id: Filter by instance ID (in string format).
db-instance-name: Filter by instance name (in string format).
db-instance-ip: Filter by instance VPC IP (in string format).
                     * @param _filters Filter instances using one or more criteria. Valid filter names:
db-instance-id: Filter by instance ID (in string format).
db-instance-name: Filter by instance name (in string format).
db-instance-ip: Filter by instance VPC IP (in string format).
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
                     * 获取Sorting field. Valid values: `TotalBackupSize`, `LogBackupSize`, `ManualBaseBackupSize`, `AutoBaseBackupSize`.
                     * @return OrderBy Sorting field. Valid values: `TotalBackupSize`, `LogBackupSize`, `ManualBaseBackupSize`, `AutoBaseBackupSize`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Valid values: `TotalBackupSize`, `LogBackupSize`, `ManualBaseBackupSize`, `AutoBaseBackupSize`.
                     * @param _orderBy Sorting field. Valid values: `TotalBackupSize`, `LogBackupSize`, `ManualBaseBackupSize`, `AutoBaseBackupSize`.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc` (ascending), `desc` (descending).
                     * @return OrderByType Sorting order. Valid values: `asc` (ascending), `desc` (descending).
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values: `asc` (ascending), `desc` (descending).
                     * @param _orderByType Sorting order. Valid values: `asc` (ascending), `desc` (descending).
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * The maximum number of results returned per page. Value range: 1-100. Default: `10`
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset, which starts from 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter instances using one or more criteria. Valid filter names:
db-instance-id: Filter by instance ID (in string format).
db-instance-name: Filter by instance name (in string format).
db-instance-ip: Filter by instance VPC IP (in string format).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field. Valid values: `TotalBackupSize`, `LogBackupSize`, `ManualBaseBackupSize`, `AutoBaseBackupSize`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc` (ascending), `desc` (descending).
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_
