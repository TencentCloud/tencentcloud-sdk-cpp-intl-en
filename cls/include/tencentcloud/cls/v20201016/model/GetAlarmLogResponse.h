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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogInfo.h>
#include <tencentcloud/cls/v20201016/model/LogItems.h>
#include <tencentcloud/cls/v20201016/model/Column.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * GetAlarmLog response structure.
                */
                class GetAlarmLogResponse : public AbstractModel
                {
                public:
                    GetAlarmLogResponse();
                    ~GetAlarmLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Context for loading subsequent details
                     * @return Context Context for loading subsequent details
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
                     * 获取Whether alarm execution details within a specified time range are fully returned
                     * @return ListOver Whether alarm execution details within a specified time range are fully returned
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
                     * 获取Whether return value is SQL analysis result or not
                     * @return Analysis Whether return value is SQL analysis result or not
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
                     * 获取Column names of analysis results. If the Query statement contains an SQL query, then column names of the queried fields will be returned;Otherwise, it will be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColNames Column names of analysis results. If the Query statement contains an SQL query, then column names of the queried fields will be returned;Otherwise, it will be empty.
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
                     * 获取Execution details query results.
When there is no SQL statement in the Query field, it returns query results.
When there is an SQL statement in the Query field, it may return null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Results Execution details query results.
When there is no SQL statement in the Query field, it returns query results.
When there is an SQL statement in the Query field, it may return null.
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
                     * 获取Execution details statistical analysis results. When there is an SQL statement in the Query field, it returns SQL statistical results; otherwise, it may return null.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisResults Execution details statistical analysis results. When there is an SQL statement in the Query field, it returns SQL statistical results; otherwise, it may return null.

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
                     * 获取Execution details statistical analysis results; only valid if UseNewAnalysis is true.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisRecords Execution details statistical analysis results; only valid if UseNewAnalysis is true.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Column names of analysis results, valid only if UseNewAnalysis is trueNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Columns Column names of analysis results, valid only if UseNewAnalysis is trueNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * Context for loading subsequent details
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Whether alarm execution details within a specified time range are fully returned
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * Whether return value is SQL analysis result or not
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * Column names of analysis results. If the Query statement contains an SQL query, then column names of the queried fields will be returned;Otherwise, it will be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * Execution details query results.
When there is no SQL statement in the Query field, it returns query results.
When there is an SQL statement in the Query field, it may return null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LogInfo> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * Execution details statistical analysis results. When there is an SQL statement in the Query field, it returns SQL statistical results; otherwise, it may return null.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                    /**
                     * Execution details statistical analysis results; only valid if UseNewAnalysis is true.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_analysisRecords;
                    bool m_analysisRecordsHasBeenSet;

                    /**
                     * Column names of analysis results, valid only if UseNewAnalysis is trueNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGRESPONSE_H_
