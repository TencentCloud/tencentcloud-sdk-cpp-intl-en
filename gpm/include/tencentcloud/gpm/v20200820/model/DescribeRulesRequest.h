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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULESREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/Tag.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeRules request structure.
                */
                class DescribeRulesRequest : public AbstractModel
                {
                public:
                    DescribeRulesRequest();
                    ~DescribeRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The current page number. The first page will be returned if this parameter is left empty.
                     * @return PageNumber The current page number. The first page will be returned if this parameter is left empty.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置The current page number. The first page will be returned if this parameter is left empty.
                     * @param _pageNumber The current page number. The first page will be returned if this parameter is left empty.
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
                     * 获取The number of rules per page. If this parameter is left empty, 30 rules are displayed per page by default. Maximum value: 30
                     * @return PageSize The number of rules per page. If this parameter is left empty, 30 rules are displayed per page by default. Maximum value: 30
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置The number of rules per page. If this parameter is left empty, 30 rules are displayed per page by default. Maximum value: 30
                     * @param _pageSize The number of rules per page. If this parameter is left empty, 30 rules are displayed per page by default. Maximum value: 30
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
                     * 获取Query type (optional). Valid values: match (query by matchCode or matchName), rule (query by ruleCode or ruleName), and other types (not filtered)
                     * @return SearchType Query type (optional). Valid values: match (query by matchCode or matchName), rule (query by ruleCode or ruleName), and other types (not filtered)
                     * 
                     */
                    std::string GetSearchType() const;

                    /**
                     * 设置Query type (optional). Valid values: match (query by matchCode or matchName), rule (query by ruleCode or ruleName), and other types (not filtered)
                     * @param _searchType Query type (optional). Valid values: match (query by matchCode or matchName), rule (query by ruleCode or ruleName), and other types (not filtered)
                     * 
                     */
                    void SetSearchType(const std::string& _searchType);

                    /**
                     * 判断参数 SearchType 是否已赋值
                     * @return SearchType 是否已赋值
                     * 
                     */
                    bool SearchTypeHasBeenSet() const;

                    /**
                     * 获取Keyword. Enter a keyword about SearchType to query.
                     * @return Keyword Keyword. Enter a keyword about SearchType to query.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword. Enter a keyword about SearchType to query.
                     * @param _keyword Keyword. Enter a keyword about SearchType to query.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Tags. Enter a tag for querying.
                     * @return Tags Tags. Enter a tag for querying.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags. Enter a tag for querying.
                     * @param _tags Tags. Enter a tag for querying.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The current page number. The first page will be returned if this parameter is left empty.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * The number of rules per page. If this parameter is left empty, 30 rules are displayed per page by default. Maximum value: 30
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Query type (optional). Valid values: match (query by matchCode or matchName), rule (query by ruleCode or ruleName), and other types (not filtered)
                     */
                    std::string m_searchType;
                    bool m_searchTypeHasBeenSet;

                    /**
                     * Keyword. Enter a keyword about SearchType to query.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Tags. Enter a tag for querying.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULESREQUEST_H_
