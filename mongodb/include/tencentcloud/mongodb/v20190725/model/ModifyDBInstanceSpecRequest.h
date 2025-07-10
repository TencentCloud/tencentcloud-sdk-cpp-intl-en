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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/AddNodeList.h>
#include <tencentcloud/mongodb/v20190725/model/RemoveNodeList.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSpec request structure.
                */
                class ModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSpecRequest();
                    ~ModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     * @return InstanceId Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     * @param _instanceId Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

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
                     * 获取Memory size after instance configuration modification. - Unit: GB. The current instance memory size is used by default if this parameter is left blank.<br>Note: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
                     * @return Memory Memory size after instance configuration modification. - Unit: GB. The current instance memory size is used by default if this parameter is left blank.<br>Note: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size after instance configuration modification. - Unit: GB. The current instance memory size is used by default if this parameter is left blank.<br>Note: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
                     * @param _memory Memory size after instance configuration modification. - Unit: GB. The current instance memory size is used by default if this parameter is left blank.<br>Note: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Disk capacity after instance configuration modification. Unit: GB. The current instance disk capacity is used by default if this parameter is left blank.
 - Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
 - During configuration downgrading, the disk capacity after modification should be greater than 1.2 times the used disk capacity.
                     * @return Volume Disk capacity after instance configuration modification. Unit: GB. The current instance disk capacity is used by default if this parameter is left blank.
 - Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
 - During configuration downgrading, the disk capacity after modification should be greater than 1.2 times the used disk capacity.
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Disk capacity after instance configuration modification. Unit: GB. The current instance disk capacity is used by default if this parameter is left blank.
 - Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
 - During configuration downgrading, the disk capacity after modification should be greater than 1.2 times the used disk capacity.
                     * @param _volume Disk capacity after instance configuration modification. Unit: GB. The current instance disk capacity is used by default if this parameter is left blank.
 - Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
 - During configuration downgrading, the disk capacity after modification should be greater than 1.2 times the used disk capacity.
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取(Deprecated) Use the independent API ResizeOplog.

Oplog size after instance configuration modification.
 - Unit: GB.
 - By default, the capacity occupied by Oplog is 10% of the disk capacity. The range of capacity occupied by Oplog supported by the system is [10%,90%] of the disk capacity.
                     * @return OplogSize (Deprecated) Use the independent API ResizeOplog.

Oplog size after instance configuration modification.
 - Unit: GB.
 - By default, the capacity occupied by Oplog is 10% of the disk capacity. The range of capacity occupied by Oplog supported by the system is [10%,90%] of the disk capacity.
                     * @deprecated
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置(Deprecated) Use the independent API ResizeOplog.

Oplog size after instance configuration modification.
 - Unit: GB.
 - By default, the capacity occupied by Oplog is 10% of the disk capacity. The range of capacity occupied by Oplog supported by the system is [10%,90%] of the disk capacity.
                     * @param _oplogSize (Deprecated) Use the independent API ResizeOplog.

