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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRECORDINGRULETASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRECORDINGRULETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricLabel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyRecordingRuleTask request structure.
                */
                class ModifyRecordingRuleTaskRequest : public AbstractModel
                {
                public:
                    ModifyRecordingRuleTaskRequest();
                    ~ModifyRecordingRuleTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Source metric topic id</p>
                     * @return TopicId <p>Source metric topic id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Source metric topic id</p>
                     * @param _topicId <p>Source metric topic id</p>
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
                     * 获取<p>Target metric topic id.</p>
                     * @return DstTopicId <p>Target metric topic id.</p>
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置<p>Target metric topic id.</p>
                     * @param _dstTopicId <p>Target metric topic id.</p>
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Task Name</p>
                     * @return Name <p>Task Name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task Name</p>
                     * @param _name <p>Task Name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Task start status. 1: Enabled, 2: Disabled</p>
                     * @return EnableFlag <p>Task start status. 1: Enabled, 2: Disabled</p>
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置<p>Task start status. 1: Enabled, 2: Disabled</p>
                     * @param _enableFlag <p>Task start status. 1: Enabled, 2: Disabled</p>
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取<p>Schedule start time, Unix timestamp, in milliseconds</p>
                     * @return ProcessStartTime <p>Schedule start time, Unix timestamp, in milliseconds</p>
                     * 
                     */
                    int64_t GetProcessStartTime() const;

                    /**
                     * 设置<p>Schedule start time, Unix timestamp, in milliseconds</p>
                     * @param _processStartTime <p>Schedule start time, Unix timestamp, in milliseconds</p>
                     * 
                     */
                    void SetProcessStartTime(const int64_t& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scheduling interval (minutes), supported range (0,1440] minutes.</p>
                     * @return ProcessPeriod <p>Scheduling interval (minutes), supported range (0,1440] minutes.</p>
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置<p>Scheduling interval (minutes), supported range (0,1440] minutes.</p>
                     * @param _processPeriod <p>Scheduling interval (minutes), supported range (0,1440] minutes.</p>
                     * 
                     */
                    void SetProcessPeriod(const int64_t& _processPeriod);

                    /**
                     * 判断参数 ProcessPeriod 是否已赋值
                     * @return ProcessPeriod 是否已赋值
                     * 
                     */
                    bool ProcessPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Execution Delay (Seconds)</p>
                     * @return ProcessDelay <p>Execution Delay (Seconds)</p>
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置<p>Execution Delay (Seconds)</p>
                     * @param _processDelay <p>Execution Delay (Seconds)</p>
                     * 
                     */
                    void SetProcessDelay(const int64_t& _processDelay);

                    /**
                     * 判断参数 ProcessDelay 是否已赋值
                     * @return ProcessDelay 是否已赋值
                     * 
                     */
                    bool ProcessDelayHasBeenSet() const;

                    /**
                     * 获取<p>Metric name</p>
                     * @return MetricName <p>Metric name</p>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>Metric name</p>
                     * @param _metricName <p>Metric name</p>
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取<p>Execution statement (PromQL)</p>
                     * @return RecordingRuleContent <p>Execution statement (PromQL)</p>
                     * 
                     */
                    std::string GetRecordingRuleContent() const;

                    /**
                     * 设置<p>Execution statement (PromQL)</p>
                     * @param _recordingRuleContent <p>Execution statement (PromQL)</p>
                     * 
                     */
                    void SetRecordingRuleContent(const std::string& _recordingRuleContent);

                    /**
                     * 判断参数 RecordingRuleContent 是否已赋值
                     * @return RecordingRuleContent 是否已赋值
                     * 
                     */
                    bool RecordingRuleContentHasBeenSet() const;

                    /**
                     * 获取<p>Custom metric name</p>
                     * @return CustomMetricLabels <p>Custom metric name</p>
                     * 
                     */
                    std::vector<MetricLabel> GetCustomMetricLabels() const;

                    /**
                     * 设置<p>Custom metric name</p>
                     * @param _customMetricLabels <p>Custom metric name</p>
                     * 
                     */
                    void SetCustomMetricLabels(const std::vector<MetricLabel>& _customMetricLabels);

                    /**
                     * 判断参数 CustomMetricLabels 是否已赋值
                     * @return CustomMetricLabels 是否已赋值
                     * 
                     */
                    bool CustomMetricLabelsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * @return HasServicesLog <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * @param _hasServicesLog <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Source metric topic id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Target metric topic id.</p>
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * <p>Task Name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Task start status. 1: Enabled, 2: Disabled</p>
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>Schedule start time, Unix timestamp, in milliseconds</p>
                     */
                    int64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * <p>Scheduling interval (minutes), supported range (0,1440] minutes.</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>Execution Delay (Seconds)</p>
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * <p>Metric name</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>Execution statement (PromQL)</p>
                     */
                    std::string m_recordingRuleContent;
                    bool m_recordingRuleContentHasBeenSet;

                    /**
                     * <p>Custom metric name</p>
                     */
                    std::vector<MetricLabel> m_customMetricLabels;
                    bool m_customMetricLabelsHasBeenSet;

                    /**
                     * <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRECORDINGRULETASKREQUEST_H_
