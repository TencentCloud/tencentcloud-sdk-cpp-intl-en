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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICERESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICERESPONSE_H_

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
                * OpenClawService response structure.
                */
                class OpenClawServiceResponse : public AbstractModel
                {
                public:
                    OpenClawServiceResponse();
                    ~OpenClawServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Logset id</p><p><a href="https://www.tencentcloud.com/document/product/614/41034?from_cn_redirect=1">Logset document</a></p>
                     * @return LogsetId <p>Logset id</p><p><a href="https://www.tencentcloud.com/document/product/614/41034?from_cn_redirect=1">Logset document</a></p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>Logset name</p>
                     * @return LogsetName <p>Logset name</p>
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取<p>Log topic id</p><p><a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">Log topic document</a></p>
                     * @return TopicId <p>Log topic id</p><p><a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">Log topic document</a></p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Log topic name</p>
                     * @return TopicName <p>Log topic name</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>Metric topic id</p><p><a href="https://www.tencentcloud.com/document/product/614/90328?from_cn_redirect=1">Metric topic document</a></p>
                     * @return MetricTopicId <p>Metric topic id</p><p><a href="https://www.tencentcloud.com/document/product/614/90328?from_cn_redirect=1">Metric topic document</a></p>
                     * 
                     */
                    std::string GetMetricTopicId() const;

                    /**
                     * 判断参数 MetricTopicId 是否已赋值
                     * @return MetricTopicId 是否已赋值
                     * 
                     */
                    bool MetricTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Metric topic name</p>
                     * @return MetricTopicName <p>Metric topic name</p>
                     * 
                     */
                    std::string GetMetricTopicName() const;

                    /**
                     * 判断参数 MetricTopicName 是否已赋值
                     * @return MetricTopicName 是否已赋值
                     * 
                     */
                    bool MetricTopicNameHasBeenSet() const;

                    /**
                     * 获取<p>Bound machine group id</p><p><a href="https://www.tencentcloud.com/document/product/614/17412?from_cn_redirect=1">Machine group document</a></p>
                     * @return MachineGroupId <p>Bound machine group id</p><p><a href="https://www.tencentcloud.com/document/product/614/17412?from_cn_redirect=1">Machine group document</a></p>
                     * 
                     */
                    std::string GetMachineGroupId() const;

                    /**
                     * 判断参数 MachineGroupId 是否已赋值
                     * @return MachineGroupId 是否已赋值
                     * 
                     */
                    bool MachineGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Machine group name</p>
                     * @return MachineGroupName <p>Machine group name</p>
                     * 
                     */
                    std::string GetMachineGroupName() const;

                    /**
                     * 判断参数 MachineGroupName 是否已赋值
                     * @return MachineGroupName 是否已赋值
                     * 
                     */
                    bool MachineGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>Collection configuration id. Application log</p><p><a href="https://www.tencentcloud.com/document/product/614/33494?from_cn_redirect=1">Collection overview document</a> - <a href="https://www.tencentcloud.com/document/product/614/57497?from_cn_redirect=1">LogListener collection configuration import</a></p>
                     * @return AppLogConfigId <p>Collection configuration id. Application log</p><p><a href="https://www.tencentcloud.com/document/product/614/33494?from_cn_redirect=1">Collection overview document</a> - <a href="https://www.tencentcloud.com/document/product/614/57497?from_cn_redirect=1">LogListener collection configuration import</a></p>
                     * 
                     */
                    std::string GetAppLogConfigId() const;

                    /**
                     * 判断参数 AppLogConfigId 是否已赋值
                     * @return AppLogConfigId 是否已赋值
                     * 
                     */
                    bool AppLogConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Collection configuration name. Application log</p>
                     * @return AppLogConfigName <p>Collection configuration name. Application log</p>
                     * 
                     */
                    std::string GetAppLogConfigName() const;

                    /**
                     * 判断参数 AppLogConfigName 是否已赋值
                     * @return AppLogConfigName 是否已赋值
                     * 
                     */
                    bool AppLogConfigNameHasBeenSet() const;

                    /**
                     * 获取<p>Collection configuration id. Session log</p><p><a href="https://www.tencentcloud.com/document/product/614/33494?from_cn_redirect=1">Collection overview document</a> - <a href="https://www.tencentcloud.com/document/product/614/57497?from_cn_redirect=1">LogListener collection configuration import</a></p>
                     * @return SessionLogConfigId <p>Collection configuration id. Session log</p><p><a href="https://www.tencentcloud.com/document/product/614/33494?from_cn_redirect=1">Collection overview document</a> - <a href="https://www.tencentcloud.com/document/product/614/57497?from_cn_redirect=1">LogListener collection configuration import</a></p>
                     * 
                     */
                    std::string GetSessionLogConfigId() const;

                    /**
                     * 判断参数 SessionLogConfigId 是否已赋值
                     * @return SessionLogConfigId 是否已赋值
                     * 
                     */
                    bool SessionLogConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Collection configuration name. Session log</p>
                     * @return SessionLogConfigName <p>Collection configuration name. Session log</p>
                     * 
                     */
                    std::string GetSessionLogConfigName() const;

                    /**
                     * 判断参数 SessionLogConfigName 是否已赋值
                     * @return SessionLogConfigName 是否已赋值
                     * 
                     */
                    bool SessionLogConfigNameHasBeenSet() const;

                    /**
                     * 获取<p>trace topic ID</p>
                     * @return TraceTopicId <p>trace topic ID</p>
                     * 
                     */
                    std::string GetTraceTopicId() const;

                    /**
                     * 判断参数 TraceTopicId 是否已赋值
                     * @return TraceTopicId 是否已赋值
                     * 
                     */
                    bool TraceTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>trace topic name</p>
                     * @return TraceTopicName <p>trace topic name</p>
                     * 
                     */
                    std::string GetTraceTopicName() const;

                    /**
                     * 判断参数 TraceTopicName 是否已赋值
                     * @return TraceTopicName 是否已赋值
                     * 
                     */
                    bool TraceTopicNameHasBeenSet() const;

                private:

                    /**
                     * <p>Logset id</p><p><a href="https://www.tencentcloud.com/document/product/614/41034?from_cn_redirect=1">Logset document</a></p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Logset name</p>
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * <p>Log topic id</p><p><a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">Log topic document</a></p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Log topic name</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Metric topic id</p><p><a href="https://www.tencentcloud.com/document/product/614/90328?from_cn_redirect=1">Metric topic document</a></p>
                     */
                    std::string m_metricTopicId;
                    bool m_metricTopicIdHasBeenSet;

                    /**
                     * <p>Metric topic name</p>
                     */
                    std::string m_metricTopicName;
                    bool m_metricTopicNameHasBeenSet;

                    /**
                     * <p>Bound machine group id</p><p><a href="https://www.tencentcloud.com/document/product/614/17412?from_cn_redirect=1">Machine group document</a></p>
                     */
                    std::string m_machineGroupId;
                    bool m_machineGroupIdHasBeenSet;

                    /**
                     * <p>Machine group name</p>
                     */
                    std::string m_machineGroupName;
                    bool m_machineGroupNameHasBeenSet;

                    /**
                     * <p>Collection configuration id. Application log</p><p><a href="https://www.tencentcloud.com/document/product/614/33494?from_cn_redirect=1">Collection overview document</a> - <a href="https://www.tencentcloud.com/document/product/614/57497?from_cn_redirect=1">LogListener collection configuration import</a></p>
                     */
                    std::string m_appLogConfigId;
                    bool m_appLogConfigIdHasBeenSet;

                    /**
                     * <p>Collection configuration name. Application log</p>
                     */
                    std::string m_appLogConfigName;
                    bool m_appLogConfigNameHasBeenSet;

                    /**
                     * <p>Collection configuration id. Session log</p><p><a href="https://www.tencentcloud.com/document/product/614/33494?from_cn_redirect=1">Collection overview document</a> - <a href="https://www.tencentcloud.com/document/product/614/57497?from_cn_redirect=1">LogListener collection configuration import</a></p>
                     */
                    std::string m_sessionLogConfigId;
                    bool m_sessionLogConfigIdHasBeenSet;

                    /**
                     * <p>Collection configuration name. Session log</p>
                     */
                    std::string m_sessionLogConfigName;
                    bool m_sessionLogConfigNameHasBeenSet;

                    /**
                     * <p>trace topic ID</p>
                     */
                    std::string m_traceTopicId;
                    bool m_traceTopicIdHasBeenSet;

                    /**
                     * <p>trace topic name</p>
                     */
                    std::string m_traceTopicName;
                    bool m_traceTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICERESPONSE_H_
