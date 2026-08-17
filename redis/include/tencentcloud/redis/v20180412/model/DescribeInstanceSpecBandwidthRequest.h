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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESPECBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESPECBANDWIDTHREQUEST_H_

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
                * DescribeInstanceSpecBandwidth request structure.
                */
                class DescribeInstanceSpecBandwidthRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSpecBandwidthRequest();
                    ~DescribeInstanceSpecBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specify the instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list. Meanwhile, InstanceId and specification parameters cannot be empty at the same time. Provide at least one.</p><ul><li>If only InstanceId is specified: Query the bandwidth of the current instance.</li><li>If InstanceId and at least one specification parameter (ShardSize, ShardNum, or ReplicateNum) are specified: Calculate the bandwidth after specification modification.</li><li>If partial or all specification parameters (ShardSize, ShardNum, ReplicateNum, and Type) are specified without InstanceId: Query the theoretical bandwidth based on the combined query of specifications.</li></ul>
                     * @return InstanceId <p>Specify the instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list. Meanwhile, InstanceId and specification parameters cannot be empty at the same time. Provide at least one.</p><ul><li>If only InstanceId is specified: Query the bandwidth of the current instance.</li><li>If InstanceId and at least one specification parameter (ShardSize, ShardNum, or ReplicateNum) are specified: Calculate the bandwidth after specification modification.</li><li>If partial or all specification parameters (ShardSize, ShardNum, ReplicateNum, and Type) are specified without InstanceId: Query the theoretical bandwidth based on the combined query of specifications.</li></ul>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specify the instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list. Meanwhile, InstanceId and specification parameters cannot be empty at the same time. Provide at least one.</p><ul><li>If only InstanceId is specified: Query the bandwidth of the current instance.</li><li>If InstanceId and at least one specification parameter (ShardSize, ShardNum, or ReplicateNum) are specified: Calculate the bandwidth after specification modification.</li><li>If partial or all specification parameters (ShardSize, ShardNum, ReplicateNum, and Type) are specified without InstanceId: Query the theoretical bandwidth based on the combined query of specifications.</li></ul>
                     * @param _instanceId <p>Specify the instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list. Meanwhile, InstanceId and specification parameters cannot be empty at the same time. Provide at least one.</p><ul><li>If only InstanceId is specified: Query the bandwidth of the current instance.</li><li>If InstanceId and at least one specification parameter (ShardSize, ShardNum, or ReplicateNum) are specified: Calculate the bandwidth after specification modification.</li><li>If partial or all specification parameters (ShardSize, ShardNum, ReplicateNum, and Type) are specified without InstanceId: Query the theoretical bandwidth based on the combined query of specifications.</li></ul>
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
                     * @return ShardSize <p>Shard size. Unit: MB.</p>
                     * 
                     */
                    int64_t GetShardSize() const;

                    /**
                     * 设置<p>Shard size. Unit: MB.</p>
                     * @param _shardSize <p>Shard size. Unit: MB.</p>
                     * 
                     */
                    void SetShardSize(const int64_t& _shardSize);

                    /**
                     * 判断参数 ShardSize 是否已赋值
                     * @return ShardSize 是否已赋值
                     * 
                     */
                    bool ShardSizeHasBeenSet() const;

                    /**
                     * 获取<p>Number of shards.</p>
                     * @return ShardNum <p>Number of shards.</p>
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置<p>Number of shards.</p>
                     * @param _shardNum <p>Number of shards.</p>
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取<p>Number of replication groups.</p>
                     * @return ReplicateNum <p>Number of replication groups.</p>
                     * 
                     */
                    int64_t GetReplicateNum() const;

                    /**
                     * 设置<p>Number of replication groups.</p>
                     * @param _replicateNum <p>Number of replication groups.</p>
                     * 
                     */
                    void SetReplicateNum(const int64_t& _replicateNum);

                    /**
                     * 判断参数 ReplicateNum 是否已赋值
                     * @return ReplicateNum 是否已赋值
                     * 
                     */
                    bool ReplicateNumHasBeenSet() const;

                    /**
                     * 获取<p>Read-only weight. - 100: Enable read-only slave. - 0: Disable read-only slave.</p>
                     * @return ReadOnlyWeight <p>Read-only weight. - 100: Enable read-only slave. - 0: Disable read-only slave.</p>
                     * 
                     */
                    int64_t GetReadOnlyWeight() const;

                    /**
                     * 设置<p>Read-only weight. - 100: Enable read-only slave. - 0: Disable read-only slave.</p>
                     * @param _readOnlyWeight <p>Read-only weight. - 100: Enable read-only slave. - 0: Disable read-only slave.</p>
                     * 
                     */
                    void SetReadOnlyWeight(const int64_t& _readOnlyWeight);

                    /**
                     * 判断参数 ReadOnlyWeight 是否已赋值
                     * @return ReadOnlyWeight 是否已赋值
                     * 
                     */
                    bool ReadOnlyWeightHasBeenSet() const;

                    /**
                     * 获取<p>Instance type, same as Type in <a href="https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1">CreateInstances</a>.</p>
                     * @return Type <p>Instance type, same as Type in <a href="https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1">CreateInstances</a>.</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Instance type, same as Type in <a href="https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1">CreateInstances</a>.</p>
                     * @param _type <p>Instance type, same as Type in <a href="https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1">CreateInstances</a>.</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Specify the instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list. Meanwhile, InstanceId and specification parameters cannot be empty at the same time. Provide at least one.</p><ul><li>If only InstanceId is specified: Query the bandwidth of the current instance.</li><li>If InstanceId and at least one specification parameter (ShardSize, ShardNum, or ReplicateNum) are specified: Calculate the bandwidth after specification modification.</li><li>If partial or all specification parameters (ShardSize, ShardNum, ReplicateNum, and Type) are specified without InstanceId: Query the theoretical bandwidth based on the combined query of specifications.</li></ul>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Shard size. Unit: MB.</p>
                     */
                    int64_t m_shardSize;
                    bool m_shardSizeHasBeenSet;

                    /**
                     * <p>Number of shards.</p>
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * <p>Number of replication groups.</p>
                     */
                    int64_t m_replicateNum;
                    bool m_replicateNumHasBeenSet;

                    /**
                     * <p>Read-only weight. - 100: Enable read-only slave. - 0: Disable read-only slave.</p>
                     */
                    int64_t m_readOnlyWeight;
                    bool m_readOnlyWeightHasBeenSet;

                    /**
                     * <p>Instance type, same as Type in <a href="https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1">CreateInstances</a>.</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESPECBANDWIDTHREQUEST_H_
