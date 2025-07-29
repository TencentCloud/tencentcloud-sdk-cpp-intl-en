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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctsdb/v20230202/model/Filter.h>
#include <tencentcloud/ctsdb/v20230202/model/Order.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * DescribeClusters request structure.
                */
                class DescribeClustersRequest : public AbstractModel
                {
                public:
                    DescribeClustersRequest();
                    ~DescribeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Current page number.		
                     * @return PageNumber Current page number.		
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Current page number.		
                     * @param _pageNumber Current page number.		
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Query parameter: Filtering and querying by instance ID (cluster_id) and instance name (name) are supported.
                     * @return Filters Query parameter: Filtering and querying by instance ID (cluster_id) and instance name (name) are supported.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query parameter: Filtering and querying by instance ID (cluster_id) and instance name (name) are supported.
                     * @param _filters Query parameter: Filtering and querying by instance ID (cluster_id) and instance name (name) are supported.
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
                     * 获取Sorting parameter: Sorting by the creation time field (created_at) is supported. The value of Type can be set to DESC (descending order) or ASC (ascending order).
                     * @return Orders Sorting parameter: Sorting by the creation time field (created_at) is supported. The value of Type can be set to DESC (descending order) or ASC (ascending order).
                     * 
                     */
                    std::vector<Order> GetOrders() const;

                    /**
                     * 设置Sorting parameter: Sorting by the creation time field (created_at) is supported. The value of Type can be set to DESC (descending order) or ASC (ascending order).
                     * @param _orders Sorting parameter: Sorting by the creation time field (created_at) is supported. The value of Type can be set to DESC (descending order) or ASC (ascending order).
                     * 
                     */
                    void SetOrders(const std::vector<Order>& _orders);

                    /**
                     * 判断参数 Orders 是否已赋值
                     * @return Orders 是否已赋值
                     * 
                     */
                    bool OrdersHasBeenSet() const;

                private:

                    /**
                     * Current page number.		
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Query parameter: Filtering and querying by instance ID (cluster_id) and instance name (name) are supported.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting parameter: Sorting by the creation time field (created_at) is supported. The value of Type can be set to DESC (descending order) or ASC (ascending order).
                     */
                    std::vector<Order> m_orders;
                    bool m_ordersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_DESCRIBECLUSTERSREQUEST_H_
