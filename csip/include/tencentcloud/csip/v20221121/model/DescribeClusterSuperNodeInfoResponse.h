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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterSuperNodeInfo response structure.
                */
                class DescribeClusterSuperNodeInfoResponse : public AbstractModel
                {
                public:
                    DescribeClusterSuperNodeInfoResponse();
                    ~DescribeClusterSuperNodeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Region code (unchanged, for example, ap-chengdu).</p>
                     * @return Region <p>Region code (unchanged, for example, ap-chengdu).</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Region Chinese Name (for example, Southwest China (Chengdu); obtained by translating the region code using the dictionary).</p>
                     * @return RegionName <p>Region Chinese Name (for example, Southwest China (Chengdu); obtained by translating the region code using the dictionary).</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>Region English name (for example, Southwest China (Chengdu); obtained by translating the region code using a dictionary).</p>
                     * @return RegionNameEn <p>Region English name (for example, Southwest China (Chengdu); obtained by translating the region code using a dictionary).</p>
                     * 
                     */
                    std::string GetRegionNameEn() const;

                    /**
                     * 判断参数 RegionNameEn 是否已赋值
                     * @return RegionNameEn 是否已赋值
                     * 
                     */
                    bool RegionNameEnHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone (Chinese name, obtained by translating the AZ code via dictionary).</p>
                     * @return Zone <p>Availability zone (Chinese name, obtained by translating the AZ code via dictionary).</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Last update time of the asset.<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format, UTC time zone)</p>
                     * @return AssetSyncTime <p>Last update time of the asset.<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format, UTC time zone)</p>
                     * 
                     */
                    std::string GetAssetSyncTime() const;

                    /**
                     * 判断参数 AssetSyncTime 是否已赋值
                     * @return AssetSyncTime 是否已赋值
                     * 
                     */
                    bool AssetSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>Node origin (cluster type).<br>Enumeration values:<br>TKE_MANAGED_CLUSTER: Tencent Cloud Standard Cluster<br>TKE_INDEPENDENT_CLUSTER: Tencent Cloud Standard Cluster (Master Self-maintenance)<br>TKE_SERVERLESS_CLUSTER: Tencent Cloud Serverless cluster<br>TKE_EDGE_CLUSTER: Tencent Cloud edge cluster<br>SELF_BUILT: Self-built cluster within Tencent Cloud<br>SELF_BUILT_OTHER: Self-built cluster outside Tencent Cloud (hybrid cloud)</p>
                     * @return NodeSource <p>Node origin (cluster type).<br>Enumeration values:<br>TKE_MANAGED_CLUSTER: Tencent Cloud Standard Cluster<br>TKE_INDEPENDENT_CLUSTER: Tencent Cloud Standard Cluster (Master Self-maintenance)<br>TKE_SERVERLESS_CLUSTER: Tencent Cloud Serverless cluster<br>TKE_EDGE_CLUSTER: Tencent Cloud edge cluster<br>SELF_BUILT: Self-built cluster within Tencent Cloud<br>SELF_BUILT_OTHER: Self-built cluster outside Tencent Cloud (hybrid cloud)</p>
                     * 
                     */
                    std::string GetNodeSource() const;

                    /**
                     * 判断参数 NodeSource 是否已赋值
                     * @return NodeSource 是否已赋值
                     * 
                     */
                    bool NodeSourceHasBeenSet() const;

                    /**
                     * 获取<p>Subnet name.</p>
                     * @return SubNetName <p>Subnet name.</p>
                     * 
                     */
                    std::string GetSubNetName() const;

                    /**
                     * 判断参数 SubNetName 是否已赋值
                     * @return SubNetName 是否已赋值
                     * 
                     */
                    bool SubNetNameHasBeenSet() const;

                    /**
                     * 获取<p>Subnet ID.</p>
                     * @return SubNetId <p>Subnet ID.</p>
                     * 
                     */
                    std::string GetSubNetId() const;

                    /**
                     * 判断参数 SubNetId 是否已赋值
                     * @return SubNetId 是否已赋值
                     * 
                     */
                    bool SubNetIdHasBeenSet() const;

                    /**
                     * 获取<p>Subnet segment (CIDR).</p>
                     * @return SubNetCIDR <p>Subnet segment (CIDR).</p>
                     * 
                     */
                    std::string GetSubNetCIDR() const;

                    /**
                     * 判断参数 SubNetCIDR 是否已赋值
                     * @return SubNetCIDR 是否已赋值
                     * 
                     */
                    bool SubNetCIDRHasBeenSet() const;

                    /**
                     * 获取<p>Number of cores (obtained by dividing cpu_request by 1000).<br>Unit: core</p>
                     * @return CoresCount <p>Number of cores (obtained by dividing cpu_request by 1000).<br>Unit: core</p>
                     * 
                     */
                    int64_t GetCoresCount() const;

                    /**
                     * 判断参数 CoresCount 是否已赋值
                     * @return CoresCount 是否已赋值
                     * 
                     */
                    bool CoresCountHasBeenSet() const;

                    /**
                     * 获取<p>Cluster Name.</p>
                     * @return ClusterName <p>Cluster Name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster operation status.<br>Enumeration values:<br>Running: running<br>Exception: exception<br>Unknown: unknown<br>Creating: creating<br>Destroyed: terminated</p>
                     * @return Status <p>Cluster operation status.<br>Enumeration values:<br>Running: running<br>Exception: exception<br>Unknown: unknown<br>Creating: creating<br>Destroyed: terminated</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Kubernetes version.</p>
                     * @return ClusterVersion <p>Kubernetes version.</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>Kubelet version.</p>
                     * @return KubeletVersion <p>Kubelet version.</p>
                     * 
                     */
                    std::string GetKubeletVersion() const;

                    /**
                     * 判断参数 KubeletVersion 是否已赋值
                     * @return KubeletVersion 是否已赋值
                     * 
                     */
                    bool KubeletVersionHasBeenSet() const;

                    /**
                     * 获取<p>APPID of the account associated with the super node</p>
                     * @return AppID <p>APPID of the account associated with the super node</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Super node instance ID</p>
                     * @return InstanceId <p>Super node instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Super node name.</p>
                     * @return NodeName <p>Super node name.</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>VPCID</p>
                     * @return VpcId <p>VPCID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * <p>Region code (unchanged, for example, ap-chengdu).</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Region Chinese Name (for example, Southwest China (Chengdu); obtained by translating the region code using the dictionary).</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>Region English name (for example, Southwest China (Chengdu); obtained by translating the region code using a dictionary).</p>
                     */
                    std::string m_regionNameEn;
                    bool m_regionNameEnHasBeenSet;

                    /**
                     * <p>Availability zone (Chinese name, obtained by translating the AZ code via dictionary).</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Last update time of the asset.<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format, UTC time zone)</p>
                     */
                    std::string m_assetSyncTime;
                    bool m_assetSyncTimeHasBeenSet;

                    /**
                     * <p>Node origin (cluster type).<br>Enumeration values:<br>TKE_MANAGED_CLUSTER: Tencent Cloud Standard Cluster<br>TKE_INDEPENDENT_CLUSTER: Tencent Cloud Standard Cluster (Master Self-maintenance)<br>TKE_SERVERLESS_CLUSTER: Tencent Cloud Serverless cluster<br>TKE_EDGE_CLUSTER: Tencent Cloud edge cluster<br>SELF_BUILT: Self-built cluster within Tencent Cloud<br>SELF_BUILT_OTHER: Self-built cluster outside Tencent Cloud (hybrid cloud)</p>
                     */
                    std::string m_nodeSource;
                    bool m_nodeSourceHasBeenSet;

                    /**
                     * <p>Subnet name.</p>
                     */
                    std::string m_subNetName;
                    bool m_subNetNameHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subNetId;
                    bool m_subNetIdHasBeenSet;

                    /**
                     * <p>Subnet segment (CIDR).</p>
                     */
                    std::string m_subNetCIDR;
                    bool m_subNetCIDRHasBeenSet;

                    /**
                     * <p>Number of cores (obtained by dividing cpu_request by 1000).<br>Unit: core</p>
                     */
                    int64_t m_coresCount;
                    bool m_coresCountHasBeenSet;

                    /**
                     * <p>Cluster Name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster operation status.<br>Enumeration values:<br>Running: running<br>Exception: exception<br>Unknown: unknown<br>Creating: creating<br>Destroyed: terminated</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Kubernetes version.</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>Kubelet version.</p>
                     */
                    std::string m_kubeletVersion;
                    bool m_kubeletVersionHasBeenSet;

                    /**
                     * <p>APPID of the account associated with the super node</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Super node instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Super node name.</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>VPCID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFORESPONSE_H_
