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
                     * 获取RO group identifier.
                     * @return ReadOnlyGroupId RO group identifier.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置RO group identifier.
                     * @param _readOnlyGroupId RO group identifier.
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
                     * 获取Specifies the read-only group name.
                     * @return ReadOnlyGroupName Specifies the read-only group name.
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置Specifies the read-only group name.
                     * @param _readOnlyGroupName Specifies the read-only group name.
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Primary instance id.
                     * @return MasterDBInstanceId Primary instance id.
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置Primary instance id.
                     * @param _masterDBInstanceId Primary instance id.
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
                     * 获取Specifies the minimum number of instances to retain.
                     * @return MinDelayEliminateReserve Specifies the minimum number of instances to retain.
                     * 
                     */
                    int64_t GetMinDelayEliminateReserve() const;

                    /**
                     * 设置Specifies the minimum number of instances to retain.
                     * @param _minDelayEliminateReserve Specifies the minimum number of instances to retain.
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
                     * 获取Specifies the delay threshold for space size in MB.
                     * @return MaxReplayLatency Specifies the delay threshold for space size in MB.
                     * 
                     */
                    int64_t GetMaxReplayLatency() const;

                    /**
                     * 设置Specifies the delay threshold for space size in MB.
                     * @param _maxReplayLatency Specifies the delay threshold for space size in MB.
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
                     * 获取Specifies the delay size switch. valid values: 0 - turn off; 1 - turn on.
                     * @return ReplayLatencyEliminate Specifies the delay size switch. valid values: 0 - turn off; 1 - turn on.
                     * 
                     */
                    int64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置Specifies the delay size switch. valid values: 0 - turn off; 1 - turn on.
                     * @param _replayLatencyEliminate Specifies the delay size switch. valid values: 0 - turn off; 1 - turn on.
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
                     * 获取Delay time size threshold, in seconds.
                     * @return MaxReplayLag Delay time size threshold, in seconds.
                     * 
                     */
                    double GetMaxReplayLag() const;

                    /**
                     * 设置Delay time size threshold, in seconds.
                     * @param _maxReplayLag Delay time size threshold, in seconds.
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
                     * 获取Delay time switch. 0 - turn off. 1 - turn on.
                     * @return ReplayLagEliminate Delay time switch. 0 - turn off. 1 - turn on.
                     * 
                     */
                    int64_t GetReplayLagEliminate() const;

                    /**
                     * 设置Delay time switch. 0 - turn off. 1 - turn on.
                     * @param _replayLagEliminate Delay time switch. 0 - turn off. 1 - turn on.
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
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
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
                     * 获取Status. valid values: creating, ok, modifying, deleting, deleted.
                     * @return Status Status. valid values: creating, ok, modifying, deleting, deleted.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. valid values: creating, ok, modifying, deleting, deleted.
                     * @param _status Status. valid values: creating, ok, modifying, deleting, deleted.
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
                     * RO group identifier.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * Specifies the read-only group name.
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * Project ID.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Primary instance id.
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * Specifies the minimum number of instances to retain.
                     */
                    int64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                    /**
                     * Specifies the delay threshold for space size in MB.
                     */
                    int64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * Specifies the delay size switch. valid values: 0 - turn off; 1 - turn on.
                     */
                    int64_t m_replayLatencyEliminate;
                    bool m_replayLatencyEliminateHasBeenSet;

                    /**
                     * Delay time size threshold, in seconds.
                     */
                    double m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * Delay time switch. 0 - turn off. 1 - turn on.
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
                     * Status. valid values: creating, ok, modifying, deleting, deleted.
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
