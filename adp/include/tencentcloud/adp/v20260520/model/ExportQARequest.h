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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_EXPORTQAREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_EXPORTQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>
#include <tencentcloud/adp/v20260520/model/QAQuery.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ExportQA request structure.
                */
                class ExportQARequest : public AbstractModel
                {
                public:
                    ExportQARequest();
                    ~ExportQARequest() = default;
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
                     * 获取<p>Filter conditions (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status-QA status, enumeration value, exact match; CategoryId-category ID, exact match; SourceType-QA source type, enumeration value, exact match; EffectiveDomain-application scope, exact match; DocId-associated document ID, exact match; CreateTime-creation time, Unix seconds, BETWEEN passes [start second, end second]; UpdateTime-update time, Unix seconds, BETWEEN passes [start second, end second]; QaId-QA ID list, exact match, supports multiple values</p>
                     * @return FilterList <p>Filter conditions (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status-QA status, enumeration value, exact match; CategoryId-category ID, exact match; SourceType-QA source type, enumeration value, exact match; EffectiveDomain-application scope, exact match; DocId-associated document ID, exact match; CreateTime-creation time, Unix seconds, BETWEEN passes [start second, end second]; UpdateTime-update time, Unix seconds, BETWEEN passes [start second, end second]; QaId-QA ID list, exact match, supports multiple values</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Filter conditions (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status-QA status, enumeration value, exact match; CategoryId-category ID, exact match; SourceType-QA source type, enumeration value, exact match; EffectiveDomain-application scope, exact match; DocId-associated document ID, exact match; CreateTime-creation time, Unix seconds, BETWEEN passes [start second, end second]; UpdateTime-update time, Unix seconds, BETWEEN passes [start second, end second]; QaId-QA ID list, exact match, supports multiple values</p>
                     * @param _filterList <p>Filter conditions (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status-QA status, enumeration value, exact match; CategoryId-category ID, exact match; SourceType-QA source type, enumeration value, exact match; EffectiveDomain-application scope, exact match; DocId-associated document ID, exact match; CreateTime-creation time, Unix seconds, BETWEEN passes [start second, end second]; UpdateTime-update time, Unix seconds, BETWEEN passes [start second, end second]; QaId-QA ID list, exact match, supports multiple values</p>
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
                     * 获取<p>Query condition (keyword + query scope), consistent with DescribeQASummaryList</p>
                     * @return Query <p>Query condition (keyword + query scope), consistent with DescribeQASummaryList</p>
                     * 
                     */
                    QAQuery GetQuery() const;

                    /**
                     * 设置<p>Query condition (keyword + query scope), consistent with DescribeQASummaryList</p>
                     * @param _query <p>Query condition (keyword + query scope), consistent with DescribeQASummaryList</p>
                     * 
                     */
                    void SetQuery(const QAQuery& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the knowledge base it belongs to</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Filter conditions (multiple Filters are in an AND relationship, and multiple Values of the same Filter are in an OR relationship): Status-QA status, enumeration value, exact match; CategoryId-category ID, exact match; SourceType-QA source type, enumeration value, exact match; EffectiveDomain-application scope, exact match; DocId-associated document ID, exact match; CreateTime-creation time, Unix seconds, BETWEEN passes [start second, end second]; UpdateTime-update time, Unix seconds, BETWEEN passes [start second, end second]; QaId-QA ID list, exact match, supports multiple values</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Query condition (keyword + query scope), consistent with DescribeQASummaryList</p>
                     */
                    QAQuery m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_EXPORTQAREQUEST_H_
