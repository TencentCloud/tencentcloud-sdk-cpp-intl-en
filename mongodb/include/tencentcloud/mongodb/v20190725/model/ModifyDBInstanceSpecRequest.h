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
                     * 获取<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
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
                     * 获取<p>Memory size after instance configuration modification. Unit: GB. The current instance memory size is used by default if this parameter is left blank. For supported memory specifications, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specifications</a>.<br><strong>Note</strong>: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.</p>
                     * @return Memory <p>Memory size after instance configuration modification. Unit: GB. The current instance memory size is used by default if this parameter is left blank. For supported memory specifications, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specifications</a>.<br><strong>Note</strong>: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>Memory size after instance configuration modification. Unit: GB. The current instance memory size is used by default if this parameter is left blank. For supported memory specifications, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specifications</a>.<br><strong>Note</strong>: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.</p>
                     * @param _memory <p>Memory size after instance configuration modification. Unit: GB. The current instance memory size is used by default if this parameter is left blank. For supported memory specifications, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specifications</a>.<br><strong>Note</strong>: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.</p>
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
                     * 获取<p>Hard disk size after instance configuration modification. Unit: GB. The current instance disk size is used by default if this parameter is left blank. For supported disk capacity, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p><ul><li>Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified simultaneously.</li><li>When downgrading, the disk capacity after modification must be greater than 1.2 times the used disk capacity.</li></ul>
                     * @return Volume <p>Hard disk size after instance configuration modification. Unit: GB. The current instance disk size is used by default if this parameter is left blank. For supported disk capacity, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p><ul><li>Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified simultaneously.</li><li>When downgrading, the disk capacity after modification must be greater than 1.2 times the used disk capacity.</li></ul>
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置<p>Hard disk size after instance configuration modification. Unit: GB. The current instance disk size is used by default if this parameter is left blank. For supported disk capacity, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p><ul><li>Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified simultaneously.</li><li>When downgrading, the disk capacity after modification must be greater than 1.2 times the used disk capacity.</li></ul>
                     * @param _volume <p>Hard disk size after instance configuration modification. Unit: GB. The current instance disk size is used by default if this parameter is left blank. For supported disk capacity, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p><ul><li>Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified simultaneously.</li><li>When downgrading, the disk capacity after modification must be greater than 1.2 times the used disk capacity.</li></ul>
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
                     * 获取<p>(Abandoned) Please use the standalone ResizeOplog API to complete.</p><p>Oplog size after instance configuration change.</p><ul><li>Unit: GB.</li><li>Default oplog capacity used is 10% of disk space. The system allows oplog capacity settings ranging from 10% to 90% of disk space.</li></ul>
                     * @return OplogSize <p>(Abandoned) Please use the standalone ResizeOplog API to complete.</p><p>Oplog size after instance configuration change.</p><ul><li>Unit: GB.</li><li>Default oplog capacity used is 10% of disk space. The system allows oplog capacity settings ranging from 10% to 90% of disk space.</li></ul>
                     * @deprecated
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置<p>(Abandoned) Please use the standalone ResizeOplog API to complete.</p><p>Oplog size after instance configuration change.</p><ul><li>Unit: GB.</li><li>Default oplog capacity used is 10% of disk space. The system allows oplog capacity settings ranging from 10% to 90% of disk space.</li></ul>
                     * @param _oplogSize <p>(Abandoned) Please use the standalone ResizeOplog API to complete.</p><p>Oplog size after instance configuration change.</p><ul><li>Unit: GB.</li><li>Default oplog capacity used is 10% of disk space. The system allows oplog capacity settings ranging from 10% to 90% of disk space.</li></ul>
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
                     * 获取<p>Number of mongod nodes after instance change (excluding read-only nodes).</p><ul><li>Replica set node count: Use the MinNodeNum and MaxNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.</li><li>Number of shard nodes in a sharded cluster: Use the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.<br><strong>Note</strong>: When modifying the CPU or memory specifications of mongod or mongos, you may not configure this parameter or enter the current number of mongod or mongos nodes (excluding read-only nodes).</li></ul>
                     * @return NodeNum <p>Number of mongod nodes after instance change (excluding read-only nodes).</p><ul><li>Replica set node count: Use the MinNodeNum and MaxNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.</li><li>Number of shard nodes in a sharded cluster: Use the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.<br><strong>Note</strong>: When modifying the CPU or memory specifications of mongod or mongos, you may not configure this parameter or enter the current number of mongod or mongos nodes (excluding read-only nodes).</li></ul>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>Number of mongod nodes after instance change (excluding read-only nodes).</p><ul><li>Replica set node count: Use the MinNodeNum and MaxNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.</li><li>Number of shard nodes in a sharded cluster: Use the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.<br><strong>Note</strong>: When modifying the CPU or memory specifications of mongod or mongos, you may not configure this parameter or enter the current number of mongod or mongos nodes (excluding read-only nodes).</li></ul>
                     * @param _nodeNum <p>Number of mongod nodes after instance change (excluding read-only nodes).</p><ul><li>Replica set node count: Use the MinNodeNum and MaxNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.</li><li>Number of shard nodes in a sharded cluster: Use the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.<br><strong>Note</strong>: When modifying the CPU or memory specifications of mongod or mongos, you may not configure this parameter or enter the current number of mongod or mongos nodes (excluding read-only nodes).</li></ul>
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
                     * 获取<p>Number of shards after instance change.</p><ul><li>The value range for the number of instance shards can be obtained through the response parameters <strong>MinReplicateSetNum</strong> and <strong>MaxReplicateSetNum</strong> of the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API.</li><li>Only allow adding shards, not reducing them.</li></ul>
                     * @return ReplicateSetNum <p>Number of shards after instance change.</p><ul><li>The value range for the number of instance shards can be obtained through the response parameters <strong>MinReplicateSetNum</strong> and <strong>MaxReplicateSetNum</strong> of the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API.</li><li>Only allow adding shards, not reducing them.</li></ul>
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置<p>Number of shards after instance change.</p><ul><li>The value range for the number of instance shards can be obtained through the response parameters <strong>MinReplicateSetNum</strong> and <strong>MaxReplicateSetNum</strong> of the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API.</li><li>Only allow adding shards, not reducing them.</li></ul>
                     * @param _replicateSetNum <p>Number of shards after instance change.</p><ul><li>The value range for the number of instance shards can be obtained through the response parameters <strong>MinReplicateSetNum</strong> and <strong>MaxReplicateSetNum</strong> of the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API.</li><li>Only allow adding shards, not reducing them.</li></ul>
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
                     * 获取<p>Switch time for instance configuration change.</p><ul><li>0: Immediately execute the configuration modification task upon completion of adjustment. Default is 0.</li><li>1: Execute the configuration modification task within the maintenance window.<br><strong>Note</strong>: Adjusting the number of nodes and shard quantity is unsupported within the <b>maintenance window</b>.</li></ul>
                     * @return InMaintenance <p>Switch time for instance configuration change.</p><ul><li>0: Immediately execute the configuration modification task upon completion of adjustment. Default is 0.</li><li>1: Execute the configuration modification task within the maintenance window.<br><strong>Note</strong>: Adjusting the number of nodes and shard quantity is unsupported within the <b>maintenance window</b>.</li></ul>
                     * 
                     */
                    uint64_t GetInMaintenance() const;

                    /**
                     * 设置<p>Switch time for instance configuration change.</p><ul><li>0: Immediately execute the configuration modification task upon completion of adjustment. Default is 0.</li><li>1: Execute the configuration modification task within the maintenance window.<br><strong>Note</strong>: Adjusting the number of nodes and shard quantity is unsupported within the <b>maintenance window</b>.</li></ul>
                     * @param _inMaintenance <p>Switch time for instance configuration change.</p><ul><li>0: Immediately execute the configuration modification task upon completion of adjustment. Default is 0.</li><li>1: Execute the configuration modification task within the maintenance window.<br><strong>Note</strong>: Adjusting the number of nodes and shard quantity is unsupported within the <b>maintenance window</b>.</li></ul>
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
                     * 获取<p>Memory size of mongos after sharding instance configuration change. Unit: GB. For instance support specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p>
                     * @return MongosMemory <p>Memory size of mongos after sharding instance configuration change. Unit: GB. For instance support specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p>
                     * 
                     */
                    std::string GetMongosMemory() const;

                    /**
                     * 设置<p>Memory size of mongos after sharding instance configuration change. Unit: GB. For instance support specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p>
                     * @param _mongosMemory <p>Memory size of mongos after sharding instance configuration change. Unit: GB. For instance support specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p>
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
                     * 获取<p>List of nodes to be added, containing the node type and AZ information.</p>
                     * @return AddNodeList <p>List of nodes to be added, containing the node type and AZ information.</p>
                     * 
                     */
                    std::vector<AddNodeList> GetAddNodeList() const;

                    /**
                     * 设置<p>List of nodes to be added, containing the node type and AZ information.</p>
                     * @param _addNodeList <p>List of nodes to be added, containing the node type and AZ information.</p>
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
                     * 获取<p>Delete node list.<br><strong>Note</strong>: Based on the consistency principle of sharded instance nodes, when deleting shard instance nodes, only need to specify the node corresponding to shard 0, for example: cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.</p>
                     * @return RemoveNodeList <p>Delete node list.<br><strong>Note</strong>: Based on the consistency principle of sharded instance nodes, when deleting shard instance nodes, only need to specify the node corresponding to shard 0, for example: cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.</p>
                     * 
                     */
                    std::vector<RemoveNodeList> GetRemoveNodeList() const;

                    /**
                     * 设置<p>Delete node list.<br><strong>Note</strong>: Based on the consistency principle of sharded instance nodes, when deleting shard instance nodes, only need to specify the node corresponding to shard 0, for example: cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.</p>
                     * @param _removeNodeList <p>Delete node list.<br><strong>Note</strong>: Based on the consistency principle of sharded instance nodes, when deleting shard instance nodes, only need to specify the node corresponding to shard 0, for example: cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.</p>
                     * 
                     */
                    void SetRemoveNodeList(const std::vector<RemoveNodeList>& _removeNodeList);

                    /**
                     * 判断参数 RemoveNodeList 是否已赋值
                     * @return RemoveNodeList 是否已赋值
                     * 
                     */
                    bool RemoveNodeListHasBeenSet() const;

                    /**
                     * 获取<p>CPU size after instance configuration changes. Unit: C. If empty, the default value is the current CPU size of the instance. For currently supported CPU specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">Product Specifications</a>.</p>
                     * @return Cpu <p>CPU size after instance configuration changes. Unit: C. If empty, the default value is the current CPU size of the instance. For currently supported CPU specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">Product Specifications</a>.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>CPU size after instance configuration changes. Unit: C. If empty, the default value is the current CPU size of the instance. For currently supported CPU specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">Product Specifications</a>.</p>
                     * @param _cpu <p>CPU size after instance configuration changes. Unit: C. If empty, the default value is the current CPU size of the instance. For currently supported CPU specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">Product Specifications</a>.</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>The product specification type after instance configuration change. If empty, the default value is the current instance product specification type.<br>Currently supported product specification types are as follows:<br>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud Disk Edition).</li></ul><p>Note:</p><ol><li>Allowlist specification types are controlled by allowlist. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</li><li>Common I cannot be changed to allowlist specification types.</li></ol>
                     * @return MachineCode <p>The product specification type after instance configuration change. If empty, the default value is the current instance product specification type.<br>Currently supported product specification types are as follows:<br>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud Disk Edition).</li></ul><p>Note:</p><ol><li>Allowlist specification types are controlled by allowlist. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</li><li>Common I cannot be changed to allowlist specification types.</li></ol>
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置<p>The product specification type after instance configuration change. If empty, the default value is the current instance product specification type.<br>Currently supported product specification types are as follows:<br>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud Disk Edition).</li></ul><p>Note:</p><ol><li>Allowlist specification types are controlled by allowlist. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</li><li>Common I cannot be changed to allowlist specification types.</li></ol>
                     * @param _machineCode <p>The product specification type after instance configuration change. If empty, the default value is the current instance product specification type.<br>Currently supported product specification types are as follows:<br>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud Disk Edition).</li></ul><p>Note:</p><ol><li>Allowlist specification types are controlled by allowlist. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</li><li>Common I cannot be changed to allowlist specification types.</li></ol>
                     * 
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     * 
                     */
                    bool MachineCodeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Memory size after instance configuration modification. Unit: GB. The current instance memory size is used by default if this parameter is left blank. For supported memory specifications, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specifications</a>.<br><strong>Note</strong>: Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified at the same time.</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Hard disk size after instance configuration modification. Unit: GB. The current instance disk size is used by default if this parameter is left blank. For supported disk capacity, please refer to <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p><ul><li>Memory and disk configurations should be upgraded or downgraded at the same time, meaning that Memory and Volume should be modified simultaneously.</li><li>When downgrading, the disk capacity after modification must be greater than 1.2 times the used disk capacity.</li></ul>
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>(Abandoned) Please use the standalone ResizeOplog API to complete.</p><p>Oplog size after instance configuration change.</p><ul><li>Unit: GB.</li><li>Default oplog capacity used is 10% of disk space. The system allows oplog capacity settings ranging from 10% to 90% of disk space.</li></ul>
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * <p>Number of mongod nodes after instance change (excluding read-only nodes).</p><ul><li>Replica set node count: Use the MinNodeNum and MaxNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.</li><li>Number of shard nodes in a sharded cluster: Use the MinReplicateSetNodeNum and MaxReplicateSetNodeNum parameters in the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API response to obtain the node count range.<br><strong>Note</strong>: When modifying the CPU or memory specifications of mongod or mongos, you may not configure this parameter or enter the current number of mongod or mongos nodes (excluding read-only nodes).</li></ul>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>Number of shards after instance change.</p><ul><li>The value range for the number of instance shards can be obtained through the response parameters <strong>MinReplicateSetNum</strong> and <strong>MaxReplicateSetNum</strong> of the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API.</li><li>Only allow adding shards, not reducing them.</li></ul>
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * <p>Switch time for instance configuration change.</p><ul><li>0: Immediately execute the configuration modification task upon completion of adjustment. Default is 0.</li><li>1: Execute the configuration modification task within the maintenance window.<br><strong>Note</strong>: Adjusting the number of nodes and shard quantity is unsupported within the <b>maintenance window</b>.</li></ul>
                     */
                    uint64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                    /**
                     * <p>Memory size of mongos after sharding instance configuration change. Unit: GB. For instance support specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">product specification</a>.</p>
                     */
                    std::string m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * <p>List of nodes to be added, containing the node type and AZ information.</p>
                     */
                    std::vector<AddNodeList> m_addNodeList;
                    bool m_addNodeListHasBeenSet;

                    /**
                     * <p>Delete node list.<br><strong>Note</strong>: Based on the consistency principle of sharded instance nodes, when deleting shard instance nodes, only need to specify the node corresponding to shard 0, for example: cmgo-9nl1czif_0-node-readonly0 will delete the first read-only node of each shard.</p>
                     */
                    std::vector<RemoveNodeList> m_removeNodeList;
                    bool m_removeNodeListHasBeenSet;

                    /**
                     * <p>CPU size after instance configuration changes. Unit: C. If empty, the default value is the current CPU size of the instance. For currently supported CPU specifications, see <a href="https://www.tencentcloud.com/document/product/240/64125?from_cn_redirect=1">Product Specifications</a>.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>The product specification type after instance configuration change. If empty, the default value is the current instance product specification type.<br>Currently supported product specification types are as follows:<br>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud Disk Edition).</li></ul><p>Note:</p><ol><li>Allowlist specification types are controlled by allowlist. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</li><li>Common I cannot be changed to allowlist specification types.</li></ol>
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
