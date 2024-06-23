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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FilterOptional.h>
#include <tencentcloud/wedata/v20210820/model/OrderFieldOptional.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeApproveList request structure.
                */
                class DescribeApproveListRequest : public AbstractModel
                {
                public:
                    DescribeApproveListRequest();
                    ~DescribeApproveListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Approval Category Key
                     * @return ApproveClassification Approval Category Key
                     * 
                     */
                    std::string GetApproveClassification() const;

                    /**
                     * 设置Approval Category Key
                     * @param _approveClassification Approval Category Key
                     * 
                     */
                    void SetApproveClassification(const std::string& _approveClassification);

                    /**
                     * 判断参数 ApproveClassification 是否已赋值
                     * @return ApproveClassification 是否已赋值
                     * 
                     */
                    bool ApproveClassificationHasBeenSet() const;

                    /**
                     * 获取Page size
                     * @return PageSize Page size
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size
                     * @param _pageSize Page size
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
                     * 获取Pagination Number
                     * @return PageNumber Pagination Number
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Pagination Number
                     * @param _pageNumber Pagination Number
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
                     * 获取Custom Definition condition query
                     * @return Filters Custom Definition condition query
                     * 
                     */
                    std::vector<FilterOptional> GetFilters() const;

                    /**
                     * 设置Custom Definition condition query
                     * @param _filters Custom Definition condition query
                     * 
                     */
                    void SetFilters(const std::vector<FilterOptional>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sort Fields
                     * @return OrderFields Sort Fields
                     * 
                     */
                    std::vector<OrderFieldOptional> GetOrderFields() const;

                    /**
                     * 设置Sort Fields
                     * @param _orderFields Sort Fields
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderFieldOptional>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * Approval Category Key
                     */
                    std::string m_approveClassification;
                    bool m_approveClassificationHasBeenSet;

                    /**
                     * Page size
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Pagination Number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Custom Definition condition query
                     */
                    std::vector<FilterOptional> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort Fields
                     */
                    std::vector<OrderFieldOptional> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVELISTREQUEST_H_
