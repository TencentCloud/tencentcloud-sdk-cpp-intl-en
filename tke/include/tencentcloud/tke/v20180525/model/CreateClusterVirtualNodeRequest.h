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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/VirtualNodeSpec.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterVirtualNode request structure.
                */
                class CreateClusterVirtualNodeRequest : public AbstractModel
                {
                public:
                    CreateClusterVirtualNodeRequest();
                    ~CreateClusterVirtualNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Node pool
                     * @return NodePoolId Node pool
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Node pool
                     * @param NodePoolId Node pool
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取Subnet
                     * @return SubnetId Subnet
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet
                     * @param SubnetId Subnet
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取List of subnet IDs (this parameter and `SubnetId` are mutually exclusive)
                     * @return SubnetIds List of subnet IDs (this parameter and `SubnetId` are mutually exclusive)
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置List of subnet IDs (this parameter and `SubnetId` are mutually exclusive)
                     * @param SubnetIds List of subnet IDs (this parameter and `SubnetId` are mutually exclusive)
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取List of virtual nodes
                     * @return VirtualNodes List of virtual nodes
                     */
                    std::vector<VirtualNodeSpec> GetVirtualNodes() const;

                    /**
                     * 设置List of virtual nodes
                     * @param VirtualNodes List of virtual nodes
                     */
                    void SetVirtualNodes(const std::vector<VirtualNodeSpec>& _virtualNodes);

                    /**
                     * 判断参数 VirtualNodes 是否已赋值
                     * @return VirtualNodes 是否已赋值
                     */
                    bool VirtualNodesHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node pool
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Subnet
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * List of subnet IDs (this parameter and `SubnetId` are mutually exclusive)
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * List of virtual nodes
                     */
                    std::vector<VirtualNodeSpec> m_virtualNodes;
                    bool m_virtualNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEREQUEST_H_
