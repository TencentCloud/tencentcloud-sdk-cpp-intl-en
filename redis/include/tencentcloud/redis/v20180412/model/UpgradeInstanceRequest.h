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
                     * 获取ID of the instance whose configuration is to be modified. Log in to the [TencentDB for Redis® console](https://console.cloud.tencent.com/Redis/instance/list) and copy the instance ID from the instance list.
                     * @return InstanceId ID of the instance whose configuration is to be modified. Log in to the [TencentDB for Redis® console](https://console.cloud.tencent.com/Redis/instance/list) and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance whose configuration is to be modified. Log in to the [TencentDB for Redis® console](https://console.cloud.tencent.com/Redis/instance/list) and copy the instance ID from the instance list.
                     * @param _instanceId ID of the instance whose configuration is to be modified. Log in to the [TencentDB for Redis® console](https://console.cloud.tencent.com/Redis/instance/list) and copy the instance ID from the instance list.
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
                     * 获取Refers to the size of memory in each shard after the change.
-Unit: MB.
-You can only modify one of the parameters MemSize, RedisShardNum, and RedisReplicasNum each time, and cannot include both. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
-When scaling down, the new specifications must be equal to or greater than 1.3 times the used capacity, otherwise execution will fail.
                     * @return MemSize Refers to the size of memory in each shard after the change.
-Unit: MB.
-You can only modify one of the parameters MemSize, RedisShardNum, and RedisReplicasNum each time, and cannot include both. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
-When scaling down, the new specifications must be equal to or greater than 1.3 times the used capacity, otherwise execution will fail.
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Refers to the size of memory in each shard after the change.
-Unit: MB.
-You can only modify one of the parameters MemSize, RedisShardNum, and RedisReplicasNum each time, and cannot include both. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
-When scaling down, the new specifications must be equal to or greater than 1.3 times the used capacity, otherwise execution will fail.
                     * @param _memSize Refers to the size of memory in each shard after the change.
-Unit: MB.
-You can only modify one of the parameters MemSize, RedisShardNum, and RedisReplicasNum each time, and cannot include both. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
-When scaling down, the new specifications must be equal to or greater than 1.3 times the used capacity, otherwise execution will fail.
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
                     * 获取Specifies the number of shards after the instance specification modification.
-Standard architecture does not require this parameter, while cluster architecture is mandatory.
-Cluster architecture. Every time, you can only modify one of the parameters RedisShardNum, MemSize, and RedisReplicasNum. You cannot modify them simultaneously. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
                     * @return RedisShardNum Specifies the number of shards after the instance specification modification.
-Standard architecture does not require this parameter, while cluster architecture is mandatory.
-Cluster architecture. Every time, you can only modify one of the parameters RedisShardNum, MemSize, and RedisReplicasNum. You cannot modify them simultaneously. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
                     * 
                     */
                    uint64_t GetRedisShardNum() const;

                    /**
                     * 设置Specifies the number of shards after the instance specification modification.
-Standard architecture does not require this parameter, while cluster architecture is mandatory.
-Cluster architecture. Every time, you can only modify one of the parameters RedisShardNum, MemSize, and RedisReplicasNum. You cannot modify them simultaneously. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
                     * @param _redisShardNum Specifies the number of shards after the instance specification modification.
-Standard architecture does not require this parameter, while cluster architecture is mandatory.
-Cluster architecture. Every time, you can only modify one of the parameters RedisShardNum, MemSize, and RedisReplicasNum. You cannot modify them simultaneously. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
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
                     * 获取Specifies the number of replicas after the instance specification modification.
-Only one of the parameters RedisReplicasNum, MemSize, and RedisShardNum can be modified each time. You cannot include both. When modifying one parameter, the other two parameters require the original instance configuration specification.
-When modifying a replica of a multi-AZ instance, you must input NodeSet.
                     * @return RedisReplicasNum Specifies the number of replicas after the instance specification modification.
-Only one of the parameters RedisReplicasNum, MemSize, and RedisShardNum can be modified each time. You cannot include both. When modifying one parameter, the other two parameters require the original instance configuration specification.
-When modifying a replica of a multi-AZ instance, you must input NodeSet.
                     * 
                     */
                    uint64_t GetRedisReplicasNum() const;

                    /**
                     * 设置Specifies the number of replicas after the instance specification modification.
-Only one of the parameters RedisReplicasNum, MemSize, and RedisShardNum can be modified each time. You cannot include both. When modifying one parameter, the other two parameters require the original instance configuration specification.
-When modifying a replica of a multi-AZ instance, you must input NodeSet.
                     * @param _redisReplicasNum Specifies the number of replicas after the instance specification modification.
-Only one of the parameters RedisReplicasNum, MemSize, and RedisShardNum can be modified each time. You cannot include both. When modifying one parameter, the other two parameters require the original instance configuration specification.
-When modifying a replica of a multi-AZ instance, you must input NodeSet.
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

                    /**
                     * 获取Switch time.
 - 1: Perform the operation within the maintenance window: Specification upgrade is executed within the set maintenance window. Use the API [DescribeMaintenanceWindow](https://intl.cloud.tencent.com/document/product/239/46336?from_cn_redirect=1) to query the time period of the set maintenance window. Replica addition/removal, shard addition/removal, and memory capacity expansion/shrinkage are supported within the maintenance window. Specification upgrade within the maintenance window is being gradually tested and published by region. It is already supported in some regions. For urgent integration in regions that do not support it, [submit a ticket](https://console.cloud.tencent.com/workorder/category) to apply for an allowlist.
 -2: Perform the operation immediately: The operation will be performed immediately, without the need to wait for the maintenance window. Operations will be performed immediately by default for the system.
                     * @return SwitchOption Switch time.
 - 1: Perform the operation within the maintenance window: Specification upgrade is executed within the set maintenance window. Use the API [DescribeMaintenanceWindow](https://intl.cloud.tencent.com/document/product/239/46336?from_cn_redirect=1) to query the time period of the set maintenance window. Replica addition/removal, shard addition/removal, and memory capacity expansion/shrinkage are supported within the maintenance window. Specification upgrade within the maintenance window is being gradually tested and published by region. It is already supported in some regions. For urgent integration in regions that do not support it, [submit a ticket](https://console.cloud.tencent.com/workorder/category) to apply for an allowlist.
 -2: Perform the operation immediately: The operation will be performed immediately, without the need to wait for the maintenance window. Operations will be performed immediately by default for the system.
                     * 
                     */
                    uint64_t GetSwitchOption() const;

                    /**
                     * 设置Switch time.
 - 1: Perform the operation within the maintenance window: Specification upgrade is executed within the set maintenance window. Use the API [DescribeMaintenanceWindow](https://intl.cloud.tencent.com/document/product/239/46336?from_cn_redirect=1) to query the time period of the set maintenance window. Replica addition/removal, shard addition/removal, and memory capacity expansion/shrinkage are supported within the maintenance window. Specification upgrade within the maintenance window is being gradually tested and published by region. It is already supported in some regions. For urgent integration in regions that do not support it, [submit a ticket](https://console.cloud.tencent.com/workorder/category) to apply for an allowlist.
 -2: Perform the operation immediately: The operation will be performed immediately, without the need to wait for the maintenance window. Operations will be performed immediately by default for the system.
                     * @param _switchOption Switch time.
 - 1: Perform the operation within the maintenance window: Specification upgrade is executed within the set maintenance window. Use the API [DescribeMaintenanceWindow](https://intl.cloud.tencent.com/document/product/239/46336?from_cn_redirect=1) to query the time period of the set maintenance window. Replica addition/removal, shard addition/removal, and memory capacity expansion/shrinkage are supported within the maintenance window. Specification upgrade within the maintenance window is being gradually tested and published by region. It is already supported in some regions. For urgent integration in regions that do not support it, [submit a ticket](https://console.cloud.tencent.com/workorder/category) to apply for an allowlist.
 -2: Perform the operation immediately: The operation will be performed immediately, without the need to wait for the maintenance window. Operations will be performed immediately by default for the system.
                     * 
                     */
                    void SetSwitchOption(const uint64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     * 
                     */
                    bool SwitchOptionHasBeenSet() const;

                private:

                    /**
                     * ID of the instance whose configuration is to be modified. Log in to the [TencentDB for Redis® console](https://console.cloud.tencent.com/Redis/instance/list) and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Refers to the size of memory in each shard after the change.
-Unit: MB.
-You can only modify one of the parameters MemSize, RedisShardNum, and RedisReplicasNum each time, and cannot include both. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
-When scaling down, the new specifications must be equal to or greater than 1.3 times the used capacity, otherwise execution will fail.
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Specifies the number of shards after the instance specification modification.
-Standard architecture does not require this parameter, while cluster architecture is mandatory.
-Cluster architecture. Every time, you can only modify one of the parameters RedisShardNum, MemSize, and RedisReplicasNum. You cannot modify them simultaneously. When modifying one parameter, you need to manually input the original instance configuration specification for the other two parameters.
                     */
                    uint64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * Specifies the number of replicas after the instance specification modification.
-Only one of the parameters RedisReplicasNum, MemSize, and RedisShardNum can be modified each time. You cannot include both. When modifying one parameter, the other two parameters require the original instance configuration specification.
-When modifying a replica of a multi-AZ instance, you must input NodeSet.
                     */
                    uint64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Node information set when you add a replica for multi-AZ instances, including the ID and AZ information of the replica. This parameter is not required for non-multi-AZ instances.
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * Switch time.
 - 1: Perform the operation within the maintenance window: Specification upgrade is executed within the set maintenance window. Use the API [DescribeMaintenanceWindow](https://intl.cloud.tencent.com/document/product/239/46336?from_cn_redirect=1) to query the time period of the set maintenance window. Replica addition/removal, shard addition/removal, and memory capacity expansion/shrinkage are supported within the maintenance window. Specification upgrade within the maintenance window is being gradually tested and published by region. It is already supported in some regions. For urgent integration in regions that do not support it, [submit a ticket](https://console.cloud.tencent.com/workorder/category) to apply for an allowlist.
 -2: Perform the operation immediately: The operation will be performed immediately, without the need to wait for the maintenance window. Operations will be performed immediately by default for the system.
                     */
                    uint64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEREQUEST_H_