Oplog size after instance configuration modification.
 - Unit: GB.
 - By default, the capacity occupied by Oplog is 10% of the disk capacity. The range of capacity occupied by Oplog supported by the system is [10%,90%] of the disk capacity.
                     * @deprecated
                     */
                    void SetOplogSize(const uint64_t& _oplogSize);

                    /**
                     * 判断参数 OplogSize 是否已赋值
                     * @return OplogSize 是否已赋值
                     * @deprecated
                     */
                    bool OplogSizeHasBeenSet() const;

                    /**
                     * 获取Number of Mongod nodes after instance modification (excluding read-only nodes).
 - When the CPU and memory specifications of Mongod nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - When the CPU and memory specifications of Mongos nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - During node modification (all types), this parameter can be left blank or set to the number of Mongod nodes (excluding read-only nodes) after modification.
 - Number of replica set nodes: Confirm the range of the number of nodes based on the MinNodeNum and MaxNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
 - Number of nodes for each shard in a sharded cluster: Confirm the range of the number of nodes based on the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
                     * @return NodeNum Number of Mongod nodes after instance modification (excluding read-only nodes).
 - When the CPU and memory specifications of Mongod nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - When the CPU and memory specifications of Mongos nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - During node modification (all types), this parameter can be left blank or set to the number of Mongod nodes (excluding read-only nodes) after modification.
 - Number of replica set nodes: Confirm the range of the number of nodes based on the MinNodeNum and MaxNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
 - Number of nodes for each shard in a sharded cluster: Confirm the range of the number of nodes based on the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置Number of Mongod nodes after instance modification (excluding read-only nodes).
 - When the CPU and memory specifications of Mongod nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - When the CPU and memory specifications of Mongos nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - During node modification (all types), this parameter can be left blank or set to the number of Mongod nodes (excluding read-only nodes) after modification.
 - Number of replica set nodes: Confirm the range of the number of nodes based on the MinNodeNum and MaxNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
 - Number of nodes for each shard in a sharded cluster: Confirm the range of the number of nodes based on the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
                     * @param _nodeNum Number of Mongod nodes after instance modification (excluding read-only nodes).
 - When the CPU and memory specifications of Mongod nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - When the CPU and memory specifications of Mongos nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - During node modification (all types), this parameter can be left blank or set to the number of Mongod nodes (excluding read-only nodes) after modification.
 - Number of replica set nodes: Confirm the range of the number of nodes based on the MinNodeNum and MaxNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
 - Number of nodes for each shard in a sharded cluster: Confirm the range of the number of nodes based on the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Number of shards after instance modification.
 - The value range can be obtained from the **MinReplicateSetNum** and **MaxReplicateSetNum** parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API for querying saleable TencentDB for MongoDB specifications. - The value of this parameter can only be increased but not decreased.
                     * @return ReplicateSetNum Number of shards after instance modification.
 - The value range can be obtained from the **MinReplicateSetNum** and **MaxReplicateSetNum** parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API for querying saleable TencentDB for MongoDB specifications. - The value of this parameter can only be increased but not decreased.
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置Number of shards after instance modification.
 - The value range can be obtained from the **MinReplicateSetNum** and **MaxReplicateSetNum** parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API for querying saleable TencentDB for MongoDB specifications. - The value of this parameter can only be increased but not decreased.
                     * @param _replicateSetNum Number of shards after instance modification.
 - The value range can be obtained from the **MinReplicateSetNum** and **MaxReplicateSetNum** parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API for querying saleable TencentDB for MongoDB specifications. - The value of this parameter can only be increased but not decreased.
                     * 
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取Switch time for instance configuration modification.
 - 0: Execute the configuration modification task immediately after the adjustment is completed. Default value: 0.
 - 1: Execute the configuration modification task within the maintenance window.
**Note**: Adjusting the number of nodes and shards is unsupported <b>within the maintenance window</b>.
                     * @return InMaintenance Switch time for instance configuration modification.
 - 0: Execute the configuration modification task immediately after the adjustment is completed. Default value: 0.
 - 1: Execute the configuration modification task within the maintenance window.
**Note**: Adjusting the number of nodes and shards is unsupported <b>within the maintenance window</b>.
                     * 
                     */
                    uint64_t GetInMaintenance() const;

                    /**
                     * 设置Switch time for instance configuration modification.
 - 0: Execute the configuration modification task immediately after the adjustment is completed. Default value: 0.
 - 1: Execute the configuration modification task within the maintenance window.
**Note**: Adjusting the number of nodes and shards is unsupported <b>within the maintenance window</b>.
                     * @param _inMaintenance Switch time for instance configuration modification.
 - 0: Execute the configuration modification task immediately after the adjustment is completed. Default value: 0.
 - 1: Execute the configuration modification task within the maintenance window.
**Note**: Adjusting the number of nodes and shards is unsupported <b>within the maintenance window</b>.
                     * 
                     */
                    void SetInMaintenance(const uint64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     * 
                     */
                    bool InMaintenanceHasBeenSet() const;

                    /**
                     * 获取Mongos node memory size after the sharded cluster instance configuration is modified. Unit: GB.
                     * @return MongosMemory Mongos node memory size after the sharded cluster instance configuration is modified. Unit: GB.
                     * 
                     */
                    std::string GetMongosMemory() const;

                    /**
                     * 设置Mongos node memory size after the sharded cluster instance configuration is modified. Unit: GB.
                     * @param _mongosMemory Mongos node memory size after the sharded cluster instance configuration is modified. Unit: GB.
                     * 
                     */
                    void SetMongosMemory(const std::string& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     * 
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取List of nodes to be added, containing the node type and AZ information.
                     * @return AddNodeList List of nodes to be added, containing the node type and AZ information.
                     * 
                     */
                    std::vector<AddNodeList> GetAddNodeList() const;

                    /**
                     * 设置List of nodes to be added, containing the node type and AZ information.
                     * @param _addNodeList List of nodes to be added, containing the node type and AZ information.
                     * 
                     */
                    void SetAddNodeList(const std::vector<AddNodeList>& _addNodeList);

                    /**
                     * 判断参数 AddNodeList 是否已赋值
                     * @return AddNodeList 是否已赋值
                     * 
                     */
                    bool AddNodeListHasBeenSet() const;

                    /**
                     * 获取List of nodes to be deleted. Note: According to the consistency principle for nodes of each shard on a sharded cluster instance, specify the nodes on shard 0 for node deletion from the sharded cluster instance. For example, cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.
                     * @return RemoveNodeList List of nodes to be deleted. Note: According to the consistency principle for nodes of each shard on a sharded cluster instance, specify the nodes on shard 0 for node deletion from the sharded cluster instance. For example, cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.
                     * 
                     */
                    std::vector<RemoveNodeList> GetRemoveNodeList() const;

                    /**
                     * 设置List of nodes to be deleted. Note: According to the consistency principle for nodes of each shard on a sharded cluster instance, specify the nodes on shard 0 for node deletion from the sharded cluster instance. For example, cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.
                     * @param _removeNodeList List of nodes to be deleted. Note: According to the consistency principle for nodes of each shard on a sharded cluster instance, specify the nodes on shard 0 for node deletion from the sharded cluster instance. For example, cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.
                     * 
                     */
                    void SetRemoveNodeList(const std::vector<RemoveNodeList>& _removeNodeList);

                    /**
                     * 判断参数 RemoveNodeList 是否已赋值
                     * @return RemoveNodeList 是否已赋值
                     * 
                     */
                    bool RemoveNodeListHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Memory size after instance configuration modification. - Unit: GB. The current instance memory size is used by default if this parameter is left blank.<br>Note: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk capacity after instance configuration modification. Unit: GB. The current instance disk capacity is used by default if this parameter is left blank.
 - Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.
 - During configuration downgrading, the disk capacity after modification should be greater than 1.2 times the used disk capacity.
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * (Deprecated) Use the independent API ResizeOplog.

Oplog size after instance configuration modification.
 - Unit: GB.
 - By default, the capacity occupied by Oplog is 10% of the disk capacity. The range of capacity occupied by Oplog supported by the system is [10%,90%] of the disk capacity.
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * Number of Mongod nodes after instance modification (excluding read-only nodes).
 - When the CPU and memory specifications of Mongod nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - When the CPU and memory specifications of Mongos nodes are modified, this parameter can be left blank or set to the current number of Mongod nodes (excluding read-only nodes).
 - During node modification (all types), this parameter can be left blank or set to the number of Mongod nodes (excluding read-only nodes) after modification.
 - Number of replica set nodes: Confirm the range of the number of nodes based on the MinNodeNum and MaxNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
 - Number of nodes for each shard in a sharded cluster: Confirm the range of the number of nodes based on the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38565?from_cn_redirect=1) API for querying saleable TencenDB for MongoDB specifications.
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Number of shards after instance modification.
 - The value range can be obtained from the **MinReplicateSetNum** and **MaxReplicateSetNum** parameters returned by the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API for querying saleable TencentDB for MongoDB specifications. - The value of this parameter can only be increased but not decreased.
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * Switch time for instance configuration modification.
 - 0: Execute the configuration modification task immediately after the adjustment is completed. Default value: 0.
 - 1: Execute the configuration modification task within the maintenance window.
**Note**: Adjusting the number of nodes and shards is unsupported <b>within the maintenance window</b>.
                     */
                    uint64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                    /**
                     * Mongos node memory size after the sharded cluster instance configuration is modified. Unit: GB.
                     */
                    std::string m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * List of nodes to be added, containing the node type and AZ information.
                     */
                    std::vector<AddNodeList> m_addNodeList;
                    bool m_addNodeListHasBeenSet;

                    /**
                     * List of nodes to be deleted. Note: According to the consistency principle for nodes of each shard on a sharded cluster instance, specify the nodes on shard 0 for node deletion from the sharded cluster instance. For example, cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.
                     */
                    std::vector<RemoveNodeList> m_removeNodeList;
                    bool m_removeNodeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
