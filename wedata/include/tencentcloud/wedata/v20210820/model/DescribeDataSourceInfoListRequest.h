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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_

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
                * DescribeDataSourceInfoList request structure.
                */
                class DescribeDataSourceInfoListRequest : public AbstractModel
                {
                public:
                    DescribeDataSourceInfoListRequest();
                    ~DescribeDataSourceInfoListRequest() = default;
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
                     * 获取Page number
                     * @return PageSize Page number
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page number
                     * @param _pageSize Page number
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
                     * 获取Filter condition (not supported yet)
                     * @return Filters Filter condition (not supported yet)
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置Filter condition (not supported yet)
                     * @param _filters Filter condition (not supported yet)
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting Configuration
                     * @return OrderFields Sorting Configuration
                     * 
                     */
                    OrderField GetOrderFields() const;

                    /**
                     * 设置Sorting Configuration
                     * @param _orderFields Sorting Configuration
                     * 
                     */
                    void SetOrderFields(const OrderField& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取Data Source Type, mandatory (e.g., MYSQL, DLC, etc.)
                     * @return Type Data Source Type, mandatory (e.g., MYSQL, DLC, etc.)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Data Source Type, mandatory (e.g., MYSQL, DLC, etc.)
                     * @param _type Data Source Type, mandatory (e.g., MYSQL, DLC, etc.)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Data Source Name Filter
                     * @return DatasourceName Data Source Name Filter
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置Data Source Name Filter
                     * @param _datasourceName Data Source Name Filter
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page Number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page number
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Filter condition (not supported yet)
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting Configuration
                     */
                    OrderField m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * Data Source Type, mandatory (e.g., MYSQL, DLC, etc.)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Data Source Name Filter
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_
