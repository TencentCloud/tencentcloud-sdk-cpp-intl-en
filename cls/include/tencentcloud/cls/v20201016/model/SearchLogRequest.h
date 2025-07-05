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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MultiTopicSearchInformation.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchLog request structure.
                */
                class SearchLogRequest : public AbstractModel
                {
                public:
                    SearchLogRequest();
                    ~SearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the log to be searched, which is a Unix timestamp in milliseconds
                     * @return From Start time of the log to be searched, which is a Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the log to be searched, which is a Unix timestamp in milliseconds
                     * @param _from Start time of the log to be searched, which is a Unix timestamp in milliseconds
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the log to be searched, which is a Unix timestamp in milliseconds
                     * @return To End time of the log to be searched, which is a Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the log to be searched, which is a Unix timestamp in milliseconds
                     * @param _to End time of the log to be searched, which is a Unix timestamp in milliseconds
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Search and analysis statement. Maximum length: 12 KB
A statement is in the format of <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[search criteria]</a> | <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. You can omit the pipe symbol <code> | </code> and SQL statement when log analysis is not required.
Queries all logs using * or an empty string
                     * @return Query Search and analysis statement. Maximum length: 12 KB
A statement is in the format of <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[search criteria]</a> | <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. You can omit the pipe symbol <code> | </code> and SQL statement when log analysis is not required.
Queries all logs using * or an empty string
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Search and analysis statement. Maximum length: 12 KB
A statement is in the format of <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[search criteria]</a> | <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. You can omit the pipe symbol <code> | </code> and SQL statement when log analysis is not required.
Queries all logs using * or an empty string
                     * @param _query Search and analysis statement. Maximum length: 12 KB
A statement is in the format of <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[search criteria]</a> | <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. You can omit the pipe symbol <code> | </code> and SQL statement when log analysis is not required.
Queries all logs using * or an empty string
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Retrieval syntax rule, default is 0, recommended to use 1 (CQL syntax).0: Lucene syntax, 1: CQL syntax.
For detailed explanation, refer to <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     * @return SyntaxRule Retrieval syntax rule, default is 0, recommended to use 1 (CQL syntax).0: Lucene syntax, 1: CQL syntax.
For detailed explanation, refer to <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Retrieval syntax rule, default is 0, recommended to use 1 (CQL syntax).0: Lucene syntax, 1: CQL syntax.
For detailed explanation, refer to <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     * @param _syntaxRule Retrieval syntax rule, default is 0, recommended to use 1 (CQL syntax).0: Lucene syntax, 1: CQL syntax.
For detailed explanation, refer to <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取- The ID of the log topic to be searched for. Only one log topic can be specified.
- To search for multiple log topics at a time, use the `Topics` parameter.
                     * @return TopicId - The ID of the log topic to be searched for. Only one log topic can be specified.
- To search for multiple log topics at a time, use the `Topics` parameter.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置- The ID of the log topic to be searched for. Only one log topic can be specified.
- To search for multiple log topics at a time, use the `Topics` parameter.
                     * @param _topicId - The ID of the log topic to be searched for. Only one log topic can be specified.
- To search for multiple log topics at a time, use the `Topics` parameter.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取- The IDs of the log topics (up to 20) to be searched for.
- To search for a single log topic, use the `TopicId` parameter.
- You cannot use both `TopicId` and `Topics`.
                     * @return Topics - The IDs of the log topics (up to 20) to be searched for.
- To search for a single log topic, use the `TopicId` parameter.
- You cannot use both `TopicId` and `Topics`.
                     * 
                     */
                    std::vector<MultiTopicSearchInformation> GetTopics() const;

                    /**
                     * 设置- The IDs of the log topics (up to 20) to be searched for.
- To search for a single log topic, use the `TopicId` parameter.
- You cannot use both `TopicId` and `Topics`.
                     * @param _topics - The IDs of the log topics (up to 20) to be searched for.
- To search for a single log topic, use the `TopicId` parameter.
- You cannot use both `TopicId` and `Topics`.
                     * 
                     */
                    void SetTopics(const std::vector<MultiTopicSearchInformation>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取Specifies the number of raw logs returned in a single query, default is 100, maximum is 1000. To obtain subsequent logs, use the Context parameter.Note:* This is only valid when the search and analysis statement (Query) does not contain SQL* Method for specifying SQL result count refers to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * @return Limit Specifies the number of raw logs returned in a single query, default is 100, maximum is 1000. To obtain subsequent logs, use the Context parameter.Note:* This is only valid when the search and analysis statement (Query) does not contain SQL* Method for specifying SQL result count refers to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Specifies the number of raw logs returned in a single query, default is 100, maximum is 1000. To obtain subsequent logs, use the Context parameter.Note:* This is only valid when the search and analysis statement (Query) does not contain SQL* Method for specifying SQL result count refers to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * @param _limit Specifies the number of raw logs returned in a single query, default is 100, maximum is 1000. To obtain subsequent logs, use the Context parameter.Note:* This is only valid when the search and analysis statement (Query) does not contain SQL* Method for specifying SQL result count refers to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Time order of the logs returned. Valid values: `asc` (ascending); `desc`: (descending). Default value: `desc`
Notes:
* This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
* To sort the analysis results, see <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>.
                     * @return Sort Time order of the logs returned. Valid values: `asc` (ascending); `desc`: (descending). Default value: `desc`
Notes:
* This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
* To sort the analysis results, see <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>.
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Time order of the logs returned. Valid values: `asc` (ascending); `desc`: (descending). Default value: `desc`
Notes:
* This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
* To sort the analysis results, see <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>.
                     * @param _sort Time order of the logs returned. Valid values: `asc` (ascending); `desc`: (descending). Default value: `desc`
Notes:
* This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
* To sort the analysis results, see <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>.
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* Only applicable for single log topic retrieval. When retrieving multiple log topics, use the Context in Topics.* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * @return Context Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* Only applicable for single log topic retrieval. When retrieving multiple log topics, use the Context in Topics.* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* Only applicable for single log topic retrieval. When retrieving multiple log topics, use the Context in Topics.* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * @param _context Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* Only applicable for single log topic retrieval. When retrieving multiple log topics, use the Context in Topics.* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Indicates whether to sample raw logs before statistical analysis (`Query` includes SQL statements).
`0`: Auto-sample.
`0-1`: Sample by the specified sample rate, such as `0.02`.
`1`: Precise analysis without sampling.
Default value: `1`
                     * @return SamplingRate Indicates whether to sample raw logs before statistical analysis (`Query` includes SQL statements).
`0`: Auto-sample.
`0-1`: Sample by the specified sample rate, such as `0.02`.
`1`: Precise analysis without sampling.
Default value: `1`
                     * 
                     */
                    double GetSamplingRate() const;

                    /**
                     * 设置Indicates whether to sample raw logs before statistical analysis (`Query` includes SQL statements).
`0`: Auto-sample.
`0-1`: Sample by the specified sample rate, such as `0.02`.
`1`: Precise analysis without sampling.
Default value: `1`
                     * @param _samplingRate Indicates whether to sample raw logs before statistical analysis (`Query` includes SQL statements).
`0`: Auto-sample.
`0-1`: Sample by the specified sample rate, such as `0.02`.
`1`: Precise analysis without sampling.
Default value: `1`
                     * 
                     */
                    void SetSamplingRate(const double& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取If the value is `true`, the new response method will be used, and the output parameters `AnalysisRecords` and `Columns` will be valid.
If the value is `false`, the old response method will be used, and the output parameters `AnalysisResults` and `ColNames` will be valid.
The two response methods differ slightly in terms of encoding format. You are advised to use the new method (`true`).
                     * @return UseNewAnalysis If the value is `true`, the new response method will be used, and the output parameters `AnalysisRecords` and `Columns` will be valid.
If the value is `false`, the old response method will be used, and the output parameters `AnalysisResults` and `ColNames` will be valid.
The two response methods differ slightly in terms of encoding format. You are advised to use the new method (`true`).
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置If the value is `true`, the new response method will be used, and the output parameters `AnalysisRecords` and `Columns` will be valid.
If the value is `false`, the old response method will be used, and the output parameters `AnalysisResults` and `ColNames` will be valid.
The two response methods differ slightly in terms of encoding format. You are advised to use the new method (`true`).
                     * @param _useNewAnalysis If the value is `true`, the new response method will be used, and the output parameters `AnalysisRecords` and `Columns` will be valid.
If the value is `false`, the old response method will be used, and the output parameters `AnalysisResults` and `ColNames` will be valid.
The two response methods differ slightly in terms of encoding format. You are advised to use the new method (`true`).
                     * 
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     * 
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                private:

                    /**
                     * Start time of the log to be searched, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the log to be searched, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Search and analysis statement. Maximum length: 12 KB
A statement is in the format of <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[search criteria]</a> | <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. You can omit the pipe symbol <code> | </code> and SQL statement when log analysis is not required.
Queries all logs using * or an empty string
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Retrieval syntax rule, default is 0, recommended to use 1 (CQL syntax).0: Lucene syntax, 1: CQL syntax.
For detailed explanation, refer to <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * - The ID of the log topic to be searched for. Only one log topic can be specified.
- To search for multiple log topics at a time, use the `Topics` parameter.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * - The IDs of the log topics (up to 20) to be searched for.
- To search for a single log topic, use the `TopicId` parameter.
- You cannot use both `TopicId` and `Topics`.
                     */
                    std::vector<MultiTopicSearchInformation> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * Specifies the number of raw logs returned in a single query, default is 100, maximum is 1000. To obtain subsequent logs, use the Context parameter.Note:* This is only valid when the search and analysis statement (Query) does not contain SQL* Method for specifying SQL result count refers to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Time order of the logs returned. Valid values: `asc` (ascending); `desc`: (descending). Default value: `desc`
Notes:
* This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
* To sort the analysis results, see <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>.
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* Only applicable for single log topic retrieval. When retrieving multiple log topics, use the Context in Topics.* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Indicates whether to sample raw logs before statistical analysis (`Query` includes SQL statements).
`0`: Auto-sample.
`0-1`: Sample by the specified sample rate, such as `0.02`.
`1`: Precise analysis without sampling.
Default value: `1`
                     */
                    double m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * If the value is `true`, the new response method will be used, and the output parameters `AnalysisRecords` and `Columns` will be valid.
If the value is `false`, the old response method will be used, and the output parameters `AnalysisResults` and `ColNames` will be valid.
The two response methods differ slightly in terms of encoding format. You are advised to use the new method (`true`).
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_
