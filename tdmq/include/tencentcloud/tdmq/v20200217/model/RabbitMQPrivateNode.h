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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ node information.
                */
                class RabbitMQPrivateNode : public AbstractModel
                {
                public:
                    RabbitMQPrivateNode();
                    ~RabbitMQPrivateNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeName Node name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeName Node name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Node status. running indicates the node is active. down indicates an exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeStatus Node status. running indicates the node is active. down indicates an exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeStatus() const;

                    /**
                     * 设置Node status. running indicates the node is active. down indicates an exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeStatus Node status. running indicates the node is active. down indicates an exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeStatus(const std::string& _nodeStatus);

                    /**
                     * 判断参数 NodeStatus 是否已赋值
                     * @return NodeStatus 是否已赋值
                     * 
                     */
                    bool NodeStatusHasBeenSet() const;

                    /**
                     * 获取CPU utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CPUUsage CPU utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCPUUsage() const;

                    /**
                     * 设置CPU utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cPUUsage CPU utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCPUUsage(const std::string& _cPUUsage);

                    /**
                     * 判断参数 CPUUsage 是否已赋值
                     * @return CPUUsage 是否已赋值
                     * 
                     */
                    bool CPUUsageHasBeenSet() const;

                    /**
                     * 获取Memory usage in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Memory Memory usage in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory usage in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memory Memory usage in MB
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskUsage Disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskUsage Disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取The number of RabbitMQ Erlang processes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessNumber The number of RabbitMQ Erlang processes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProcessNumber() const;

                    /**
                     * 设置The number of RabbitMQ Erlang processes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processNumber The number of RabbitMQ Erlang processes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessNumber(const uint64_t& _processNumber);

                    /**
                     * 判断参数 ProcessNumber 是否已赋值
                     * @return ProcessNumber 是否已赋值
                     * 
                     */
                    bool ProcessNumberHasBeenSet() const;

                private:

                    /**
                     * Node name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node status. running indicates the node is active. down indicates an exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeStatus;
                    bool m_nodeStatusHasBeenSet;

                    /**
                     * CPU utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cPUUsage;
                    bool m_cPUUsageHasBeenSet;

                    /**
                     * Memory usage in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * The number of RabbitMQ Erlang processes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_processNumber;
                    bool m_processNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_
