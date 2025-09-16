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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/GpuDetail.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Resource information description.
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Processor resource, in 1/1000 cores.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cpu Processor resource, in 1/1000 cores.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Processor resource, in 1/1000 cores.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpu Processor resource, in 1/1000 cores.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Memory resource, in MB.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Memory Memory resource, in MB.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory resource, in MB.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memory Memory resource, in MB.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of GPU card resources, in 0.01 units of GpuType.Gpu=100 indicates the use of "1" GPU card. However, this "1" card could refer to a virtualized 1/4 card or a full physical card, depending on the instance type.Example 1: If the instance type includes 1 virtual GPU card, and each virtual GPU card corresponds to 1/4 of a physical T4 card, then GpuType=T4, Gpu=100, and RealGpu=25.Example 2: If the instance type includes 4 full GPU cards, and each card corresponds to 1 physical T4 card, then GpuType=T4, Gpu=400, and RealGpu=400.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Gpu Number of GPU card resources, in 0.01 units of GpuType.Gpu=100 indicates the use of "1" GPU card. However, this "1" card could refer to a virtualized 1/4 card or a full physical card, depending on the instance type.Example 1: If the instance type includes 1 virtual GPU card, and each virtual GPU card corresponds to 1/4 of a physical T4 card, then GpuType=T4, Gpu=100, and RealGpu=25.Example 2: If the instance type includes 4 full GPU cards, and each card corresponds to 1 physical T4 card, then GpuType=T4, Gpu=400, and RealGpu=400.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置Number of GPU card resources, in 0.01 units of GpuType.Gpu=100 indicates the use of "1" GPU card. However, this "1" card could refer to a virtualized 1/4 card or a full physical card, depending on the instance type.Example 1: If the instance type includes 1 virtual GPU card, and each virtual GPU card corresponds to 1/4 of a physical T4 card, then GpuType=T4, Gpu=100, and RealGpu=25.Example 2: If the instance type includes 4 full GPU cards, and each card corresponds to 1 physical T4 card, then GpuType=T4, Gpu=400, and RealGpu=400.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gpu Number of GPU card resources, in 0.01 units of GpuType.Gpu=100 indicates the use of "1" GPU card. However, this "1" card could refer to a virtualized 1/4 card or a full physical card, depending on the instance type.Example 1: If the instance type includes 1 virtual GPU card, and each virtual GPU card corresponds to 1/4 of a physical T4 card, then GpuType=T4, Gpu=100, and RealGpu=25.Example 2: If the instance type includes 4 full GPU cards, and each card corresponds to 1 physical T4 card, then GpuType=T4, Gpu=400, and RealGpu=400.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取GPU card model. Valid values: T4 and V100. It only displays the current GPU card model. If multiple types of cards are used simultaneously, see the value of RealGpuDetailSet.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GpuType GPU card model. Valid values: T4 and V100. It only displays the current GPU card model. If multiple types of cards are used simultaneously, see the value of RealGpuDetailSet.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU card model. Valid values: T4 and V100. It only displays the current GPU card model. If multiple types of cards are used simultaneously, see the value of RealGpuDetailSet.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gpuType GPU card model. Valid values: T4 and V100. It only displays the current GPU card model. If multiple types of cards are used simultaneously, see the value of RealGpuDetailSet.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取It is not required for creation or update operations. This field is used for display only.The actual GPU card resources for postpaid instances using fractional GPU cards. This value represents the total number of actual physical GPU cards consumed.RealGpu=100 indicates the consumption of 1 GPU card. Depending on the actual instance type, this may represent: 4 instances each using a 1/4 card, 2 instances each using a 1/2 card, or 1 instance using a full card.
                     * @return RealGpu It is not required for creation or update operations. This field is used for display only.The actual GPU card resources for postpaid instances using fractional GPU cards. This value represents the total number of actual physical GPU cards consumed.RealGpu=100 indicates the consumption of 1 GPU card. Depending on the actual instance type, this may represent: 4 instances each using a 1/4 card, 2 instances each using a 1/2 card, or 1 instance using a full card.
                     * 
                     */
                    uint64_t GetRealGpu() const;

                    /**
                     * 设置It is not required for creation or update operations. This field is used for display only.The actual GPU card resources for postpaid instances using fractional GPU cards. This value represents the total number of actual physical GPU cards consumed.RealGpu=100 indicates the consumption of 1 GPU card. Depending on the actual instance type, this may represent: 4 instances each using a 1/4 card, 2 instances each using a 1/2 card, or 1 instance using a full card.
                     * @param _realGpu It is not required for creation or update operations. This field is used for display only.The actual GPU card resources for postpaid instances using fractional GPU cards. This value represents the total number of actual physical GPU cards consumed.RealGpu=100 indicates the consumption of 1 GPU card. Depending on the actual instance type, this may represent: 4 instances each using a 1/4 card, 2 instances each using a 1/2 card, or 1 instance using a full card.
                     * 
                     */
                    void SetRealGpu(const uint64_t& _realGpu);

                    /**
                     * 判断参数 RealGpu 是否已赋值
                     * @return RealGpu 是否已赋值
                     * 
                     */
                    bool RealGpuHasBeenSet() const;

                    /**
                     * 获取It is not required for creation or update operations. This field is used for display only. It involves detailed GPU usage information.
                     * @return RealGpuDetailSet It is not required for creation or update operations. This field is used for display only. It involves detailed GPU usage information.
                     * 
                     */
                    std::vector<GpuDetail> GetRealGpuDetailSet() const;

                    /**
                     * 设置It is not required for creation or update operations. This field is used for display only. It involves detailed GPU usage information.
                     * @param _realGpuDetailSet It is not required for creation or update operations. This field is used for display only. It involves detailed GPU usage information.
                     * 
                     */
                    void SetRealGpuDetailSet(const std::vector<GpuDetail>& _realGpuDetailSet);

                    /**
                     * 判断参数 RealGpuDetailSet 是否已赋值
                     * @return RealGpuDetailSet 是否已赋值
                     * 
                     */
                    bool RealGpuDetailSetHasBeenSet() const;

                private:

                    /**
                     * Processor resource, in 1/1000 cores.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory resource, in MB.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of GPU card resources, in 0.01 units of GpuType.Gpu=100 indicates the use of "1" GPU card. However, this "1" card could refer to a virtualized 1/4 card or a full physical card, depending on the instance type.Example 1: If the instance type includes 1 virtual GPU card, and each virtual GPU card corresponds to 1/4 of a physical T4 card, then GpuType=T4, Gpu=100, and RealGpu=25.Example 2: If the instance type includes 4 full GPU cards, and each card corresponds to 1 physical T4 card, then GpuType=T4, Gpu=400, and RealGpu=400.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * GPU card model. Valid values: T4 and V100. It only displays the current GPU card model. If multiple types of cards are used simultaneously, see the value of RealGpuDetailSet.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * It is not required for creation or update operations. This field is used for display only.The actual GPU card resources for postpaid instances using fractional GPU cards. This value represents the total number of actual physical GPU cards consumed.RealGpu=100 indicates the consumption of 1 GPU card. Depending on the actual instance type, this may represent: 4 instances each using a 1/4 card, 2 instances each using a 1/2 card, or 1 instance using a full card.
                     */
                    uint64_t m_realGpu;
                    bool m_realGpuHasBeenSet;

                    /**
                     * It is not required for creation or update operations. This field is used for display only. It involves detailed GPU usage information.
                     */
                    std::vector<GpuDetail> m_realGpuDetailSet;
                    bool m_realGpuDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEINFO_H_
