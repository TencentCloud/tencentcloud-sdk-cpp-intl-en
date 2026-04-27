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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCETYPEQUOTA_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCETYPEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * Account model quota information in the availability zone, including availability zone, model detail and quota quantity.
                */
                class InstanceTypeQuota : public AbstractModel
                {
                public:
                    InstanceTypeQuota();
                    ~InstanceTypeQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone code.
                     * @return Zone Availability zone code.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone code.
                     * @param _zone Availability zone code.
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
                     * 获取Model specifications.
                     * @return InstanceType Model specifications.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Model specifications.
                     * @param _instanceType Model specifications.
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
                     * 获取Model family.
                     * @return InstanceFamily Model family.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Model family.
                     * @param _instanceFamily Model family.
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
                     * 获取Number of CPU cores.
                     * @return CpuCores Number of CPU cores.
                     * 
                     */
                    int64_t GetCpuCores() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cpuCores Number of CPU cores.
                     * 
                     */
                    void SetCpuCores(const int64_t& _cpuCores);

                    /**
                     * 判断参数 CpuCores 是否已赋值
                     * @return CpuCores 是否已赋值
                     * 
                     */
                    bool CpuCoresHasBeenSet() const;

                    /**
                     * 获取CPU type.
                     * @return CpuType CPU type.
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置CPU type.
                     * @param _cpuType CPU type.
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
                     * 获取Memory size (GB).
                     * @return MemoryGb Memory size (GB).
                     * 
                     */
                    int64_t GetMemoryGb() const;

                    /**
                     * 设置Memory size (GB).
                     * @param _memoryGb Memory size (GB).
                     * 
                     */
                    void SetMemoryGb(const int64_t& _memoryGb);

                    /**
                     * 判断参数 MemoryGb 是否已赋值
                     * @return MemoryGb 是否已赋值
                     * 
                     */
                    bool MemoryGbHasBeenSet() const;

                    /**
                     * 获取System disk type.
                     * @return SystemDiskType System disk type.
                     * 
                     */
                    std::string GetSystemDiskType() const;

                    /**
                     * 设置System disk type.
                     * @param _systemDiskType System disk type.
                     * 
                     */
                    void SetSystemDiskType(const std::string& _systemDiskType);

                    /**
                     * 判断参数 SystemDiskType 是否已赋值
                     * @return SystemDiskType 是否已赋值
                     * 
                     */
                    bool SystemDiskTypeHasBeenSet() const;

                    /**
                     * 获取System disk size (GB).
                     * @return SystemDiskSize System disk size (GB).
                     * 
                     */
                    int64_t GetSystemDiskSize() const;

                    /**
                     * 设置System disk size (GB).
                     * @param _systemDiskSize System disk size (GB).
                     * 
                     */
                    void SetSystemDiskSize(const int64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     * 
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Number of system disks.
                     * @return SystemDiskCount Number of system disks.
                     * 
                     */
                    uint64_t GetSystemDiskCount() const;

                    /**
                     * 设置Number of system disks.
                     * @param _systemDiskCount Number of system disks.
                     * 
                     */
                    void SetSystemDiskCount(const uint64_t& _systemDiskCount);

                    /**
                     * 判断参数 SystemDiskCount 是否已赋值
                     * @return SystemDiskCount 是否已赋值
                     * 
                     */
                    bool SystemDiskCountHasBeenSet() const;

                    /**
                     * 获取Data disk type.
                     * @return DataDiskType Data disk type.
                     * 
                     */
                    std::string GetDataDiskType() const;

                    /**
                     * 设置Data disk type.
                     * @param _dataDiskType Data disk type.
                     * 
                     */
                    void SetDataDiskType(const std::string& _dataDiskType);

                    /**
                     * 判断参数 DataDiskType 是否已赋值
                     * @return DataDiskType 是否已赋值
                     * 
                     */
                    bool DataDiskTypeHasBeenSet() const;

                    /**
                     * 获取Data disk size (GB).
                     * @return DataDiskSize Data disk size (GB).
                     * 
                     */
                    int64_t GetDataDiskSize() const;

                    /**
                     * 设置Data disk size (GB).
                     * @param _dataDiskSize Data disk size (GB).
                     * 
                     */
                    void SetDataDiskSize(const int64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取Number of data disks.
                     * @return DataDiskCount Number of data disks.
                     * 
                     */
                    uint64_t GetDataDiskCount() const;

                    /**
                     * 设置Number of data disks.
                     * @param _dataDiskCount Number of data disks.
                     * 
                     */
                    void SetDataDiskCount(const uint64_t& _dataDiskCount);

                    /**
                     * 判断参数 DataDiskCount 是否已赋值
                     * @return DataDiskCount 是否已赋值
                     * 
                     */
                    bool DataDiskCountHasBeenSet() const;

                    /**
                     * 获取Disk description string (backward compatibility).
                     * @return DiskType Disk description string (backward compatibility).
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk description string (backward compatibility).
                     * @param _diskType Disk description string (backward compatibility).
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Network interface type.
                     * @return NetworkInterfaceType Network interface type.
                     * 
                     */
                    std::string GetNetworkInterfaceType() const;

                    /**
                     * 设置Network interface type.
                     * @param _networkInterfaceType Network interface type.
                     * 
                     */
                    void SetNetworkInterfaceType(const std::string& _networkInterfaceType);

                    /**
                     * 判断参数 NetworkInterfaceType 是否已赋值
                     * @return NetworkInterfaceType 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceTypeHasBeenSet() const;

                    /**
                     * 获取GPU type. Empty string if no GPU is available.
                     * @return GpuType GPU type. Empty string if no GPU is available.
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU type. Empty string if no GPU is available.
                     * @param _gpuType GPU type. Empty string if no GPU is available.
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
                     * 获取Quota quantity. 0 indicates no restriction.
                     * @return Quota Quota quantity. 0 indicates no restriction.
                     * 
                     */
                    uint64_t GetQuota() const;

                    /**
                     * 设置Quota quantity. 0 indicates no restriction.
                     * @param _quota Quota quantity. 0 indicates no restriction.
                     * 
                     */
                    void SetQuota(const uint64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * Availability zone code.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Model specifications.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Model family.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    int64_t m_cpuCores;
                    bool m_cpuCoresHasBeenSet;

                    /**
                     * CPU type.
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * Memory size (GB).
                     */
                    int64_t m_memoryGb;
                    bool m_memoryGbHasBeenSet;

                    /**
                     * System disk type.
                     */
                    std::string m_systemDiskType;
                    bool m_systemDiskTypeHasBeenSet;

                    /**
                     * System disk size (GB).
                     */
                    int64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * Number of system disks.
                     */
                    uint64_t m_systemDiskCount;
                    bool m_systemDiskCountHasBeenSet;

                    /**
                     * Data disk type.
                     */
                    std::string m_dataDiskType;
                    bool m_dataDiskTypeHasBeenSet;

                    /**
                     * Data disk size (GB).
                     */
                    int64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * Number of data disks.
                     */
                    uint64_t m_dataDiskCount;
                    bool m_dataDiskCountHasBeenSet;

                    /**
                     * Disk description string (backward compatibility).
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Network interface type.
                     */
                    std::string m_networkInterfaceType;
                    bool m_networkInterfaceTypeHasBeenSet;

                    /**
                     * GPU type. Empty string if no GPU is available.
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * Quota quantity. 0 indicates no restriction.
                     */
                    uint64_t m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCETYPEQUOTA_H_
