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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULETASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULETASKREQUEST_H_

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
                * CreateRecordingRuleTask request structure.
                */
                class CreateRecordingRuleTaskRequest : public AbstractModel
                {
                public:
                    CreateRecordingRuleTaskRequest();
                    ~CreateRecordingRuleTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Source metric topic id</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">metric topic</a></li></ul>
                     * @return TopicId <p>Source metric topic id</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">metric topic</a></li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Source metric topic id</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">metric topic</a></li></ul>
                     * @param _topicId <p>Source metric topic id</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">metric topic</a></li></ul>
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
                     * 获取<p>Target metric topic id, which can be the same as TopicId.</p>
                     * @return DstTopicId <p>Target metric topic id, which can be the same as TopicId.</p>
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置<p>Target metric topic id, which can be the same as TopicId.</p>
                     * @param _dstTopicId <p>Target metric topic id, which can be the same as TopicId.</p>
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
                     * 获取<p>Pre-aggregation task name</p><p>Input parameter restrictions: Only letters, numbers, and underscores are allowed. Cannot begin with an underscore. Less than 256 characters.</p>
                     * @return Name <p>Pre-aggregation task name</p><p>Input parameter restrictions: Only letters, numbers, and underscores are allowed. Cannot begin with an underscore. Less than 256 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Pre-aggregation task name</p><p>Input parameter restrictions: Only letters, numbers, and underscores are allowed. Cannot begin with an underscore. Less than 256 characters.</p>
                     * @param _name <p>Pre-aggregation task name</p><p>Input parameter restrictions: Only letters, numbers, and underscores are allowed. Cannot begin with an underscore. Less than 256 characters.</p>
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
                     * 获取<p>Task status. Valid values: 1: enabled; 2: disabled.</p>
                     * @return EnableFlag <p>Task status. Valid values: 1: enabled; 2: disabled.</p>
                     * 
                     */
                    uint64_t GetEnableFlag() const;

                    /**
                     * 设置<p>Task status. Valid values: 1: enabled; 2: disabled.</p>
                     * @param _enableFlag <p>Task status. Valid values: 1: enabled; 2: disabled.</p>
                     * 
                     */
                    void SetEnableFlag(const uint64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取<p>Execution start time, Unix timestamp.</p><p>Unit: ms.</p>
                     * @return ProcessStartTime <p>Execution start time, Unix timestamp.</p><p>Unit: ms.</p>
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置<p>Execution start time, Unix timestamp.</p><p>Unit: ms.</p>
                     * @param _processStartTime <p>Execution start time, Unix timestamp.</p><p>Unit: ms.</p>
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
                     * 获取<p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     * @return ProcessPeriod <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置<p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     * @param _processPeriod <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
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
                     * 获取<p>Execution delay. Set it to 30 seconds to avoid inaccuracy in pre-aggregation task calculation results due to latency in metric reporting.</p><p>Unit: seconds</p>
                     * @return ProcessDelay <p>Execution delay. Set it to 30 seconds to avoid inaccuracy in pre-aggregation task calculation results due to latency in metric reporting.</p><p>Unit: seconds</p>
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置<p>Execution delay. Set it to 30 seconds to avoid inaccuracy in pre-aggregation task calculation results due to latency in metric reporting.</p><p>Unit: seconds</p>
                     * @param _processDelay <p>Execution delay. Set it to 30 seconds to avoid inaccuracy in pre-aggregation task calculation results due to latency in metric reporting.</p><p>Unit: seconds</p>
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
                     * 获取<p>Metric custom dimension</p>
                     * @return CustomMetricLabels <p>Metric custom dimension</p>
                     * 
                     */
                    std::vector<MetricLabel> GetCustomMetricLabels() const;

                    /**
                     * 设置<p>Metric custom dimension</p>
                     * @param _customMetricLabels <p>Metric custom dimension</p>
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
                     * 获取<p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
                     * @return HasServicesLog <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
                     * @param _hasServicesLog <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
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
                     * <p>Source metric topic id</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">metric topic</a></li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Target metric topic id, which can be the same as TopicId.</p>
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * <p>Pre-aggregation task name</p><p>Input parameter restrictions: Only letters, numbers, and underscores are allowed. Cannot begin with an underscore. Less than 256 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Task status. Valid values: 1: enabled; 2: disabled.</p>
                     */
                    uint64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>Execution start time, Unix timestamp.</p><p>Unit: ms.</p>
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>Execution delay. Set it to 30 seconds to avoid inaccuracy in pre-aggregation task calculation results due to latency in metric reporting.</p><p>Unit: seconds</p>
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * <p>Execution statement (PromQL)</p>
                     */
                    std::string m_recordingRuleContent;
                    bool m_recordingRuleContentHasBeenSet;

                    /**
                     * <p>Metric name</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>Metric custom dimension</p>
                     */
                    std::vector<MetricLabel> m_customMetricLabels;
                    bool m_customMetricLabelsHasBeenSet;

                    /**
                     * <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULETASKREQUEST_H_
