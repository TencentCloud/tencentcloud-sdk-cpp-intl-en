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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERPODLISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERPODLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ClusterContainerListItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cluster pod list item
                */
                class ClusterPodListItem : public AbstractModel
                {
                public:
                    ClusterPodListItem();
                    ~ClusterPodListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Unique pod id</p>
                     * @return PodUid <p>Unique pod id</p>
                     * 
                     */
                    std::string GetPodUid() const;

                    /**
                     * 设置<p>Unique pod id</p>
                     * @param _podUid <p>Unique pod id</p>
                     * 
                     */
                    void SetPodUid(const std::string& _podUid);

                    /**
                     * 判断参数 PodUid 是否已赋值
                     * @return PodUid 是否已赋值
                     * 
                     */
                    bool PodUidHasBeenSet() const;

                    /**
                     * 获取<p>Pod name.</p>
                     * @return PodName <p>Pod name.</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod name.</p>
                     * @param _podName <p>Pod name.</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>Pod IP array</p>
                     * @return PodIPs <p>Pod IP array</p>
                     * 
                     */
                    std::vector<std::string> GetPodIPs() const;

                    /**
                     * 设置<p>Pod IP array</p>
                     * @param _podIPs <p>Pod IP array</p>
                     * 
                     */
                    void SetPodIPs(const std::vector<std::string>& _podIPs);

                    /**
                     * 判断参数 PodIPs 是否已赋值
                     * @return PodIPs 是否已赋值
                     * 
                     */
                    bool PodIPsHasBeenSet() const;

                    /**
                     * 获取<p>pod status</p>
                     * @return RunStatus <p>pod status</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>pod status</p>
                     * @param _runStatus <p>pod status</p>
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
                     * 获取<p>Node ID.</p>
                     * @return NodeId <p>Node ID.</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>Node ID.</p>
                     * @param _nodeId <p>Node ID.</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>Node type</p>
                     * @return NodeType <p>Node type</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node type</p>
                     * @param _nodeType <p>Node type</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Load Name</p>
                     * @return WorkloadName <p>Load Name</p>
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置<p>Load Name</p>
                     * @param _workloadName <p>Load Name</p>
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                    /**
                     * 获取<p>Workload type</p>
                     * @return WorkloadType <p>Workload type</p>
                     * 
                     */
                    std::string GetWorkloadType() const;

                    /**
                     * 设置<p>Workload type</p>
                     * @param _workloadType <p>Workload type</p>
                     * 
                     */
                    void SetWorkloadType(const std::string& _workloadType);

                    /**
                     * 判断参数 WorkloadType 是否已赋值
                     * @return WorkloadType 是否已赋值
                     * 
                     */
                    bool WorkloadTypeHasBeenSet() const;

                    /**
                     * 获取<p>Namespace.</p>
                     * @return Namespace <p>Namespace.</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Namespace.</p>
                     * @param _namespace <p>Namespace.</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Unique Pod identifier ID</p>
                     * @return UniqueID <p>Unique Pod identifier ID</p>
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 设置<p>Unique Pod identifier ID</p>
                     * @param _uniqueID <p>Unique Pod identifier ID</p>
                     * 
                     */
                    void SetUniqueID(const std::string& _uniqueID);

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>Critical risk count</p>
                     * @return RiskEventCriticalCount <p>Critical risk count</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 设置<p>Critical risk count</p>
                     * @param _riskEventCriticalCount <p>Critical risk count</p>
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
                     * 获取<p>Number of high-risk items</p>
                     * @return RiskEventHighCount <p>Number of high-risk items</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 设置<p>Number of high-risk items</p>
                     * @param _riskEventHighCount <p>Number of high-risk items</p>
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
                     * 获取<p>Number of medium-risk items</p>
                     * @return RiskEventMiddleCount <p>Number of medium-risk items</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 设置<p>Number of medium-risk items</p>
                     * @param _riskEventMiddleCount <p>Number of medium-risk items</p>
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
                     * 获取<p>Number of low risks</p>
                     * @return RiskEventLowCount <p>Number of low risks</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 设置<p>Number of low risks</p>
                     * @param _riskEventLowCount <p>Number of low risks</p>
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
                     * 获取<p>Number of critical alerts</p>
                     * @return AlarmEventCriticalCount <p>Number of critical alerts</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventCriticalCount() const;

                    /**
                     * 设置<p>Number of critical alerts</p>
                     * @param _alarmEventCriticalCount <p>Number of critical alerts</p>
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
                     * 获取<p>High-risk alarm count</p>
                     * @return AlarmEventHighCount <p>High-risk alarm count</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventHighCount() const;

                    /**
                     * 设置<p>High-risk alarm count</p>
                     * @param _alarmEventHighCount <p>High-risk alarm count</p>
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
                     * 获取<p>Number of medium-risk alerts</p>
                     * @return AlarmEventMiddleCount <p>Number of medium-risk alerts</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventMiddleCount() const;

                    /**
                     * 设置<p>Number of medium-risk alerts</p>
                     * @param _alarmEventMiddleCount <p>Number of medium-risk alerts</p>
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
                     * 获取<p>Number of low-risk alarms</p>
                     * @return AlarmEventLowCount <p>Number of low-risk alarms</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventLowCount() const;

                    /**
                     * 设置<p>Number of low-risk alarms</p>
                     * @param _alarmEventLowCount <p>Number of low-risk alarms</p>
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
                     * 获取<p>Associated container list</p>
                     * @return ContainerList <p>Associated container list</p>
                     * 
                     */
                    std::vector<ClusterContainerListItem> GetContainerList() const;

                    /**
                     * 设置<p>Associated container list</p>
                     * @param _containerList <p>Associated container list</p>
                     * 
                     */
                    void SetContainerList(const std::vector<ClusterContainerListItem>& _containerList);

                    /**
                     * 判断参数 ContainerList 是否已赋值
                     * @return ContainerList 是否已赋值
                     * 
                     */
                    bool ContainerListHasBeenSet() const;

                    /**
                     * 获取<p>Number of associated alarms</p>
                     * @return AlarmCount <p>Number of associated alarms</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>Number of associated alarms</p>
                     * @param _alarmCount <p>Number of associated alarms</p>
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of cores.</p><p>Unit: millicore.</p>
                     * @return CoresCount <p>Number of cores.</p><p>Unit: millicore.</p>
                     * 
                     */
                    int64_t GetCoresCount() const;

                    /**
                     * 设置<p>Number of cores.</p><p>Unit: millicore.</p>
                     * @param _coresCount <p>Number of cores.</p><p>Unit: millicore.</p>
                     * 
                     */
                    void SetCoresCount(const int64_t& _coresCount);

                    /**
                     * 判断参数 CoresCount 是否已赋值
                     * @return CoresCount 是否已赋值
                     * 
                     */
                    bool CoresCountHasBeenSet() const;

                private:

                    /**
                     * <p>Asset id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Unique pod id</p>
                     */
                    std::string m_podUid;
                    bool m_podUidHasBeenSet;

                    /**
                     * <p>Pod name.</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>Pod IP array</p>
                     */
                    std::vector<std::string> m_podIPs;
                    bool m_podIPsHasBeenSet;

                    /**
                     * <p>pod status</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>Number of protected cores</p>
                     */
                    int64_t m_defendCoresCount;
                    bool m_defendCoresCountHasBeenSet;

                    /**
                     * <p>Node ID.</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>Node type</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Load Name</p>
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * <p>Workload type</p>
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                    /**
                     * <p>Namespace.</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Unique Pod identifier ID</p>
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                    /**
                     * <p>Critical risk count</p>
                     */
                    uint64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>Number of high-risk items</p>
                     */
                    uint64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk items</p>
                     */
                    uint64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>Number of low risks</p>
                     */
                    uint64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>Number of critical alerts</p>
                     */
                    uint64_t m_alarmEventCriticalCount;
                    bool m_alarmEventCriticalCountHasBeenSet;

                    /**
                     * <p>High-risk alarm count</p>
                     */
                    uint64_t m_alarmEventHighCount;
                    bool m_alarmEventHighCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk alerts</p>
                     */
                    uint64_t m_alarmEventMiddleCount;
                    bool m_alarmEventMiddleCountHasBeenSet;

                    /**
                     * <p>Number of low-risk alarms</p>
                     */
                    uint64_t m_alarmEventLowCount;
                    bool m_alarmEventLowCountHasBeenSet;

                    /**
                     * <p>Associated container list</p>
                     */
                    std::vector<ClusterContainerListItem> m_containerList;
                    bool m_containerListHasBeenSet;

                    /**
                     * <p>Number of associated alarms</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>Number of cores.</p><p>Unit: millicore.</p>
                     */
                    int64_t m_coresCount;
                    bool m_coresCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERPODLISTITEM_H_
