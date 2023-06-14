/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTEREXTRAARGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTEREXTRAARGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Edge cluster master custom parameters
                */
                class EdgeClusterExtraArgs : public AbstractModel
                {
                public:
                    EdgeClusterExtraArgs();
                    ~EdgeClusterExtraArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取kube-apiserver custom parameter, in the format of ["k1=v1", "k1=v2"], for example: ["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return KubeAPIServer kube-apiserver custom parameter, in the format of ["k1=v1", "k1=v2"], for example: ["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKubeAPIServer() const;

                    /**
                     * 设置kube-apiserver custom parameter, in the format of ["k1=v1", "k1=v2"], for example: ["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _kubeAPIServer kube-apiserver custom parameter, in the format of ["k1=v1", "k1=v2"], for example: ["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKubeAPIServer(const std::vector<std::string>& _kubeAPIServer);

                    /**
                     * 判断参数 KubeAPIServer 是否已赋值
                     * @return KubeAPIServer 是否已赋值
                     * 
                     */
                    bool KubeAPIServerHasBeenSet() const;

                    /**
                     * 获取kube-controller-manager custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return KubeControllerManager kube-controller-manager custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKubeControllerManager() const;

                    /**
                     * 设置kube-controller-manager custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _kubeControllerManager kube-controller-manager custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKubeControllerManager(const std::vector<std::string>& _kubeControllerManager);

                    /**
                     * 判断参数 KubeControllerManager 是否已赋值
                     * @return KubeControllerManager 是否已赋值
                     * 
                     */
                    bool KubeControllerManagerHasBeenSet() const;

                    /**
                     * 获取kube-scheduler custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return KubeScheduler kube-scheduler custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKubeScheduler() const;

                    /**
                     * 设置kube-scheduler custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _kubeScheduler kube-scheduler custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKubeScheduler(const std::vector<std::string>& _kubeScheduler);

                    /**
                     * 判断参数 KubeScheduler 是否已赋值
                     * @return KubeScheduler 是否已赋值
                     * 
                     */
                    bool KubeSchedulerHasBeenSet() const;

                private:

                    /**
                     * kube-apiserver custom parameter, in the format of ["k1=v1", "k1=v2"], for example: ["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_kubeAPIServer;
                    bool m_kubeAPIServerHasBeenSet;

                    /**
                     * kube-controller-manager custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_kubeControllerManager;
                    bool m_kubeControllerManagerHasBeenSet;

                    /**
                     * kube-scheduler custom parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_kubeScheduler;
                    bool m_kubeSchedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTEREXTRAARGS_H_
