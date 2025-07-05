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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESERVICEDISCOVERYREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESERVICEDISCOVERYREQUEST_H_

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
                * DescribeServiceDiscovery request structure.
                */
                class DescribeServiceDiscoveryRequest : public AbstractModel
                {
                public:
                    DescribeServiceDiscoveryRequest();
                    ~DescribeServiceDiscoveryRequest() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESERVICEDISCOVERYREQUEST_H_
