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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_

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
                     * 获取You can pass through the `Context` value (validity: 1 hour) returned by this API to continue to get more logs.
                     * @return Context You can pass through the `Context` value (validity: 1 hour) returned by this API to continue to get more logs.
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Whether to return all raw log query results. If not, you can use `Context` to continue to get logs.
Note: This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
                     * @return ListOver Whether to return all raw log query results. If not, you can use `Context` to continue to get logs.
Note: This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取Whether the returned data is the analysis (SQL) result
                     * @return Analysis Whether the returned data is the analysis (SQL) result
                     */
                    bool GetAnalysis() const;

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取Raw logs that meet the search conditions
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Results Raw logs that meet the search conditions
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<LogInfo> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取Column names of log analysis
This parameter is valid only when `UseNewAnalysis` is `false`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ColNames Column names of log analysis
This parameter is valid only when `UseNewAnalysis` is `false`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetColNames() const;

                    /**
                     * 判断参数 ColNames 是否已赋值
                     * @return ColNames 是否已赋值
                     */
                    bool ColNamesHasBeenSet() const;

                    /**
                     * 获取Log analysis result
This parameter is valid only when `UseNewAnalysis` is `false`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AnalysisResults Log analysis result
This parameter is valid only when `UseNewAnalysis` is `false`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<LogItems> GetAnalysisResults() const;

                    /**
                     * 判断参数 AnalysisResults 是否已赋值
                     * @return AnalysisResults 是否已赋值
                     */
                    bool AnalysisResultsHasBeenSet() const;

                    /**
                     * 获取Log analysis result
This parameter is valid only when `UseNewAnalysis` is `true`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AnalysisRecords Log analysis result
This parameter is valid only when `UseNewAnalysis` is `true`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetAnalysisRecords() const;

                    /**
                     * 判断参数 AnalysisRecords 是否已赋值
                     * @return AnalysisRecords 是否已赋值
                     */
                    bool AnalysisRecordsHasBeenSet() const;

                    /**
                     * 获取Column attributes of log analysis
This parameter is valid only when `UseNewAnalysis` is `true`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Columns Column attributes of log analysis
This parameter is valid only when `UseNewAnalysis` is `true`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * You can pass through the `Context` value (validity: 1 hour) returned by this API to continue to get more logs.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Whether to return all raw log query results. If not, you can use `Context` to continue to get logs.
Note: This parameter is valid only when the query statement (`Query`) does not contain an SQL statement.
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * Whether the returned data is the analysis (SQL) result
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * Raw logs that meet the search conditions
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<LogInfo> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * Column names of log analysis
This parameter is valid only when `UseNewAnalysis` is `false`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * Log analysis result
This parameter is valid only when `UseNewAnalysis` is `false`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<LogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                    /**
                     * Log analysis result
This parameter is valid only when `UseNewAnalysis` is `true`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_analysisRecords;
                    bool m_analysisRecordsHasBeenSet;

                    /**
                     * Column attributes of log analysis
This parameter is valid only when `UseNewAnalysis` is `true`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_
