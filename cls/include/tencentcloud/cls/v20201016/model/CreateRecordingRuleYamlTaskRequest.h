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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateRecordingRuleYamlTask request structure.
                */
                class CreateRecordingRuleYamlTaskRequest : public AbstractModel
                {
                public:
                    CreateRecordingRuleYamlTaskRequest();
                    ~CreateRecordingRuleYamlTaskRequest() = default;
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
                     * 获取<p>Scheduling period (minutes). Supported range (0,1440] minutes.</p><p>Measurement unit: minutes</p><p>Can also use interval: duration in YAML to set execution interval individually for each group.</p>
                     * @return ProcessPeriod <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p><p>Measurement unit: minutes</p><p>Can also use interval: duration in YAML to set execution interval individually for each group.</p>
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置<p>Scheduling period (minutes). Supported range (0,1440] minutes.</p><p>Measurement unit: minutes</p><p>Can also use interval: duration in YAML to set execution interval individually for each group.</p>
                     * @param _processPeriod <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p><p>Measurement unit: minutes</p><p>Can also use interval: duration in YAML to set execution interval individually for each group.</p>
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
                     * 获取<p>yaml configuration name</p>
                     * @return YamlConfigName <p>yaml configuration name</p>
                     * 
                     */
                    std::string GetYamlConfigName() const;

                    /**
                     * 设置<p>yaml configuration name</p>
                     * @param _yamlConfigName <p>yaml configuration name</p>
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
                     * 获取<p>yaml configuration content</p><p>Compatible with Prometheus Recording Rules configuration files. Please note the line breaks and indent in the string during API calls.</p>
                     * @return YamlContent <p>yaml configuration content</p><p>Compatible with Prometheus Recording Rules configuration files. Please note the line breaks and indent in the string during API calls.</p>
                     * 
                     */
                    std::string GetYamlContent() const;

                    /**
                     * 设置<p>yaml configuration content</p><p>Compatible with Prometheus Recording Rules configuration files. Please note the line breaks and indent in the string during API calls.</p>
                     * @param _yamlContent <p>yaml configuration content</p><p>Compatible with Prometheus Recording Rules configuration files. Please note the line breaks and indent in the string during API calls.</p>
                     * 
                     */
                    void SetYamlContent(const std::string& _yamlContent);

                    /**
                     * 判断参数 YamlContent 是否已赋值
                     * @return YamlContent 是否已赋值
                     * 
                     */
                    bool YamlContentHasBeenSet() const;

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
                     * <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p><p>Measurement unit: minutes</p><p>Can also use interval: duration in YAML to set execution interval individually for each group.</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>Execution delay. Set it to 30 seconds to avoid inaccuracy in pre-aggregation task calculation results due to latency in metric reporting.</p><p>Unit: seconds</p>
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * <p>yaml configuration name</p>
                     */
                    std::string m_yamlConfigName;
                    bool m_yamlConfigNameHasBeenSet;

                    /**
                     * <p>yaml configuration content</p><p>Compatible with Prometheus Recording Rules configuration files. Please note the line breaks and indent in the string during API calls.</p>
                     */
                    std::string m_yamlContent;
                    bool m_yamlContentHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKREQUEST_H_
