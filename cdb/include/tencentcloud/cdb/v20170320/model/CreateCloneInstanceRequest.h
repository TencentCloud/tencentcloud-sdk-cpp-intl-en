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
#include <tencentcloud/cdb/v20170320/model/ClusterTopology.h>


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
                     * 获取<p>Clone source instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @return InstanceId <p>Clone source instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Clone source instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @param _instanceId <p>Clone source instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
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
                     * 获取<p>If necessary, specify this value when cloning an instance and rolling back to a specified time. The time format is yyyy-mm-dd hh:mm:ss.<br>Note: This parameter and the SpecifiedBackupId parameter require a choice between the two for configuration.</p>
                     * @return SpecifiedRollbackTime <p>If necessary, specify this value when cloning an instance and rolling back to a specified time. The time format is yyyy-mm-dd hh:mm:ss.<br>Note: This parameter and the SpecifiedBackupId parameter require a choice between the two for configuration.</p>
                     * 
                     */
                    std::string GetSpecifiedRollbackTime() const;

                    /**
                     * 设置<p>If necessary, specify this value when cloning an instance and rolling back to a specified time. The time format is yyyy-mm-dd hh:mm:ss.<br>Note: This parameter and the SpecifiedBackupId parameter require a choice between the two for configuration.</p>
                     * @param _specifiedRollbackTime <p>If necessary, specify this value when cloning an instance and rolling back to a specified time. The time format is yyyy-mm-dd hh:mm:ss.<br>Note: This parameter and the SpecifiedBackupId parameter require a choice between the two for configuration.</p>
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
                     * 获取<p>If necessary to clone an instance and roll back to a designated backup set, specify this value as the Id of the backup file. Please use <a href="/document/api/236/15842">query data backup file list</a>.</p><p>If it is a clone of a two-node, three-node, or four-node instance, the backup file is a physical backup. If it is a clone of a single-node or cloud disk edition instance, the backup file is a snapshot backup.</p>
                     * @return SpecifiedBackupId <p>If necessary to clone an instance and roll back to a designated backup set, specify this value as the Id of the backup file. Please use <a href="/document/api/236/15842">query data backup file list</a>.</p><p>If it is a clone of a two-node, three-node, or four-node instance, the backup file is a physical backup. If it is a clone of a single-node or cloud disk edition instance, the backup file is a snapshot backup.</p>
                     * 
                     */
                    int64_t GetSpecifiedBackupId() const;

                    /**
                     * 设置<p>If necessary to clone an instance and roll back to a designated backup set, specify this value as the Id of the backup file. Please use <a href="/document/api/236/15842">query data backup file list</a>.</p><p>If it is a clone of a two-node, three-node, or four-node instance, the backup file is a physical backup. If it is a clone of a single-node or cloud disk edition instance, the backup file is a snapshot backup.</p>
                     * @param _specifiedBackupId <p>If necessary to clone an instance and roll back to a designated backup set, specify this value as the Id of the backup file. Please use <a href="/document/api/236/15842">query data backup file list</a>.</p><p>If it is a clone of a two-node, three-node, or four-node instance, the backup file is a physical backup. If it is a clone of a single-node or cloud disk edition instance, the backup file is a snapshot backup.</p>
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
                     * 获取<p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.</p>
                     * @return UniqVpcId <p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.</p>
                     * @param _uniqVpcId <p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.</p>
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
                     * 获取<p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.</p>
                     * @return UniqSubnetId <p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.</p>
                     * @param _uniqSubnetId <p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.</p>
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
                     * 获取<p>Instance memory size, unit: MB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * @return Memory <p>Instance memory size, unit: MB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Instance memory size, unit: MB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * @param _memory <p>Instance memory size, unit: MB, must not be less than the clone source instance. Default is same as the source instance.</p>
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
                     * 获取<p>Instance disk size, unit: GB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * @return Volume <p>Instance disk size, unit: GB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>Instance disk size, unit: GB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * @param _volume <p>Instance disk size, unit: GB, must not be less than the clone source instance. Default is same as the source instance.</p>
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
                     * 获取<p>Name of the newly generated clone instance. Support input of up to 60 characters.</p>
                     * @return InstanceName <p>Name of the newly generated clone instance. Support input of up to 60 characters.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Name of the newly generated clone instance. Support input of up to 60 characters.</p>
                     * @param _instanceName <p>Name of the newly generated clone instance. Support input of up to 60 characters.</p>
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
                     * 获取<p>Security group parameters. Use the API <a href="https://www.tencentcloud.com/document/api/236/15850?from_cn_redirect=1">Query Project Security Group Information</a> to query security group details of a certain project.</p>
                     * @return SecurityGroup <p>Security group parameters. Use the API <a href="https://www.tencentcloud.com/document/api/236/15850?from_cn_redirect=1">Query Project Security Group Information</a> to query security group details of a certain project.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>Security group parameters. Use the API <a href="https://www.tencentcloud.com/document/api/236/15850?from_cn_redirect=1">Query Project Security Group Information</a> to query security group details of a certain project.</p>
                     * @param _securityGroup <p>Security group parameters. Use the API <a href="https://www.tencentcloud.com/document/api/236/15850?from_cn_redirect=1">Query Project Security Group Information</a> to query security group details of a certain project.</p>
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
                     * 获取<p>Tag information of the instance.</p>
                     * @return ResourceTags <p>Tag information of the instance.</p>
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置<p>Tag information of the instance.</p>
                     * @param _resourceTags <p>Tag information of the instance.</p>
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
                     * 获取<p>Instance Cpu cores, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * @return Cpu <p>Instance Cpu cores, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Instance Cpu cores, must not be less than the clone source instance. Default is same as the source instance.</p>
                     * @param _cpu <p>Instance Cpu cores, must not be less than the clone source instance. Default is same as the source instance.</p>
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
                     * 获取<p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * @return ProtectMode <p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * @param _protectMode <p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
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
                     * 获取<p>Multiple Availability Zones, defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     * @return DeployMode <p>Multiple Availability Zones, defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置<p>Multiple Availability Zones, defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     * @param _deployMode <p>Multiple Availability Zones, defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
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
                     * 获取<p>The AZ information of the newly generated clone instance standby 1 is the same as the source instance Zone by default.</p>
                     * @return SlaveZone <p>The AZ information of the newly generated clone instance standby 1 is the same as the source instance Zone by default.</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>The AZ information of the newly generated clone instance standby 1 is the same as the source instance Zone by default.</p>
                     * @param _slaveZone <p>The AZ information of the newly generated clone instance standby 1 is the same as the source instance Zone by default.</p>
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
                     * 获取<p>AZ information of standby 2, empty by default. Specify this parameter when you clone a strong sync primary instance.</p>
                     * @return BackupZone <p>AZ information of standby 2, empty by default. Specify this parameter when you clone a strong sync primary instance.</p>
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置<p>AZ information of standby 2, empty by default. Specify this parameter when you clone a strong sync primary instance.</p>
                     * @param _backupZone <p>AZ information of standby 2, empty by default. Specify this parameter when you clone a strong sync primary instance.</p>
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
                     * 获取<p>Clone instance type. Supported values include: "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk. If not specified, it defaults to general-purpose instance.</p>
                     * @return DeviceType <p>Clone instance type. Supported values include: "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk. If not specified, it defaults to general-purpose instance.</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Clone instance type. Supported values include: "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk. If not specified, it defaults to general-purpose instance.</p>
                     * @param _deviceType <p>Clone instance type. Supported values include: "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk. If not specified, it defaults to general-purpose instance.</p>
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
                     * 获取<p>Number of nodes in the new clone instance.</p><p>To clone a three-node instance, set this value to 3 or specify the BackupZone parameter. To clone a dual-node instance, set this value to 2. By default, a dual-node instance is cloned. To clone a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     * @return InstanceNodes <p>Number of nodes in the new clone instance.</p><p>To clone a three-node instance, set this value to 3 or specify the BackupZone parameter. To clone a dual-node instance, set this value to 2. By default, a dual-node instance is cloned. To clone a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置<p>Number of nodes in the new clone instance.</p><p>To clone a three-node instance, set this value to 3 or specify the BackupZone parameter. To clone a dual-node instance, set this value to 2. By default, a dual-node instance is cloned. To clone a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     * @param _instanceNodes <p>Number of nodes in the new clone instance.</p><p>To clone a three-node instance, set this value to 3 or specify the BackupZone parameter. To clone a dual-node instance, set this value to 2. By default, a dual-node instance is cloned. To clone a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
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
                     * 获取<p>Placement group ID.</p>
                     * @return DeployGroupId <p>Placement group ID.</p>
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置<p>Placement group ID.</p>
                     * @param _deployGroupId <p>Placement group ID.</p>
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
                     * 获取<p>Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include required parameters, request format, and service limits. If the check fails, return the corresponding error code; if the check passes, return RequestId. Default false: Send a normal request and create the instance directly after passing the check.</p>
                     * @return DryRun <p>Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include required parameters, request format, and service limits. If the check fails, return the corresponding error code; if the check passes, return RequestId. Default false: Send a normal request and create the instance directly after passing the check.</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include required parameters, request format, and service limits. If the check fails, return the corresponding error code; if the check passes, return RequestId. Default false: Send a normal request and create the instance directly after passing the check.</p>
                     * @param _dryRun <p>Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include required parameters, request format, and service limits. If the check fails, return the corresponding error code; if the check passes, return RequestId. Default false: Send a normal request and create the instance directly after passing the check.</p>
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
                     * 获取<p>Financial Enclosure ID.</p>
                     * @return CageId <p>Financial Enclosure ID.</p>
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置<p>Financial Enclosure ID.</p>
                     * @param _cageId <p>Financial Enclosure ID.</p>
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
                     * 获取<p>Project ID. Default project ID 0.</p>
                     * @return ProjectId <p>Project ID. Default project ID 0.</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID. Default project ID 0.</p>
                     * @param _projectId <p>Project ID. Default project ID 0.</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Payment type. Valid values: PRE_PAID (prepaid, also known as yearly/monthly subscription) and USED_PAID (pay-as-you-go). Default billing mode is pay-as-you-go.</p>
                     * @return PayType <p>Payment type. Valid values: PRE_PAID (prepaid, also known as yearly/monthly subscription) and USED_PAID (pay-as-you-go). Default billing mode is pay-as-you-go.</p>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>Payment type. Valid values: PRE_PAID (prepaid, also known as yearly/monthly subscription) and USED_PAID (pay-as-you-go). Default billing mode is pay-as-you-go.</p>
                     * @param _payType <p>Payment type. Valid values: PRE_PAID (prepaid, also known as yearly/monthly subscription) and USED_PAID (pay-as-you-go). Default billing mode is pay-as-you-go.</p>
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance duration, required when PayType is PRE_PAID, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * @return Period <p>Instance duration, required when PayType is PRE_PAID, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Instance duration, required when PayType is PRE_PAID, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * @param _period <p>Instance duration, required when PayType is PRE_PAID, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Topology configuration for cloud disk edition nodes.</p>
                     * @return ClusterTopology <p>Topology configuration for cloud disk edition nodes.</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>Topology configuration for cloud disk edition nodes.</p>
                     * @param _clusterTopology <p>Topology configuration for cloud disk edition nodes.</p>
                     * 
                     */
                    void SetClusterTopology(const ClusterTopology& _clusterTopology);

                    /**
                     * 判断参数 ClusterTopology 是否已赋值
                     * @return ClusterTopology 是否已赋值
                     * 
                     */
                    bool ClusterTopologyHasBeenSet() const;

                    /**
                     * 获取<p>Original instance region. Required when importing a remote backup, for example: ap-guangzhou</p>
                     * @return SrcRegion <p>Original instance region. Required when importing a remote backup, for example: ap-guangzhou</p>
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置<p>Original instance region. Required when importing a remote backup, for example: ap-guangzhou</p>
                     * @param _srcRegion <p>Original instance region. Required when importing a remote backup, for example: ap-guangzhou</p>
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取<p>Offsite data backup id</p>
                     * @return SpecifiedSubBackupId <p>Offsite data backup id</p>
                     * 
                     */
                    int64_t GetSpecifiedSubBackupId() const;

                    /**
                     * 设置<p>Offsite data backup id</p>
                     * @param _specifiedSubBackupId <p>Offsite data backup id</p>
                     * 
                     */
                    void SetSpecifiedSubBackupId(const int64_t& _specifiedSubBackupId);

                    /**
                     * 判断参数 SpecifiedSubBackupId 是否已赋值
                     * @return SpecifiedSubBackupId 是否已赋值
                     * 
                     */
                    bool SpecifiedSubBackupIdHasBeenSet() const;

                    /**
                     * 获取<p>The AZ information of the newly generated clone instance primary database is the same as the source instance Zone by default.</p>
                     * @return MasterZone <p>The AZ information of the newly generated clone instance primary database is the same as the source instance Zone by default.</p>
                     * @deprecated
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置<p>The AZ information of the newly generated clone instance primary database is the same as the source instance Zone by default.</p>
                     * @param _masterZone <p>The AZ information of the newly generated clone instance primary database is the same as the source instance Zone by default.</p>
                     * @deprecated
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * @deprecated
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取<p>The AZ information of the newly generated clone instance's primary database defaults to the same as the source instance's Zone.</p>
                     * @return Zone <p>The AZ information of the newly generated clone instance's primary database defaults to the same as the source instance's Zone.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>The AZ information of the newly generated clone instance's primary database defaults to the same as the source instance's Zone.</p>
                     * @param _zone <p>The AZ information of the newly generated clone instance's primary database defaults to the same as the source instance's Zone.</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>AZ information of standby 3, empty by default. Specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     * @return FourthZone <p>AZ information of standby 3, empty by default. Specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     * 
                     */
                    std::string GetFourthZone() const;

                    /**
                     * 设置<p>AZ information of standby 3, empty by default. Specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     * @param _fourthZone <p>AZ information of standby 3, empty by default. Specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     * 
                     */
                    void SetFourthZone(const std::string& _fourthZone);

                    /**
                     * 判断参数 FourthZone 是否已赋值
                     * @return FourthZone 是否已赋值
                     * 
                     */
                    bool FourthZoneHasBeenSet() const;

                private:

                    /**
                     * <p>Clone source instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>If necessary, specify this value when cloning an instance and rolling back to a specified time. The time format is yyyy-mm-dd hh:mm:ss.<br>Note: This parameter and the SpecifiedBackupId parameter require a choice between the two for configuration.</p>
                     */
                    std::string m_specifiedRollbackTime;
                    bool m_specifiedRollbackTimeHasBeenSet;

                    /**
                     * <p>If necessary to clone an instance and roll back to a designated backup set, specify this value as the Id of the backup file. Please use <a href="/document/api/236/15842">query data backup file list</a>.</p><p>If it is a clone of a two-node, three-node, or four-node instance, the backup file is a physical backup. If it is a clone of a single-node or cloud disk edition instance, the backup file is a snapshot backup.</p>
                     */
                    int64_t m_specifiedBackupId;
                    bool m_specifiedBackupIdHasBeenSet;

                    /**
                     * <p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>Instance memory size, unit: MB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance disk size, unit: GB, must not be less than the clone source instance. Default is same as the source instance.</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Name of the newly generated clone instance. Support input of up to 60 characters.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Security group parameters. Use the API <a href="https://www.tencentcloud.com/document/api/236/15850?from_cn_redirect=1">Query Project Security Group Information</a> to query security group details of a certain project.</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>Tag information of the instance.</p>
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Instance Cpu cores, must not be less than the clone source instance. Default is same as the source instance.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>Multiple Availability Zones, defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>The AZ information of the newly generated clone instance standby 1 is the same as the source instance Zone by default.</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>AZ information of standby 2, empty by default. Specify this parameter when you clone a strong sync primary instance.</p>
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * <p>Clone instance type. Supported values include: "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk. If not specified, it defaults to general-purpose instance.</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Number of nodes in the new clone instance.</p><p>To clone a three-node instance, set this value to 3 or specify the BackupZone parameter. To clone a dual-node instance, set this value to 2. By default, a dual-node instance is cloned. To clone a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * <p>Placement group ID.</p>
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * <p>Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include required parameters, request format, and service limits. If the check fails, return the corresponding error code; if the check passes, return RequestId. Default false: Send a normal request and create the instance directly after passing the check.</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>Financial Enclosure ID.</p>
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * <p>Project ID. Default project ID 0.</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Payment type. Valid values: PRE_PAID (prepaid, also known as yearly/monthly subscription) and USED_PAID (pay-as-you-go). Default billing mode is pay-as-you-go.</p>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>Instance duration, required when PayType is PRE_PAID, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Topology configuration for cloud disk edition nodes.</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * <p>Original instance region. Required when importing a remote backup, for example: ap-guangzhou</p>
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * <p>Offsite data backup id</p>
                     */
                    int64_t m_specifiedSubBackupId;
                    bool m_specifiedSubBackupIdHasBeenSet;

                    /**
                     * <p>The AZ information of the newly generated clone instance primary database is the same as the source instance Zone by default.</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>The AZ information of the newly generated clone instance's primary database defaults to the same as the source instance's Zone.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>AZ information of standby 3, empty by default. Specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     */
                    std::string m_fourthZone;
                    bool m_fourthZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_
