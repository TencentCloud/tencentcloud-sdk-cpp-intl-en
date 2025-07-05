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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCEEXTRAARGS_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCEEXTRAARGS_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Node custom parameters
                */
                class InstanceExtraArgs : public AbstractModel
                {
                public:
                    InstanceExtraArgs();
                    ~InstanceExtraArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取kubelet custom parameters, whose format is ["k1=v1", "k1=v2"], for example ["root-dir=/var/lib/kubelet","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Kubelet kubelet custom parameters, whose format is ["k1=v1", "k1=v2"], for example ["root-dir=/var/lib/kubelet","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKubelet() const;

                    /**
                     * 设置kubelet custom parameters, whose format is ["k1=v1", "k1=v2"], for example ["root-dir=/var/lib/kubelet","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _kubelet kubelet custom parameters, whose format is ["k1=v1", "k1=v2"], for example ["root-dir=/var/lib/kubelet","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKubelet(const std::vector<std::string>& _kubelet);

                    /**
                     * 判断参数 Kubelet 是否已赋值
                     * @return Kubelet 是否已赋值
                     * 
                     */
                    bool KubeletHasBeenSet() const;

                private:

                    /**
                     * kubelet custom parameters, whose format is ["k1=v1", "k1=v2"], for example ["root-dir=/var/lib/kubelet","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_kubelet;
                    bool m_kubeletHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCEEXTRAARGS_H_
