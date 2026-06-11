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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMETRICSUBSCRIBEPREVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMETRICSUBSCRIBEPREVIEWREQUEST_H_

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
                * DescribeMetricSubscribePreview request structure.
                */
                class DescribeMetricSubscribePreviewRequest : public AbstractModel
                {
                public:
                    DescribeMetricSubscribePreviewRequest();
                    ~DescribeMetricSubscribePreviewRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Database configuration information.
                     * @return Metrics Database configuration information.
                     * 
                     */
                    std::vector<MetricConfig> GetMetrics() const;

                    /**
                     * 设置Database configuration information.
                     * @param _metrics Database configuration information.
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
                     * 获取Instance configuration.
                     * @return InstanceInfo Instance configuration.
                     * 
                     */
                    InstanceConfig GetInstanceInfo() const;

                    /**
                     * 设置Instance configuration.
                     * @param _instanceInfo Instance configuration.
                     * 
                     */
                    void SetInstanceInfo(const InstanceConfig& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                private:

                    /**
                     * Cloud product namespace.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Database configuration information.
                     */
                    std::vector<MetricConfig> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Instance configuration.
                     */
                    InstanceConfig m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMETRICSUBSCRIBEPREVIEWREQUEST_H_
