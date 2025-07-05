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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_UPDATEINSTANCESETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_UPDATEINSTANCESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Target resource specification
                */
                class UpdateInstanceSettings : public AbstractModel
                {
                public:
                    UpdateInstanceSettings();
                    ~UpdateInstanceSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Memory capacity in GB
                     * @return Memory Memory capacity in GB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory capacity in GB
                     * @param _memory Memory capacity in GB
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
                     * 获取Number of CPU cores
                     * @return CPUCores Number of CPU cores
                     * 
                     */
                    uint64_t GetCPUCores() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cPUCores Number of CPU cores
                     * 
                     */
                    void SetCPUCores(const uint64_t& _cPUCores);

                    /**
                     * 判断参数 CPUCores 是否已赋值
                     * @return CPUCores 是否已赋值
                     * 
                     */
                    bool CPUCoresHasBeenSet() const;

                    /**
                     * 获取Machine resource ID (EMR resource identifier)
                     * @return ResourceId Machine resource ID (EMR resource identifier)
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Machine resource ID (EMR resource identifier)
                     * @param _resourceId Machine resource ID (EMR resource identifier)
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Target machine specification
                     * @return InstanceType Target machine specification
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Target machine specification
                     * @param _instanceType Target machine specification
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * Memory capacity in GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    uint64_t m_cPUCores;
                    bool m_cPUCoresHasBeenSet;

                    /**
                     * Machine resource ID (EMR resource identifier)
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Target machine specification
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_UPDATEINSTANCESETTINGS_H_
