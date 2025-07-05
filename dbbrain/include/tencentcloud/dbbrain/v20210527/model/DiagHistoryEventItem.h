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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DIAGHISTORYEVENTITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DIAGHISTORYEVENTITEM_H_

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
                * Instance diagnosis event
                */
                class DiagHistoryEventItem : public AbstractModel
                {
                public:
                    DiagHistoryEventItem();
                    ~DiagHistoryEventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Unique event ID.
                     * @return EventId Unique event ID.
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Unique event ID.
                     * @param _eventId Unique event ID.
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
                     * 获取Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
                     * @return Severity Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
                     * @param _severity Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
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
                     * 获取Diagnosis summary.
                     * @return Outline Diagnosis summary.
                     * 
                     */
                    std::string GetOutline() const;

                    /**
                     * 设置Diagnosis summary.
                     * @param _outline Diagnosis summary.
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
                     * 获取Diagnosis item description.
                     * @return DiagItem Diagnosis item description.
                     * 
                     */
                    std::string GetDiagItem() const;

                    /**
                     * 设置Diagnosis item description.
                     * @param _diagItem Diagnosis item description.
                     * 
                     */
                    void SetDiagItem(const std::string& _diagItem);

                    /**
                     * 判断参数 DiagItem 是否已赋值
                     * @return DiagItem 是否已赋值
                     * 
                     */
                    bool DiagItemHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Metric Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _metric Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Diagnosis type.
                     */
                    std::string m_diagType;
                    bool m_diagTypeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Unique event ID.
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Severity, which can be divided into 5 levels: 1: fatal, 2: severe, 3: warning, 4: notice, 5: healthy.
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Diagnosis summary.
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * Diagnosis item description.
                     */
                    std::string m_diagItem;
                    bool m_diagItemHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DIAGHISTORYEVENTITEM_H_
