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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERNETWORKSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERNETWORKSETTINGS_H_

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
                * Cluster network-related parameters
                */
                class ClusterNetworkSettings : public AbstractModel
                {
                public:
                    ClusterNetworkSettings();
                    ~ClusterNetworkSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC.
                     * @return ClusterCIDR CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC.
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC.
                     * @param ClusterCIDR CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC.
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取Whether to ignore ClusterCIDR conflict errors. It defaults to not ignore.
                     * @return IgnoreClusterCIDRConflict Whether to ignore ClusterCIDR conflict errors. It defaults to not ignore.
                     */
                    bool GetIgnoreClusterCIDRConflict() const;

                    /**
                     * 设置Whether to ignore ClusterCIDR conflict errors. It defaults to not ignore.
                     * @param IgnoreClusterCIDRConflict Whether to ignore ClusterCIDR conflict errors. It defaults to not ignore.
                     */
                    void SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict);

                    /**
                     * 判断参数 IgnoreClusterCIDRConflict 是否已赋值
                     * @return IgnoreClusterCIDRConflict 是否已赋值
                     */
                    bool IgnoreClusterCIDRConflictHasBeenSet() const;

                    /**
                     * 获取Maximum number of pods on each node in the cluster. Default value: 256
                     * @return MaxNodePodNum Maximum number of pods on each node in the cluster. Default value: 256
                     */
                    uint64_t GetMaxNodePodNum() const;

                    /**
                     * 设置Maximum number of pods on each node in the cluster. Default value: 256
                     * @param MaxNodePodNum Maximum number of pods on each node in the cluster. Default value: 256
                     */
                    void SetMaxNodePodNum(const uint64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of cluster services. Default value: 256
                     * @return MaxClusterServiceNum Maximum number of cluster services. Default value: 256
                     */
                    uint64_t GetMaxClusterServiceNum() const;

                    /**
                     * 设置Maximum number of cluster services. Default value: 256
                     * @param MaxClusterServiceNum Maximum number of cluster services. Default value: 256
                     */
                    void SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum);

                    /**
                     * 判断参数 MaxClusterServiceNum 是否已赋值
                     * @return MaxClusterServiceNum 是否已赋值
                     */
                    bool MaxClusterServiceNumHasBeenSet() const;

                    /**
                     * 获取Whether IPVS is enabled. Default value: disabled
                     * @return Ipvs Whether IPVS is enabled. Default value: disabled
                     */
                    bool GetIpvs() const;

                    /**
                     * 设置Whether IPVS is enabled. Default value: disabled
                     * @param Ipvs Whether IPVS is enabled. Default value: disabled
                     */
                    void SetIpvs(const bool& _ipvs);

                    /**
                     * 判断参数 Ipvs 是否已赋值
                     * @return Ipvs 是否已赋值
                     */
                    bool IpvsHasBeenSet() const;

                    /**
                     * 获取Cluster VPC ID, which is required when you create an empty cluster; otherwise, it is automatically set to be consistent with that of the nodes in the cluster
                     * @return VpcId Cluster VPC ID, which is required when you create an empty cluster; otherwise, it is automatically set to be consistent with that of the nodes in the cluster
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Cluster VPC ID, which is required when you create an empty cluster; otherwise, it is automatically set to be consistent with that of the nodes in the cluster
                     * @param VpcId Cluster VPC ID, which is required when you create an empty cluster; otherwise, it is automatically set to be consistent with that of the nodes in the cluster
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Whether CNI is enabled for network plugin(s). Default value: enabled
                     * @return Cni Whether CNI is enabled for network plugin(s). Default value: enabled
                     */
                    bool GetCni() const;

                    /**
                     * 设置Whether CNI is enabled for network plugin(s). Default value: enabled
                     * @param Cni Whether CNI is enabled for network plugin(s). Default value: enabled
                     */
                    void SetCni(const bool& _cni);

                    /**
                     * 判断参数 Cni 是否已赋值
                     * @return Cni 是否已赋值
                     */
                    bool CniHasBeenSet() const;

                private:

                    /**
                     * CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC.
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * Whether to ignore ClusterCIDR conflict errors. It defaults to not ignore.
                     */
                    bool m_ignoreClusterCIDRConflict;
                    bool m_ignoreClusterCIDRConflictHasBeenSet;

                    /**
                     * Maximum number of pods on each node in the cluster. Default value: 256
                     */
                    uint64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                    /**
                     * Maximum number of cluster services. Default value: 256
                     */
                    uint64_t m_maxClusterServiceNum;
                    bool m_maxClusterServiceNumHasBeenSet;

                    /**
                     * Whether IPVS is enabled. Default value: disabled
                     */
                    bool m_ipvs;
                    bool m_ipvsHasBeenSet;

                    /**
                     * Cluster VPC ID, which is required when you create an empty cluster; otherwise, it is automatically set to be consistent with that of the nodes in the cluster
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Whether CNI is enabled for network plugin(s). Default value: enabled
                     */
                    bool m_cni;
                    bool m_cniHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERNETWORKSETTINGS_H_
