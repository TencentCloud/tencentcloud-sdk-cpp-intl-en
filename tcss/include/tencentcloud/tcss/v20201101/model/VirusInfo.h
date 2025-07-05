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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSINFO_H_

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
                * List of trojans at runtime
                */
                class VirusInfo : public AbstractModel
                {
                public:
                    VirusInfo();
                    ~VirusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename
                     * @return FileName Filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
                     * @param _fileName Filename
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File path
                     * @return FilePath File path
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path
                     * @param _filePath File path
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Virus name
                     * @return VirusName Virus name
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置Virus name
                     * @param _virusName Virus name
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

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
                     * 获取Update time
                     * @return ModifyTime Update time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time
                     * @param _modifyTime Update time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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
                     * 获取Container ID
                     * @return ContainerId Container ID
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置Container ID
                     * @param _containerId Container ID
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     * @return ContainerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
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
                     * @param _containerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
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
                     * @return ImageId Image ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param _imageId Image ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取`DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
                     * @return Status `DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置`DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
                     * @param _status `DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
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
                     * @return Id Event ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Event ID
                     * @param _id Event ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Event description
                     * @return HarmDescribe Event description
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 设置Event description
                     * @param _harmDescribe Event description
                     * 
                     */
                    void SetHarmDescribe(const std::string& _harmDescribe);

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     * 
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return SuggestScheme Solution
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置Solution
                     * @param _suggestScheme Solution
                     * 
                     */
                    void SetSuggestScheme(const std::string& _suggestScheme);

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
`TIMEOUT`: Timed out.
`TOO_MANY`: Too many tasks.
`OFFLINE`: Offline.
`INTERNAL`: Internal service error.
`VALIDATION`: Invalid parameter.
                     * @return SubStatus Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
`TIMEOUT`: Timed out.
`TOO_MANY`: Too many tasks.
`OFFLINE`: Offline.
`INTERNAL`: Internal service error.
`VALIDATION`: Invalid parameter.
                     * 
                     */
                    std::string GetSubStatus() const;

                    /**
                     * 设置Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
`TIMEOUT`: Timed out.
`TOO_MANY`: Too many tasks.
`OFFLINE`: Offline.
`INTERNAL`: Internal service error.
`VALIDATION`: Invalid parameter.
                     * @param _subStatus Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
`TIMEOUT`: Timed out.
`TOO_MANY`: Too many tasks.
`OFFLINE`: Offline.
`INTERNAL`: Internal service error.
`VALIDATION`: Invalid parameter.
                     * 
                     */
                    void SetSubStatus(const std::string& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @return ContainerNetStatus Network status
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
                     * 设置Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @param _containerNetStatus Network status
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
                     * 获取Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
                     * @return ContainerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
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
                     * @param _containerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
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
                     * @return ContainerIsolateOperationSrc Container isolation operation source
                     * 
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置Container isolation operation source
                     * @param _containerIsolateOperationSrc Container isolation operation source
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
                     * 获取MD5 checksum
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MD5 MD5 checksum
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置MD5 checksum
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mD5 MD5 checksum
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskLevel Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckPlatform Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 设置Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkPlatform Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckPlatform(const std::vector<std::string>& _checkPlatform);

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     * 
                     */
                    bool CheckPlatformHasBeenSet() const;

                    /**
                     * 获取Node ID.
                     * @return NodeID Node ID.
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeID Node ID.
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
                     * 获取Node name
                     * @return NodeName Node name
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name
                     * @param _nodeName Node name
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

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
                     * 获取Pod (instance) name
                     * @return PodName Pod (instance) name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod (instance) name
                     * @param _podName Pod (instance) name
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
                     * 获取ID of the cluster where the node resides
                     * @return ClusterID ID of the cluster where the node resides
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置ID of the cluster where the node resides
                     * @param _clusterID ID of the cluster where the node resides
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
                     * 获取Public IP of the node
                     * @return PublicIP Public IP of the node
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP of the node
                     * @param _publicIP Public IP of the node
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
                     * 获取Node private IP
                     * @return InnerIP Node private IP
                     * 
                     */
                    std::string GetInnerIP() const;

                    /**
                     * 设置Node private IP
                     * @param _innerIP Node private IP
                     * 
                     */
                    void SetInnerIP(const std::string& _innerIP);

                    /**
                     * 判断参数 InnerIP 是否已赋值
                     * @return InnerIP 是否已赋值
                     * 
                     */
                    bool InnerIPHasBeenSet() const;

                    /**
                     * 获取UID of the node
                     * @return NodeUniqueID UID of the node
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置UID of the node
                     * @param _nodeUniqueID UID of the node
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
                     * 获取ID for the general node
                     * @return HostID ID for the general node
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置ID for the general node
                     * @param _hostID ID for the general node
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
                     * Filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Virus name
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Container ID
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * `DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Event description
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
`TIMEOUT`: Timed out.
`TOO_MANY`: Too many tasks.
`OFFLINE`: Offline.
`INTERNAL`: Internal service error.
`VALIDATION`: Invalid parameter.
                     */
                    std::string m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * Network status
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
                     * Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * Container isolation operation source
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * MD5 checksum
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Node name
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Pod IP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * Pod (instance) name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * ID of the cluster where the node resides
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Public IP of the node
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Node private IP
                     */
                    std::string m_innerIP;
                    bool m_innerIPHasBeenSet;

                    /**
                     * UID of the node
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * ID for the general node
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSINFO_H_
