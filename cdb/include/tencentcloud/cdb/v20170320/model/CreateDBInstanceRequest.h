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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEREQUEST_H_

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
                * CreateDBInstance request structure.
                */
                class CreateDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceRequest();
                    ~CreateDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance memory size in MB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported memory specifications.
                     * @return Memory Instance memory size in MB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported memory specifications.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in MB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported memory specifications.
                     * @param _memory Instance memory size in MB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported memory specifications.
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
                     * 获取Instance disk size in GB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported disk specifications.
                     * @return Volume Instance disk size in GB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported disk specifications.
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported disk specifications.
                     * @param _volume Instance disk size in GB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported disk specifications.
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
                     * 获取Instance validity period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     * @return Period Instance validity period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Instance validity period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     * @param _period Instance validity period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
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
                     * 获取Number of instances. Value range: 1-100. Default value: `1`.
                     * @return GoodsNum Number of instances. Value range: 1-100. Default value: `1`.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Value range: 1-100. Default value: `1`.
                     * @param _goodsNum Number of instances. Value range: 1-100. Default value: `1`.
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取AZ information. The system will automatically select an AZ by default. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported AZs.
                     * @return Zone AZ information. The system will automatically select an AZ by default. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported AZs.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information. The system will automatically select an AZ by default. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported AZs.
                     * @param _zone AZ information. The system will automatically select an AZ by default. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported AZs.
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
                     * 获取VPC ID. If this parameter is not passed in, the basic network will be selected by default. You can use the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API to query the VPCs.
                     * @return UniqVpcId VPC ID. If this parameter is not passed in, the basic network will be selected by default. You can use the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API to query the VPCs.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is not passed in, the basic network will be selected by default. You can use the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API to query the VPCs.
                     * @param _uniqVpcId VPC ID. If this parameter is not passed in, the basic network will be selected by default. You can use the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API to query the VPCs.
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
                     * 获取VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. You can use the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API to query the subnet lists.
                     * @return UniqSubnetId VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. You can use the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API to query the subnet lists.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. You can use the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API to query the subnet lists.
                     * @param _uniqSubnetId VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. You can use the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API to query the subnet lists.
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
                     * 获取Project ID. If this parameter is left empty, the default project will be used. When you purchase read-only instances and disaster recovery instances, the project ID is the same as that of the source instance by default.
                     * @return ProjectId Project ID. If this parameter is left empty, the default project will be used. When you purchase read-only instances and disaster recovery instances, the project ID is the same as that of the source instance by default.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. If this parameter is left empty, the default project will be used. When you purchase read-only instances and disaster recovery instances, the project ID is the same as that of the source instance by default.
                     * @param _projectId Project ID. If this parameter is left empty, the default project will be used. When you purchase read-only instances and disaster recovery instances, the project ID is the same as that of the source instance by default.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Custom port. Value range: 1024-65535.
                     * @return Port Custom port. Value range: 1024-65535.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Custom port. Value range: 1024-65535.
                     * @param _port Custom port. Value range: 1024-65535.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Instance typeA. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance).
                     * @return InstanceRole Instance typeA. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance).
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Instance typeA. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance).
                     * @param _instanceRole Instance typeA. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance).
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取Instance ID. It is required when purchasing a read-only instance, which is the same as the source instance ID. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the instance ID.
                     * @return MasterInstanceId Instance ID. It is required when purchasing a read-only instance, which is the same as the source instance ID. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the instance ID.
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置Instance ID. It is required when purchasing a read-only instance, which is the same as the source instance ID. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the instance ID.
                     * @param _masterInstanceId Instance ID. It is required when purchasing a read-only instance, which is the same as the source instance ID. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the instance ID.
                     * 
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取MySQL version. Valid values: `5.5`, `5.6`, `5.7`. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported versions.
                     * @return EngineVersion MySQL version. Valid values: `5.5`, `5.6`, `5.7`. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported versions.
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MySQL version. Valid values: `5.5`, `5.6`, `5.7`. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported versions.
                     * @param _engineVersion MySQL version. Valid values: `5.5`, `5.6`, `5.7`. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported versions.
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取The root account password. It can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing a replica instance and is invalid for read-only or disaster recovery instances.
                     * @return Password The root account password. It can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing a replica instance and is invalid for read-only or disaster recovery instances.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置The root account password. It can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing a replica instance and is invalid for read-only or disaster recovery instances.
                     * @param _password The root account password. It can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing a replica instance and is invalid for read-only or disaster recovery instances.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Data replication mode. Valid values: `0` (async replication), `1` (semi-sync replication), `2` (strong sync replication). Default value: `0`.
                     * @return ProtectMode Data replication mode. Valid values: `0` (async replication), `1` (semi-sync replication), `2` (strong sync replication). Default value: `0`.
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication mode. Valid values: `0` (async replication), `1` (semi-sync replication), `2` (strong sync replication). Default value: `0`.
                     * @param _protectMode Data replication mode. Valid values: `0` (async replication), `1` (semi-sync replication), `2` (strong sync replication). Default value: `0`.
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
                     * 获取Multi-AZ or single-AZ. Valid values: `0` (single-AZ), `1` (multi-AZ). Default value: `0`.
                     * @return DeployMode Multi-AZ or single-AZ. Valid values: `0` (single-AZ), `1` (multi-AZ). Default value: `0`.
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置Multi-AZ or single-AZ. Valid values: `0` (single-AZ), `1` (multi-AZ). Default value: `0`.
                     * @param _deployMode Multi-AZ or single-AZ. Valid values: `0` (single-AZ), `1` (multi-AZ). Default value: `0`.
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
                     * 获取Information of replica AZ 1, which is the `Zone` value by default.
                     * @return SlaveZone Information of replica AZ 1, which is the `Zone` value by default.
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置Information of replica AZ 1, which is the `Zone` value by default.
                     * @param _slaveZone Information of replica AZ 1, which is the `Zone` value by default.
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
                     * 获取List of parameters in the format of ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can use the [DescribeDefaultParams](https://intl.cloud.tencent.com/document/api/236/32662?from_cn_redirect=1) API to query the configurable parameters.
                     * @return ParamList List of parameters in the format of ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can use the [DescribeDefaultParams](https://intl.cloud.tencent.com/document/api/236/32662?from_cn_redirect=1) API to query the configurable parameters.
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置List of parameters in the format of ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can use the [DescribeDefaultParams](https://intl.cloud.tencent.com/document/api/236/32662?from_cn_redirect=1) API to query the configurable parameters.
                     * @param _paramList List of parameters in the format of ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can use the [DescribeDefaultParams](https://intl.cloud.tencent.com/document/api/236/32662?from_cn_redirect=1) API to query the configurable parameters.
                     * 
                     */
                    void SetParamList(const std::vector<ParamInfo>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取Information of replica AZ 2, which is left empty by default. Specify this parameter when purchasing a source instance in the one-source-two-replica architecture.
                     * @return BackupZone Information of replica AZ 2, which is left empty by default. Specify this parameter when purchasing a source instance in the one-source-two-replica architecture.
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置Information of replica AZ 2, which is left empty by default. Specify this parameter when purchasing a source instance in the one-source-two-replica architecture.
                     * @param _backupZone Information of replica AZ 2, which is left empty by default. Specify this parameter when purchasing a source instance in the one-source-two-replica architecture.
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
                     * 获取Auto-renewal flag. Valid values: `0` (auto-renewal not enabled), `1` (auto-renewal enabled).
                     * @return AutoRenewFlag Auto-renewal flag. Valid values: `0` (auto-renewal not enabled), `1` (auto-renewal enabled).
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: `0` (auto-renewal not enabled), `1` (auto-renewal enabled).
                     * @param _autoRenewFlag Auto-renewal flag. Valid values: `0` (auto-renewal not enabled), `1` (auto-renewal enabled).
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Region information of the source instance, which is required when purchasing a read-only or disaster recovery instance.
                     * @return MasterRegion Region information of the source instance, which is required when purchasing a read-only or disaster recovery instance.
                     * 
                     */
                    std::string GetMasterRegion() const;

                    /**
                     * 设置Region information of the source instance, which is required when purchasing a read-only or disaster recovery instance.
                     * @param _masterRegion Region information of the source instance, which is required when purchasing a read-only or disaster recovery instance.
                     * 
                     */
                    void SetMasterRegion(const std::string& _masterRegion);

                    /**
                     * 判断参数 MasterRegion 是否已赋值
                     * @return MasterRegion 是否已赋值
                     * 
                     */
                    bool MasterRegionHasBeenSet() const;

                    /**
                     * 获取Security group parameter. You can use the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API to query the security group details of a project.
                     * @return SecurityGroup Security group parameter. You can use the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API to query the security group details of a project.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group parameter. You can use the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API to query the security group details of a project.
                     * @param _securityGroup Security group parameter. You can use the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API to query the security group details of a project.
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
                     * 获取Read-only instance parameter. This parameter must be passed in when purchasing read-only instances.
                     * @return RoGroup Read-only instance parameter. This parameter must be passed in when purchasing read-only instances.
                     * 
                     */
                    RoGroup GetRoGroup() const;

                    /**
                     * 设置Read-only instance parameter. This parameter must be passed in when purchasing read-only instances.
                     * @param _roGroup Read-only instance parameter. This parameter must be passed in when purchasing read-only instances.
                     * 
                     */
                    void SetRoGroup(const RoGroup& _roGroup);

                    /**
                     * 判断参数 RoGroup 是否已赋值
                     * @return RoGroup 是否已赋值
                     * 
                     */
                    bool RoGroupHasBeenSet() const;

                    /**
                     * 获取Instance name. For multiple instances purchased at one time, they will be distinguished by the name suffix number, such as instnaceName=db and goodsNum=3, and their instance names are db1, db2, and db3, respectively.
                     * @return InstanceName Instance name. For multiple instances purchased at one time, they will be distinguished by the name suffix number, such as instnaceName=db and goodsNum=3, and their instance names are db1, db2, and db3, respectively.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name. For multiple instances purchased at one time, they will be distinguished by the name suffix number, such as instnaceName=db and goodsNum=3, and their instance names are db1, db2, and db3, respectively.
                     * @param _instanceName Instance name. For multiple instances purchased at one time, they will be distinguished by the name suffix number, such as instnaceName=db and goodsNum=3, and their instance names are db1, db2, and db3, respectively.
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
                     * 获取Instance tag information
                     * @return ResourceTags Instance tag information
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置Instance tag information
                     * @param _resourceTags Instance tag information
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
                     * 获取Placement group ID
                     * @return DeployGroupId Placement group ID
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置Placement group ID
                     * @param _deployGroupId Placement group ID
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
                     * 获取A string unique in 48 hours, which is supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @return ClientToken A string unique in 48 hours, which is supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string unique in 48 hours, which is supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @param _clientToken A string unique in 48 hours, which is supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Instance isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.
                     * @return DeviceType Instance isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.
                     * @param _deviceType Instance isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.
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
                     * 获取Parameter template ID
                     * @return ParamTemplateId Parameter template ID
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置Parameter template ID
                     * @param _paramTemplateId Parameter template ID
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取Array of alarm policy IDs, which is `OriginId` obtained through the `DescribeAlarmPolicy` API.
                     * @return AlarmPolicyList Array of alarm policy IDs, which is `OriginId` obtained through the `DescribeAlarmPolicy` API.
                     * 
                     */
                    std::vector<int64_t> GetAlarmPolicyList() const;

                    /**
                     * 设置Array of alarm policy IDs, which is `OriginId` obtained through the `DescribeAlarmPolicy` API.
                     * @param _alarmPolicyList Array of alarm policy IDs, which is `OriginId` obtained through the `DescribeAlarmPolicy` API.
                     * 
                     */
                    void SetAlarmPolicyList(const std::vector<int64_t>& _alarmPolicyList);

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                    /**
                     * 获取The number of nodes of the instance. To purchase a read-only instance or a basic instance, set this parameter to `1` or leave it empty. To purchase a three-node instance, set this parameter to `3` or specify the `BackupZone` parameter. If the instance to be purchased is a source instance and both `BackupZone` and this parameter are left empty, the value `2` will be used, which indicates the source instance will have two nodes.
                     * @return InstanceNodes The number of nodes of the instance. To purchase a read-only instance or a basic instance, set this parameter to `1` or leave it empty. To purchase a three-node instance, set this parameter to `3` or specify the `BackupZone` parameter. If the instance to be purchased is a source instance and both `BackupZone` and this parameter are left empty, the value `2` will be used, which indicates the source instance will have two nodes.
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置The number of nodes of the instance. To purchase a read-only instance or a basic instance, set this parameter to `1` or leave it empty. To purchase a three-node instance, set this parameter to `3` or specify the `BackupZone` parameter. If the instance to be purchased is a source instance and both `BackupZone` and this parameter are left empty, the value `2` will be used, which indicates the source instance will have two nodes.
                     * @param _instanceNodes The number of nodes of the instance. To purchase a read-only instance or a basic instance, set this parameter to `1` or leave it empty. To purchase a three-node instance, set this parameter to `3` or specify the `BackupZone` parameter. If the instance to be purchased is a source instance and both `BackupZone` and this parameter are left empty, the value `2` will be used, which indicates the source instance will have two nodes.
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
                     * 获取The number of the instance CPU cores. If this parameter is left empty, it will be subject to the `Memory` value.
                     * @return Cpu The number of the instance CPU cores. If this parameter is left empty, it will be subject to the `Memory` value.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置The number of the instance CPU cores. If this parameter is left empty, it will be subject to the `Memory` value.
                     * @param _cpu The number of the instance CPU cores. If this parameter is left empty, it will be subject to the `Memory` value.
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
                     * 获取Whether to automatically start disaster recovery synchronization. This parameter takes effect only for disaster recovery instances. Valid values: `0` (no), `1` (yes). Default value: `0`.
                     * @return AutoSyncFlag Whether to automatically start disaster recovery synchronization. This parameter takes effect only for disaster recovery instances. Valid values: `0` (no), `1` (yes). Default value: `0`.
                     * 
                     */
                    int64_t GetAutoSyncFlag() const;

                    /**
                     * 设置Whether to automatically start disaster recovery synchronization. This parameter takes effect only for disaster recovery instances. Valid values: `0` (no), `1` (yes). Default value: `0`.
                     * @param _autoSyncFlag Whether to automatically start disaster recovery synchronization. This parameter takes effect only for disaster recovery instances. Valid values: `0` (no), `1` (yes). Default value: `0`.
                     * 
                     */
                    void SetAutoSyncFlag(const int64_t& _autoSyncFlag);

                    /**
                     * 判断参数 AutoSyncFlag 是否已赋值
                     * @return AutoSyncFlag 是否已赋值
                     * 
                     */
                    bool AutoSyncFlagHasBeenSet() const;

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
                     * 获取Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * @return ParamTemplateType Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * 
                     */
                    std::string GetParamTemplateType() const;

                    /**
                     * 设置Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * @param _paramTemplateType Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * 
                     */
                    void SetParamTemplateType(const std::string& _paramTemplateType);

                    /**
                     * 判断参数 ParamTemplateType 是否已赋值
                     * @return ParamTemplateType 是否已赋值
                     * 
                     */
                    bool ParamTemplateTypeHasBeenSet() const;

                    /**
                     * 获取The array of alarm policy names, such as ["policy-uyoee9wg"]. If the `AlarmPolicyList` parameter is specified, this parameter is invalid.
                     * @return AlarmPolicyIdList The array of alarm policy names, such as ["policy-uyoee9wg"]. If the `AlarmPolicyList` parameter is specified, this parameter is invalid.
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIdList() const;

                    /**
                     * 设置The array of alarm policy names, such as ["policy-uyoee9wg"]. If the `AlarmPolicyList` parameter is specified, this parameter is invalid.
                     * @param _alarmPolicyIdList The array of alarm policy names, such as ["policy-uyoee9wg"]. If the `AlarmPolicyList` parameter is specified, this parameter is invalid.
                     * 
                     */
                    void SetAlarmPolicyIdList(const std::vector<std::string>& _alarmPolicyIdList);

                    /**
                     * 判断参数 AlarmPolicyIdList 是否已赋值
                     * @return AlarmPolicyIdList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdListHasBeenSet() const;

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
                     * 获取Instance engine type. Valid values: `InnoDB` (default), `RocksDB`.
                     * @return EngineType Instance engine type. Valid values: `InnoDB` (default), `RocksDB`.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Instance engine type. Valid values: `InnoDB` (default), `RocksDB`.
                     * @param _engineType Instance engine type. Valid values: `InnoDB` (default), `RocksDB`.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取The list of IPs for sources instances. Only one IP address can be assigned to a single source instance. If all IPs are used up, the system will automatically assign IPs to the remaining source instances that do not have one.
                     * @return Vips The list of IPs for sources instances. Only one IP address can be assigned to a single source instance. If all IPs are used up, the system will automatically assign IPs to the remaining source instances that do not have one.
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置The list of IPs for sources instances. Only one IP address can be assigned to a single source instance. If all IPs are used up, the system will automatically assign IPs to the remaining source instances that do not have one.
                     * @param _vips The list of IPs for sources instances. Only one IP address can be assigned to a single source instance. If all IPs are used up, the system will automatically assign IPs to the remaining source instances that do not have one.
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                private:

                    /**
                     * Instance memory size in MB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported memory specifications.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported disk specifications.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Instance validity period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of instances. Value range: 1-100. Default value: `1`.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * AZ information. The system will automatically select an AZ by default. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported AZs.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC ID. If this parameter is not passed in, the basic network will be selected by default. You can use the [DescribeVpcs](https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1) API to query the VPCs.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. You can use the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API to query the subnet lists.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Project ID. If this parameter is left empty, the default project will be used. When you purchase read-only instances and disaster recovery instances, the project ID is the same as that of the source instance by default.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Custom port. Value range: 1024-65535.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance typeA. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance).
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Instance ID. It is required when purchasing a read-only instance, which is the same as the source instance ID. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the instance ID.
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * MySQL version. Valid values: `5.5`, `5.6`, `5.7`. You can use the [DescribeDBZoneConfig](https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1) API to query the supported versions.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * The root account password. It can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols (_+-&=!@#$%^*()). This parameter can be specified when purchasing a replica instance and is invalid for read-only or disaster recovery instances.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Data replication mode. Valid values: `0` (async replication), `1` (semi-sync replication), `2` (strong sync replication). Default value: `0`.
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Multi-AZ or single-AZ. Valid values: `0` (single-AZ), `1` (multi-AZ). Default value: `0`.
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Information of replica AZ 1, which is the `Zone` value by default.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * List of parameters in the format of ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can use the [DescribeDefaultParams](https://intl.cloud.tencent.com/document/api/236/32662?from_cn_redirect=1) API to query the configurable parameters.
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * Information of replica AZ 2, which is left empty by default. Specify this parameter when purchasing a source instance in the one-source-two-replica architecture.
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: `0` (auto-renewal not enabled), `1` (auto-renewal enabled).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Region information of the source instance, which is required when purchasing a read-only or disaster recovery instance.
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * Security group parameter. You can use the [DescribeProjectSecurityGroups](https://intl.cloud.tencent.com/document/api/236/15850?from_cn_redirect=1) API to query the security group details of a project.
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Read-only instance parameter. This parameter must be passed in when purchasing read-only instances.
                     */
                    RoGroup m_roGroup;
                    bool m_roGroupHasBeenSet;

                    /**
                     * Instance name. For multiple instances purchased at one time, they will be distinguished by the name suffix number, such as instnaceName=db and goodsNum=3, and their instance names are db1, db2, and db3, respectively.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance tag information
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Placement group ID
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * A string unique in 48 hours, which is supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Instance isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Parameter template ID
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * Array of alarm policy IDs, which is `OriginId` obtained through the `DescribeAlarmPolicy` API.
                     */
                    std::vector<int64_t> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                    /**
                     * The number of nodes of the instance. To purchase a read-only instance or a basic instance, set this parameter to `1` or leave it empty. To purchase a three-node instance, set this parameter to `3` or specify the `BackupZone` parameter. If the instance to be purchased is a source instance and both `BackupZone` and this parameter are left empty, the value `2` will be used, which indicates the source instance will have two nodes.
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * The number of the instance CPU cores. If this parameter is left empty, it will be subject to the `Memory` value.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Whether to automatically start disaster recovery synchronization. This parameter takes effect only for disaster recovery instances. Valid values: `0` (no), `1` (yes). Default value: `0`.
                     */
                    int64_t m_autoSyncFlag;
                    bool m_autoSyncFlagHasBeenSet;

                    /**
                     * Financial cage ID.
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     */
                    std::string m_paramTemplateType;
                    bool m_paramTemplateTypeHasBeenSet;

                    /**
                     * The array of alarm policy names, such as ["policy-uyoee9wg"]. If the `AlarmPolicyList` parameter is specified, this parameter is invalid.
                     */
                    std::vector<std::string> m_alarmPolicyIdList;
                    bool m_alarmPolicyIdListHasBeenSet;

                    /**
                     * Whether to check the request without creating any instance. Valid values: `true`, `false` (default). After being submitted, the request will be checked to see if it is in correct format and has all required parameters with valid values. An error code is returned if the check failed, and `RequestId` is returned if the check succeeded. After a successful check, no instance will be created if this parameter is set to `true`, whereas an instance will be created and if it is set to `false`.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Instance engine type. Valid values: `InnoDB` (default), `RocksDB`.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * The list of IPs for sources instances. Only one IP address can be assigned to a single source instance. If all IPs are used up, the system will automatically assign IPs to the remaining source instances that do not have one.
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEREQUEST_H_
