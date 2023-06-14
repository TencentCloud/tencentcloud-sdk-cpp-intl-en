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
                     * 获取Server ID
                     * @return HostID Server ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server ID
                     * @param _hostID Server ID
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
                     * 获取Server IP, which is the private IP
                     * @return HostIP Server IP, which is the private IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP, which is the private IP
                     * @param _hostIP Server IP, which is the private IP
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
                     * 获取Project
                     * @return Group Project
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Project
                     * @param _group Project
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
                     * 获取Docker version
                     * @return DockerVersion Docker version
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置Docker version
                     * @param _dockerVersion Docker version
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
                     * 获取Docker file system type
                     * @return DockerFileSystemDriver Docker file system type
                     * 
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 设置Docker file system type
                     * @param _dockerFileSystemDriver Docker file system type
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
                     * 获取Number of images
                     * @return ImageCnt Number of images
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 设置Number of images
                     * @param _imageCnt Number of images
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
                     * 获取Number of containers
                     * @return ContainerCnt Number of containers
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置Number of containers
                     * @param _containerCnt Number of containers
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
                     * 获取Agent status
                     * @return Status Agent status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent status
                     * @param _status Agent status
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
                     * 获取Whether it is Containerd
                     * @return IsContainerd Whether it is Containerd
                     * 
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 设置Whether it is Containerd
                     * @param _isContainerd Whether it is Containerd
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
                     * 获取Server source. Valid values: `CVM`, `ECM`, `LH`, `BM`, `Other`. The first four values indicate Tencent Cloud instances, while the last one indicates non-Tencent Cloud instances.
                     * @return MachineType Server source. Valid values: `CVM`, `ECM`, `LH`, `BM`, `Other`. The first four values indicate Tencent Cloud instances, while the last one indicates non-Tencent Cloud instances.
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Server source. Valid values: `CVM`, `ECM`, `LH`, `BM`, `Other`. The first four values indicate Tencent Cloud instances, while the last one indicates non-Tencent Cloud instances.
                     * @param _machineType Server source. Valid values: `CVM`, `ECM`, `LH`, `BM`, `Other`. The first four values indicate Tencent Cloud instances, while the last one indicates non-Tencent Cloud instances.
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
                     * 获取Public IP
                     * @return PublicIp Public IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param _publicIp Public IP
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
                     * 获取Server UUID
                     * @return Uuid Server UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Server UUID
                     * @param _uuid Server UUID
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
                     * 获取Server instance ID
                     * @return InstanceID Server instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Server instance ID
                     * @param _instanceID Server instance ID
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
                     * 获取Region ID
                     * @return RegionID Region ID
                     * 
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 设置Region ID
                     * @param _regionID Region ID
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
                     * 获取Project
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Project Project
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 设置Project
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _project Project
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Tags
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tags
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tags
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _tags Tags
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Server ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Server IP, which is the private IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Project
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Docker version
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * Docker file system type
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

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
                     * Agent status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether it is Containerd
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * Server source. Valid values: `CVM`, `ECM`, `LH`, `BM`, `Other`. The first four values indicate Tencent Cloud instances, while the last one indicates non-Tencent Cloud instances.
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Server UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

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
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Tags
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
