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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMEEVENTBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMEEVENTBASEINFO_H_

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
                * Runtime security - Basic event information
                */
                class RunTimeEventBaseInfo : public AbstractModel
                {
                public:
                    RunTimeEventBaseInfo();
                    ~RunTimeEventBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique event ID
                     * @return EventId Unique event ID
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Unique event ID
                     * @param EventId Unique event ID
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Event discovery time
                     * @return FoundTime Event discovery time
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置Event discovery time
                     * @param FoundTime Event discovery time
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取Container ID
                     * @return ContainerId Container ID
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置Container ID
                     * @param ContainerId Container ID
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param ContainerName Container name
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageId Image ID
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param ImageId Image ID
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param ImageName Image name
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Node name
                     * @return NodeName Node name
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name
                     * @param NodeName Node name
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Pod name
                     * @return PodName Pod name
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
                     * @param PodName Pod name
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     * @return Status Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     * @param Status Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Event name:
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
Malicious process startup
File tampering
                     * @return EventName Event name:
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
Malicious process startup
File tampering
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name:
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
Malicious process startup
File tampering
                     * @param EventName Event name:
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
Malicious process startup
File tampering
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Event type
   `ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `ESCAPE_SYSCALL`: Syscall escape.
                     * @return EventType Event type
   `ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `ESCAPE_SYSCALL`: Syscall escape.
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type
   `ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `ESCAPE_SYSCALL`: Syscall escape.
                     * @param EventType Event type
   `ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `ESCAPE_SYSCALL`: Syscall escape.
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Number of events
                     * @return EventCount Number of events
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置Number of events
                     * @param EventCount Number of events
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取Last generation time
                     * @return LatestFoundTime Last generation time
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置Last generation time
                     * @param LatestFoundTime Last generation time
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIP Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HostIP Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIP Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClientIP Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerNetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ContainerNetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     */
                    bool ContainerNetStatusHasBeenSet() const;

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
                     * @param ContainerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
"NODE_DESTROYED"      // The node is terminated.
"CONTAINER_EXITED"    // The container exited.
"CONTAINER_DESTROYED" // The container was terminated.
"SHARED_HOST"         // The container shares the network with the server.
"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
"UNKNOW"              // The reason is unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContainerNetSubStatus(const std::string& _containerNetSubStatus);

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerIsolateOperationSrc Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ContainerIsolateOperationSrc Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContainerIsolateOperationSrc(const std::string& _containerIsolateOperationSrc);

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                private:

                    /**
                     * Unique event ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Event discovery time
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * Container ID
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Node name
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event name:
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
Malicious process startup
File tampering
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event type
   `ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `ESCAPE_SYSCALL`: Syscall escape.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Number of events
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Last generation time
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMEEVENTBASEINFO_H_
