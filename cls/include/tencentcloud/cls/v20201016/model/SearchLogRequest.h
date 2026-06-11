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
                     * 获取<p>Start time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     * @return From <p>Start time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>Start time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     * @param _from <p>Start time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
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
                     * 获取<p>End time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     * @return To <p>End time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>End time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     * @param _to <p>End time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
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
                     * 获取<p>The retrieval analysis statement has a maximum length of 12KB.<br>The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval condition]</a> | <a href="https://www.tencentcloud.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. When there is no need to perform statistical analysis on logs, the pipe character <code> | </code> and SQL statement can be omitted.<br>Use * or an empty string to search all logs.</p><p>Default value: empty string</p>
                     * @return QueryString <p>The retrieval analysis statement has a maximum length of 12KB.<br>The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval condition]</a> | <a href="https://www.tencentcloud.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. When there is no need to perform statistical analysis on logs, the pipe character <code> | </code> and SQL statement can be omitted.<br>Use * or an empty string to search all logs.</p><p>Default value: empty string</p>
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置<p>The retrieval analysis statement has a maximum length of 12KB.<br>The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval condition]</a> | <a href="https://www.tencentcloud.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. When there is no need to perform statistical analysis on logs, the pipe character <code> | </code> and SQL statement can be omitted.<br>Use * or an empty string to search all logs.</p><p>Default value: empty string</p>
                     * @param _queryString <p>The retrieval analysis statement has a maximum length of 12KB.<br>The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval condition]</a> | <a href="https://www.tencentcloud.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. When there is no need to perform statistical analysis on logs, the pipe character <code> | </code> and SQL statement can be omitted.<br>Use * or an empty string to search all logs.</p><p>Default value: empty string</p>
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取<p>Search syntax rules. Default value is 1. Recommended for use is 1.</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, dedicated retrieval syntax for log service)</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">retrieval condition syntax rules</a>.</p><p>Default value: 1</p>
                     * @return QuerySyntax <p>Search syntax rules. Default value is 1. Recommended for use is 1.</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, dedicated retrieval syntax for log service)</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">retrieval condition syntax rules</a>.</p><p>Default value: 1</p>
                     * 
                     */
                    uint64_t GetQuerySyntax() const;

                    /**
                     * 设置<p>Search syntax rules. Default value is 1. Recommended for use is 1.</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, dedicated retrieval syntax for log service)</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">retrieval condition syntax rules</a>.</p><p>Default value: 1</p>
                     * @param _querySyntax <p>Search syntax rules. Default value is 1. Recommended for use is 1.</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, dedicated retrieval syntax for log service)</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">retrieval condition syntax rules</a>.</p><p>Default value: 1</p>
                     * 
                     */
                    void SetQuerySyntax(const uint64_t& _querySyntax);

                    /**
                     * 判断参数 QuerySyntax 是否已赋值
                     * @return QuerySyntax 是否已赋值
                     * 
                     */
                    bool QuerySyntaxHasBeenSet() const;

                    /**
                     * 获取<ul><li>Log topic ID to be retrieved and analyzed. Only one can be specified.</li><li>If needed to retrieve multiple log topics at the same time, please use the Topics parameter.</li><li>TopicId and Topics cannot include both. Only select one in a single request.</li></ul>
                     * @return TopicId <ul><li>Log topic ID to be retrieved and analyzed. Only one can be specified.</li><li>If needed to retrieve multiple log topics at the same time, please use the Topics parameter.</li><li>TopicId and Topics cannot include both. Only select one in a single request.</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<ul><li>Log topic ID to be retrieved and analyzed. Only one can be specified.</li><li>If needed to retrieve multiple log topics at the same time, please use the Topics parameter.</li><li>TopicId and Topics cannot include both. Only select one in a single request.</li></ul>
                     * @param _topicId <ul><li>Log topic ID to be retrieved and analyzed. Only one can be specified.</li><li>If needed to retrieve multiple log topics at the same time, please use the Topics parameter.</li><li>TopicId and Topics cannot include both. Only select one in a single request.</li></ul>
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
                     * 获取<ul><li>Log topic list for retrieval and analysis supports a maximum of 50 log topics.</li><li>Use TopicId to retrieve a single log topic.</li><li>TopicId and Topics cannot be used simultaneously. Only select one in a single request.</li></ul>
                     * @return Topics <ul><li>Log topic list for retrieval and analysis supports a maximum of 50 log topics.</li><li>Use TopicId to retrieve a single log topic.</li><li>TopicId and Topics cannot be used simultaneously. Only select one in a single request.</li></ul>
                     * 
                     */
                    std::vector<MultiTopicSearchInformation> GetTopics() const;

                    /**
                     * 设置<ul><li>Log topic list for retrieval and analysis supports a maximum of 50 log topics.</li><li>Use TopicId to retrieve a single log topic.</li><li>TopicId and Topics cannot be used simultaneously. Only select one in a single request.</li></ul>
                     * @param _topics <ul><li>Log topic list for retrieval and analysis supports a maximum of 50 log topics.</li><li>Use TopicId to retrieve a single log topic.</li><li>TopicId and Topics cannot be used simultaneously. Only select one in a single request.</li></ul>
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
                     * 获取<p>Whether raw logs are returned in time sequence. Value range: asc (ascending), desc (descending). Default is desc.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For SQL result sorting, see <a href="https://www.tencentcloud.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY syntax</a>.</li></ul>
                     * @return Sort <p>Whether raw logs are returned in time sequence. Value range: asc (ascending), desc (descending). Default is desc.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For SQL result sorting, see <a href="https://www.tencentcloud.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY syntax</a>.</li></ul>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>Whether raw logs are returned in time sequence. Value range: asc (ascending), desc (descending). Default is desc.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For SQL result sorting, see <a href="https://www.tencentcloud.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY syntax</a>.</li></ul>
                     * @param _sort <p>Whether raw logs are returned in time sequence. Value range: asc (ascending), desc (descending). Default is desc.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For SQL result sorting, see <a href="https://www.tencentcloud.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY syntax</a>.</li></ul>
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
                     * 获取<p>Number of raw logs returned in a single query. Default is 100, maximum value is 1000.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For the method for specifying SQL result count, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul><p>There are two methods to retrieve more logs:</p><ul><li>Context: Pass the Context value returned by the last API call to retrieve more logs. The total number of raw logs that can be obtained is up to 10,000 entries.</li><li>Offset: The offset refers to the line number from which raw logs start to return. There is no log entry limit.</li></ul>
                     * @return Limit <p>Number of raw logs returned in a single query. Default is 100, maximum value is 1000.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For the method for specifying SQL result count, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul><p>There are two methods to retrieve more logs:</p><ul><li>Context: Pass the Context value returned by the last API call to retrieve more logs. The total number of raw logs that can be obtained is up to 10,000 entries.</li><li>Offset: The offset refers to the line number from which raw logs start to return. There is no log entry limit.</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of raw logs returned in a single query. Default is 100, maximum value is 1000.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For the method for specifying SQL result count, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul><p>There are two methods to retrieve more logs:</p><ul><li>Context: Pass the Context value returned by the last API call to retrieve more logs. The total number of raw logs that can be obtained is up to 10,000 entries.</li><li>Offset: The offset refers to the line number from which raw logs start to return. There is no log entry limit.</li></ul>
                     * @param _limit <p>Number of raw logs returned in a single query. Default is 100, maximum value is 1000.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For the method for specifying SQL result count, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul><p>There are two methods to retrieve more logs:</p><ul><li>Context: Pass the Context value returned by the last API call to retrieve more logs. The total number of raw logs that can be obtained is up to 10,000 entries.</li><li>Offset: The offset refers to the line number from which raw logs start to return. There is no log entry limit.</li></ul>
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
                     * 获取<p>Offset of the raw log Query, indicating the line number from which the raw log starts to return, defaults to 0.<br>Note:</p><ul><li>Valid only when the retrieval statement (Query) does not contain SQL</li><li>Cannot be used with Context parameter simultaneously</li><li>Applicable only for single log topic retrieval</li></ul>
                     * @return Offset <p>Offset of the raw log Query, indicating the line number from which the raw log starts to return, defaults to 0.<br>Note:</p><ul><li>Valid only when the retrieval statement (Query) does not contain SQL</li><li>Cannot be used with Context parameter simultaneously</li><li>Applicable only for single log topic retrieval</li></ul>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset of the raw log Query, indicating the line number from which the raw log starts to return, defaults to 0.<br>Note:</p><ul><li>Valid only when the retrieval statement (Query) does not contain SQL</li><li>Cannot be used with Context parameter simultaneously</li><li>Applicable only for single log topic retrieval</li></ul>
                     * @param _offset <p>Offset of the raw log Query, indicating the line number from which the raw log starts to return, defaults to 0.<br>Note:</p><ul><li>Valid only when the retrieval statement (Query) does not contain SQL</li><li>Cannot be used with Context parameter simultaneously</li><li>Applicable only for single log topic retrieval</li></ul>
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
                     * 获取<p>Pass the Context value returned by the last API call to obtain more logs later. The total number of raw logs that can be retrieved is up to 10,000 entries, with an expiration time of 1 hour.<br>Note:</p><ul><li>When passing this parameter, do not modify other parameters except this one.</li><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li><li>Valid only when the search and analysis statement (Query) does not contain SQL. For SQL to obtain follow-up results, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul>
                     * @return Context <p>Pass the Context value returned by the last API call to obtain more logs later. The total number of raw logs that can be retrieved is up to 10,000 entries, with an expiration time of 1 hour.<br>Note:</p><ul><li>When passing this parameter, do not modify other parameters except this one.</li><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li><li>Valid only when the search and analysis statement (Query) does not contain SQL. For SQL to obtain follow-up results, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>Pass the Context value returned by the last API call to obtain more logs later. The total number of raw logs that can be retrieved is up to 10,000 entries, with an expiration time of 1 hour.<br>Note:</p><ul><li>When passing this parameter, do not modify other parameters except this one.</li><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li><li>Valid only when the search and analysis statement (Query) does not contain SQL. For SQL to obtain follow-up results, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul>
                     * @param _context <p>Pass the Context value returned by the last API call to obtain more logs later. The total number of raw logs that can be retrieved is up to 10,000 entries, with an expiration time of 1 hour.<br>Note:</p><ul><li>When passing this parameter, do not modify other parameters except this one.</li><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li><li>Valid only when the search and analysis statement (Query) does not contain SQL. For SQL to obtain follow-up results, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul>
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
                     * 获取<p>Whether to sample raw logs first and then perform statistical analysis when executing statistical analysis (SQL included in Query).<br>0: auto-sample;<br>0–1: sample at the specified sampling rate, such as 0.02;<br>1: indicates no sampling, that is, precise analysis.<br>The default value is 1.</p>
                     * @return SamplingRate <p>Whether to sample raw logs first and then perform statistical analysis when executing statistical analysis (SQL included in Query).<br>0: auto-sample;<br>0–1: sample at the specified sampling rate, such as 0.02;<br>1: indicates no sampling, that is, precise analysis.<br>The default value is 1.</p>
                     * 
                     */
                    double GetSamplingRate() const;

                    /**
                     * 设置<p>Whether to sample raw logs first and then perform statistical analysis when executing statistical analysis (SQL included in Query).<br>0: auto-sample;<br>0–1: sample at the specified sampling rate, such as 0.02;<br>1: indicates no sampling, that is, precise analysis.<br>The default value is 1.</p>
                     * @param _samplingRate <p>Whether to sample raw logs first and then perform statistical analysis when executing statistical analysis (SQL included in Query).<br>0: auto-sample;<br>0–1: sample at the specified sampling rate, such as 0.02;<br>1: indicates no sampling, that is, precise analysis.<br>The default value is 1.</p>
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
                     * 获取<p>true means using the new retrieval result return method, and output parameters AnalysisRecords and Columns are valid.<br>false means using the old retrieval result return method, and output AnalysisResults and ColNames are valid.<br>There is a slight difference in encoding format between the two return methods. Recommend using true.</p>
                     * @return UseNewAnalysis <p>true means using the new retrieval result return method, and output parameters AnalysisRecords and Columns are valid.<br>false means using the old retrieval result return method, and output AnalysisResults and ColNames are valid.<br>There is a slight difference in encoding format between the two return methods. Recommend using true.</p>
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置<p>true means using the new retrieval result return method, and output parameters AnalysisRecords and Columns are valid.<br>false means using the old retrieval result return method, and output AnalysisResults and ColNames are valid.<br>There is a slight difference in encoding format between the two return methods. Recommend using true.</p>
                     * @param _useNewAnalysis <p>true means using the new retrieval result return method, and output parameters AnalysisRecords and Columns are valid.<br>false means using the old retrieval result return method, and output AnalysisResults and ColNames are valid.<br>There is a slight difference in encoding format between the two return methods. Recommend using true.</p>
                     * 
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     * 
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Whether to highlight keywords that meet retrieval criteria, generally used for highlighting. Only key-value retrieval is supported, full-text retrieval is not supported.</p>
                     * @return HighLight <p>Whether to highlight keywords that meet retrieval criteria, generally used for highlighting. Only key-value retrieval is supported, full-text retrieval is not supported.</p>
                     * 
                     */
                    bool GetHighLight() const;

                    /**
                     * 设置<p>Whether to highlight keywords that meet retrieval criteria, generally used for highlighting. Only key-value retrieval is supported, full-text retrieval is not supported.</p>
                     * @param _highLight <p>Whether to highlight keywords that meet retrieval criteria, generally used for highlighting. Only key-value retrieval is supported, full-text retrieval is not supported.</p>
                     * 
                     */
                    void SetHighLight(const bool& _highLight);

                    /**
                     * 判断参数 HighLight 是否已赋值
                     * @return HighLight 是否已赋值
                     * 
                     */
                    bool HighLightHasBeenSet() const;

                    /**
                     * 获取<p><strong>The Query field is deprecated. Please use the QueryString field.</strong><br>Field differences: When the syntax rule is not specified, Query uses Lucene syntax by default, while QueryString uses CQL syntax. For syntax differences, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules">Syntax Rule</a>.</p>
                     * @return Query <p><strong>The Query field is deprecated. Please use the QueryString field.</strong><br>Field differences: When the syntax rule is not specified, Query uses Lucene syntax by default, while QueryString uses CQL syntax. For syntax differences, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules">Syntax Rule</a>.</p>
                     * @deprecated
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p><strong>The Query field is deprecated. Please use the QueryString field.</strong><br>Field differences: When the syntax rule is not specified, Query uses Lucene syntax by default, while QueryString uses CQL syntax. For syntax differences, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules">Syntax Rule</a>.</p>
                     * @param _query <p><strong>The Query field is deprecated. Please use the QueryString field.</strong><br>Field differences: When the syntax rule is not specified, Query uses Lucene syntax by default, while QueryString uses CQL syntax. For syntax differences, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules">Syntax Rule</a>.</p>
                     * @deprecated
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * @deprecated
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p><strong>The SyntaxRule field is deprecated. Please use the QuerySyntax field.</strong></p><p>Field differences:</p><ul><li>SyntaxRule is used in conjunction with the Query field and uses Lucene syntax by default.</li><li>QuerySyntax is used in conjunction with the QueryString field and uses CQL syntax by default.</li></ul><p>SyntaxRule parameter description:</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, a dedicated retrieval syntax for log service)</li></ul>
                     * @return SyntaxRule <p><strong>The SyntaxRule field is deprecated. Please use the QuerySyntax field.</strong></p><p>Field differences:</p><ul><li>SyntaxRule is used in conjunction with the Query field and uses Lucene syntax by default.</li><li>QuerySyntax is used in conjunction with the QueryString field and uses CQL syntax by default.</li></ul><p>SyntaxRule parameter description:</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, a dedicated retrieval syntax for log service)</li></ul>
                     * @deprecated
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置<p><strong>The SyntaxRule field is deprecated. Please use the QuerySyntax field.</strong></p><p>Field differences:</p><ul><li>SyntaxRule is used in conjunction with the Query field and uses Lucene syntax by default.</li><li>QuerySyntax is used in conjunction with the QueryString field and uses CQL syntax by default.</li></ul><p>SyntaxRule parameter description:</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, a dedicated retrieval syntax for log service)</li></ul>
                     * @param _syntaxRule <p><strong>The SyntaxRule field is deprecated. Please use the QuerySyntax field.</strong></p><p>Field differences:</p><ul><li>SyntaxRule is used in conjunction with the Query field and uses Lucene syntax by default.</li><li>QuerySyntax is used in conjunction with the QueryString field and uses CQL syntax by default.</li></ul><p>SyntaxRule parameter description:</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, a dedicated retrieval syntax for log service)</li></ul>
                     * @deprecated
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * @deprecated
                     */
                    bool SyntaxRuleHasBeenSet() const;

                private:

                    /**
                     * <p>Start time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>End time for logs to be searched and analyzed, <strong>Unix timestamp (ms)</strong></p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>The retrieval analysis statement has a maximum length of 12KB.<br>The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval condition]</a> | <a href="https://www.tencentcloud.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statement]</a>. When there is no need to perform statistical analysis on logs, the pipe character <code> | </code> and SQL statement can be omitted.<br>Use * or an empty string to search all logs.</p><p>Default value: empty string</p>
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * <p>Search syntax rules. Default value is 1. Recommended for use is 1.</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, dedicated retrieval syntax for log service)</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">retrieval condition syntax rules</a>.</p><p>Default value: 1</p>
                     */
                    uint64_t m_querySyntax;
                    bool m_querySyntaxHasBeenSet;

                    /**
                     * <ul><li>Log topic ID to be retrieved and analyzed. Only one can be specified.</li><li>If needed to retrieve multiple log topics at the same time, please use the Topics parameter.</li><li>TopicId and Topics cannot include both. Only select one in a single request.</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <ul><li>Log topic list for retrieval and analysis supports a maximum of 50 log topics.</li><li>Use TopicId to retrieve a single log topic.</li><li>TopicId and Topics cannot be used simultaneously. Only select one in a single request.</li></ul>
                     */
                    std::vector<MultiTopicSearchInformation> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>Whether raw logs are returned in time sequence. Value range: asc (ascending), desc (descending). Default is desc.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For SQL result sorting, see <a href="https://www.tencentcloud.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY syntax</a>.</li></ul>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Number of raw logs returned in a single query. Default is 100, maximum value is 1000.<br>Note:</p><ul><li>Only valid when the search and analysis statement (Query) does not contain SQL.</li><li>For the method for specifying SQL result count, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul><p>There are two methods to retrieve more logs:</p><ul><li>Context: Pass the Context value returned by the last API call to retrieve more logs. The total number of raw logs that can be obtained is up to 10,000 entries.</li><li>Offset: The offset refers to the line number from which raw logs start to return. There is no log entry limit.</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset of the raw log Query, indicating the line number from which the raw log starts to return, defaults to 0.<br>Note:</p><ul><li>Valid only when the retrieval statement (Query) does not contain SQL</li><li>Cannot be used with Context parameter simultaneously</li><li>Applicable only for single log topic retrieval</li></ul>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Pass the Context value returned by the last API call to obtain more logs later. The total number of raw logs that can be retrieved is up to 10,000 entries, with an expiration time of 1 hour.<br>Note:</p><ul><li>When passing this parameter, do not modify other parameters except this one.</li><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li><li>Valid only when the search and analysis statement (Query) does not contain SQL. For SQL to obtain follow-up results, see <a href="https://www.tencentcloud.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT syntax</a>.</li></ul>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>Whether to sample raw logs first and then perform statistical analysis when executing statistical analysis (SQL included in Query).<br>0: auto-sample;<br>0–1: sample at the specified sampling rate, such as 0.02;<br>1: indicates no sampling, that is, precise analysis.<br>The default value is 1.</p>
                     */
                    double m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * <p>true means using the new retrieval result return method, and output parameters AnalysisRecords and Columns are valid.<br>false means using the old retrieval result return method, and output AnalysisResults and ColNames are valid.<br>There is a slight difference in encoding format between the two return methods. Recommend using true.</p>
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                    /**
                     * <p>Whether to highlight keywords that meet retrieval criteria, generally used for highlighting. Only key-value retrieval is supported, full-text retrieval is not supported.</p>
                     */
                    bool m_highLight;
                    bool m_highLightHasBeenSet;

                    /**
                     * <p><strong>The Query field is deprecated. Please use the QueryString field.</strong><br>Field differences: When the syntax rule is not specified, Query uses Lucene syntax by default, while QueryString uses CQL syntax. For syntax differences, see <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules">Syntax Rule</a>.</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p><strong>The SyntaxRule field is deprecated. Please use the QuerySyntax field.</strong></p><p>Field differences:</p><ul><li>SyntaxRule is used in conjunction with the Query field and uses Lucene syntax by default.</li><li>QuerySyntax is used in conjunction with the QueryString field and uses CQL syntax by default.</li></ul><p>SyntaxRule parameter description:</p><ul><li>0: Lucene syntax</li><li>1: CQL syntax (CLS Query Language, a dedicated retrieval syntax for log service)</li></ul>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_
