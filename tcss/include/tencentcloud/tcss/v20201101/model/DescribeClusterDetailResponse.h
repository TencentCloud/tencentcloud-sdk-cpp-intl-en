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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeClusterDetail response structure.
                */
                class DescribeClusterDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterDetailResponse();
                    ~DescribeClusterDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Progress of the current cluster scan task. `100` indicates that the scan is completed.
                     * @return ScanTaskProgress Progress of the current cluster scan task. `100` indicates that the scan is completed.
                     */
                    int64_t GetScanTaskProgress() const;

                    /**
                     * 判断参数 ScanTaskProgress 是否已赋值
                     * @return ScanTaskProgress 是否已赋值
                     */
                    bool ScanTaskProgressHasBeenSet() const;

                    /**
                     * 获取Cluster version
                     * @return ClusterVersion Cluster version
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Runtime component
                     * @return ContainerRuntime Runtime component
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取Number of nodes in the cluster
                     * @return ClusterNodeNum Number of nodes in the cluster
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取Cluster status. Valid values: `Running`, `Creating`, `Abnormal`.
                     * @return ClusterStatus Cluster status. Valid values: `Running`, `Creating`, `Abnormal`.
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Cluster type. Valid values: `MANAGED_CLUSTER` (managed cluster); `INDEPENDENT_CLUSTER` (self-deployed cluster).
                     * @return ClusterType Cluster type. Valid values: `MANAGED_CLUSTER` (managed cluster); `INDEPENDENT_CLUSTER` (self-deployed cluster).
                     */
                    std::string GetClusterType() const;

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Cluster region
                     * @return Region Cluster region
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Number of critical check items
                     * @return SeriousRiskCount Number of critical check items
                     */
                    uint64_t GetSeriousRiskCount() const;

                    /**
                     * 判断参数 SeriousRiskCount 是否已赋值
                     * @return SeriousRiskCount 是否已赋值
                     */
                    bool SeriousRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of high-risk check items
                     * @return HighRiskCount Number of high-risk check items
                     */
                    uint64_t GetHighRiskCount() const;

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of medium-risk check items
                     * @return MiddleRiskCount Number of medium-risk check items
                     */
                    uint64_t GetMiddleRiskCount() const;

                    /**
                     * 判断参数 MiddleRiskCount 是否已赋值
                     * @return MiddleRiskCount 是否已赋值
                     */
                    bool MiddleRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of prompt-risk check items
                     * @return HintRiskCount Number of prompt-risk check items
                     */
                    uint64_t GetHintRiskCount() const;

                    /**
                     * 判断参数 HintRiskCount 是否已赋值
                     * @return HintRiskCount 是否已赋值
                     */
                    bool HintRiskCountHasBeenSet() const;

                    /**
                     * 获取Status of the check task
                     * @return CheckStatus Status of the check task
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取Status of the defender
                     * @return DefenderStatus Status of the defender
                     */
                    std::string GetDefenderStatus() const;

                    /**
                     * 判断参数 DefenderStatus 是否已赋值
                     * @return DefenderStatus 是否已赋值
                     */
                    bool DefenderStatusHasBeenSet() const;

                    /**
                     * 获取Creation time of the scan task
                     * @return TaskCreateTime Creation time of the scan task
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: `PublicNetwork` (public network); `VPCNetwork` (VPC).
                     * @return NetworkType Network type. Valid values: `PublicNetwork` (public network); `VPCNetwork` (VPC).
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取API server address
                     * @return ApiServerAddress API server address
                     */
                    std::string GetApiServerAddress() const;

                    /**
                     * 判断参数 ApiServerAddress 是否已赋值
                     * @return ApiServerAddress 是否已赋值
                     */
                    bool ApiServerAddressHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return NodeCount Number of nodes
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Number of namespaces
                     * @return NamespaceCount Number of namespaces
                     */
                    uint64_t GetNamespaceCount() const;

                    /**
                     * 判断参数 NamespaceCount 是否已赋值
                     * @return NamespaceCount 是否已赋值
                     */
                    bool NamespaceCountHasBeenSet() const;

                    /**
                     * 获取Number of workloads
                     * @return WorkloadCount Number of workloads
                     */
                    uint64_t GetWorkloadCount() const;

                    /**
                     * 判断参数 WorkloadCount 是否已赋值
                     * @return WorkloadCount 是否已赋值
                     */
                    bool WorkloadCountHasBeenSet() const;

                    /**
                     * 获取Number of Pods
                     * @return PodCount Number of Pods
                     */
                    uint64_t GetPodCount() const;

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取Number of Services
                     * @return ServiceCount Number of Services
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取Number of Ingresses
                     * @return IngressCount Number of Ingresses
                     */
                    uint64_t GetIngressCount() const;

                    /**
                     * 判断参数 IngressCount 是否已赋值
                     * @return IngressCount 是否已赋值
                     */
                    bool IngressCountHasBeenSet() const;

                    /**
                     * 获取IPs of the primary nodes
                     * @return MasterIps IPs of the primary nodes
                     */
                    std::string GetMasterIps() const;

                    /**
                     * 判断参数 MasterIps 是否已赋值
                     * @return MasterIps 是否已赋值
                     */
                    bool MasterIpsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Progress of the current cluster scan task. `100` indicates that the scan is completed.
                     */
                    int64_t m_scanTaskProgress;
                    bool m_scanTaskProgressHasBeenSet;

                    /**
                     * Cluster version
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Runtime component
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * Number of nodes in the cluster
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * Cluster status. Valid values: `Running`, `Creating`, `Abnormal`.
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Cluster type. Valid values: `MANAGED_CLUSTER` (managed cluster); `INDEPENDENT_CLUSTER` (self-deployed cluster).
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Number of critical check items
                     */
                    uint64_t m_seriousRiskCount;
                    bool m_seriousRiskCountHasBeenSet;

                    /**
                     * Number of high-risk check items
                     */
                    uint64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * Number of medium-risk check items
                     */
                    uint64_t m_middleRiskCount;
                    bool m_middleRiskCountHasBeenSet;

                    /**
                     * Number of prompt-risk check items
                     */
                    uint64_t m_hintRiskCount;
                    bool m_hintRiskCountHasBeenSet;

                    /**
                     * Status of the check task
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Status of the defender
                     */
                    std::string m_defenderStatus;
                    bool m_defenderStatusHasBeenSet;

                    /**
                     * Creation time of the scan task
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * Network type. Valid values: `PublicNetwork` (public network); `VPCNetwork` (VPC).
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * API server address
                     */
                    std::string m_apiServerAddress;
                    bool m_apiServerAddressHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Number of namespaces
                     */
                    uint64_t m_namespaceCount;
                    bool m_namespaceCountHasBeenSet;

                    /**
                     * Number of workloads
                     */
                    uint64_t m_workloadCount;
                    bool m_workloadCountHasBeenSet;

                    /**
                     * Number of Pods
                     */
                    uint64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * Number of Services
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * Number of Ingresses
                     */
                    uint64_t m_ingressCount;
                    bool m_ingressCountHasBeenSet;

                    /**
                     * IPs of the primary nodes
                     */
                    std::string m_masterIps;
                    bool m_masterIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
