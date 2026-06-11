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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESEARCHVIEWSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESEARCHVIEWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeSearchViews request structure.
                */
                class DescribeSearchViewsRequest : public AbstractModel
                {
                public:
                    DescribeSearchViewsRequest();
                    ~DescribeSearchViewsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<ul><li>viewId Filter by [view ID]. Type: String Required: No</li><li>viewName Filter by [view name]. Type: String Required: No</li><li>logsetId Filter by [logset ID]. Type: String Required: No<br>The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 10.</li></ul>
                     * @return Filters <ul><li>viewId Filter by [view ID]. Type: String Required: No</li><li>viewName Filter by [view name]. Type: String Required: No</li><li>logsetId Filter by [logset ID]. Type: String Required: No<br>The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 10.</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<ul><li>viewId Filter by [view ID]. Type: String Required: No</li><li>viewName Filter by [view name]. Type: String Required: No</li><li>logsetId Filter by [logset ID]. Type: String Required: No<br>The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 10.</li></ul>
                     * @param _filters <ul><li>viewId Filter by [view ID]. Type: String Required: No</li><li>viewName Filter by [view name]. Type: String Required: No</li><li>logsetId Filter by [logset ID]. Type: String Required: No<br>The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 10.</li></ul>
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
                     * 获取<p>Pagination offset. Default value: 0.</p>
                     * @return Offset <p>Pagination offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset. Default value: 0.</p>
                     * @param _offset <p>Pagination offset. Default value: 0.</p>
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
                     * 获取<p>Maximum number of entries per page. Default value: 20. Maximum value: 100.</p>
                     * @return Limit <p>Maximum number of entries per page. Default value: 20. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Maximum number of entries per page. Default value: 20. Maximum value: 100.</p>
                     * @param _limit <p>Maximum number of entries per page. Default value: 20. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <ul><li>viewId Filter by [view ID]. Type: String Required: No</li><li>viewName Filter by [view name]. Type: String Required: No</li><li>logsetId Filter by [logset ID]. Type: String Required: No<br>The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 10.</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Pagination offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Maximum number of entries per page. Default value: 20. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESEARCHVIEWSREQUEST_H_
