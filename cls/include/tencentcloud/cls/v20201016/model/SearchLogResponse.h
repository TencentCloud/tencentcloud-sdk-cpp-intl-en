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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogInfo.h>
#include <tencentcloud/cls/v20201016/model/LogItems.h>
#include <tencentcloud/cls/v20201016/model/Column.h>
#include <tencentcloud/cls/v20201016/model/SearchLogTopics.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchLog response structure.
                */
                class SearchLogResponse : public AbstractModel
                {
                public:
                    SearchLogResponse();
                    ~SearchLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Pass through the Context value returned by this API to obtain more logs later. The expiration time is 1 hour.<br>Note:</p><ul><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li></ul>
                     * @return Context <p>Pass through the Context value returned by this API to obtain more logs later. The expiration time is 1 hour.<br>Note:</p><ul><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li></ul>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>Whether all logs meeting the retrieval criteria have been returned. If not, use Context parameter to retrieve more logs.<br>Note: This is only valid when the search and analysis statement (Query) does not contain SQL.</p>
                     * @return ListOver <p>Whether all logs meeting the retrieval criteria have been returned. If not, use Context parameter to retrieve more logs.<br>Note: This is only valid when the search and analysis statement (Query) does not contain SQL.</p>
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取<p>Whether the returned data is the SQL analysis result</p>
                     * @return Analysis <p>Whether the returned data is the SQL analysis result</p>
                     * 
                     */
                    bool GetAnalysis() const;

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     * 
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Raw logs matching the retrieval criteria</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Results <p>Raw logs matching the retrieval criteria</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LogInfo> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取<p>Column names of log statistics analysis results<br>This parameter is valid only when UseNewAnalysis is false</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColNames <p>Column names of log statistics analysis results<br>This parameter is valid only when UseNewAnalysis is false</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetColNames() const;

                    /**
                     * 判断参数 ColNames 是否已赋值
                     * @return ColNames 是否已赋值
                     * 
                     */
                    bool ColNamesHasBeenSet() const;

                    /**
                     * 获取<p>Statistical analysis results of logs<br>This parameter is valid only when UseNewAnalysis is false</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisResults <p>Statistical analysis results of logs<br>This parameter is valid only when UseNewAnalysis is false</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LogItems> GetAnalysisResults() const;

                    /**
                     * 判断参数 AnalysisResults 是否已赋值
                     * @return AnalysisResults 是否已赋值
                     * 
                     */
                    bool AnalysisResultsHasBeenSet() const;

                    /**
                     * 获取<p>Log statistics and analysis results<br>This parameter is valid only when UseNewAnalysis is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisRecords <p>Log statistics and analysis results<br>This parameter is valid only when UseNewAnalysis is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAnalysisRecords() const;

                    /**
                     * 判断参数 AnalysisRecords 是否已赋值
                     * @return AnalysisRecords 是否已赋值
                     * 
                     */
                    bool AnalysisRecordsHasBeenSet() const;

                    /**
                     * 获取<p>Column attribute of log statistics and analysis results<br>This parameter is valid only when UseNewAnalysis is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Columns <p>Column attribute of log statistics and analysis results<br>This parameter is valid only when UseNewAnalysis is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取<p>Sampling rate used in this analysis</p>
                     * @return SamplingRate <p>Sampling rate used in this analysis</p>
                     * 
                     */
                    double GetSamplingRate() const;

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取<p>When multiple log topics are used for retrieval, basic information of each log topic, such as error message.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Topics <p>When multiple log topics are used for retrieval, basic information of each log topic, such as error message.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SearchLogTopics GetTopics() const;

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * <p>Pass through the Context value returned by this API to obtain more logs later. The expiration time is 1 hour.<br>Note:</p><ul><li>Applicable only for single log topic retrieval. To retrieve multiple log topics, use the Context in Topics.</li></ul>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>Whether all logs meeting the retrieval criteria have been returned. If not, use Context parameter to retrieve more logs.<br>Note: This is only valid when the search and analysis statement (Query) does not contain SQL.</p>
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * <p>Whether the returned data is the SQL analysis result</p>
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * <p>Raw logs matching the retrieval criteria</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LogInfo> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * <p>Column names of log statistics analysis results<br>This parameter is valid only when UseNewAnalysis is false</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * <p>Statistical analysis results of logs<br>This parameter is valid only when UseNewAnalysis is false</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                    /**
                     * <p>Log statistics and analysis results<br>This parameter is valid only when UseNewAnalysis is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_analysisRecords;
                    bool m_analysisRecordsHasBeenSet;

                    /**
                     * <p>Column attribute of log statistics and analysis results<br>This parameter is valid only when UseNewAnalysis is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * <p>Sampling rate used in this analysis</p>
                     */
                    double m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * <p>When multiple log topics are used for retrieval, basic information of each log topic, such as error message.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SearchLogTopics m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_
