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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEUSAGESUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEUSAGESUMMARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimeRange.h>
#include <tencentcloud/adp/v20260520/model/ViewScope.h>
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
                * DescribeUsageSummaryList request structure.
                */
                class DescribeUsageSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeUsageSummaryListRequest();
                    ~DescribeUsageSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Resource type, limited to MODEL / PLUGIN / PLATFORM</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>Model usage</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>Plug-in usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_PLATFORM (reserved, not currently supported)</td><td>3</td><td>Platform feature usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>Model concurrency limit exceeded (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>Knowledge base capacity (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>Usage summary (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>Resource consumption (billing details) (reserved, not currently supported)</td></tr></tbody></table>
                     * @return ResourceType <p>Resource type, limited to MODEL / PLUGIN / PLATFORM</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>Model usage</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>Plug-in usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_PLATFORM (reserved, not currently supported)</td><td>3</td><td>Platform feature usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>Model concurrency limit exceeded (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>Knowledge base capacity (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>Usage summary (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>Resource consumption (billing details) (reserved, not currently supported)</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置<p>Resource type, limited to MODEL / PLUGIN / PLATFORM</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>Model usage</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>Plug-in usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_PLATFORM (reserved, not currently supported)</td><td>3</td><td>Platform feature usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>Model concurrency limit exceeded (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>Knowledge base capacity (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>Usage summary (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>Resource consumption (billing details) (reserved, not currently supported)</td></tr></tbody></table>
                     * @param _resourceType <p>Resource type, limited to MODEL / PLUGIN / PLATFORM</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>Model usage</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>Plug-in usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_PLATFORM (reserved, not currently supported)</td><td>3</td><td>Platform feature usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>Model concurrency limit exceeded (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>Knowledge base capacity (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>Usage summary (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>Resource consumption (billing details) (reserved, not currently supported)</td></tr></tbody></table>
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Query time range (Unix seconds).</p>
                     * @return TimeRange <p>Query time range (Unix seconds).</p>
                     * 
                     */
                    TimeRange GetTimeRange() const;

                    /**
                     * 设置<p>Query time range (Unix seconds).</p>
                     * @param _timeRange <p>Query time range (Unix seconds).</p>
                     * 
                     */
                    void SetTimeRange(const TimeRange& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取<p>View scope: corporate view / space view / application view</p>
                     * @return ViewScope <p>View scope: corporate view / space view / application view</p>
                     * 
                     */
                    ViewScope GetViewScope() const;

                    /**
                     * 设置<p>View scope: corporate view / space view / application view</p>
                     * @param _viewScope <p>View scope: corporate view / space view / application view</p>
                     * 
                     */
                    void SetViewScope(const ViewScope& _viewScope);

                    /**
                     * 判断参数 ViewScope 是否已赋值
                     * @return ViewScope 是否已赋值
                     * 
                     */
                    bool ViewScopeHasBeenSet() const;

                    /**
                     * 获取<p>Extended Filter (resource_type=MODEL). Filter combination rule: multiple items use AND, AND value_list within the same item uses OR. Supported Name: MODEL_Name (MODEL Name), user_id (uid), space_id (space id), resource_id/source_id (source id), metric_source_type (metric_source_type_* Enumeration Name OR integer)</p>
                     * @return FilterList <p>Extended Filter (resource_type=MODEL). Filter combination rule: multiple items use AND, AND value_list within the same item uses OR. Supported Name: MODEL_Name (MODEL Name), user_id (uid), space_id (space id), resource_id/source_id (source id), metric_source_type (metric_source_type_* Enumeration Name OR integer)</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Extended Filter (resource_type=MODEL). Filter combination rule: multiple items use AND, AND value_list within the same item uses OR. Supported Name: MODEL_Name (MODEL Name), user_id (uid), space_id (space id), resource_id/source_id (source id), metric_source_type (metric_source_type_* Enumeration Name OR integer)</p>
                     * @param _filterList <p>Extended Filter (resource_type=MODEL). Filter combination rule: multiple items use AND, AND value_list within the same item uses OR. Supported Name: MODEL_Name (MODEL Name), user_id (uid), space_id (space id), resource_id/source_id (source id), metric_source_type (metric_source_type_* Enumeration Name OR integer)</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>Page number, starting from 0.</p>
                     * @return PageNumber <p>Page number, starting from 0.</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number, starting from 0.</p>
                     * @param _pageNumber <p>Page number, starting from 0.</p>
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
                     * 获取<p>Number of items per page. Maximum: 100.</p>
                     * @return PageSize <p>Number of items per page. Maximum: 100.</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>Number of items per page. Maximum: 100.</p>
                     * @param _pageSize <p>Number of items per page. Maximum: 100.</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Resource type, limited to MODEL / PLUGIN / PLATFORM</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>Model usage</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>Plug-in usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_PLATFORM (reserved, not currently supported)</td><td>3</td><td>Platform feature usage (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>Model concurrency limit exceeded (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>Knowledge base capacity (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>Usage summary (reserved, not currently supported)</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>Resource consumption (billing details) (reserved, not currently supported)</td></tr></tbody></table>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>Query time range (Unix seconds).</p>
                     */
                    TimeRange m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>View scope: corporate view / space view / application view</p>
                     */
                    ViewScope m_viewScope;
                    bool m_viewScopeHasBeenSet;

                    /**
                     * <p>Extended Filter (resource_type=MODEL). Filter combination rule: multiple items use AND, AND value_list within the same item uses OR. Supported Name: MODEL_Name (MODEL Name), user_id (uid), space_id (space id), resource_id/source_id (source id), metric_source_type (metric_source_type_* Enumeration Name OR integer)</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Page number, starting from 0.</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Number of items per page. Maximum: 100.</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEUSAGESUMMARYLISTREQUEST_H_
