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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDBRIEFINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/NodeInfo.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * TDSQL shard information
                */
                class ShardBriefInfo : public AbstractModel
                {
                public:
                    ShardBriefInfo();
                    ~ShardBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shard serial ID
                     * @return ShardSerialId Shard serial ID
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置Shard serial ID
                     * @param ShardSerialId Shard serial ID
                     */
                    void SetShardSerialId(const std::string& _shardSerialId);

                    /**
                     * 判断参数 ShardSerialId 是否已赋值
                     * @return ShardSerialId 是否已赋值
                     */
                    bool ShardSerialIdHasBeenSet() const;

                    /**
                     * 获取Shard ID, such as shard-7vg1o339.
                     * @return ShardInstanceId Shard ID, such as shard-7vg1o339.
                     */
                    std::string GetShardInstanceId() const;

                    /**
                     * 设置Shard ID, such as shard-7vg1o339.
                     * @param ShardInstanceId Shard ID, such as shard-7vg1o339.
                     */
                    void SetShardInstanceId(const std::string& _shardInstanceId);

                    /**
                     * 判断参数 ShardInstanceId 是否已赋值
                     * @return ShardInstanceId 是否已赋值
                     */
                    bool ShardInstanceIdHasBeenSet() const;

                    /**
                     * 获取Shard running status
                     * @return Status Shard running status
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Shard running status
                     * @param Status Shard running status
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Description of shard running status
                     * @return StatusDesc Description of shard running status
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Description of shard running status
                     * @param StatusDesc Description of shard running status
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Shard creation time
                     * @return CreateTime Shard creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Shard creation time
                     * @param CreateTime Shard creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Shard memory size in GB
                     * @return Memory Shard memory size in GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Shard memory size in GB
                     * @param Memory Shard memory size in GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Shard disk size in GB
                     * @return Storage Shard disk size in GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Shard disk size in GB
                     * @param Storage Shard disk size in GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Log disk space size of a shard in GB
                     * @return LogDisk Log disk space size of a shard in GB
                     */
                    int64_t GetLogDisk() const;

                    /**
                     * 设置Log disk space size of a shard in GB
                     * @param LogDisk Log disk space size of a shard in GB
                     */
                    void SetLogDisk(const int64_t& _logDisk);

                    /**
                     * 判断参数 LogDisk 是否已赋值
                     * @return LogDisk 是否已赋值
                     */
                    bool LogDiskHasBeenSet() const;

                    /**
                     * 获取Number of shard nodes
                     * @return NodeCount Number of shard nodes
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of shard nodes
                     * @param NodeCount Number of shard nodes
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Disk space utilization of a shard
                     * @return StorageUsage Disk space utilization of a shard
                     */
                    double GetStorageUsage() const;

                    /**
                     * 设置Disk space utilization of a shard
                     * @param StorageUsage Disk space utilization of a shard
                     */
                    void SetStorageUsage(const double& _storageUsage);

                    /**
                     * 判断参数 StorageUsage 是否已赋值
                     * @return StorageUsage 是否已赋值
                     */
                    bool StorageUsageHasBeenSet() const;

                    /**
                     * 获取Version information of the shard proxy
                     * @return ProxyVersion Version information of the shard proxy
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置Version information of the shard proxy
                     * @param ProxyVersion Version information of the shard proxy
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取Source AZ of a shard
                     * @return ShardMasterZone Source AZ of a shard
                     */
                    std::string GetShardMasterZone() const;

                    /**
                     * 设置Source AZ of a shard
                     * @param ShardMasterZone Source AZ of a shard
                     */
                    void SetShardMasterZone(const std::string& _shardMasterZone);

                    /**
                     * 判断参数 ShardMasterZone 是否已赋值
                     * @return ShardMasterZone 是否已赋值
                     */
                    bool ShardMasterZoneHasBeenSet() const;

                    /**
                     * 获取Replica AZ of a shard
                     * @return ShardSlaveZones Replica AZ of a shard
                     */
                    std::vector<std::string> GetShardSlaveZones() const;

                    /**
                     * 设置Replica AZ of a shard
                     * @param ShardSlaveZones Replica AZ of a shard
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
                     * 获取Node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodesInfo Node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> GetNodesInfo() const;

                    /**
                     * 设置Node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NodesInfo Node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNodesInfo(const std::vector<NodeInfo>& _nodesInfo);

                    /**
                     * 判断参数 NodesInfo 是否已赋值
                     * @return NodesInfo 是否已赋值
                     */
                    bool NodesInfoHasBeenSet() const;

                private:

                    /**
                     * Shard serial ID
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                    /**
                     * Shard ID, such as shard-7vg1o339.
                     */
                    std::string m_shardInstanceId;
                    bool m_shardInstanceIdHasBeenSet;

                    /**
                     * Shard running status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Description of shard running status
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Shard creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Shard memory size in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Shard disk size in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Log disk space size of a shard in GB
                     */
                    int64_t m_logDisk;
                    bool m_logDiskHasBeenSet;

                    /**
                     * Number of shard nodes
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Disk space utilization of a shard
                     */
                    double m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * Version information of the shard proxy
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * Source AZ of a shard
                     */
                    std::string m_shardMasterZone;
                    bool m_shardMasterZoneHasBeenSet;

                    /**
                     * Replica AZ of a shard
                     */
                    std::vector<std::string> m_shardSlaveZones;
                    bool m_shardSlaveZonesHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> m_nodesInfo;
                    bool m_nodesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDBRIEFINFO_H_
