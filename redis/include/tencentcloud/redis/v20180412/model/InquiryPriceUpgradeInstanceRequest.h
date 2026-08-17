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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * InquiryPriceUpgradeInstance request structure.
                */
                class InquiryPriceUpgradeInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeInstanceRequest();
                    ~InquiryPriceUpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Shard size. Unit: MB.</p>
                     * @return MemSize <p>Shard size. Unit: MB.</p>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>Shard size. Unit: MB.</p>
                     * @param _memSize <p>Shard size. Unit: MB.</p>
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Number of shards. - For instances with standard architecture, RedisShardNum defaults to 1. - This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Standalone Edition.</p>
                     * @return RedisShardNum <p>Number of shards. - For instances with standard architecture, RedisShardNum defaults to 1. - This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Standalone Edition.</p>
                     * 
                     */
                    uint64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>Number of shards. - For instances with standard architecture, RedisShardNum defaults to 1. - This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Standalone Edition.</p>
                     * @param _redisShardNum <p>Number of shards. - For instances with standard architecture, RedisShardNum defaults to 1. - This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Standalone Edition.</p>
                     * 
                     */
                    void SetRedisShardNum(const uint64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     * 
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取<p>Number of replicas. This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Single-node Edition.</p>
                     * @return RedisReplicasNum <p>Number of replicas. This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Single-node Edition.</p>
                     * 
                     */
                    uint64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>Number of replicas. This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Single-node Edition.</p>
                     * @param _redisReplicasNum <p>Number of replicas. This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Single-node Edition.</p>
                     * 
                     */
                    void SetRedisReplicasNum(const uint64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Shard size. Unit: MB.</p>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Number of shards. - For instances with standard architecture, RedisShardNum defaults to 1. - This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Standalone Edition.</p>
                     */
                    uint64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>Number of replicas. This parameter is not required for Redis 2.8 Primary-Secondary Edition, CKV Primary-Secondary Edition, and Redis 2.8 Single-node Edition.</p>
                     */
                    uint64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCEREQUEST_H_
