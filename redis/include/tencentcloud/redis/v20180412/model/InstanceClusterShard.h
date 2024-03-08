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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERSHARD_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERSHARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Information list of instance shards
                */
                class InstanceClusterShard : public AbstractModel
                {
                public:
                    InstanceClusterShard();
                    ~InstanceClusterShard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of a shard node
                     * @return ShardName The name of a shard node
                     * 
                     */
                    std::string GetShardName() const;

                    /**
                     * 设置The name of a shard node
                     * @param _shardName The name of a shard node
                     * 
                     */
                    void SetShardName(const std::string& _shardName);

                    /**
                     * 判断参数 ShardName 是否已赋值
                     * @return ShardName 是否已赋值
                     * 
                     */
                    bool ShardNameHasBeenSet() const;

                    /**
                     * 获取The serial number of a shard node
                     * @return ShardId The serial number of a shard node
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置The serial number of a shard node
                     * @param _shardId The serial number of a shard node
                     * 
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取The role of a shard node
- `0`: Master node.
- `1`: Replica node.
                     * @return Role The role of a shard node
- `0`: Master node.
- `1`: Replica node.
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置The role of a shard node
- `0`: Master node.
- `1`: Replica node.
                     * @param _role The role of a shard node
- `0`: Master node.
- `1`: Replica node.
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Number of keys
                     * @return Keys Number of keys
                     * 
                     */
                    int64_t GetKeys() const;

                    /**
                     * 设置Number of keys
                     * @param _keys Number of keys
                     * 
                     */
                    void SetKeys(const int64_t& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Slot information
                     * @return Slots Slot information
                     * 
                     */
                    std::string GetSlots() const;

                    /**
                     * 设置Slot information
                     * @param _slots Slot information
                     * 
                     */
                    void SetSlots(const std::string& _slots);

                    /**
                     * 判断参数 Slots 是否已赋值
                     * @return Slots 是否已赋值
                     * 
                     */
                    bool SlotsHasBeenSet() const;

                    /**
                     * 获取Used Capacity
                     * @return Storage Used Capacity
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Used Capacity
                     * @param _storage Used Capacity
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
                     * 获取Capacity slope
                     * @return StorageSlope Capacity slope
                     * 
                     */
                    double GetStorageSlope() const;

                    /**
                     * 设置Capacity slope
                     * @param _storageSlope Capacity slope
                     * 
                     */
                    void SetStorageSlope(const double& _storageSlope);

                    /**
                     * 判断参数 StorageSlope 是否已赋值
                     * @return StorageSlope 是否已赋值
                     * 
                     */
                    bool StorageSlopeHasBeenSet() const;

                    /**
                     * 获取This field is recommended to use the RunId instead due to spelling inconsistency.
 Meaning: The node ID during instance runtime.

                     * @return Runid This field is recommended to use the RunId instead due to spelling inconsistency.
 Meaning: The node ID during instance runtime.

                     * 
                     */
                    std::string GetRunid() const;

                    /**
                     * 设置This field is recommended to use the RunId instead due to spelling inconsistency.
 Meaning: The node ID during instance runtime.

                     * @param _runid This field is recommended to use the RunId instead due to spelling inconsistency.
 Meaning: The node ID during instance runtime.

                     * 
                     */
                    void SetRunid(const std::string& _runid);

                    /**
                     * 判断参数 Runid 是否已赋值
                     * @return Runid 是否已赋值
                     * 
                     */
                    bool RunidHasBeenSet() const;

                    /**
                     * 获取The node ID during instance runtime.
                     * @return RunId The node ID during instance runtime.
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置The node ID during instance runtime.
                     * @param _runId The node ID during instance runtime.
                     * 
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取Service status
- `0`: Down.
- `1`: On.
                     * @return Connected Service status
- `0`: Down.
- `1`: On.
                     * 
                     */
                    int64_t GetConnected() const;

                    /**
                     * 设置Service status
- `0`: Down.
- `1`: On.
                     * @param _connected Service status
- `0`: Down.
- `1`: On.
                     * 
                     */
                    void SetConnected(const int64_t& _connected);

                    /**
                     * 判断参数 Connected 是否已赋值
                     * @return Connected 是否已赋值
                     * 
                     */
                    bool ConnectedHasBeenSet() const;

                private:

                    /**
                     * The name of a shard node
                     */
                    std::string m_shardName;
                    bool m_shardNameHasBeenSet;

                    /**
                     * The serial number of a shard node
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * The role of a shard node
- `0`: Master node.
- `1`: Replica node.
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Number of keys
                     */
                    int64_t m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Slot information
                     */
                    std::string m_slots;
                    bool m_slotsHasBeenSet;

                    /**
                     * Used Capacity
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Capacity slope
                     */
                    double m_storageSlope;
                    bool m_storageSlopeHasBeenSet;

                    /**
                     * This field is recommended to use the RunId instead due to spelling inconsistency.
 Meaning: The node ID during instance runtime.

                     */
                    std::string m_runid;
                    bool m_runidHasBeenSet;

                    /**
                     * The node ID during instance runtime.
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * Service status
- `0`: Down.
- `1`: On.
                     */
                    int64_t m_connected;
                    bool m_connectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERSHARD_H_
