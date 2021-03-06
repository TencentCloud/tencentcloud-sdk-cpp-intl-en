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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ParamInfo.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>
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
                * CreateDBInstanceHour request structure.
                */
                class CreateDBInstanceHourRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceHourRequest();
                    ~CreateDBInstanceHourRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of instances. Value range: 1-100. Default value: 1.
                     * @return GoodsNum Number of instances. Value range: 1-100. Default value: 1.
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Value range: 1-100. Default value: 1.
                     * @param GoodsNum Number of instances. Value range: 1-100. Default value: 1.
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Instance memory size in MB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported memory specifications.
                     * @return Memory Instance memory size in MB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported memory specifications.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in MB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported memory specifications.
                     * @param Memory Instance memory size in MB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported memory specifications.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported disk specifications.
                     * @return Volume Instance disk size in GB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported disk specifications.
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported disk specifications.
                     * @param Volume Instance disk size in GB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported disk specifications.
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取MySQL version. Valid values: 5.5, 5.6, 5.7. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported instance versions.
                     * @return EngineVersion MySQL version. Valid values: 5.5, 5.6, 5.7. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported instance versions.
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MySQL version. Valid values: 5.5, 5.6, 5.7. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported instance versions.
                     * @param EngineVersion MySQL version. Valid values: 5.5, 5.6, 5.7. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported instance versions.
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取VPC ID. If this parameter is not passed in, the basic network will be selected by default. Please use the [DescribeVpcs](/document/api/215/15778) API to query the VPCs.
                     * @return UniqVpcId VPC ID. If this parameter is not passed in, the basic network will be selected by default. Please use the [DescribeVpcs](/document/api/215/15778) API to query the VPCs.
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is not passed in, the basic network will be selected by default. Please use the [DescribeVpcs](/document/api/215/15778) API to query the VPCs.
                     * @param UniqVpcId VPC ID. If this parameter is not passed in, the basic network will be selected by default. Please use the [DescribeVpcs](/document/api/215/15778) API to query the VPCs.
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the [DescribeSubnets](/document/api/215/15784) API to query the subnet lists.
                     * @return UniqSubnetId VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the [DescribeSubnets](/document/api/215/15784) API to query the subnet lists.
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the [DescribeSubnets](/document/api/215/15784) API to query the subnet lists.
                     * @param UniqSubnetId VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the [DescribeSubnets](/document/api/215/15784) API to query the subnet lists.
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Project ID. If this is left empty, the default project will be used. Please use the [DescribeProject](https://cloud.tencent.com/document/product/378/4400) API to get the project ID.
                     * @return ProjectId Project ID. If this is left empty, the default project will be used. Please use the [DescribeProject](https://cloud.tencent.com/document/product/378/4400) API to get the project ID.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. If this is left empty, the default project will be used. Please use the [DescribeProject](https://cloud.tencent.com/document/product/378/4400) API to get the project ID.
                     * @param ProjectId Project ID. If this is left empty, the default project will be used. Please use the [DescribeProject](https://cloud.tencent.com/document/product/378/4400) API to get the project ID.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取AZ information. By default, the system will automatically select an AZ. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported AZs.
                     * @return Zone AZ information. By default, the system will automatically select an AZ. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported AZs.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information. By default, the system will automatically select an AZ. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported AZs.
                     * @param Zone AZ information. By default, the system will automatically select an AZ. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported AZs.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance ID, which is required and the same as the master instance ID when purchasing read-only or disaster recovery instances. Please use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the instance IDs.
                     * @return MasterInstanceId Instance ID, which is required and the same as the master instance ID when purchasing read-only or disaster recovery instances. Please use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the instance IDs.
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置Instance ID, which is required and the same as the master instance ID when purchasing read-only or disaster recovery instances. Please use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the instance IDs.
                     * @param MasterInstanceId Instance ID, which is required and the same as the master instance ID when purchasing read-only or disaster recovery instances. Please use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the instance IDs.
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     * @return InstanceRole Instance type. Valid values: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Instance type. Valid values: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     * @param InstanceRole Instance type. Valid values: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取AZ information of the master instance, which is required for purchasing disaster recovery instances.
                     * @return MasterRegion AZ information of the master instance, which is required for purchasing disaster recovery instances.
                     */
                    std::string GetMasterRegion() const;

                    /**
                     * 设置AZ information of the master instance, which is required for purchasing disaster recovery instances.
                     * @param MasterRegion AZ information of the master instance, which is required for purchasing disaster recovery instances.
                     */
                    void SetMasterRegion(const std::string& _masterRegion);

                    /**
                     * 判断参数 MasterRegion 是否已赋值
                     * @return MasterRegion 是否已赋值
                     */
                    bool MasterRegionHasBeenSet() const;

                    /**
                     * 获取Custom port. Value range: [1024-65535].
                     * @return Port Custom port. Value range: [1024-65535].
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Custom port. Value range: [1024-65535].
                     * @param Port Custom port. Value range: [1024-65535].
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Sets the root account password. Rule: the password can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @return Password Sets the root account password. Rule: the password can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Sets the root account password. Rule: the password can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @param Password Sets the root account password. Rule: the password can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取List of parameters in the format of `ParamList.0.Name=auto_increment&ParamList.0.Value=1`. You can use the [DescribeDefaultParams](https://cloud.tencent.com/document/api/236/32662) API to query the configurable parameters.
                     * @return ParamList List of parameters in the format of `ParamList.0.Name=auto_increment&ParamList.0.Value=1`. You can use the [DescribeDefaultParams](https://cloud.tencent.com/document/api/236/32662) API to query the configurable parameters.
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置List of parameters in the format of `ParamList.0.Name=auto_increment&ParamList.0.Value=1`. You can use the [DescribeDefaultParams](https://cloud.tencent.com/document/api/236/32662) API to query the configurable parameters.
                     * @param ParamList List of parameters in the format of `ParamList.0.Name=auto_increment&ParamList.0.Value=1`. You can use the [DescribeDefaultParams](https://cloud.tencent.com/document/api/236/32662) API to query the configurable parameters.
                     */
                    void SetParamList(const std::vector<ParamInfo>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @return ProtectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @param ProtectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取Multi-AZ. Valid value: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @return DeployMode Multi-AZ. Valid value: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置Multi-AZ. Valid value: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @param DeployMode Multi-AZ. Valid value: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取AZ information of slave database 1, which is the `Zone` value by default. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @return SlaveZone AZ information of slave database 1, which is the `Zone` value by default. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置AZ information of slave database 1, which is the `Zone` value by default. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     * @param SlaveZone AZ information of slave database 1, which is the `Zone` value by default. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取AZ information of slave database 2, which is empty by default. This parameter can be specified when purchasing strong sync master instances and is meaningless for other types of instances.
                     * @return BackupZone AZ information of slave database 2, which is empty by default. This parameter can be specified when purchasing strong sync master instances and is meaningless for other types of instances.
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置AZ information of slave database 2, which is empty by default. This parameter can be specified when purchasing strong sync master instances and is meaningless for other types of instances.
                     * @param BackupZone AZ information of slave database 2, which is empty by default. This parameter can be specified when purchasing strong sync master instances and is meaningless for other types of instances.
                     */
                    void SetBackupZone(const std::string& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     */
                    bool BackupZoneHasBeenSet() const;

                    /**
                     * 获取Security group parameter. You can use the [DescribeProjectSecurityGroups](https://cloud.tencent.com/document/api/236/15850) API to query the security group details of a project.
                     * @return SecurityGroup Security group parameter. You can use the [DescribeProjectSecurityGroups](https://cloud.tencent.com/document/api/236/15850) API to query the security group details of a project.
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group parameter. You can use the [DescribeProjectSecurityGroups](https://cloud.tencent.com/document/api/236/15850) API to query the security group details of a project.
                     * @param SecurityGroup Security group parameter. You can use the [DescribeProjectSecurityGroups](https://cloud.tencent.com/document/api/236/15850) API to query the security group details of a project.
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Read-only instance information. This parameter must be passed in when purchasing read-only instances.
                     * @return RoGroup Read-only instance information. This parameter must be passed in when purchasing read-only instances.
                     */
                    RoGroup GetRoGroup() const;

                    /**
                     * 设置Read-only instance information. This parameter must be passed in when purchasing read-only instances.
                     * @param RoGroup Read-only instance information. This parameter must be passed in when purchasing read-only instances.
                     */
                    void SetRoGroup(const RoGroup& _roGroup);

                    /**
                     * 判断参数 RoGroup 是否已赋值
                     * @return RoGroup 是否已赋值
                     */
                    bool RoGroupHasBeenSet() const;

                    /**
                     * 获取This field is meaningless when purchasing pay-as-you-go instances.
                     * @return AutoRenewFlag This field is meaningless when purchasing pay-as-you-go instances.
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置This field is meaningless when purchasing pay-as-you-go instances.
                     * @param AutoRenewFlag This field is meaningless when purchasing pay-as-you-go instances.
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param InstanceName Instance name.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance tag information.
                     * @return ResourceTags Instance tag information.
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置Instance tag information.
                     * @param ResourceTags Instance tag information.
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Placement group ID.
                     * @return DeployGroupId Placement group ID.
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置Placement group ID.
                     * @param DeployGroupId Placement group ID.
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取A string that is used to guarantee the idempotency of the request, which is generated by the user and must be unique in each request on the same day. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @return ClientToken A string that is used to guarantee the idempotency of the request, which is generated by the user and must be unique in each request on the same day. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string that is used to guarantee the idempotency of the request, which is generated by the user and must be unique in each request on the same day. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @param ClientToken A string that is used to guarantee the idempotency of the request, which is generated by the user and must be unique in each request on the same day. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: HA (High-Availability Edition), BASIC (Basic Edition). If this parameter is not specified, High-Availability Edition will be used by default.
                     * @return DeviceType Instance type. Valid values: HA (High-Availability Edition), BASIC (Basic Edition). If this parameter is not specified, High-Availability Edition will be used by default.
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance type. Valid values: HA (High-Availability Edition), BASIC (Basic Edition). If this parameter is not specified, High-Availability Edition will be used by default.
                     * @param DeviceType Instance type. Valid values: HA (High-Availability Edition), BASIC (Basic Edition). If this parameter is not specified, High-Availability Edition will be used by default.
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * Number of instances. Value range: 1-100. Default value: 1.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Instance memory size in MB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported memory specifications.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported disk specifications.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * MySQL version. Valid values: 5.5, 5.6, 5.7. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported instance versions.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * VPC ID. If this parameter is not passed in, the basic network will be selected by default. Please use the [DescribeVpcs](/document/api/215/15778) API to query the VPCs.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the [DescribeSubnets](/document/api/215/15784) API to query the subnet lists.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Project ID. If this is left empty, the default project will be used. Please use the [DescribeProject](https://cloud.tencent.com/document/product/378/4400) API to get the project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * AZ information. By default, the system will automatically select an AZ. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported AZs.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance ID, which is required and the same as the master instance ID when purchasing read-only or disaster recovery instances. Please use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the instance IDs.
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * Instance type. Valid values: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * AZ information of the master instance, which is required for purchasing disaster recovery instances.
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * Custom port. Value range: [1024-65535].
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Sets the root account password. Rule: the password can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * List of parameters in the format of `ParamList.0.Name=auto_increment&ParamList.0.Value=1`. You can use the [DescribeDefaultParams](https://cloud.tencent.com/document/api/236/32662) API to query the configurable parameters.
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Multi-AZ. Valid value: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * AZ information of slave database 1, which is the `Zone` value by default. This parameter can be specified when purchasing master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * AZ information of slave database 2, which is empty by default. This parameter can be specified when purchasing strong sync master instances and is meaningless for other types of instances.
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * Security group parameter. You can use the [DescribeProjectSecurityGroups](https://cloud.tencent.com/document/api/236/15850) API to query the security group details of a project.
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Read-only instance information. This parameter must be passed in when purchasing read-only instances.
                     */
                    RoGroup m_roGroup;
                    bool m_roGroupHasBeenSet;

                    /**
                     * This field is meaningless when purchasing pay-as-you-go instances.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance tag information.
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Placement group ID.
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * A string that is used to guarantee the idempotency of the request, which is generated by the user and must be unique in each request on the same day. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Instance type. Valid values: HA (High-Availability Edition), BASIC (Basic Edition). If this parameter is not specified, High-Availability Edition will be used by default.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
