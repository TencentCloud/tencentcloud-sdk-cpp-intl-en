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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCESPEC_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DiskSpec.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Resource specification description information
                */
                class ResourceSpec : public AbstractModel
                {
                public:
                    ResourceSpec();
                    ~ResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification name, such as SCH1
                     * @return Name Specification name, such as SCH1
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specification name, such as SCH1
                     * @param _name Specification name, such as SCH1
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpu Number of CPU cores
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
                     * 获取Memory size, in GB
                     * @return Mem Memory size, in GB
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Memory size, in GB
                     * @param _mem Memory size, in GB
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Classification markers, STANDARD/BIGDATA/HIGHIO respectively represent standard type/big data type/high IO.
                     * @return Type Classification markers, STANDARD/BIGDATA/HIGHIO respectively represent standard type/big data type/high IO.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Classification markers, STANDARD/BIGDATA/HIGHIO respectively represent standard type/big data type/high IO.
                     * @param _type Classification markers, STANDARD/BIGDATA/HIGHIO respectively represent standard type/big data type/high IO.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取System disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SystemDisk System disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DiskSpec GetSystemDisk() const;

                    /**
                     * 设置System disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _systemDisk System disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemDisk(const DiskSpec& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Data disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataDisk Data disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DiskSpec GetDataDisk() const;

                    /**
                     * 设置Data disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataDisk Data disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataDisk(const DiskSpec& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取Limit of the maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxNodeSize Limit of the maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxNodeSize() const;

                    /**
                     * 设置Limit of the maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxNodeSize Limit of the maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxNodeSize(const int64_t& _maxNodeSize);

                    /**
                     * 判断参数 MaxNodeSize 是否已赋值
                     * @return MaxNodeSize 是否已赋值
                     * 
                     */
                    bool MaxNodeSizeHasBeenSet() const;

                    /**
                     * 获取Whether it is available. False indicates sell-out.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Available Whether it is available. False indicates sell-out.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置Whether it is available. False indicates sell-out.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _available Whether it is available. False indicates sell-out.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取Specification description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComputeSpecDesc Specification description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComputeSpecDesc() const;

                    /**
                     * 设置Specification description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _computeSpecDesc Specification description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComputeSpecDesc(const std::string& _computeSpecDesc);

                    /**
                     * 判断参数 ComputeSpecDesc 是否已赋值
                     * @return ComputeSpecDesc 是否已赋值
                     * 
                     */
                    bool ComputeSpecDescHasBeenSet() const;

                    /**
                     * 获取CVM inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceQuota CVM inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInstanceQuota() const;

                    /**
                     * 设置CVM inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceQuota CVM inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceQuota(const int64_t& _instanceQuota);

                    /**
                     * 判断参数 InstanceQuota 是否已赋值
                     * @return InstanceQuota 是否已赋值
                     * 
                     */
                    bool InstanceQuotaHasBeenSet() const;

                private:

                    /**
                     * Specification name, such as SCH1
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size, in GB
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Classification markers, STANDARD/BIGDATA/HIGHIO respectively represent standard type/big data type/high IO.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * System disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DiskSpec m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DiskSpec m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * Limit of the maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxNodeSize;
                    bool m_maxNodeSizeHasBeenSet;

                    /**
                     * Whether it is available. False indicates sell-out.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * Specification description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_computeSpecDesc;
                    bool m_computeSpecDescHasBeenSet;

                    /**
                     * CVM inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceQuota;
                    bool m_instanceQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCESPEC_H_
