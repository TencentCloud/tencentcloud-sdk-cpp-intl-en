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
                     * 获取<p>Instance memory size. Unit: MB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain creatable memory specifications.</p>
                     * @return Memory <p>Instance memory size. Unit: MB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain creatable memory specifications.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Instance memory size. Unit: MB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain creatable memory specifications.</p>
                     * @param _memory <p>Instance memory size. Unit: MB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain creatable memory specifications.</p>
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
                     * 获取<p>Instance disk size, unit: GB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the creatable disk range.</p>
                     * @return Volume <p>Instance disk size, unit: GB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the creatable disk range.</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>Instance disk size, unit: GB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the creatable disk range.</p>
                     * @param _volume <p>Instance disk size, unit: GB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the creatable disk range.</p>
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
                     * 获取<p>Instance duration, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * @return Period <p>Instance duration, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Instance duration, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * @param _period <p>Instance duration, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
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
                     * 获取<p>Instance count. Default value is 1, minimum value 1, maximum value 100.</p>
                     * @return GoodsNum <p>Instance count. Default value is 1, minimum value 1, maximum value 100.</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>Instance count. Default value is 1, minimum value 1, maximum value 100.</p>
                     * @param _goodsNum <p>Instance count. Default value is 1, minimum value 1, maximum value 100.</p>
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
                     * 获取<p>For AZ information, please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">Obtain the Purchasable Specifications of Cloud Databases</a> API to obtain the availability zones where instances can be created.</p><p>If you create a single-node, two-node, three-node, or four-node instance, this parameter is required. Specify an availability zone. If no availability zone is specified, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk-based cluster instance, leave this parameter blank and configure the availability zones for RWNode and read-only nodes with parameter ClusterTopology.</p>
                     * @return Zone <p>For AZ information, please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">Obtain the Purchasable Specifications of Cloud Databases</a> API to obtain the availability zones where instances can be created.</p><p>If you create a single-node, two-node, three-node, or four-node instance, this parameter is required. Specify an availability zone. If no availability zone is specified, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk-based cluster instance, leave this parameter blank and configure the availability zones for RWNode and read-only nodes with parameter ClusterTopology.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>For AZ information, please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">Obtain the Purchasable Specifications of Cloud Databases</a> API to obtain the availability zones where instances can be created.</p><p>If you create a single-node, two-node, three-node, or four-node instance, this parameter is required. Specify an availability zone. If no availability zone is specified, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk-based cluster instance, leave this parameter blank and configure the availability zones for RWNode and read-only nodes with parameter ClusterTopology.</p>
                     * @param _zone <p>For AZ information, please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">Obtain the Purchasable Specifications of Cloud Databases</a> API to obtain the availability zones where instances can be created.</p><p>If you create a single-node, two-node, three-node, or four-node instance, this parameter is required. Specify an availability zone. If no availability zone is specified, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk-based cluster instance, leave this parameter blank and configure the availability zones for RWNode and read-only nodes with parameter ClusterTopology.</p>
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
                     * 获取<p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.<br>Description: If you create a cloud disk edition instance, this item is required and must be VPC type. If this item is left blank, the system will select the default VPC by default.</p>
                     * @return UniqVpcId <p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.<br>Description: If you create a cloud disk edition instance, this item is required and must be VPC type. If this item is left blank, the system will select the default VPC by default.</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.<br>Description: If you create a cloud disk edition instance, this item is required and must be VPC type. If this item is left blank, the system will select the default VPC by default.</p>
                     * @param _uniqVpcId <p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.<br>Description: If you create a cloud disk edition instance, this item is required and must be VPC type. If this item is left blank, the system will select the default VPC by default.</p>
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
                     * 获取<p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.<br>Description: If this item is not filled, the system will select the default subnet in the Default VPC.</p>
                     * @return UniqSubnetId <p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.<br>Description: If this item is not filled, the system will select the default subnet in the Default VPC.</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.<br>Description: If this item is not filled, the system will select the default subnet in the Default VPC.</p>
                     * @param _uniqSubnetId <p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.<br>Description: If this item is not filled, the system will select the default subnet in the Default VPC.</p>
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
                     * 获取<p>Project ID. The default project is used if left empty. When you purchase a read-only instance or disaster recovery instance, the project ID is consistent with the primary instance by default.</p>
                     * @return ProjectId <p>Project ID. The default project is used if left empty. When you purchase a read-only instance or disaster recovery instance, the project ID is consistent with the primary instance by default.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID. The default project is used if left empty. When you purchase a read-only instance or disaster recovery instance, the project ID is consistent with the primary instance by default.</p>
                     * @param _projectId <p>Project ID. The default project is used if left empty. When you purchase a read-only instance or disaster recovery instance, the project ID is consistent with the primary instance by default.</p>
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
                     * 获取<p>Custom port. Supported range: [1024-65535].<br>Description: If this item is left blank, it defaults to 3306.</p>
                     * @return Port <p>Custom port. Supported range: [1024-65535].<br>Description: If this item is left blank, it defaults to 3306.</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Custom port. Supported range: [1024-65535].<br>Description: If this item is left blank, it defaults to 3306.</p>
                     * @param _port <p>Custom port. Supported range: [1024-65535].<br>Description: If this item is left blank, it defaults to 3306.</p>
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
                     * 获取<p>Instance type. Supported values include: master - primary instance, dr - disaster recovery instance, ro - read-only instance.<br>Description: Select instance type. master is selected by default if left blank.</p>
                     * @return InstanceRole <p>Instance type. Supported values include: master - primary instance, dr - disaster recovery instance, ro - read-only instance.<br>Description: Select instance type. master is selected by default if left blank.</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>Instance type. Supported values include: master - primary instance, dr - disaster recovery instance, ro - read-only instance.<br>Description: Select instance type. master is selected by default if left blank.</p>
                     * @param _instanceRole <p>Instance type. Supported values include: master - primary instance, dr - disaster recovery instance, ro - read-only instance.<br>Description: Select instance type. master is selected by default if left blank.</p>
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
                     * 获取<p>Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API to query the cloud database instance ID.</p>
                     * @return MasterInstanceId <p>Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API to query the cloud database instance ID.</p>
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置<p>Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API to query the cloud database instance ID.</p>
                     * @param _masterInstanceId <p>Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API to query the cloud database instance ID.</p>
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
                     * 获取<p>MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the instance version created.<br>Note: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left blank, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.</p>
                     * @return EngineVersion <p>MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the instance version created.<br>Note: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left blank, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the instance version created.<br>Note: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left blank, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.</p>
                     * @param _engineVersion <p>MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the instance version created.<br>Note: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left blank, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.</p>
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
                     * 获取<p>Set the root account password. The password must contain 8 to 64 characters and at least two of the following: letters, digits, or characters (supported characters: _+-&amp;=!@#$%^*()). You can specify this parameter when purchasing a primary instance. This parameter is invalid when purchasing a read-only instance or disaster recovery instance.</p>
                     * @return Password <p>Set the root account password. The password must contain 8 to 64 characters and at least two of the following: letters, digits, or characters (supported characters: _+-&amp;=!@#$%^*()). You can specify this parameter when purchasing a primary instance. This parameter is invalid when purchasing a read-only instance or disaster recovery instance.</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Set the root account password. The password must contain 8 to 64 characters and at least two of the following: letters, digits, or characters (supported characters: _+-&amp;=!@#$%^*()). You can specify this parameter when purchasing a primary instance. This parameter is invalid when purchasing a read-only instance or disaster recovery instance.</p>
                     * @param _password <p>Set the root account password. The password must contain 8 to 64 characters and at least two of the following: letters, digits, or characters (supported characters: _+-&amp;=!@#$%^*()). You can specify this parameter when purchasing a primary instance. This parameter is invalid when purchasing a read-only instance or disaster recovery instance.</p>
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
                     * 获取<p>AZ information of standby database 1.</p><p>For two-node, three-node, or four-node instances, specify this parameter. If not specified, it defaults to the Zone value. For cloud disk edition instances, this parameter is optional. Configure the AZ for read-write and read-only nodes with parameter ClusterTopology. Single-node instances are in a single availability zone, so no need to specify this parameter.</p>
                     * @return SlaveZone <p>AZ information of standby database 1.</p><p>For two-node, three-node, or four-node instances, specify this parameter. If not specified, it defaults to the Zone value. For cloud disk edition instances, this parameter is optional. Configure the AZ for read-write and read-only nodes with parameter ClusterTopology. Single-node instances are in a single availability zone, so no need to specify this parameter.</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>AZ information of standby database 1.</p><p>For two-node, three-node, or four-node instances, specify this parameter. If not specified, it defaults to the Zone value. For cloud disk edition instances, this parameter is optional. Configure the AZ for read-write and read-only nodes with parameter ClusterTopology. Single-node instances are in a single availability zone, so no need to specify this parameter.</p>
                     * @param _slaveZone <p>AZ information of standby database 1.</p><p>For two-node, three-node, or four-node instances, specify this parameter. If not specified, it defaults to the Zone value. For cloud disk edition instances, this parameter is optional. Configure the AZ for read-write and read-only nodes with parameter ClusterTopology. Single-node instances are in a single availability zone, so no need to specify this parameter.</p>
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
                     * 获取<p>Parameter list. The parameter format is ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1. You can query the configurable parameters by referring to <a href="https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1">querying the default configurable parameter list</a>.<br>Description: table Name case sensitivity can be turned on or off by setting the parameter lower_case_table_names. a parameter Value of 0 means enabling, and a Value of 1 means disabling. If not set, the default Value is 0. If you create a MySQL 8.0 edition instance, you need to set the lower_case_table_names parameter when creating the instance to turn on or off table Name case sensitivity. After the instance is created, the parameter cannot be modified, meaning table Name case sensitivity cannot be changed once created. Instances of other database versions support modifying the lower_case_table_names parameter after creation. For the function invocation method to set table Name case sensitivity when creating an instance, please see example 3 in this document.</p>
                     * @return ParamList <p>Parameter list. The parameter format is ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1. You can query the configurable parameters by referring to <a href="https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1">querying the default configurable parameter list</a>.<br>Description: table Name case sensitivity can be turned on or off by setting the parameter lower_case_table_names. a parameter Value of 0 means enabling, and a Value of 1 means disabling. If not set, the default Value is 0. If you create a MySQL 8.0 edition instance, you need to set the lower_case_table_names parameter when creating the instance to turn on or off table Name case sensitivity. After the instance is created, the parameter cannot be modified, meaning table Name case sensitivity cannot be changed once created. Instances of other database versions support modifying the lower_case_table_names parameter after creation. For the function invocation method to set table Name case sensitivity when creating an instance, please see example 3 in this document.</p>
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置<p>Parameter list. The parameter format is ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1. You can query the configurable parameters by referring to <a href="https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1">querying the default configurable parameter list</a>.<br>Description: table Name case sensitivity can be turned on or off by setting the parameter lower_case_table_names. a parameter Value of 0 means enabling, and a Value of 1 means disabling. If not set, the default Value is 0. If you create a MySQL 8.0 edition instance, you need to set the lower_case_table_names parameter when creating the instance to turn on or off table Name case sensitivity. After the instance is created, the parameter cannot be modified, meaning table Name case sensitivity cannot be changed once created. Instances of other database versions support modifying the lower_case_table_names parameter after creation. For the function invocation method to set table Name case sensitivity when creating an instance, please see example 3 in this document.</p>
                     * @param _paramList <p>Parameter list. The parameter format is ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1. You can query the configurable parameters by referring to <a href="https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1">querying the default configurable parameter list</a>.<br>Description: table Name case sensitivity can be turned on or off by setting the parameter lower_case_table_names. a parameter Value of 0 means enabling, and a Value of 1 means disabling. If not set, the default Value is 0. If you create a MySQL 8.0 edition instance, you need to set the lower_case_table_names parameter when creating the instance to turn on or off table Name case sensitivity. After the instance is created, the parameter cannot be modified, meaning table Name case sensitivity cannot be changed once created. Instances of other database versions support modifying the lower_case_table_names parameter after creation. For the function invocation method to set table Name case sensitivity when creating an instance, please see example 3 in this document.</p>
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
                     * 获取<p>AZ information of standby 2, empty by default.</p><p>Specify this parameter when you proceed to purchase a three-node primary instance or a four-node primary instance.</p>
                     * @return BackupZone <p>AZ information of standby 2, empty by default.</p><p>Specify this parameter when you proceed to purchase a three-node primary instance or a four-node primary instance.</p>
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置<p>AZ information of standby 2, empty by default.</p><p>Specify this parameter when you proceed to purchase a three-node primary instance or a four-node primary instance.</p>
                     * @param _backupZone <p>AZ information of standby 2, empty by default.</p><p>Specify this parameter when you proceed to purchase a three-node primary instance or a four-node primary instance.</p>
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
                     * 获取<p>Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.</p>
                     * @return AutoRenewFlag <p>Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.</p>
                     * @param _autoRenewFlag <p>Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.</p>
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
                     * 获取<p>Region of the primary instance. This field is required when you purchase a disaster recovery or RO instance.</p>
                     * @return MasterRegion <p>Region of the primary instance. This field is required when you purchase a disaster recovery or RO instance.</p>
                     * 
                     */
                    std::string GetMasterRegion() const;

                    /**
                     * 设置<p>Region of the primary instance. This field is required when you purchase a disaster recovery or RO instance.</p>
                     * @param _masterRegion <p>Region of the primary instance. This field is required when you purchase a disaster recovery or RO instance.</p>
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
                     * 获取<p>Read-only instance parameter. This parameter is required when you purchase a read-only instance.</p>
                     * @return RoGroup <p>Read-only instance parameter. This parameter is required when you purchase a read-only instance.</p>
                     * 
                     */
                    RoGroup GetRoGroup() const;

                    /**
                     * 设置<p>Read-only instance parameter. This parameter is required when you purchase a read-only instance.</p>
                     * @param _roGroup <p>Read-only instance parameter. This parameter is required when you purchase a read-only instance.</p>
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
                     * 获取<p>Instance name. When you purchase multiple instances only once, suffix numbers are used for case-sensitive instance naming. For example, instnaceName=db and goodsNum=3, the instance names are db1, db2, and db3 respectively.</p>
                     * @return InstanceName <p>Instance name. When you purchase multiple instances only once, suffix numbers are used for case-sensitive instance naming. For example, instnaceName=db and goodsNum=3, the instance names are db1, db2, and db3 respectively.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name. When you purchase multiple instances only once, suffix numbers are used for case-sensitive instance naming. For example, instnaceName=db and goodsNum=3, the instance names are db1, db2, and db3 respectively.</p>
                     * @param _instanceName <p>Instance name. When you purchase multiple instances only once, suffix numbers are used for case-sensitive instance naming. For example, instnaceName=db and goodsNum=3, the instance names are db1, db2, and db3 respectively.</p>
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
                     * 获取<p>String used to ensure request idempotency. This string is generated by the customer and must be unique between different requests within 48 hours, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * @return ClientToken <p>String used to ensure request idempotency. This string is generated by the customer and must be unique between different requests within 48 hours, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>String used to ensure request idempotency. This string is generated by the customer and must be unique between different requests within 48 hours, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * @param _clientToken <p>String used to ensure request idempotency. This string is generated by the customer and must be unique between different requests within 48 hours, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
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
                     * 获取<p>Instance isolation type.</p><p>Enumeration values:</p><ul><li><p>UNIVERSAL: General-purpose instance</p></li><li><p>EXCLUSIVE: Dedicated instance</p></li><li><p>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_ULTRA: Premium type of cloud disk edition</p></li><li><p>If this parameter is not specified, it defaults to general-purpose instance.</p></li><li><p>Required if you create a cloud disk edition instance.</p></li><li><p>If you create a single-node instance, fill in this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes equal to 1.</p></li></ul>
                     * @return DeviceType <p>Instance isolation type.</p><p>Enumeration values:</p><ul><li><p>UNIVERSAL: General-purpose instance</p></li><li><p>EXCLUSIVE: Dedicated instance</p></li><li><p>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_ULTRA: Premium type of cloud disk edition</p></li><li><p>If this parameter is not specified, it defaults to general-purpose instance.</p></li><li><p>Required if you create a cloud disk edition instance.</p></li><li><p>If you create a single-node instance, fill in this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes equal to 1.</p></li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance isolation type.</p><p>Enumeration values:</p><ul><li><p>UNIVERSAL: General-purpose instance</p></li><li><p>EXCLUSIVE: Dedicated instance</p></li><li><p>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_ULTRA: Premium type of cloud disk edition</p></li><li><p>If this parameter is not specified, it defaults to general-purpose instance.</p></li><li><p>Required if you create a cloud disk edition instance.</p></li><li><p>If you create a single-node instance, fill in this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes equal to 1.</p></li></ul>
                     * @param _deviceType <p>Instance isolation type.</p><p>Enumeration values:</p><ul><li><p>UNIVERSAL: General-purpose instance</p></li><li><p>EXCLUSIVE: Dedicated instance</p></li><li><p>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_ULTRA: Premium type of cloud disk edition</p></li><li><p>If this parameter is not specified, it defaults to general-purpose instance.</p></li><li><p>Required if you create a cloud disk edition instance.</p></li><li><p>If you create a single-node instance, fill in this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes equal to 1.</p></li></ul>
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
                     * 获取<p>Parameter template ID.<br>Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, the input ID is invalid and you need to set ParamTemplateType.</p>
                     * @return ParamTemplateId <p>Parameter template ID.<br>Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, the input ID is invalid and you need to set ParamTemplateType.</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>Parameter template ID.<br>Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, the input ID is invalid and you need to set ParamTemplateType.</p>
                     * @param _paramTemplateId <p>Parameter template ID.<br>Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, the input ID is invalid and you need to set ParamTemplateType.</p>
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
                     * 获取<p>Array of alarm policy IDs. OriginId returned by the Tencent Cloud observability platform DescribeAlarmPolicy API.</p>
                     * @return AlarmPolicyList <p>Array of alarm policy IDs. OriginId returned by the Tencent Cloud observability platform DescribeAlarmPolicy API.</p>
                     * 
                     */
                    std::vector<int64_t> GetAlarmPolicyList() const;

                    /**
                     * 设置<p>Array of alarm policy IDs. OriginId returned by the Tencent Cloud observability platform DescribeAlarmPolicy API.</p>
                     * @param _alarmPolicyList <p>Array of alarm policy IDs. OriginId returned by the Tencent Cloud observability platform DescribeAlarmPolicy API.</p>
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
                     * 获取<p>Number of instance nodes.</p><p>For RO and single-node instances, the default value is 1. To purchase a three-node instance, set this value to 3 or specify the BackupZone parameter. When purchasing a primary instance without specifying this parameter or the BackupZone parameter, the default value is 2, meaning a dual-node instance will be purchased. To purchase a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     * @return InstanceNodes <p>Number of instance nodes.</p><p>For RO and single-node instances, the default value is 1. To purchase a three-node instance, set this value to 3 or specify the BackupZone parameter. When purchasing a primary instance without specifying this parameter or the BackupZone parameter, the default value is 2, meaning a dual-node instance will be purchased. To purchase a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置<p>Number of instance nodes.</p><p>For RO and single-node instances, the default value is 1. To purchase a three-node instance, set this value to 3 or specify the BackupZone parameter. When purchasing a primary instance without specifying this parameter or the BackupZone parameter, the default value is 2, meaning a dual-node instance will be purchased. To purchase a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     * @param _instanceNodes <p>Number of instance nodes.</p><p>For RO and single-node instances, the default value is 1. To purchase a three-node instance, set this value to 3 or specify the BackupZone parameter. When purchasing a primary instance without specifying this parameter or the BackupZone parameter, the default value is 2, meaning a dual-node instance will be purchased. To purchase a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
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
                     * 获取<p>Number of Cpu cores of the instance.</p><p>When multiple Cpu configurations exist for the Memory specification (for example, 64000MB Memory corresponds to 8-core/16-core/32-core), the Cpu parameter must be provided.</p>
                     * @return Cpu <p>Number of Cpu cores of the instance.</p><p>When multiple Cpu configurations exist for the Memory specification (for example, 64000MB Memory corresponds to 8-core/16-core/32-core), the Cpu parameter must be provided.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Number of Cpu cores of the instance.</p><p>When multiple Cpu configurations exist for the Memory specification (for example, 64000MB Memory corresponds to 8-core/16-core/32-core), the Cpu parameter must be provided.</p>
                     * @param _cpu <p>Number of Cpu cores of the instance.</p><p>When multiple Cpu configurations exist for the Memory specification (for example, 64000MB Memory corresponds to 8-core/16-core/32-core), the Cpu parameter must be provided.</p>
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
                     * 获取<p>Whether to automatically initiate disaster recovery sync. This parameter only takes effect when purchasing a disaster recovery instance. Available values are: 0 - Do not automatically initiate disaster recovery sync; 1 - Automatically initiate disaster recovery sync. The default is 0.</p>
                     * @return AutoSyncFlag <p>Whether to automatically initiate disaster recovery sync. This parameter only takes effect when purchasing a disaster recovery instance. Available values are: 0 - Do not automatically initiate disaster recovery sync; 1 - Automatically initiate disaster recovery sync. The default is 0.</p>
                     * 
                     */
                    int64_t GetAutoSyncFlag() const;

                    /**
                     * 设置<p>Whether to automatically initiate disaster recovery sync. This parameter only takes effect when purchasing a disaster recovery instance. Available values are: 0 - Do not automatically initiate disaster recovery sync; 1 - Automatically initiate disaster recovery sync. The default is 0.</p>
                     * @param _autoSyncFlag <p>Whether to automatically initiate disaster recovery sync. This parameter only takes effect when purchasing a disaster recovery instance. Available values are: 0 - Do not automatically initiate disaster recovery sync; 1 - Automatically initiate disaster recovery sync. The default is 0.</p>
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
                     * 获取<p>Default parameter template type. Supported values include "HIGH_STABILITY" - HIGH-STABILITY template, "HIGH_PERFORMANCE" - HIGH-PERFORMANCE template.<br>Remark: If you need to use TencentDB for MySQL default parameter template, set up ParamTemplateType.</p>
                     * @return ParamTemplateType <p>Default parameter template type. Supported values include "HIGH_STABILITY" - HIGH-STABILITY template, "HIGH_PERFORMANCE" - HIGH-PERFORMANCE template.<br>Remark: If you need to use TencentDB for MySQL default parameter template, set up ParamTemplateType.</p>
                     * 
                     */
                    std::string GetParamTemplateType() const;

                    /**
                     * 设置<p>Default parameter template type. Supported values include "HIGH_STABILITY" - HIGH-STABILITY template, "HIGH_PERFORMANCE" - HIGH-PERFORMANCE template.<br>Remark: If you need to use TencentDB for MySQL default parameter template, set up ParamTemplateType.</p>
                     * @param _paramTemplateType <p>Default parameter template type. Supported values include "HIGH_STABILITY" - HIGH-STABILITY template, "HIGH_PERFORMANCE" - HIGH-PERFORMANCE template.<br>Remark: If you need to use TencentDB for MySQL default parameter template, set up ParamTemplateType.</p>
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
                     * 获取<p>Alarm policy name array, such as ["policy-uyoee9wg"]. This parameter is invalid when AlarmPolicyList is not empty.</p>
                     * @return AlarmPolicyIdList <p>Alarm policy name array, such as ["policy-uyoee9wg"]. This parameter is invalid when AlarmPolicyList is not empty.</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIdList() const;

                    /**
                     * 设置<p>Alarm policy name array, such as ["policy-uyoee9wg"]. This parameter is invalid when AlarmPolicyList is not empty.</p>
                     * @param _alarmPolicyIdList <p>Alarm policy name array, such as ["policy-uyoee9wg"]. This parameter is invalid when AlarmPolicyList is not empty.</p>
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
                     * 获取<p>Whether to perform a pre-check only for this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check fails, return the corresponding error code; if the check passes, return RequestId. false: Send a normal request and create an instance directly after the check passes.<br>Default to false.</p>
                     * @return DryRun <p>Whether to perform a pre-check only for this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check fails, return the corresponding error code; if the check passes, return RequestId. false: Send a normal request and create an instance directly after the check passes.<br>Default to false.</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>Whether to perform a pre-check only for this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check fails, return the corresponding error code; if the check passes, return RequestId. false: Send a normal request and create an instance directly after the check passes.<br>Default to false.</p>
                     * @param _dryRun <p>Whether to perform a pre-check only for this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check fails, return the corresponding error code; if the check passes, return RequestId. false: Send a normal request and create an instance directly after the check passes.<br>Default to false.</p>
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
                     * 获取<p>Instance engine type, defaults to "InnoDB". Supported values include "InnoDB" and "RocksDB".</p>
                     * @return EngineType <p>Instance engine type, defaults to "InnoDB". Supported values include "InnoDB" and "RocksDB".</p>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>Instance engine type, defaults to "InnoDB". Supported values include "InnoDB" and "RocksDB".</p>
                     * @param _engineType <p>Instance engine type, defaults to "InnoDB". Supported values include "InnoDB" and "RocksDB".</p>
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
                     * 获取<p>Specify the IP list of the instance. Only the primary instance is supported. Process by instance sequence. Handle as unspecified if insufficient.</p>
                     * @return Vips <p>Specify the IP list of the instance. Only the primary instance is supported. Process by instance sequence. Handle as unspecified if insufficient.</p>
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置<p>Specify the IP list of the instance. Only the primary instance is supported. Process by instance sequence. Handle as unspecified if insufficient.</p>
                     * @param _vips <p>Specify the IP list of the instance. Only the primary instance is supported. Process by instance sequence. Handle as unspecified if insufficient.</p>
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
                     * 获取<p>The data protection space size of the cloud disk edition instance, in GB, has a setting range of 1 - 10.</p>
                     * @return DataProtectVolume <p>The data protection space size of the cloud disk edition instance, in GB, has a setting range of 1 - 10.</p>
                     * 
                     */
                    int64_t GetDataProtectVolume() const;

                    /**
                     * 设置<p>The data protection space size of the cloud disk edition instance, in GB, has a setting range of 1 - 10.</p>
                     * @param _dataProtectVolume <p>The data protection space size of the cloud disk edition instance, in GB, has a setting range of 1 - 10.</p>
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
                     * 获取<p>Topology configuration of cloud disk edition instance nodes.</p><p>If a cloud disk edition instance is purchased, this parameter is required. Set the topology of RW and RO nodes for the cloud disk edition instance. The node scope of RO nodes is 1-5. Set at least 1 RO node.</p>
                     * @return ClusterTopology <p>Topology configuration of cloud disk edition instance nodes.</p><p>If a cloud disk edition instance is purchased, this parameter is required. Set the topology of RW and RO nodes for the cloud disk edition instance. The node scope of RO nodes is 1-5. Set at least 1 RO node.</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>Topology configuration of cloud disk edition instance nodes.</p><p>If a cloud disk edition instance is purchased, this parameter is required. Set the topology of RW and RO nodes for the cloud disk edition instance. The node scope of RO nodes is 1-5. Set at least 1 RO node.</p>
                     * @param _clusterTopology <p>Topology configuration of cloud disk edition instance nodes.</p><p>If a cloud disk edition instance is purchased, this parameter is required. Set the topology of RW and RO nodes for the cloud disk edition instance. The node scope of RO nodes is 1-5. Set at least 1 RO node.</p>
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
                     * 获取<p>Disk type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instances. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD means enhanced SSD cloud disk, and CLOUD_PREMIUM means high-performance cloud block storage.<br>Note: The supported regions for hard disk types of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For specific support situation, refer to <a href="https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @return DiskType <p>Disk type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instances. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD means enhanced SSD cloud disk, and CLOUD_PREMIUM means high-performance cloud block storage.<br>Note: The supported regions for hard disk types of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For specific support situation, refer to <a href="https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Disk type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instances. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD means enhanced SSD cloud disk, and CLOUD_PREMIUM means high-performance cloud block storage.<br>Note: The supported regions for hard disk types of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For specific support situation, refer to <a href="https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @param _diskType <p>Disk type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instances. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD means enhanced SSD cloud disk, and CLOUD_PREMIUM means high-performance cloud block storage.<br>Note: The supported regions for hard disk types of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For specific support situation, refer to <a href="https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
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
                     * 获取<p>Turn on or off instance destruction protection. on - turn on, off - turn off.</p>
                     * @return DestroyProtect <p>Turn on or off instance destruction protection. on - turn on, off - turn off.</p>
                     * 
                     */
                    std::string GetDestroyProtect() const;

                    /**
                     * 设置<p>Turn on or off instance destruction protection. on - turn on, off - turn off.</p>
                     * @param _destroyProtect <p>Turn on or off instance destruction protection. on - turn on, off - turn off.</p>
                     * 
                     */
                    void SetDestroyProtect(const std::string& _destroyProtect);

                    /**
                     * 判断参数 DestroyProtect 是否已赋值
                     * @return DestroyProtect 是否已赋值
                     * 
                     */
                    bool DestroyProtectHasBeenSet() const;

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
                     * <p>Instance memory size. Unit: MB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain creatable memory specifications.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance disk size, unit: GB. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the creatable disk range.</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Instance duration, measurement unit: month, optional values include [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Instance count. Default value is 1, minimum value 1, maximum value 100.</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>For AZ information, please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">Obtain the Purchasable Specifications of Cloud Databases</a> API to obtain the availability zones where instances can be created.</p><p>If you create a single-node, two-node, three-node, or four-node instance, this parameter is required. Specify an availability zone. If no availability zone is specified, the system will automatically select one (possibly not the availability zone you want to deploy in). If you create a cloud disk-based cluster instance, leave this parameter blank and configure the availability zones for RWNode and read-only nodes with parameter ClusterTopology.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>VPC ID. Please use <a href="/document/api/215/15778">Querying VPC List</a>.<br>Description: If you create a cloud disk edition instance, this item is required and must be VPC type. If this item is left blank, the system will select the default VPC by default.</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID in the private network. If UniqVpcId is set up, UniqSubnetId is required. Please use <a href="/document/api/215/15784">query subnet list</a>.<br>Description: If this item is not filled, the system will select the default subnet in the Default VPC.</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>Project ID. The default project is used if left empty. When you purchase a read-only instance or disaster recovery instance, the project ID is consistent with the primary instance by default.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Custom port. Supported range: [1024-65535].<br>Description: If this item is left blank, it defaults to 3306.</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Instance type. Supported values include: master - primary instance, dr - disaster recovery instance, ro - read-only instance.<br>Description: Select instance type. master is selected by default if left blank.</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>Instance ID, required when purchasing a read-only instance or disaster recovery instance. This field represents the primary instance ID of the read-only instance or disaster recovery instance. Please use the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API to query the cloud database instance ID.</p>
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * <p>MySQL version, including 5.5, 5.6, 5.7, and 8.0. Please use the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the instance version created.<br>Note: When creating a non-cloud disk edition instance, specify the instance version as needed (recommend 5.7 or 8.0). If this parameter is left blank, the default value is 8.0. If creating a cloud disk edition instance, this parameter can only be set to 5.7 or 8.0.</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Set the root account password. The password must contain 8 to 64 characters and at least two of the following: letters, digits, or characters (supported characters: _+-&amp;=!@#$%^*()). You can specify this parameter when purchasing a primary instance. This parameter is invalid when purchasing a read-only instance or disaster recovery instance.</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

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
                     * <p>AZ information of standby database 1.</p><p>For two-node, three-node, or four-node instances, specify this parameter. If not specified, it defaults to the Zone value. For cloud disk edition instances, this parameter is optional. Configure the AZ for read-write and read-only nodes with parameter ClusterTopology. Single-node instances are in a single availability zone, so no need to specify this parameter.</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>Parameter list. The parameter format is ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1. You can query the configurable parameters by referring to <a href="https://www.tencentcloud.com/document/api/236/32662?from_cn_redirect=1">querying the default configurable parameter list</a>.<br>Description: table Name case sensitivity can be turned on or off by setting the parameter lower_case_table_names. a parameter Value of 0 means enabling, and a Value of 1 means disabling. If not set, the default Value is 0. If you create a MySQL 8.0 edition instance, you need to set the lower_case_table_names parameter when creating the instance to turn on or off table Name case sensitivity. After the instance is created, the parameter cannot be modified, meaning table Name case sensitivity cannot be changed once created. Instances of other database versions support modifying the lower_case_table_names parameter after creation. For the function invocation method to set table Name case sensitivity when creating an instance, please see example 3 in this document.</p>
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>AZ information of standby 2, empty by default.</p><p>Specify this parameter when you proceed to purchase a three-node primary instance or a four-node primary instance.</p>
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * <p>Auto-renewal flag. Available values are: 0 - no auto-renewal; 1 - auto-renewal. Default is 0.</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Region of the primary instance. This field is required when you purchase a disaster recovery or RO instance.</p>
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * <p>Security group parameters. Use the API <a href="https://www.tencentcloud.com/document/api/236/15850?from_cn_redirect=1">Query Project Security Group Information</a> to query security group details of a certain project.</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>Read-only instance parameter. This parameter is required when you purchase a read-only instance.</p>
                     */
                    RoGroup m_roGroup;
                    bool m_roGroupHasBeenSet;

                    /**
                     * <p>Instance name. When you purchase multiple instances only once, suffix numbers are used for case-sensitive instance naming. For example, instnaceName=db and goodsNum=3, the instance names are db1, db2, and db3 respectively.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Tag information of the instance.</p>
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Placement group ID.</p>
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * <p>String used to ensure request idempotency. This string is generated by the customer and must be unique between different requests within 48 hours, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Instance isolation type.</p><p>Enumeration values:</p><ul><li><p>UNIVERSAL: General-purpose instance</p></li><li><p>EXCLUSIVE: Dedicated instance</p></li><li><p>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</p></li><li><p>CLOUD_NATIVE_CLUSTER_ULTRA: Premium type of cloud disk edition</p></li><li><p>If this parameter is not specified, it defaults to general-purpose instance.</p></li><li><p>Required if you create a cloud disk edition instance.</p></li><li><p>If you create a single-node instance, fill in this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes equal to 1.</p></li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Parameter template ID.<br>Remark: If you use a custom parameter template ID, you can input the custom parameter template ID. If you plan to use the default parameter template, the input ID is invalid and you need to set ParamTemplateType.</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>Array of alarm policy IDs. OriginId returned by the Tencent Cloud observability platform DescribeAlarmPolicy API.</p>
                     */
                    std::vector<int64_t> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                    /**
                     * <p>Number of instance nodes.</p><p>For RO and single-node instances, the default value is 1. To purchase a three-node instance, set this value to 3 or specify the BackupZone parameter. When purchasing a primary instance without specifying this parameter or the BackupZone parameter, the default value is 2, meaning a dual-node instance will be purchased. To purchase a four-node instance, set this value to 4 or specify the FourthZone parameter.</p>
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * <p>Number of Cpu cores of the instance.</p><p>When multiple Cpu configurations exist for the Memory specification (for example, 64000MB Memory corresponds to 8-core/16-core/32-core), the Cpu parameter must be provided.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Whether to automatically initiate disaster recovery sync. This parameter only takes effect when purchasing a disaster recovery instance. Available values are: 0 - Do not automatically initiate disaster recovery sync; 1 - Automatically initiate disaster recovery sync. The default is 0.</p>
                     */
                    int64_t m_autoSyncFlag;
                    bool m_autoSyncFlagHasBeenSet;

                    /**
                     * <p>Financial Enclosure ID.</p>
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * <p>Default parameter template type. Supported values include "HIGH_STABILITY" - HIGH-STABILITY template, "HIGH_PERFORMANCE" - HIGH-PERFORMANCE template.<br>Remark: If you need to use TencentDB for MySQL default parameter template, set up ParamTemplateType.</p>
                     */
                    std::string m_paramTemplateType;
                    bool m_paramTemplateTypeHasBeenSet;

                    /**
                     * <p>Alarm policy name array, such as ["policy-uyoee9wg"]. This parameter is invalid when AlarmPolicyList is not empty.</p>
                     */
                    std::vector<std::string> m_alarmPolicyIdList;
                    bool m_alarmPolicyIdListHasBeenSet;

                    /**
                     * <p>Whether to perform a pre-check only for this request. true: Send a check request without creating an instance. Check items include whether required parameters are filled, request format, and service limit. If the check fails, return the corresponding error code; if the check passes, return RequestId. false: Send a normal request and create an instance directly after the check passes.<br>Default to false.</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>Instance engine type, defaults to "InnoDB". Supported values include "InnoDB" and "RocksDB".</p>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * <p>Specify the IP list of the instance. Only the primary instance is supported. Process by instance sequence. Handle as unspecified if insufficient.</p>
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * <p>The data protection space size of the cloud disk edition instance, in GB, has a setting range of 1 - 10.</p>
                     */
                    int64_t m_dataProtectVolume;
                    bool m_dataProtectVolumeHasBeenSet;

                    /**
                     * <p>Topology configuration of cloud disk edition instance nodes.</p><p>If a cloud disk edition instance is purchased, this parameter is required. Set the topology of RW and RO nodes for the cloud disk edition instance. The node scope of RO nodes is 1-5. Set at least 1 RO node.</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * <p>Disk type. This parameter can be specified for single-node (cloud disk edition) or cloud disk edition instances. CLOUD_SSD means SSD Cloud Block Storage, CLOUD_HSSD means enhanced SSD cloud disk, and CLOUD_PREMIUM means high-performance cloud block storage.<br>Note: The supported regions for hard disk types of single-node (cloud disk edition) and cloud disk edition instances vary slightly. For specific support situation, refer to <a href="https://www.tencentcloud.com/document/product/236/8458?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Turn on or off instance destruction protection. on - turn on, off - turn off.</p>
                     */
                    std::string m_destroyProtect;
                    bool m_destroyProtectHasBeenSet;

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

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEREQUEST_H_
