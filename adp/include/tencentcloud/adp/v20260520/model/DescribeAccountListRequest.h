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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEACCOUNTLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEACCOUNTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAccountList request structure.
                */
                class DescribeAccountListRequest : public AbstractModel
                {
                public:
                    DescribeAccountListRequest();
                    ~DescribeAccountListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Page number</p><p>Starts from 0</p>
                     * @return PageNumber <p>Page number</p><p>Starts from 0</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number</p><p>Starts from 0</p>
                     * @param _pageNumber <p>Page number</p><p>Starts from 0</p>
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
                     * 获取<p>Pagination quantity</p><p>Value range: [1, 100]</p><p>Unit: count</p><p>Maximum: 100</p>
                     * @return PageSize <p>Pagination quantity</p><p>Value range: [1, 100]</p><p>Unit: count</p><p>Maximum: 100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>Pagination quantity</p><p>Value range: [1, 100]</p><p>Unit: count</p><p>Maximum: 100</p>
                     * @param _pageSize <p>Pagination quantity</p><p>Value range: [1, 100]</p><p>Unit: count</p><p>Maximum: 100</p>
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
                     * 获取<p>Parameter filtering</p><p>Supports filter queries by SpaceId and NIckName</p>
                     * @return FilterList <p>Parameter filtering</p><p>Supports filter queries by SpaceId and NIckName</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Parameter filtering</p><p>Supports filter queries by SpaceId and NIckName</p>
                     * @param _filterList <p>Parameter filtering</p><p>Supports filter queries by SpaceId and NIckName</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                private:

                    /**
                     * <p>Page number</p><p>Starts from 0</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Pagination quantity</p><p>Value range: [1, 100]</p><p>Unit: count</p><p>Maximum: 100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Parameter filtering</p><p>Supports filter queries by SpaceId and NIckName</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEACCOUNTLISTREQUEST_H_
