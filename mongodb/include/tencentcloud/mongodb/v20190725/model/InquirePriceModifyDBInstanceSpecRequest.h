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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * InquirePriceModifyDBInstanceSpec request structure.
                */
                class InquirePriceModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyDBInstanceSpecRequest();
                    ~InquirePriceModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
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
                     * 获取Instance memory size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the specific sales specifications for memory.
                     * @return Memory Instance memory size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the specific sales specifications for memory.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the specific sales specifications for memory.
                     * @param _memory Instance memory size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the specific sales specifications for memory.
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
                     * 获取Instance disk size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     * @return Volume Instance disk size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Instance disk size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     * @param _volume Instance disk size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Number of instance nodes. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the number of instance nodes.
- Replica set instance, which refers to the number of primary and secondary nodes for the instance after configuration changes.
- Sharded cluster instance, which refers to the number of primary and secondary nodes per shard for the instance after configuration changes.
**Note**: Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * @return NodeNum Number of instance nodes. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the number of instance nodes.
- Replica set instance, which refers to the number of primary and secondary nodes for the instance after configuration changes.
- Sharded cluster instance, which refers to the number of primary and secondary nodes per shard for the instance after configuration changes.
**Note**: Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of instance nodes. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the number of instance nodes.
- Replica set instance, which refers to the number of primary and secondary nodes for the instance after configuration changes.
- Sharded cluster instance, which refers to the number of primary and secondary nodes per shard for the instance after configuration changes.
**Note**: Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * @param _nodeNum Number of instance nodes. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the number of instance nodes.
- Replica set instance, which refers to the number of primary and secondary nodes for the instance after configuration changes.
- Sharded cluster instance, which refers to the number of primary and secondary nodes per shard for the instance after configuration changes.
**Note**: Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Sharded cluster instance, which refers to the number of shards for the instance after configuration changes. Value range: [2, 36].
**Note**: The number of shards after changes cannot be less than the current number. Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * @return ReplicateSetNum Sharded cluster instance, which refers to the number of shards for the instance after configuration changes. Value range: [2, 36].
**Note**: The number of shards after changes cannot be less than the current number. Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * 
                     */
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置Sharded cluster instance, which refers to the number of shards for the instance after configuration changes. Value range: [2, 36].
**Note**: The number of shards after changes cannot be less than the current number. Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * @param _replicateSetNum Sharded cluster instance, which refers to the number of shards for the instance after configuration changes. Value range: [2, 36].
**Note**: The number of shards after changes cannot be less than the current number. Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     * 
                     */
                    void SetReplicateSetNum(const int64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance memory size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the specific sales specifications for memory.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size after configuration changes, in GB. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Number of instance nodes. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to obtain the number of instance nodes.
- Replica set instance, which refers to the number of primary and secondary nodes for the instance after configuration changes.
- Sharded cluster instance, which refers to the number of primary and secondary nodes per shard for the instance after configuration changes.
**Note**: Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Sharded cluster instance, which refers to the number of shards for the instance after configuration changes. Value range: [2, 36].
**Note**: The number of shards after changes cannot be less than the current number. Do not initiate tasks of adjusting the number of nodes and shards and the node specifications simultaneously.
                     */
                    int64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
