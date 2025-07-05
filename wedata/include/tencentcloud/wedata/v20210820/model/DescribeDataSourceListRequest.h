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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>
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
                * DescribeDataSourceList request structure.
                */
                class DescribeDataSourceListRequest : public AbstractModel
                {
                public:
                    DescribeDataSourceListRequest();
                    ~DescribeDataSourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page Number
                     * @return PageNumber Page Number
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page Number
                     * @param _pageNumber Page Number
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
                     * 获取Number of returns
                     * @return PageSize Number of returns
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of returns
                     * @param _pageSize Number of returns
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
                     * 获取Sorting Configuration
                     * @return OrderFields Sorting Configuration
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置Sorting Configuration
                     * @param _orderFields Sorting Configuration
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
                     * 获取Optional Filter Criteria, Filter optional configurations (reference): "Name": { "type": "string", "description": "Data Source Name" }, "Type": { "type": "string", "description": "Type" }, "ClusterId": { "type": "string", "description": "Cluster ID" }, "CategoryId": { "type": "string", "description": "Classification, Project or Space ID" }
                     * @return Filters Optional Filter Criteria, Filter optional configurations (reference): "Name": { "type": "string", "description": "Data Source Name" }, "Type": { "type": "string", "description": "Type" }, "ClusterId": { "type": "string", "description": "Cluster ID" }, "CategoryId": { "type": "string", "description": "Classification, Project or Space ID" }
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Optional Filter Criteria, Filter optional configurations (reference): "Name": { "type": "string", "description": "Data Source Name" }, "Type": { "type": "string", "description": "Type" }, "ClusterId": { "type": "string", "description": "Cluster ID" }, "CategoryId": { "type": "string", "description": "Classification, Project or Space ID" }
                     * @param _filters Optional Filter Criteria, Filter optional configurations (reference): "Name": { "type": "string", "description": "Data Source Name" }, "Type": { "type": "string", "description": "Type" }, "ClusterId": { "type": "string", "description": "Cluster ID" }, "CategoryId": { "type": "string", "description": "Classification, Project or Space ID" }
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
                     * Page Number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of returns
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sorting Configuration
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * Optional Filter Criteria, Filter optional configurations (reference): "Name": { "type": "string", "description": "Data Source Name" }, "Type": { "type": "string", "description": "Type" }, "ClusterId": { "type": "string", "description": "Cluster ID" }, "CategoryId": { "type": "string", "description": "Classification, Project or Space ID" }
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
