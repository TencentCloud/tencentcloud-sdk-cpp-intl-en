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
                     * 获取Public network access status. Value range: 0 (not enabled), 1 (enabled), 2 (disabled)
                     * @return WanStatus Public network access status. Value range: 0 (not enabled), 1 (enabled), 2 (disabled)
                     * 
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 设置Public network access status. Value range: 0 (not enabled), 1 (enabled), 2 (disabled)
                     * @param _wanStatus Public network access status. Value range: 0 (not enabled), 1 (enabled), 2 (disabled)
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
                     * 获取AZ information
                     * @return Zone AZ information
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information
                     * @param _zone AZ information
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
                     * 获取Initialization flag. Value range: 0 (not initialized), 1 (initialized)
                     * @return InitFlag Initialization flag. Value range: 0 (not initialized), 1 (initialized)
                     * 
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置Initialization flag. Value range: 0 (not initialized), 1 (initialized)
                     * @param _initFlag Initialization flag. Value range: 0 (not initialized), 1 (initialized)
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
                     * 获取Read-only VIP information. This field is available only for read-only instances with dedicated access enabled.
                     * @return RoVipInfo Read-only VIP information. This field is available only for read-only instances with dedicated access enabled.
                     * 
                     */
                    RoVipInfo GetRoVipInfo() const;

                    /**
                     * 设置Read-only VIP information. This field is available only for read-only instances with dedicated access enabled.
                     * @param _roVipInfo Read-only VIP information. This field is available only for read-only instances with dedicated access enabled.
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
                     * 获取Memory capacity in MB
                     * @return Memory Memory capacity in MB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory capacity in MB
                     * @param _memory Memory capacity in MB
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
                     * 获取Instance status. Valid values: `0` (creating), `1` (running), `4` (isolating), `5` (isolated).
                     * @return Status Instance status. Valid values: `0` (creating), `1` (running), `4` (isolating), `5` (isolated).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: `0` (creating), `1` (running), `4` (isolating), `5` (isolated).
                     * @param _status Instance status. Valid values: `0` (creating), `1` (running), `4` (isolating), `5` (isolated).
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
                     * 获取VPC ID, such as 51102
                     * @return VpcId VPC ID, such as 51102
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置VPC ID, such as 51102
                     * @param _vpcId VPC ID, such as 51102
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
                     * 获取Secondary server information.
                     * @return SlaveInfo Secondary server information.
                     * 
                     */
                    SlaveInfo GetSlaveInfo() const;

                    /**
                     * 设置Secondary server information.
                     * @param _slaveInfo Secondary server information.
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Disk capacity in GB
                     * @return Volume Disk capacity in GB
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Disk capacity in GB
                     * @param _volume Disk capacity in GB
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
                     * 获取Auto-renewal flag. Value range: 0 (auto-renewal not enabled), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     * @return AutoRenew Auto-renewal flag. Value range: 0 (auto-renewal not enabled), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置Auto-renewal flag. Value range: 0 (auto-renewal not enabled), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     * @param _autoRenew Auto-renewal flag. Value range: 0 (auto-renewal not enabled), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
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
                     * 获取Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync)
                     * @return ProtectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync)
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync)
                     * @param _protectMode Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync)
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
                     * 获取Detailed information about the read-only group.
                     * @return RoGroups Detailed information about the read-only group.
                     * 
                     */
                    std::vector<RoGroup> GetRoGroups() const;

                    /**
                     * 设置Detailed information about the read-only group.
                     * @param _roGroups Detailed information about the read-only group.
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
                     * 获取Subnet ID, such as 2333
                     * @return SubnetId Subnet ID, such as 2333
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置Subnet ID, such as 2333
                     * @param _subnetId Subnet ID, such as 2333
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
                     * 获取Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     * @return InstanceType Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     * @param _instanceType Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Region information
                     * @return Region Region information
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information
                     * @param _region Region information
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
                     * 获取Instance expiration time
                     * @return DeadlineTime Instance expiration time
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param _deadlineTime Instance expiration time
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
                     * 获取AZ deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ)
                     * @return DeployMode AZ deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ)
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置AZ deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ)
                     * @param _deployMode AZ deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ)
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
                     * 获取Instance task status. 0 - no task; 1 - upgrading; 2 - importing data; 3 - activating secondary; 4 - enabling public network access; 5 - batch operation in progress; 6 - rolling back; 7 - disabling public network access; 8 - changing password; 9 - renaming instance; 10 - restarting; 12 - migrating self-built instance; 13 - dropping table; 14 - creating and syncing disaster recovery instance; 15 - pending upgrade and switch; 16 - upgrade and switch in progress; 17 - upgrade and switch completed
                     * @return TaskStatus Instance task status. 0 - no task; 1 - upgrading; 2 - importing data; 3 - activating secondary; 4 - enabling public network access; 5 - batch operation in progress; 6 - rolling back; 7 - disabling public network access; 8 - changing password; 9 - renaming instance; 10 - restarting; 12 - migrating self-built instance; 13 - dropping table; 14 - creating and syncing disaster recovery instance; 15 - pending upgrade and switch; 16 - upgrade and switch in progress; 17 - upgrade and switch completed
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置Instance task status. 0 - no task; 1 - upgrading; 2 - importing data; 3 - activating secondary; 4 - enabling public network access; 5 - batch operation in progress; 6 - rolling back; 7 - disabling public network access; 8 - changing password; 9 - renaming instance; 10 - restarting; 12 - migrating self-built instance; 13 - dropping table; 14 - creating and syncing disaster recovery instance; 15 - pending upgrade and switch; 16 - upgrade and switch in progress; 17 - upgrade and switch completed
                     * @param _taskStatus Instance task status. 0 - no task; 1 - upgrading; 2 - importing data; 3 - activating secondary; 4 - enabling public network access; 5 - batch operation in progress; 6 - rolling back; 7 - disabling public network access; 8 - changing password; 9 - renaming instance; 10 - restarting; 12 - migrating self-built instance; 13 - dropping table; 14 - creating and syncing disaster recovery instance; 15 - pending upgrade and switch; 16 - upgrade and switch in progress; 17 - upgrade and switch completed
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
                     * 获取Detailed information about the primary instance.
                     * @return MasterInfo Detailed information about the primary instance.
                     * 
                     */
                    MasterInfo GetMasterInfo() const;

                    /**
                     * 设置Detailed information about the primary instance.
                     * @param _masterInfo Detailed information about the primary instance.
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
                     * 获取Instance type
                     * @return DeviceType Instance type
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance type
                     * @param _deviceType Instance type
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
                     * 获取Kernel version
                     * @return EngineVersion Kernel version
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Kernel version
                     * @param _engineVersion Kernel version
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Detailed information about the disaster recovery instance.
                     * @return DrInfo Detailed information about the disaster recovery instance.
                     * 
                     */
                    std::vector<DrInfo> GetDrInfo() const;

                    /**
                     * 设置Detailed information about the disaster recovery instance.
                     * @param _drInfo Detailed information about the disaster recovery instance.
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
                     * 获取Public domain name
                     * @return WanDomain Public domain name
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Public domain name
                     * @param _wanDomain Public domain name
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
                     * 获取Public network port number
                     * @return WanPort Public network port number
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public network port number
                     * @param _wanPort Public network port number
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
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _createTime Instance creation time
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
                     * 获取Instance IP
                     * @return Vip Instance IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance IP
                     * @param _vip Instance IP
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
                     * 获取Port number
                     * @return Vport Port number
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Port number
                     * @param _vport Port number
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
                     * 获取Whether the disk write is locked (It depends on whether the instance data in disk exceeds its quota). Valid values: `0` (unlocked), `1` (locked).
                     * @return CdbError Whether the disk write is locked (It depends on whether the instance data in disk exceeds its quota). Valid values: `0` (unlocked), `1` (locked).
                     * 
                     */
                    int64_t GetCdbError() const;

                    /**
                     * 设置Whether the disk write is locked (It depends on whether the instance data in disk exceeds its quota). Valid values: `0` (unlocked), `1` (locked).
                     * @param _cdbError Whether the disk write is locked (It depends on whether the instance data in disk exceeds its quota). Valid values: `0` (unlocked), `1` (locked).
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
                     * 获取VPC descriptor, such as "vpc-5v8wn9mg"
                     * @return UniqVpcId VPC descriptor, such as "vpc-5v8wn9mg"
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC descriptor, such as "vpc-5v8wn9mg"
                     * @param _uniqVpcId VPC descriptor, such as "vpc-5v8wn9mg"
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
                     * 获取Subnet descriptor, such as "subnet-1typ0s7d"
                     * @return UniqSubnetId Subnet descriptor, such as "subnet-1typ0s7d"
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet descriptor, such as "subnet-1typ0s7d"
                     * @param _uniqSubnetId Subnet descriptor, such as "subnet-1typ0s7d"
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
                     * 获取Physical ID
                     * @return PhysicalId Physical ID
                     * 
                     */
                    std::string GetPhysicalId() const;

                    /**
                     * 设置Physical ID
                     * @param _physicalId Physical ID
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
                     * 获取Number of cores
                     * @return Cpu Number of cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of cores
                     * @param _cpu Number of cores
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
                     * 获取Queries per second
                     * @return Qps Queries per second
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置Queries per second
                     * @param _qps Queries per second
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
                     * 获取AZ name
                     * @return ZoneName AZ name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ name
                     * @param _zoneName AZ name
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
                     * 获取Physical server model.
                     * @return DeviceClass Physical server model.
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置Physical server model.
                     * @param _deviceClass Physical server model.
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
                     * 获取AZ ID.
                     * @return ZoneId AZ ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID.
                     * @param _zoneId AZ ID.
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
                     * 获取Number of nodes
                     * @return InstanceNodes Number of nodes
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置Number of nodes
                     * @param _instanceNodes Number of nodes
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
                     * 获取Tag list.
                     * @return TagList Tag list.
                     * 
                     */
                    std::vector<TagInfoItem> GetTagList() const;

                    /**
                     * 设置Tag list.
                     * @param _tagList Tag list.
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
                     * 获取Engine type.
                     * @return EngineType Engine type.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Engine type.
                     * @param _engineType Engine type.
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
                     * 获取Maximum delay threshold.
                     * @return MaxDelayTime Maximum delay threshold.
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置Maximum delay threshold.
                     * @param _maxDelayTime Maximum delay threshold.
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
                     * 获取Instance disk type. Valid values are returned only for Cluster Edition and single-node (cloud disk) instances.
Note:
1. If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is Enhanced SSD.
2. If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is Cloud SSD.
3. If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it indicates that the instance uses a local SSD.
                     * @return DiskType Instance disk type. Valid values are returned only for Cluster Edition and single-node (cloud disk) instances.
Note:
1. If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is Enhanced SSD.
2. If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is Cloud SSD.
3. If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it indicates that the instance uses a local SSD.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Instance disk type. Valid values are returned only for Cluster Edition and single-node (cloud disk) instances.
Note:
1. If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is Enhanced SSD.
2. If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is Cloud SSD.
3. If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it indicates that the instance uses a local SSD.
                     * @param _diskType Instance disk type. Valid values are returned only for Cluster Edition and single-node (cloud disk) instances.
Note:
1. If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is Enhanced SSD.
2. If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is Cloud SSD.
3. If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it indicates that the instance uses a local SSD.
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
                     * 获取Current number of CPU cores for scale-out.
                     * @return ExpandCpu Current number of CPU cores for scale-out.
                     * 
                     */
                    int64_t GetExpandCpu() const;

                    /**
                     * 设置Current number of CPU cores for scale-out.
                     * @param _expandCpu Current number of CPU cores for scale-out.
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
                     * 获取Cluster Edition instance node information.
                     * @return ClusterInfo Cluster Edition instance node information.
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置Cluster Edition instance node information.
                     * @param _clusterInfo Cluster Edition instance node information.
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
                     * 获取Analysis engine node list.
                     * @return AnalysisNodeInfos Analysis engine node list.
                     * 
                     */
                    std::vector<AnalysisNodeInfo> GetAnalysisNodeInfos() const;

                    /**
                     * 设置Analysis engine node list.
                     * @param _analysisNodeInfos Analysis engine node list.
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
                     * 获取Device bandwidth, in GB. This parameter is valid when DeviceClass is specified. For example, 25 means the current device bandwidth is 25 GB; 10 means the current device bandwidth is 10 GB.
                     * @return DeviceBandwidth Device bandwidth, in GB. This parameter is valid when DeviceClass is specified. For example, 25 means the current device bandwidth is 25 GB; 10 means the current device bandwidth is 10 GB.
                     * 
                     */
                    uint64_t GetDeviceBandwidth() const;

                    /**
                     * 设置Device bandwidth, in GB. This parameter is valid when DeviceClass is specified. For example, 25 means the current device bandwidth is 25 GB; 10 means the current device bandwidth is 10 GB.
                     * @param _deviceBandwidth Device bandwidth, in GB. This parameter is valid when DeviceClass is specified. For example, 25 means the current device bandwidth is 25 GB; 10 means the current device bandwidth is 10 GB.
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
                     * 获取Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.
                     * @return DestroyProtect Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.
                     * 
                     */
                    std::string GetDestroyProtect() const;

                    /**
                     * 设置Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.
                     * @param _destroyProtect Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.
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
                     * Public network access status. Value range: 0 (not enabled), 1 (enabled), 2 (disabled)
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * AZ information
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Initialization flag. Value range: 0 (not initialized), 1 (initialized)
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * Read-only VIP information. This field is available only for read-only instances with dedicated access enabled.
                     */
                    RoVipInfo m_roVipInfo;
                    bool m_roVipInfoHasBeenSet;

                    /**
                     * Memory capacity in MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (creating), `1` (running), `4` (isolating), `5` (isolated).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC ID, such as 51102
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Secondary server information.
                     */
                    SlaveInfo m_slaveInfo;
                    bool m_slaveInfoHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Disk capacity in GB
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Auto-renewal flag. Value range: 0 (auto-renewal not enabled), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Data replication mode. Valid values: 0 (async), 1 (semi-sync), 2 (strong sync)
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Detailed information about the read-only group.
                     */
                    std::vector<RoGroup> m_roGroups;
                    bool m_roGroupsHasBeenSet;

                    /**
                     * Subnet ID, such as 2333
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Region information
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * AZ deployment mode. Valid values: 0 (single-AZ), 1 (multi-AZ)
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Instance task status. 0 - no task; 1 - upgrading; 2 - importing data; 3 - activating secondary; 4 - enabling public network access; 5 - batch operation in progress; 6 - rolling back; 7 - disabling public network access; 8 - changing password; 9 - renaming instance; 10 - restarting; 12 - migrating self-built instance; 13 - dropping table; 14 - creating and syncing disaster recovery instance; 15 - pending upgrade and switch; 16 - upgrade and switch in progress; 17 - upgrade and switch completed
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Detailed information about the primary instance.
                     */
                    MasterInfo m_masterInfo;
                    bool m_masterInfoHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Kernel version
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Detailed information about the disaster recovery instance.
                     */
                    std::vector<DrInfo> m_drInfo;
                    bool m_drInfoHasBeenSet;

                    /**
                     * Public domain name
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public network port number
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Billing type
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port number
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Whether the disk write is locked (It depends on whether the instance data in disk exceeds its quota). Valid values: `0` (unlocked), `1` (locked).
                     */
                    int64_t m_cdbError;
                    bool m_cdbErrorHasBeenSet;

                    /**
                     * VPC descriptor, such as "vpc-5v8wn9mg"
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet descriptor, such as "subnet-1typ0s7d"
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Physical ID
                     */
                    std::string m_physicalId;
                    bool m_physicalIdHasBeenSet;

                    /**
                     * Number of cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Queries per second
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * AZ name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Physical server model.
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * Placement group ID.
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * AZ ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * Tag list.
                     */
                    std::vector<TagInfoItem> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Engine type.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Maximum delay threshold.
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * Instance disk type. Valid values are returned only for Cluster Edition and single-node (cloud disk) instances.
Note:
1. If "DiskType": "CLOUD_HSSD" is returned, it indicates that the instance disk type is Enhanced SSD.
2. If "DiskType": "CLOUD_SSD" is returned, it indicates that the instance disk type is Cloud SSD.
3. If "DiskType": "" is returned and the DeviceType parameter value is UNIVERSAL or EXCLUSIVE, it indicates that the instance uses a local SSD.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Current number of CPU cores for scale-out.
                     */
                    int64_t m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * Cluster Edition instance node information.
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * Analysis engine node list.
                     */
                    std::vector<AnalysisNodeInfo> m_analysisNodeInfos;
                    bool m_analysisNodeInfosHasBeenSet;

                    /**
                     * Device bandwidth, in GB. This parameter is valid when DeviceClass is specified. For example, 25 means the current device bandwidth is 25 GB; 10 means the current device bandwidth is 10 GB.
                     */
                    uint64_t m_deviceBandwidth;
                    bool m_deviceBandwidthHasBeenSet;

                    /**
                     * Instance termination protection status. on indicates enabled; otherwise, the protection is disabled.
                     */
                    std::string m_destroyProtect;
                    bool m_destroyProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEINFO_H_
