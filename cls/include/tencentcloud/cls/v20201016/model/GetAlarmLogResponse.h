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
                     * 获取`Context` for loading subsequent content
                     * @return Context `Context` for loading subsequent content
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
                     * 获取Whether all log query results are returned
                     * @return ListOver Whether all log query results are returned
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
                     * 获取Whether the return is the analysis result
                     * @return Analysis Whether the return is the analysis result
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
                     * 获取If `Analysis` is `true`, column name of the analysis result will be returned; otherwise, empty content will be returned.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ColNames If `Analysis` is `true`, column name of the analysis result will be returned; otherwise, empty content will be returned.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Log query result. If `Analysis` is `True`, `null` may be returned
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Results Log query result. If `Analysis` is `True`, `null` may be returned
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Log analysis result. If `Analysis` is `False`, `null` may be returned
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AnalysisResults Log analysis result. If `Analysis` is `False`, `null` may be returned
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取New log analysis result, which will be valid if `UseNewAnalysis` is `true`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AnalysisRecords New log analysis result, which will be valid if `UseNewAnalysis` is `true`
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Column attribute of log analysis, which will be valid if `UseNewAnalysis` is `true`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Columns Column attribute of log analysis, which will be valid if `UseNewAnalysis` is `true`
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * `Context` for loading subsequent content
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Whether all log query results are returned
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * Whether the return is the analysis result
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * If `Analysis` is `true`, column name of the analysis result will be returned; otherwise, empty content will be returned.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * Log query result. If `Analysis` is `True`, `null` may be returned
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<LogInfo> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * Log analysis result. If `Analysis` is `False`, `null` may be returned
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<LogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                    /**
                     * New log analysis result, which will be valid if `UseNewAnalysis` is `true`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_analysisRecords;
                    bool m_analysisRecordsHasBeenSet;

                    /**
                     * Column attribute of log analysis, which will be valid if `UseNewAnalysis` is `true`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGRESPONSE_H_
