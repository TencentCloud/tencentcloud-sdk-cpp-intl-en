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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
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
                * CreateClusterVirtualNodePool request structure.
                */
                class CreateClusterVirtualNodePoolRequest : public AbstractModel
                {
                public:
                    CreateClusterVirtualNodePoolRequest();
                    ~CreateClusterVirtualNodePoolRequest() = default;
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
                     * 获取Node pool name
                     * @return Name Node pool name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node pool name
                     * @param Name Node pool name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取List of subnet IDs
                     * @return SubnetIds List of subnet IDs
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置List of subnet IDs
                     * @param SubnetIds List of subnet IDs
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取List of security group IDs
                     * @return SecurityGroupIds List of security group IDs
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置List of security group IDs
                     * @param SecurityGroupIds List of security group IDs
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Virtual node labels
                     * @return Labels Virtual node labels
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Virtual node labels
                     * @param Labels Virtual node labels
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Virtual node taint
                     * @return Taints Virtual node taint
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Virtual node taint
                     * @param Taints Virtual node taint
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取List of nodes
                     * @return VirtualNodes List of nodes
                     */
                    std::vector<VirtualNodeSpec> GetVirtualNodes() const;

                    /**
                     * 设置List of nodes
                     * @param VirtualNodes List of nodes
                     */
                    void SetVirtualNodes(const std::vector<VirtualNodeSpec>& _virtualNodes);

                    /**
                     * 判断参数 VirtualNodes 是否已赋值
                     * @return VirtualNodes 是否已赋值
                     */
                    bool VirtualNodesHasBeenSet() const;

                    /**
                     * 获取Setting of deletion protection
                     * @return DeletionProtection Setting of deletion protection
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Setting of deletion protection
                     * @param DeletionProtection Setting of deletion protection
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Node pool OS:
- `linux` (default value)
- `windows`
                     * @return OS Node pool OS:
- `linux` (default value)
- `windows`
                     */
                    std::string GetOS() const;

                    /**
                     * 设置Node pool OS:
- `linux` (default value)
- `windows`
                     * @param OS Node pool OS:
- `linux` (default value)
- `windows`
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     */
                    bool OSHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node pool name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of subnet IDs
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * List of security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Virtual node labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Virtual node taint
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * List of nodes
                     */
                    std::vector<VirtualNodeSpec> m_virtualNodes;
                    bool m_virtualNodesHasBeenSet;

                    /**
                     * Setting of deletion protection
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * Node pool OS:
- `linux` (default value)
- `windows`
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_
