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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEREADONLYGROUPSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEREADONLYGROUPSREQUEST_H_

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
                * DescribeReadOnlyGroups request structure.
                */
                class DescribeReadOnlyGroupsRequest : public AbstractModel
                {
                public:
                    DescribeReadOnlyGroupsRequest();
                    ~DescribeReadOnlyGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query using one or more filter criteria. filter criteria currently supported include:.
db-master-instance-id: specifies the primary instance to filter by (in string format).
read-only-group-id: Filter by read-only group ID, type string.
Note: in the filter criteria of this parameter, db-master-instance-id must be specified.
                     * @return Filters Query using one or more filter criteria. filter criteria currently supported include:.
db-master-instance-id: specifies the primary instance to filter by (in string format).
read-only-group-id: Filter by read-only group ID, type string.
Note: in the filter criteria of this parameter, db-master-instance-id must be specified.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query using one or more filter criteria. filter criteria currently supported include:.
db-master-instance-id: specifies the primary instance to filter by (in string format).
read-only-group-id: Filter by read-only group ID, type string.
Note: in the filter criteria of this parameter, db-master-instance-id must be specified.
                     * @param _filters Query using one or more filter criteria. filter criteria currently supported include:.
db-master-instance-id: specifies the primary instance to filter by (in string format).
read-only-group-id: Filter by read-only group ID, type string.
Note: in the filter criteria of this parameter, db-master-instance-id must be specified.
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
                     * 获取Specifies the number of items per page. default value: 10. maximum value: 99.
                     * @return PageSize Specifies the number of items per page. default value: 10. maximum value: 99.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of items per page. default value: 10. maximum value: 99.
                     * @param _pageSize Specifies the number of items per page. default value: 10. maximum value: 99.
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
                     * 获取Specify which page is displayed. Default value: 1 (the first page).
                     * @return PageNumber Specify which page is displayed. Default value: 1 (the first page).
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Specify which page is displayed. Default value: 1 (the first page).
                     * @param _pageNumber Specify which page is displayed. Default value: 1 (the first page).
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
                     * 获取Specifies the sorting basis for queries. currently supports: ROGroupId, CreateTime, Name. default value: CreateTime.
                     * @return OrderBy Specifies the sorting basis for queries. currently supports: ROGroupId, CreateTime, Name. default value: CreateTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Specifies the sorting basis for queries. currently supports: ROGroupId, CreateTime, Name. default value: CreateTime.
                     * @param _orderBy Specifies the sorting basis for queries. currently supports: ROGroupId, CreateTime, Name. default value: CreateTime.
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
                     * 获取Specifies the sorting basis type for queries. currently supports: desc, asc. default value: asc.
                     * @return OrderByType Specifies the sorting basis type for queries. currently supports: desc, asc. default value: asc.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Specifies the sorting basis type for queries. currently supports: desc, asc. default value: asc.
                     * @param _orderByType Specifies the sorting basis type for queries. currently supports: desc, asc. default value: asc.
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
                     * Query using one or more filter criteria. filter criteria currently supported include:.
db-master-instance-id: specifies the primary instance to filter by (in string format).
read-only-group-id: Filter by read-only group ID, type string.
Note: in the filter criteria of this parameter, db-master-instance-id must be specified.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Specifies the number of items per page. default value: 10. maximum value: 99.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Specify which page is displayed. Default value: 1 (the first page).
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the sorting basis for queries. currently supports: ROGroupId, CreateTime, Name. default value: CreateTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Specifies the sorting basis type for queries. currently supports: desc, asc. default value: asc.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEREADONLYGROUPSREQUEST_H_
