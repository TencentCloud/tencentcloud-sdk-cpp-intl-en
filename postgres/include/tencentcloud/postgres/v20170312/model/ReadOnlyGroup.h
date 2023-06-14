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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_READONLYGROUP_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_READONLYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstance.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>
#include <tencentcloud/postgres/v20170312/model/NetworkAccess.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RO group information
                */
                class ReadOnlyGroup : public AbstractModel
                {
                public:
                    ReadOnlyGroup();
                    ~ReadOnlyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RO group identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ReadOnlyGroupId RO group identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置RO group identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _readOnlyGroupId RO group identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取RO group name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ReadOnlyGroupName RO group name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置RO group name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _readOnlyGroupName RO group name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _projectId Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Primary instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MasterDBInstanceId Primary instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置Primary instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _masterDBInstanceId Primary instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     * 
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取The minimum number of read-only replicas that must be retained in an RO group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MinDelayEliminateReserve The minimum number of read-only replicas that must be retained in an RO group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinDelayEliminateReserve() const;

                    /**
                     * 设置The minimum number of read-only replicas that must be retained in an RO group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _minDelayEliminateReserve The minimum number of read-only replicas that must be retained in an RO group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinDelayEliminateReserve(const int64_t& _minDelayEliminateReserve);

                    /**
                     * 判断参数 MinDelayEliminateReserve 是否已赋值
                     * @return MinDelayEliminateReserve 是否已赋值
                     * 
                     */
                    bool MinDelayEliminateReserveHasBeenSet() const;

                    /**
                     * 获取Delayed log size threshold
                     * @return MaxReplayLatency Delayed log size threshold
                     * 
                     */
                    int64_t GetMaxReplayLatency() const;

                    /**
                     * 设置Delayed log size threshold
                     * @param _maxReplayLatency Delayed log size threshold
                     * 
                     */
                    void SetMaxReplayLatency(const int64_t& _maxReplayLatency);

                    /**
                     * 判断参数 MaxReplayLatency 是否已赋值
                     * @return MaxReplayLatency 是否已赋值
                     * 
                     */
                    bool MaxReplayLatencyHasBeenSet() const;

                    /**
                     * 获取Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @return ReplayLatencyEliminate Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    int64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @param _replayLatencyEliminate Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    void SetReplayLatencyEliminate(const int64_t& _replayLatencyEliminate);

                    /**
                     * 判断参数 ReplayLatencyEliminate 是否已赋值
                     * @return ReplayLatencyEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLatencyEliminateHasBeenSet() const;

                    /**
                     * 获取Delay threshold
                     * @return MaxReplayLag Delay threshold
                     * 
                     */
                    double GetMaxReplayLag() const;

                    /**
                     * 设置Delay threshold
                     * @param _maxReplayLag Delay threshold
                     * 
                     */
                    void SetMaxReplayLag(const double& _maxReplayLag);

                    /**
                     * 判断参数 MaxReplayLag 是否已赋值
                     * @return MaxReplayLag 是否已赋值
                     * 
                     */
                    bool MaxReplayLagHasBeenSet() const;

                    /**
                     * 获取Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @return ReplayLagEliminate Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    int64_t GetReplayLagEliminate() const;

                    /**
                     * 设置Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @param _replayLagEliminate Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    void SetReplayLagEliminate(const int64_t& _replayLagEliminate);

                    /**
                     * 判断参数 ReplayLagEliminate 是否已赋值
                     * @return ReplayLagEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLagEliminateHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return Region Region ID
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region ID
                     * @param _region Region ID
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
                     * 获取Availability zone ID
                     * @return Zone Availability zone ID
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone ID
                     * @param _zone Availability zone ID
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
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance details
                     * @return ReadOnlyDBInstanceList Instance details
                     * 
                     */
                    std::vector<DBInstance> GetReadOnlyDBInstanceList() const;

                    /**
                     * 设置Instance details
                     * @param _readOnlyDBInstanceList Instance details
                     * 
                     */
                    void SetReadOnlyDBInstanceList(const std::vector<DBInstance>& _readOnlyDBInstanceList);

                    /**
                     * 判断参数 ReadOnlyDBInstanceList 是否已赋值
                     * @return ReadOnlyDBInstanceList 是否已赋值
                     * 
                     */
                    bool ReadOnlyDBInstanceListHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic load balancing
                     * @return Rebalance Whether to enable automatic load balancing
                     * 
                     */
                    int64_t GetRebalance() const;

                    /**
                     * 设置Whether to enable automatic load balancing
                     * @param _rebalance Whether to enable automatic load balancing
                     * 
                     */
                    void SetRebalance(const int64_t& _rebalance);

                    /**
                     * 判断参数 Rebalance 是否已赋值
                     * @return Rebalance 是否已赋值
                     * 
                     */
                    bool RebalanceHasBeenSet() const;

                    /**
                     * 获取Network information
                     * @return DBInstanceNetInfo Network information
                     * 
                     */
                    std::vector<DBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置Network information
                     * @param _dBInstanceNetInfo Network information
                     * 
                     */
                    void SetDBInstanceNetInfo(const std::vector<DBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     * 
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取Network access list of the RO group (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NetworkAccessList Network access list of the RO group (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NetworkAccess> GetNetworkAccessList() const;

                    /**
                     * 设置Network access list of the RO group (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _networkAccessList Network access list of the RO group (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkAccessList(const std::vector<NetworkAccess>& _networkAccessList);

                    /**
                     * 判断参数 NetworkAccessList 是否已赋值
                     * @return NetworkAccessList 是否已赋值
                     * 
                     */
                    bool NetworkAccessListHasBeenSet() const;

                private:

                    /**
                     * RO group identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * RO group name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Primary instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * The minimum number of read-only replicas that must be retained in an RO group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                    /**
                     * Delayed log size threshold
                     */
                    int64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t m_replayLatencyEliminate;
                    bool m_replayLatencyEliminateHasBeenSet;

                    /**
                     * Delay threshold
                     */
                    double m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t m_replayLagEliminate;
                    bool m_replayLagEliminateHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Region ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone ID
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance details
                     */
                    std::vector<DBInstance> m_readOnlyDBInstanceList;
                    bool m_readOnlyDBInstanceListHasBeenSet;

                    /**
                     * Whether to enable automatic load balancing
                     */
                    int64_t m_rebalance;
                    bool m_rebalanceHasBeenSet;

                    /**
                     * Network information
                     */
                    std::vector<DBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * Network access list of the RO group (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<NetworkAccess> m_networkAccessList;
                    bool m_networkAccessListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_READONLYGROUP_H_
