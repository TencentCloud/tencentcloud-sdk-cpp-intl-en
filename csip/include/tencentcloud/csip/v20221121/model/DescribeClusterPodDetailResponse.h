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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeClusterPodDetail response structure.
                */
                class DescribeClusterPodDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterPodDetailResponse();
                    ~DescribeClusterPodDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Pod unique ID</p>
                     * @return UniqueID <p>Pod unique ID</p>
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>Primary Account AppID</p>
                     * @return AppID <p>Primary Account AppID</p>
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
                     * 获取<p>Pod name</p>
                     * @return PodName <p>Pod name</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>Pod IP address</p>
                     * @return PodIP <p>Pod IP address</p>
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取<p>Pod running state</p>
                     * @return RunStatus <p>Pod running state</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>Pod Labels list</p>
                     * @return Labels <p>Pod Labels list</p>
                     * 
                     */
                    std::vector<AssetTag> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Pod startup time</p>
                     * @return StartTime <p>Pod startup time</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Start time (seconds)</p>
                     * @return StartupTime <p>Start time (seconds)</p>
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取<p>Pod restart count</p>
                     * @return RestartCount <p>Pod restart count</p>
                     * 
                     */
                    uint64_t GetRestartCount() const;

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取<p>Cluster Name</p>
                     * @return ClusterName <p>Cluster Name</p>
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
                     * 获取<p>Cluster ID</p>
                     * @return ClusterID <p>Cluster ID</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>Cluster type</p>
                     * @return ClusterType <p>Cluster type</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster operation status</p>
                     * @return ClusterRunStatus <p>Cluster operation status</p>
                     * 
                     */
                    std::string GetClusterRunStatus() const;

                    /**
                     * 判断参数 ClusterRunStatus 是否已赋值
                     * @return ClusterRunStatus 是否已赋值
                     * 
                     */
                    bool ClusterRunStatusHasBeenSet() const;

                    /**
                     * 获取<p>Namespace</p>
                     * @return Namespace <p>Namespace</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>Node name where it resides.</p>
                     * @return NodeName <p>Node name where it resides.</p>
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
                     * 获取<p>Current node ID</p>
                     * @return NodeId <p>Current node ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the associated Workload</p>
                     * @return WorkloadName <p>Name of the associated Workload</p>
                     * 
                     */
                    std::string GetWorkloadName() const;

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
                     * 判断参数 WorkloadType 是否已赋值
                     * @return WorkloadType 是否已赋值
                     * 
                     */
                    bool WorkloadTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical risk events</p>
                     * @return RiskEventCriticalCount <p>Number of critical risk events</p>
                     * 
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * 
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk events</p>
                     * @return RiskEventHighCount <p>Number of high-risk events</p>
                     * 
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 判断参数 RiskEventHighCount 是否已赋值
                     * @return RiskEventHighCount 是否已赋值
                     * 
                     */
                    bool RiskEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk events</p>
                     * @return RiskEventMiddleCount <p>Number of medium-risk events</p>
                     * 
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 判断参数 RiskEventMiddleCount 是否已赋值
                     * @return RiskEventMiddleCount 是否已赋值
                     * 
                     */
                    bool RiskEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk events</p>
                     * @return RiskEventLowCount <p>Number of low-risk events</p>
                     * 
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * 
                     */
                    bool RiskEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical alarm events</p>
                     * @return AlarmEventCriticalCount <p>Number of critical alarm events</p>
                     * 
                     */
                    uint64_t GetAlarmEventCriticalCount() const;

                    /**
                     * 判断参数 AlarmEventCriticalCount 是否已赋值
                     * @return AlarmEventCriticalCount 是否已赋值
                     * 
                     */
                    bool AlarmEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk alarm events</p>
                     * @return AlarmEventHighCount <p>Number of high-risk alarm events</p>
                     * 
                     */
                    uint64_t GetAlarmEventHighCount() const;

                    /**
                     * 判断参数 AlarmEventHighCount 是否已赋值
                     * @return AlarmEventHighCount 是否已赋值
                     * 
                     */
                    bool AlarmEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk alarm events</p>
                     * @return AlarmEventMiddleCount <p>Number of medium-risk alarm events</p>
                     * 
                     */
                    uint64_t GetAlarmEventMiddleCount() const;

                    /**
                     * 判断参数 AlarmEventMiddleCount 是否已赋值
                     * @return AlarmEventMiddleCount 是否已赋值
                     * 
                     */
                    bool AlarmEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk alarm events</p>
                     * @return AlarmEventLowCount <p>Number of low-risk alarm events</p>
                     * 
                     */
                    uint64_t GetAlarmEventLowCount() const;

                    /**
                     * 判断参数 AlarmEventLowCount 是否已赋值
                     * @return AlarmEventLowCount 是否已赋值
                     * 
                     */
                    bool AlarmEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>Region</p>
                     * @return Region <p>Region</p>
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
                     * 获取<p>Node private IP</p>
                     * @return NodeInternalIP <p>Node private IP</p>
                     * 
                     */
                    std::string GetNodeInternalIP() const;

                    /**
                     * 判断参数 NodeInternalIP 是否已赋值
                     * @return NodeInternalIP 是否已赋值
                     * 
                     */
                    bool NodeInternalIPHasBeenSet() const;

                    /**
                     * 获取<p>Node public IP</p>
                     * @return NodeExternalIP <p>Node public IP</p>
                     * 
                     */
                    std::string GetNodeExternalIP() const;

                    /**
                     * 判断参数 NodeExternalIP 是否已赋值
                     * @return NodeExternalIP 是否已赋值
                     * 
                     */
                    bool NodeExternalIPHasBeenSet() const;

                    /**
                     * 获取<p>Number of associated containers</p>
                     * @return ContainerCount <p>Number of associated containers</p>
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of associated services</p>
                     * @return ServiceCount <p>Number of associated services</p>
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>Region Chinese Name</p>
                     * @return RegionName <p>Region Chinese Name</p>
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
                     * 获取<p>Region English name</p>
                     * @return RegionNameEn <p>Region English name</p>
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
                     * 获取<p>Number of alarms.</p>
                     * @return AlarmCount <p>Number of alarms.</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                private:

                    /**
                     * <p>Pod unique ID</p>
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                    /**
                     * <p>Primary Account AppID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Pod name</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>Pod IP address</p>
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * <p>Pod running state</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>Pod Labels list</p>
                     */
                    std::vector<AssetTag> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Pod startup time</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Start time (seconds)</p>
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * <p>Pod restart count</p>
                     */
                    uint64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * <p>Cluster Name</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster ID</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>Cluster type</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>Cluster operation status</p>
                     */
                    std::string m_clusterRunStatus;
                    bool m_clusterRunStatusHasBeenSet;

                    /**
                     * <p>Namespace</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Node name where it resides.</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>Current node ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>Name of the associated Workload</p>
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * <p>Workload type</p>
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                    /**
                     * <p>Number of critical risk events</p>
                     */
                    uint64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>Number of high-risk events</p>
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
                     * <p>Region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Node private IP</p>
                     */
                    std::string m_nodeInternalIP;
                    bool m_nodeInternalIPHasBeenSet;

                    /**
                     * <p>Node public IP</p>
                     */
                    std::string m_nodeExternalIP;
                    bool m_nodeExternalIPHasBeenSet;

                    /**
                     * <p>Number of associated containers</p>
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * <p>Number of associated services</p>
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

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
                     * <p>Number of alarms.</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODDETAILRESPONSE_H_
