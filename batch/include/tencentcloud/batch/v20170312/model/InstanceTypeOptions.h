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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEOPTIONS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEOPTIONS_H_

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
                * Instance model configuration.
                */
                class InstanceTypeOptions : public AbstractModel
                {
                public:
                    InstanceTypeOptions();
                    ~InstanceTypeOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of CPU cores
                     * @return CPU Number of CPU cores
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores
                     * @param CPU Number of CPU cores
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Memory size in GB.
                     * @return Memory Memory size in GB.
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB.
                     * @param Memory Memory size in GB.
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance model category. Values: `ALL` (default), `GENERAL`, `GENERAL_2`, `GENERAL_3`, `COMPUTE`, `COMPUTE_2`, and `COMPUTE_3`. 
                     * @return InstanceCategories Instance model category. Values: `ALL` (default), `GENERAL`, `GENERAL_2`, `GENERAL_3`, `COMPUTE`, `COMPUTE_2`, and `COMPUTE_3`. 
                     */
                    std::vector<std::string> GetInstanceCategories() const;

                    /**
                     * 设置Instance model category. Values: `ALL` (default), `GENERAL`, `GENERAL_2`, `GENERAL_3`, `COMPUTE`, `COMPUTE_2`, and `COMPUTE_3`. 
                     * @param InstanceCategories Instance model category. Values: `ALL` (default), `GENERAL`, `GENERAL_2`, `GENERAL_3`, `COMPUTE`, `COMPUTE_2`, and `COMPUTE_3`. 
                     */
                    void SetInstanceCategories(const std::vector<std::string>& _instanceCategories);

                    /**
                     * 判断参数 InstanceCategories 是否已赋值
                     * @return InstanceCategories 是否已赋值
                     */
                    bool InstanceCategoriesHasBeenSet() const;

                private:

                    /**
                     * Number of CPU cores
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Memory size in GB.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance model category. Values: `ALL` (default), `GENERAL`, `GENERAL_2`, `GENERAL_3`, `COMPUTE`, `COMPUTE_2`, and `COMPUTE_3`. 
                     */
                    std::vector<std::string> m_instanceCategories;
                    bool m_instanceCategoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEOPTIONS_H_
