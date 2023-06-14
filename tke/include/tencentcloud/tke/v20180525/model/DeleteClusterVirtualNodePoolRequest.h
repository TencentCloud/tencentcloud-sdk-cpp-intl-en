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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEPOOLREQUEST_H_

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
                * DeleteClusterVirtualNodePool request structure.
                */
                class DeleteClusterVirtualNodePoolRequest : public AbstractModel
                {
                public:
                    DeleteClusterVirtualNodePoolRequest();
                    ~DeleteClusterVirtualNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取List of virtual node pool IDs
                     * @return NodePoolIds List of virtual node pool IDs
                     * 
                     */
                    std::vector<std::string> GetNodePoolIds() const;

                    /**
                     * 设置List of virtual node pool IDs
                     * @param _nodePoolIds List of virtual node pool IDs
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
                     * 获取Whether to forcibly delete the nodes with pods. Values: `true`, `false`.
                     * @return Force Whether to forcibly delete the nodes with pods. Values: `true`, `false`.
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to forcibly delete the nodes with pods. Values: `true`, `false`.
                     * @param _force Whether to forcibly delete the nodes with pods. Values: `true`, `false`.
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * List of virtual node pool IDs
                     */
                    std::vector<std::string> m_nodePoolIds;
                    bool m_nodePoolIdsHasBeenSet;

                    /**
                     * Whether to forcibly delete the nodes with pods. Values: `true`, `false`.
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEPOOLREQUEST_H_
