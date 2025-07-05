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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateCloneInstance request structure.
                */
                class CreateCloneInstanceRequest : public AbstractModel
                {
                public:
                    CreateCloneInstanceRequest();
                    ~CreateCloneInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance to be cloned from
                     * @return InstanceId ID of the instance to be cloned from
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be cloned from
                     * @param _instanceId ID of the instance to be cloned from
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
                     * 获取To roll back the cloned instance to a specific point in time, set this parameter to a value in the format of "yyyy-mm-dd hh:mm:ss".
                     * @return SpecifiedRollbackTime To roll back the cloned instance to a specific point in time, set this parameter to a value in the format of "yyyy-mm-dd hh:mm:ss".
                     * 
                     */
                    std::string GetSpecifiedRollbackTime() const;

                    /**
                     * 设置To roll back the cloned instance to a specific point in time, set this parameter to a value in the format of "yyyy-mm-dd hh:mm:ss".
                     * @param _specifiedRollbackTime To roll back the cloned instance to a specific point in time, set this parameter to a value in the format of "yyyy-mm-dd hh:mm:ss".
                     * 
                     */
                    void SetSpecifiedRollbackTime(const std::string& _specifiedRollbackTime);

                    /**
                     * 判断参数 SpecifiedRollbackTime 是否已赋值
                     * @return SpecifiedRollbackTime 是否已赋值
                     * 
                     */
                    bool SpecifiedRollbackTimeHasBeenSet() const;

                    /**
                     * 获取To roll back the cloned instance to a specific physical backup file, set this parameter to the ID of the physical backup file. The ID can be obtained by the [DescribeBackups](https://intl.cloud.tencent.com/document/api/236/15842?from_cn_redirect=1) API.
                     * @return SpecifiedBackupId To roll back the cloned instance to a specific physical backup file, set this parameter to the ID of the physical backup file. The ID can be obtained by the [DescribeBackups](https://intl.cloud.tencent.com/document/api/236/15842?from_cn_redirect=1) API.
                     * 
                     */
                    int64_t GetSpecifiedBackupId() const;

                    /**
                     * 设置To roll back the cloned instance to a specific physical backup file, set this parameter to the ID of the physical backup file. The ID can be obtained by the [DescribeBackups](https://intl.cloud.tencent.com/document/api/236/15842?from_cn_redirect=1) API.
                     * @param _specifiedBackupId To roll back the cloned instance to a specific physical backup file, set this parameter to the ID of the physical backup file. The ID can be obtained by the [DescribeBackups](https://intl.cloud.tencent.com/document/api/236/15842?from_cn_redirect=1) API.
                     * 
                     */
                    void SetSpecifiedBackupId(const int64_t& _specifiedBackupId);

                    /**
                     * 判断参数 SpecifiedBackupId 是否已赋值
                     * @return SpecifiedBackupId 是否已赋值
                     * 
                     */
                    bool SpecifiedBackupIdHasBeenSet() const;

                    /**
                     * 获取VPC ID, which can be obtained by the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API. If this parameter is left empty, the classic network will be used by default.
                     * @return UniqVpcId VPC ID, which can be obtained by the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API. If this parameter is left empty, the classic network will be used by default.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID, which can be obtained by the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API. If this parameter is left empty, the classic network will be used by default.
                     * @param _uniqVpcId VPC ID, which can be obtained by the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API. If this parameter is left empty, the classic network will be used by default.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID, which can be obtained by the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API. If `UniqVpcId` is set, `UniqSubnetId` will be required.
                     * @return UniqSubnetId VPC subnet ID, which can be obtained by the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API. If `UniqVpcId` is set, `UniqSubnetId` will be required.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置VPC subnet ID, which can be obtained by the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API. If `UniqVpcId` is set, `UniqSubnetId` will be required.
                     * @param _uniqSubnetId VPC subnet ID, which can be obtained by the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API. If `UniqVpcId` is set, `UniqSubnetId` will be required.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Memory of the cloned instance in MB, which should be equal to (by default) or larger than that of the original instance
                     * @return Memory Memory of the cloned instance in MB, which should be equal to (by default) or larger than that of the original instance
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory of the cloned instance in MB, which should be equal to (by default) or larger than that of the original instance
                     * @param _memory Memory of the cloned instance in MB, which should be equal to (by default) or larger than that of the original instance
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Disk capacity of the cloned instance in GB, which should be equal to (by default) or larger than that of the original instance
                     * @return Volume Disk capacity of the cloned instance in GB, which should be equal to (by default) or larger than that of the original instance
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Disk capacity of the cloned instance in GB, which should be equal to (by default) or larger than that of the original instance
                     * @param _volume Disk capacity of the cloned instance in GB, which should be equal to (by default) or larger than that of the original instance
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Name of the cloned instance
                     * @return InstanceName Name of the cloned instance
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Name of the cloned instance
                     * @param _instanceName Name of the cloned instance
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Security group parameter, which can be obtained by the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API
                     * @return SecurityGroup Security group parameter, which can be obtained by the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group parameter, which can be obtained by the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API
                     * @param _securityGroup Security group parameter, which can be obtained by the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Information of the cloned instance tag
                     * @return ResourceTags Information of the cloned instance tag
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置Information of the cloned instance tag
                     * @param _resourceTags Information of the cloned instance tag
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取The number of CPU cores of the cloned instance. It should be equal to (by default) or larger than that of the original instance.
                     * @return Cpu The number of CPU cores of the cloned instance. It should be equal to (by default) or larger than that of the original instance.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置The number of CPU cores of the cloned instance. It should be equal to (by default) or larger than that of the original instance.
                     * @param _cpu The number of CPU cores of the cloned instance. It should be equal to (by default) or larger than that of the original instance.
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     * @return ProtectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     * @param _protectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取Multi-AZ or single-AZ. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0.
                     * @return DeployMode Multi-AZ or single-AZ. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0.
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置Multi-AZ or single-AZ. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0.
                     * @param _deployMode Multi-AZ or single-AZ. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0.
                     * 
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取Availability zone information of replica 1 of the cloned instance, which is the same as the value of `Zone` of the original instance by default
                     * @return SlaveZone Availability zone information of replica 1 of the cloned instance, which is the same as the value of `Zone` of the original instance by default
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置Availability zone information of replica 1 of the cloned instance, which is the same as the value of `Zone` of the original instance by default
                     * @param _slaveZone Availability zone information of replica 1 of the cloned instance, which is the same as the value of `Zone` of the original instance by default
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取Availability zone information of replica 2 of the cloned instance, 
which is left empty by default. Specify this parameter when cloning a strong sync source instance.
                     * @return BackupZone Availability zone information of replica 2 of the cloned instance, 
which is left empty by default. Specify this parameter when cloning a strong sync source instance.
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置Availability zone information of replica 2 of the cloned instance, 
which is left empty by default. Specify this parameter when cloning a strong sync source instance.
                     * @param _backupZone Availability zone information of replica 2 of the cloned instance, 
which is left empty by default. Specify this parameter when cloning a strong sync source instance.
                     * 
                     */
                    void SetBackupZone(const std::string& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     * 
                     */
                    bool BackupZoneHasBeenSet() const;

                    /**
                     * 获取Resource isolation type of the clone. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance). Default value: `UNIVERSAL`.
                     * @return DeviceType Resource isolation type of the clone. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance). Default value: `UNIVERSAL`.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Resource isolation type of the clone. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance). Default value: `UNIVERSAL`.
                     * @param _deviceType Resource isolation type of the clone. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance). Default value: `UNIVERSAL`.
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取The number of nodes of the clone. If this parameter is set to `3` or the `BackupZone` parameter is specified, the clone will have three nodes. If this parameter is set to `2` or left empty, the clone will have two nodes.
                     * @return InstanceNodes The number of nodes of the clone. If this parameter is set to `3` or the `BackupZone` parameter is specified, the clone will have three nodes. If this parameter is set to `2` or left empty, the clone will have two nodes.
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置The number of nodes of the clone. If this parameter is set to `3` or the `BackupZone` parameter is specified, the clone will have three nodes. If this parameter is set to `2` or left empty, the clone will have two nodes.
                     * @param _instanceNodes The number of nodes of the clone. If this parameter is set to `3` or the `BackupZone` parameter is specified, the clone will have three nodes. If this parameter is set to `2` or left empty, the clone will have two nodes.
                     * 
                     */
                    void SetInstanceNodes(const int64_t& _instanceNodes);

                    /**
                     * 判断参数 InstanceNodes 是否已赋值
                     * @return InstanceNodes 是否已赋值
                     * 
                     */
                    bool InstanceNodesHasBeenSet() const;

                    /**
                     * 获取Placement group ID.
                     * @return DeployGroupId Placement group ID.
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置Placement group ID.
                     * @param _deployGroupId Placement group ID.
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether to check the request without creating any instance. Valid values: `true`, `false` (default). After being submitted, the request will be checked to see if it is in correct format and has all required parameters with valid values. An error code is returned if the check failed, and `RequestId` is returned if the check succeeded. After a successful check, no instance will be created if this parameter is set to `true`, whereas an instance will be created and if it is set to `false`.
                     * @return DryRun Whether to check the request without creating any instance. Valid values: `true`, `false` (default). After being submitted, the request will be checked to see if it is in correct format and has all required parameters with valid values. An error code is returned if the check failed, and `RequestId` is returned if the check succeeded. After a successful check, no instance will be created if this parameter is set to `true`, whereas an instance will be created and if it is set to `false`.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to check the request without creating any instance. Valid values: `true`, `false` (default). After being submitted, the request will be checked to see if it is in correct format and has all required parameters with valid values. An error code is returned if the check failed, and `RequestId` is returned if the check succeeded. After a successful check, no instance will be created if this parameter is set to `true`, whereas an instance will be created and if it is set to `false`.
                     * @param _dryRun Whether to check the request without creating any instance. Valid values: `true`, `false` (default). After being submitted, the request will be checked to see if it is in correct format and has all required parameters with valid values. An error code is returned if the check failed, and `RequestId` is returned if the check succeeded. After a successful check, no instance will be created if this parameter is set to `true`, whereas an instance will be created and if it is set to `false`.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Financial cage ID.
                     * @return CageId Financial cage ID.
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置Financial cage ID.
                     * @param _cageId Financial cage ID.
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取Project ID. Default value: 0.
                     * @return ProjectId Project ID. Default value: 0.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Default value: 0.
                     * @param _projectId Project ID. Default value: 0.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to be cloned from
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * To roll back the cloned instance to a specific point in time, set this parameter to a value in the format of "yyyy-mm-dd hh:mm:ss".
                     */
                    std::string m_specifiedRollbackTime;
                    bool m_specifiedRollbackTimeHasBeenSet;

                    /**
                     * To roll back the cloned instance to a specific physical backup file, set this parameter to the ID of the physical backup file. The ID can be obtained by the [DescribeBackups](https://intl.cloud.tencent.com/document/api/236/15842?from_cn_redirect=1) API.
                     */
                    int64_t m_specifiedBackupId;
                    bool m_specifiedBackupIdHasBeenSet;

                    /**
                     * VPC ID, which can be obtained by the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API. If this parameter is left empty, the classic network will be used by default.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, which can be obtained by the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API. If `UniqVpcId` is set, `UniqSubnetId` will be required.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Memory of the cloned instance in MB, which should be equal to (by default) or larger than that of the original instance
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk capacity of the cloned instance in GB, which should be equal to (by default) or larger than that of the original instance
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Name of the cloned instance
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Security group parameter, which can be obtained by the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Information of the cloned instance tag
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * The number of CPU cores of the cloned instance. It should be equal to (by default) or larger than that of the original instance.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Multi-AZ or single-AZ. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0.
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Availability zone information of replica 1 of the cloned instance, which is the same as the value of `Zone` of the original instance by default
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * Availability zone information of replica 2 of the cloned instance, 
which is left empty by default. Specify this parameter when cloning a strong sync source instance.
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * Resource isolation type of the clone. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance). Default value: `UNIVERSAL`.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * The number of nodes of the clone. If this parameter is set to `3` or the `BackupZone` parameter is specified, the clone will have three nodes. If this parameter is set to `2` or left empty, the clone will have two nodes.
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * Placement group ID.
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * Whether to check the request without creating any instance. Valid values: `true`, `false` (default). After being submitted, the request will be checked to see if it is in correct format and has all required parameters with valid values. An error code is returned if the check failed, and `RequestId` is returned if the check succeeded. After a successful check, no instance will be created if this parameter is set to `true`, whereas an instance will be created and if it is set to `false`.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Financial cage ID.
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * Project ID. Default value: 0.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_
