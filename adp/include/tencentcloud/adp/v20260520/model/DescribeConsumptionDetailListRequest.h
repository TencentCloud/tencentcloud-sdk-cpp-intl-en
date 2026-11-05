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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONSUMPTIONDETAILLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONSUMPTIONDETAILLISTREQUEST_H_

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
                * DescribeConsumptionDetailList request structure.
                */
                class DescribeConsumptionDetailListRequest : public AbstractModel
                {
                public:
                    DescribeConsumptionDetailListRequest();
                    ~DescribeConsumptionDetailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Query time range (Unix seconds)</p>
                     * @return TimeRange <p>Query time range (Unix seconds)</p>
                     * 
                     */
                    TimeRange GetTimeRange() const;

                    /**
                     * 设置<p>Query time range (Unix seconds)</p>
                     * @param _timeRange <p>Query time range (Unix seconds)</p>
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
                     * 获取<p>View scope: business view / space view</p>
                     * @return ViewScope <p>View scope: business view / space view</p>
                     * 
                     */
                    ViewScope GetViewScope() const;

                    /**
                     * 设置<p>View scope: business view / space view</p>
                     * @param _viewScope <p>View scope: business view / space view</p>
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
                     * 获取<p>Extended filtering. Filter combination rule: multiple conditions use AND, values within the same condition use OR. Supported Name: metric_source_type (metric_source_type_* OR integer), source_ids (multi-option source ID), resource_ID/source_ID (select one source ID, this parameter is valid only when source_ids is not passed), space_ID, user_ID</p>
                     * @return FilterList <p>Extended filtering. Filter combination rule: multiple conditions use AND, values within the same condition use OR. Supported Name: metric_source_type (metric_source_type_* OR integer), source_ids (multi-option source ID), resource_ID/source_ID (select one source ID, this parameter is valid only when source_ids is not passed), space_ID, user_ID</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Extended filtering. Filter combination rule: multiple conditions use AND, values within the same condition use OR. Supported Name: metric_source_type (metric_source_type_* OR integer), source_ids (multi-option source ID), resource_ID/source_ID (select one source ID, this parameter is valid only when source_ids is not passed), space_ID, user_ID</p>
                     * @param _filterList <p>Extended filtering. Filter combination rule: multiple conditions use AND, values within the same condition use OR. Supported Name: metric_source_type (metric_source_type_* OR integer), source_ids (multi-option source ID), resource_ID/source_ID (select one source ID, this parameter is valid only when source_ids is not passed), space_ID, user_ID</p>
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
                     * 获取<p>Page number, starting from 0</p>
                     * @return PageNumber <p>Page number, starting from 0</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number, starting from 0</p>
                     * @param _pageNumber <p>Page number, starting from 0</p>
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
                     * <p>Query time range (Unix seconds)</p>
                     */
                    TimeRange m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>View scope: business view / space view</p>
                     */
                    ViewScope m_viewScope;
                    bool m_viewScopeHasBeenSet;

                    /**
                     * <p>Extended filtering. Filter combination rule: multiple conditions use AND, values within the same condition use OR. Supported Name: metric_source_type (metric_source_type_* OR integer), source_ids (multi-option source ID), resource_ID/source_ID (select one source ID, this parameter is valid only when source_ids is not passed), space_ID, user_ID</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Page number, starting from 0</p>
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

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONSUMPTIONDETAILLISTREQUEST_H_
