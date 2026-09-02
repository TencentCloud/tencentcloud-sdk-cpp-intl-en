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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERLISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cluster list item
                */
                class ClusterListItem : public AbstractModel
                {
                public:
                    ClusterListItem();
                    ~ClusterListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppID <p>appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appID <p>appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Asset id</p>
                     * @return AssetId <p>Asset id</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset id</p>
                     * @param _assetId <p>Asset id</p>
                     * @deprecated
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * @deprecated
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
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
                     * 获取<p>Cluster type<br>MANAGED_CLUSTER: managed cluster</p>
                     * @return ClusterType <p>Cluster type<br>MANAGED_CLUSTER: managed cluster</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>Cluster type<br>MANAGED_CLUSTER: managed cluster</p>
                     * @param _clusterType <p>Cluster type<br>MANAGED_CLUSTER: managed cluster</p>
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
                     * 获取<p>Number of critical alarm events</p>
                     * @return AlarmEventCriticalCount <p>Number of critical alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventCriticalCount() const;

                    /**
                     * 设置<p>Number of critical alarm events</p>
                     * @param _alarmEventCriticalCount <p>Number of critical alarm events</p>
                     * @deprecated
                     */
                    void SetAlarmEventCriticalCount(const uint64_t& _alarmEventCriticalCount);

                    /**
                     * 判断参数 AlarmEventCriticalCount 是否已赋值
                     * @return AlarmEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk alarm events</p>
                     * @return AlarmEventHighCount <p>Number of high-risk alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventHighCount() const;

                    /**
                     * 设置<p>Number of high-risk alarm events</p>
                     * @param _alarmEventHighCount <p>Number of high-risk alarm events</p>
                     * @deprecated
                     */
                    void SetAlarmEventHighCount(const uint64_t& _alarmEventHighCount);

                    /**
                     * 判断参数 AlarmEventHighCount 是否已赋值
                     * @return AlarmEventHighCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk alarm events</p>
                     * @return AlarmEventMiddleCount <p>Number of medium-risk alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventMiddleCount() const;

                    /**
                     * 设置<p>Number of medium-risk alarm events</p>
                     * @param _alarmEventMiddleCount <p>Number of medium-risk alarm events</p>
                     * @deprecated
                     */
                    void SetAlarmEventMiddleCount(const uint64_t& _alarmEventMiddleCount);

                    /**
                     * 判断参数 AlarmEventMiddleCount 是否已赋值
                     * @return AlarmEventMiddleCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk alarm events</p>
                     * @return AlarmEventLowCount <p>Number of low-risk alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventLowCount() const;

                    /**
                     * 设置<p>Number of low-risk alarm events</p>
                     * @param _alarmEventLowCount <p>Number of low-risk alarm events</p>
                     * @deprecated
                     */
                    void SetAlarmEventLowCount(const uint64_t& _alarmEventLowCount);

                    /**
                     * 判断参数 AlarmEventLowCount 是否已赋值
                     * @return AlarmEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical risk events</p>
                     * @return RiskEventCriticalCount <p>Number of critical risk events</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 设置<p>Number of critical risk events</p>
                     * @param _riskEventCriticalCount <p>Number of critical risk events</p>
                     * @deprecated
                     */
                    void SetRiskEventCriticalCount(const uint64_t& _riskEventCriticalCount);

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-severity risk events</p>
                     * @return RiskEventHighCount <p>Number of high-severity risk events</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 设置<p>Number of high-severity risk events</p>
                     * @param _riskEventHighCount <p>Number of high-severity risk events</p>
                     * @deprecated
                     */
                    void SetRiskEventHighCount(const uint64_t& _riskEventHighCount);

                    /**
                     * 判断参数 RiskEventHighCount 是否已赋值
                     * @return RiskEventHighCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk events</p>
                     * @return RiskEventMiddleCount <p>Number of medium-risk events</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 设置<p>Number of medium-risk events</p>
                     * @param _riskEventMiddleCount <p>Number of medium-risk events</p>
                     * @deprecated
                     */
                    void SetRiskEventMiddleCount(const uint64_t& _riskEventMiddleCount);

                    /**
                     * 判断参数 RiskEventMiddleCount 是否已赋值
                     * @return RiskEventMiddleCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk events</p>
                     * @return RiskEventLowCount <p>Number of low-risk events</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 设置<p>Number of low-risk events</p>
                     * @param _riskEventLowCount <p>Number of low-risk events</p>
                     * @deprecated
                     */
                    void SetRiskEventLowCount(const uint64_t& _riskEventLowCount);

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>Total nodes</p>
                     * @return NodeCount <p>Total nodes</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>Total nodes</p>
                     * @param _nodeCount <p>Total nodes</p>
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
                     * 获取<p>Total number of offline nodes</p>
                     * @return OfflineNodeCount <p>Total number of offline nodes</p>
                     * 
                     */
                    uint64_t GetOfflineNodeCount() const;

                    /**
                     * 设置<p>Total number of offline nodes</p>
                     * @param _offlineNodeCount <p>Total number of offline nodes</p>
                     * 
                     */
                    void SetOfflineNodeCount(const uint64_t& _offlineNodeCount);

                    /**
                     * 判断参数 OfflineNodeCount 是否已赋值
                     * @return OfflineNodeCount 是否已赋值
                     * 
                     */
                    bool OfflineNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of nodes not installed</p>
                     * @return UninstallNodeCount <p>Total number of nodes not installed</p>
                     * 
                     */
                    uint64_t GetUninstallNodeCount() const;

                    /**
                     * 设置<p>Total number of nodes not installed</p>
                     * @param _uninstallNodeCount <p>Total number of nodes not installed</p>
                     * 
                     */
                    void SetUninstallNodeCount(const uint64_t& _uninstallNodeCount);

                    /**
                     * 判断参数 UninstallNodeCount 是否已赋值
                     * @return UninstallNodeCount 是否已赋值
                     * 
                     */
                    bool UninstallNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Total cores.</p>
                     * @return TotalCoresCount <p>Total cores.</p>
                     * 
                     */
                    int64_t GetTotalCoresCount() const;

                    /**
                     * 设置<p>Total cores.</p>
                     * @param _totalCoresCount <p>Total cores.</p>
                     * 
                     */
                    void SetTotalCoresCount(const int64_t& _totalCoresCount);

                    /**
                     * 判断参数 TotalCoresCount 是否已赋值
                     * @return TotalCoresCount 是否已赋值
                     * 
                     */
                    bool TotalCoresCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of protected cores</p>
                     * @return DefendCoresCount <p>Number of protected cores</p>
                     * @deprecated
                     */
                    int64_t GetDefendCoresCount() const;

                    /**
                     * 设置<p>Number of protected cores</p>
                     * @param _defendCoresCount <p>Number of protected cores</p>
                     * @deprecated
                     */
                    void SetDefendCoresCount(const int64_t& _defendCoresCount);

                    /**
                     * 判断参数 DefendCoresCount 是否已赋值
                     * @return DefendCoresCount 是否已赋值
                     * @deprecated
                     */
                    bool DefendCoresCountHasBeenSet() const;

                    /**
                     * 获取<p>Audit log switch<br>(0: off; 1: on; 2: activation fail; 3: failed to close)</p>
                     * @return AuditLogSwitchStatus <p>Audit log switch<br>(0: off; 1: on; 2: activation fail; 3: failed to close)</p>
                     * 
                     */
                    int64_t GetAuditLogSwitchStatus() const;

                    /**
                     * 设置<p>Audit log switch<br>(0: off; 1: on; 2: activation fail; 3: failed to close)</p>
                     * @param _auditLogSwitchStatus <p>Audit log switch<br>(0: off; 1: on; 2: activation fail; 3: failed to close)</p>
                     * 
                     */
                    void SetAuditLogSwitchStatus(const int64_t& _auditLogSwitchStatus);

                    /**
                     * 判断参数 AuditLogSwitchStatus 是否已赋值
                     * @return AuditLogSwitchStatus 是否已赋值
                     * 
                     */
                    bool AuditLogSwitchStatusHasBeenSet() const;

                    /**
                     * 获取<p>Protection status<br>Defended: Defended</p>
                     * @return DefendStatus <p>Protection status<br>Defended: Defended</p>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>Protection status<br>Defended: Defended</p>
                     * @param _defendStatus <p>Protection status<br>Defended: Defended</p>
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>Cluster status</p>
                     * @return RunStatus <p>Cluster status</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>Cluster status</p>
                     * @param _runStatus <p>Cluster status</p>
                     * 
                     */
                    void SetRunStatus(const std::string& _runStatus);

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
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
                     * 获取<p>K8s version.</p>
                     * @return Version <p>K8s version.</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>K8s version.</p>
                     * @param _version <p>K8s version.</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>Most recent asset synchronization time</p>
                     * @return LastAssetSyncTime <p>Most recent asset synchronization time</p>
                     * 
                     */
                    std::string GetLastAssetSyncTime() const;

                    /**
                     * 设置<p>Most recent asset synchronization time</p>
                     * @param _lastAssetSyncTime <p>Most recent asset synchronization time</p>
                     * 
                     */
                    void SetLastAssetSyncTime(const std::string& _lastAssetSyncTime);

                    /**
                     * 判断参数 LastAssetSyncTime 是否已赋值
                     * @return LastAssetSyncTime 是否已赋值
                     * 
                     */
                    bool LastAssetSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last risk check time</p>
                     * @return LastRiskCheckTime <p>Last risk check time</p>
                     * 
                     */
                    std::string GetLastRiskCheckTime() const;

                    /**
                     * 设置<p>Last risk check time</p>
                     * @param _lastRiskCheckTime <p>Last risk check time</p>
                     * 
                     */
                    void SetLastRiskCheckTime(const std::string& _lastRiskCheckTime);

                    /**
                     * 判断参数 LastRiskCheckTime 是否已赋值
                     * @return LastRiskCheckTime 是否已赋值
                     * 
                     */
                    bool LastRiskCheckTimeHasBeenSet() const;

                    /**
                     * 获取<p>Risk status</p>
                     * @return RiskStatus <p>Risk status</p>
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置<p>Risk status</p>
                     * @param _riskStatus <p>Risk status</p>
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取<p>Tag list.</p>
                     * @return Tags <p>Tag list.</p>
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置<p>Tag list.</p>
                     * @param _tags <p>Tag list.</p>
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Owner name</p>
                     * @return OwnerName <p>Owner name</p>
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置<p>Owner name</p>
                     * @param _ownerName <p>Owner name</p>
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取<p>Failure reason</p>
                     * @return FailMessage <p>Failure reason</p>
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置<p>Failure reason</p>
                     * @param _failMessage <p>Failure reason</p>
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取<p>Operating sub-status</p>
                     * @return RunSubStatus <p>Operating sub-status</p>
                     * 
                     */
                    std::string GetRunSubStatus() const;

                    /**
                     * 设置<p>Operating sub-status</p>
                     * @param _runSubStatus <p>Operating sub-status</p>
                     * 
                     */
                    void SetRunSubStatus(const std::string& _runSubStatus);

                    /**
                     * 判断参数 RunSubStatus 是否已赋值
                     * @return RunSubStatus 是否已赋值
                     * 
                     */
                    bool RunSubStatusHasBeenSet() const;

                    /**
                     * 获取<p>Cluster access status</p><p>Enumeration values:</p><ul><li>AccessedNone: not connected</li><li>AccessedInstalling: connecting</li><li>AccessedInstalled: connected - unprotected</li><li>AccessedUninstalling: uninstalling</li><li>AccessedUninstallException: uninstallation exception</li><li>AccessedDefended: connected - defended</li><li>AccessedPartialDefence: connected - partially defended</li><li>AccessedException: access exception</li></ul>
                     * @return AccessedStatus <p>Cluster access status</p><p>Enumeration values:</p><ul><li>AccessedNone: not connected</li><li>AccessedInstalling: connecting</li><li>AccessedInstalled: connected - unprotected</li><li>AccessedUninstalling: uninstalling</li><li>AccessedUninstallException: uninstallation exception</li><li>AccessedDefended: connected - defended</li><li>AccessedPartialDefence: connected - partially defended</li><li>AccessedException: access exception</li></ul>
                     * 
                     */
                    std::string GetAccessedStatus() const;

                    /**
                     * 设置<p>Cluster access status</p><p>Enumeration values:</p><ul><li>AccessedNone: not connected</li><li>AccessedInstalling: connecting</li><li>AccessedInstalled: connected - unprotected</li><li>AccessedUninstalling: uninstalling</li><li>AccessedUninstallException: uninstallation exception</li><li>AccessedDefended: connected - defended</li><li>AccessedPartialDefence: connected - partially defended</li><li>AccessedException: access exception</li></ul>
                     * @param _accessedStatus <p>Cluster access status</p><p>Enumeration values:</p><ul><li>AccessedNone: not connected</li><li>AccessedInstalling: connecting</li><li>AccessedInstalled: connected - unprotected</li><li>AccessedUninstalling: uninstalling</li><li>AccessedUninstallException: uninstallation exception</li><li>AccessedDefended: connected - defended</li><li>AccessedPartialDefence: connected - partially defended</li><li>AccessedException: access exception</li></ul>
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
                     * 获取<p>Integration sub-status</p>
                     * @return AccessedSubStatus <p>Integration sub-status</p>
                     * 
                     */
                    std::string GetAccessedSubStatus() const;

                    /**
                     * 设置<p>Integration sub-status</p>
                     * @param _accessedSubStatus <p>Integration sub-status</p>
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
                     * 获取<p>Cluster ca certificate md5 value, unique cluster id</p>
                     * @return ClusterCaMD5 <p>Cluster ca certificate md5 value, unique cluster id</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>Cluster ca certificate md5 value, unique cluster id</p>
                     * @param _clusterCaMD5 <p>Cluster ca certificate md5 value, unique cluster id</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>Asset synchronization status</p><p>Enumeration values:</p><ul><li>AssetCheckNone: initial state</li><li>AssetCheckSync: synchronizing</li><li>AssetCheckFinished: synchronization complete</li><li>AssetCheckFailed: synchronization failed</li></ul>
                     * @return AssetSyncStatus <p>Asset synchronization status</p><p>Enumeration values:</p><ul><li>AssetCheckNone: initial state</li><li>AssetCheckSync: synchronizing</li><li>AssetCheckFinished: synchronization complete</li><li>AssetCheckFailed: synchronization failed</li></ul>
                     * 
                     */
                    std::string GetAssetSyncStatus() const;

                    /**
                     * 设置<p>Asset synchronization status</p><p>Enumeration values:</p><ul><li>AssetCheckNone: initial state</li><li>AssetCheckSync: synchronizing</li><li>AssetCheckFinished: synchronization complete</li><li>AssetCheckFailed: synchronization failed</li></ul>
                     * @param _assetSyncStatus <p>Asset synchronization status</p><p>Enumeration values:</p><ul><li>AssetCheckNone: initial state</li><li>AssetCheckSync: synchronizing</li><li>AssetCheckFinished: synchronization complete</li><li>AssetCheckFailed: synchronization failed</li></ul>
                     * 
                     */
                    void SetAssetSyncStatus(const std::string& _assetSyncStatus);

                    /**
                     * 判断参数 AssetSyncStatus 是否已赋值
                     * @return AssetSyncStatus 是否已赋值
                     * 
                     */
                    bool AssetSyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of cluster configuration risks</p>
                     * @return RiskConfigCount <p>Number of cluster configuration risks</p>
                     * @deprecated
                     */
                    uint64_t GetRiskConfigCount() const;

                    /**
                     * 设置<p>Number of cluster configuration risks</p>
                     * @param _riskConfigCount <p>Number of cluster configuration risks</p>
                     * @deprecated
                     */
                    void SetRiskConfigCount(const uint64_t& _riskConfigCount);

                    /**
                     * 判断参数 RiskConfigCount 是否已赋值
                     * @return RiskConfigCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskConfigCountHasBeenSet() const;

                    /**
                     * 获取<p>Cluster access failure reason</p>
                     * @return AccessFailedMessage <p>Cluster access failure reason</p>
                     * @deprecated
                     */
                    std::string GetAccessFailedMessage() const;

                    /**
                     * 设置<p>Cluster access failure reason</p>
                     * @param _accessFailedMessage <p>Cluster access failure reason</p>
                     * @deprecated
                     */
                    void SetAccessFailedMessage(const std::string& _accessFailedMessage);

                    /**
                     * 判断参数 AccessFailedMessage 是否已赋值
                     * @return AccessFailedMessage 是否已赋值
                     * @deprecated
                     */
                    bool AccessFailedMessageHasBeenSet() const;

                    /**
                     * 获取<p>Region Chinese Name</p>
                     * @return RegionName <p>Region Chinese Name</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>Region Chinese Name</p>
                     * @param _regionName <p>Region Chinese Name</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>Region English name</p>
                     * @return RegionNameEn <p>Region English name</p>
                     * 
                     */
                    std::string GetRegionNameEn() const;

                    /**
                     * 设置<p>Region English name</p>
                     * @param _regionNameEn <p>Region English name</p>
                     * 
                     */
                    void SetRegionNameEn(const std::string& _regionNameEn);

                    /**
                     * 判断参数 RegionNameEn 是否已赋值
                     * @return RegionNameEn 是否已赋值
                     * 
                     */
                    bool RegionNameEnHasBeenSet() const;

                    /**
                     * 获取<p>Number of nodes not bound to the Ultimate Edition</p>
                     * @return UnboundUltimateNodeCount <p>Number of nodes not bound to the Ultimate Edition</p>
                     * 
                     */
                    uint64_t GetUnboundUltimateNodeCount() const;

                    /**
                     * 设置<p>Number of nodes not bound to the Ultimate Edition</p>
                     * @param _unboundUltimateNodeCount <p>Number of nodes not bound to the Ultimate Edition</p>
                     * 
                     */
                    void SetUnboundUltimateNodeCount(const uint64_t& _unboundUltimateNodeCount);

                    /**
                     * 判断参数 UnboundUltimateNodeCount 是否已赋值
                     * @return UnboundUltimateNodeCount 是否已赋值
                     * 
                     */
                    bool UnboundUltimateNodeCountHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Asset id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster type<br>MANAGED_CLUSTER: managed cluster</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>Number of critical alarm events</p>
                     */
                    uint64_t m_alarmEventCriticalCount;
                    bool m_alarmEventCriticalCountHasBeenSet;

                    /**
                     * <p>Number of high-risk alarm events</p>
                     */
                    uint64_t m_alarmEventHighCount;
                    bool m_alarmEventHighCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk alarm events</p>
                     */
                    uint64_t m_alarmEventMiddleCount;
                    bool m_alarmEventMiddleCountHasBeenSet;

                    /**
                     * <p>Number of low-risk alarm events</p>
                     */
                    uint64_t m_alarmEventLowCount;
                    bool m_alarmEventLowCountHasBeenSet;

                    /**
                     * <p>Number of critical risk events</p>
                     */
                    uint64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>Number of high-severity risk events</p>
                     */
                    uint64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk events</p>
                     */
                    uint64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>Number of low-risk events</p>
                     */
                    uint64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>Total nodes</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>Total number of offline nodes</p>
                     */
                    uint64_t m_offlineNodeCount;
                    bool m_offlineNodeCountHasBeenSet;

                    /**
                     * <p>Total number of nodes not installed</p>
                     */
                    uint64_t m_uninstallNodeCount;
                    bool m_uninstallNodeCountHasBeenSet;

                    /**
                     * <p>Total cores.</p>
                     */
                    int64_t m_totalCoresCount;
                    bool m_totalCoresCountHasBeenSet;

                    /**
                     * <p>Number of protected cores</p>
                     */
                    int64_t m_defendCoresCount;
                    bool m_defendCoresCountHasBeenSet;

                    /**
                     * <p>Audit log switch<br>(0: off; 1: on; 2: activation fail; 3: failed to close)</p>
                     */
                    int64_t m_auditLogSwitchStatus;
                    bool m_auditLogSwitchStatusHasBeenSet;

                    /**
                     * <p>Protection status<br>Defended: Defended</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>Cluster status</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>K8s version.</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Most recent asset synchronization time</p>
                     */
                    std::string m_lastAssetSyncTime;
                    bool m_lastAssetSyncTimeHasBeenSet;

                    /**
                     * <p>Last risk check time</p>
                     */
                    std::string m_lastRiskCheckTime;
                    bool m_lastRiskCheckTimeHasBeenSet;

                    /**
                     * <p>Risk status</p>
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * <p>Tag list.</p>
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Owner name</p>
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * <p>Operating sub-status</p>
                     */
                    std::string m_runSubStatus;
                    bool m_runSubStatusHasBeenSet;

                    /**
                     * <p>Cluster access status</p><p>Enumeration values:</p><ul><li>AccessedNone: not connected</li><li>AccessedInstalling: connecting</li><li>AccessedInstalled: connected - unprotected</li><li>AccessedUninstalling: uninstalling</li><li>AccessedUninstallException: uninstallation exception</li><li>AccessedDefended: connected - defended</li><li>AccessedPartialDefence: connected - partially defended</li><li>AccessedException: access exception</li></ul>
                     */
                    std::string m_accessedStatus;
                    bool m_accessedStatusHasBeenSet;

                    /**
                     * <p>Integration sub-status</p>
                     */
                    std::string m_accessedSubStatus;
                    bool m_accessedSubStatusHasBeenSet;

                    /**
                     * <p>Cluster ca certificate md5 value, unique cluster id</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>Asset synchronization status</p><p>Enumeration values:</p><ul><li>AssetCheckNone: initial state</li><li>AssetCheckSync: synchronizing</li><li>AssetCheckFinished: synchronization complete</li><li>AssetCheckFailed: synchronization failed</li></ul>
                     */
                    std::string m_assetSyncStatus;
                    bool m_assetSyncStatusHasBeenSet;

                    /**
                     * <p>Number of cluster configuration risks</p>
                     */
                    uint64_t m_riskConfigCount;
                    bool m_riskConfigCountHasBeenSet;

                    /**
                     * <p>Cluster access failure reason</p>
                     */
                    std::string m_accessFailedMessage;
                    bool m_accessFailedMessageHasBeenSet;

                    /**
                     * <p>Region Chinese Name</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>Region English name</p>
                     */
                    std::string m_regionNameEn;
                    bool m_regionNameEnHasBeenSet;

                    /**
                     * <p>Number of nodes not bound to the Ultimate Edition</p>
                     */
                    uint64_t m_unboundUltimateNodeCount;
                    bool m_unboundUltimateNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERLISTITEM_H_
