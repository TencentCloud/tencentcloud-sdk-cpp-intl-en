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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CUSTOMCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CUSTOMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Proxy configuration
                */
                class CustomConfig : public AbstractModel
                {
                public:
                    CustomConfig();
                    ~CustomConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Device Device
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置Device
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param Device Device
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetDevice(const std::string& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取Type
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Type Type
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param Type Type
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Device type
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return DeviceType Device type
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Device type
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param DeviceType Device type
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Memory Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param Memory Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Cpu Number of CPU cores
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param Cpu Number of CPU cores
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                private:

                    /**
                     * Device
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * Type
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Device type
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of CPU cores
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CUSTOMCONFIG_H_
