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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoVipInfo.h>
#include <tencentcloud/cdb/v20170320/model/SlaveInfo.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>
#include <tencentcloud/cdb/v20170320/model/MasterInfo.h>
#include <tencentcloud/cdb/v20170320/model/DrInfo.h>
#include <tencentcloud/cdb/v20170320/model/TagInfoItem.h>
#include <tencentcloud/cdb/v20170320/model/ClusterInfo.h>
#include <tencentcloud/cdb/v20170320/model/AnalysisNodeInfo.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeAnalysisInstanceVersionInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Public network status. Possible returned values: 0 - External network not enabled; 1 - Public network enabled; 2 - Public network disabled</p>
                     * @return WanStatus <p>Public network status. Possible returned values: 0 - External network not enabled; 1 - Public network enabled; 2 - Public network disabled</p>
                     * 
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 设置<p>Public network status. Possible returned values: 0 - External network not enabled; 1 - Public network enabled; 2 - Public network disabled</p>
                     * @param _wanStatus <p>Public network status. Possible returned values: 0 - External network not enabled; 1 - Public network enabled; 2 - Public network disabled</p>
                     * 
                     */
                    void SetWanStatus(const int64_t& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取<p>AZ information</p>
                     * @return Zone <p>AZ information</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ information</p>
                     * @param _zone <p>AZ information</p>
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
                     * 获取<p>Initialization flag. Possible returned values: 0 - uninitialized; 1 - initialized.</p>
                     * @return InitFlag <p>Initialization flag. Possible returned values: 0 - uninitialized; 1 - initialized.</p>
                     * 
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置<p>Initialization flag. Possible returned values: 0 - uninitialized; 1 - initialized.</p>
                     * @param _initFlag <p>Initialization flag. Possible returned values: 0 - uninitialized; 1 - initialized.</p>
                     * 
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     * 
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取<p>Read-only vip information. This field is available only for read-only instances with separate instance access enabled.</p>
                     * @return RoVipInfo <p>Read-only vip information. This field is available only for read-only instances with separate instance access enabled.</p>
                     * 
                     */
                    RoVipInfo GetRoVipInfo() const;

                    /**
                     * 设置<p>Read-only vip information. This field is available only for read-only instances with separate instance access enabled.</p>
                     * @param _roVipInfo <p>Read-only vip information. This field is available only for read-only instances with separate instance access enabled.</p>
                     * 
                     */
                    void SetRoVipInfo(const RoVipInfo& _roVipInfo);

                    /**
                     * 判断参数 RoVipInfo 是否已赋值
                     * @return RoVipInfo 是否已赋值
                     * 
                     */
                    bool RoVipInfoHasBeenSet() const;

                    /**
                     * 获取<p>Memory capacity, in MB.</p>
                     * @return Memory <p>Memory capacity, in MB.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Memory capacity, in MB.</p>
                     * @param _memory <p>Memory capacity, in MB.</p>
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
                     * 获取<p>Instance status. Valid values: 0: creating; 1: running; 4: isolation operation in progress; 5: isolated.</p>
                     * @return Status <p>Instance status. Valid values: 0: creating; 1: running; 4: isolation operation in progress; 5: isolated.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Instance status. Valid values: 0: creating; 1: running; 4: isolation operation in progress; 5: isolated.</p>
                     * @param _status <p>Instance status. Valid values: 0: creating; 1: running; 4: isolation operation in progress; 5: isolated.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID, for example: 51102</p>
                     * @return VpcId <p>VPC ID, for example: 51102</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>VPC ID, for example: 51102</p>
                     * @param _vpcId <p>VPC ID, for example: 51102</p>
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Secondary server information</p>
                     * @return SlaveInfo <p>Secondary server information</p>
                     * 
                     */
                    SlaveInfo GetSlaveInfo() const;

                    /**
                     * 设置<p>Secondary server information</p>
                     * @param _slaveInfo <p>Secondary server information</p>
                     * 
                     */
                    void SetSlaveInfo(const SlaveInfo& _slaveInfo);

                    /**
                     * 判断参数 SlaveInfo 是否已赋值
                     * @return SlaveInfo 是否已赋值
                     * 
                     */
                    bool SlaveInfoHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
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
                     * 获取<p>Disk capacity, in GB.</p>
                     * @return Volume <p>Disk capacity, in GB.</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>Disk capacity, in GB.</p>
                     * @param _volume <p>Disk capacity, in GB.</p>
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
                     * 获取<p>Auto-renewal flag. Possible returned values: 0 - auto-renewal is not enabled; 1 - auto-renewal is enabled; 2 - automatic renewal is disabled.</p>
                     * @return AutoRenew <p>Auto-renewal flag. Possible returned values: 0 - auto-renewal is not enabled; 1 - auto-renewal is enabled; 2 - automatic renewal is disabled.</p>
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置<p>Auto-renewal flag. Possible returned values: 0 - auto-renewal is not enabled; 1 - auto-renewal is enabled; 2 - automatic renewal is disabled.</p>
                     * @param _autoRenew <p>Auto-renewal flag. Possible returned values: 0 - auto-renewal is not enabled; 1 - auto-renewal is enabled; 2 - automatic renewal is disabled.</p>
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Data replication mode. 0 - async replication; 1 - semi-sync replication; 2 - strong sync replication</p>
                     * @return ProtectMode <p>Data replication mode. 0 - async replication; 1 - semi-sync replication; 2 - strong sync replication</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>Data replication mode. 0 - async replication; 1 - semi-sync replication; 2 - strong sync replication</p>
                     * @param _protectMode <p>Data replication mode. 0 - async replication; 1 - semi-sync replication; 2 - strong sync replication</p>
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
                     * 获取<p>Read-only group detailed information</p>
                     * @return RoGroups <p>Read-only group detailed information</p>
                     * 
                     */
                    std::vector<RoGroup> GetRoGroups() const;

                    /**
                     * 设置<p>Read-only group detailed information</p>
                     * @param _roGroups <p>Read-only group detailed information</p>
                     * 
                     */
                    void SetRoGroups(const std::vector<RoGroup>& _roGroups);

                    /**
                     * 判断参数 RoGroups 是否已赋值
                     * @return RoGroups 是否已赋值
                     * 
                     */
                    bool RoGroupsHasBeenSet() const;

                    /**
                     * 获取<p>Subnet ID, for example: 2333</p>
                     * @return SubnetId <p>Subnet ID, for example: 2333</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID, for example: 2333</p>
                     * @param _subnetId <p>Subnet ID, for example: 2333</p>
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance type. Possible returned values: 1 - Primary instance; 2 - Disaster recovery instance; 3 - Read-only instance.</p>
                     * @return InstanceType <p>Instance type. Possible returned values: 1 - Primary instance; 2 - Disaster recovery instance; 3 - Read-only instance.</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>Instance type. Possible returned values: 1 - Primary instance; 2 - Disaster recovery instance; 3 - Read-only instance.</p>
                     * @param _instanceType <p>Instance type. Possible returned values: 1 - Primary instance; 2 - Disaster recovery instance; 3 - Read-only instance.</p>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
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
                     * 获取<p>Regional information</p>
                     * @return Region <p>Regional information</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Regional information</p>
                     * @param _region <p>Regional information</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Instance expiration time</p>
                     * @return DeadlineTime <p>Instance expiration time</p>
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>Instance expiration time</p>
                     * @param _deadlineTime <p>Instance expiration time</p>
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取<p>Availability Zone Deployment method. Valid values: 0 - single availability zone; 1 - multi-availability zone.</p>
                     * @return DeployMode <p>Availability Zone Deployment method. Valid values: 0 - single availability zone; 1 - multi-availability zone.</p>
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置<p>Availability Zone Deployment method. Valid values: 0 - single availability zone; 1 - multi-availability zone.</p>
                     * @param _deployMode <p>Availability Zone Deployment method. Valid values: 0 - single availability zone; 1 - multi-availability zone.</p>
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
                     * 获取<p>Instance task status. 0 - No tasks, 1 - Upgrading, 2 - Data import, 3 - Opening Slave, 4 - Public network access enabling, 5 - Batch operation executing, 6 - Rolling back, 7 - Public network access disabling, 8 - Password modification, 9 - Renaming instance, 10 - Restarting, 12 - Self-built migration, 13 - Database deletion, 14 - Disaster recovery instance creation sync, 15 - Upgrade pending switch, 16 - Upgrade and switch, 17 - Upgrade and switch completed</p>
                     * @return TaskStatus <p>Instance task status. 0 - No tasks, 1 - Upgrading, 2 - Data import, 3 - Opening Slave, 4 - Public network access enabling, 5 - Batch operation executing, 6 - Rolling back, 7 - Public network access disabling, 8 - Password modification, 9 - Renaming instance, 10 - Restarting, 12 - Self-built migration, 13 - Database deletion, 14 - Disaster recovery instance creation sync, 15 - Upgrade pending switch, 16 - Upgrade and switch, 17 - Upgrade and switch completed</p>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置<p>Instance task status. 0 - No tasks, 1 - Upgrading, 2 - Data import, 3 - Opening Slave, 4 - Public network access enabling, 5 - Batch operation executing, 6 - Rolling back, 7 - Public network access disabling, 8 - Password modification, 9 - Renaming instance, 10 - Restarting, 12 - Self-built migration, 13 - Database deletion, 14 - Disaster recovery instance creation sync, 15 - Upgrade pending switch, 16 - Upgrade and switch, 17 - Upgrade and switch completed</p>
                     * @param _taskStatus <p>Instance task status. 0 - No tasks, 1 - Upgrading, 2 - Data import, 3 - Opening Slave, 4 - Public network access enabling, 5 - Batch operation executing, 6 - Rolling back, 7 - Public network access disabling, 8 - Password modification, 9 - Renaming instance, 10 - Restarting, 12 - Self-built migration, 13 - Database deletion, 14 - Disaster recovery instance creation sync, 15 - Upgrade pending switch, 16 - Upgrade and switch, 17 - Upgrade and switch completed</p>
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>Detailed information about the primary instance.</p>
                     * @return MasterInfo <p>Detailed information about the primary instance.</p>
                     * 
                     */
                    MasterInfo GetMasterInfo() const;

                    /**
                     * 设置<p>Detailed information about the primary instance.</p>
                     * @param _masterInfo <p>Detailed information about the primary instance.</p>
                     * 
                     */
                    void SetMasterInfo(const MasterInfo& _masterInfo);

                    /**
                     * 判断参数 MasterInfo 是否已赋值
                     * @return MasterInfo 是否已赋值
                     * 
                     */
                    bool MasterInfoHasBeenSet() const;

                    /**
                     * 获取<p>Instance type</p>
                     * @return DeviceType <p>Instance type</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance type</p>
                     * @param _deviceType <p>Instance type</p>
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
                     * 获取<p>Kernel version</p>
                     * @return EngineVersion <p>Kernel version</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>Kernel version</p>
                     * @param _engineVersion <p>Kernel version</p>
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
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
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
                     * 获取<p>Disaster recovery instance details</p>
                     * @return DrInfo <p>Disaster recovery instance details</p>
                     * 
                     */
                    std::vector<DrInfo> GetDrInfo() const;

                    /**
                     * 设置<p>Disaster recovery instance details</p>
                     * @param _drInfo <p>Disaster recovery instance details</p>
                     * 
                     */
                    void SetDrInfo(const std::vector<DrInfo>& _drInfo);

                    /**
                     * 判断参数 DrInfo 是否已赋值
                     * @return DrInfo 是否已赋值
                     * 
                     */
                    bool DrInfoHasBeenSet() const;

                    /**
                     * 获取<p>public network domain name</p>
                     * @return WanDomain <p>public network domain name</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>public network domain name</p>
                     * @param _wanDomain <p>public network domain name</p>
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取<p>Public network port number</p>
                     * @return WanPort <p>Public network port number</p>
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置<p>Public network port number</p>
                     * @param _wanPort <p>Public network port number</p>
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Billing type
                     * @return PayType Billing type
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Billing type
                     * @param _payType Billing type
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance creation time</p>
                     * @return CreateTime <p>Instance creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Instance creation time</p>
                     * @param _createTime <p>Instance creation time</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance IP</p>
                     * @return Vip <p>Instance IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Instance IP</p>
                     * @param _vip <p>Instance IP</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Port number</p>
                     * @return Vport <p>Port number</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Port number</p>
                     * @param _vport <p>Port number</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>Whether disk write is locked (data write volume of the instance exceeds disk quota). 0 - Unlocked 1 - Locked</p>
                     * @return CdbError <p>Whether disk write is locked (data write volume of the instance exceeds disk quota). 0 - Unlocked 1 - Locked</p>
                     * 
                     */
                    int64_t GetCdbError() const;

                    /**
                     * 设置<p>Whether disk write is locked (data write volume of the instance exceeds disk quota). 0 - Unlocked 1 - Locked</p>
                     * @param _cdbError <p>Whether disk write is locked (data write volume of the instance exceeds disk quota). 0 - Unlocked 1 - Locked</p>
                     * 
                     */
                    void SetCdbError(const int64_t& _cdbError);

                    /**
                     * 判断参数 CdbError 是否已赋值
                     * @return CdbError 是否已赋值
                     * 
                     */
                    bool CdbErrorHasBeenSet() const;

                    /**
                     * 获取<p>Private network descriptor, for example: "vpc-5v8wn9mg"</p>
                     * @return UniqVpcId <p>Private network descriptor, for example: "vpc-5v8wn9mg"</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>Private network descriptor, for example: "vpc-5v8wn9mg"</p>
                     * @param _uniqVpcId <p>Private network descriptor, for example: "vpc-5v8wn9mg"</p>
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
                     * 获取<p>Subnet descriptor, such as "subnet-1typ0s7d"</p>
                     * @return UniqSubnetId <p>Subnet descriptor, such as "subnet-1typ0s7d"</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>Subnet descriptor, such as "subnet-1typ0s7d"</p>
                     * @param _uniqSubnetId <p>Subnet descriptor, such as "subnet-1typ0s7d"</p>
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
                     * 获取<p>Physical ID</p>
                     * @return PhysicalId <p>Physical ID</p>
                     * 
                     */
                    std::string GetPhysicalId() const;

                    /**
                     * 设置<p>Physical ID</p>
                     * @param _physicalId <p>Physical ID</p>
                     * 
                     */
                    void SetPhysicalId(const std::string& _physicalId);

                    /**
                     * 判断参数 PhysicalId 是否已赋值
                     * @return PhysicalId 是否已赋值
                     * 
                     */
                    bool PhysicalIdHasBeenSet() const;

                    /**
                     * 获取<p>Core count</p>
                     * @return Cpu <p>Core count</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Core count</p>
                     * @param _cpu <p>Core count</p>
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
                     * 获取<p>Queries per second.</p>
                     * @return Qps <p>Queries per second.</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置<p>Queries per second.</p>
                     * @param _qps <p>Queries per second.</p>
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取<p>Chinese Name of Availability Zone</p>
                     * @return ZoneName <p>Chinese Name of Availability Zone</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>Chinese Name of Availability Zone</p>
                     * @param _zoneName <p>Chinese Name of Availability Zone</p>
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取<p>Physical machine model</p>
                     * @return DeviceClass <p>Physical machine model</p>
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置<p>Physical machine model</p>
                     * @param _deviceClass <p>Physical machine model</p>
                     * 
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     * 
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取<p>Placement group ID</p>
                     * @return DeployGroupId <p>Placement group ID</p>
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置<p>Placement group ID</p>
                     * @param _deployGroupId <p>Placement group ID</p>
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
                     * 获取<p>Availability zone ID</p>
                     * @return ZoneId <p>Availability zone ID</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>Availability zone ID</p>
                     * @param _zoneId <p>Availability zone ID</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of nodes</p>
                     * @return InstanceNodes <p>Number of nodes</p>
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置<p>Number of nodes</p>
                     * @param _instanceNodes <p>Number of nodes</p>
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
                     * 获取<p>Tag list</p>
                     * @return TagList <p>Tag list</p>
                     * 
                     */
                    std::vector<TagInfoItem> GetTagList() const;

                    /**
                     * 设置<p>Tag list</p>
                     * @param _tagList <p>Tag list</p>
                     * 
                     */
                    void SetTagList(const std::vector<TagInfoItem>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Engine type</p>
                     * @return EngineType <p>Engine type</p>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>Engine type</p>
                     * @param _engineType <p>Engine type</p>
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
                     * 获取<p>Maximum delay threshold</p>
                     * @return MaxDelayTime <p>Maximum delay threshold</p>
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置<p>Maximum delay threshold</p>
                     * @param _maxDelayTime <p>Maximum delay threshold</p>
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
                     * 获取<p>Instance disk type. Only CLOUD disk edition and single-node (CLOUD disk) instances will return a valid value.<br>Description:</p><ol><li>If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is enhanced SSD CLOUD disk.</li><li>If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is SSD CLOUD Block Storage.</li><li>If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it means that the instance uses local SSD.</li></ol>
                     * @return DiskType <p>Instance disk type. Only CLOUD disk edition and single-node (CLOUD disk) instances will return a valid value.<br>Description:</p><ol><li>If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is enhanced SSD CLOUD disk.</li><li>If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is SSD CLOUD Block Storage.</li><li>If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it means that the instance uses local SSD.</li></ol>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Instance disk type. Only CLOUD disk edition and single-node (CLOUD disk) instances will return a valid value.<br>Description:</p><ol><li>If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is enhanced SSD CLOUD disk.</li><li>If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is SSD CLOUD Block Storage.</li><li>If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it means that the instance uses local SSD.</li></ol>
                     * @param _diskType <p>Instance disk type. Only CLOUD disk edition and single-node (CLOUD disk) instances will return a valid value.<br>Description:</p><ol><li>If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is enhanced SSD CLOUD disk.</li><li>If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is SSD CLOUD Block Storage.</li><li>If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it means that the instance uses local SSD.</li></ol>
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
                     * 获取<p>Current number of CPU cores for scale-out.</p>
                     * @return ExpandCpu <p>Current number of CPU cores for scale-out.</p>
                     * 
                     */
                    int64_t GetExpandCpu() const;

                    /**
                     * 设置<p>Current number of CPU cores for scale-out.</p>
                     * @param _expandCpu <p>Current number of CPU cores for scale-out.</p>
                     * 
                     */
                    void SetExpandCpu(const int64_t& _expandCpu);

                    /**
                     * 判断参数 ExpandCpu 是否已赋值
                     * @return ExpandCpu 是否已赋值
                     * 
                     */
                    bool ExpandCpuHasBeenSet() const;

                    /**
                     * 获取<p>Cloud Disk Edition instance node information</p>
                     * @return ClusterInfo <p>Cloud Disk Edition instance node information</p>
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置<p>Cloud Disk Edition instance node information</p>
                     * @param _clusterInfo <p>Cloud Disk Edition instance node information</p>
                     * 
                     */
                    void SetClusterInfo(const std::vector<ClusterInfo>& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine node list</p>
                     * @return AnalysisNodeInfos <p>Analysis engine node list</p>
                     * 
                     */
                    std::vector<AnalysisNodeInfo> GetAnalysisNodeInfos() const;

                    /**
                     * 设置<p>Analysis engine node list</p>
                     * @param _analysisNodeInfos <p>Analysis engine node list</p>
                     * 
                     */
                    void SetAnalysisNodeInfos(const std::vector<AnalysisNodeInfo>& _analysisNodeInfos);

                    /**
                     * 判断参数 AnalysisNodeInfos 是否已赋值
                     * @return AnalysisNodeInfos 是否已赋值
                     * 
                     */
                    bool AnalysisNodeInfosHasBeenSet() const;

                    /**
                     * 获取<p>Device bandwidth, in G. This parameter is valid only when DeviceClass is not empty. For example, 25 means the current device bandwidth is 25G; 10 means the current device bandwidth is 10G.</p>
                     * @return DeviceBandwidth <p>Device bandwidth, in G. This parameter is valid only when DeviceClass is not empty. For example, 25 means the current device bandwidth is 25G; 10 means the current device bandwidth is 10G.</p>
                     * 
                     */
                    uint64_t GetDeviceBandwidth() const;

                    /**
                     * 设置<p>Device bandwidth, in G. This parameter is valid only when DeviceClass is not empty. For example, 25 means the current device bandwidth is 25G; 10 means the current device bandwidth is 10G.</p>
                     * @param _deviceBandwidth <p>Device bandwidth, in G. This parameter is valid only when DeviceClass is not empty. For example, 25 means the current device bandwidth is 25G; 10 means the current device bandwidth is 10G.</p>
                     * 
                     */
                    void SetDeviceBandwidth(const uint64_t& _deviceBandwidth);

                    /**
                     * 判断参数 DeviceBandwidth 是否已赋值
                     * @return DeviceBandwidth 是否已赋值
                     * 
                     */
                    bool DeviceBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.</p>
                     * @return DestroyProtect <p>Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.</p>
                     * 
                     */
                    std::string GetDestroyProtect() const;

                    /**
                     * 设置<p>Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.</p>
                     * @param _destroyProtect <p>Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.</p>
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
                     * 获取<p>TDSQL engine parameters</p>
                     * @return CpuModel <p>TDSQL engine parameters</p>
                     * 
                     */
                    std::string GetCpuModel() const;

                    /**
                     * 设置<p>TDSQL engine parameters</p>
                     * @param _cpuModel <p>TDSQL engine parameters</p>
                     * 
                     */
                    void SetCpuModel(const std::string& _cpuModel);

                    /**
                     * 判断参数 CpuModel 是否已赋值
                     * @return CpuModel 是否已赋值
                     * 
                     */
                    bool CpuModelHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine instance version upgrade information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisUpgradeVersionInfo <p>Analysis engine instance version upgrade information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UpgradeAnalysisInstanceVersionInfo GetAnalysisUpgradeVersionInfo() const;

                    /**
                     * 设置<p>Analysis engine instance version upgrade information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _analysisUpgradeVersionInfo <p>Analysis engine instance version upgrade information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnalysisUpgradeVersionInfo(const UpgradeAnalysisInstanceVersionInfo& _analysisUpgradeVersionInfo);

                    /**
                     * 判断参数 AnalysisUpgradeVersionInfo 是否已赋值
                     * @return AnalysisUpgradeVersionInfo 是否已赋值
                     * 
                     */
                    bool AnalysisUpgradeVersionInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Public network status. Possible returned values: 0 - External network not enabled; 1 - Public network enabled; 2 - Public network disabled</p>
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * <p>AZ information</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Initialization flag. Possible returned values: 0 - uninitialized; 1 - initialized.</p>
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * <p>Read-only vip information. This field is available only for read-only instances with separate instance access enabled.</p>
                     */
                    RoVipInfo m_roVipInfo;
                    bool m_roVipInfoHasBeenSet;

                    /**
                     * <p>Memory capacity, in MB.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance status. Valid values: 0: creating; 1: running; 4: isolation operation in progress; 5: isolated.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>VPC ID, for example: 51102</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Secondary server information</p>
                     */
                    SlaveInfo m_slaveInfo;
                    bool m_slaveInfoHasBeenSet;

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Disk capacity, in GB.</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Auto-renewal flag. Possible returned values: 0 - auto-renewal is not enabled; 1 - auto-renewal is enabled; 2 - automatic renewal is disabled.</p>
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Data replication mode. 0 - async replication; 1 - semi-sync replication; 2 - strong sync replication</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>Read-only group detailed information</p>
                     */
                    std::vector<RoGroup> m_roGroups;
                    bool m_roGroupsHasBeenSet;

                    /**
                     * <p>Subnet ID, for example: 2333</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Instance type. Possible returned values: 1 - Primary instance; 2 - Disaster recovery instance; 3 - Read-only instance.</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Regional information</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Instance expiration time</p>
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>Availability Zone Deployment method. Valid values: 0 - single availability zone; 1 - multi-availability zone.</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>Instance task status. 0 - No tasks, 1 - Upgrading, 2 - Data import, 3 - Opening Slave, 4 - Public network access enabling, 5 - Batch operation executing, 6 - Rolling back, 7 - Public network access disabling, 8 - Password modification, 9 - Renaming instance, 10 - Restarting, 12 - Self-built migration, 13 - Database deletion, 14 - Disaster recovery instance creation sync, 15 - Upgrade pending switch, 16 - Upgrade and switch, 17 - Upgrade and switch completed</p>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Detailed information about the primary instance.</p>
                     */
                    MasterInfo m_masterInfo;
                    bool m_masterInfoHasBeenSet;

                    /**
                     * <p>Instance type</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Kernel version</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Disaster recovery instance details</p>
                     */
                    std::vector<DrInfo> m_drInfo;
                    bool m_drInfoHasBeenSet;

                    /**
                     * <p>public network domain name</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>Public network port number</p>
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Billing type
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>Instance creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Instance IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Port number</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Whether disk write is locked (data write volume of the instance exceeds disk quota). 0 - Unlocked 1 - Locked</p>
                     */
                    int64_t m_cdbError;
                    bool m_cdbErrorHasBeenSet;

                    /**
                     * <p>Private network descriptor, for example: "vpc-5v8wn9mg"</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Subnet descriptor, such as "subnet-1typ0s7d"</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>Physical ID</p>
                     */
                    std::string m_physicalId;
                    bool m_physicalIdHasBeenSet;

                    /**
                     * <p>Core count</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Queries per second.</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>Chinese Name of Availability Zone</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>Physical machine model</p>
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * <p>Placement group ID</p>
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * <p>Availability zone ID</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Number of nodes</p>
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * <p>Tag list</p>
                     */
                    std::vector<TagInfoItem> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Engine type</p>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * <p>Maximum delay threshold</p>
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * <p>Instance disk type. Only CLOUD disk edition and single-node (CLOUD disk) instances will return a valid value.<br>Description:</p><ol><li>If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is enhanced SSD CLOUD disk.</li><li>If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is SSD CLOUD Block Storage.</li><li>If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it means that the instance uses local SSD.</li></ol>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Current number of CPU cores for scale-out.</p>
                     */
                    int64_t m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * <p>Cloud Disk Edition instance node information</p>
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <p>Analysis engine node list</p>
                     */
                    std::vector<AnalysisNodeInfo> m_analysisNodeInfos;
                    bool m_analysisNodeInfosHasBeenSet;

                    /**
                     * <p>Device bandwidth, in G. This parameter is valid only when DeviceClass is not empty. For example, 25 means the current device bandwidth is 25G; 10 means the current device bandwidth is 10G.</p>
                     */
                    uint64_t m_deviceBandwidth;
                    bool m_deviceBandwidthHasBeenSet;

                    /**
                     * <p>Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.</p>
                     */
                    std::string m_destroyProtect;
                    bool m_destroyProtectHasBeenSet;

                    /**
                     * <p>TDSQL engine parameters</p>
                     */
                    std::string m_cpuModel;
                    bool m_cpuModelHasBeenSet;

                    /**
                     * <p>Analysis engine instance version upgrade information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UpgradeAnalysisInstanceVersionInfo m_analysisUpgradeVersionInfo;
                    bool m_analysisUpgradeVersionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEINFO_H_
