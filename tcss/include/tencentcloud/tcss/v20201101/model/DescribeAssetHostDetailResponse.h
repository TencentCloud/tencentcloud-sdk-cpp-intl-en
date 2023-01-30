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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ProjectInfo.h>
#include <tencentcloud/tcss/v20201101/model/TagInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetHostDetail response structure.
                */
                class DescribeAssetHostDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetHostDetailResponse();
                    ~DescribeAssetHostDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CWPP UUID
                     * @return UUID CWPP UUID
                     */
                    std::string GetUUID() const;

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return HostName Server name
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server group
                     * @return Group Server group
                     */
                    std::string GetGroup() const;

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Server IP
                     * @return HostIP Server IP
                     */
                    std::string GetHostIP() const;

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取OS
                     * @return OsName OS
                     */
                    std::string GetOsName() const;

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Agent version
                     * @return AgentVersion Agent version
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取Kernel version
                     * @return KernelVersion Kernel version
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取Docker version
                     * @return DockerVersion Docker version
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取Docker API version
                     * @return DockerAPIVersion Docker API version
                     */
                    std::string GetDockerAPIVersion() const;

                    /**
                     * 判断参数 DockerAPIVersion 是否已赋值
                     * @return DockerAPIVersion 是否已赋值
                     */
                    bool DockerAPIVersionHasBeenSet() const;

                    /**
                     * 获取Docker version for Go
                     * @return DockerGoVersion Docker version for Go
                     */
                    std::string GetDockerGoVersion() const;

                    /**
                     * 判断参数 DockerGoVersion 是否已赋值
                     * @return DockerGoVersion 是否已赋值
                     */
                    bool DockerGoVersionHasBeenSet() const;

                    /**
                     * 获取Docker file system type
                     * @return DockerFileSystemDriver Docker file system type
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 判断参数 DockerFileSystemDriver 是否已赋值
                     * @return DockerFileSystemDriver 是否已赋值
                     */
                    bool DockerFileSystemDriverHasBeenSet() const;

                    /**
                     * 获取Docker root directory
                     * @return DockerRootDir Docker root directory
                     */
                    std::string GetDockerRootDir() const;

                    /**
                     * 判断参数 DockerRootDir 是否已赋值
                     * @return DockerRootDir 是否已赋值
                     */
                    bool DockerRootDirHasBeenSet() const;

                    /**
                     * 获取Number of images
                     * @return ImageCnt Number of images
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取Number of containers
                     * @return ContainerCnt Number of containers
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取K8s IP
                     * @return K8sMasterIP K8s IP
                     */
                    std::string GetK8sMasterIP() const;

                    /**
                     * 判断参数 K8sMasterIP 是否已赋值
                     * @return K8sMasterIP 是否已赋值
                     */
                    bool K8sMasterIPHasBeenSet() const;

                    /**
                     * 获取K8s version
                     * @return K8sVersion K8s version
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取kube proxy
                     * @return KubeProxyVersion kube proxy
                     */
                    std::string GetKubeProxyVersion() const;

                    /**
                     * 判断参数 KubeProxyVersion 是否已赋值
                     * @return KubeProxyVersion 是否已赋值
                     */
                    bool KubeProxyVersionHasBeenSet() const;

                    /**
                     * 获取Valid values: `UNINSTALL` (not installed); `OFFLINE` (offline); `ONLINE` (defended).
                     * @return Status Valid values: `UNINSTALL` (not installed); `OFFLINE` (offline); `ONLINE` (defended).
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether it is Containerd
                     * @return IsContainerd Whether it is Containerd
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 判断参数 IsContainerd 是否已赋值
                     * @return IsContainerd 是否已赋值
                     */
                    bool IsContainerdHasBeenSet() const;

                    /**
                     * 获取Server source. Valid values: `TENCENTCLOUD` (Tencent Cloud instance); `OTHERCLOUD` (non-Tencent Cloud instance).
                     * @return MachineType Server source. Valid values: `TENCENTCLOUD` (Tencent Cloud instance); `OTHERCLOUD` (non-Tencent Cloud instance).
                     */
                    std::string GetMachineType() const;

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIp Public IP
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Server instance ID
                     * @return InstanceID Server instance ID
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionID Region ID
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取Project
                     * @return Project Project
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Tags
                     * @return Tags Tags
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * CWPP UUID
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

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
                     * Server group
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Server IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * OS
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Agent version
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * Kernel version
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * Docker version
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * Docker API version
                     */
                    std::string m_dockerAPIVersion;
                    bool m_dockerAPIVersionHasBeenSet;

                    /**
                     * Docker version for Go
                     */
                    std::string m_dockerGoVersion;
                    bool m_dockerGoVersionHasBeenSet;

                    /**
                     * Docker file system type
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * Docker root directory
                     */
                    std::string m_dockerRootDir;
                    bool m_dockerRootDirHasBeenSet;

                    /**
                     * Number of images
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * Number of containers
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * K8s IP
                     */
                    std::string m_k8sMasterIP;
                    bool m_k8sMasterIPHasBeenSet;

                    /**
                     * K8s version
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * kube proxy
                     */
                    std::string m_kubeProxyVersion;
                    bool m_kubeProxyVersionHasBeenSet;

                    /**
                     * Valid values: `UNINSTALL` (not installed); `OFFLINE` (offline); `ONLINE` (defended).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether it is Containerd
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * Server source. Valid values: `TENCENTCLOUD` (Tencent Cloud instance); `OTHERCLOUD` (non-Tencent Cloud instance).
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Server instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * Project
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Tags
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTDETAILRESPONSE_H_
