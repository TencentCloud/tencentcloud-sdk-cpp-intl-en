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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the configurations of an instance model.
                */
                class InstanceTypeConfig : public AbstractModel
                {
                public:
                    InstanceTypeConfig();
                    ~InstanceTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone.
                     * @return Zone Availability zone.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone.
                     * @param Zone Availability zone.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance model.
                     * @return InstanceType Instance model.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model.
                     * @param InstanceType Instance model.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance model family.
                     * @return InstanceFamily Instance model family.
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Instance model family.
                     * @param InstanceFamily Instance model family.
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Number of GPU cores.
                     * @return GPU Number of GPU cores.
                     */
                    int64_t GetGPU() const;

                    /**
                     * 设置Number of GPU cores.
                     * @param GPU Number of GPU cores.
                     */
                    void SetGPU(const int64_t& _gPU);

                    /**
                     * 判断参数 GPU 是否已赋值
                     * @return GPU 是否已赋值
                     */
                    bool GPUHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores.
                     * @return CPU Number of CPU cores.
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param CPU Number of CPU cores.
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Memory capacity; unit: `GB`.
                     * @return Memory Memory capacity; unit: `GB`.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory capacity; unit: `GB`.
                     * @param Memory Memory capacity; unit: `GB`.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Number of FPGA cores; unit: core.
                     * @return FPGA Number of FPGA cores; unit: core.
                     */
                    int64_t GetFPGA() const;

                    /**
                     * 设置Number of FPGA cores; unit: core.
                     * @param FPGA Number of FPGA cores; unit: core.
                     */
                    void SetFPGA(const int64_t& _fPGA);

                    /**
                     * 判断参数 FPGA 是否已赋值
                     * @return FPGA 是否已赋值
                     */
                    bool FPGAHasBeenSet() const;

                private:

                    /**
                     * Availability zone.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance model.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance model family.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Number of GPU cores.
                     */
                    int64_t m_gPU;
                    bool m_gPUHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Memory capacity; unit: `GB`.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of FPGA cores; unit: core.
                     */
                    int64_t m_fPGA;
                    bool m_fPGAHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_
