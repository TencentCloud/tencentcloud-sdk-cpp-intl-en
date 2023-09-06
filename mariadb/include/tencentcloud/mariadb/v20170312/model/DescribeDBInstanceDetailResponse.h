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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ResourceTag.h>
#include <tencentcloud/mariadb/v20170312/model/NodeInfo.h>
#include <tencentcloud/mariadb/v20170312/model/DCNReplicaConfig.h>
#include <tencentcloud/mariadb/v20170312/model/DCNReplicaStatus.h>
#include <tencentcloud/mariadb/v20170312/model/ReservedNetResource.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceDetail response structure.
                */
                class DescribeDBInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceDetailResponse();
                    ~DescribeDBInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
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
                     * 获取Instance status
                     * @return Status Instance status
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
                     * 获取Private IP address
                     * @return Vip Private IP address
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
                     * 获取Private port
                     * @return Vport Private port
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
                     * 获取Whether it is a temp instance. Valid values: `0` (no), non-zero value (yes).
                     * @return IsTmp Whether it is a temp instance. Valid values: `0` (no), non-zero value (yes).
                     * 
                     */
                    int64_t GetIsTmp() const;

                    /**
                     * 判断参数 IsTmp 是否已赋值
                     * @return IsTmp 是否已赋值
                     * 
                     */
                    bool IsTmpHasBeenSet() const;

                    /**
                     * 获取Number of nodes. Valid values: `2` (1 primary-1 replica), `3` (1 primary-2 replicas).
                     * @return NodeCount Number of nodes. Valid values: `2` (1 primary-1 replica), `3` (1 primary-2 replicas).
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
                     * 获取Instance region name, such as ap-shanghai.
                     * @return Region Instance region name, such as ap-shanghai.
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
                     * 获取Instance AZ name, such as ap-guangzhou-1.
                     * @return Zone Instance AZ name, such as ap-guangzhou-1.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPC ID in string type
                     * @return VpcId VPC ID in string type
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
                     * 获取VPC subnet ID in string type
                     * @return SubnetId VPC subnet ID in string type
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
                     * 获取Public network port
                     * @return WanPort Public network port
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
                     * 获取TDSQL version information
                     * @return TdsqlVersion TDSQL version information
                     * 
                     */
                    std::string GetTdsqlVersion() const;

                    /**
                     * 判断参数 TdsqlVersion 是否已赋值
                     * @return TdsqlVersion 是否已赋值
                     * 
                     */
                    bool TdsqlVersionHasBeenSet() const;

                    /**
                     * 获取Instance memory capacity in GB
                     * @return Memory Instance memory capacity in GB
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
                     * 获取Instance storage capacity in GB
                     * @return Storage Instance storage capacity in GB
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
                     * 获取Primary AZ, such as ap-shanghai-1.
                     * @return MasterZone Primary AZ, such as ap-shanghai-1.
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
                     * 获取List of replica AZs, such as ap-shanghai-2.
                     * @return SlaveZones List of replica AZs, such as ap-shanghai-2.
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
                     * 获取Auto-renewal flag. Valid values: `0` (no), `1` (yes).
                     * @return AutoRenewFlag Auto-renewal flag. Valid values: `0` (no), `1` (yes).
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
                     * 获取Dedicated cluster ID, which is empty for a non-dedicated cluster instance.
                     * @return ExclusterId Dedicated cluster ID, which is empty for a non-dedicated cluster instance.
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
                     * 获取Whether the instance supports audit
                     * @return IsAuditSupported Whether the instance supports audit
                     * 
                     */
                    bool GetIsAuditSupported() const;

                    /**
                     * 判断参数 IsAuditSupported 是否已赋值
                     * @return IsAuditSupported 是否已赋值
                     * 
                     */
                    bool IsAuditSupportedHasBeenSet() const;

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
                     * 获取Model information
                     * @return Machine Model information
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
                     * 获取Storage space utilization
                     * @return StorageUsage Storage space utilization
                     * 
                     */
                    std::string GetStorageUsage() const;

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
                     * 获取Whether data encryption is supported. Valid values: `1` (yes), `0`: (no).
                     * @return IsEncryptSupported Whether data encryption is supported. Valid values: `1` (yes), `0`: (no).
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
                     * @return Cpu Number of CPU cores of an instance.
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
                     * 获取Max QPS
                     * @return Qps Max QPS
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
                     * 获取Database version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbVersion Database version
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取DCN type. Valid values: `0` (N/A), `1` (primary instance), `2` (disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DcnFlag DCN type. Valid values: `0` (N/A), `1` (primary instance), `2` (disaster recovery read-only instance)
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
                     * 获取DCN status. Valid values: `0` (N/A), `1` (creating), `2` (syncing), `3` (disconnected)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DcnStatus DCN status. Valid values: `0` (N/A), `1` (creating), `2` (syncing), `3` (disconnected)
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
                     * 获取Number of disaster recovery read-only instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DcnDstNum Number of disaster recovery read-only instances
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
                     * 获取Instance node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodesInfo Instance node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeInfo> GetNodesInfo() const;

                    /**
                     * 判断参数 NodesInfo 是否已赋值
                     * @return NodesInfo 是否已赋值
                     * 
                     */
                    bool NodesInfoHasBeenSet() const;

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
                     * 获取Configuration information of DCN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReplicaConfig Configuration information of DCN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DCNReplicaConfig GetReplicaConfig() const;

                    /**
                     * 判断参数 ReplicaConfig 是否已赋值
                     * @return ReplicaConfig 是否已赋值
                     * 
                     */
                    bool ReplicaConfigHasBeenSet() const;

                    /**
                     * 获取Running status of DCN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReplicaStatus Running status of DCN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DCNReplicaStatus GetReplicaStatus() const;

                    /**
                     * 判断参数 ReplicaStatus 是否已赋值
                     * @return ReplicaStatus 是否已赋值
                     * 
                     */
                    bool ReplicaStatusHasBeenSet() const;

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
                     * 获取Whether physical replication is supported.
                     * @return IsPhysicalReplicationSupported Whether physical replication is supported.
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
                     * Instance status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Current status of the instance
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Whether it is a temp instance. Valid values: `0` (no), non-zero value (yes).
                     */
                    int64_t m_isTmp;
                    bool m_isTmpHasBeenSet;

                    /**
                     * Number of nodes. Valid values: `2` (1 primary-1 replica), `3` (1 primary-2 replicas).
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Instance region name, such as ap-shanghai.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance AZ name, such as ap-guangzhou-1.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC ID in string type
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID in string type
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
                     * Public network port
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Project ID of the instance
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * TDSQL version information
                     */
                    std::string m_tdsqlVersion;
                    bool m_tdsqlVersionHasBeenSet;

                    /**
                     * Instance memory capacity in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance storage capacity in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Primary AZ, such as ap-shanghai-1.
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * List of replica AZs, such as ap-shanghai-2.
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Dedicated cluster ID, which is empty for a non-dedicated cluster instance.
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
                     * Whether the instance supports audit
                     */
                    bool m_isAuditSupported;
                    bool m_isAuditSupportedHasBeenSet;

                    /**
                     * Expiration time of the instance in the format of 2006-01-02 15:04:05
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Model information
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * Storage space utilization
                     */
                    std::string m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * Size of log storage space in GB
                     */
                    int64_t m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * Whether data encryption is supported. Valid values: `1` (yes), `0`: (no).
                     */
                    int64_t m_isEncryptSupported;
                    bool m_isEncryptSupportedHasBeenSet;

                    /**
                     * Private network IPv6 address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * Number of CPU cores of an instance.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Product type ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Max QPS
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

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
                     * Database engine
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * Database version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * DCN type. Valid values: `0` (N/A), `1` (primary instance), `2` (disaster recovery read-only instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                    /**
                     * DCN status. Valid values: `0` (N/A), `1` (creating), `2` (syncing), `3` (disconnected)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dcnStatus;
                    bool m_dcnStatusHasBeenSet;

                    /**
                     * Number of disaster recovery read-only instances
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
                     * Instance node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> m_nodesInfo;
                    bool m_nodesInfoHasBeenSet;

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
                     * Configuration information of DCN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DCNReplicaConfig m_replicaConfig;
                    bool m_replicaConfigHasBeenSet;

                    /**
                     * Running status of DCN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DCNReplicaStatus m_replicaStatus;
                    bool m_replicaStatusHasBeenSet;

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
                     * Whether physical replication is supported.
                     */
                    bool m_isPhysicalReplicationSupported;
                    bool m_isPhysicalReplicationSupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
