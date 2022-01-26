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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

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
                * ModifyDBInstanceSpec request structure.
                */
                class ModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSpecRequest();
                    ~ModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     * @return InstanceId Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     * @param InstanceId Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Memory size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously
                     * @return Memory Memory size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously
                     * @param Memory Memory size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Disk size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously. For degradation, the new disk capacity must be greater than 1.2 times the used disk capacity
                     * @return Volume Disk size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously. For degradation, the new disk capacity must be greater than 1.2 times the used disk capacity
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Disk size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously. For degradation, the new disk capacity must be greater than 1.2 times the used disk capacity
                     * @param Volume Disk size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously. For degradation, the new disk capacity must be greater than 1.2 times the used disk capacity
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Oplog size after instance configuration change in GB, which ranges from 10% to 90% of the disk capacity and is 10% of the disk capacity by default
                     * @return OplogSize Oplog size after instance configuration change in GB, which ranges from 10% to 90% of the disk capacity and is 10% of the disk capacity by default
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置Oplog size after instance configuration change in GB, which ranges from 10% to 90% of the disk capacity and is 10% of the disk capacity by default
                     * @param OplogSize Oplog size after instance configuration change in GB, which ranges from 10% to 90% of the disk capacity and is 10% of the disk capacity by default
                     */
                    void SetOplogSize(const uint64_t& _oplogSize);

                    /**
                     * 判断参数 OplogSize 是否已赋值
                     * @return OplogSize 是否已赋值
                     */
                    bool OplogSizeHasBeenSet() const;

                    /**
                     * 获取Node quantity after configuration modification. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the node quantity remains unchanged.
                     * @return NodeNum Node quantity after configuration modification. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the node quantity remains unchanged.
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置Node quantity after configuration modification. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the node quantity remains unchanged.
                     * @param NodeNum Node quantity after configuration modification. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the node quantity remains unchanged.
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Shard quantity after configuration modification, which can only be increased rather than decreased. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the shard quantity remains unchanged.
                     * @return ReplicateSetNum Shard quantity after configuration modification, which can only be increased rather than decreased. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the shard quantity remains unchanged.
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置Shard quantity after configuration modification, which can only be increased rather than decreased. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the shard quantity remains unchanged.
                     * @param ReplicateSetNum Shard quantity after configuration modification, which can only be increased rather than decreased. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the shard quantity remains unchanged.
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取Switch time. Valid values: `0` (upon modification completion), `1` (during maintenance time). Default value: `0`. If the quantity of nodes or shards is modified, the value will be `0`.
                     * @return InMaintenance Switch time. Valid values: `0` (upon modification completion), `1` (during maintenance time). Default value: `0`. If the quantity of nodes or shards is modified, the value will be `0`.
                     */
                    uint64_t GetInMaintenance() const;

                    /**
                     * 设置Switch time. Valid values: `0` (upon modification completion), `1` (during maintenance time). Default value: `0`. If the quantity of nodes or shards is modified, the value will be `0`.
                     * @param InMaintenance Switch time. Valid values: `0` (upon modification completion), `1` (during maintenance time). Default value: `0`. If the quantity of nodes or shards is modified, the value will be `0`.
                     */
                    void SetInMaintenance(const uint64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     */
                    bool InMaintenanceHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Memory size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk size after instance configuration change in GB. Memory and disk must be upgraded or degraded simultaneously. For degradation, the new disk capacity must be greater than 1.2 times the used disk capacity
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Oplog size after instance configuration change in GB, which ranges from 10% to 90% of the disk capacity and is 10% of the disk capacity by default
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * Node quantity after configuration modification. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the node quantity remains unchanged.
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Shard quantity after configuration modification, which can only be increased rather than decreased. The value range is subject to the response parameter of the `DescribeSpecInfo` API. If this parameter is left empty, the shard quantity remains unchanged.
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * Switch time. Valid values: `0` (upon modification completion), `1` (during maintenance time). Default value: `0`. If the quantity of nodes or shards is modified, the value will be `0`.
                     */
                    uint64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
