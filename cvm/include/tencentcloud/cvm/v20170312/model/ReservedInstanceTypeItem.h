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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCETYPEITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCETYPEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Externals.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstancePriceItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Reserved instance specification.
                */
                class ReservedInstanceTypeItem : public AbstractModel
                {
                public:
                    ReservedInstanceTypeItem();
                    ~ReservedInstanceTypeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance type.
                     * @return InstanceType Instance type.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type.
                     * @param _instanceType Instance type.
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
                     * 获取Number of CPU cores.
                     * @return Cpu Number of CPU cores.
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cpu Number of CPU cores.
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
                     * 获取Memory size.
                     * @return Memory Memory size.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size.
                     * @param _memory Memory size.
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
                     * 获取Number of GPUs.
                     * @return Gpu Number of GPUs.
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置Number of GPUs.
                     * @param _gpu Number of GPUs.
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
                     * 获取Number of FPGAs.
                     * @return Fpga Number of FPGAs.
                     * 
                     */
                    uint64_t GetFpga() const;

                    /**
                     * 设置Number of FPGAs.
                     * @param _fpga Number of FPGAs.
                     * 
                     */
                    void SetFpga(const uint64_t& _fpga);

                    /**
                     * 判断参数 Fpga 是否已赋值
                     * @return Fpga 是否已赋值
                     * 
                     */
                    bool FpgaHasBeenSet() const;

                    /**
                     * 获取Number of local storage blocks.
                     * @return StorageBlock Number of local storage blocks.
                     * 
                     */
                    uint64_t GetStorageBlock() const;

                    /**
                     * 设置Number of local storage blocks.
                     * @param _storageBlock Number of local storage blocks.
                     * 
                     */
                    void SetStorageBlock(const uint64_t& _storageBlock);

                    /**
                     * 判断参数 StorageBlock 是否已赋值
                     * @return StorageBlock 是否已赋值
                     * 
                     */
                    bool StorageBlockHasBeenSet() const;

                    /**
                     * 获取Number of NICs.
                     * @return NetworkCard Number of NICs.
                     * 
                     */
                    uint64_t GetNetworkCard() const;

                    /**
                     * 设置Number of NICs.
                     * @param _networkCard Number of NICs.
                     * 
                     */
                    void SetNetworkCard(const uint64_t& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     * 
                     */
                    bool NetworkCardHasBeenSet() const;

                    /**
                     * 获取Maximum bandwidth.
                     * @return MaxBandwidth Maximum bandwidth.
                     * 
                     */
                    double GetMaxBandwidth() const;

                    /**
                     * 设置Maximum bandwidth.
                     * @param _maxBandwidth Maximum bandwidth.
                     * 
                     */
                    void SetMaxBandwidth(const double& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取CPU frequency.
                     * @return Frequency CPU frequency.
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置CPU frequency.
                     * @param _frequency CPU frequency.
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
                     * 获取CPU type.
                     * @return CpuModelName CPU type.
                     * 
                     */
                    std::string GetCpuModelName() const;

                    /**
                     * 设置CPU type.
                     * @param _cpuModelName CPU type.
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
                     * 获取Packet forwarding rate.
                     * @return Pps Packet forwarding rate.
                     * 
                     */
                    uint64_t GetPps() const;

                    /**
                     * 设置Packet forwarding rate.
                     * @param _pps Packet forwarding rate.
                     * 
                     */
                    void SetPps(const uint64_t& _pps);

                    /**
                     * 判断参数 Pps 是否已赋值
                     * @return Pps 是否已赋值
                     * 
                     */
                    bool PpsHasBeenSet() const;

                    /**
                     * 获取Other information.
                     * @return Externals Other information.
                     * 
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置Other information.
                     * @param _externals Other information.
                     * 
                     */
                    void SetExternals(const Externals& _externals);

                    /**
                     * 判断参数 Externals 是否已赋值
                     * @return Externals 是否已赋值
                     * 
                     */
                    bool ExternalsHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Price information about the reserved instance.
                     * @return Prices Price information about the reserved instance.
                     * 
                     */
                    std::vector<ReservedInstancePriceItem> GetPrices() const;

                    /**
                     * 设置Price information about the reserved instance.
                     * @param _prices Price information about the reserved instance.
                     * 
                     */
                    void SetPrices(const std::vector<ReservedInstancePriceItem>& _prices);

                    /**
                     * 判断参数 Prices 是否已赋值
                     * @return Prices 是否已赋值
                     * 
                     */
                    bool PricesHasBeenSet() const;

                private:

                    /**
                     * Instance type.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of GPUs.
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * Number of FPGAs.
                     */
                    uint64_t m_fpga;
                    bool m_fpgaHasBeenSet;

                    /**
                     * Number of local storage blocks.
                     */
                    uint64_t m_storageBlock;
                    bool m_storageBlockHasBeenSet;

                    /**
                     * Number of NICs.
                     */
                    uint64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * Maximum bandwidth.
                     */
                    double m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * CPU frequency.
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * CPU type.
                     */
                    std::string m_cpuModelName;
                    bool m_cpuModelNameHasBeenSet;

                    /**
                     * Packet forwarding rate.
                     */
                    uint64_t m_pps;
                    bool m_ppsHasBeenSet;

                    /**
                     * Other information.
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Price information about the reserved instance.
                     */
                    std::vector<ReservedInstancePriceItem> m_prices;
                    bool m_pricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCETYPEITEM_H_
