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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATESERVICEDISCOVERYREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATESERVICEDISCOVERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateServiceDiscovery request structure.
                */
                class CreateServiceDiscoveryRequest : public AbstractModel
                {
                public:
                    CreateServiceDiscoveryRequest();
                    ~CreateServiceDiscoveryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus instance ID
                     * @return InstanceId Prometheus instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus instance ID
                     * @param _instanceId Prometheus instance ID
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
                     * 获取<li>TKE: ID of the integrated TKE cluster</li>
                     * @return KubeClusterId <li>TKE: ID of the integrated TKE cluster</li>
                     * 
                     */
                    std::string GetKubeClusterId() const;

                    /**
                     * 设置<li>TKE: ID of the integrated TKE cluster</li>
                     * @param _kubeClusterId <li>TKE: ID of the integrated TKE cluster</li>
                     * 
                     */
                    void SetKubeClusterId(const std::string& _kubeClusterId);

                    /**
                     * 判断参数 KubeClusterId 是否已赋值
                     * @return KubeClusterId 是否已赋值
                     * 
                     */
                    bool KubeClusterIdHasBeenSet() const;

                    /**
                     * 获取Kubernetes cluster type:
<li> 1 = TKE </li>
                     * @return KubeType Kubernetes cluster type:
<li> 1 = TKE </li>
                     * 
                     */
                    int64_t GetKubeType() const;

                    /**
                     * 设置Kubernetes cluster type:
<li> 1 = TKE </li>
                     * @param _kubeType Kubernetes cluster type:
<li> 1 = TKE </li>
                     * 
                     */
                    void SetKubeType(const int64_t& _kubeType);

                    /**
                     * 判断参数 KubeType 是否已赋值
                     * @return KubeType 是否已赋值
                     * 
                     */
                    bool KubeTypeHasBeenSet() const;

                    /**
                     * 获取Scrape configuration type. Valid values:
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = JobMonitor</li>
                     * @return Type Scrape configuration type. Valid values:
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = JobMonitor</li>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Scrape configuration type. Valid values:
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = JobMonitor</li>
                     * @param _type Scrape configuration type. Valid values:
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = JobMonitor</li>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Scrape configuration information
                     * @return Yaml Scrape configuration information
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置Scrape configuration information
                     * @param _yaml Scrape configuration information
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                private:

                    /**
                     * Prometheus instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <li>TKE: ID of the integrated TKE cluster</li>
                     */
                    std::string m_kubeClusterId;
                    bool m_kubeClusterIdHasBeenSet;

                    /**
                     * Kubernetes cluster type:
<li> 1 = TKE </li>
                     */
                    int64_t m_kubeType;
                    bool m_kubeTypeHasBeenSet;

                    /**
                     * Scrape configuration type. Valid values:
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = JobMonitor</li>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Scrape configuration information
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATESERVICEDISCOVERYREQUEST_H_
