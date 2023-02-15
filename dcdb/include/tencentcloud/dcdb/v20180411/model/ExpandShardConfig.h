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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_EXPANDSHARDCONFIG_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_EXPANDSHARDCONFIG_H_

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
                * Instance upgrade -- Expanding shard
                */
                class ExpandShardConfig : public AbstractModel
                {
                public:
                    ExpandShardConfig();
                    ~ExpandShardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shard IDs in array
                     * @return ShardInstanceIds Shard IDs in array
                     */
                    std::vector<std::string> GetShardInstanceIds() const;

                    /**
                     * 设置Shard IDs in array
                     * @param ShardInstanceIds Shard IDs in array
                     */
                    void SetShardInstanceIds(const std::vector<std::string>& _shardInstanceIds);

                    /**
                     * 判断参数 ShardInstanceIds 是否已赋值
                     * @return ShardInstanceIds 是否已赋值
                     */
                    bool ShardInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Shard memory capacity in GB
                     * @return ShardMemory Shard memory capacity in GB
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置Shard memory capacity in GB
                     * @param ShardMemory Shard memory capacity in GB
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取Shard storage capacity in GB
                     * @return ShardStorage Shard storage capacity in GB
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置Shard storage capacity in GB
                     * @param ShardStorage Shard storage capacity in GB
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取Number of shard nodes
                     * @return ShardNodeCount Number of shard nodes
                     */
                    int64_t GetShardNodeCount() const;

                    /**
                     * 设置Number of shard nodes
                     * @param ShardNodeCount Number of shard nodes
                     */
                    void SetShardNodeCount(const int64_t& _shardNodeCount);

                    /**
                     * 判断参数 ShardNodeCount 是否已赋值
                     * @return ShardNodeCount 是否已赋值
                     */
                    bool ShardNodeCountHasBeenSet() const;

                private:

                    /**
                     * Shard IDs in array
                     */
                    std::vector<std::string> m_shardInstanceIds;
                    bool m_shardInstanceIdsHasBeenSet;

                    /**
                     * Shard memory capacity in GB
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * Shard storage capacity in GB
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * Number of shard nodes
                     */
                    int64_t m_shardNodeCount;
                    bool m_shardNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_EXPANDSHARDCONFIG_H_
