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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTASKINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTASKINFO_H_

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
                * List of containers in the virus scanning task at runtime
                */
                class VirusTaskInfo : public AbstractModel
                {
                public:
                    VirusTaskInfo();
                    ~VirusTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Node name
                     * @return HostName Node name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Node name
                     * @param _hostName Node name
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
                     * 获取Private IP of the node
                     * @return HostIp Private IP of the node
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Private IP of the node
                     * @param _hostIp Private IP of the node
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Scanning status:
`WAIT`: Pending scanning.
`FAILED`: Failed.
`SCANNING`: Scanning.
`FINISHED`: Ended.
`CANCELING`: Canceling.
`CANCELED`: Canceled.
`CANCEL_FAILED`: Failed to cancel.
                     * @return Status Scanning status:
`WAIT`: Pending scanning.
`FAILED`: Failed.
`SCANNING`: Scanning.
`FINISHED`: Ended.
`CANCELING`: Canceling.
`CANCELED`: Canceled.
`CANCEL_FAILED`: Failed to cancel.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Scanning status:
`WAIT`: Pending scanning.
`FAILED`: Failed.
`SCANNING`: Scanning.
`FINISHED`: Ended.
`CANCELING`: Canceling.
`CANCELED`: Canceled.
`CANCEL_FAILED`: Failed to cancel.
                     * @param _status Scanning status:
`WAIT`: Pending scanning.
`FAILED`: Failed.
`SCANNING`: Scanning.
`FINISHED`: Ended.
`CANCELING`: Canceling.
`CANCELED`: Canceled.
`CANCEL_FAILED`: Failed to cancel.
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
                     * 获取Check start time
                     * @return StartTime Check start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Check start time
                     * @param _startTime Check start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Check end time
                     * @return EndTime Check end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Check end time
                     * @param _endTime Check end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number of risks
                     * @return RiskCnt Number of risks
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置Number of risks
                     * @param _riskCnt Number of risks
                     * 
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

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
                     * 获取Cause:
`SEND_SUCCESSED`: Task submitted.
`SCAN_WAIT`: Waiting to scan...
`OFFLINE`: Offline.
`SEND_FAILED`: Failed to deploy.
`TIMEOUT`: Timed out.
`LOW_AGENT_VERSION`: The Agent version is too old.
`AGENT_NOT_FOUND`: The image's agent doesn't exist.
`TOO_MANY`: Too many tasks.
`VALIDATION`: Invalid parameter.
`INTERNAL`: Internal service error.
`MISC`: Other errors.
`UNAUTH`: The image is not assigned with a license.
`SEND_CANCEL_SUCCESSED`: Task submitted.
                     * @return ErrorMsg Cause:
`SEND_SUCCESSED`: Task submitted.
`SCAN_WAIT`: Waiting to scan...
`OFFLINE`: Offline.
`SEND_FAILED`: Failed to deploy.
`TIMEOUT`: Timed out.
`LOW_AGENT_VERSION`: The Agent version is too old.
`AGENT_NOT_FOUND`: The image's agent doesn't exist.
`TOO_MANY`: Too many tasks.
`VALIDATION`: Invalid parameter.
`INTERNAL`: Internal service error.
`MISC`: Other errors.
`UNAUTH`: The image is not assigned with a license.
`SEND_CANCEL_SUCCESSED`: Task submitted.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Cause:
`SEND_SUCCESSED`: Task submitted.
`SCAN_WAIT`: Waiting to scan...
`OFFLINE`: Offline.
`SEND_FAILED`: Failed to deploy.
`TIMEOUT`: Timed out.
`LOW_AGENT_VERSION`: The Agent version is too old.
`AGENT_NOT_FOUND`: The image's agent doesn't exist.
`TOO_MANY`: Too many tasks.
`VALIDATION`: Invalid parameter.
`INTERNAL`: Internal service error.
`MISC`: Other errors.
`UNAUTH`: The image is not assigned with a license.
`SEND_CANCEL_SUCCESSED`: Task submitted.
                     * @param _errorMsg Cause:
`SEND_SUCCESSED`: Task submitted.
`SCAN_WAIT`: Waiting to scan...
`OFFLINE`: Offline.
`SEND_FAILED`: Failed to deploy.
`TIMEOUT`: Timed out.
`LOW_AGENT_VERSION`: The Agent version is too old.
`AGENT_NOT_FOUND`: The image's agent doesn't exist.
`TOO_MANY`: Too many tasks.
`VALIDATION`: Invalid parameter.
`INTERNAL`: Internal service error.
`MISC`: Other errors.
`UNAUTH`: The image is not assigned with a license.
`SEND_CANCEL_SUCCESSED`: Task submitted.
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

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

                private:

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
                     * Node name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Private IP of the node
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Scanning status:
`WAIT`: Pending scanning.
`FAILED`: Failed.
`SCANNING`: Scanning.
`FINISHED`: Ended.
`CANCELING`: Canceling.
`CANCELED`: Canceled.
`CANCEL_FAILED`: Failed to cancel.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Check start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Check end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of risks
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * Event ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Cause:
`SEND_SUCCESSED`: Task submitted.
`SCAN_WAIT`: Waiting to scan...
`OFFLINE`: Offline.
`SEND_FAILED`: Failed to deploy.
`TIMEOUT`: Timed out.
`LOW_AGENT_VERSION`: The Agent version is too old.
`AGENT_NOT_FOUND`: The image's agent doesn't exist.
`TOO_MANY`: Too many tasks.
`VALIDATION`: Invalid parameter.
`INTERNAL`: Internal service error.
`MISC`: Other errors.
`UNAUTH`: The image is not assigned with a license.
`SEND_CANCEL_SUCCESSED`: Task submitted.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

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
                     * Node ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTASKINFO_H_
