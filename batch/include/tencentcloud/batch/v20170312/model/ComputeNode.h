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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compute node
                */
                class ComputeNode : public AbstractModel
                {
                public:
                    ComputeNode();
                    ~ComputeNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compute node ID
                     * @return ComputeNodeId Compute node ID
                     * 
                     */
                    std::string GetComputeNodeId() const;

                    /**
                     * 设置Compute node ID
                     * @param _computeNodeId Compute node ID
                     * 
                     */
                    void SetComputeNodeId(const std::string& _computeNodeId);

                    /**
                     * 判断参数 ComputeNodeId 是否已赋值
                     * @return ComputeNodeId 是否已赋值
                     * 
                     */
                    bool ComputeNodeIdHasBeenSet() const;

                    /**
                     * 获取Compute node instance ID. In a CVM scenario, this parameter is the CVM InstanceId
                     * @return ComputeNodeInstanceId Compute node instance ID. In a CVM scenario, this parameter is the CVM InstanceId
                     * 
                     */
                    std::string GetComputeNodeInstanceId() const;

                    /**
                     * 设置Compute node instance ID. In a CVM scenario, this parameter is the CVM InstanceId
                     * @param _computeNodeInstanceId Compute node instance ID. In a CVM scenario, this parameter is the CVM InstanceId
                     * 
                     */
                    void SetComputeNodeInstanceId(const std::string& _computeNodeInstanceId);

                    /**
                     * 判断参数 ComputeNodeInstanceId 是否已赋值
                     * @return ComputeNodeInstanceId 是否已赋值
                     * 
                     */
                    bool ComputeNodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取Compute node state
                     * @return ComputeNodeState Compute node state
                     * 
                     */
                    std::string GetComputeNodeState() const;

                    /**
                     * 设置Compute node state
                     * @param _computeNodeState Compute node state
                     * 
                     */
                    void SetComputeNodeState(const std::string& _computeNodeState);

                    /**
                     * 判断参数 ComputeNodeState 是否已赋值
                     * @return ComputeNodeState 是否已赋值
                     * 
                     */
                    bool ComputeNodeStateHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpu Number of CPU cores
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory size in GiB
                     * @return Mem Memory size in GiB
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置Memory size in GiB
                     * @param _mem Memory size in GiB
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Resource creation time
                     * @return ResourceCreatedTime Resource creation time
                     * 
                     */
                    std::string GetResourceCreatedTime() const;

                    /**
                     * 设置Resource creation time
                     * @param _resourceCreatedTime Resource creation time
                     * 
                     */
                    void SetResourceCreatedTime(const std::string& _resourceCreatedTime);

                    /**
                     * 判断参数 ResourceCreatedTime 是否已赋值
                     * @return ResourceCreatedTime 是否已赋值
                     * 
                     */
                    bool ResourceCreatedTimeHasBeenSet() const;

                    /**
                     * 获取Available capacity of the compute node when running TaskInstance. 0 means that the compute node is busy.
                     * @return TaskInstanceNumAvailable Available capacity of the compute node when running TaskInstance. 0 means that the compute node is busy.
                     * 
                     */
                    uint64_t GetTaskInstanceNumAvailable() const;

                    /**
                     * 设置Available capacity of the compute node when running TaskInstance. 0 means that the compute node is busy.
                     * @param _taskInstanceNumAvailable Available capacity of the compute node when running TaskInstance. 0 means that the compute node is busy.
                     * 
                     */
                    void SetTaskInstanceNumAvailable(const uint64_t& _taskInstanceNumAvailable);

                    /**
                     * 判断参数 TaskInstanceNumAvailable 是否已赋值
                     * @return TaskInstanceNumAvailable 是否已赋值
                     * 
                     */
                    bool TaskInstanceNumAvailableHasBeenSet() const;

                    /**
                     * 获取BatchCompute Agent version
                     * @return AgentVersion BatchCompute Agent version
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置BatchCompute Agent version
                     * @param _agentVersion BatchCompute Agent version
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取Private IP of the instance
                     * @return PrivateIpAddresses Private IP of the instance
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置Private IP of the instance
                     * @param _privateIpAddresses Private IP of the instance
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Public IP of the instance
                     * @return PublicIpAddresses Public IP of the instance
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置Public IP of the instance
                     * @param _publicIpAddresses Public IP of the instance
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     * @return ResourceType Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     * @param _resourceType Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Source of compute environment resources. <br>`BATCH_CREATED`: Instances created by BatchCompute.<br>
`USER_ATTACHED`: Instances added to the compute environment by the user.
                     * @return ResourceOrigin Source of compute environment resources. <br>`BATCH_CREATED`: Instances created by BatchCompute.<br>
`USER_ATTACHED`: Instances added to the compute environment by the user.
                     * 
                     */
                    std::string GetResourceOrigin() const;

                    /**
                     * 设置Source of compute environment resources. <br>`BATCH_CREATED`: Instances created by BatchCompute.<br>
`USER_ATTACHED`: Instances added to the compute environment by the user.
                     * @param _resourceOrigin Source of compute environment resources. <br>`BATCH_CREATED`: Instances created by BatchCompute.<br>
`USER_ATTACHED`: Instances added to the compute environment by the user.
                     * 
                     */
                    void SetResourceOrigin(const std::string& _resourceOrigin);

                    /**
                     * 判断参数 ResourceOrigin 是否已赋值
                     * @return ResourceOrigin 是否已赋值
                     * 
                     */
                    bool ResourceOriginHasBeenSet() const;

                private:

                    /**
                     * Compute node ID
                     */
                    std::string m_computeNodeId;
                    bool m_computeNodeIdHasBeenSet;

                    /**
                     * Compute node instance ID. In a CVM scenario, this parameter is the CVM InstanceId
                     */
                    std::string m_computeNodeInstanceId;
                    bool m_computeNodeInstanceIdHasBeenSet;

                    /**
                     * Compute node state
                     */
                    std::string m_computeNodeState;
                    bool m_computeNodeStateHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size in GiB
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Resource creation time
                     */
                    std::string m_resourceCreatedTime;
                    bool m_resourceCreatedTimeHasBeenSet;

                    /**
                     * Available capacity of the compute node when running TaskInstance. 0 means that the compute node is busy.
                     */
                    uint64_t m_taskInstanceNumAvailable;
                    bool m_taskInstanceNumAvailableHasBeenSet;

                    /**
                     * BatchCompute Agent version
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * Private IP of the instance
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Public IP of the instance
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Source of compute environment resources. <br>`BATCH_CREATED`: Instances created by BatchCompute.<br>
`USER_ATTACHED`: Instances added to the compute environment by the user.
                     */
                    std::string m_resourceOrigin;
                    bool m_resourceOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODE_H_
