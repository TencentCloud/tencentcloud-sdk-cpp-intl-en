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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DetailData.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * Statistic information of hosts in the CDC
                */
                class HostStatistic : public AbstractModel
                {
                public:
                    HostStatistic();
                    ~HostStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host type
                     * @return HostType Host type
                     * 
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置Host type
                     * @param _hostType Host type
                     * 
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取Host model family
                     * @return HostFamily Host model family
                     * 
                     */
                    std::string GetHostFamily() const;

                    /**
                     * 设置Host model family
                     * @param _hostFamily Host model family
                     * 
                     */
                    void SetHostFamily(const std::string& _hostFamily);

                    /**
                     * 判断参数 HostFamily 是否已赋值
                     * @return HostFamily 是否已赋值
                     * 
                     */
                    bool HostFamilyHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of host, in cores
                     * @return Cpu Number of CPU cores of host, in cores
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores of host, in cores
                     * @param _cpu Number of CPU cores of host, in cores
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
                     * 获取Host memory, in GB
                     * @return Memory Host memory, in GB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Host memory, in GB
                     * @param _memory Host memory, in GB
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
                     * 获取Number of hosts of this type
                     * @return Count Number of hosts of this type
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of hosts of this type
                     * @param _count Number of hosts of this type
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Average CPU load percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return CpuAverage Average CPU load percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    double GetCpuAverage() const;

                    /**
                     * 设置Average CPU load percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _cpuAverage Average CPU load percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCpuAverage(const double& _cpuAverage);

                    /**
                     * 判断参数 CpuAverage 是否已赋值
                     * @return CpuAverage 是否已赋值
                     * 
                     */
                    bool CpuAverageHasBeenSet() const;

                    /**
                     * 获取Average memory usage percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return MemAverage Average memory usage percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    double GetMemAverage() const;

                    /**
                     * 设置Average memory usage percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _memAverage Average memory usage percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMemAverage(const double& _memAverage);

                    /**
                     * 判断参数 MemAverage 是否已赋值
                     * @return MemAverage 是否已赋值
                     * 
                     */
                    bool MemAverageHasBeenSet() const;

                    /**
                     * 获取Average network traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return NetAverage Average network traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    double GetNetAverage() const;

                    /**
                     * 设置Average network traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _netAverage Average network traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetNetAverage(const double& _netAverage);

                    /**
                     * 判断参数 NetAverage 是否已赋值
                     * @return NetAverage 是否已赋值
                     * 
                     */
                    bool NetAverageHasBeenSet() const;

                    /**
                     * 获取Detailed CPU monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return CpuDetailData Detailed CPU monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    DetailData GetCpuDetailData() const;

                    /**
                     * 设置Detailed CPU monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _cpuDetailData Detailed CPU monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCpuDetailData(const DetailData& _cpuDetailData);

                    /**
                     * 判断参数 CpuDetailData 是否已赋值
                     * @return CpuDetailData 是否已赋值
                     * 
                     */
                    bool CpuDetailDataHasBeenSet() const;

                    /**
                     * 获取Memory details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return MemDetailData Memory details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    DetailData GetMemDetailData() const;

                    /**
                     * 设置Memory details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _memDetailData Memory details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMemDetailData(const DetailData& _memDetailData);

                    /**
                     * 判断参数 MemDetailData 是否已赋值
                     * @return MemDetailData 是否已赋值
                     * 
                     */
                    bool MemDetailDataHasBeenSet() const;

                    /**
                     * 获取Network rate details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return NetRateDetailData Network rate details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    DetailData GetNetRateDetailData() const;

                    /**
                     * 设置Network rate details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _netRateDetailData Network rate details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetNetRateDetailData(const DetailData& _netRateDetailData);

                    /**
                     * 判断参数 NetRateDetailData 是否已赋值
                     * @return NetRateDetailData 是否已赋值
                     * 
                     */
                    bool NetRateDetailDataHasBeenSet() const;

                    /**
                     * 获取Network packet details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return NetPacketDetailData Network packet details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    DetailData GetNetPacketDetailData() const;

                    /**
                     * 设置Network packet details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _netPacketDetailData Network packet details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetNetPacketDetailData(const DetailData& _netPacketDetailData);

                    /**
                     * 判断参数 NetPacketDetailData 是否已赋值
                     * @return NetPacketDetailData 是否已赋值
                     * 
                     */
                    bool NetPacketDetailDataHasBeenSet() const;

                private:

                    /**
                     * Host type
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * Host model family
                     */
                    std::string m_hostFamily;
                    bool m_hostFamilyHasBeenSet;

                    /**
                     * Number of CPU cores of host, in cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Host memory, in GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of hosts of this type
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Average CPU load percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    double m_cpuAverage;
                    bool m_cpuAverageHasBeenSet;

                    /**
                     * Average memory usage percentage 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    double m_memAverage;
                    bool m_memAverageHasBeenSet;

                    /**
                     * Average network traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    double m_netAverage;
                    bool m_netAverageHasBeenSet;

                    /**
                     * Detailed CPU monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    DetailData m_cpuDetailData;
                    bool m_cpuDetailDataHasBeenSet;

                    /**
                     * Memory details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    DetailData m_memDetailData;
                    bool m_memDetailDataHasBeenSet;

                    /**
                     * Network rate details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    DetailData m_netRateDetailData;
                    bool m_netRateDetailDataHasBeenSet;

                    /**
                     * Network packet details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    DetailData m_netPacketDetailData;
                    bool m_netPacketDetailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_
