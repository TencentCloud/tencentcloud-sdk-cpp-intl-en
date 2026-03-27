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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSDATA_H_

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
                * Cluster Creation Task Information
                */
                class CreateClustersData : public AbstractModel
                {
                public:
                    CreateClustersData();
                    ~CreateClustersData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance CPU
                     * @return Cpu Instance CPU
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Instance CPU
                     * @param _cpu Instance CPU
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
                     * 获取Instance Memory
                     * @return Memory Instance Memory
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance Memory
                     * @param _memory Instance Memory
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
                     * 获取Cluster storage limit
                     * @return StorageLimit Cluster storage limit
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Cluster storage limit
                     * @param _storageLimit Cluster storage limit
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                private:

                    /**
                     * Instance CPU
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance Memory
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Cluster storage limit
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSDATA_H_
