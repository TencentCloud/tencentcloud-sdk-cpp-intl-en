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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取Instance ID in the format of `cdb-c1nl9rpv` or `cdbro-c1nl9rpv`. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @return InstanceId Instance ID in the format of `cdb-c1nl9rpv` or `cdbro-c1nl9rpv`. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of `cdb-c1nl9rpv` or `cdbro-c1nl9rpv`. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @param InstanceId Instance ID in the format of `cdb-c1nl9rpv` or `cdbro-c1nl9rpv`. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Memory size in MB after upgrade. To ensure that the `Memory` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the memory that can be upgraded to.
                     * @return Memory Memory size in MB after upgrade. To ensure that the `Memory` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the memory that can be upgraded to.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in MB after upgrade. To ensure that the `Memory` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the memory that can be upgraded to.
                     * @param Memory Memory size in MB after upgrade. To ensure that the `Memory` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the memory that can be upgraded to.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Disk size in GB after upgrade. To ensure that the `Volume` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the disk that can be upgraded to.
                     * @return Volume Disk size in GB after upgrade. To ensure that the `Volume` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the disk that can be upgraded to.
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Disk size in GB after upgrade. To ensure that the `Volume` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the disk that can be upgraded to.
                     * @param Volume Disk size in GB after upgrade. To ensure that the `Volume` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the disk that can be upgraded to.
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     * @return ProtectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     * @param ProtectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取Deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     * @return DeployMode Deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置Deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     * @param DeployMode Deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取AZ information of slave database 1, which is the `Zone` value of the instance by default. This parameter can be specified when upgrading master instances in multi-AZ mode and is meaningless for read-only or disaster recovery instances. You can use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the supported AZs.
                     * @return SlaveZone AZ information of slave database 1, which is the `Zone` value of the instance by default. This parameter can be specified when upgrading master instances in multi-AZ mode and is meaningless for read-only or disaster recovery instances. You can use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the supported AZs.
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置AZ information of slave database 1, which is the `Zone` value of the instance by default. This parameter can be specified when upgrading master instances in multi-AZ mode and is meaningless for read-only or disaster recovery instances. You can use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the supported AZs.
                     * @param SlaveZone AZ information of slave database 1, which is the `Zone` value of the instance by default. This parameter can be specified when upgrading master instances in multi-AZ mode and is meaningless for read-only or disaster recovery instances. You can use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the supported AZs.
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取Version of master instance database engine. Valid values: 5.5, 5.6, 5.7.
                     * @return EngineVersion Version of master instance database engine. Valid values: 5.5, 5.6, 5.7.
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Version of master instance database engine. Valid values: 5.5, 5.6, 5.7.
                     * @param EngineVersion Version of master instance database engine. Valid values: 5.5, 5.6, 5.7.
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Mode of switch to new instance. Valid values: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [SwitchForUpgrade](https://cloud.tencent.com/document/product/236/15864) API to trigger the process.
                     * @return WaitSwitch Mode of switch to new instance. Valid values: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [SwitchForUpgrade](https://cloud.tencent.com/document/product/236/15864) API to trigger the process.
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置Mode of switch to new instance. Valid values: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [SwitchForUpgrade](https://cloud.tencent.com/document/product/236/15864) API to trigger the process.
                     * @param WaitSwitch Mode of switch to new instance. Valid values: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [SwitchForUpgrade](https://cloud.tencent.com/document/product/236/15864) API to trigger the process.
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取AZ information of slave database 2, which is empty by default. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     * @return BackupZone AZ information of slave database 2, which is empty by default. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置AZ information of slave database 2, which is empty by default. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     * @param BackupZone AZ information of slave database 2, which is empty by default. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    void SetBackupZone(const std::string& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     */
                    bool BackupZoneHasBeenSet() const;

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

                private:

                    /**
                     * Instance ID in the format of `cdb-c1nl9rpv` or `cdbro-c1nl9rpv`. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Memory size in MB after upgrade. To ensure that the `Memory` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the memory that can be upgraded to.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk size in GB after upgrade. To ensure that the `Volume` value to be passed in is valid, please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the specifications of the disk that can be upgraded to.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync). This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ). Default value: 0. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * AZ information of slave database 1, which is the `Zone` value of the instance by default. This parameter can be specified when upgrading master instances in multi-AZ mode and is meaningless for read-only or disaster recovery instances. You can use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/product/236/17229) API to query the supported AZs.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * Version of master instance database engine. Valid values: 5.5, 5.6, 5.7.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Mode of switch to new instance. Valid values: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [SwitchForUpgrade](https://cloud.tencent.com/document/product/236/15864) API to trigger the process.
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * AZ information of slave database 2, which is empty by default. This parameter can be specified when upgrading master instances and is meaningless for read-only or disaster recovery instances.
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * Instance type. Valid values: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_
