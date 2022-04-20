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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBSHARDINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBSHARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * TDSQL shard information.
                */
                class DCDBShardInfo : public AbstractModel
                {
                public:
                    DCDBShardInfo();
                    ~DCDBShardInfo() = default;
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
                     * 获取Shard SQL passthrough ID, which is used to pass through SQL statements to the specified shard for execution.
                     * @return ShardSerialId Shard SQL passthrough ID, which is used to pass through SQL statements to the specified shard for execution.
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置Shard SQL passthrough ID, which is used to pass through SQL statements to the specified shard for execution.
                     * @param ShardSerialId Shard SQL passthrough ID, which is used to pass through SQL statements to the specified shard for execution.
                     */
                    void SetShardSerialId(const std::string& _shardSerialId);

                    /**
                     * 判断参数 ShardSerialId 是否已赋值
                     * @return ShardSerialId 是否已赋值
                     */
                    bool ShardSerialIdHasBeenSet() const;

                    /**
                     * 获取Globally unique shard ID
                     * @return ShardInstanceId Globally unique shard ID
                     */
                    std::string GetShardInstanceId() const;

                    /**
                     * 设置Globally unique shard ID
                     * @param ShardInstanceId Globally unique shard ID
                     */
                    void SetShardInstanceId(const std::string& _shardInstanceId);

                    /**
                     * 判断参数 ShardInstanceId 是否已赋值
                     * @return ShardInstanceId 是否已赋值
                     */
                    bool ShardInstanceIdHasBeenSet() const;

                    /**
                     * 获取Status. 0: creating; 1: processing; 2: running; 3: shard not initialized.
                     * @return Status Status. 0: creating; 1: processing; 2: running; 3: shard not initialized.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: creating; 1: processing; 2: running; 3: shard not initialized.
                     * @param Status Status. 0: creating; 1: processing; 2: running; 3: shard not initialized.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取VPC ID in string format
                     * @return VpcId VPC ID in string format
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in string format
                     * @param VpcId VPC ID in string format
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID in string format
                     * @return SubnetId VPC subnet ID in string format
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID in string format
                     * @param SubnetId VPC subnet ID in string format
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

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
                     * 获取Number of nodes. 2: one source and one replica; 3: one source and two replicas
                     * @return NodeCount Number of nodes. 2: one source and one replica; 3: one source and two replicas
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes. 2: one source and one replica; 3: one source and two replicas
                     * @param NodeCount Number of nodes. 2: one source and one replica; 3: one source and two replicas
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Storage utilization in %
                     * @return StorageUsage Storage utilization in %
                     */
                    double GetStorageUsage() const;

                    /**
                     * 设置Storage utilization in %
                     * @param StorageUsage Storage utilization in %
                     */
                    void SetStorageUsage(const double& _storageUsage);

                    /**
                     * 判断参数 StorageUsage 是否已赋值
                     * @return StorageUsage 是否已赋值
                     */
                    bool StorageUsageHasBeenSet() const;

                    /**
                     * 获取Memory utilization in %
                     * @return MemoryUsage Memory utilization in %
                     */
                    double GetMemoryUsage() const;

                    /**
                     * 设置Memory utilization in %
                     * @param MemoryUsage Memory utilization in %
                     */
                    void SetMemoryUsage(const double& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     */
                    bool MemoryUsageHasBeenSet() const;

                    /**
                     * 获取Numeric shard ID (this field is obsolete and should not be depended on)
                     * @return ShardId Numeric shard ID (this field is obsolete and should not be depended on)
                     */
                    int64_t GetShardId() const;

                    /**
                     * 设置Numeric shard ID (this field is obsolete and should not be depended on)
                     * @param ShardId Numeric shard ID (this field is obsolete and should not be depended on)
                     */
                    void SetShardId(const int64_t& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取Product ID
                     * @return Pid Product ID
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Product ID
                     * @param Pid Product ID
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Proxy version
                     * @return ProxyVersion Proxy version
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置Proxy version
                     * @param ProxyVersion Proxy version
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Paymode Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Paymode Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取Source AZ of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShardMasterZone Source AZ of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetShardMasterZone() const;

                    /**
                     * 设置Source AZ of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ShardMasterZone Source AZ of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetShardMasterZone(const std::string& _shardMasterZone);

                    /**
                     * 判断参数 ShardMasterZone 是否已赋值
                     * @return ShardMasterZone 是否已赋值
                     */
                    bool ShardMasterZoneHasBeenSet() const;

                    /**
                     * 获取List of replica AZs of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShardSlaveZones List of replica AZs of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetShardSlaveZones() const;

                    /**
                     * 设置List of replica AZs of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ShardSlaveZones List of replica AZs of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetShardSlaveZones(const std::vector<std::string>& _shardSlaveZones);

                    /**
                     * 判断参数 ShardSlaveZones 是否已赋值
                     * @return ShardSlaveZones 是否已赋值
                     */
                    bool ShardSlaveZonesHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param Cpu Number of CPU cores
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取The value range of shardkey, which includes 64 hash values, such as 0-31 or 32-63.
                     * @return Range The value range of shardkey, which includes 64 hash values, such as 0-31 or 32-63.
                     */
                    std::string GetRange() const;

                    /**
                     * 设置The value range of shardkey, which includes 64 hash values, such as 0-31 or 32-63.
                     * @param Range The value range of shardkey, which includes 64 hash values, such as 0-31 or 32-63.
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     */
                    bool RangeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Shard SQL passthrough ID, which is used to pass through SQL statements to the specified shard for execution.
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                    /**
                     * Globally unique shard ID
                     */
                    std::string m_shardInstanceId;
                    bool m_shardInstanceIdHasBeenSet;

                    /**
                     * Status. 0: creating; 1: processing; 2: running; 3: shard not initialized.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * VPC ID in string format
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID in string format
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

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
                     * Expiration time
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Number of nodes. 2: one source and one replica; 3: one source and two replicas
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Storage utilization in %
                     */
                    double m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * Memory utilization in %
                     */
                    double m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * Numeric shard ID (this field is obsolete and should not be depended on)
                     */
                    int64_t m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * Product ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Proxy version
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * Source AZ of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_shardMasterZone;
                    bool m_shardMasterZoneHasBeenSet;

                    /**
                     * List of replica AZs of the shard
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_shardSlaveZones;
                    bool m_shardSlaveZonesHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * The value range of shardkey, which includes 64 hash values, such as 0-31 or 32-63.
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBSHARDINFO_H_
