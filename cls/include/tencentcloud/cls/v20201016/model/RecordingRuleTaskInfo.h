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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULETASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Pre-aggregation task details.
                */
                class RecordingRuleTaskInfo : public AbstractModel
                {
                public:
                    RecordingRuleTaskInfo();
                    ~RecordingRuleTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pre-aggregation task ID.
                     * @return TaskId Pre-aggregation task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Pre-aggregation task ID.
                     * @param _taskId Pre-aggregation task ID.
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
                     * 获取Source Log Topic ID
                     * @return TopicId Source Log Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Source Log Topic ID
                     * @param _topicId Source Log Topic ID
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
                     * 获取Pre-aggregation task name.
                     * @return Name Pre-aggregation task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pre-aggregation task name.
                     * @param _name Pre-aggregation task name.
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
                     * 获取Creation Time
                     * @return CreateTime Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Time
                     * @param _createTime Creation Time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task Update Time
                     * @return UpdateTime Task Update Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task Update Time
                     * @param _updateTime Task Update Time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Task status: 1: Running 2: Stopped 3: Error - Source log topic not found 4: Error - Target topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     * @return Status Task status: 1: Running 2: Stopped 3: Error - Source log topic not found 4: Error - Target topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status: 1: Running 2: Stopped 3: Error - Source log topic not found 4: Error - Target topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     * @param _status Task status: 1: Running 2: Stopped 3: Error - Source log topic not found 4: Error - Target topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task status: 1 Enabled, 2 Disabled
                     * @return EnableFlag Task status: 1 Enabled, 2 Disabled
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置Task status: 1 Enabled, 2 Disabled
                     * @param _enableFlag Task status: 1 Enabled, 2 Disabled
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
                     * 获取Schedule Start Time
                     * @return ProcessStartTime Schedule Start Time
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置Schedule Start Time
                     * @param _processStartTime Schedule Start Time
                     * 
                     */
                    void SetProcessStartTime(const uint64_t& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取Scheduling Interval (Minutes)
                     * @return ProcessPeriod Scheduling Interval (Minutes)
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置Scheduling Interval (Minutes)
                     * @param _processPeriod Scheduling Interval (Minutes)
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
                     * 获取Execution Delay (Seconds)
                     * @return ProcessDelay Execution Delay (Seconds)
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置Execution Delay (Seconds)
                     * @param _processDelay Execution Delay (Seconds)
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
                     * 获取Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @return HasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @param _hasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取Pre-aggregation search statement.
                     * @return RecordingRuleContent Pre-aggregation search statement.
                     * 
                     */
                    std::string GetRecordingRuleContent() const;

                    /**
                     * 设置Pre-aggregation search statement.
                     * @param _recordingRuleContent Pre-aggregation search statement.
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
                     * 获取Metric name
                     * @return MetricName Metric name
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name
                     * @param _metricName Metric name
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
                     * 获取Custom metric name.
                     * @return CustomMetricLabels Custom metric name.
                     * 
                     */
                    std::vector<MetricLabel> GetCustomMetricLabels() const;

                    /**
                     * 设置Custom metric name.
                     * @param _customMetricLabels Custom metric name.
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
                     * 获取YAML configuration file ID.
                     * @return YamlId YAML configuration file ID.
                     * 
                     */
                    std::string GetYamlId() const;

                    /**
                     * 设置YAML configuration file ID.
                     * @param _yamlId YAML configuration file ID.
                     * 
                     */
                    void SetYamlId(const std::string& _yamlId);

                    /**
                     * 判断参数 YamlId 是否已赋值
                     * @return YamlId 是否已赋值
                     * 
                     */
                    bool YamlIdHasBeenSet() const;

                    /**
                     * 获取YAML configuration file name.
                     * @return YamlConfigName YAML configuration file name.
                     * 
                     */
                    std::string GetYamlConfigName() const;

                    /**
                     * 设置YAML configuration file name.
                     * @param _yamlConfigName YAML configuration file name.
                     * 
                     */
                    void SetYamlConfigName(const std::string& _yamlConfigName);

                    /**
                     * 判断参数 YamlConfigName 是否已赋值
                     * @return YamlConfigName 是否已赋值
                     * 
                     */
                    bool YamlConfigNameHasBeenSet() const;

                    /**
                     * 获取Target log topic ID
                     * @return DstTopicId Target log topic ID
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置Target log topic ID
                     * @param _dstTopicId Target log topic ID
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                private:

                    /**
                     * Pre-aggregation task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Source Log Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Pre-aggregation task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task Update Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Task status: 1: Running 2: Stopped 3: Error - Source log topic not found 4: Error - Target topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task status: 1 Enabled, 2 Disabled
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Schedule Start Time
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * Scheduling Interval (Minutes)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * Execution Delay (Seconds)
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * Pre-aggregation search statement.
                     */
                    std::string m_recordingRuleContent;
                    bool m_recordingRuleContentHasBeenSet;

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Custom metric name.
                     */
                    std::vector<MetricLabel> m_customMetricLabels;
                    bool m_customMetricLabelsHasBeenSet;

                    /**
                     * YAML configuration file ID.
                     */
                    std::string m_yamlId;
                    bool m_yamlIdHasBeenSet;

                    /**
                     * YAML configuration file name.
                     */
                    std::string m_yamlConfigName;
                    bool m_yamlConfigNameHasBeenSet;

                    /**
                     * Target log topic ID
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULETASKINFO_H_
