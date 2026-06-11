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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * List of server IDs
                */
                class HostInfo : public AbstractModel
                {
                public:
                    HostInfo();
                    ~HostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Host ID.</p>
                     * @return HostID <p>Host ID.</p>
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置<p>Host ID.</p>
                     * @param _hostID <p>Host ID.</p>
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
                     * 获取<p>Host IP address, which is the private IP address.</p>
                     * @return HostIP <p>Host IP address, which is the private IP address.</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置<p>Host IP address, which is the private IP address.</p>
                     * @param _hostIP <p>Host IP address, which is the private IP address.</p>
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
                     * 获取<p>Host name.</p>
                     * @return HostName <p>Host name.</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _hostName <p>Host name.</p>
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
                     * 获取<p>Business group.</p>
                     * @return Group <p>Business group.</p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>Business group.</p>
                     * @param _group <p>Business group.</p>
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>Docker version.</p>
                     * @return DockerVersion <p>Docker version.</p>
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置<p>Docker version.</p>
                     * @param _dockerVersion <p>Docker version.</p>
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
                     * 获取<p>Docker file system type.</p>
                     * @return DockerFileSystemDriver <p>Docker file system type.</p>
                     * 
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 设置<p>Docker file system type.</p>
                     * @param _dockerFileSystemDriver <p>Docker file system type.</p>
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
                     * 获取<p>Number of images.</p>
                     * @return ImageCnt <p>Number of images.</p>
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 设置<p>Number of images.</p>
                     * @param _imageCnt <p>Number of images.</p>
                     * 
                     */
                    void SetImageCnt(const uint64_t& _imageCnt);

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of containers.</p>
                     * @return ContainerCnt <p>Number of containers.</p>
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置<p>Number of containers.</p>
                     * @param _containerCnt <p>Number of containers.</p>
                     * 
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取<p>Agent running status.</p>
                     * @return Status <p>Agent running status.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Agent running status.</p>
                     * @param _status <p>Agent running status.</p>
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
                     * 获取<p>Whether it is containerd.</p>
                     * @return IsContainerd <p>Whether it is containerd.</p>
                     * 
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 设置<p>Whether it is containerd.</p>
                     * @param _isContainerd <p>Whether it is containerd.</p>
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
                     * 获取<p>Server source: one of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server;</p>
                     * @return MachineType <p>Server source: one of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server;</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>Server source: one of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server;</p>
                     * @param _machineType <p>Server source: one of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server;</p>
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
                     * 获取<p>Public IP address.</p>
                     * @return PublicIp <p>Public IP address.</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IP address.</p>
                     * @param _publicIp <p>Public IP address.</p>
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
                     * 获取<p>Host UUID.</p>
                     * @return Uuid <p>Host UUID.</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>Host UUID.</p>
                     * @param _uuid <p>Host UUID.</p>
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
                     * 获取<p>Host instance ID.</p>
                     * @return InstanceID <p>Host instance ID.</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Host instance ID.</p>
                     * @param _instanceID <p>Host instance ID.</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>Region ID.</p>
                     * @return RegionID <p>Region ID.</p>
                     * 
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 设置<p>Region ID.</p>
                     * @param _regionID <p>Region ID.</p>
                     * 
                     */
                    void SetRegionID(const int64_t& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取<p>Project.</p>
                     * @return Project <p>Project.</p>
                     * 
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 设置<p>Project.</p>
                     * @param _project <p>Project.</p>
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
                     * 获取<p>Tag.</p>
                     * @return Tags <p>Tag.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tags <p>Tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterID <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterID <p>Cluster ID.</p>
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

                    /**
                     * 获取<p>Cluster access status.</p>
                     * @return ClusterAccessedStatus <p>Cluster access status.</p>
                     * 
                     */
                    std::string GetClusterAccessedStatus() const;

                    /**
                     * 设置<p>Cluster access status.</p>
                     * @param _clusterAccessedStatus <p>Cluster access status.</p>
                     * 
                     */
                    void SetClusterAccessedStatus(const std::string& _clusterAccessedStatus);

                    /**
                     * 判断参数 ClusterAccessedStatus 是否已赋值
                     * @return ClusterAccessedStatus 是否已赋值
                     * 
                     */
                    bool ClusterAccessedStatusHasBeenSet() const;

                    /**
                     * 获取<p>Cluster access sub-status.</p><p>Enumeration values:</p><ul><li>AccessedSubNone: none</li><li>AccessedSubUninstallException: uninstallation exception</li><li>AccessedSubTimeout: access timeout</li><li>AccessedSubUninstallTimeout: uninstallation timeout</li><li>AccessedSubResourceException: cluster component check exception, including Deployment and DaemonSet</li><li>AccessedSubCAMPermissionDenied: insufficient CAM permissions</li></ul>
                     * @return ClusterAccessedSubStatus <p>Cluster access sub-status.</p><p>Enumeration values:</p><ul><li>AccessedSubNone: none</li><li>AccessedSubUninstallException: uninstallation exception</li><li>AccessedSubTimeout: access timeout</li><li>AccessedSubUninstallTimeout: uninstallation timeout</li><li>AccessedSubResourceException: cluster component check exception, including Deployment and DaemonSet</li><li>AccessedSubCAMPermissionDenied: insufficient CAM permissions</li></ul>
                     * 
                     */
                    std::string GetClusterAccessedSubStatus() const;

                    /**
                     * 设置<p>Cluster access sub-status.</p><p>Enumeration values:</p><ul><li>AccessedSubNone: none</li><li>AccessedSubUninstallException: uninstallation exception</li><li>AccessedSubTimeout: access timeout</li><li>AccessedSubUninstallTimeout: uninstallation timeout</li><li>AccessedSubResourceException: cluster component check exception, including Deployment and DaemonSet</li><li>AccessedSubCAMPermissionDenied: insufficient CAM permissions</li></ul>
                     * @param _clusterAccessedSubStatus <p>Cluster access sub-status.</p><p>Enumeration values:</p><ul><li>AccessedSubNone: none</li><li>AccessedSubUninstallException: uninstallation exception</li><li>AccessedSubTimeout: access timeout</li><li>AccessedSubUninstallTimeout: uninstallation timeout</li><li>AccessedSubResourceException: cluster component check exception, including Deployment and DaemonSet</li><li>AccessedSubCAMPermissionDenied: insufficient CAM permissions</li></ul>
                     * 
                     */
                    void SetClusterAccessedSubStatus(const std::string& _clusterAccessedSubStatus);

                    /**
                     * 判断参数 ClusterAccessedSubStatus 是否已赋值
                     * @return ClusterAccessedSubStatus 是否已赋值
                     * 
                     */
                    bool ClusterAccessedSubStatusHasBeenSet() const;

                    /**
                     * 获取<p>Detailed description of the failure reason.</p>
                     * @return ClusterAccessedErrorReason <p>Detailed description of the failure reason.</p>
                     * 
                     */
                    std::string GetClusterAccessedErrorReason() const;

                    /**
                     * 设置<p>Detailed description of the failure reason.</p>
                     * @param _clusterAccessedErrorReason <p>Detailed description of the failure reason.</p>
                     * 
                     */
                    void SetClusterAccessedErrorReason(const std::string& _clusterAccessedErrorReason);

                    /**
                     * 判断参数 ClusterAccessedErrorReason 是否已赋值
                     * @return ClusterAccessedErrorReason 是否已赋值
                     * 
                     */
                    bool ClusterAccessedErrorReasonHasBeenSet() const;

                    /**
                     * 获取<p>Billable cores.</p>
                     * @return ChargeCoresCnt <p>Billable cores.</p>
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置<p>Billable cores.</p>
                     * @param _chargeCoresCnt <p>Billable cores.</p>
                     * 
                     */
                    void SetChargeCoresCnt(const uint64_t& _chargeCoresCnt);

                    /**
                     * 判断参数 ChargeCoresCnt 是否已赋值
                     * @return ChargeCoresCnt 是否已赋值
                     * 
                     */
                    bool ChargeCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Protection status:<br>Defended<br>Undefended</p>
                     * @return DefendStatus <p>Protection status:<br>Defended<br>Undefended</p>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>Protection status:<br>Defended<br>Undefended</p>
                     * @param _defendStatus <p>Protection status:<br>Defended<br>Undefended</p>
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of cores.</p>
                     * @return CoresCnt <p>Number of cores.</p>
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 设置<p>Number of cores.</p>
                     * @param _coresCnt <p>Number of cores.</p>
                     * 
                     */
                    void SetCoresCnt(const uint64_t& _coresCnt);

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Last online time.</p>
                     * @return LastOnlineTime <p>Last online time.</p>
                     * 
                     */
                    std::string GetLastOnlineTime() const;

                    /**
                     * 设置<p>Last online time.</p>
                     * @param _lastOnlineTime <p>Last online time.</p>
                     * 
                     */
                    void SetLastOnlineTime(const std::string& _lastOnlineTime);

                    /**
                     * 判断参数 LastOnlineTime 是否已赋值
                     * @return LastOnlineTime 是否已赋值
                     * 
                     */
                    bool LastOnlineTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Host ID.</p>
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * <p>Host IP address, which is the private IP address.</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>Business group.</p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>Docker version.</p>
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * <p>Docker file system type.</p>
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * <p>Number of images.</p>
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * <p>Number of containers.</p>
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * <p>Agent running status.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Whether it is containerd.</p>
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * <p>Server source: one of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server;</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>Public IP address.</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Host UUID.</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>Host instance ID.</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Region ID.</p>
                     */
                    int64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * <p>Project.</p>
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster access status.</p>
                     */
                    std::string m_clusterAccessedStatus;
                    bool m_clusterAccessedStatusHasBeenSet;

                    /**
                     * <p>Cluster access sub-status.</p><p>Enumeration values:</p><ul><li>AccessedSubNone: none</li><li>AccessedSubUninstallException: uninstallation exception</li><li>AccessedSubTimeout: access timeout</li><li>AccessedSubUninstallTimeout: uninstallation timeout</li><li>AccessedSubResourceException: cluster component check exception, including Deployment and DaemonSet</li><li>AccessedSubCAMPermissionDenied: insufficient CAM permissions</li></ul>
                     */
                    std::string m_clusterAccessedSubStatus;
                    bool m_clusterAccessedSubStatusHasBeenSet;

                    /**
                     * <p>Detailed description of the failure reason.</p>
                     */
                    std::string m_clusterAccessedErrorReason;
                    bool m_clusterAccessedErrorReasonHasBeenSet;

                    /**
                     * <p>Billable cores.</p>
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * <p>Protection status:<br>Defended<br>Undefended</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>Number of cores.</p>
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * <p>Last online time.</p>
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
