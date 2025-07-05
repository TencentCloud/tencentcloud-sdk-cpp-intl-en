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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERRUNTIMECONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERRUNTIMECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RuntimeConfig.h>
#include <tencentcloud/tke/v20180525/model/NodePoolRuntime.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterRuntimeConfig request structure.
                */
                class ModifyClusterRuntimeConfigRequest : public AbstractModel
                {
                public:
                    ModifyClusterRuntimeConfigRequest();
                    ~ModifyClusterRuntimeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID, required
                     * @return ClusterId Cluster ID, required
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID, required
                     * @param _clusterId Cluster ID, required
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取This field is required when it is required to modify the runtime version based on another K8S version. For example, in scenarios where conflicts occur during upgrade verification.
                     * @return DstK8SVersion This field is required when it is required to modify the runtime version based on another K8S version. For example, in scenarios where conflicts occur during upgrade verification.
                     * 
                     */
                    std::string GetDstK8SVersion() const;

                    /**
                     * 设置This field is required when it is required to modify the runtime version based on another K8S version. For example, in scenarios where conflicts occur during upgrade verification.
                     * @param _dstK8SVersion This field is required when it is required to modify the runtime version based on another K8S version. For example, in scenarios where conflicts occur during upgrade verification.
                     * 
                     */
                    void SetDstK8SVersion(const std::string& _dstK8SVersion);

                    /**
                     * 判断参数 DstK8SVersion 是否已赋值
                     * @return DstK8SVersion 是否已赋值
                     * 
                     */
                    bool DstK8SVersionHasBeenSet() const;

                    /**
                     * 获取This field is required when it is required to modify the runtime of a cluster.
                     * @return ClusterRuntimeConfig This field is required when it is required to modify the runtime of a cluster.
                     * 
                     */
                    RuntimeConfig GetClusterRuntimeConfig() const;

                    /**
                     * 设置This field is required when it is required to modify the runtime of a cluster.
                     * @param _clusterRuntimeConfig This field is required when it is required to modify the runtime of a cluster.
                     * 
                     */
                    void SetClusterRuntimeConfig(const RuntimeConfig& _clusterRuntimeConfig);

                    /**
                     * 判断参数 ClusterRuntimeConfig 是否已赋值
                     * @return ClusterRuntimeConfig 是否已赋值
                     * 
                     */
                    bool ClusterRuntimeConfigHasBeenSet() const;

                    /**
                     * 获取This field is required when it is required to modify the runtime of a node pool, specifying the part to be modified.
                     * @return NodePoolRuntimeConfig This field is required when it is required to modify the runtime of a node pool, specifying the part to be modified.
                     * 
                     */
                    std::vector<NodePoolRuntime> GetNodePoolRuntimeConfig() const;

                    /**
                     * 设置This field is required when it is required to modify the runtime of a node pool, specifying the part to be modified.
                     * @param _nodePoolRuntimeConfig This field is required when it is required to modify the runtime of a node pool, specifying the part to be modified.
                     * 
                     */
                    void SetNodePoolRuntimeConfig(const std::vector<NodePoolRuntime>& _nodePoolRuntimeConfig);

                    /**
                     * 判断参数 NodePoolRuntimeConfig 是否已赋值
                     * @return NodePoolRuntimeConfig 是否已赋值
                     * 
                     */
                    bool NodePoolRuntimeConfigHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, required
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * This field is required when it is required to modify the runtime version based on another K8S version. For example, in scenarios where conflicts occur during upgrade verification.
                     */
                    std::string m_dstK8SVersion;
                    bool m_dstK8SVersionHasBeenSet;

                    /**
                     * This field is required when it is required to modify the runtime of a cluster.
                     */
                    RuntimeConfig m_clusterRuntimeConfig;
                    bool m_clusterRuntimeConfigHasBeenSet;

                    /**
                     * This field is required when it is required to modify the runtime of a node pool, specifying the part to be modified.
                     */
                    std::vector<NodePoolRuntime> m_nodePoolRuntimeConfig;
                    bool m_nodePoolRuntimeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERRUNTIMECONFIGREQUEST_H_
