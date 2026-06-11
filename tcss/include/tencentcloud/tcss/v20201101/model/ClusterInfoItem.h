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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Response parameters structure of the cluster asset
                */
                class ClusterInfoItem : public AbstractModel
                {
                public:
                    ClusterInfoItem();
                    ~ClusterInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster version
                     * @return ClusterVersion Cluster version
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Cluster version
                     * @param _clusterVersion Cluster version
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Cluster OS
                     * @return ClusterOs Cluster OS
                     * 
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置Cluster OS
                     * @param _clusterOs Cluster OS
                     * 
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     * 
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取Cluster type
                     * @return ClusterType Cluster type
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type
                     * @param _clusterType Cluster type
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Number of nodes in the cluster
                     * @return ClusterNodeNum Number of nodes in the cluster
                     * 
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 设置Number of nodes in the cluster
                     * @param _clusterNodeNum Number of nodes in the cluster
                     * 
                     */
                    void SetClusterNodeNum(const uint64_t& _clusterNodeNum);

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取Cluster region
                     * @return Region Cluster region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Cluster region
                     * @param _region Cluster region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Protection Status 
Defended 
Unprotected
Partially defended
                     * @return DefenderStatus Protection Status 
Defended 
Unprotected
Partially defended
                     * 
                     */
                    std::string GetDefenderStatus() const;

                    /**
                     * 设置Protection Status 
Defended 
Unprotected
Partially defended
                     * @param _defenderStatus Protection Status 
Defended 
Unprotected
Partially defended
                     * 
                     */
                    void SetDefenderStatus(const std::string& _defenderStatus);

                    /**
                     * 判断参数 DefenderStatus 是否已赋值
                     * @return DefenderStatus 是否已赋值
                     * 
                     */
                    bool DefenderStatusHasBeenSet() const;

                    /**
                     * 获取Cluster status
                     * @return ClusterStatus Cluster status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置Cluster status
                     * @param _clusterStatus Cluster status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Cluster operation sub-status.
                     * @return ClusterSubStatus Cluster operation sub-status.
                     * 
                     */
                    std::string GetClusterSubStatus() const;

                    /**
                     * 设置Cluster operation sub-status.
                     * @param _clusterSubStatus Cluster operation sub-status.
                     * 
                     */
                    void SetClusterSubStatus(const std::string& _clusterSubStatus);

                    /**
                     * 判断参数 ClusterSubStatus 是否已赋值
                     * @return ClusterSubStatus 是否已赋值
                     * 
                     */
                    bool ClusterSubStatusHasBeenSet() const;

                    /**
                     * 获取Cluster check mode. Valid values: `Cluster_Normal`, `Cluster_Actived`.
                     * @return ClusterCheckMode Cluster check mode. Valid values: `Cluster_Normal`, `Cluster_Actived`.
                     * 
                     */
                    std::string GetClusterCheckMode() const;

                    /**
                     * 设置Cluster check mode. Valid values: `Cluster_Normal`, `Cluster_Actived`.
                     * @param _clusterCheckMode Cluster check mode. Valid values: `Cluster_Normal`, `Cluster_Actived`.
                     * 
                     */
                    void SetClusterCheckMode(const std::string& _clusterCheckMode);

                    /**
                     * 判断参数 ClusterCheckMode 是否已赋值
                     * @return ClusterCheckMode 是否已赋值
                     * 
                     */
                    bool ClusterCheckModeHasBeenSet() const;

                    /**
                     * 获取Whether automatic and regular check is enabled
                     * @return ClusterAutoCheck Whether automatic and regular check is enabled
                     * 
                     */
                    bool GetClusterAutoCheck() const;

                    /**
                     * 设置Whether automatic and regular check is enabled
                     * @param _clusterAutoCheck Whether automatic and regular check is enabled
                     * 
                     */
                    void SetClusterAutoCheck(const bool& _clusterAutoCheck);

                    /**
                     * 判断参数 ClusterAutoCheck 是否已赋值
                     * @return ClusterAutoCheck 是否已赋值
                     * 
                     */
                    bool ClusterAutoCheckHasBeenSet() const;

                    /**
                     * 获取Cause of the failure to deploy the defender. When it is `UserDaemonSetNotReady`, `UnreadyNodeNum` is changed to "The defenders on N nodes are ready". If it is another value, the error message is directly displayed.
                     * @return DefenderErrorReason Cause of the failure to deploy the defender. When it is `UserDaemonSetNotReady`, `UnreadyNodeNum` is changed to "The defenders on N nodes are ready". If it is another value, the error message is directly displayed.
                     * 
                     */
                    std::string GetDefenderErrorReason() const;

                    /**
                     * 设置Cause of the failure to deploy the defender. When it is `UserDaemonSetNotReady`, `UnreadyNodeNum` is changed to "The defenders on N nodes are ready". If it is another value, the error message is directly displayed.
                     * @param _defenderErrorReason Cause of the failure to deploy the defender. When it is `UserDaemonSetNotReady`, `UnreadyNodeNum` is changed to "The defenders on N nodes are ready". If it is another value, the error message is directly displayed.
                     * 
                     */
                    void SetDefenderErrorReason(const std::string& _defenderErrorReason);

                    /**
                     * 判断参数 DefenderErrorReason 是否已赋值
                     * @return DefenderErrorReason 是否已赋值
                     * 
                     */
                    bool DefenderErrorReasonHasBeenSet() const;

                    /**
                     * 获取Number of nodes where the defender is not ready
                     * @return UnreadyNodeNum Number of nodes where the defender is not ready
                     * 
                     */
                    uint64_t GetUnreadyNodeNum() const;

                    /**
                     * 设置Number of nodes where the defender is not ready
                     * @param _unreadyNodeNum Number of nodes where the defender is not ready
                     * 
                     */
                    void SetUnreadyNodeNum(const uint64_t& _unreadyNodeNum);

                    /**
                     * 判断参数 UnreadyNodeNum 是否已赋值
                     * @return UnreadyNodeNum 是否已赋值
                     * 
                     */
                    bool UnreadyNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of critical check items
                     * @return SeriousRiskCount Number of critical check items
                     * 
                     */
                    int64_t GetSeriousRiskCount() const;

                    /**
                     * 设置Number of critical check items
                     * @param _seriousRiskCount Number of critical check items
                     * 
                     */
                    void SetSeriousRiskCount(const int64_t& _seriousRiskCount);

                    /**
                     * 判断参数 SeriousRiskCount 是否已赋值
                     * @return SeriousRiskCount 是否已赋值
                     * 
                     */
                    bool SeriousRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of high-risk check items
                     * @return HighRiskCount Number of high-risk check items
                     * 
                     */
                    int64_t GetHighRiskCount() const;

                    /**
                     * 设置Number of high-risk check items
                     * @param _highRiskCount Number of high-risk check items
                     * 
                     */
                    void SetHighRiskCount(const int64_t& _highRiskCount);

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     * 
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of medium-risk check items
                     * @return MiddleRiskCount Number of medium-risk check items
                     * 
                     */
                    int64_t GetMiddleRiskCount() const;

                    /**
                     * 设置Number of medium-risk check items
                     * @param _middleRiskCount Number of medium-risk check items
                     * 
                     */
                    void SetMiddleRiskCount(const int64_t& _middleRiskCount);

                    /**
                     * 判断参数 MiddleRiskCount 是否已赋值
                     * @return MiddleRiskCount 是否已赋值
                     * 
                     */
                    bool MiddleRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of prompt-risk check items
                     * @return HintRiskCount Number of prompt-risk check items
                     * 
                     */
                    int64_t GetHintRiskCount() const;

                    /**
                     * 设置Number of prompt-risk check items
                     * @param _hintRiskCount Number of prompt-risk check items
                     * 
                     */
                    void SetHintRiskCount(const int64_t& _hintRiskCount);

                    /**
                     * 判断参数 HintRiskCount 是否已赋值
                     * @return HintRiskCount 是否已赋值
                     * 
                     */
                    bool HintRiskCountHasBeenSet() const;

                    /**
                     * 获取Check failure cause
                     * @return CheckFailReason Check failure cause
                     * 
                     */
                    std::string GetCheckFailReason() const;

                    /**
                     * 设置Check failure cause
                     * @param _checkFailReason Check failure cause
                     * 
                     */
                    void SetCheckFailReason(const std::string& _checkFailReason);

                    /**
                     * 判断参数 CheckFailReason 是否已赋值
                     * @return CheckFailReason 是否已赋值
                     * 
                     */
                    bool CheckFailReasonHasBeenSet() const;

                    /**
                     * 获取Check status. Valid values: `Task_Running`, `NoRisk`, `HasRisk`, `Uncheck`, `Task_Error`.
                     * @return CheckStatus Check status. Valid values: `Task_Running`, `NoRisk`, `HasRisk`, `Uncheck`, `Task_Error`.
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置Check status. Valid values: `Task_Running`, `NoRisk`, `HasRisk`, `Uncheck`, `Task_Error`.
                     * @param _checkStatus Check status. Valid values: `Task_Running`, `NoRisk`, `HasRisk`, `Uncheck`, `Task_Error`.
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取Task creation time and check time
                     * @return TaskCreateTime Task creation time and check time
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置Task creation time and check time
                     * @param _taskCreateTime Task creation time and check time
                     * 
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取Access status
Not connected
Defended
Unprotected: AccessedInstalled
Partial protection: AccessedPartialDefence
Access exception: AccessedException
Uninstallation Exception: AccessedUninstallException
ACCESSING: installing
Uninstalling: AccessedUninstalling
                     * @return AccessedStatus Access status
Not connected
Defended
Unprotected: AccessedInstalled
Partial protection: AccessedPartialDefence
Access exception: AccessedException
Uninstallation Exception: AccessedUninstallException
ACCESSING: installing
Uninstalling: AccessedUninstalling
                     * 
                     */
                    std::string GetAccessedStatus() const;

                    /**
                     * 设置Access status
Not connected
Defended
Unprotected: AccessedInstalled
Partial protection: AccessedPartialDefence
Access exception: AccessedException
Uninstallation Exception: AccessedUninstallException
ACCESSING: installing
Uninstalling: AccessedUninstalling
                     * @param _accessedStatus Access status
Not connected
Defended
Unprotected: AccessedInstalled
Partial protection: AccessedPartialDefence
Access exception: AccessedException
Uninstallation Exception: AccessedUninstallException
ACCESSING: installing
Uninstalling: AccessedUninstalling
                     * 
                     */
                    void SetAccessedStatus(const std::string& _accessedStatus);

                    /**
                     * 判断参数 AccessedStatus 是否已赋值
                     * @return AccessedStatus 是否已赋值
                     * 
                     */
                    bool AccessedStatusHasBeenSet() const;

                    /**
                     * 获取Reason for Access Failure
                     * @return AccessedSubStatus Reason for Access Failure
                     * 
                     */
                    std::string GetAccessedSubStatus() const;

                    /**
                     * 设置Reason for Access Failure
                     * @param _accessedSubStatus Reason for Access Failure
                     * 
                     */
                    void SetAccessedSubStatus(const std::string& _accessedSubStatus);

                    /**
                     * 判断参数 AccessedSubStatus 是否已赋值
                     * @return AccessedSubStatus 是否已赋值
                     * 
                     */
                    bool AccessedSubStatusHasBeenSet() const;

                    /**
                     * 获取Access/Uninstallation failure reason.
                     * @return AccessedErrorReason Access/Uninstallation failure reason.
                     * 
                     */
                    std::string GetAccessedErrorReason() const;

                    /**
                     * 设置Access/Uninstallation failure reason.
                     * @param _accessedErrorReason Access/Uninstallation failure reason.
                     * 
                     */
                    void SetAccessedErrorReason(const std::string& _accessedErrorReason);

                    /**
                     * 判断参数 AccessedErrorReason 是否已赋值
                     * @return AccessedErrorReason 是否已赋值
                     * 
                     */
                    bool AccessedErrorReasonHasBeenSet() const;

                    /**
                     * 获取Total number of nodes
                     * @return NodeCount Total number of nodes
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Total number of nodes
                     * @param _nodeCount Total number of nodes
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Offline Node Count
                     * @return OffLineNodeCount Offline Node Count
                     * 
                     */
                    uint64_t GetOffLineNodeCount() const;

                    /**
                     * 设置Offline Node Count
                     * @param _offLineNodeCount Offline Node Count
                     * 
                     */
                    void SetOffLineNodeCount(const uint64_t& _offLineNodeCount);

                    /**
                     * 判断参数 OffLineNodeCount 是否已赋值
                     * @return OffLineNodeCount 是否已赋值
                     * 
                     */
                    bool OffLineNodeCountHasBeenSet() const;

                    /**
                     * 获取Number of Nodes Without Agent Installed
                     * @return UnInstallAgentNodeCount Number of Nodes Without Agent Installed
                     * 
                     */
                    uint64_t GetUnInstallAgentNodeCount() const;

                    /**
                     * 设置Number of Nodes Without Agent Installed
                     * @param _unInstallAgentNodeCount Number of Nodes Without Agent Installed
                     * 
                     */
                    void SetUnInstallAgentNodeCount(const uint64_t& _unInstallAgentNodeCount);

                    /**
                     * 判断参数 UnInstallAgentNodeCount 是否已赋值
                     * @return UnInstallAgentNodeCount 是否已赋值
                     * 
                     */
                    bool UnInstallAgentNodeCountHasBeenSet() const;

                    /**
                     * 获取Number of billing cores (elastic billing cores + regular billing cores).
                     * @return ChargeCoresCnt Number of billing cores (elastic billing cores + regular billing cores).
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置Number of billing cores (elastic billing cores + regular billing cores).
                     * @param _chargeCoresCnt Number of billing cores (elastic billing cores + regular billing cores).
                     * 
                     */
                    void SetChargeCoresCnt(const uint64_t& _chargeCoresCnt);

                    /**
                     * 判断参数 ChargeCoresCnt 是否已赋值
                     * @return ChargeCoresCnt 是否已赋值
                     * 
                     */
                    bool ChargeCoresCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return MasterAddresses 
                     * 
                     */
                    std::vector<std::string> GetMasterAddresses() const;

                    /**
                     * 设置
                     * @param _masterAddresses 
                     * 
                     */
                    void SetMasterAddresses(const std::vector<std::string>& _masterAddresses);

                    /**
                     * 判断参数 MasterAddresses 是否已赋值
                     * @return MasterAddresses 是否已赋值
                     * 
                     */
                    bool MasterAddressesHasBeenSet() const;

                    /**
                     * 获取
                     * @return CoresCnt 
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 设置
                     * @param _coresCnt 
                     * 
                     */
                    void SetCoresCnt(const uint64_t& _coresCnt);

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取Cluster audit switch status:
Closed / Closing / CloseFailed / Opened / Opening / OpenFailed
                     * @return ClusterAuditStatus Cluster audit switch status:
Closed / Closing / CloseFailed / Opened / Opening / OpenFailed
                     * 
                     */
                    std::string GetClusterAuditStatus() const;

                    /**
                     * 设置Cluster audit switch status:
Closed / Closing / CloseFailed / Opened / Opening / OpenFailed
                     * @param _clusterAuditStatus Cluster audit switch status:
Closed / Closing / CloseFailed / Opened / Opening / OpenFailed
                     * 
                     */
                    void SetClusterAuditStatus(const std::string& _clusterAuditStatus);

                    /**
                     * 判断参数 ClusterAuditStatus 是否已赋值
                     * @return ClusterAuditStatus 是否已赋值
                     * 
                     */
                    bool ClusterAuditStatusHasBeenSet() const;

                    /**
                     * 获取Information on the failure to enable/disable cluster audit.
                     * @return ClusterAuditFailedInfo Information on the failure to enable/disable cluster audit.
                     * 
                     */
                    std::string GetClusterAuditFailedInfo() const;

                    /**
                     * 设置Information on the failure to enable/disable cluster audit.
                     * @param _clusterAuditFailedInfo Information on the failure to enable/disable cluster audit.
                     * 
                     */
                    void SetClusterAuditFailedInfo(const std::string& _clusterAuditFailedInfo);

                    /**
                     * 判断参数 ClusterAuditFailedInfo 是否已赋值
                     * @return ClusterAuditFailedInfo 是否已赋值
                     * 
                     */
                    bool ClusterAuditFailedInfoHasBeenSet() const;

                    /**
                     * 获取Owner name.
                     * @return OwnerName Owner name.
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置Owner name.
                     * @param _ownerName Owner name.
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

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
                     * Cluster version
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Cluster OS
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * Cluster type
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Number of nodes in the cluster
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * Cluster region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Protection Status 
Defended 
Unprotected
Partially defended
                     */
                    std::string m_defenderStatus;
                    bool m_defenderStatusHasBeenSet;

                    /**
                     * Cluster status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Cluster operation sub-status.
                     */
                    std::string m_clusterSubStatus;
                    bool m_clusterSubStatusHasBeenSet;

                    /**
                     * Cluster check mode. Valid values: `Cluster_Normal`, `Cluster_Actived`.
                     */
                    std::string m_clusterCheckMode;
                    bool m_clusterCheckModeHasBeenSet;

                    /**
                     * Whether automatic and regular check is enabled
                     */
                    bool m_clusterAutoCheck;
                    bool m_clusterAutoCheckHasBeenSet;

                    /**
                     * Cause of the failure to deploy the defender. When it is `UserDaemonSetNotReady`, `UnreadyNodeNum` is changed to "The defenders on N nodes are ready". If it is another value, the error message is directly displayed.
                     */
                    std::string m_defenderErrorReason;
                    bool m_defenderErrorReasonHasBeenSet;

                    /**
                     * Number of nodes where the defender is not ready
                     */
                    uint64_t m_unreadyNodeNum;
                    bool m_unreadyNodeNumHasBeenSet;

                    /**
                     * Number of critical check items
                     */
                    int64_t m_seriousRiskCount;
                    bool m_seriousRiskCountHasBeenSet;

                    /**
                     * Number of high-risk check items
                     */
                    int64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * Number of medium-risk check items
                     */
                    int64_t m_middleRiskCount;
                    bool m_middleRiskCountHasBeenSet;

                    /**
                     * Number of prompt-risk check items
                     */
                    int64_t m_hintRiskCount;
                    bool m_hintRiskCountHasBeenSet;

                    /**
                     * Check failure cause
                     */
                    std::string m_checkFailReason;
                    bool m_checkFailReasonHasBeenSet;

                    /**
                     * Check status. Valid values: `Task_Running`, `NoRisk`, `HasRisk`, `Uncheck`, `Task_Error`.
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Task creation time and check time
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * Access status
Not connected
Defended
Unprotected: AccessedInstalled
Partial protection: AccessedPartialDefence
Access exception: AccessedException
Uninstallation Exception: AccessedUninstallException
ACCESSING: installing
Uninstalling: AccessedUninstalling
                     */
                    std::string m_accessedStatus;
                    bool m_accessedStatusHasBeenSet;

                    /**
                     * Reason for Access Failure
                     */
                    std::string m_accessedSubStatus;
                    bool m_accessedSubStatusHasBeenSet;

                    /**
                     * Access/Uninstallation failure reason.
                     */
                    std::string m_accessedErrorReason;
                    bool m_accessedErrorReasonHasBeenSet;

                    /**
                     * Total number of nodes
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Offline Node Count
                     */
                    uint64_t m_offLineNodeCount;
                    bool m_offLineNodeCountHasBeenSet;

                    /**
                     * Number of Nodes Without Agent Installed
                     */
                    uint64_t m_unInstallAgentNodeCount;
                    bool m_unInstallAgentNodeCountHasBeenSet;

                    /**
                     * Number of billing cores (elastic billing cores + regular billing cores).
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_masterAddresses;
                    bool m_masterAddressesHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * Cluster audit switch status:
Closed / Closing / CloseFailed / Opened / Opening / OpenFailed
                     */
                    std::string m_clusterAuditStatus;
                    bool m_clusterAuditStatusHasBeenSet;

                    /**
                     * Information on the failure to enable/disable cluster audit.
                     */
                    std::string m_clusterAuditFailedInfo;
                    bool m_clusterAuditFailedInfoHasBeenSet;

                    /**
                     * Owner name.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_
