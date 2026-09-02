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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKCONNECTIVITYHOSTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKCONNECTIVITYHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ProjectInfo.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host information for connectivity detection
                */
                class CheckConnectivityHostInfo : public AbstractModel
                {
                public:
                    CheckConnectivityHostInfo();
                    ~CheckConnectivityHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Host ID.</p>
                     * @return HostId <p>Host ID.</p>
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置<p>Host ID.</p>
                     * @param _hostId <p>Host ID.</p>
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取<p>Host ip address</p>
                     * @return HostIp <p>Host ip address</p>
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置<p>Host ip address</p>
                     * @param _hostIp <p>Host ip address</p>
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
                     * 获取<p>host name</p>
                     * @return HostName <p>host name</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>host name</p>
                     * @param _hostName <p>host name</p>
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
                     * 获取<p>docker version</p>
                     * @return DockerVersion <p>docker version</p>
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置<p>docker version</p>
                     * @param _dockerVersion <p>docker version</p>
                     * 
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     * 
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取<p>docker file system type</p>
                     * @return DockerFileSystemDriver <p>docker file system type</p>
                     * 
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 设置<p>docker file system type</p>
                     * @param _dockerFileSystemDriver <p>docker file system type</p>
                     * 
                     */
                    void SetDockerFileSystemDriver(const std::string& _dockerFileSystemDriver);

                    /**
                     * 判断参数 DockerFileSystemDriver 是否已赋值
                     * @return DockerFileSystemDriver 是否已赋值
                     * 
                     */
                    bool DockerFileSystemDriverHasBeenSet() const;

                    /**
                     * 获取<p>Status.</p>
                     * @return Status <p>Status.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status.</p>
                     * @param _status <p>Status.</p>
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
                     * 获取<p>Whether it is a container.</p>
                     * @return IsContainerd <p>Whether it is a container.</p>
                     * 
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 设置<p>Whether it is a container.</p>
                     * @param _isContainerd <p>Whether it is a container.</p>
                     * 
                     */
                    void SetIsContainerd(const bool& _isContainerd);

                    /**
                     * 判断参数 IsContainerd 是否已赋值
                     * @return IsContainerd 是否已赋值
                     * 
                     */
                    bool IsContainerdHasBeenSet() const;

                    /**
                     * 获取<p>Specific host types.</p>
                     * @return MachineType <p>Specific host types.</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>Specific host types.</p>
                     * @param _machineType <p>Specific host types.</p>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取<p>Public ip address</p>
                     * @return PublicIp <p>Public ip address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public ip address</p>
                     * @param _publicIp <p>Public ip address</p>
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
                     * 获取<p>Host UUID</p>
                     * @return Uuid <p>Host UUID</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>Host UUID</p>
                     * @param _uuid <p>Host UUID</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>id of the region where the host is located</p>
                     * @return HostRegionId <p>id of the region where the host is located</p>
                     * 
                     */
                    int64_t GetHostRegionId() const;

                    /**
                     * 设置<p>id of the region where the host is located</p>
                     * @param _hostRegionId <p>id of the region where the host is located</p>
                     * 
                     */
                    void SetHostRegionId(const int64_t& _hostRegionId);

                    /**
                     * 判断参数 HostRegionId 是否已赋值
                     * @return HostRegionId 是否已赋值
                     * 
                     */
                    bool HostRegionIdHasBeenSet() const;

                    /**
                     * 获取<p>Host region</p>
                     * @return HostRegion <p>Host region</p>
                     * 
                     */
                    std::string GetHostRegion() const;

                    /**
                     * 设置<p>Host region</p>
                     * @param _hostRegion <p>Host region</p>
                     * 
                     */
                    void SetHostRegion(const std::string& _hostRegion);

                    /**
                     * 判断参数 HostRegion 是否已赋值
                     * @return HostRegion 是否已赋值
                     * 
                     */
                    bool HostRegionHasBeenSet() const;

                    /**
                     * 获取<p>Cluster belonging project</p>
                     * @return Project <p>Cluster belonging project</p>
                     * 
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 设置<p>Cluster belonging project</p>
                     * @param _project <p>Cluster belonging project</p>
                     * 
                     */
                    void SetProject(const ProjectInfo& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取<p>Cluster tag</p>
                     * @return Tags <p>Cluster tag</p>
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置<p>Cluster tag</p>
                     * @param _tags <p>Cluster tag</p>
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
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
                     * <p>Host ID.</p>
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * <p>Host ip address</p>
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * <p>host name</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>docker version</p>
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * <p>docker file system type</p>
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * <p>Status.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Whether it is a container.</p>
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * <p>Specific host types.</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>Public ip address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Host UUID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>id of the region where the host is located</p>
                     */
                    int64_t m_hostRegionId;
                    bool m_hostRegionIdHasBeenSet;

                    /**
                     * <p>Host region</p>
                     */
                    std::string m_hostRegion;
                    bool m_hostRegionHasBeenSet;

                    /**
                     * <p>Cluster belonging project</p>
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>Cluster tag</p>
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKCONNECTIVITYHOSTINFO_H_
