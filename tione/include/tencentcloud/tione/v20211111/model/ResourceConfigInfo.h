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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONFIGINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/RDMAConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Resource configuration.
                */
                class ResourceConfigInfo : public AbstractModel
                {
                public:
                    ResourceConfigInfo();
                    ~ResourceConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role. For example, PS, WORKER, DRIVER, and EXECUTOR.
                     * @return Role Role. For example, PS, WORKER, DRIVER, and EXECUTOR.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Role. For example, PS, WORKER, DRIVER, and EXECUTOR.
                     * @param _role Role. For example, PS, WORKER, DRIVER, and EXECUTOR.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores, which is required to be configured when resource groups are used. Unit: 1/1000, where 1000 represents 1 core.
                     * @return Cpu Number of CPU cores, which is required to be configured when resource groups are used. Unit: 1/1000, where 1000 represents 1 core.
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores, which is required to be configured when resource groups are used. Unit: 1/1000, where 1000 represents 1 core.
                     * @param _cpu Number of CPU cores, which is required to be configured when resource groups are used. Unit: 1/1000, where 1000 represents 1 core.
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
                     * 获取Memory size, in MB. This parameter needs to be configured when resource groups are used.
                     * @return Memory Memory size, in MB. This parameter needs to be configured when resource groups are used.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size, in MB. This parameter needs to be configured when resource groups are used.
                     * @param _memory Memory size, in MB. This parameter needs to be configured when resource groups are used.
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
                     * 获取GPU card type, which is required to be configured when resource groups are used.
                     * @return GpuType GPU card type, which is required to be configured when resource groups are used.
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU card type, which is required to be configured when resource groups are used.
                     * @param _gpuType GPU card type, which is required to be configured when resource groups are used.
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取Number of GPU cards, which is required to be configured when resource groups are used. Unit: 1/100, where 100 represents 1 card.
                     * @return Gpu Number of GPU cards, which is required to be configured when resource groups are used. Unit: 1/100, where 100 represents 1 card.
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置Number of GPU cards, which is required to be configured when resource groups are used. Unit: 1/100, where 100 represents 1 card.
                     * @param _gpu Number of GPU cards, which is required to be configured when resource groups are used. Unit: 1/100, where 100 represents 1 card.
                     * 
                     */
                    void SetGpu(const uint64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取CVM instance specification ID.
CVM instance specification (for postpaid billing). Valid values:
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     * @return InstanceType CVM instance specification ID.
CVM instance specification (for postpaid billing). Valid values:
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置CVM instance specification ID.
CVM instance specification (for postpaid billing). Valid values:
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     * @param _instanceType CVM instance specification ID.
CVM instance specification (for postpaid billing). Valid values:
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
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
                     * 获取Number of compute nodes.
                     * @return InstanceNum Number of compute nodes.
                     * 
                     */
                    uint64_t GetInstanceNum() const;

                    /**
                     * 设置Number of compute nodes.
                     * @param _instanceNum Number of compute nodes.
                     * 
                     */
                    void SetInstanceNum(const uint64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取CVM instance specification name.
CVM instance specification (for postpaid billing). Valid values:
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * @return InstanceTypeAlias CVM instance specification name.
CVM instance specification (for postpaid billing). Valid values:
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * 
                     */
                    std::string GetInstanceTypeAlias() const;

                    /**
                     * 设置CVM instance specification name.
CVM instance specification (for postpaid billing). Valid values:
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * @param _instanceTypeAlias CVM instance specification name.
CVM instance specification (for postpaid billing). Valid values:
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * 
                     */
                    void SetInstanceTypeAlias(const std::string& _instanceTypeAlias);

                    /**
                     * 判断参数 InstanceTypeAlias 是否已赋值
                     * @return InstanceTypeAlias 是否已赋值
                     * 
                     */
                    bool InstanceTypeAliasHasBeenSet() const;

                    /**
                     * 获取RDMA configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RDMAConfig RDMA configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RDMAConfig GetRDMAConfig() const;

                    /**
                     * 设置RDMA configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rDMAConfig RDMA configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRDMAConfig(const RDMAConfig& _rDMAConfig);

                    /**
                     * 判断参数 RDMAConfig 是否已赋值
                     * @return RDMAConfig 是否已赋值
                     * 
                     */
                    bool RDMAConfigHasBeenSet() const;

                private:

                    /**
                     * Role. For example, PS, WORKER, DRIVER, and EXECUTOR.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Number of CPU cores, which is required to be configured when resource groups are used. Unit: 1/1000, where 1000 represents 1 core.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size, in MB. This parameter needs to be configured when resource groups are used.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * GPU card type, which is required to be configured when resource groups are used.
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * Number of GPU cards, which is required to be configured when resource groups are used. Unit: 1/100, where 100 represents 1 card.
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * CVM instance specification ID.
CVM instance specification (for postpaid billing). Valid values:
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of compute nodes.
                     */
                    uint64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * CVM instance specification name.
CVM instance specification (for postpaid billing). Valid values:
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     */
                    std::string m_instanceTypeAlias;
                    bool m_instanceTypeAliasHasBeenSet;

                    /**
                     * RDMA configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RDMAConfig m_rDMAConfig;
                    bool m_rDMAConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONFIGINFO_H_
