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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDBDIAGEVENTRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDBDIAGEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeDBDiagEvent response structure.
                */
                class DescribeDBDiagEventResponse : public AbstractModel
                {
                public:
                    DescribeDBDiagEventResponse();
                    ~DescribeDBDiagEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Diagnosis item.
                     * @return DiagItem Diagnosis item.
                     * 
                     */
                    std::string GetDiagItem() const;

                    /**
                     * 判断参数 DiagItem 是否已赋值
                     * @return DiagItem 是否已赋值
                     * 
                     */
                    bool DiagItemHasBeenSet() const;

                    /**
                     * 获取Diagnosis type.
                     * @return DiagType Diagnosis type.
                     * 
                     */
                    std::string GetDiagType() const;

                    /**
                     * 判断参数 DiagType 是否已赋值
                     * @return DiagType 是否已赋值
                     * 
                     */
                    bool DiagTypeHasBeenSet() const;

                    /**
                     * 获取Event ID.
                     * @return EventId Event ID.
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Event details.
                     * @return Explanation Event details.
                     * 
                     */
                    std::string GetExplanation() const;

                    /**
                     * 判断参数 Explanation 是否已赋值
                     * @return Explanation 是否已赋值
                     * 
                     */
                    bool ExplanationHasBeenSet() const;

                    /**
                     * 获取Summary.
                     * @return Outline Summary.
                     * 
                     */
                    std::string GetOutline() const;

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取Problem found.
                     * @return Problem Problem found.
                     * 
                     */
                    std::string GetProblem() const;

                    /**
                     * 判断参数 Problem 是否已赋值
                     * @return Problem 是否已赋值
                     * 
                     */
                    bool ProblemHasBeenSet() const;

                    /**
                     * 获取Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
                     * @return Severity Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Suggestion.
                     * @return Suggestions Suggestion.
                     * 
                     */
                    std::string GetSuggestions() const;

                    /**
                     * 判断参数 Suggestions 是否已赋值
                     * @return Suggestions 是否已赋值
                     * 
                     */
                    bool SuggestionsHasBeenSet() const;

                    /**
                     * 获取Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Metric Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Diagnosis item.
                     */
                    std::string m_diagItem;
                    bool m_diagItemHasBeenSet;

                    /**
                     * Diagnosis type.
                     */
                    std::string m_diagType;
                    bool m_diagTypeHasBeenSet;

                    /**
                     * Event ID.
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Event details.
                     */
                    std::string m_explanation;
                    bool m_explanationHasBeenSet;

                    /**
                     * Summary.
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * Problem found.
                     */
                    std::string m_problem;
                    bool m_problemHasBeenSet;

                    /**
                     * Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Suggestion.
                     */
                    std::string m_suggestions;
                    bool m_suggestionsHasBeenSet;

                    /**
                     * Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDBDIAGEVENTRESPONSE_H_
