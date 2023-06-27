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
                     * 获取Filter instances by using one or more filters. Valid values:  `db-master-instance-id` (filter by the primary instance ID in string), `read-only-group-id` (filter by the read-only group ID in string),
                     * @return Filters Filter instances by using one or more filters. Valid values:  `db-master-instance-id` (filter by the primary instance ID in string), `read-only-group-id` (filter by the read-only group ID in string),
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter instances by using one or more filters. Valid values:  `db-master-instance-id` (filter by the primary instance ID in string), `read-only-group-id` (filter by the read-only group ID in string),
                     * @param _filters Filter instances by using one or more filters. Valid values:  `db-master-instance-id` (filter by the primary instance ID in string), `read-only-group-id` (filter by the read-only group ID in string),
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
                     * 获取The number of results per page. Default value: 10.
                     * @return PageSize The number of results per page. Default value: 10.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置The number of results per page. Default value: 10.
                     * @param _pageSize The number of results per page. Default value: 10.
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
                     * 获取Sorting criterion. Valid values: `ROGroupId`, `CreateTime`, `Name`.
                     * @return OrderBy Sorting criterion. Valid values: `ROGroupId`, `CreateTime`, `Name`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting criterion. Valid values: `ROGroupId`, `CreateTime`, `Name`.
                     * @param _orderBy Sorting criterion. Valid values: `ROGroupId`, `CreateTime`, `Name`.
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
                     * 获取Sorting order. Valid values: `desc`, `asc`.
                     * @return OrderByType Sorting order. Valid values: `desc`, `asc`.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values: `desc`, `asc`.
                     * @param _orderByType Sorting order. Valid values: `desc`, `asc`.
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
                     * Filter instances by using one or more filters. Valid values:  `db-master-instance-id` (filter by the primary instance ID in string), `read-only-group-id` (filter by the read-only group ID in string),
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The number of results per page. Default value: 10.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Specify which page is displayed. Default value: 1 (the first page).
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Sorting criterion. Valid values: `ROGroupId`, `CreateTime`, `Name`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `desc`, `asc`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEREADONLYGROUPSREQUEST_H_
