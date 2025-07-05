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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENT_H_

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
                * Exploit prevention event details
                */
                class VulDefenceEvent : public AbstractModel
                {
                public:
                    VulDefenceEvent();
                    ~VulDefenceEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability CVE ID
                     * @return CVEID Vulnerability CVE ID
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置Vulnerability CVE ID
                     * @param _cVEID Vulnerability CVE ID
                     * 
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取POC ID
                     * @return PocID POC ID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置POC ID
                     * @param _pocID POC ID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取Intrusion status
                     * @return EventType Intrusion status
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Intrusion status
                     * @param _eventType Intrusion status
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Attacker IP
                     * @return SourceIP Attacker IP
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置Attacker IP
                     * @param _sourceIP Attacker IP
                     * 
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     * 
                     */
                    bool SourceIPHasBeenSet() const;

                    /**
                     * 获取Region of the attacker IP
                     * @return City Region of the attacker IP
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置Region of the attacker IP
                     * @param _city Region of the attacker IP
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Number of events
                     * @return EventCount Number of events
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置Number of events
                     * @param _eventCount Number of events
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

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
                     * 获取Processing status
                     * @return Status Processing status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Processing status
                     * @param _status Processing status
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
                     * 获取Event ID
                     * @return EventID Event ID
                     * 
                     */
                    int64_t GetEventID() const;

                    /**
                     * 设置Event ID
                     * @param _eventID Event ID
                     * 
                     */
                    void SetEventID(const int64_t& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @return ContainerNetStatus Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @param _containerNetStatus Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * 
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MergeTime Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mergeTime Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerStatus(const std::string& _containerStatus);

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     * 
                     */
                    bool ContainerStatusHasBeenSet() const;

                    /**
                     * 获取Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerNetSubStatus(const std::string& _containerNetSubStatus);

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerIsolateOperationSrc Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerIsolateOperationSrc Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerIsolateOperationSrc(const std::string& _containerIsolateOperationSrc);

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     * 
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                    /**
                     * 获取Node QUuid/Super node ID
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return QUUID Node QUuid/Super node ID
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置Node QUuid/Super node ID
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _qUUID Node QUuid/Super node ID
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取Server private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIP Server private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostIP Server private IP
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取General node/Super node name
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return HostName General node/Super node name
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置General node/Super node name
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _hostName General node/Super node name
Note: This field may return·`null`, indicating that no valid values can be obtained.
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
                     * 获取Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * @return NodeType Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * @param _nodeType Node type. Values: `NORMAL` (general node), `SUPER` (super node).
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
                     * 获取Public IP
                     * @return PublicIP Public IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP
                     * @param _publicIP Public IP
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取UID of a super node
                     * @return NodeUniqueID UID of a super node
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置UID of a super node
                     * @param _nodeUniqueID UID of a super node
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
                     * 获取ID of a super node
                     * @return NodeID ID of a super node
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置ID of a super node
                     * @param _nodeID ID of a super node
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
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterID Cluster ID
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

                private:

                    /**
                     * Vulnerability CVE ID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * POC ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * Intrusion status
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Attacker IP
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * Region of the attacker IP
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Number of events
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

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
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Processing status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event ID
                     */
                    int64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * Node QUuid/Super node ID
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * Server private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * General node/Super node name
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * UID of a super node
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * ID of a super node
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENT_H_
