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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * UpgradeDBInstance request structure.
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     * @return InstanceId <p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     * @param _instanceId <p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
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
                     * 获取<p>Memory size after upgrade, unit: MB. To ensure the validity of the imported Memory value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable memory specifications.<br>Note: If you perform business migration, fill in the instance specification (CPU, memory), otherwise the system will use the minimum allowed specification by default.</p>
                     * @return Memory <p>Memory size after upgrade, unit: MB. To ensure the validity of the imported Memory value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable memory specifications.<br>Note: If you perform business migration, fill in the instance specification (CPU, memory), otherwise the system will use the minimum allowed specification by default.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Memory size after upgrade, unit: MB. To ensure the validity of the imported Memory value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable memory specifications.<br>Note: If you perform business migration, fill in the instance specification (CPU, memory), otherwise the system will use the minimum allowed specification by default.</p>
                     * @param _memory <p>Memory size after upgrade, unit: MB. To ensure the validity of the imported Memory value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable memory specifications.<br>Note: If you perform business migration, fill in the instance specification (CPU, memory), otherwise the system will use the minimum allowed specification by default.</p>
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
                     * 获取<p>Disk size after upgrade, unit: GB. To ensure the validity of the imported Volume value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable disk range.</p>
                     * @return Volume <p>Disk size after upgrade, unit: GB. To ensure the validity of the imported Volume value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable disk range.</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>Disk size after upgrade, unit: GB. To ensure the validity of the imported Volume value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable disk range.</p>
                     * @param _volume <p>Disk size after upgrade, unit: GB. To ensure the validity of the imported Volume value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable disk range.</p>
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
                     * 获取<p>Data replication method. Supported values include: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication. Specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     * @return ProtectMode <p>Data replication method. Supported values include: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication. Specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>Data replication method. Supported values include: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication. Specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     * @param _protectMode <p>Data replication method. Supported values include: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication. Specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
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
                     * 获取<p>Deployment mode, defaults to 0. Supported values include: 0 - single-AZ deployment, 1 - multi-AZ deployment. You can specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     * @return DeployMode <p>Deployment mode, defaults to 0. Supported values include: 0 - single-AZ deployment, 1 - multi-AZ deployment. You can specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置<p>Deployment mode, defaults to 0. Supported values include: 0 - single-AZ deployment, 1 - multi-AZ deployment. You can specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     * @param _deployMode <p>Deployment mode, defaults to 0. Supported values include: 0 - single-AZ deployment, 1 - multi-AZ deployment. You can specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
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
                     * 获取<p>The availability zone information of standby database 1 matches the Zone parameter of the instance by default. You can specify this parameter when upgrading the primary instance to multi-AZ deployment. This parameter is invalid when upgrading a read-only instance or disaster recovery instance. You can query the supported availability zones via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.</p>
                     * @return SlaveZone <p>The availability zone information of standby database 1 matches the Zone parameter of the instance by default. You can specify this parameter when upgrading the primary instance to multi-AZ deployment. This parameter is invalid when upgrading a read-only instance or disaster recovery instance. You can query the supported availability zones via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>The availability zone information of standby database 1 matches the Zone parameter of the instance by default. You can specify this parameter when upgrading the primary instance to multi-AZ deployment. This parameter is invalid when upgrading a read-only instance or disaster recovery instance. You can query the supported availability zones via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.</p>
                     * @param _slaveZone <p>The availability zone information of standby database 1 matches the Zone parameter of the instance by default. You can specify this parameter when upgrading the primary instance to multi-AZ deployment. This parameter is invalid when upgrading a read-only instance or disaster recovery instance. You can query the supported availability zones via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.</p>
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
                     * 获取<p>Database engine version of the primary instance. Supported values include 5.5, 5.6, 5.7, and 8.0.<br>Note: Please use the <a href="https://www.tencentcloud.com/document/api/236/15870?from_cn_redirect=1">UpgradeDBInstanceEngineVersion</a> API to upgrade the database version.</p>
                     * @return EngineVersion <p>Database engine version of the primary instance. Supported values include 5.5, 5.6, 5.7, and 8.0.<br>Note: Please use the <a href="https://www.tencentcloud.com/document/api/236/15870?from_cn_redirect=1">UpgradeDBInstanceEngineVersion</a> API to upgrade the database version.</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>Database engine version of the primary instance. Supported values include 5.5, 5.6, 5.7, and 8.0.<br>Note: Please use the <a href="https://www.tencentcloud.com/document/api/236/15870?from_cn_redirect=1">UpgradeDBInstanceEngineVersion</a> API to upgrade the database version.</p>
                     * @param _engineVersion <p>Database engine version of the primary instance. Supported values include 5.5, 5.6, 5.7, and 8.0.<br>Note: Please use the <a href="https://www.tencentcloud.com/document/api/236/15870?from_cn_redirect=1">UpgradeDBInstanceEngineVersion</a> API to upgrade the database version.</p>
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
                     * 获取<p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch within a time window. When the value is 1, during the upgrade, the process to switch to a new instance will be performed within the time window, or the user can actively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">Switch to a New Instance</a> to trigger the process.</p>
                     * @return WaitSwitch <p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch within a time window. When the value is 1, during the upgrade, the process to switch to a new instance will be performed within the time window, or the user can actively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">Switch to a New Instance</a> to trigger the process.</p>
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置<p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch within a time window. When the value is 1, during the upgrade, the process to switch to a new instance will be performed within the time window, or the user can actively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">Switch to a New Instance</a> to trigger the process.</p>
                     * @param _waitSwitch <p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch within a time window. When the value is 1, during the upgrade, the process to switch to a new instance will be performed within the time window, or the user can actively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">Switch to a New Instance</a> to trigger the process.</p>
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取<p>The availability zone information of standby 2 is empty by default. You can specify this parameter when upgrading the primary instance, but it is invalid when upgrading a read-only instance or disaster recovery instance. Query the supported AZs via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.<br>Remark: To downgrade a three-node instance to a two-node one, set this parameter to empty to achieve it.</p>
                     * @return BackupZone <p>The availability zone information of standby 2 is empty by default. You can specify this parameter when upgrading the primary instance, but it is invalid when upgrading a read-only instance or disaster recovery instance. Query the supported AZs via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.<br>Remark: To downgrade a three-node instance to a two-node one, set this parameter to empty to achieve it.</p>
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置<p>The availability zone information of standby 2 is empty by default. You can specify this parameter when upgrading the primary instance, but it is invalid when upgrading a read-only instance or disaster recovery instance. Query the supported AZs via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.<br>Remark: To downgrade a three-node instance to a two-node one, set this parameter to empty to achieve it.</p>
                     * @param _backupZone <p>The availability zone information of standby 2 is empty by default. You can specify this parameter when upgrading the primary instance, but it is invalid when upgrading a read-only instance or disaster recovery instance. Query the supported AZs via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.<br>Remark: To downgrade a three-node instance to a two-node one, set this parameter to empty to achieve it.</p>
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
                     * 获取<p>Instance type, defaults to master. Supported values include: master - refers to the primary instance, dr - refers to the disaster recovery instance, ro - refers to the read-only instance.</p>
                     * @return InstanceRole <p>Instance type, defaults to master. Supported values include: master - refers to the primary instance, dr - refers to the disaster recovery instance, ro - refers to the read-only instance.</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>Instance type, defaults to master. Supported values include: master - refers to the primary instance, dr - refers to the disaster recovery instance, ro - refers to the read-only instance.</p>
                     * @param _instanceRole <p>Instance type, defaults to master. Supported values include: master - refers to the primary instance, dr - refers to the disaster recovery instance, ro - refers to the read-only instance.</p>
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
                     * 获取<p>Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC" - BASIC edition instance.</p>
                     * @return DeviceType <p>Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC" - BASIC edition instance.</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC" - BASIC edition instance.</p>
                     * @param _deviceType <p>Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC" - BASIC edition instance.</p>
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
                     * 获取<p>Number of cpu cores of the instance after upgrade. If not provided, the system will automatically fill in the minimum allowed specification based on the Memory size specified by Memory.<br>Description: If you need to migrate business, make sure to fill in the instance specification (cpu, Memory). Otherwise, the system will use the minimum allowed specification by default.</p>
                     * @return Cpu <p>Number of cpu cores of the instance after upgrade. If not provided, the system will automatically fill in the minimum allowed specification based on the Memory size specified by Memory.<br>Description: If you need to migrate business, make sure to fill in the instance specification (cpu, Memory). Otherwise, the system will use the minimum allowed specification by default.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Number of cpu cores of the instance after upgrade. If not provided, the system will automatically fill in the minimum allowed specification based on the Memory size specified by Memory.<br>Description: If you need to migrate business, make sure to fill in the instance specification (cpu, Memory). Otherwise, the system will use the minimum allowed specification by default.</p>
                     * @param _cpu <p>Number of cpu cores of the instance after upgrade. If not provided, the system will automatically fill in the minimum allowed specification based on the Memory size specified by Memory.<br>Description: If you need to migrate business, make sure to fill in the instance specification (cpu, Memory). Otherwise, the system will use the minimum allowed specification by default.</p>
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
                     * 获取<p>Whether to perform Rapid Configuration Change. 0-Normal upgrade, 1-Rapid Configuration Change, 2-Precedence to rapid change. Selecting Rapid Configuration Change will validate whether it is possible to perform ultra-fast reconfiguration based on resource status. If conditions are met, ultra-fast reconfiguration will be performed; otherwise, error information will be returned.</p>
                     * @return FastUpgrade <p>Whether to perform Rapid Configuration Change. 0-Normal upgrade, 1-Rapid Configuration Change, 2-Precedence to rapid change. Selecting Rapid Configuration Change will validate whether it is possible to perform ultra-fast reconfiguration based on resource status. If conditions are met, ultra-fast reconfiguration will be performed; otherwise, error information will be returned.</p>
                     * 
                     */
                    int64_t GetFastUpgrade() const;

                    /**
                     * 设置<p>Whether to perform Rapid Configuration Change. 0-Normal upgrade, 1-Rapid Configuration Change, 2-Precedence to rapid change. Selecting Rapid Configuration Change will validate whether it is possible to perform ultra-fast reconfiguration based on resource status. If conditions are met, ultra-fast reconfiguration will be performed; otherwise, error information will be returned.</p>
                     * @param _fastUpgrade <p>Whether to perform Rapid Configuration Change. 0-Normal upgrade, 1-Rapid Configuration Change, 2-Precedence to rapid change. Selecting Rapid Configuration Change will validate whether it is possible to perform ultra-fast reconfiguration based on resource status. If conditions are met, ultra-fast reconfiguration will be performed; otherwise, error information will be returned.</p>
                     * 
                     */
                    void SetFastUpgrade(const int64_t& _fastUpgrade);

                    /**
                     * 判断参数 FastUpgrade 是否已赋值
                     * @return FastUpgrade 是否已赋值
                     * 
                     */
                    bool FastUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>Delay threshold. Value ranges from 1 to 10, default value is 10.</p>
                     * @return MaxDelayTime <p>Delay threshold. Value ranges from 1 to 10, default value is 10.</p>
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置<p>Delay threshold. Value ranges from 1 to 10, default value is 10.</p>
                     * @param _maxDelayTime <p>Delay threshold. Value ranges from 1 to 10, default value is 10.</p>
                     * 
                     */
                    void SetMaxDelayTime(const int64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform cross-region migration. 0 - ordinary migration, 1 - cross-region migration, default value is 0. When set to 1, it supports changes to the primary node availability zone of the instance.</p>
                     * @return CrossCluster <p>Whether to perform cross-region migration. 0 - ordinary migration, 1 - cross-region migration, default value is 0. When set to 1, it supports changes to the primary node availability zone of the instance.</p>
                     * 
                     */
                    int64_t GetCrossCluster() const;

                    /**
                     * 设置<p>Whether to perform cross-region migration. 0 - ordinary migration, 1 - cross-region migration, default value is 0. When set to 1, it supports changes to the primary node availability zone of the instance.</p>
                     * @param _crossCluster <p>Whether to perform cross-region migration. 0 - ordinary migration, 1 - cross-region migration, default value is 0. When set to 1, it supports changes to the primary node availability zone of the instance.</p>
                     * 
                     */
                    void SetCrossCluster(const int64_t& _crossCluster);

                    /**
                     * 判断参数 CrossCluster 是否已赋值
                     * @return CrossCluster 是否已赋值
                     * 
                     */
                    bool CrossClusterHasBeenSet() const;

                    /**
                     * 获取<p>Primary node availability zone. This parameter is valid only when cross-AZ migration. You can only migrate in the same region.</p>
                     * @return ZoneId <p>Primary node availability zone. This parameter is valid only when cross-AZ migration. You can only migrate in the same region.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Primary node availability zone. This parameter is valid only when cross-AZ migration. You can only migrate in the same region.</p>
                     * @param _zoneId <p>Primary node availability zone. This parameter is valid only when cross-AZ migration. You can only migrate in the same region.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>For cross-cluster migration scenarios, select the processing logic for intra-AZ read-only instances. together-intra-AZ read-only instances migrate with the primary instance to the target availability zone (default option), severally-intra-AZ read-only instances maintain the original deployment mode and do not move to the target availability zone.</p>
                     * @return RoTransType <p>For cross-cluster migration scenarios, select the processing logic for intra-AZ read-only instances. together-intra-AZ read-only instances migrate with the primary instance to the target availability zone (default option), severally-intra-AZ read-only instances maintain the original deployment mode and do not move to the target availability zone.</p>
                     * 
                     */
                    std::string GetRoTransType() const;

                    /**
                     * 设置<p>For cross-cluster migration scenarios, select the processing logic for intra-AZ read-only instances. together-intra-AZ read-only instances migrate with the primary instance to the target availability zone (default option), severally-intra-AZ read-only instances maintain the original deployment mode and do not move to the target availability zone.</p>
                     * @param _roTransType <p>For cross-cluster migration scenarios, select the processing logic for intra-AZ read-only instances. together-intra-AZ read-only instances migrate with the primary instance to the target availability zone (default option), severally-intra-AZ read-only instances maintain the original deployment mode and do not move to the target availability zone.</p>
                     * 
                     */
                    void SetRoTransType(const std::string& _roTransType);

                    /**
                     * 判断参数 RoTransType 是否已赋值
                     * @return RoTransType 是否已赋值
                     * 
                     */
                    bool RoTransTypeHasBeenSet() const;

                    /**
                     * 获取<p>Topology configuration of cloud disk edition nodes.</p>
                     * @return ClusterTopology <p>Topology configuration of cloud disk edition nodes.</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>Topology configuration of cloud disk edition nodes.</p>
                     * @param _clusterTopology <p>Topology configuration of cloud disk edition nodes.</p>
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
                     * 获取<p>Check whether in-place upgrade requires restart. 1-Check, 0-Do not check. If the value is 1 and the check shows that in-place upgrade must be restarted, the upgrade will be stopped and a notification will be returned. If in-place upgrade does not require restart, the upgrade process will proceed normally.</p>
                     * @return CheckFastUpgradeReboot <p>Check whether in-place upgrade requires restart. 1-Check, 0-Do not check. If the value is 1 and the check shows that in-place upgrade must be restarted, the upgrade will be stopped and a notification will be returned. If in-place upgrade does not require restart, the upgrade process will proceed normally.</p>
                     * 
                     */
                    int64_t GetCheckFastUpgradeReboot() const;

                    /**
                     * 设置<p>Check whether in-place upgrade requires restart. 1-Check, 0-Do not check. If the value is 1 and the check shows that in-place upgrade must be restarted, the upgrade will be stopped and a notification will be returned. If in-place upgrade does not require restart, the upgrade process will proceed normally.</p>
                     * @param _checkFastUpgradeReboot <p>Check whether in-place upgrade requires restart. 1-Check, 0-Do not check. If the value is 1 and the check shows that in-place upgrade must be restarted, the upgrade will be stopped and a notification will be returned. If in-place upgrade does not require restart, the upgrade process will proceed normally.</p>
                     * 
                     */
                    void SetCheckFastUpgradeReboot(const int64_t& _checkFastUpgradeReboot);

                    /**
                     * 判断参数 CheckFastUpgradeReboot 是否已赋值
                     * @return CheckFastUpgradeReboot 是否已赋值
                     * 
                     */
                    bool CheckFastUpgradeRebootHasBeenSet() const;

                    /**
                     * 获取<p>Data validation sensitivity. This parameter is used for non-Rapid Configuration Change scenarios. Sensitivity is calculated based on current instance specifications to determine cpu resource usage for data comparison during the migration process. Corresponding options are: "high", "normal", "low", empty by default. Parameter explanation: "high": Corresponds to high in the console, not recommended when database load is too high. "normal": Corresponds to standard in the console. "low": Corresponds to low in the console.</p>
                     * @return DataCheckSensitive <p>Data validation sensitivity. This parameter is used for non-Rapid Configuration Change scenarios. Sensitivity is calculated based on current instance specifications to determine cpu resource usage for data comparison during the migration process. Corresponding options are: "high", "normal", "low", empty by default. Parameter explanation: "high": Corresponds to high in the console, not recommended when database load is too high. "normal": Corresponds to standard in the console. "low": Corresponds to low in the console.</p>
                     * 
                     */
                    std::string GetDataCheckSensitive() const;

                    /**
                     * 设置<p>Data validation sensitivity. This parameter is used for non-Rapid Configuration Change scenarios. Sensitivity is calculated based on current instance specifications to determine cpu resource usage for data comparison during the migration process. Corresponding options are: "high", "normal", "low", empty by default. Parameter explanation: "high": Corresponds to high in the console, not recommended when database load is too high. "normal": Corresponds to standard in the console. "low": Corresponds to low in the console.</p>
                     * @param _dataCheckSensitive <p>Data validation sensitivity. This parameter is used for non-Rapid Configuration Change scenarios. Sensitivity is calculated based on current instance specifications to determine cpu resource usage for data comparison during the migration process. Corresponding options are: "high", "normal", "low", empty by default. Parameter explanation: "high": Corresponds to high in the console, not recommended when database load is too high. "normal": Corresponds to standard in the console. "low": Corresponds to low in the console.</p>
                     * 
                     */
                    void SetDataCheckSensitive(const std::string& _dataCheckSensitive);

                    /**
                     * 判断参数 DataCheckSensitive 是否已赋值
                     * @return DataCheckSensitive 是否已赋值
                     * 
                     */
                    bool DataCheckSensitiveHasBeenSet() const;

                    /**
                     * 获取<p>AZ information of standby database 3 is empty by default. You can specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     * @return FourthZone <p>AZ information of standby database 3 is empty by default. You can specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     * 
                     */
                    std::string GetFourthZone() const;

                    /**
                     * 设置<p>AZ information of standby database 3 is empty by default. You can specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     * @param _fourthZone <p>AZ information of standby database 3 is empty by default. You can specify this parameter when you proceed to purchase a four-node primary instance.</p>
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
                     * <p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Memory size after upgrade, unit: MB. To ensure the validity of the imported Memory value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable memory specifications.<br>Note: If you perform business migration, fill in the instance specification (CPU, memory), otherwise the system will use the minimum allowed specification by default.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Disk size after upgrade, unit: GB. To ensure the validity of the imported Volume value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the upgradeable disk range.</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Data replication method. Supported values include: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication. Specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>Deployment mode, defaults to 0. Supported values include: 0 - single-AZ deployment, 1 - multi-AZ deployment. You can specify this parameter when upgrading the primary instance. This parameter is invalid when upgrading a read-only instance or disaster recovery instance.</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>The availability zone information of standby database 1 matches the Zone parameter of the instance by default. You can specify this parameter when upgrading the primary instance to multi-AZ deployment. This parameter is invalid when upgrading a read-only instance or disaster recovery instance. You can query the supported availability zones via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>Database engine version of the primary instance. Supported values include 5.5, 5.6, 5.7, and 8.0.<br>Note: Please use the <a href="https://www.tencentcloud.com/document/api/236/15870?from_cn_redirect=1">UpgradeDBInstanceEngineVersion</a> API to upgrade the database version.</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch within a time window. When the value is 1, during the upgrade, the process to switch to a new instance will be performed within the time window, or the user can actively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">Switch to a New Instance</a> to trigger the process.</p>
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * <p>The availability zone information of standby 2 is empty by default. You can specify this parameter when upgrading the primary instance, but it is invalid when upgrading a read-only instance or disaster recovery instance. Query the supported AZs via the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API.<br>Remark: To downgrade a three-node instance to a two-node one, set this parameter to empty to achieve it.</p>
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * <p>Instance type, defaults to master. Supported values include: master - refers to the primary instance, dr - refers to the disaster recovery instance, ro - refers to the read-only instance.</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>Instance isolation type. Supported values include "UNIVERSAL" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "BASIC" - BASIC edition instance.</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Number of cpu cores of the instance after upgrade. If not provided, the system will automatically fill in the minimum allowed specification based on the Memory size specified by Memory.<br>Description: If you need to migrate business, make sure to fill in the instance specification (cpu, Memory). Otherwise, the system will use the minimum allowed specification by default.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Whether to perform Rapid Configuration Change. 0-Normal upgrade, 1-Rapid Configuration Change, 2-Precedence to rapid change. Selecting Rapid Configuration Change will validate whether it is possible to perform ultra-fast reconfiguration based on resource status. If conditions are met, ultra-fast reconfiguration will be performed; otherwise, error information will be returned.</p>
                     */
                    int64_t m_fastUpgrade;
                    bool m_fastUpgradeHasBeenSet;

                    /**
                     * <p>Delay threshold. Value ranges from 1 to 10, default value is 10.</p>
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * <p>Whether to perform cross-region migration. 0 - ordinary migration, 1 - cross-region migration, default value is 0. When set to 1, it supports changes to the primary node availability zone of the instance.</p>
                     */
                    int64_t m_crossCluster;
                    bool m_crossClusterHasBeenSet;

                    /**
                     * <p>Primary node availability zone. This parameter is valid only when cross-AZ migration. You can only migrate in the same region.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>For cross-cluster migration scenarios, select the processing logic for intra-AZ read-only instances. together-intra-AZ read-only instances migrate with the primary instance to the target availability zone (default option), severally-intra-AZ read-only instances maintain the original deployment mode and do not move to the target availability zone.</p>
                     */
                    std::string m_roTransType;
                    bool m_roTransTypeHasBeenSet;

                    /**
                     * <p>Topology configuration of cloud disk edition nodes.</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * <p>Check whether in-place upgrade requires restart. 1-Check, 0-Do not check. If the value is 1 and the check shows that in-place upgrade must be restarted, the upgrade will be stopped and a notification will be returned. If in-place upgrade does not require restart, the upgrade process will proceed normally.</p>
                     */
                    int64_t m_checkFastUpgradeReboot;
                    bool m_checkFastUpgradeRebootHasBeenSet;

                    /**
                     * <p>Data validation sensitivity. This parameter is used for non-Rapid Configuration Change scenarios. Sensitivity is calculated based on current instance specifications to determine cpu resource usage for data comparison during the migration process. Corresponding options are: "high", "normal", "low", empty by default. Parameter explanation: "high": Corresponds to high in the console, not recommended when database load is too high. "normal": Corresponds to standard in the console. "low": Corresponds to low in the console.</p>
                     */
                    std::string m_dataCheckSensitive;
                    bool m_dataCheckSensitiveHasBeenSet;

                    /**
                     * <p>AZ information of standby database 3 is empty by default. You can specify this parameter when you proceed to purchase a four-node primary instance.</p>
                     */
                    std::string m_fourthZone;
                    bool m_fourthZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_
