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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERINSTANCETYPE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERINSTANCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * List of instance specifications supported by the CDC host
                */
                class DedicatedClusterInstanceType : public AbstractModel
                {
                public:
                    DedicatedClusterInstanceType();
                    ~DedicatedClusterInstanceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ
                     * @return Zone AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param _zone AZ
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Type name
                     * @return InstanceType Type name
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type name
                     * @param _instanceType Type name
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
                     * 获取NIC type, e.g., 25 represents a 25 GB NIC.
                     * @return NetworkCard NIC type, e.g., 25 represents a 25 GB NIC.
                     * 
                     */
                    int64_t GetNetworkCard() const;

                    /**
                     * 设置NIC type, e.g., 25 represents a 25 GB NIC.
                     * @param _networkCard NIC type, e.g., 25 represents a 25 GB NIC.
                     * 
                     */
                    void SetNetworkCard(const int64_t& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     * 
                     */
                    bool NetworkCardHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of instance, in cores
                     * @return Cpu Number of CPU cores of instance, in cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores of instance, in cores
                     * @param _cpu Number of CPU cores of instance, in cores
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
                     * 获取Memory capacity of instance, in GB
                     * @return Memory Memory capacity of instance, in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory capacity of instance, in GB
                     * @param _memory Memory capacity of instance, in GB
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
                     * 获取Instance family
                     * @return InstanceFamily Instance family
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Instance family
                     * @param _instanceFamily Instance family
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Type name
                     * @return TypeName Type name
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Type name
                     * @param _typeName Type name
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Local storage block count
                     * @return StorageBlockAmount Local storage block count
                     * 
                     */
                    int64_t GetStorageBlockAmount() const;

                    /**
                     * 设置Local storage block count
                     * @param _storageBlockAmount Local storage block count
                     * 
                     */
                    void SetStorageBlockAmount(const int64_t& _storageBlockAmount);

                    /**
                     * 判断参数 StorageBlockAmount 是否已赋值
                     * @return StorageBlockAmount 是否已赋值
                     * 
                     */
                    bool StorageBlockAmountHasBeenSet() const;

                    /**
                     * 获取LAN bandwidth, in GB/s
                     * @return InstanceBandwidth LAN bandwidth, in GB/s
                     * 
                     */
                    double GetInstanceBandwidth() const;

                    /**
                     * 设置LAN bandwidth, in GB/s
                     * @param _instanceBandwidth LAN bandwidth, in GB/s
                     * 
                     */
                    void SetInstanceBandwidth(const double& _instanceBandwidth);

                    /**
                     * 判断参数 InstanceBandwidth 是否已赋值
                     * @return InstanceBandwidth 是否已赋值
                     * 
                     */
                    bool InstanceBandwidthHasBeenSet() const;

                    /**
                     * 获取Network packet receiving/sending capacity, in 10,000 PPS
                     * @return InstancePps Network packet receiving/sending capacity, in 10,000 PPS
                     * 
                     */
                    int64_t GetInstancePps() const;

                    /**
                     * 设置Network packet receiving/sending capacity, in 10,000 PPS
                     * @param _instancePps Network packet receiving/sending capacity, in 10,000 PPS
                     * 
                     */
                    void SetInstancePps(const int64_t& _instancePps);

                    /**
                     * 判断参数 InstancePps 是否已赋值
                     * @return InstancePps 是否已赋值
                     * 
                     */
                    bool InstancePpsHasBeenSet() const;

                    /**
                     * 获取Processor type
                     * @return CpuType Processor type
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置Processor type
                     * @param _cpuType Processor type
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取Number of GPUs of instance
                     * @return Gpu Number of GPUs of instance
                     * 
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置Number of GPUs of instance
                     * @param _gpu Number of GPUs of instance
                     * 
                     */
                    void SetGpu(const int64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取Number of FPGAs of instance.
                     * @return Fpga Number of FPGAs of instance.
                     * 
                     */
                    int64_t GetFpga() const;

                    /**
                     * 设置Number of FPGAs of instance.
                     * @param _fpga Number of FPGAs of instance.
                     * 
                     */
                    void SetFpga(const int64_t& _fpga);

                    /**
                     * 判断参数 Fpga 是否已赋值
                     * @return Fpga 是否已赋值
                     * 
                     */
                    bool FpgaHasBeenSet() const;

                    /**
                     * 获取Type description
                     * @return Remark Type description
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Type description
                     * @param _remark Type description
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
                     * 获取Whether the instance is for sale? Value values: <br><li>SELL: Indicates that the instance is for sale. <br><li>SOLD_OUT: Indicates that the instance has been sold out.
                     * @return Status Whether the instance is for sale? Value values: <br><li>SELL: Indicates that the instance is for sale. <br><li>SOLD_OUT: Indicates that the instance has been sold out.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether the instance is for sale? Value values: <br><li>SELL: Indicates that the instance is for sale. <br><li>SOLD_OUT: Indicates that the instance has been sold out.
                     * @param _status Whether the instance is for sale? Value values: <br><li>SELL: Indicates that the instance is for sale. <br><li>SOLD_OUT: Indicates that the instance has been sold out.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Type name
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * NIC type, e.g., 25 represents a 25 GB NIC.
                     */
                    int64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * Number of CPU cores of instance, in cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory capacity of instance, in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance family
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Type name
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Local storage block count
                     */
                    int64_t m_storageBlockAmount;
                    bool m_storageBlockAmountHasBeenSet;

                    /**
                     * LAN bandwidth, in GB/s
                     */
                    double m_instanceBandwidth;
                    bool m_instanceBandwidthHasBeenSet;

                    /**
                     * Network packet receiving/sending capacity, in 10,000 PPS
                     */
                    int64_t m_instancePps;
                    bool m_instancePpsHasBeenSet;

                    /**
                     * Processor type
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * Number of GPUs of instance
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * Number of FPGAs of instance.
                     */
                    int64_t m_fpga;
                    bool m_fpgaHasBeenSet;

                    /**
                     * Type description
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether the instance is for sale? Value values: <br><li>SELL: Indicates that the instance is for sale. <br><li>SOLD_OUT: Indicates that the instance has been sold out.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERINSTANCETYPE_H_
