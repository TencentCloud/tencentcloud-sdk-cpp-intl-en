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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBINSTANCEINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ShardInfo.h>
#include <tencentcloud/dcdb/v20180411/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * TDSQL instance information
                */
                class DCDBInstanceInfo : public AbstractModel
                {
                public:
                    DCDBInstanceInfo();
                    ~DCDBInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param AppId Application ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param Region Region
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取AZ
                     * @return Zone AZ
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param Zone AZ
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Numeric ID of a VPC
                     * @return VpcId Numeric ID of a VPC
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置Numeric ID of a VPC
                     * @param VpcId Numeric ID of a VPC
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet Digital ID
                     * @return SubnetId Subnet Digital ID
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置Subnet Digital ID
                     * @param SubnetId Subnet Digital ID
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Status description
                     * @return StatusDesc Status description
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description
                     * @param StatusDesc Status description
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated), `4` (initializing), `5` (eliminating), `6` (restarting), `7` (migrating data)
                     * @return Status Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated), `4` (initializing), `5` (eliminating), `6` (restarting), `7` (migrating data)
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated), `4` (initializing), `5` (eliminating), `6` (restarting), `7` (migrating data)
                     * @param Status Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated), `4` (initializing), `5` (eliminating), `6` (restarting), `7` (migrating data)
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Private IP
                     * @return Vip Private IP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP
                     * @param Vip Private IP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private network port
                     * @return Vport Private network port
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Private network port
                     * @param Vport Private network port
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag
                     * @return AutoRenewFlag Auto-renewal flag
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag
                     * @param AutoRenewFlag Auto-renewal flag
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Memory size in GB
                     * @return Memory Memory size in GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB
                     * @param Memory Memory size in GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Storage capacity in GB
                     * @return Storage Storage capacity in GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity in GB
                     * @param Storage Storage capacity in GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Number of shards
                     * @return ShardCount Number of shards
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置Number of shards
                     * @param ShardCount Number of shards
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return PeriodEndTime Expiration time
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置Expiration time
                     * @param PeriodEndTime Expiration time
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取Isolation time
                     * @return IsolatedTimestamp Isolation time
                     */
                    std::string GetIsolatedTimestamp() const;

                    /**
                     * 设置Isolation time
                     * @param IsolatedTimestamp Isolation time
                     */
                    void SetIsolatedTimestamp(const std::string& _isolatedTimestamp);

                    /**
                     * 判断参数 IsolatedTimestamp 是否已赋值
                     * @return IsolatedTimestamp 是否已赋值
                     */
                    bool IsolatedTimestampHasBeenSet() const;

                    /**
                     * 获取Account ID
                     * @return Uin Account ID
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account ID
                     * @param Uin Account ID
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Shard details
                     * @return ShardDetail Shard details
                     */
                    std::vector<ShardInfo> GetShardDetail() const;

                    /**
                     * 设置Shard details
                     * @param ShardDetail Shard details
                     */
                    void SetShardDetail(const std::vector<ShardInfo>& _shardDetail);

                    /**
                     * 判断参数 ShardDetail 是否已赋值
                     * @return ShardDetail 是否已赋值
                     */
                    bool ShardDetailHasBeenSet() const;

                    /**
                     * 获取Number of nodes. 2: one master and one slave; 3: one master and two slaves
                     * @return NodeCount Number of nodes. 2: one master and one slave; 3: one master and two slaves
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes. 2: one master and one slave; 3: one master and two slaves
                     * @param NodeCount Number of nodes. 2: one master and one slave; 3: one master and two slaves
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Temporary instance flag. 0: non-temporary instance
                     * @return IsTmp Temporary instance flag. 0: non-temporary instance
                     */
                    int64_t GetIsTmp() const;

                    /**
                     * 设置Temporary instance flag. 0: non-temporary instance
                     * @param IsTmp Temporary instance flag. 0: non-temporary instance
                     */
                    void SetIsTmp(const int64_t& _isTmp);

                    /**
                     * 判断参数 IsTmp 是否已赋值
                     * @return IsTmp 是否已赋值
                     */
                    bool IsTmpHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster ID. If this parameter is empty, the instance is a non-dedicated cluster instance
                     * @return ExclusterId Dedicated cluster ID. If this parameter is empty, the instance is a non-dedicated cluster instance
                     */
                    std::string GetExclusterId() const;

                    /**
                     * 设置Dedicated cluster ID. If this parameter is empty, the instance is a non-dedicated cluster instance
                     * @param ExclusterId Dedicated cluster ID. If this parameter is empty, the instance is a non-dedicated cluster instance
                     */
                    void SetExclusterId(const std::string& _exclusterId);

                    /**
                     * 判断参数 ExclusterId 是否已赋值
                     * @return ExclusterId 是否已赋值
                     */
                    bool ExclusterIdHasBeenSet() const;

                    /**
                     * 获取VPC ID in string type
                     * @return UniqueVpcId VPC ID in string type
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置VPC ID in string type
                     * @param UniqueVpcId VPC ID in string type
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID in string type
                     * @return UniqueSubnetId VPC subnet ID in string type
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置VPC subnet ID in string type
                     * @param UniqueSubnetId VPC subnet ID in string type
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取Numeric ID of instance (this field is obsolete and should not be depended on)
                     * @return Id Numeric ID of instance (this field is obsolete and should not be depended on)
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Numeric ID of instance (this field is obsolete and should not be depended on)
                     * @param Id Numeric ID of instance (this field is obsolete and should not be depended on)
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Domain name for public network access, which can be resolved by the public network
                     * @return WanDomain Domain name for public network access, which can be resolved by the public network
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Domain name for public network access, which can be resolved by the public network
                     * @param WanDomain Domain name for public network access, which can be resolved by the public network
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public IP address, which can be accessed over the public network
                     * @return WanVip Public IP address, which can be accessed over the public network
                     */
                    std::string GetWanVip() const;

                    /**
                     * 设置Public IP address, which can be accessed over the public network
                     * @param WanVip Public IP address, which can be accessed over the public network
                     */
                    void SetWanVip(const std::string& _wanVip);

                    /**
                     * 判断参数 WanVip 是否已赋值
                     * @return WanVip 是否已赋值
                     */
                    bool WanVipHasBeenSet() const;

                    /**
                     * 获取Public network port
                     * @return WanPort Public network port
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public network port
                     * @param WanPort Public network port
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Product type ID (this field is obsolete and should not be depended on)
                     * @return Pid Product type ID (this field is obsolete and should not be depended on)
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Product type ID (this field is obsolete and should not be depended on)
                     * @param Pid Product type ID (this field is obsolete and should not be depended on)
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Last updated time of an instance in the format of 2006-01-02 15:04:05
                     * @return UpdateTime Last updated time of an instance in the format of 2006-01-02 15:04:05
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last updated time of an instance in the format of 2006-01-02 15:04:05
                     * @param UpdateTime Last updated time of an instance in the format of 2006-01-02 15:04:05
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Database engine
                     * @return DbEngine Database engine
                     */
                    std::string GetDbEngine() const;

                    /**
                     * 设置Database engine
                     * @param DbEngine Database engine
                     */
                    void SetDbEngine(const std::string& _dbEngine);

                    /**
                     * 判断参数 DbEngine 是否已赋值
                     * @return DbEngine 是否已赋值
                     */
                    bool DbEngineHasBeenSet() const;

                    /**
                     * 获取Database engine version
                     * @return DbVersion Database engine version
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置Database engine version
                     * @param DbVersion Database engine version
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Billing mode
                     * @return Paymode Billing mode
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置Billing mode
                     * @param Paymode Billing mode
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取Async task flow ID when an async task is in progress on an instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Locker Async task flow ID when an async task is in progress on an instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetLocker() const;

                    /**
                     * 设置Async task flow ID when an async task is in progress on an instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Locker Async task flow ID when an async task is in progress on an instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLocker(const int64_t& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     */
                    bool LockerHasBeenSet() const;

                    /**
                     * 获取Public network access status. 0: not enabled; 1: enabled; 2: disabled; 3: enabling
                     * @return WanStatus Public network access status. 0: not enabled; 1: enabled; 2: disabled; 3: enabling
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 设置Public network access status. 0: not enabled; 1: enabled; 2: disabled; 3: enabling
                     * @param WanStatus Public network access status. 0: not enabled; 1: enabled; 2: disabled; 3: enabling
                     */
                    void SetWanStatus(const int64_t& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取Whether the instance supports audit. 1: yes; 0: no
                     * @return IsAuditSupported Whether the instance supports audit. 1: yes; 0: no
                     */
                    uint64_t GetIsAuditSupported() const;

                    /**
                     * 设置Whether the instance supports audit. 1: yes; 0: no
                     * @param IsAuditSupported Whether the instance supports audit. 1: yes; 0: no
                     */
                    void SetIsAuditSupported(const uint64_t& _isAuditSupported);

                    /**
                     * 判断参数 IsAuditSupported 是否已赋值
                     * @return IsAuditSupported 是否已赋值
                     */
                    bool IsAuditSupportedHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param Cpu Number of CPU cores
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Indicates whether the instance uses IPv6
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Ipv6Flag Indicates whether the instance uses IPv6
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetIpv6Flag() const;

                    /**
                     * 设置Indicates whether the instance uses IPv6
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Ipv6Flag Indicates whether the instance uses IPv6
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpv6Flag(const uint64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取Private network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Vipv6 Private network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置Private network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Vipv6 Private network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取Public network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WanVipv6 Public network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWanVipv6() const;

                    /**
                     * 设置Public network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WanVipv6 Public network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWanVipv6(const std::string& _wanVipv6);

                    /**
                     * 判断参数 WanVipv6 是否已赋值
                     * @return WanVipv6 是否已赋值
                     */
                    bool WanVipv6HasBeenSet() const;

                    /**
                     * 获取Public network IPv6 port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WanPortIpv6 Public network IPv6 port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetWanPortIpv6() const;

                    /**
                     * 设置Public network IPv6 port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WanPortIpv6 Public network IPv6 port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWanPortIpv6(const uint64_t& _wanPortIpv6);

                    /**
                     * 判断参数 WanPortIpv6 是否已赋值
                     * @return WanPortIpv6 是否已赋值
                     */
                    bool WanPortIpv6HasBeenSet() const;

                    /**
                     * 获取Public network IPv6 status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WanStatusIpv6 Public network IPv6 status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetWanStatusIpv6() const;

                    /**
                     * 设置Public network IPv6 status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WanStatusIpv6 Public network IPv6 status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWanStatusIpv6(const uint64_t& _wanStatusIpv6);

                    /**
                     * 判断参数 WanStatusIpv6 是否已赋值
                     * @return WanStatusIpv6 是否已赋值
                     */
                    bool WanStatusIpv6HasBeenSet() const;

                    /**
                     * 获取DCN type. Valid values: 0 (null), 1 (primary instance), 2 (disaster recovery instance)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DcnFlag DCN type. Valid values: 0 (null), 1 (primary instance), 2 (disaster recovery instance)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 设置DCN type. Valid values: 0 (null), 1 (primary instance), 2 (disaster recovery instance)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DcnFlag DCN type. Valid values: 0 (null), 1 (primary instance), 2 (disaster recovery instance)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDcnFlag(const int64_t& _dcnFlag);

                    /**
                     * 判断参数 DcnFlag 是否已赋值
                     * @return DcnFlag 是否已赋值
                     */
                    bool DcnFlagHasBeenSet() const;

                    /**
                     * 获取DCN status. Valid values: 0 (null), 1 (creating), 2 (syncing), 3 (disconnected)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DcnStatus DCN status. Valid values: 0 (null), 1 (creating), 2 (syncing), 3 (disconnected)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDcnStatus() const;

                    /**
                     * 设置DCN status. Valid values: 0 (null), 1 (creating), 2 (syncing), 3 (disconnected)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DcnStatus DCN status. Valid values: 0 (null), 1 (creating), 2 (syncing), 3 (disconnected)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDcnStatus(const int64_t& _dcnStatus);

                    /**
                     * 判断参数 DcnStatus 是否已赋值
                     * @return DcnStatus 是否已赋值
                     */
                    bool DcnStatusHasBeenSet() const;

                    /**
                     * 获取The number of DCN disaster recovery instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DcnDstNum The number of DCN disaster recovery instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDcnDstNum() const;

                    /**
                     * 设置The number of DCN disaster recovery instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DcnDstNum The number of DCN disaster recovery instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDcnDstNum(const int64_t& _dcnDstNum);

                    /**
                     * 判断参数 DcnDstNum 是否已赋值
                     * @return DcnDstNum 是否已赋值
                     */
                    bool DcnDstNumHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `1` (dedicated primary instance), `2` (standard primary instance), `3` (standard disaster recovery instance), `4` (dedicated disaster recovery instance)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceType Instance type. Valid values: `1` (dedicated primary instance), `2` (standard primary instance), `3` (standard disaster recovery instance), `4` (dedicated disaster recovery instance)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values: `1` (dedicated primary instance), `2` (standard primary instance), `3` (standard disaster recovery instance), `4` (dedicated disaster recovery instance)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceType Instance type. Valid values: `1` (dedicated primary instance), `2` (standard primary instance), `3` (standard disaster recovery instance), `4` (dedicated disaster recovery instance)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance tag information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ResourceTags Instance tag information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Instance tag information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ResourceTags Instance tag information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Application ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Numeric ID of a VPC
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet Digital ID
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Status description
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated), `4` (initializing), `5` (eliminating), `6` (restarting), `7` (migrating data)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Private IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private network port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Auto-renewal flag
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Memory size in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage capacity in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Number of shards
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Isolation time
                     */
                    std::string m_isolatedTimestamp;
                    bool m_isolatedTimestampHasBeenSet;

                    /**
                     * Account ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Shard details
                     */
                    std::vector<ShardInfo> m_shardDetail;
                    bool m_shardDetailHasBeenSet;

                    /**
                     * Number of nodes. 2: one master and one slave; 3: one master and two slaves
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Temporary instance flag. 0: non-temporary instance
                     */
                    int64_t m_isTmp;
                    bool m_isTmpHasBeenSet;

                    /**
                     * Dedicated cluster ID. If this parameter is empty, the instance is a non-dedicated cluster instance
                     */
                    std::string m_exclusterId;
                    bool m_exclusterIdHasBeenSet;

                    /**
                     * VPC ID in string type
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID in string type
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * Numeric ID of instance (this field is obsolete and should not be depended on)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Domain name for public network access, which can be resolved by the public network
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public IP address, which can be accessed over the public network
                     */
                    std::string m_wanVip;
                    bool m_wanVipHasBeenSet;

                    /**
                     * Public network port
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Product type ID (this field is obsolete and should not be depended on)
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Last updated time of an instance in the format of 2006-01-02 15:04:05
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Database engine
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * Database engine version
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Billing mode
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * Async task flow ID when an async task is in progress on an instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * Public network access status. 0: not enabled; 1: enabled; 2: disabled; 3: enabling
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * Whether the instance supports audit. 1: yes; 0: no
                     */
                    uint64_t m_isAuditSupported;
                    bool m_isAuditSupportedHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Indicates whether the instance uses IPv6
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * Private network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * Public network IPv6 address
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wanVipv6;
                    bool m_wanVipv6HasBeenSet;

                    /**
                     * Public network IPv6 port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_wanPortIpv6;
                    bool m_wanPortIpv6HasBeenSet;

                    /**
                     * Public network IPv6 status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_wanStatusIpv6;
                    bool m_wanStatusIpv6HasBeenSet;

                    /**
                     * DCN type. Valid values: 0 (null), 1 (primary instance), 2 (disaster recovery instance)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                    /**
                     * DCN status. Valid values: 0 (null), 1 (creating), 2 (syncing), 3 (disconnected)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnStatus;
                    bool m_dcnStatusHasBeenSet;

                    /**
                     * The number of DCN disaster recovery instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnDstNum;
                    bool m_dcnDstNumHasBeenSet;

                    /**
                     * Instance type. Valid values: `1` (dedicated primary instance), `2` (standard primary instance), `3` (standard disaster recovery instance), `4` (dedicated disaster recovery instance)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance tag information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBINSTANCEINFO_H_
