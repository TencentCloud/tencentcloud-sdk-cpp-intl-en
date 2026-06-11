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
                     * 获取File name
                     * @return FileName File name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name
                     * @param _fileName File name
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取container id
                     * @return ContainerId container id
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置container id
                     * @param _containerId container id
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
                     * 获取Container status.
RUNNING: running
Suspend: PAUSED
Stop: STOPPED
CREATED
DESTROYED
RESTARTING
Migrating: REMOVING
                     * @return ContainerStatus Container status.
RUNNING: running
Suspend: PAUSED
Stop: STOPPED
CREATED
DESTROYED
RESTARTING
Migrating: REMOVING
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置Container status.
RUNNING: running
Suspend: PAUSED
Stop: STOPPED
CREATED
DESTROYED
RESTARTING
Migrating: REMOVING
                     * @param _containerStatus Container status.
RUNNING: running
Suspend: PAUSED
Stop: STOPPED
CREATED
DESTROYED
RESTARTING
Migrating: REMOVING
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
                     * 获取Image Name
                     * @return ImageName Image Name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image Name
                     * @param _imageName Image Name
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
                     * 获取Image id
                     * @return ImageId Image id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image id
                     * @param _imageId Image id
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
                     * 获取DEAL_NONE: File pending
DEAL_IGNORE: Already ignored
DEAL_ADD_WHITELIST: Add to whitelist
DEAL_DEL: File deleted
DEAL_ISOLATE: Has been isolated
DEAL_ISOLATING: Isolated
DEAL_ISOLATE_FAILED: Isolation failed
DEAL_RECOVERING: Recovering
DEAL_RECOVER_FAILED: Recovery failed
                     * @return Status DEAL_NONE: File pending
DEAL_IGNORE: Already ignored
DEAL_ADD_WHITELIST: Add to whitelist
DEAL_DEL: File deleted
DEAL_ISOLATE: Has been isolated
DEAL_ISOLATING: Isolated
DEAL_ISOLATE_FAILED: Isolation failed
DEAL_RECOVERING: Recovering
DEAL_RECOVER_FAILED: Recovery failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置DEAL_NONE: File pending
DEAL_IGNORE: Already ignored
DEAL_ADD_WHITELIST: Add to whitelist
DEAL_DEL: File deleted
DEAL_ISOLATE: Has been isolated
DEAL_ISOLATING: Isolated
DEAL_ISOLATE_FAILED: Isolation failed
DEAL_RECOVERING: Recovering
DEAL_RECOVER_FAILED: Recovery failed
                     * @param _status DEAL_NONE: File pending
DEAL_IGNORE: Already ignored
DEAL_ADD_WHITELIST: Add to whitelist
DEAL_DEL: File deleted
DEAL_ISOLATE: Has been isolated
DEAL_ISOLATING: Isolated
DEAL_ISOLATE_FAILED: Isolation failed
DEAL_RECOVERING: Recovering
DEAL_RECOVER_FAILED: Recovery failed
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
                     * 获取Recommended solution
                     * @return SuggestScheme Recommended solution
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置Recommended solution
                     * @param _suggestScheme Recommended solution
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
                     * 获取Failed sub-status
FILE_NOT_FOUND: File does not exist
FILE_ABNORMAL: abnormal file
FILE_ABNORMAL_DEAL_RECOVER: Abnormal file when recovering file.
BACKUP_FILE_NOT_FOUND: Backup file not found
CONTAINER_NOT_FOUND_DEAL_ISOLATE: Container not found in isolation
CONTAINER_NOT_FOUND_DEAL_RECOVER: Container not found when recovering
TIMEOUT: Timeout
TOO_MANY: Too many tasks
OFFLINE: Offline
INTERNAL Server Error
VALIDATION: Invalid parameter
                     * @return SubStatus Failed sub-status
