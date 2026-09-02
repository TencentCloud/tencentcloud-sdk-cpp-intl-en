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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERCONTAINERDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERCONTAINERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ContainerMountItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterContainerDetail response structure.
                */
                class DescribeClusterContainerDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterContainerDetailResponse();
                    ~DescribeClusterContainerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Primary Account AppID</p>
                     * @return AppID <p>Primary Account AppID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Container ID</p>
                     * @return ContainerId <p>Container ID</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>Container startup CMD</p>
                     * @return Cmd <p>Container startup CMD</p>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取<p>Container creation time</p>
                     * @return CreateTime <p>Container creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Running state</p>
                     * @return RunStatus <p>Running state</p>
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
                     * 获取<p>Isolation status</p>
                     * @return IsolateStatus <p>Isolation status</p>
                     * 
                     */
                    std::string GetIsolateStatus() const;

                    /**
                     * 判断参数 IsolateStatus 是否已赋值
                     * @return IsolateStatus 是否已赋值
                     * 
                     */
                    bool IsolateStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical risk events</p>
                     * @return RiskEventCriticalCount <p>Number of critical risk events</p>
                     * @deprecated
                     */
                    int64_t GetRiskEventCriticalCount() const;

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk events</p>
                     * @return RiskEventHighCount <p>Number of high-risk events</p>
                     * @deprecated
                     */
                    int64_t GetRiskEventHighCount() const;

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
                    int64_t GetRiskEventMiddleCount() const;

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
                    int64_t GetRiskEventLowCount() const;

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>Image name.</p>
                     * @return ImageName <p>Image name.</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Image size.</p>
                     * @return ImageSize <p>Image size.</p>
                     * 
                     */
                    std::string GetImageSize() const;

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Image creation time</p>
                     * @return ImageCreateTime <p>Image creation time</p>
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Node name.</p>
                     * @return NodeName <p>Node name.</p>
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
                     * 获取<p>Node private network IP</p>
                     * @return NodeInternalIP <p>Node private network IP</p>
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
                     * 获取<p>Node running status</p>
                     * @return NodeRunStatus <p>Node running status</p>
                     * 
                     */
                    std::string GetNodeRunStatus() const;

                    /**
                     * 判断参数 NodeRunStatus 是否已赋值
                     * @return NodeRunStatus 是否已赋值
                     * 
                     */
                    bool NodeRunStatusHasBeenSet() const;

                    /**
                     * 获取<p>Mount information list</p>
                     * @return Mounts <p>Mount information list</p>
                     * 
                     */
                    std::vector<ContainerMountItem> GetMounts() const;

                    /**
                     * 判断参数 Mounts 是否已赋值
                     * @return Mounts 是否已赋值
                     * 
                     */
                    bool MountsHasBeenSet() const;

                    /**
                     * 获取<p>Network name</p>
                     * @return NetworkName <p>Network name</p>
                     * 
                     */
                    std::string GetNetworkName() const;

                    /**
                     * 判断参数 NetworkName 是否已赋值
                     * @return NetworkName 是否已赋值
                     * 
                     */
                    bool NetworkNameHasBeenSet() const;

                    /**
                     * 获取<p>Network mode</p>
                     * @return NetworkMode <p>Network mode</p>
                     * 
                     */
                    std::string GetNetworkMode() const;

                    /**
                     * 判断参数 NetworkMode 是否已赋值
                     * @return NetworkMode 是否已赋值
                     * 
                     */
                    bool NetworkModeHasBeenSet() const;

                    /**
                     * 获取<p>Network ID</p>
                     * @return NetworkId <p>Network ID</p>
                     * 
                     */
                    std::string GetNetworkId() const;

                    /**
                     * 判断参数 NetworkId 是否已赋值
                     * @return NetworkId 是否已赋值
                     * 
                     */
                    bool NetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>Endpoint ID</p>
                     * @return EndpointId <p>Endpoint ID</p>
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取<p>Gateway address</p>
                     * @return Gateway <p>Gateway address</p>
                     * 
                     */
                    std::string GetGateway() const;

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                    /**
                     * 获取<p>IPv4 address</p>
                     * @return IPv4 <p>IPv4 address</p>
                     * 
                     */
                    std::string GetIPv4() const;

                    /**
                     * 判断参数 IPv4 是否已赋值
                     * @return IPv4 是否已赋值
                     * 
                     */
                    bool IPv4HasBeenSet() const;

                    /**
                     * 获取<p>IPv6 address</p>
                     * @return IPv6 <p>IPv6 address</p>
                     * 
                     */
                    std::string GetIPv6() const;

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                    /**
                     * 获取<p>MAC address</p>
                     * @return MAC <p>MAC address</p>
                     * 
                     */
                    std::string GetMAC() const;

                    /**
                     * 判断参数 MAC 是否已赋值
                     * @return MAC 是否已赋值
                     * 
                     */
                    bool MACHasBeenSet() const;

                    /**
                     * 获取<p>Container name</p>
                     * @return ContainerName <p>Container name</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>Node instance ID</p>
                     * @return NodeInstanceId <p>Node instance ID</p>
                     * 
                     */
                    std::string GetNodeInstanceId() const;

                    /**
                     * 判断参数 NodeInstanceId 是否已赋值
                     * @return NodeInstanceId 是否已赋值
                     * 
                     */
                    bool NodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Node type of the container associated node</p>
                     * @return NodeType <p>Node type of the container associated node</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Unique ID of the node associated with the container</p>
                     * @return NodeUniqueID <p>Unique ID of the node associated with the container</p>
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>md5 value of the cluster ca certificate of the associated cluster and unique identifier of the cluster</p>
                     * @return ClusterCaMD5 <p>md5 value of the cluster ca certificate of the associated cluster and unique identifier of the cluster</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>Whether the container image can be associated with records in the mirror repository</p>
                     * @return EnableLinkImage <p>Whether the container image can be associated with records in the mirror repository</p>
                     * 
                     */
                    bool GetEnableLinkImage() const;

                    /**
                     * 判断参数 EnableLinkImage 是否已赋值
                     * @return EnableLinkImage 是否已赋值
                     * 
                     */
                    bool EnableLinkImageHasBeenSet() const;

                private:

                    /**
                     * <p>Primary Account AppID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Container ID</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>Container startup CMD</p>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>Container creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Running state</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>Isolation status</p>
                     */
                    std::string m_isolateStatus;
                    bool m_isolateStatusHasBeenSet;

                    /**
                     * <p>Number of critical risk events</p>
                     */
                    int64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>Number of high-risk events</p>
                     */
                    int64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk events</p>
                     */
                    int64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>Number of low-risk events</p>
                     */
                    int64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>Image name.</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Image size.</p>
                     */
                    std::string m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * <p>Image creation time</p>
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * <p>Node name.</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>Node private network IP</p>
                     */
                    std::string m_nodeInternalIP;
                    bool m_nodeInternalIPHasBeenSet;

                    /**
                     * <p>Node running status</p>
                     */
                    std::string m_nodeRunStatus;
                    bool m_nodeRunStatusHasBeenSet;

                    /**
                     * <p>Mount information list</p>
                     */
                    std::vector<ContainerMountItem> m_mounts;
                    bool m_mountsHasBeenSet;

                    /**
                     * <p>Network name</p>
                     */
                    std::string m_networkName;
                    bool m_networkNameHasBeenSet;

                    /**
                     * <p>Network mode</p>
                     */
                    std::string m_networkMode;
                    bool m_networkModeHasBeenSet;

                    /**
                     * <p>Network ID</p>
                     */
                    std::string m_networkId;
                    bool m_networkIdHasBeenSet;

                    /**
                     * <p>Endpoint ID</p>
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * <p>Gateway address</p>
                     */
                    std::string m_gateway;
                    bool m_gatewayHasBeenSet;

                    /**
                     * <p>IPv4 address</p>
                     */
                    std::string m_iPv4;
                    bool m_iPv4HasBeenSet;

                    /**
                     * <p>IPv6 address</p>
                     */
                    std::string m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * <p>MAC address</p>
                     */
                    std::string m_mAC;
                    bool m_mACHasBeenSet;

                    /**
                     * <p>Container name</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Node instance ID</p>
                     */
                    std::string m_nodeInstanceId;
                    bool m_nodeInstanceIdHasBeenSet;

                    /**
                     * <p>Node type of the container associated node</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Unique ID of the node associated with the container</p>
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * <p>md5 value of the cluster ca certificate of the associated cluster and unique identifier of the cluster</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>Whether the container image can be associated with records in the mirror repository</p>
                     */
                    bool m_enableLinkImage;
                    bool m_enableLinkImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERCONTAINERDETAILRESPONSE_H_
