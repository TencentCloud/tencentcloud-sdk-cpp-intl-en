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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTPODCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTPODCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>
#include <tencentcloud/monitor/v20180724/model/Toleration.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Additional pod configurations of the components deployed in the cluster when a cluster is associated
                */
                class PrometheusClusterAgentPodConfig : public AbstractModel
                {
                public:
                    PrometheusClusterAgentPodConfig();
                    ~PrometheusClusterAgentPodConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to use HostNetWork
                     * @return HostNet Whether to use HostNetWork
                     * 
                     */
                    bool GetHostNet() const;

                    /**
                     * 设置Whether to use HostNetWork
                     * @param _hostNet Whether to use HostNetWork
                     * 
                     */
                    void SetHostNet(const bool& _hostNet);

                    /**
                     * 判断参数 HostNet 是否已赋值
                     * @return HostNet 是否已赋值
                     * 
                     */
                    bool HostNetHasBeenSet() const;

                    /**
                     * 获取A parameter used to specify the running nodes for a pod
                     * @return NodeSelector A parameter used to specify the running nodes for a pod
                     * 
                     */
                    std::vector<Label> GetNodeSelector() const;

                    /**
                     * 设置A parameter used to specify the running nodes for a pod
                     * @param _nodeSelector A parameter used to specify the running nodes for a pod
                     * 
                     */
                    void SetNodeSelector(const std::vector<Label>& _nodeSelector);

                    /**
                     * 判断参数 NodeSelector 是否已赋值
                     * @return NodeSelector 是否已赋值
                     * 
                     */
                    bool NodeSelectorHasBeenSet() const;

                    /**
                     * 获取Tolerable taints
                     * @return Tolerations Tolerable taints
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置Tolerable taints
                     * @param _tolerations Tolerable taints
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                private:

                    /**
                     * Whether to use HostNetWork
                     */
                    bool m_hostNet;
                    bool m_hostNetHasBeenSet;

                    /**
                     * A parameter used to specify the running nodes for a pod
                     */
                    std::vector<Label> m_nodeSelector;
                    bool m_nodeSelectorHasBeenSet;

                    /**
                     * Tolerable taints
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTPODCONFIG_H_
