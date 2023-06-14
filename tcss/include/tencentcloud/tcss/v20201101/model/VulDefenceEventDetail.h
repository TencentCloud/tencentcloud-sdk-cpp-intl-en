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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENTDETAIL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RaspInfo.h>


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
                class VulDefenceEventDetail : public AbstractModel
                {
                public:
                    VulDefenceEventDetail();
                    ~VulDefenceEventDetail() = default;
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
                     * 获取Attacker port
                     * @return SourcePort Attacker port
                     * 
                     */
                    std::vector<std::string> GetSourcePort() const;

                    /**
                     * 设置Attacker port
                     * @param _sourcePort Attacker port
                     * 
                     */
                    void SetSourcePort(const std::vector<std::string>& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     * 
                     */
                    bool SourcePortHasBeenSet() const;

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
                     * 获取Server private IP
                     * @return HostIP Server private IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server private IP
                     * @param _hostIP Server private IP
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
                     * 获取Server public IP
                     * @return PublicIP Server public IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Server public IP
                     * @param _publicIP Server public IP
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
                     * 获取Harm description
                     * @return Description Harm description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Harm description
                     * @param _description Harm description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Fix suggestion
                     * @return OfficialSolution Fix suggestion
                     * 
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置Fix suggestion
                     * @param _officialSolution Fix suggestion
                     * 
                     */
                    void SetOfficialSolution(const std::string& _officialSolution);

                    /**
                     * 判断参数 OfficialSolution 是否已赋值
                     * @return OfficialSolution 是否已赋值
                     * 
                     */
                    bool OfficialSolutionHasBeenSet() const;

                    /**
                     * 获取Attack packet
                     * @return NetworkPayload Attack packet
                     * 
                     */
                    std::string GetNetworkPayload() const;

                    /**
                     * 设置Attack packet
                     * @param _networkPayload Attack packet
                     * 
                     */
                    void SetNetworkPayload(const std::string& _networkPayload);

                    /**
                     * 判断参数 NetworkPayload 是否已赋值
                     * @return NetworkPayload 是否已赋值
                     * 
                     */
                    bool NetworkPayloadHasBeenSet() const;

                    /**
                     * 获取Process PID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PID Process PID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPID() const;

                    /**
                     * 设置Process PID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pID Process PID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPID(const int64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取Main class name of the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MainClass Main class name of the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Main class name of the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mainClass Main class name of the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StackTrace Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStackTrace() const;

                    /**
                     * 设置Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stackTrace Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStackTrace(const std::string& _stackTrace);

                    /**
                     * 判断参数 StackTrace 是否已赋值
                     * @return StackTrace 是否已赋值
                     * 
                     */
                    bool StackTraceHasBeenSet() const;

                    /**
                     * 获取Listened account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerAccount Listened account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerAccount() const;

                    /**
                     * 设置Listened account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverAccount Listened account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerAccount(const std::string& _serverAccount);

                    /**
                     * 判断参数 ServerAccount 是否已赋值
                     * @return ServerAccount 是否已赋值
                     * 
                     */
                    bool ServerAccountHasBeenSet() const;

                    /**
                     * 获取Listened port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerPort Listened port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerPort() const;

                    /**
                     * 设置Listened port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverPort Listened port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerPort(const std::string& _serverPort);

                    /**
                     * 判断参数 ServerPort 是否已赋值
                     * @return ServerPort 是否已赋值
                     * 
                     */
                    bool ServerPortHasBeenSet() const;

                    /**
                     * 获取Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerExe Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerExe() const;

                    /**
                     * 设置Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverExe Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerExe(const std::string& _serverExe);

                    /**
                     * 判断参数 ServerExe 是否已赋值
                     * @return ServerExe 是否已赋值
                     * 
                     */
                    bool ServerExeHasBeenSet() const;

                    /**
                     * 获取Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerArg Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerArg() const;

                    /**
                     * 设置Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverArg Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerArg(const std::string& _serverArg);

                    /**
                     * 判断参数 ServerArg 是否已赋值
                     * @return ServerArg 是否已赋值
                     * 
                     */
                    bool ServerArgHasBeenSet() const;

                    /**
                     * 获取Server QUuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QUUID Server QUuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置Server QUuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qUUID Server QUuid
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerNetStatus Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerNetStatus Isolation status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取API URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JNDIUrl API URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJNDIUrl() const;

                    /**
                     * 设置API URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jNDIUrl API URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJNDIUrl(const std::string& _jNDIUrl);

                    /**
                     * 判断参数 JNDIUrl 是否已赋值
                     * @return JNDIUrl 是否已赋值
                     * 
                     */
                    bool JNDIUrlHasBeenSet() const;

                    /**
                     * 获取RASP details
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RaspDetail RASP details
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<RaspInfo> GetRaspDetail() const;

                    /**
                     * 设置RASP details
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _raspDetail RASP details
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetRaspDetail(const std::vector<RaspInfo>& _raspDetail);

                    /**
                     * 判断参数 RaspDetail 是否已赋值
                     * @return RaspDetail 是否已赋值
                     * 
                     */
                    bool RaspDetailHasBeenSet() const;

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
                     * Attacker port
                     */
                    std::vector<std::string> m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * Event ID
                     */
                    int64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server private IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Server public IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Harm description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Fix suggestion
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * Attack packet
                     */
                    std::string m_networkPayload;
                    bool m_networkPayloadHasBeenSet;

                    /**
                     * Process PID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * Main class name of the process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stackTrace;
                    bool m_stackTraceHasBeenSet;

                    /**
                     * Listened account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverAccount;
                    bool m_serverAccountHasBeenSet;

                    /**
                     * Listened port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverPort;
                    bool m_serverPortHasBeenSet;

                    /**
                     * Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverExe;
                    bool m_serverExeHasBeenSet;

                    /**
                     * Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverArg;
                    bool m_serverArgHasBeenSet;

                    /**
                     * Server QUuid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * Isolation status
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
                     * API URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jNDIUrl;
                    bool m_jNDIUrlHasBeenSet;

                    /**
                     * RASP details
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<RaspInfo> m_raspDetail;
                    bool m_raspDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENTDETAIL_H_
