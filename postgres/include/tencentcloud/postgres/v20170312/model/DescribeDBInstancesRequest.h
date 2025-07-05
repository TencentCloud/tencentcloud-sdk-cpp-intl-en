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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

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
                * DescribeDBInstances request structure.
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query using one or more filter criteria. Filter criteria currently supported include:
db-instance-id: filter by instance ID (in string format)
db-instance-name: filter by instance name (in string format)
db-project-id: filter by project ID (in string format)
db-pay-mode: filter by instance billing mode (in string format)
db-tag-key: filter by tag key (in string format)
db-private-ip: filter by instance VPC IP (in string format)
db-public-address: filter by instance public network address (in string format)
                     * @return Filters Query using one or more filter criteria. Filter criteria currently supported include:
db-instance-id: filter by instance ID (in string format)
db-instance-name: filter by instance name (in string format)
db-project-id: filter by project ID (in string format)
db-pay-mode: filter by instance billing mode (in string format)
db-tag-key: filter by tag key (in string format)
db-private-ip: filter by instance VPC IP (in string format)
db-public-address: filter by instance public network address (in string format)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query using one or more filter criteria. Filter criteria currently supported include:
db-instance-id: filter by instance ID (in string format)
db-instance-name: filter by instance name (in string format)
db-project-id: filter by project ID (in string format)
db-pay-mode: filter by instance billing mode (in string format)
db-tag-key: filter by tag key (in string format)
db-private-ip: filter by instance VPC IP (in string format)
db-public-address: filter by instance public network address (in string format)
                     * @param _filters Query using one or more filter criteria. Filter criteria currently supported include:
db-instance-id: filter by instance ID (in string format)
db-instance-name: filter by instance name (in string format)
db-project-id: filter by project ID (in string format)
db-pay-mode: filter by instance billing mode (in string format)
db-tag-key: filter by tag key (in string format)
db-private-ip: filter by instance VPC IP (in string format)
db-public-address: filter by instance public network address (in string format)
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
                     * 获取Sorting metric, such as instance name or creation time. Valid values: DBInstanceId, CreateTime, Name, EndTime
                     * @return OrderBy Sorting metric, such as instance name or creation time. Valid values: DBInstanceId, CreateTime, Name, EndTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting metric, such as instance name or creation time. Valid values: DBInstanceId, CreateTime, Name, EndTime
                     * @param _orderBy Sorting metric, such as instance name or creation time. Valid values: DBInstanceId, CreateTime, Name, EndTime
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
                     * 获取Sorting order. Valid values: `asc` (ascending), `desc` (descending)
                     * @return OrderByType Sorting order. Valid values: `asc` (ascending), `desc` (descending)
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values: `asc` (ascending), `desc` (descending)
                     * @param _orderByType Sorting order. Valid values: `asc` (ascending), `desc` (descending)
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
                     * Query using one or more filter criteria. Filter criteria currently supported include:
db-instance-id: filter by instance ID (in string format)
db-instance-name: filter by instance name (in string format)
db-project-id: filter by project ID (in string format)
db-pay-mode: filter by instance billing mode (in string format)
db-tag-key: filter by tag key (in string format)
db-private-ip: filter by instance VPC IP (in string format)
db-public-address: filter by instance public network address (in string format)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

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
                     * Sorting metric, such as instance name or creation time. Valid values: DBInstanceId, CreateTime, Name, EndTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc` (ascending), `desc` (descending)
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
