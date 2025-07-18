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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * UpgradeInstance request structure.
                */
                class UpgradeInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceRequest();
                    ~UpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of instance to be modified.
                     * @return InstanceId The ID of instance to be modified.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ID of instance to be modified.
                     * @param _instanceId The ID of instance to be modified.
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
                     * 获取New memory size of an instance shard. <ul><li>Unit: MB. </li><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li><li>In case of capacity reduction, the new specification must be at least 1.3 times the used capacity; otherwise, the operation will fail.</li></ul>
                     * @return MemSize New memory size of an instance shard. <ul><li>Unit: MB. </li><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li><li>In case of capacity reduction, the new specification must be at least 1.3 times the used capacity; otherwise, the operation will fail.</li></ul>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置New memory size of an instance shard. <ul><li>Unit: MB. </li><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li><li>In case of capacity reduction, the new specification must be at least 1.3 times the used capacity; otherwise, the operation will fail.</li></ul>
                     * @param _memSize New memory size of an instance shard. <ul><li>Unit: MB. </li><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li><li>In case of capacity reduction, the new specification must be at least 1.3 times the used capacity; otherwise, the operation will fail.</li></ul>
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
                     * 获取New number of instance shards. <ul><li>This parameter is not required for standard architecture instances, but for cluster architecture instances. </li><li>For cluster architecture, you can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>
                     * @return RedisShardNum New number of instance shards. <ul><li>This parameter is not required for standard architecture instances, but for cluster architecture instances. </li><li>For cluster architecture, you can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>
                     * 
                     */
                    uint64_t GetRedisShardNum() const;

                    /**
                     * 设置New number of instance shards. <ul><li>This parameter is not required for standard architecture instances, but for cluster architecture instances. </li><li>For cluster architecture, you can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>
                     * @param _redisShardNum New number of instance shards. <ul><li>This parameter is not required for standard architecture instances, but for cluster architecture instances. </li><li>For cluster architecture, you can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>
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
                     * 获取New replica quantity. <ul><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>To modify the number of replicas in a multi-AZ instance, `NodeSet` must be passed in.</li></ul>
                     * @return RedisReplicasNum New replica quantity. <ul><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>To modify the number of replicas in a multi-AZ instance, `NodeSet` must be passed in.</li></ul>
                     * 
                     */
                    uint64_t GetRedisReplicasNum() const;

                    /**
                     * 设置New replica quantity. <ul><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>To modify the number of replicas in a multi-AZ instance, `NodeSet` must be passed in.</li></ul>
                     * @param _redisReplicasNum New replica quantity. <ul><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>To modify the number of replicas in a multi-AZ instance, `NodeSet` must be passed in.</li></ul>
                     * 
                     */
                    void SetRedisReplicasNum(const uint64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取Node information set when you add a replica for multi-AZ instances, including the ID and AZ information of the replica. This parameter is not required for non-multi-AZ instances.
                     * @return NodeSet Node information set when you add a replica for multi-AZ instances, including the ID and AZ information of the replica. This parameter is not required for non-multi-AZ instances.
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置Node information set when you add a replica for multi-AZ instances, including the ID and AZ information of the replica. This parameter is not required for non-multi-AZ instances.
                     * @param _nodeSet Node information set when you add a replica for multi-AZ instances, including the ID and AZ information of the replica. This parameter is not required for non-multi-AZ instances.
                     * 
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                private:

                    /**
                     * The ID of instance to be modified.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * New memory size of an instance shard. <ul><li>Unit: MB. </li><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li><li>In case of capacity reduction, the new specification must be at least 1.3 times the used capacity; otherwise, the operation will fail.</li></ul>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * New number of instance shards. <ul><li>This parameter is not required for standard architecture instances, but for cluster architecture instances. </li><li>For cluster architecture, you can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>
                     */
                    uint64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * New replica quantity. <ul><li>You can only modify one of the three parameters at a time: `MemSize`, `RedisShardNum`, and `RedisReplicasNum`. To modify one of them, you need to enter the other two, which are consistent with the original configuration specifications of the instance. </li></ul>To modify the number of replicas in a multi-AZ instance, `NodeSet` must be passed in.</li></ul>
                     */
                    uint64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Node information set when you add a replica for multi-AZ instances, including the ID and AZ information of the replica. This parameter is not required for non-multi-AZ instances.
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEREQUEST_H_
