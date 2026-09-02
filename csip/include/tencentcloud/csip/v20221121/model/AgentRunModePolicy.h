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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AGENTRUNMODEPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AGENTRUNMODEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Agent running mode policy (CPU/Memory/NetworkPps)
                */
                class AgentRunModePolicy : public AbstractModel
                {
                public:
                    AgentRunModePolicy();
                    ~AgentRunModePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Memory limit (MB). Options: 0/200/300/500</p>
                     * @return Memory <p>Memory limit (MB). Options: 0/200/300/500</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>Memory limit (MB). Options: 0/200/300/500</p>
                     * @param _memory <p>Memory limit (MB). Options: 0/200/300/500</p>
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
                     * 获取<p>CPU limit (%), selectable: 10/20/30/40/50/60</p>
                     * @return Cpu <p>CPU limit (%), selectable: 10/20/30/40/50/60</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>CPU limit (%), selectable: 10/20/30/40/50/60</p>
                     * @param _cpu <p>CPU limit (%), selectable: 10/20/30/40/50/60</p>
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
                     * 获取<p>Network PPS limit</p>
                     * @return NetworkPps <p>Network PPS limit</p>
                     * 
                     */
                    uint64_t GetNetworkPps() const;

                    /**
                     * 设置<p>Network PPS limit</p>
                     * @param _networkPps <p>Network PPS limit</p>
                     * 
                     */
                    void SetNetworkPps(const uint64_t& _networkPps);

                    /**
                     * 判断参数 NetworkPps 是否已赋值
                     * @return NetworkPps 是否已赋值
                     * 
                     */
                    bool NetworkPpsHasBeenSet() const;

                private:

                    /**
                     * <p>Memory limit (MB). Options: 0/200/300/500</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>CPU limit (%), selectable: 10/20/30/40/50/60</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Network PPS limit</p>
                     */
                    uint64_t m_networkPps;
                    bool m_networkPpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AGENTRUNMODEPOLICY_H_
