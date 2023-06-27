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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ShardBriefInfo.h>
#include <tencentcloud/dcdb/v20180411/model/ResourceTag.h>
#include <tencentcloud/dcdb/v20180411/model/ReservedNetResource.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBInstanceDetail response structure.
                */
                class DescribeDCDBInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDCDBInstanceDetailResponse();
                    ~DescribeDCDBInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as dcdbt-7oaxtcb7.
                     * @return InstanceId Instance ID, such as dcdbt-7oaxtcb7.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated).
                     * @return Status Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Current status of the instance
                     * @return StatusDesc Current status of the instance
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Instance private IP address
                     * @return Vip Instance private IP address
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private port of instance
                     * @return Vport Private port of instance
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Number of instance nodes. Valid values: `2` (1-source-1-replica), `3` (1-source-2-replica).
                     * @return NodeCount Number of instance nodes. Valid values: `2` (1-source-1-replica), `3` (1-source-2-replica).
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Instance region, such as ap-guangzhou.
                     * @return Region Instance region, such as ap-guangzhou.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Instance VPC ID, such as vpc-r9jr0de3.
                     * @return VpcId Instance VPC ID, such as vpc-r9jr0de3.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID of an instance, such as subnet-6rqs61o2.
                     * @return SubnetId VPC subnet ID of an instance, such as subnet-6rqs61o2.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Public network status. Valid values: `0` (not enabled), `1` (enabled), `2` (disabled), `3`: (enabling), `4` (disabling).
                     * @return WanStatus Public network status. Valid values: `0` (not enabled), `1` (enabled), `2` (disabled), `3`: (enabling), `4` (disabling).
                     * 
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取Domain name for public network access, which can be resolved by the public network.
                     * @return WanDomain Domain name for public network access, which can be resolved by the public network.
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public IP address, which can be accessed over the public network.
                     * @return WanVip Public IP address, which can be accessed over the public network.
                     * 
                     */
                    std::string GetWanVip() const;

                    /**
                     * 判断参数 WanVip 是否已赋值
                     * @return WanVip 是否已赋值
                     * 
                     */
                    bool WanVipHasBeenSet() const;

                    /**
                     * 获取Public network access port
                     * @return WanPort Public network access port
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Project ID of the instance
                     * @return ProjectId Project ID of the instance
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Automatic renewal flag for an instance. Valid values: `0` (normal renewal), `1` (auto-renewal), `3` (no renewal upon expiration).
                     * @return AutoRenewFlag Automatic renewal flag for an instance. Valid values: `0` (normal renewal), `1` (auto-renewal), `3` (no renewal upon expiration).
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster ID
                     * @return ExclusterId Dedicated cluster ID
                     * 
                     */
                    std::string GetExclusterId() const;

                    /**
                     * 判断参数 ExclusterId 是否已赋值
                     * @return ExclusterId 是否已赋值
                     * 
                     */
                    bool ExclusterIdHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: `prepaid` (monthly subscription), `postpaid` (pay-as-you-go).
                     * @return PayMode Billing mode. Valid values: `prepaid` (monthly subscription), `postpaid` (pay-as-you-go).
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Creation time of the instance in the format of 2006-01-02 15:04:05
                     * @return CreateTime Creation time of the instance in the format of 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of the instance in the format of 2006-01-02 15:04:05
                     * @return PeriodEndTime Expiration time of the instance in the format of 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取Database version information
                     * @return DbVersion Database version information
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Whether the instance supports audit. Valid values: `1` (yes), `0` (no).
                     * @return IsAuditSupported Whether the instance supports audit. Valid values: `1` (yes), `0` (no).
                     * 
                     */
                    int64_t GetIsAuditSupported() const;

                    /**
                     * 判断参数 IsAuditSupported 是否已赋值
                     * @return IsAuditSupported 是否已赋值
                     * 
                     */
                    bool IsAuditSupportedHasBeenSet() const;

                    /**
                     * 获取Whether data encryption is supported for an instance. Valid values: `1` (yes), `0` (no).
                     * @return IsEncryptSupported Whether data encryption is supported for an instance. Valid values: `1` (yes), `0` (no).
                     * 
                     */
                    int64_t GetIsEncryptSupported() const;

                    /**
                     * 判断参数 IsEncryptSupported 是否已赋值
                     * @return IsEncryptSupported 是否已赋值
                     * 
                     */
                    bool IsEncryptSupportedHasBeenSet() const;

                    /**
                     * 获取Instance machine model
                     * @return Machine Instance machine model
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     * 
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取Instance memory size in GB, which is the sum of the memory of all shards.
                     * @return Memory Instance memory size in GB, which is the sum of the memory of all shards.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk storage size in GB, which is the sum of the disk size of all shards.
                     * @return Storage Instance disk storage size in GB, which is the sum of the disk size of all shards.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Instance storage space utilization. It is calculated by dividing the sum of the used disk size of all shards by the total disk size of all shards.
                     * @return StorageUsage Instance storage space utilization. It is calculated by dividing the sum of the used disk size of all shards by the total disk size of all shards.
                     * 
                     */
                    double GetStorageUsage() const;

                    /**
                     * 判断参数 StorageUsage 是否已赋值
                     * @return StorageUsage 是否已赋值
                     * 
                     */
                    bool StorageUsageHasBeenSet() const;

                    /**
                     * 获取Size of log storage space in GB
                     * @return LogStorage Size of log storage space in GB
                     * 
                     */
                    int64_t GetLogStorage() const;

                    /**
                     * 判断参数 LogStorage 是否已赋值
                     * @return LogStorage 是否已赋值
                     * 
                     */
                    bool LogStorageHasBeenSet() const;

                    /**
                     * 获取Product type ID
                     * @return Pid Product type ID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Source AZ
                     * @return MasterZone Source AZ
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取Replica AZ
                     * @return SlaveZones Replica AZ
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取Shard information
                     * @return Shards Shard information
                     * 
                     */
                    std::vector<ShardBriefInfo> GetShards() const;

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取Private network IPv6 address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip6 Private network IPv6 address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cpu Number of CPU cores of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance QPS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Qps Instance QPS
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Database engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbEngine Database engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbEngine() const;

                    /**
                     * 判断参数 DbEngine 是否已赋值
                     * @return DbEngine 是否已赋值
                     * 
                     */
                    bool DbEngineHasBeenSet() const;

                    /**
                     * 获取Whether IPv6 is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ipv6Flag Whether IPv6 is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取Public IPv6 address, which can be accessed over the public network
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanVipv6 Public IPv6 address, which can be accessed over the public network
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWanVipv6() const;

                    /**
                     * 判断参数 WanVipv6 是否已赋值
                     * @return WanVipv6 是否已赋值
                     * 
                     */
                    bool WanVipv6HasBeenSet() const;

                    /**
                     * 获取Public network status. Valid values: `0` (not enabled), `1` (enabled), `2` (disabled), `3`: (enabling), `4` (disabling).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanStatusIpv6 Public network status. Valid values: `0` (not enabled), `1` (enabled), `2` (disabled), `3`: (enabling), `4` (disabling).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWanStatusIpv6() const;

                    /**
                     * 判断参数 WanStatusIpv6 是否已赋值
                     * @return WanStatusIpv6 是否已赋值
                     * 
                     */
                    bool WanStatusIpv6HasBeenSet() const;

                    /**
                     * 获取Public network IPv6 port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanPortIpv6 Public network IPv6 port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWanPortIpv6() const;

                    /**
                     * 判断参数 WanPortIpv6 是否已赋值
                     * @return WanPortIpv6 是否已赋值
                     * 
                     */
                    bool WanPortIpv6HasBeenSet() const;

                    /**
                     * 获取Tag information
                     * @return ResourceTags Tag information
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取DCN type. Valid values: `0` (N/A), `1` (source instance), `2` (disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DcnFlag DCN type. Valid values: `0` (N/A), `1` (source instance), `2` (disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 判断参数 DcnFlag 是否已赋值
                     * @return DcnFlag 是否已赋值
                     * 
                     */
                    bool DcnFlagHasBeenSet() const;

                    /**
                     * 获取DCN status. Valid values: `0` (N/A), `1` (creating), `2` (syncing), `3` (disconnected).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DcnStatus DCN status. Valid values: `0` (N/A), `1` (creating), `2` (syncing), `3` (disconnected).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDcnStatus() const;

                    /**
                     * 判断参数 DcnStatus 是否已赋值
                     * @return DcnStatus 是否已赋值
                     * 
                     */
                    bool DcnStatusHasBeenSet() const;

                    /**
                     * 获取The number of DCN disaster recovery instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DcnDstNum The number of DCN disaster recovery instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDcnDstNum() const;

                    /**
                     * 判断参数 DcnDstNum 是否已赋值
                     * @return DcnDstNum 是否已赋值
                     * 
                     */
                    bool DcnDstNumHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery read-only instance), `4` (dedicated disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery read-only instance), `4` (dedicated disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Whether the instance supports setting the connection limit, which is not supported for kernel version 10.1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsMaxUserConnectionsSupported Whether the instance supports setting the connection limit, which is not supported for kernel version 10.1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsMaxUserConnectionsSupported() const;

                    /**
                     * 判断参数 IsMaxUserConnectionsSupported 是否已赋值
                     * @return IsMaxUserConnectionsSupported 是否已赋值
                     * 
                     */
                    bool IsMaxUserConnectionsSupportedHasBeenSet() const;

                    /**
                     * 获取The displayed database version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbVersionId The displayed database version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     * 
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取Encryption status. Valid values: `0` (disabled), `1` (enabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncryptStatus Encryption status. Valid values: `0` (disabled), `1` (enabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEncryptStatus() const;

                    /**
                     * 判断参数 EncryptStatus 是否已赋值
                     * @return EncryptStatus 是否已赋值
                     * 
                     */
                    bool EncryptStatusHasBeenSet() const;

                    /**
                     * 获取Type of dedicated cluster. Valid values: `0` (public cloud), `1` (finance cage), `2` (CDC cluster).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExclusterType Type of dedicated cluster. Valid values: `0` (public cloud), `1` (finance cage), `2` (CDC cluster).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExclusterType() const;

                    /**
                     * 判断参数 ExclusterType 是否已赋值
                     * @return ExclusterType 是否已赋值
                     * 
                     */
                    bool ExclusterTypeHasBeenSet() const;

                    /**
                     * 获取Nearby VPC access
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RsAccessStrategy Nearby VPC access
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRsAccessStrategy() const;

                    /**
                     * 判断参数 RsAccessStrategy 是否已赋值
                     * @return RsAccessStrategy 是否已赋值
                     * 
                     */
                    bool RsAccessStrategyHasBeenSet() const;

                    /**
                     * 获取Unclaimed network resource
                     * @return ReservedNetResources Unclaimed network resource
                     * 
                     */
                    std::vector<ReservedNetResource> GetReservedNetResources() const;

                    /**
                     * 判断参数 ReservedNetResources 是否已赋值
                     * @return ReservedNetResources 是否已赋值
                     * 
                     */
                    bool ReservedNetResourcesHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsPhysicalReplicationSupported 
                     * 
                     */
                    bool GetIsPhysicalReplicationSupported() const;

                    /**
                     * 判断参数 IsPhysicalReplicationSupported 是否已赋值
                     * @return IsPhysicalReplicationSupported 是否已赋值
                     * 
                     */
                    bool IsPhysicalReplicationSupportedHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as dcdbt-7oaxtcb7.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (creating), `1` (running task), `2` (running), `3` (uninitialized), `-1` (isolated).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Current status of the instance
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Instance private IP address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private port of instance
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Number of instance nodes. Valid values: `2` (1-source-1-replica), `3` (1-source-2-replica).
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Instance region, such as ap-guangzhou.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance VPC ID, such as vpc-r9jr0de3.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID of an instance, such as subnet-6rqs61o2.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Public network status. Valid values: `0` (not enabled), `1` (enabled), `2` (disabled), `3`: (enabling), `4` (disabling).
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * Domain name for public network access, which can be resolved by the public network.
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public IP address, which can be accessed over the public network.
                     */
                    std::string m_wanVip;
                    bool m_wanVipHasBeenSet;

                    /**
                     * Public network access port
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Project ID of the instance
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Automatic renewal flag for an instance. Valid values: `0` (normal renewal), `1` (auto-renewal), `3` (no renewal upon expiration).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Dedicated cluster ID
                     */
                    std::string m_exclusterId;
                    bool m_exclusterIdHasBeenSet;

                    /**
                     * Billing mode. Valid values: `prepaid` (monthly subscription), `postpaid` (pay-as-you-go).
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Creation time of the instance in the format of 2006-01-02 15:04:05
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Expiration time of the instance in the format of 2006-01-02 15:04:05
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Database version information
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Whether the instance supports audit. Valid values: `1` (yes), `0` (no).
                     */
                    int64_t m_isAuditSupported;
                    bool m_isAuditSupportedHasBeenSet;

                    /**
                     * Whether data encryption is supported for an instance. Valid values: `1` (yes), `0` (no).
                     */
                    int64_t m_isEncryptSupported;
                    bool m_isEncryptSupportedHasBeenSet;

                    /**
                     * Instance machine model
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * Instance memory size in GB, which is the sum of the memory of all shards.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk storage size in GB, which is the sum of the disk size of all shards.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Instance storage space utilization. It is calculated by dividing the sum of the used disk size of all shards by the total disk size of all shards.
                     */
                    double m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * Size of log storage space in GB
                     */
                    int64_t m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * Product type ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Source AZ
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Replica AZ
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * Shard information
                     */
                    std::vector<ShardBriefInfo> m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * Private network IPv6 address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * Number of CPU cores of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance QPS
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Database engine
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * Whether IPv6 is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * Public IPv6 address, which can be accessed over the public network
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wanVipv6;
                    bool m_wanVipv6HasBeenSet;

                    /**
                     * Public network status. Valid values: `0` (not enabled), `1` (enabled), `2` (disabled), `3`: (enabling), `4` (disabling).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_wanStatusIpv6;
                    bool m_wanStatusIpv6HasBeenSet;

                    /**
                     * Public network IPv6 port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_wanPortIpv6;
                    bool m_wanPortIpv6HasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * DCN type. Valid values: `0` (N/A), `1` (source instance), `2` (disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                    /**
                     * DCN status. Valid values: `0` (N/A), `1` (creating), `2` (syncing), `3` (disconnected).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnStatus;
                    bool m_dcnStatusHasBeenSet;

                    /**
                     * The number of DCN disaster recovery instances
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnDstNum;
                    bool m_dcnDstNumHasBeenSet;

                    /**
                     * Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery read-only instance), `4` (dedicated disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Whether the instance supports setting the connection limit, which is not supported for kernel version 10.1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isMaxUserConnectionsSupported;
                    bool m_isMaxUserConnectionsSupportedHasBeenSet;

                    /**
                     * The displayed database version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * Encryption status. Valid values: `0` (disabled), `1` (enabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_encryptStatus;
                    bool m_encryptStatusHasBeenSet;

                    /**
                     * Type of dedicated cluster. Valid values: `0` (public cloud), `1` (finance cage), `2` (CDC cluster).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_exclusterType;
                    bool m_exclusterTypeHasBeenSet;

                    /**
                     * Nearby VPC access
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rsAccessStrategy;
                    bool m_rsAccessStrategyHasBeenSet;

                    /**
                     * Unclaimed network resource
                     */
                    std::vector<ReservedNetResource> m_reservedNetResources;
                    bool m_reservedNetResourcesHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isPhysicalReplicationSupported;
                    bool m_isPhysicalReplicationSupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCEDETAILRESPONSE_H_
