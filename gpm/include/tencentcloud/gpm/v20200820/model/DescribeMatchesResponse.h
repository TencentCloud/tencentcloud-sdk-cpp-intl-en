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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHESRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MatchInfo.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeMatches response structure.
                */
                class DescribeMatchesResponse : public AbstractModel
                {
                public:
                    DescribeMatchesResponse();
                    ~DescribeMatchesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Matchmaking information list
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchInfoList Matchmaking information list
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<MatchInfo> GetMatchInfoList() const;

                    /**
                     * 判断参数 MatchInfoList 是否已赋值
                     * @return MatchInfoList 是否已赋值
                     * 
                     */
                    bool MatchInfoListHasBeenSet() const;

                    /**
                     * 获取Total number of results
                     * @return TotalCount Total number of results
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取The current page number. The first page will be returned by default if this parameter is left empty.
                     * @return PageNumber The current page number. The first page will be returned by default if this parameter is left empty.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取The number of matches per page. If this parameter is left empty, 30 matches are displayed per page by default. Maximum value: 30
                     * @return PageSize The number of matches per page. If this parameter is left empty, 30 matches are displayed per page by default. Maximum value: 30
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Query type (optional). Valid values: matchName (query by match name), matchCode (query by matchCode), ruleName (query by rule name), and tag (query by tag key/value)
                     * @return SearchType Query type (optional). Valid values: matchName (query by match name), matchCode (query by matchCode), ruleName (query by rule name), and tag (query by tag key/value)
                     * 
                     */
                    std::string GetSearchType() const;

                    /**
                     * 判断参数 SearchType 是否已赋值
                     * @return SearchType 是否已赋值
                     * 
                     */
                    bool SearchTypeHasBeenSet() const;

                    /**
                     * 获取Keyword for querying (optional)
                     * @return Keyword Keyword for querying (optional)
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Matchmaking information list
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<MatchInfo> m_matchInfoList;
                    bool m_matchInfoListHasBeenSet;

                    /**
                     * Total number of results
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The current page number. The first page will be returned by default if this parameter is left empty.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * The number of matches per page. If this parameter is left empty, 30 matches are displayed per page by default. Maximum value: 30
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Query type (optional). Valid values: matchName (query by match name), matchCode (query by matchCode), ruleName (query by rule name), and tag (query by tag key/value)
                     */
                    std::string m_searchType;
                    bool m_searchTypeHasBeenSet;

                    /**
                     * Keyword for querying (optional)
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHESRESPONSE_H_
