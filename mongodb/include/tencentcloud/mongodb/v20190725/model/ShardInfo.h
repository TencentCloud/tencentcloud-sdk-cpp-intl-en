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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SHARDINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SHARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Details of an instance shard
                */
                class ShardInfo : public AbstractModel
                {
                public:
                    ShardInfo();
                    ~ShardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Used shard capacity
                     * @return UsedVolume Used shard capacity
                     */
                    double GetUsedVolume() const;

                    /**
                     * 设置Used shard capacity
                     * @param UsedVolume Used shard capacity
                     */
                    void SetUsedVolume(const double& _usedVolume);

                    /**
                     * 判断参数 UsedVolume 是否已赋值
                     * @return UsedVolume 是否已赋值
                     */
                    bool UsedVolumeHasBeenSet() const;

                    /**
                     * 获取Shard ID
                     * @return ReplicaSetId Shard ID
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置Shard ID
                     * @param ReplicaSetId Shard ID
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                    /**
                     * 获取Shard name
                     * @return ReplicaSetName Shard name
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置Shard name
                     * @param ReplicaSetName Shard name
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取Shard memory size in MB
                     * @return Memory Shard memory size in MB
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Shard memory size in MB
                     * @param Memory Shard memory size in MB
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Shard disk size in MB
                     * @return Volume Shard disk size in MB
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Shard disk size in MB
                     * @param Volume Shard disk size in MB
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Shard oplog size in MB
                     * @return OplogSize Shard oplog size in MB
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置Shard oplog size in MB
                     * @param OplogSize Shard oplog size in MB
                     */
                    void SetOplogSize(const uint64_t& _oplogSize);

                    /**
                     * 判断参数 OplogSize 是否已赋值
                     * @return OplogSize 是否已赋值
                     */
                    bool OplogSizeHasBeenSet() const;

                    /**
                     * 获取Number of slave nodes of a shard
                     * @return SecondaryNum Number of slave nodes of a shard
                     */
                    uint64_t GetSecondaryNum() const;

                    /**
                     * 设置Number of slave nodes of a shard
                     * @param SecondaryNum Number of slave nodes of a shard
                     */
                    void SetSecondaryNum(const uint64_t& _secondaryNum);

                    /**
                     * 判断参数 SecondaryNum 是否已赋值
                     * @return SecondaryNum 是否已赋值
                     */
                    bool SecondaryNumHasBeenSet() const;

                    /**
                     * 获取Shard physical ID
                     * @return RealReplicaSetId Shard physical ID
                     */
                    std::string GetRealReplicaSetId() const;

                    /**
                     * 设置Shard physical ID
                     * @param RealReplicaSetId Shard physical ID
                     */
                    void SetRealReplicaSetId(const std::string& _realReplicaSetId);

                    /**
                     * 判断参数 RealReplicaSetId 是否已赋值
                     * @return RealReplicaSetId 是否已赋值
                     */
                    bool RealReplicaSetIdHasBeenSet() const;

                private:

                    /**
                     * Used shard capacity
                     */
                    double m_usedVolume;
                    bool m_usedVolumeHasBeenSet;

                    /**
                     * Shard ID
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                    /**
                     * Shard name
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * Shard memory size in MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Shard disk size in MB
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Shard oplog size in MB
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * Number of slave nodes of a shard
                     */
                    uint64_t m_secondaryNum;
                    bool m_secondaryNumHasBeenSet;

                    /**
                     * Shard physical ID
                     */
                    std::string m_realReplicaSetId;
                    bool m_realReplicaSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SHARDINFO_H_
