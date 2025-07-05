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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCETYPECONFIG_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCETYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceFamilyConfig.h>
#include <tencentcloud/ecm/v20190719/model/InstanceFamilyTypeConfig.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Model configuration
                */
                class InstanceTypeConfig : public AbstractModel
                {
                public:
                    InstanceTypeConfig();
                    ~InstanceTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model family configuration information
                     * @return InstanceFamilyConfig Model family configuration information
                     * 
                     */
                    InstanceFamilyConfig GetInstanceFamilyConfig() const;

                    /**
                     * 设置Model family configuration information
                     * @param _instanceFamilyConfig Model family configuration information
                     * 
                     */
                    void SetInstanceFamilyConfig(const InstanceFamilyConfig& _instanceFamilyConfig);

                    /**
                     * 判断参数 InstanceFamilyConfig 是否已赋值
                     * @return InstanceFamilyConfig 是否已赋值
                     * 
                     */
                    bool InstanceFamilyConfigHasBeenSet() const;

                    /**
                     * 获取Model
                     * @return InstanceType Model
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Model
                     * @param _instanceType Model
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
                     * 获取Number of CPU cores
                     * @return Vcpu Number of CPU cores
                     * 
                     */
                    int64_t GetVcpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _vcpu Number of CPU cores
                     * 
                     */
                    void SetVcpu(const int64_t& _vcpu);

                    /**
                     * 判断参数 Vcpu 是否已赋值
                     * @return Vcpu 是否已赋值
                     * 
                     */
                    bool VcpuHasBeenSet() const;

                    /**
                     * 获取Memory size
                     * @return Memory Memory size
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size
                     * @param _memory Memory size
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
                     * 获取Clock rate
                     * @return Frequency Clock rate
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置Clock rate
                     * @param _frequency Clock rate
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取CPU model
                     * @return CpuModelName CPU model
                     * 
                     */
                    std::string GetCpuModelName() const;

                    /**
                     * 设置CPU model
                     * @param _cpuModelName CPU model
                     * 
                     */
                    void SetCpuModelName(const std::string& _cpuModelName);

                    /**
                     * 判断参数 CpuModelName 是否已赋值
                     * @return CpuModelName 是否已赋值
                     * 
                     */
                    bool CpuModelNameHasBeenSet() const;

                    /**
                     * 获取Instance family type configuration information
                     * @return InstanceFamilyTypeConfig Instance family type configuration information
                     * 
                     */
                    InstanceFamilyTypeConfig GetInstanceFamilyTypeConfig() const;

                    /**
                     * 设置Instance family type configuration information
                     * @param _instanceFamilyTypeConfig Instance family type configuration information
                     * 
                     */
                    void SetInstanceFamilyTypeConfig(const InstanceFamilyTypeConfig& _instanceFamilyTypeConfig);

                    /**
                     * 判断参数 InstanceFamilyTypeConfig 是否已赋值
                     * @return InstanceFamilyTypeConfig 是否已赋值
                     * 
                     */
                    bool InstanceFamilyTypeConfigHasBeenSet() const;

                    /**
                     * 获取Extra model information, which is a JSON string in the format of `{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"default system disk size:60 GB","dataDiskSizeShow":"local NVMe SSD: 3200 GB"}`. It indicates a special model if it exists
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExtInfo Extra model information, which is a JSON string in the format of `{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"default system disk size:60 GB","dataDiskSizeShow":"local NVMe SSD: 3200 GB"}`. It indicates a special model if it exists
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Extra model information, which is a JSON string in the format of `{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"default system disk size:60 GB","dataDiskSizeShow":"local NVMe SSD: 3200 GB"}`. It indicates a special model if it exists
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _extInfo Extra model information, which is a JSON string in the format of `{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"default system disk size:60 GB","dataDiskSizeShow":"local NVMe SSD: 3200 GB"}`. It indicates a special model if it exists
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取Number of GPU cards
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Vgpu Number of GPU cards
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetVgpu() const;

                    /**
                     * 设置Number of GPU cards
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vgpu Number of GPU cards
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVgpu(const double& _vgpu);

                    /**
                     * 判断参数 Vgpu 是否已赋值
                     * @return Vgpu 是否已赋值
                     * 
                     */
                    bool VgpuHasBeenSet() const;

                    /**
                     * 获取GPU model
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GpuModelName GPU model
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGpuModelName() const;

                    /**
                     * 设置GPU model
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _gpuModelName GPU model
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGpuModelName(const std::string& _gpuModelName);

                    /**
                     * 判断参数 GpuModelName 是否已赋值
                     * @return GpuModelName 是否已赋值
                     * 
                     */
                    bool GpuModelNameHasBeenSet() const;

                private:

                    /**
                     * Model family configuration information
                     */
                    InstanceFamilyConfig m_instanceFamilyConfig;
                    bool m_instanceFamilyConfigHasBeenSet;

                    /**
                     * Model
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_vcpu;
                    bool m_vcpuHasBeenSet;

                    /**
                     * Memory size
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Clock rate
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * CPU model
                     */
                    std::string m_cpuModelName;
                    bool m_cpuModelNameHasBeenSet;

                    /**
                     * Instance family type configuration information
                     */
                    InstanceFamilyTypeConfig m_instanceFamilyTypeConfig;
                    bool m_instanceFamilyTypeConfigHasBeenSet;

                    /**
                     * Extra model information, which is a JSON string in the format of `{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"default system disk size:60 GB","dataDiskSizeShow":"local NVMe SSD: 3200 GB"}`. It indicates a special model if it exists
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * Number of GPU cards
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_vgpu;
                    bool m_vgpuHasBeenSet;

                    /**
                     * GPU model
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gpuModelName;
                    bool m_gpuModelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCETYPECONFIG_H_