FILE_NOT_FOUND: File does not exist
FILE_ABNORMAL: abnormal file
FILE_ABNORMAL_DEAL_RECOVER: Abnormal file when recovering file.
BACKUP_FILE_NOT_FOUND: Backup file not found
CONTAINER_NOT_FOUND_DEAL_ISOLATE: Container not found in isolation
CONTAINER_NOT_FOUND_DEAL_RECOVER: Container not found when recovering
TIMEOUT: Timeout
TOO_MANY: Too many tasks
OFFLINE: Offline
INTERNAL Server Error
VALIDATION: Invalid parameter
                     * 
                     */
                    std::string GetSubStatus() const;

                    /**
                     * 设置Failed sub-status
FILE_NOT_FOUND: File does not exist
FILE_ABNORMAL: abnormal file
FILE_ABNORMAL_DEAL_RECOVER: Abnormal file when recovering file.
BACKUP_FILE_NOT_FOUND: Backup file not found
CONTAINER_NOT_FOUND_DEAL_ISOLATE: Container not found in isolation
CONTAINER_NOT_FOUND_DEAL_RECOVER: Container not found when recovering
TIMEOUT: Timeout
TOO_MANY: Too many tasks
OFFLINE: Offline
INTERNAL Server Error
VALIDATION: Invalid parameter
                     * @param _subStatus Failed sub-status
FILE_NOT_FOUND: File does not exist
FILE_ABNORMAL: abnormal file
FILE_ABNORMAL_DEAL_RECOVER: Abnormal file when recovering file.
BACKUP_FILE_NOT_FOUND: Backup file not found
CONTAINER_NOT_FOUND_DEAL_ISOLATE: Container not found in isolation
CONTAINER_NOT_FOUND_DEAL_RECOVER: Container not found when recovering
TIMEOUT: Timeout
TOO_MANY: Too many tasks
OFFLINE: Offline
INTERNAL Server Error
VALIDATION: Invalid parameter
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
                     * 获取Network status.
Unisolated  NORMAL
ISOLATED
isolated
Isolation FAILED
RESTORING isolation
Isolation restoration failed RESTORE_FAILED
                     * @return ContainerNetStatus Network status.
Unisolated  NORMAL
ISOLATED
isolated
Isolation FAILED
RESTORING isolation
Isolation restoration failed RESTORE_FAILED
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Network status.
Unisolated  NORMAL
ISOLATED
isolated
Isolation FAILED
RESTORING isolation
Isolation restoration failed RESTORE_FAILED
                     * @param _containerNetStatus Network status.
Unisolated  NORMAL
ISOLATED
isolated
Isolation FAILED
RESTORING isolation
Isolation restoration failed RESTORE_FAILED
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
                     * 获取container sub-status
AGENT_OFFLINE
	NODE_DESTROYED
	CONTAINER_EXITED
	"CONTAINER_DESTROYED" //Container destroyed
	SHARED_HOST
	RESOURCE_LIMIT
	"UNKNOW": Unknown
                     * @return ContainerNetSubStatus container sub-status
AGENT_OFFLINE
	NODE_DESTROYED
	CONTAINER_EXITED
	"CONTAINER_DESTROYED" //Container destroyed
	SHARED_HOST
	RESOURCE_LIMIT
	"UNKNOW": Unknown
                     * 
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置container sub-status
AGENT_OFFLINE
	NODE_DESTROYED
	CONTAINER_EXITED
	"CONTAINER_DESTROYED" //Container destroyed
	SHARED_HOST
	RESOURCE_LIMIT
	"UNKNOW": Unknown
                     * @param _containerNetSubStatus container sub-status
AGENT_OFFLINE
	NODE_DESTROYED
	CONTAINER_EXITED
	"CONTAINER_DESTROYED" //Container destroyed
	SHARED_HOST
	RESOURCE_LIMIT
	"UNKNOW": Unknown
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
                     * 获取Container Isolation Operation Source
                     * @return ContainerIsolateOperationSrc Container Isolation Operation Source
                     * 
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置Container Isolation Operation Source
                     * @param _containerIsolateOperationSrc Container Isolation Operation Source
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
                     * 获取MD5 Value
                     * @return MD5 MD5 Value
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置MD5 Value
                     * @param _mD5 MD5 Value
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
                     * 获取Risk Level: RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, and RISK_NOTICE
                     * @return RiskLevel Risk Level: RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, and RISK_NOTICE
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk Level: RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, and RISK_NOTICE
                     * @param _riskLevel Risk Level: RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, and RISK_NOTICE
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
                     * 获取Detection platform
1: Cloud Killing Engine
2: tav
3: binaryAi
4: Abnormal behavior
5: Threat Intelligence
                     * @return CheckPlatform Detection platform
1: Cloud Killing Engine
2: tav
3: binaryAi
4: Abnormal behavior
5: Threat Intelligence
                     * 
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 设置Detection platform
1: Cloud Killing Engine
2: tav
3: binaryAi
4: Abnormal behavior
5: Threat Intelligence
                     * @param _checkPlatform Detection platform
1: Cloud Killing Engine
2: tav
3: binaryAi
4: Abnormal behavior
5: Threat Intelligence
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
                     * 获取Node ID
                     * @return NodeID Node ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置Node ID
                     * @param _nodeID Node ID
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
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
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
                     * 获取pod ip
                     * @return PodIP pod ip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置pod ip
                     * @param _podIP pod ip
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
                     * 获取Name of the pod (instance)
                     * @return PodName Name of the pod (instance)
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Name of the pod (instance)
                     * @param _podName Name of the pod (instance)
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
                     * 获取Node Cluster ID
                     * @return ClusterID Node Cluster ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Node Cluster ID
                     * @param _clusterID Node Cluster ID
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
                     * 获取Node Type. NORMAL: Common Node; SUPER: Super Node
                     * @return NodeType Node Type. NORMAL: Common Node; SUPER: Super Node
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node Type. NORMAL: Common Node; SUPER: Super Node
                     * @param _nodeType Node Type. NORMAL: Common Node; SUPER: Super Node
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
                     * 获取Node private network IP
                     * @return InnerIP Node private network IP
                     * 
                     */
                    std::string GetInnerIP() const;

                    /**
                     * 设置Node private network IP
                     * @param _innerIP Node private network IP
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
                     * 获取Node Unique ID
                     * @return NodeUniqueID Node Unique ID
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置Node Unique ID
                     * @param _nodeUniqueID Node Unique ID
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
                     * 获取Common Node ID
                     * @return HostID Common Node ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Common Node ID
                     * @param _hostID Common Node ID
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
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
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
                     * 获取Private IP address of the node, which is the same as the value of InnerIP.
                     * @return HostIP Private IP address of the node, which is the same as the value of InnerIP.
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Private IP address of the node, which is the same as the value of InnerIP.
                     * @param _hostIP Private IP address of the node, which is the same as the value of InnerIP.
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                private:

                    /**
                     * File name
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
                     * Creation time.
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
                     * container id
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Container status.
RUNNING: running
Suspend: PAUSED
Stop: STOPPED
CREATED
DESTROYED
RESTARTING
Migrating: REMOVING
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * Image Name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * DEAL_NONE: File pending
DEAL_IGNORE: Already ignored
DEAL_ADD_WHITELIST: Add to whitelist
DEAL_DEL: File deleted
DEAL_ISOLATE: Has been isolated
DEAL_ISOLATING: Isolated
DEAL_ISOLATE_FAILED: Isolation failed
DEAL_RECOVERING: Recovering
DEAL_RECOVER_FAILED: Recovery failed
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
                     * Recommended solution
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * Failed sub-status
FILE_NOT_FOUND: File does not exist
FILE_ABNORMAL: abnormal file
FILE_ABNORMAL_DEAL_RECOVER: Abnormal file when recovering file.
BACKUP_FILE_NOT_FOUND: Backup file not found
CONTAINER_NOT_FOUND_DEAL_ISOLATE: Container not found in isolation
CONTAINER_NOT_FOUND_DEAL_RECOVER: Container not found when recovering
TIMEOUT: Timeout
TOO_MANY: Too many tasks
OFFLINE: Offline
INTERNAL Server Error
VALIDATION: Invalid parameter
                     */
                    std::string m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * Network status.
Unisolated  NORMAL
ISOLATED
isolated
Isolation FAILED
RESTORING isolation
Isolation restoration failed RESTORE_FAILED
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * container sub-status
AGENT_OFFLINE
	NODE_DESTROYED
	CONTAINER_EXITED
	"CONTAINER_DESTROYED" //Container destroyed
	SHARED_HOST
	RESOURCE_LIMIT
	"UNKNOW": Unknown
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * Container Isolation Operation Source
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * MD5 Value
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * Risk Level: RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, and RISK_NOTICE
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Detection platform
1: Cloud Killing Engine
2: tav
3: binaryAi
4: Abnormal behavior
5: Threat Intelligence
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * pod ip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * Name of the pod (instance)
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Node Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Node Type. NORMAL: Common Node; SUPER: Super Node
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Public IP of the node
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Node private network IP
                     */
                    std::string m_innerIP;
                    bool m_innerIPHasBeenSet;

                    /**
                     * Node Unique ID
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * Common Node ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Private IP address of the node, which is the same as the value of InnerIP.
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSINFO_H_
