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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_EVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Exception information.
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID.
                     * @return EventId Event ID.
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Event ID.
                     * @param _eventId Event ID.
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Diagnosis type.
                     * @return DiagType Diagnosis type.
                     * 
                     */
                    std::string GetDiagType() const;

                    /**
                     * 设置Diagnosis type.
                     * @param _diagType Diagnosis type.
                     * 
                     */
                    void SetDiagType(const std::string& _diagType);

                    /**
                     * 判断参数 DiagType 是否已赋值
                     * @return DiagType 是否已赋值
                     * 
                     */
                    bool DiagTypeHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Summary.
                     * @return Outline Summary.
                     * 
                     */
                    std::string GetOutline() const;

                    /**
                     * 设置Summary.
                     * @param _outline Summary.
                     * 
                     */
                    void SetOutline(const std::string& _outline);

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取Severity, which can be divided into 5 levels: `1` (Critical), `2` (Severe), `3` (Alarm), `4` (Reminder), `5` (Healthy).
                     * @return Severity Severity, which can be divided into 5 levels: `1` (Critical), `2` (Severe), `3` (Alarm), `4` (Reminder), `5` (Healthy).
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置Severity, which can be divided into 5 levels: `1` (Critical), `2` (Severe), `3` (Alarm), `4` (Reminder), `5` (Healthy).
                     * @param _severity Severity, which can be divided into 5 levels: `1` (Critical), `2` (Severe), `3` (Alarm), `4` (Reminder), `5` (Healthy).
                     * 
                     */
                    void SetSeverity(const int64_t& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取Deduction.
                     * @return ScoreLost Deduction.
                     * 
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置Deduction.
                     * @param _scoreLost Deduction.
                     * 
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     * 
                     */
                    bool ScoreLostHasBeenSet() const;

                    /**
                     * 获取Reserved field.
                     * @return Metric Reserved field.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Reserved field.
                     * @param _metric Reserved field.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Number of alarms.
                     * @return Count Number of alarms.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of alarms.
                     * @param _count Number of alarms.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Event ID.
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Diagnosis type.
                     */
                    std::string m_diagType;
                    bool m_diagTypeHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Summary.
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * Severity, which can be divided into 5 levels: `1` (Critical), `2` (Severe), `3` (Alarm), `4` (Reminder), `5` (Healthy).
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Deduction.
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                    /**
                     * Reserved field.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Number of alarms.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_EVENTINFO_H_
