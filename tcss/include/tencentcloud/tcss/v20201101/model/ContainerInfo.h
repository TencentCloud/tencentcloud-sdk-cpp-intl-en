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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_

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
                * List of containers
                */
                class ContainerInfo : public AbstractModel
                {
                public:
                    ContainerInfo();
                    ~ContainerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container ID
                     * @return ContainerID Container ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置Container ID
                     * @param _containerID Container ID
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param _containerName Container name
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Container status
                     * @return Status Container status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Container status
                     * @param _status Container status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Operator
                     * @return RunAs Operator
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Operator
                     * @param _runAs Operator
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Command line
                     * @return Cmd Command line
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置Command line
                     * @param _cmd Command line
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取CPU utilization * 1000
                     * @return CPUUsage CPU utilization * 1000
                     * 
                     */
                    uint64_t GetCPUUsage() const;

                    /**
                     * 设置CPU utilization * 1000
                     * @param _cPUUsage CPU utilization * 1000
                     * 
                     */
                    void SetCPUUsage(const uint64_t& _cPUUsage);

                    /**
                     * 判断参数 CPUUsage 是否已赋值
                     * @return CPUUsage 是否已赋值
                     * 
                     */
                    bool CPUUsageHasBeenSet() const;

                    /**
                     * 获取Memory usage in KB
                     * @return RamUsage Memory usage in KB
                     * 
                     */
                    uint64_t GetRamUsage() const;

                    /**
                     * 设置Memory usage in KB
                     * @param _ramUsage Memory usage in KB
                     * 
                     */
                    void SetRamUsage(const uint64_t& _ramUsage);

                    /**
                     * 判断参数 RamUsage 是否已赋值
                     * @return RamUsage 是否已赋值
                     * 
                     */
                    bool RamUsageHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param _imageID Image ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return POD Image ID
                     * 
                     */
                    std::string GetPOD() const;

                    /**
                     * 设置Image ID
                     * @param _pOD Image ID
                     * 
                     */
                    void SetPOD(const std::string& _pOD);

                    /**
                     * 判断参数 POD 是否已赋值
                     * @return POD 是否已赋值
                     * 
                     */
                    bool PODHasBeenSet() const;

                    /**
                     * 获取Server ID
                     * @return HostID Server ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server ID
                     * @param _hostID Server ID
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Server IP
                     * @return HostIP Server IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP
                     * @param _hostIP Server IP
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return HostName Server name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param _hostName Server name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIp Public IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param _publicIp Public IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @return NetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * 
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @param _netStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * 
                     */
                    void SetNetStatus(const std::string& _netStatus);

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     * 
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取Sub-status of the network
                     * @return NetSubStatus Sub-status of the network
                     * 
                     */
                    std::string GetNetSubStatus() const;

                    /**
                     * 设置Sub-status of the network
                     * @param _netSubStatus Sub-status of the network
                     * 
                     */
                    void SetNetSubStatus(const std::string& _netSubStatus);

                    /**
                     * 判断参数 NetSubStatus 是否已赋值
                     * @return NetSubStatus 是否已赋值
                     * 
                     */
                    bool NetSubStatusHasBeenSet() const;

                    /**
                     * 获取Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateSource Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolateSource() const;

                    /**
                     * 设置Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolateSource Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolateSource(const std::string& _isolateSource);

                    /**
                     * 判断参数 IsolateSource 是否已赋值
                     * @return IsolateSource 是否已赋值
                     * 
                     */
                    bool IsolateSourceHasBeenSet() const;

                    /**
                     * 获取Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolateTime Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Super node ID
                     * @return NodeID Super node ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置Super node ID
                     * @param _nodeID Super node ID
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取Pod IP
                     * @return PodIP Pod IP
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置Pod IP
                     * @param _podIP Pod IP
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取Pod name
                     * @return PodName Pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
                     * @param _podName Pod name
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
                     * 获取Node type. Valid values: `NORMAL` (general node), `SUPER` (super node)
                     * @return NodeType Node type. Valid values: `NORMAL` (general node), `SUPER` (super node)
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type. Valid values: `NORMAL` (general node), `SUPER` (super node)
                     * @param _nodeType Node type. Valid values: `NORMAL` (general node), `SUPER` (super node)
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
                     * 获取UID of the super node
                     * @return NodeUniqueID UID of the super node
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置UID of the super node
                     * @param _nodeUniqueID UID of the super node
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores used by the pod
                     * @return PodCpu Number of CPU cores used by the pod
                     * 
                     */
                    int64_t GetPodCpu() const;

                    /**
                     * 设置Number of CPU cores used by the pod
                     * @param _podCpu Number of CPU cores used by the pod
                     * 
                     */
                    void SetPodCpu(const int64_t& _podCpu);

                    /**
                     * 判断参数 PodCpu 是否已赋值
                     * @return PodCpu 是否已赋值
                     * 
                     */
                    bool PodCpuHasBeenSet() const;

                    /**
                     * 获取Memory specification of the Pod
                     * @return PodMem Memory specification of the Pod
                     * 
                     */
                    int64_t GetPodMem() const;

                    /**
                     * 设置Memory specification of the Pod
                     * @param _podMem Memory specification of the Pod
                     * 
                     */
                    void SetPodMem(const int64_t& _podMem);

                    /**
                     * 判断参数 PodMem 是否已赋值
                     * @return PodMem 是否已赋值
                     * 
                     */
                    bool PodMemHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClusterName 
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置
                     * @param _clusterName 
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
                     * 获取
                     * @return ClusterID 
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置
                     * @param _clusterID 
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取
                     * @return PodUid 
                     * 
                     */
                    std::string GetPodUid() const;

                    /**
                     * 设置
                     * @param _podUid 
                     * 
                     */
                    void SetPodUid(const std::string& _podUid);

                    /**
                     * 判断参数 PodUid 是否已赋值
                     * @return PodUid 是否已赋值
                     * 
                     */
                    bool PodUidHasBeenSet() const;

                private:

                    /**
                     * Container ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Container status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Command line
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * CPU utilization * 1000
                     */
                    uint64_t m_cPUUsage;
                    bool m_cPUUsageHasBeenSet;

                    /**
                     * Memory usage in KB
                     */
                    uint64_t m_ramUsage;
                    bool m_ramUsageHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_pOD;
                    bool m_pODHasBeenSet;

                    /**
                     * Server ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Server IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                    /**
                     * Sub-status of the network
                     */
                    std::string m_netSubStatus;
                    bool m_netSubStatusHasBeenSet;

                    /**
                     * Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateSource;
                    bool m_isolateSourceHasBeenSet;

                    /**
                     * Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Super node ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Pod IP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Node type. Valid values: `NORMAL` (general node), `SUPER` (super node)
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * UID of the super node
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * Number of CPU cores used by the pod
                     */
                    int64_t m_podCpu;
                    bool m_podCpuHasBeenSet;

                    /**
                     * Memory specification of the Pod
                     */
                    int64_t m_podMem;
                    bool m_podMemHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_podUid;
                    bool m_podUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_
