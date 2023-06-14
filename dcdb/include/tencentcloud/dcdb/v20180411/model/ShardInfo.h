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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDINFO_H_

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
                * Shard information
                */
                class ShardInfo : public AbstractModel
                {
                public:
                    ShardInfo();
                    ~ShardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shard ID
                     * @return ShardInstanceId Shard ID
                     * 
                     */
                    std::string GetShardInstanceId() const;

                    /**
                     * 设置Shard ID
                     * @param _shardInstanceId Shard ID
                     * 
                     */
                    void SetShardInstanceId(const std::string& _shardInstanceId);

                    /**
                     * 判断参数 ShardInstanceId 是否已赋值
                     * @return ShardInstanceId 是否已赋值
                     * 
                     */
                    bool ShardInstanceIdHasBeenSet() const;

                    /**
                     * 获取Shard set ID
                     * @return ShardSerialId Shard set ID
                     * 
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置Shard set ID
                     * @param _shardSerialId Shard set ID
                     * 
                     */
                    void SetShardSerialId(const std::string& _shardSerialId);

                    /**
                     * 判断参数 ShardSerialId 是否已赋值
                     * @return ShardSerialId 是否已赋值
                     * 
                     */
                    bool ShardSerialIdHasBeenSet() const;

                    /**
                     * 获取Status. 0: creating; 1: processing; 2: running; 3: shard not initialized; -2: shard deleted
                     * @return Status Status. 0: creating; 1: processing; 2: running; 3: shard not initialized; -2: shard deleted
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: creating; 1: processing; 2: running; 3: shard not initialized; -2: shard deleted
                     * @param _status Status. 0: creating; 1: processing; 2: running; 3: shard not initialized; -2: shard deleted
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
                     * 获取Creation time
                     * @return Createtime Creation time
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置Creation time
                     * @param _createtime Creation time
                     * 
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取Memory size in GB
                     * @return Memory Memory size in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB
                     * @param _memory Memory size in GB
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
                     * 获取Storage capacity in GB
                     * @return Storage Storage capacity in GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity in GB
                     * @param _storage Storage capacity in GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Numeric ID of a shard
                     * @return ShardId Numeric ID of a shard
                     * 
                     */
                    int64_t GetShardId() const;

                    /**
                     * 设置Numeric ID of a shard
                     * @param _shardId Numeric ID of a shard
                     * 
                     */
                    void SetShardId(const int64_t& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取Number of nodes. 2: one primary and one secondary; 3: one primary and two secondaries
                     * @return NodeCount Number of nodes. 2: one primary and one secondary; 3: one primary and two secondaries
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes. 2: one primary and one secondary; 3: one primary and two secondaries
                     * @param _nodeCount Number of nodes. 2: one primary and one secondary; 3: one primary and two secondaries
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Product type ID (this field is obsolete and should not be depended on)
                     * @return Pid Product type ID (this field is obsolete and should not be depended on)
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Product type ID (this field is obsolete and should not be depended on)
                     * @param _pid Product type ID (this field is obsolete and should not be depended on)
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpu Number of CPU cores
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                private:

                    /**
                     * Shard ID
                     */
                    std::string m_shardInstanceId;
                    bool m_shardInstanceIdHasBeenSet;

                    /**
                     * Shard set ID
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                    /**
                     * Status. 0: creating; 1: processing; 2: running; 3: shard not initialized; -2: shard deleted
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

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
                     * Numeric ID of a shard
                     */
                    int64_t m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * Number of nodes. 2: one primary and one secondary; 3: one primary and two secondaries
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Product type ID (this field is obsolete and should not be depended on)
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDINFO_H_
