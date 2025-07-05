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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteClusterNodePool request structure.
                */
                class DeleteClusterNodePoolRequest : public AbstractModel
                {
                public:
                    DeleteClusterNodePoolRequest();
                    ~DeleteClusterNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ClusterId of a node pool
                     * @return ClusterId ClusterId of a node pool
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ClusterId of a node pool
                     * @param _clusterId ClusterId of a node pool
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
                     * 获取IDs of node pools to delete
                     * @return NodePoolIds IDs of node pools to delete
                     * 
                     */
                    std::vector<std::string> GetNodePoolIds() const;

                    /**
                     * 设置IDs of node pools to delete
                     * @param _nodePoolIds IDs of node pools to delete
                     * 
                     */
                    void SetNodePoolIds(const std::vector<std::string>& _nodePoolIds);

                    /**
                     * 判断参数 NodePoolIds 是否已赋值
                     * @return NodePoolIds 是否已赋值
                     * 
                     */
                    bool NodePoolIdsHasBeenSet() const;

                    /**
                     * 获取Indicates whether nodes in a node pool are retained when the node pool is deleted. (The nodes are removed from the cluster. However, the corresponding instances will not be terminated.)
                     * @return KeepInstance Indicates whether nodes in a node pool are retained when the node pool is deleted. (The nodes are removed from the cluster. However, the corresponding instances will not be terminated.)
                     * 
                     */
                    bool GetKeepInstance() const;

                    /**
                     * 设置Indicates whether nodes in a node pool are retained when the node pool is deleted. (The nodes are removed from the cluster. However, the corresponding instances will not be terminated.)
                     * @param _keepInstance Indicates whether nodes in a node pool are retained when the node pool is deleted. (The nodes are removed from the cluster. However, the corresponding instances will not be terminated.)
                     * 
                     */
                    void SetKeepInstance(const bool& _keepInstance);

                    /**
                     * 判断参数 KeepInstance 是否已赋值
                     * @return KeepInstance 是否已赋值
                     * 
                     */
                    bool KeepInstanceHasBeenSet() const;

                private:

                    /**
                     * ClusterId of a node pool
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * IDs of node pools to delete
                     */
                    std::vector<std::string> m_nodePoolIds;
                    bool m_nodePoolIdsHasBeenSet;

                    /**
                     * Indicates whether nodes in a node pool are retained when the node pool is deleted. (The nodes are removed from the cluster. However, the corresponding instances will not be terminated.)
                     */
                    bool m_keepInstance;
                    bool m_keepInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERNODEPOOLREQUEST_H_
