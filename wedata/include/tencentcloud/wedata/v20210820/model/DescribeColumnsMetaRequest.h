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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETAREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETAREQUEST_H_

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
                * DescribeColumnsMeta request structure.
                */
                class DescribeColumnsMetaRequest : public AbstractModel
                {
                public:
                    DescribeColumnsMetaRequest();
                    ~DescribeColumnsMetaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Table ID
                     * @return TableId Table ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
                     * @param _tableId Table ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Page Number
                     * @return PageNumber Page Number
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page Number
                     * @param _pageNumber Page Number
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
                     * 获取Page Size
                     * @return PageSize Page Size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page Size
                     * @param _pageSize Page Size
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
                     * 获取Filter
                     * @return FilterSet Filter
                     * 
                     */
                    std::vector<Filter> GetFilterSet() const;

                    /**
                     * 设置Filter
                     * @param _filterSet Filter
                     * 
                     */
                    void SetFilterSet(const std::vector<Filter>& _filterSet);

                    /**
                     * 判断参数 FilterSet 是否已赋值
                     * @return FilterSet 是否已赋值
                     * 
                     */
                    bool FilterSetHasBeenSet() const;

                    /**
                     * 获取Sort Fields
                     * @return OrderFieldSet Sort Fields
                     * 
                     */
                    std::vector<OrderField> GetOrderFieldSet() const;

                    /**
                     * 设置Sort Fields
                     * @param _orderFieldSet Sort Fields
                     * 
                     */
                    void SetOrderFieldSet(const std::vector<OrderField>& _orderFieldSet);

                    /**
                     * 判断参数 OrderFieldSet 是否已赋值
                     * @return OrderFieldSet 是否已赋值
                     * 
                     */
                    bool OrderFieldSetHasBeenSet() const;

                    /**
                     * 获取Whether to Query Partition Field, Default false
                     * @return IsPartitionQuery Whether to Query Partition Field, Default false
                     * 
                     */
                    bool GetIsPartitionQuery() const;

                    /**
                     * 设置Whether to Query Partition Field, Default false
                     * @param _isPartitionQuery Whether to Query Partition Field, Default false
                     * 
                     */
                    void SetIsPartitionQuery(const bool& _isPartitionQuery);

                    /**
                     * 判断参数 IsPartitionQuery 是否已赋值
                     * @return IsPartitionQuery 是否已赋值
                     * 
                     */
                    bool IsPartitionQueryHasBeenSet() const;

                    /**
                     * 获取Compliance Group ID
                     * @return ComplianceId Compliance Group ID
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置Compliance Group ID
                     * @param _complianceId Compliance Group ID
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                private:

                    /**
                     * Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Page Number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page Size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Filter
                     */
                    std::vector<Filter> m_filterSet;
                    bool m_filterSetHasBeenSet;

                    /**
                     * Sort Fields
                     */
                    std::vector<OrderField> m_orderFieldSet;
                    bool m_orderFieldSetHasBeenSet;

                    /**
                     * Whether to Query Partition Field, Default false
                     */
                    bool m_isPartitionQuery;
                    bool m_isPartitionQueryHasBeenSet;

                    /**
                     * Compliance Group ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETAREQUEST_H_
