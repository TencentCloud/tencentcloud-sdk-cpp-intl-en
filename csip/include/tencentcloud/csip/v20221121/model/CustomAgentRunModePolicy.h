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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMAGENTRUNMODEPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMAGENTRUNMODEPOLICY_H_

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
                * Custom Agent running policy
                */
                class CustomAgentRunModePolicy : public AbstractModel
                {
                public:
                    CustomAgentRunModePolicy();
                    ~CustomAgentRunModePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Run Memory</p>
                     * @return Memory <p>Run Memory</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>Run Memory</p>
                     * @param _memory <p>Run Memory</p>
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
                     * 获取<p>Running cpu.</p>
                     * @return Cpu <p>Running cpu.</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>Running cpu.</p>
                     * @param _cpu <p>Running cpu.</p>
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
                     * 获取<p>Packet capture limit</p>
                     * @return NetworkPps <p>Packet capture limit</p>
                     * 
                     */
                    uint64_t GetNetworkPps() const;

                    /**
                     * 设置<p>Packet capture limit</p>
                     * @param _networkPps <p>Packet capture limit</p>
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
                     * <p>Run Memory</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Running cpu.</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Packet capture limit</p>
                     */
                    uint64_t m_networkPps;
                    bool m_networkPpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMAGENTRUNMODEPOLICY_H_
