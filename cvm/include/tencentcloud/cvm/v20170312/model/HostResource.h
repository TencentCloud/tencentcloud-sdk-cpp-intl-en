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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_HOSTRESOURCE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_HOSTRESOURCE_H_

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
                * Resource information of the CDH instance
                */
                class HostResource : public AbstractModel
                {
                public:
                    HostResource();
                    ~HostResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of CPU cores in the CDH instance
                     * @return CpuTotal Total number of CPU cores in the CDH instance
                     * 
                     */
                    uint64_t GetCpuTotal() const;

                    /**
                     * 设置Total number of CPU cores in the CDH instance
                     * @param _cpuTotal Total number of CPU cores in the CDH instance
                     * 
                     */
                    void SetCpuTotal(const uint64_t& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     * 
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取Number of available CPU cores in the CDH instance
                     * @return CpuAvailable Number of available CPU cores in the CDH instance
                     * 
                     */
                    uint64_t GetCpuAvailable() const;

                    /**
                     * 设置Number of available CPU cores in the CDH instance
                     * @param _cpuAvailable Number of available CPU cores in the CDH instance
                     * 
                     */
                    void SetCpuAvailable(const uint64_t& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     * 
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取Total memory size of the CDH instance (unit: GiB)
                     * @return MemTotal Total memory size of the CDH instance (unit: GiB)
                     * 
                     */
                    double GetMemTotal() const;

                    /**
                     * 设置Total memory size of the CDH instance (unit: GiB)
                     * @param _memTotal Total memory size of the CDH instance (unit: GiB)
                     * 
                     */
                    void SetMemTotal(const double& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     * 
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取Available memory size of the CDH instance (unit: GiB)
                     * @return MemAvailable Available memory size of the CDH instance (unit: GiB)
                     * 
                     */
                    double GetMemAvailable() const;

                    /**
                     * 设置Available memory size of the CDH instance (unit: GiB)
                     * @param _memAvailable Available memory size of the CDH instance (unit: GiB)
                     * 
                     */
                    void SetMemAvailable(const double& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     * 
                     */
                    bool MemAvailableHasBeenSet() const;

                    /**
                     * 获取Total disk size of the CDH instance (unit: GiB)
                     * @return DiskTotal Total disk size of the CDH instance (unit: GiB)
                     * 
                     */
                    uint64_t GetDiskTotal() const;

                    /**
                     * 设置Total disk size of the CDH instance (unit: GiB)
                     * @param _diskTotal Total disk size of the CDH instance (unit: GiB)
                     * 
                     */
                    void SetDiskTotal(const uint64_t& _diskTotal);

                    /**
                     * 判断参数 DiskTotal 是否已赋值
                     * @return DiskTotal 是否已赋值
                     * 
                     */
                    bool DiskTotalHasBeenSet() const;

                    /**
                     * 获取Available disk size of the CDH instance (unit: GiB)
                     * @return DiskAvailable Available disk size of the CDH instance (unit: GiB)
                     * 
                     */
                    uint64_t GetDiskAvailable() const;

                    /**
                     * 设置Available disk size of the CDH instance (unit: GiB)
                     * @param _diskAvailable Available disk size of the CDH instance (unit: GiB)
                     * 
                     */
                    void SetDiskAvailable(const uint64_t& _diskAvailable);

                    /**
                     * 判断参数 DiskAvailable 是否已赋值
                     * @return DiskAvailable 是否已赋值
                     * 
                     */
                    bool DiskAvailableHasBeenSet() const;

                    /**
                     * 获取Disk type of the CDH instance
                     * @return DiskType Disk type of the CDH instance
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type of the CDH instance
                     * @param _diskType Disk type of the CDH instance
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
                     * 获取Total number of GPU cards in the CDH instance
                     * @return GpuTotal Total number of GPU cards in the CDH instance
                     * 
                     */
                    uint64_t GetGpuTotal() const;

                    /**
                     * 设置Total number of GPU cards in the CDH instance
                     * @param _gpuTotal Total number of GPU cards in the CDH instance
                     * 
                     */
                    void SetGpuTotal(const uint64_t& _gpuTotal);

                    /**
                     * 判断参数 GpuTotal 是否已赋值
                     * @return GpuTotal 是否已赋值
                     * 
                     */
                    bool GpuTotalHasBeenSet() const;

                    /**
                     * 获取Number of available GPU cards in the CDH instance
                     * @return GpuAvailable Number of available GPU cards in the CDH instance
                     * 
                     */
                    uint64_t GetGpuAvailable() const;

                    /**
                     * 设置Number of available GPU cards in the CDH instance
                     * @param _gpuAvailable Number of available GPU cards in the CDH instance
                     * 
                     */
                    void SetGpuAvailable(const uint64_t& _gpuAvailable);

                    /**
                     * 判断参数 GpuAvailable 是否已赋值
                     * @return GpuAvailable 是否已赋值
                     * 
                     */
                    bool GpuAvailableHasBeenSet() const;

                private:

                    /**
                     * Total number of CPU cores in the CDH instance
                     */
                    uint64_t m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * Number of available CPU cores in the CDH instance
                     */
                    uint64_t m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * Total memory size of the CDH instance (unit: GiB)
                     */
                    double m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * Available memory size of the CDH instance (unit: GiB)
                     */
                    double m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                    /**
                     * Total disk size of the CDH instance (unit: GiB)
                     */
                    uint64_t m_diskTotal;
                    bool m_diskTotalHasBeenSet;

                    /**
                     * Available disk size of the CDH instance (unit: GiB)
                     */
                    uint64_t m_diskAvailable;
                    bool m_diskAvailableHasBeenSet;

                    /**
                     * Disk type of the CDH instance
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Total number of GPU cards in the CDH instance
                     */
                    uint64_t m_gpuTotal;
                    bool m_gpuTotalHasBeenSet;

                    /**
                     * Number of available GPU cards in the CDH instance
                     */
                    uint64_t m_gpuAvailable;
                    bool m_gpuAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_HOSTRESOURCE_H_
