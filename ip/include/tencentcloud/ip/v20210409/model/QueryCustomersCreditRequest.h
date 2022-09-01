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

#ifndef TENCENTCLOUD_IP_V20210409_MODEL_QUERYCUSTOMERSCREDITREQUEST_H_
#define TENCENTCLOUD_IP_V20210409_MODEL_QUERYCUSTOMERSCREDITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ip
    {
        namespace V20210409
        {
            namespace Model
            {
                /**
                * QueryCustomersCredit request structure.
                */
                class QueryCustomersCreditRequest : public AbstractModel
                {
                public:
                    QueryCustomersCreditRequest();
                    ~QueryCustomersCreditRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Search condition type. You can only search by UIN, name, or remarks.
                     * @return FilterType Search condition type. You can only search by UIN, name, or remarks.
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置Search condition type. You can only search by UIN, name, or remarks.
                     * @param FilterType Search condition type. You can only search by UIN, name, or remarks.
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Search condition
                     * @return Filter Search condition
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置Search condition
                     * @param Filter Search condition
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取A pagination parameter that specifies the current page number, with a value starting from 1.
                     * @return Page A pagination parameter that specifies the current page number, with a value starting from 1.
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置A pagination parameter that specifies the current page number, with a value starting from 1.
                     * @param Page A pagination parameter that specifies the current page number, with a value starting from 1.
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取A pagination parameter that specifies the number of entries per page.
                     * @return PageSize A pagination parameter that specifies the number of entries per page.
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置A pagination parameter that specifies the number of entries per page.
                     * @param PageSize A pagination parameter that specifies the number of entries per page.
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取A sort parameter that specifies the sort order. Valid values: `desc` (descending order), or `asc` (ascending order) based on `AssociationTime`. The value will be `desc` if left empty.
                     * @return Order A sort parameter that specifies the sort order. Valid values: `desc` (descending order), or `asc` (ascending order) based on `AssociationTime`. The value will be `desc` if left empty.
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置A sort parameter that specifies the sort order. Valid values: `desc` (descending order), or `asc` (ascending order) based on `AssociationTime`. The value will be `desc` if left empty.
                     * @param Order A sort parameter that specifies the sort order. Valid values: `desc` (descending order), or `asc` (ascending order) based on `AssociationTime`. The value will be `desc` if left empty.
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Search condition type. You can only search by UIN, name, or remarks.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Search condition
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * A pagination parameter that specifies the current page number, with a value starting from 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * A pagination parameter that specifies the number of entries per page.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * A sort parameter that specifies the sort order. Valid values: `desc` (descending order), or `asc` (ascending order) based on `AssociationTime`. The value will be `desc` if left empty.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IP_V20210409_MODEL_QUERYCUSTOMERSCREDITREQUEST_H_
