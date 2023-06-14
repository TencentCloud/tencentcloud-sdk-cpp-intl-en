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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_ADDSHARDCONFIG_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_ADDSHARDCONFIG_H_

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
                * Instance upgrade -- Adding shard
                */
                class AddShardConfig : public AbstractModel
                {
                public:
                    AddShardConfig();
                    ~AddShardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of shards to be added
                     * @return ShardCount The number of shards to be added
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置The number of shards to be added
                     * @param _shardCount The number of shards to be added
                     * 
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取Shard memory capacity in GB
                     * @return ShardMemory Shard memory capacity in GB
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置Shard memory capacity in GB
                     * @param _shardMemory Shard memory capacity in GB
                     * 
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     * 
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取Shard storage capacity in GB
                     * @return ShardStorage Shard storage capacity in GB
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置Shard storage capacity in GB
                     * @param _shardStorage Shard storage capacity in GB
                     * 
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     * 
                     */
                    bool ShardStorageHasBeenSet() const;

                private:

                    /**
                     * The number of shards to be added
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_ADDSHARDCONFIG_H_
