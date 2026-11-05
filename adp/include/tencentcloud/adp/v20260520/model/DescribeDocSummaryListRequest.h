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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCSUMMARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>
#include <tencentcloud/adp/v20260520/model/DocQuery.h>
#include <tencentcloud/adp/v20260520/model/SummaryListSwitch.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeDocSummaryList request structure.
                */
                class DescribeDocSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeDocSummaryListRequest();
                    ~DescribeDocSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the knowledge base it belongs to</p>
                     * @return KbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>ID of the knowledge base it belongs to</p>
                     * @param _kbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status - document status, enumeration value, exact match; CategoryId - category ID, exact match; SourceType - document source type, enumeration value, exact match; EffectiveDomain - application scope, exact match; CreateTime - creation time, Unix seconds, BETWEEN with [start second, end second]; UpdateTime - update time, Unix seconds, BETWEEN with [start second, end second]</p>
                     * @return FilterList <p>Filter criteria (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status - document status, enumeration value, exact match; CategoryId - category ID, exact match; SourceType - document source type, enumeration value, exact match; EffectiveDomain - application scope, exact match; CreateTime - creation time, Unix seconds, BETWEEN with [start second, end second]; UpdateTime - update time, Unix seconds, BETWEEN with [start second, end second]</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Filter criteria (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status - document status, enumeration value, exact match; CategoryId - category ID, exact match; SourceType - document source type, enumeration value, exact match; EffectiveDomain - application scope, exact match; CreateTime - creation time, Unix seconds, BETWEEN with [start second, end second]; UpdateTime - update time, Unix seconds, BETWEEN with [start second, end second]</p>
                     * @param _filterList <p>Filter criteria (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status - document status, enumeration value, exact match; CategoryId - category ID, exact match; SourceType - document source type, enumeration value, exact match; EffectiveDomain - application scope, exact match; CreateTime - creation time, Unix seconds, BETWEEN with [start second, end second]; UpdateTime - update time, Unix seconds, BETWEEN with [start second, end second]</p>
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
                     * 获取<p>Number of items per page. Default: 10. Maximum: 100</p>
                     * @return PageSize <p>Number of items per page. Default: 10. Maximum: 100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>Number of items per page. Default: 10. Maximum: 100</p>
                     * @param _pageSize <p>Number of items per page. Default: 10. Maximum: 100</p>
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
                     * 获取<p>Query condition (keyword + query scope)</p>
                     * @return Query <p>Query condition (keyword + query scope)</p>
                     * 
                     */
                    DocQuery GetQuery() const;

                    /**
                     * 设置<p>Query condition (keyword + query scope)</p>
                     * @param _query <p>Query condition (keyword + query scope)</p>
                     * 
                     */
                    void SetQuery(const DocQuery& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>Switch configuration</p>
                     * @return SummaryListSwitch <p>Switch configuration</p>
                     * 
                     */
                    SummaryListSwitch GetSummaryListSwitch() const;

                    /**
                     * 设置<p>Switch configuration</p>
                     * @param _summaryListSwitch <p>Switch configuration</p>
                     * 
                     */
                    void SetSummaryListSwitch(const SummaryListSwitch& _summaryListSwitch);

                    /**
                     * 判断参数 SummaryListSwitch 是否已赋值
                     * @return SummaryListSwitch 是否已赋值
                     * 
                     */
                    bool SummaryListSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the knowledge base it belongs to</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Filter criteria (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status - document status, enumeration value, exact match; CategoryId - category ID, exact match; SourceType - document source type, enumeration value, exact match; EffectiveDomain - application scope, exact match; CreateTime - creation time, Unix seconds, BETWEEN with [start second, end second]; UpdateTime - update time, Unix seconds, BETWEEN with [start second, end second]</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Page number, starting from 0.</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Number of items per page. Default: 10. Maximum: 100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Query condition (keyword + query scope)</p>
                     */
                    DocQuery m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>Switch configuration</p>
                     */
                    SummaryListSwitch m_summaryListSwitch;
                    bool m_summaryListSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCSUMMARYLISTREQUEST_H_
