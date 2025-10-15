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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATEINSTANCEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATEINSTANCEINFO_H_

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
                * Initializes the configuration information of an instance.
                */
                class IntegrateInstanceInfo : public AbstractModel
                {
                public:
                    IntegrateInstanceInfo();
                    ~IntegrateInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the cpu of the instance.
                     * @return Cpu Specifies the cpu of the instance.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Specifies the cpu of the instance.
                     * @param _cpu Specifies the cpu of the instance.
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
                     * 获取Specifies the instance memory.
                     * @return Memory Specifies the instance memory.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Specifies the instance memory.
                     * @param _memory Specifies the instance memory.
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
                     * 获取Instance type (rw/ro).
                     * @return InstanceType Instance type (rw/ro).
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type (rw/ro).
                     * @param _instanceType Instance type (rw/ro).
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Number of instances. value range: [1,15].
                     * @return InstanceCount Number of instances. value range: [1,15].
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances. value range: [1,15].
                     * @param _instanceCount Number of instances. value range: [1,15].
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Instance machine type. valid values: universal type (common), exclusive type.
                     * @return DeviceType Instance machine type. valid values: universal type (common), exclusive type.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance machine type. valid values: universal type (common), exclusive type.
                     * @param _deviceType Instance machine type. valid values: universal type (common), exclusive type.
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * Specifies the cpu of the instance.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Specifies the instance memory.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance type (rw/ro).
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of instances. value range: [1,15].
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Instance machine type. valid values: universal type (common), exclusive type.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATEINSTANCEINFO_H_
