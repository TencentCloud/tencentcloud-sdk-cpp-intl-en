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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSUMMARYLISTREQUEST_H_

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
                * DescribeAppSummaryList request structure.
                */
                class DescribeAppSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeAppSummaryListRequest();
                    ~DescribeAppSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID (required)
                     * @return SpaceId Space ID (required)
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置Space ID (required)
                     * @param _spaceId Space ID (required)
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - AppStatus: APP STATUS, enumeration value, exact match (APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: application MODE, enumeration value, exact match (APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     * @return FilterList Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - AppStatus: APP STATUS, enumeration value, exact match (APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: application MODE, enumeration value, exact match (APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - AppStatus: APP STATUS, enumeration value, exact match (APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: application MODE, enumeration value, exact match (APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     * @param _filterList Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - AppStatus: APP STATUS, enumeration value, exact match (APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: application MODE, enumeration value, exact match (APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
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
                     * 获取Page number, starting from 0.
                     * @return PageNumber Page number, starting from 0.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, starting from 0.
                     * @param _pageNumber Page number, starting from 0.
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
                     * 获取Number of items per page. Maximum: 100.
                     * @return PageSize Number of items per page. Maximum: 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. Maximum: 100.
                     * @param _pageSize Number of items per page. Maximum: 100.
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
                     * 获取Fuzzy query
                     * @return Query Fuzzy query
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Fuzzy query
                     * @param _query Fuzzy query
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * Space ID (required)
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - AppStatus: APP STATUS, enumeration value, exact match (APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: application MODE, enumeration value, exact match (APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * Page number, starting from 0.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page. Maximum: 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Fuzzy query
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSUMMARYLISTREQUEST_H_
