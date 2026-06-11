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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICSUBSCRIBEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICSUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Metric subscription configuration information.
                */
                class MetricSubscribeInfo : public AbstractModel
                {
                public:
                    MetricSubscribeInfo();
                    ~MetricSubscribeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subscription task ID.
                     * @return TaskId Subscription task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Subscription task ID.
                     * @param _taskId Subscription task ID.
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
                     * 获取Log topic ID.
                     * @return TopicId Log topic ID.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID.
                     * @param _topicId Log topic ID.
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
                     * 获取Subscription task name.
                     * @return Name Subscription task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subscription task name.
                     * @param _name Subscription task name.
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
                     * 获取Subscription task switch. Valid values: 1: paused; 2: enabled.
                     * @return Enable Subscription task switch. Valid values: 1: paused; 2: enabled.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Subscription task switch. Valid values: 1: paused; 2: enabled.
                     * @param _enable Subscription task switch. Valid values: 1: paused; 2: enabled.
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Subscription task running status. Valid values: 0 creating; 1: paused; 2: running; 3: abnormal.
                     * @return Status Subscription task running status. Valid values: 0 creating; 1: paused; 2: running; 3: abnormal.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Subscription task running status. Valid values: 0 creating; 1: paused; 2: running; 3: abnormal.
                     * @param _status Subscription task running status. Valid values: 0 creating; 1: paused; 2: running; 3: abnormal.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error information occurred when a subscription task runs abnormally.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrMsg Error information occurred when a subscription task runs abnormally.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error information occurred when a subscription task runs abnormally.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errMsg Error information occurred when a subscription task runs abnormally.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取Creation time (timestamp in seconds)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time (timestamp in seconds)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time (timestamp in seconds)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time (timestamp in seconds)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time (second-level timestamp)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time (second-level timestamp)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time (second-level timestamp)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time (second-level timestamp)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Subscription task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Log topic ID.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Subscription task name.
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
                     * Subscription task switch. Valid values: 1: paused; 2: enabled.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Subscription task running status. Valid values: 0 creating; 1: paused; 2: running; 3: abnormal.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error information occurred when a subscription task runs abnormally.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Creation time (timestamp in seconds)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time (second-level timestamp)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICSUBSCRIBEINFO_H_
