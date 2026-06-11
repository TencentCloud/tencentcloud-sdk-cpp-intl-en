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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMETRICSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMETRICSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricConfig.h>
#include <tencentcloud/cls/v20201016/model/InstanceConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyMetricSubscribe request structure.
                */
                class ModifyMetricSubscribeRequest : public AbstractModel
                {
                public:
                    ModifyMetricSubscribeRequest();
                    ~ModifyMetricSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID of a metric collection task. This parameter is required.
                     * @return TopicId Log topic ID of a metric collection task. This parameter is required.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID of a metric collection task. This parameter is required.
                     * @param _topicId Log topic ID of a metric collection task. This parameter is required.
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
                     * 获取Metric collection task ID. This parameter is required.
                     * @return TaskId Metric collection task ID. This parameter is required.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Metric collection task ID. This parameter is required.
                     * @param _taskId Metric collection task ID. This parameter is required.
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
                     * 获取Name. It can contain a maximum of 64 characters and should start with a letter. Digits (0-9), uppercase letters (A-Z), lowercase letters (a-z), underscores (_), and Chinese characters are allowed.
                     * @return Name Name. It can contain a maximum of 64 characters and should start with a letter. Digits (0-9), uppercase letters (A-Z), lowercase letters (a-z), underscores (_), and Chinese characters are allowed.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name. It can contain a maximum of 64 characters and should start with a letter. Digits (0-9), uppercase letters (A-Z), lowercase letters (a-z), underscores (_), and Chinese characters are allowed.
                     * @param _name Name. It can contain a maximum of 64 characters and should start with a letter. Digits (0-9), uppercase letters (A-Z), lowercase letters (a-z), underscores (_), and Chinese characters are allowed.
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
                     * 获取Cloud product namespace.
                     * @return Namespace Cloud product namespace.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Cloud product namespace.
                     * @param _namespace Cloud product namespace.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Metric configuration information.
                     * @return Metrics Metric configuration information.
                     * 
                     */
                    std::vector<MetricConfig> GetMetrics() const;

                    /**
                     * 设置Metric configuration information.
                     * @param _metrics Metric configuration information.
                     * 
                     */
                    void SetMetrics(const std::vector<MetricConfig>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Instance configuration information.
                     * @return InstanceInfo Instance configuration information.
                     * 
                     */
                    InstanceConfig GetInstanceInfo() const;

                    /**
                     * 设置Instance configuration information.
                     * @param _instanceInfo Instance configuration information.
                     * 
                     */
                    void SetInstanceInfo(const InstanceConfig& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取Task status.

1: disabled

2: Enable
                     * @return Enable Task status.

1: disabled

2: Enable
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Task status.

1: disabled

2: Enable
                     * @param _enable Task status.

1: disabled

2: Enable
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Log topic ID of a metric collection task. This parameter is required.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Metric collection task ID. This parameter is required.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Name. It can contain a maximum of 64 characters and should start with a letter. Digits (0-9), uppercase letters (A-Z), lowercase letters (a-z), underscores (_), and Chinese characters are allowed.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cloud product namespace.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Metric configuration information.
                     */
                    std::vector<MetricConfig> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Instance configuration information.
                     */
                    InstanceConfig m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * Task status.

1: disabled

2: Enable
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMETRICSUBSCRIBEREQUEST_H_
