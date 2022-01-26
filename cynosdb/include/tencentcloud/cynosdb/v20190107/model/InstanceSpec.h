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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Details of purchasable instance specifications. `Cpu` and `Memory` determine the instance specification during instance creation. The value range of the storage capacity is [MinStorageSize,MaxStorageSize]
                */
                class InstanceSpec : public AbstractModel
                {
                public:
                    InstanceSpec();
                    ~InstanceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of instance CPU cores
                     * @return Cpu Number of instance CPU cores
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of instance CPU cores
                     * @param Cpu Number of instance CPU cores
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance memory in GB
                     * @return Memory Instance memory in GB
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory in GB
                     * @param Memory Instance memory in GB
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Maximum instance storage capacity GB
                     * @return MaxStorageSize Maximum instance storage capacity GB
                     */
                    uint64_t GetMaxStorageSize() const;

                    /**
                     * 设置Maximum instance storage capacity GB
                     * @param MaxStorageSize Maximum instance storage capacity GB
                     */
                    void SetMaxStorageSize(const uint64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取Minimum instance storage capacity GB
                     * @return MinStorageSize Minimum instance storage capacity GB
                     */
                    uint64_t GetMinStorageSize() const;

                    /**
                     * 设置Minimum instance storage capacity GB
                     * @param MinStorageSize Minimum instance storage capacity GB
                     */
                    void SetMinStorageSize(const uint64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     */
                    bool MinStorageSizeHasBeenSet() const;

                private:

                    /**
                     * Number of instance CPU cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory in GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Maximum instance storage capacity GB
                     */
                    uint64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Minimum instance storage capacity GB
                     */
                    uint64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_
