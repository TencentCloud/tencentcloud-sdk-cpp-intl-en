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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ParamInfo.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>
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
                     * 获取For AZ information, please use the [Obtain the Purchasable Specifications of Cloud Databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to obtain the availability zones that can be created.
Description: If you create a single-node, two-node, or three-node instance, this parameter is required. Specify an availability zone. If you do not specify an availability zone, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk edition instance, leave this parameter empty. Configure the availability zone for the read-write node and read-only node with parameter ClusterTopology.
                     * @return Zone For AZ information, please use the [Obtain the Purchasable Specifications of Cloud Databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to obtain the availability zones that can be created.
Description: If you create a single-node, two-node, or three-node instance, this parameter is required. Specify an availability zone. If you do not specify an availability zone, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk edition instance, leave this parameter empty. Configure the availability zone for the read-write node and read-only node with parameter ClusterTopology.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置For AZ information, please use the [Obtain the Purchasable Specifications of Cloud Databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to obtain the availability zones that can be created.
Description: If you create a single-node, two-node, or three-node instance, this parameter is required. Specify an availability zone. If you do not specify an availability zone, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk edition instance, leave this parameter empty. Configure the availability zone for the read-write node and read-only node with parameter ClusterTopology.
                     * @param _zone For AZ information, please use the [Obtain the Purchasable Specifications of Cloud Databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to obtain the availability zones that can be created.
Description: If you create a single-node, two-node, or three-node instance, this parameter is required. Specify an availability zone. If you do not specify an availability zone, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk edition instance, leave this parameter empty. Configure the availability zone for the read-write node and read-only node with parameter ClusterTopology.
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
                     * 获取VPC ID. Please use [Querying VPC list](https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1).
Description: If a cloud disk edition instance is created, this item is required and must be a VPC type. If this item is left blank, the system will select the default VPC.
                     * @return UniqVpcId VPC ID. Please use [Querying VPC list](https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1).
Description: If a cloud disk edition instance is created, this item is required and must be a VPC type. If this item is left blank, the system will select the default VPC.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID. Please use [Querying VPC list](https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1).
Description: If a cloud disk edition instance is created, this item is required and must be a VPC type. If this item is left blank, the system will select the default VPC.
                     * @param _uniqVpcId VPC ID. Please use [Querying VPC list](https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1).
Description: If a cloud disk edition instance is created, this item is required and must be a VPC type. If this item is left blank, the system will select the default VPC.
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
                     * 获取Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use [query subnet list](https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1).
Description: If this item is left empty, the system will select the default subnet in the Default VPC.
                     * @return UniqSubnetId Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use [query subnet list](https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1).
Description: If this item is left empty, the system will select the default subnet in the Default VPC.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use [query subnet list](https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1).
Description: If this item is left empty, the system will select the default subnet in the Default VPC.
                     * @param _uniqSubnetId Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use [query subnet list](https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1).
Description: If this item is left empty, the system will select the default subnet in the Default VPC.
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
                     * 获取Custom port. Port range: 1024-65535.
Description: If this item is left blank, it defaults to 3306.
                     * @return Port Custom port. Port range: 1024-65535.
Description: If this item is left blank, it defaults to 3306.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Custom port. Port range: 1024-65535.
Description: If this item is left blank, it defaults to 3306.
                     * @param _port Custom port. Port range: 1024-65535.
Description: If this item is left blank, it defaults to 3306.
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
                     * 获取Instance type. Supported values include: master - indicates the primary instance, dr - indicates the disaster recovery instance, ro - indicates the read-only instance.
Description: Select instance type. The master type is selected by default if left empty.
                     * @return InstanceRole Instance type. Supported values include: master - indicates the primary instance, dr - indicates the disaster recovery instance, ro - indicates the read-only instance.
Description: Select instance type. The master type is selected by default if left empty.
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Instance type. Supported values include: master - indicates the primary instance, dr - indicates the disaster recovery instance, ro - indicates the read-only instance.
Description: Select instance type. The master type is selected by default if left empty.
                     * @param _instanceRole Instance type. Supported values include: master - indicates the primary instance, dr - indicates the disaster recovery instance, ro - indicates the read-only instance.
Description: Select instance type. The master type is selected by default if left empty.
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
                     * 获取Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API to query the cloud database instance ID.
                     * @return MasterInstanceId Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API to query the cloud database instance ID.
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API to query the cloud database instance ID.
                     * @param _masterInstanceId Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API to query the cloud database instance ID.
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
                     * 获取MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the [obtain the purchasable specifications of cloud databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to get the version of the instance created.
Description: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left empty, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.
                     * @return EngineVersion MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the [obtain the purchasable specifications of cloud databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to get the version of the instance created.
Description: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left empty, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the [obtain the purchasable specifications of cloud databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to get the version of the instance created.
Description: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left empty, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.
                     * @param _engineVersion MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the [obtain the purchasable specifications of cloud databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to get the version of the instance created.
Description: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left empty, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.
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
                     * 获取The root account password, which can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols `_+-&=!@#$%^*()`. This parameter applies to source instances but not to read-only or disaster recovery instances.
                     * @return Password The root account password, which can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols `_+-&=!@#$%^*()`. This parameter applies to source instances but not to read-only or disaster recovery instances.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置The root account password, which can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols `_+-&=!@#$%^*()`. This parameter applies to source instances but not to read-only or disaster recovery instances.
                     * @param _password The root account password, which can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols `_+-&=!@#$%^*()`. This parameter applies to source instances but not to read-only or disaster recovery instances.
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
                     * 获取AZ information of standby database 1.
Description: For two-node and three-node instances, specify this parameter. If not specified, it defaults to the value of Zone. For cloud disk edition instances, this parameter is optional. Configure the availability zone for read-write nodes and read-only nodes with parameter ClusterTopology. Single-node instances are single availability zone and no need to specify this parameter.
                     * @return SlaveZone AZ information of standby database 1.
Description: For two-node and three-node instances, specify this parameter. If not specified, it defaults to the value of Zone. For cloud disk edition instances, this parameter is optional. Configure the availability zone for read-write nodes and read-only nodes with parameter ClusterTopology. Single-node instances are single availability zone and no need to specify this parameter.
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置AZ information of standby database 1.
Description: For two-node and three-node instances, specify this parameter. If not specified, it defaults to the value of Zone. For cloud disk edition instances, this parameter is optional. Configure the availability zone for read-write nodes and read-only nodes with parameter ClusterTopology. Single-node instances are single availability zone and no need to specify this parameter.
                     * @param _slaveZone AZ information of standby database 1.
Description: For two-node and three-node instances, specify this parameter. If not specified, it defaults to the value of Zone. For cloud disk edition instances, this parameter is optional. Configure the availability zone for read-write nodes and read-only nodes with parameter ClusterTopology. Single-node instances are single availability zone and no need to specify this parameter.
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
                     * 获取Parameter list. The parameter format is ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can query the configurable parameters by default by referring to [Querying the Default Configurable Parameter List](https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1).
Description: table name case sensitivity can be enabled or disabled with parameter lower_case_table_names. A parameter value of 0 means enabling, and 1 means disabling. If not set, the default value is 0. For MySQL 8.0 edition instances, you need to set the lower_case_table_names parameter when creating an instance to turn on or off table name case sensitivity. Once created, the parameter cannot be modified, meaning table name case sensitivity cannot be changed after creation. Other database versions support modifying the lower_case_table_names parameter after the instance is created. For the function invocation method to set table name case sensitivity when creating an instance, please see example 3 in this document.
                     * @return ParamList Parameter list. The parameter format is ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can query the configurable parameters by default by referring to [Querying the Default Configurable Parameter List](https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1).
Description: table name case sensitivity can be enabled or disabled with parameter lower_case_table_names. A parameter value of 0 means enabling, and 1 means disabling. If not set, the default value is 0. For MySQL 8.0 edition instances, you need to set the lower_case_table_names parameter when creating an instance to turn on or off table name case sensitivity. Once created, the parameter cannot be modified, meaning table name case sensitivity cannot be changed after creation. Other database versions support modifying the lower_case_table_names parameter after the instance is created. For the function invocation method to set table name case sensitivity when creating an instance, please see example 3 in this document.
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置Parameter list. The parameter format is ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can query the configurable parameters by default by referring to [Querying the Default Configurable Parameter List](https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1).
Description: table name case sensitivity can be enabled or disabled with parameter lower_case_table_names. A parameter value of 0 means enabling, and 1 means disabling. If not set, the default value is 0. For MySQL 8.0 edition instances, you need to set the lower_case_table_names parameter when creating an instance to turn on or off table name case sensitivity. Once created, the parameter cannot be modified, meaning table name case sensitivity cannot be changed after creation. Other database versions support modifying the lower_case_table_names parameter after the instance is created. For the function invocation method to set table name case sensitivity when creating an instance, please see example 3 in this document.
                     * @param _paramList Parameter list. The parameter format is ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can query the configurable parameters by default by referring to [Querying the Default Configurable Parameter List](https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1).
Description: table name case sensitivity can be enabled or disabled with parameter lower_case_table_names. A parameter value of 0 means enabling, and 1 means disabling. If not set, the default value is 0. For MySQL 8.0 edition instances, you need to set the lower_case_table_names parameter when creating an instance to turn on or off table name case sensitivity. Once created, the parameter cannot be modified, meaning table name case sensitivity cannot be changed after creation. Other database versions support modifying the lower_case_table_names parameter after the instance is created. For the function invocation method to set table name case sensitivity when creating an instance, please see example 3 in this document.
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
                     * 获取Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.
                     * @return AutoRenewFlag Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.
                     * @param _autoRenewFlag Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.
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
                     * 获取Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC_V2" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for cloud disk edition, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced for cloud disk edition. Default to general-purpose instance if not specified.
Description: If a cloud disk edition instance is created, this parameter is required.
                     * @return DeviceType Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC_V2" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for cloud disk edition, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced for cloud disk edition. Default to general-purpose instance if not specified.
Description: If a cloud disk edition instance is created, this parameter is required.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC_V2" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for cloud disk edition, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced for cloud disk edition. Default to general-purpose instance if not specified.
Description: If a cloud disk edition instance is created, this parameter is required.
                     * @param _deviceType Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC_V2" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for cloud disk edition, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced for cloud disk edition. Default to general-purpose instance if not specified.
Description: If a cloud disk edition instance is created, this parameter is required.
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
                     * 获取Parameter template id.
Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, inputting the parameter template ID is invalid, and you need to set ParamTemplateType.
                     * @return ParamTemplateId Parameter template id.
Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, inputting the parameter template ID is invalid, and you need to set ParamTemplateType.
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置Parameter template id.
Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, inputting the parameter template ID is invalid, and you need to set ParamTemplateType.
                     * @param _paramTemplateId Parameter template id.
Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, inputting the parameter template ID is invalid, and you need to set ParamTemplateType.
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
                     * 获取Array of alarm policy IDs, which can be obtained through the `OriginId` field in the return value of the `DescribeAlarmPolicy` API of TCOP.
                     * @return AlarmPolicyList Array of alarm policy IDs, which can be obtained through the `OriginId` field in the return value of the `DescribeAlarmPolicy` API of TCOP.
                     * 
                     */
                    std::vector<int64_t> GetAlarmPolicyList() const;

                    /**
                     * 设置Array of alarm policy IDs, which can be obtained through the `OriginId` field in the return value of the `DescribeAlarmPolicy` API of TCOP.
                     * @param _alarmPolicyList Array of alarm policy IDs, which can be obtained through the `OriginId` field in the return value of the `DescribeAlarmPolicy` API of TCOP.
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
                     * 获取Default parameter template type. Supported values include: "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template.
Remark: If you need to use the TencentDB for MySQL default parameter template, set up ParamTemplateType.
                     * @return ParamTemplateType Default parameter template type. Supported values include: "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template.
Remark: If you need to use the TencentDB for MySQL default parameter template, set up ParamTemplateType.
                     * 
                     */
                    std::string GetParamTemplateType() const;

                    /**
                     * 设置Default parameter template type. Supported values include: "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template.
Remark: If you need to use the TencentDB for MySQL default parameter template, set up ParamTemplateType.
                     * @param _paramTemplateType Default parameter template type. Supported values include: "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template.
Remark: If you need to use the TencentDB for MySQL default parameter template, set up ParamTemplateType.
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
                     * 获取Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check failed, return the corresponding error code; if the check passed, return RequestId. false: Send a normal request and create the instance directly after passing the check.
Defaults to false.
                     * @return DryRun Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check failed, return the corresponding error code; if the check passed, return RequestId. false: Send a normal request and create the instance directly after passing the check.
Defaults to false.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check failed, return the corresponding error code; if the check passed, return RequestId. false: Send a normal request and create the instance directly after passing the check.
Defaults to false.
                     * @param _dryRun Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check failed, return the corresponding error code; if the check passed, return RequestId. false: Send a normal request and create the instance directly after passing the check.
Defaults to false.
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

                    /**
                     * 获取Data protection space size of the cloud disk edition instance in GB. Setting range is 1 - 10.
                     * @return DataProtectVolume Data protection space size of the cloud disk edition instance in GB. Setting range is 1 - 10.
                     * 
                     */
                    int64_t GetDataProtectVolume() const;

                    /**
                     * 设置Data protection space size of the cloud disk edition instance in GB. Setting range is 1 - 10.
                     * @param _dataProtectVolume Data protection space size of the cloud disk edition instance in GB. Setting range is 1 - 10.
                     * 
                     */
                    void SetDataProtectVolume(const int64_t& _dataProtectVolume);

                    /**
                     * 判断参数 DataProtectVolume 是否已赋值
                     * @return DataProtectVolume 是否已赋值
                     * 
                     */
                    bool DataProtectVolumeHasBeenSet() const;

                    /**
                     * 获取Cloud disk edition node topology configuration.
Description: If a cloud disk edition instance is purchased, this parameter is required. Set the RW and RO node topology for the cloud disk edition instance. The RO node scope is 1-5. Set at least 1 RO node.
                     * @return ClusterTopology Cloud disk edition node topology configuration.
Description: If a cloud disk edition instance is purchased, this parameter is required. Set the RW and RO node topology for the cloud disk edition instance. The RO node scope is 1-5. Set at least 1 RO node.
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置Cloud disk edition node topology configuration.
Description: If a cloud disk edition instance is purchased, this parameter is required. Set the RW and RO node topology for the cloud disk edition instance. The RO node scope is 1-5. Set at least 1 RO node.
                     * @param _clusterTopology Cloud disk edition node topology configuration.
Description: If a cloud disk edition instance is purchased, this parameter is required. Set the RW and RO node topology for the cloud disk edition instance. The RO node scope is 1-5. Set at least 1 RO node.
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
                     * 获取Disk Type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instance. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD refers to enhanced SSD cloud disk, and CLOUD_PREMIUM indicates high-performance cloud block storage.
Description: The supported regions for the hard disk type of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For the specific support situation, refer to [Regions and Availability Zones](https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1).
                     * @return DiskType Disk Type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instance. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD refers to enhanced SSD cloud disk, and CLOUD_PREMIUM indicates high-performance cloud block storage.
Description: The supported regions for the hard disk type of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For the specific support situation, refer to [Regions and Availability Zones](https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk Type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instance. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD refers to enhanced SSD cloud disk, and CLOUD_PREMIUM indicates high-performance cloud block storage.
Description: The supported regions for the hard disk type of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For the specific support situation, refer to [Regions and Availability Zones](https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1).
                     * @param _diskType Disk Type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instance. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD refers to enhanced SSD cloud disk, and CLOUD_PREMIUM indicates high-performance cloud block storage.
Description: The supported regions for the hard disk type of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For the specific support situation, refer to [Regions and Availability Zones](https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1).
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Turn on or off instance destruction protection. on - enabled, off - disabled.
                     * @return DestroyProtect Turn on or off instance destruction protection. on - enabled, off - disabled.
                     * 
                     */
                    std::string GetDestroyProtect() const;

                    /**
                     * 设置Turn on or off instance destruction protection. on - enabled, off - disabled.
                     * @param _destroyProtect Turn on or off instance destruction protection. on - enabled, off - disabled.
                     * 
                     */
                    void SetDestroyProtect(const std::string& _destroyProtect);

                    /**
                     * 判断参数 DestroyProtect 是否已赋值
                     * @return DestroyProtect 是否已赋值
                     * 
                     */
                    bool DestroyProtectHasBeenSet() const;

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
                     * For AZ information, please use the [Obtain the Purchasable Specifications of Cloud Databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to obtain the availability zones that can be created.
Description: If you create a single-node, two-node, or three-node instance, this parameter is required. Specify an availability zone. If you do not specify an availability zone, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk edition instance, leave this parameter empty. Configure the availability zone for the read-write node and read-only node with parameter ClusterTopology.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC ID. Please use [Querying VPC list](https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1).
Description: If a cloud disk edition instance is created, this item is required and must be a VPC type. If this item is left blank, the system will select the default VPC.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use [query subnet list](https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1).
Description: If this item is left empty, the system will select the default subnet in the Default VPC.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Project ID. If this parameter is left empty, the default project will be used. When you purchase read-only instances and disaster recovery instances, the project ID is the same as that of the source instance by default.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Custom port. Port range: 1024-65535.
Description: If this item is left blank, it defaults to 3306.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance type. Supported values include: master - indicates the primary instance, dr - indicates the disaster recovery instance, ro - indicates the read-only instance.
Description: Select instance type. The master type is selected by default if left empty.
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API to query the cloud database instance ID.
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the [obtain the purchasable specifications of cloud databases](https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1) API to get the version of the instance created.
Description: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left empty, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * The root account password, which can contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and symbols `_+-&=!@#$%^*()`. This parameter applies to source instances but not to read-only or disaster recovery instances.
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
                     * AZ information of standby database 1.
Description: For two-node and three-node instances, specify this parameter. If not specified, it defaults to the value of Zone. For cloud disk edition instances, this parameter is optional. Configure the availability zone for read-write nodes and read-only nodes with parameter ClusterTopology. Single-node instances are single availability zone and no need to specify this parameter.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * Parameter list. The parameter format is ParamList.0.Name=auto_increment&ParamList.0.Value=1. You can query the configurable parameters by default by referring to [Querying the Default Configurable Parameter List](https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1).
Description: table name case sensitivity can be enabled or disabled with parameter lower_case_table_names. A parameter value of 0 means enabling, and 1 means disabling. If not set, the default value is 0. For MySQL 8.0 edition instances, you need to set the lower_case_table_names parameter when creating an instance to turn on or off table name case sensitivity. Once created, the parameter cannot be modified, meaning table name case sensitivity cannot be changed after creation. Other database versions support modifying the lower_case_table_names parameter after the instance is created. For the function invocation method to set table name case sensitivity when creating an instance, please see example 3 in this document.
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * Information of replica AZ 2, which is left empty by default. Specify this parameter when purchasing a source instance in the one-source-two-replica architecture.
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.
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
                     * Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC_V2" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for cloud disk edition, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced for cloud disk edition. Default to general-purpose instance if not specified.
Description: If a cloud disk edition instance is created, this parameter is required.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Parameter template id.
Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, inputting the parameter template ID is invalid, and you need to set ParamTemplateType.
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * Array of alarm policy IDs, which can be obtained through the `OriginId` field in the return value of the `DescribeAlarmPolicy` API of TCOP.
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
                     * Default parameter template type. Supported values include: "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template.
Remark: If you need to use the TencentDB for MySQL default parameter template, set up ParamTemplateType.
                     */
                    std::string m_paramTemplateType;
                    bool m_paramTemplateTypeHasBeenSet;

                    /**
                     * The array of alarm policy names, such as ["policy-uyoee9wg"]. If the `AlarmPolicyList` parameter is specified, this parameter is invalid.
                     */
                    std::vector<std::string> m_alarmPolicyIdList;
                    bool m_alarmPolicyIdListHasBeenSet;

                    /**
                     * Whether to only pre-check this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check failed, return the corresponding error code; if the check passed, return RequestId. false: Send a normal request and create the instance directly after passing the check.
Defaults to false.
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

                    /**
                     * Data protection space size of the cloud disk edition instance in GB. Setting range is 1 - 10.
                     */
                    int64_t m_dataProtectVolume;
                    bool m_dataProtectVolumeHasBeenSet;

                    /**
                     * Cloud disk edition node topology configuration.
Description: If a cloud disk edition instance is purchased, this parameter is required. Set the RW and RO node topology for the cloud disk edition instance. The RO node scope is 1-5. Set at least 1 RO node.
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * Disk Type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instance. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD refers to enhanced SSD cloud disk, and CLOUD_PREMIUM indicates high-performance cloud block storage.
Description: The supported regions for the hard disk type of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For the specific support situation, refer to [Regions and Availability Zones](https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1).
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Turn on or off instance destruction protection. on - enabled, off - disabled.
                     */
                    std::string m_destroyProtect;
                    bool m_destroyProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEREQUEST_H_
