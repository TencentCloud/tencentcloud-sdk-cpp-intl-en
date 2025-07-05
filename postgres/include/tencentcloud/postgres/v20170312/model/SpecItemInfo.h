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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Specification description
                */
                class SpecItemInfo : public AbstractModel
                {
                public:
                    SpecItemInfo();
                    ~SpecItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification ID
                     * @return SpecCode Specification ID
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置Specification ID
                     * @param _specCode Specification ID
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取PostgerSQL version number
                     * @return Version PostgerSQL version number
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置PostgerSQL version number
                     * @param _version PostgerSQL version number
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Full version name corresponding to kernel number
                     * @return VersionName Full version name corresponding to kernel number
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Full version name corresponding to kernel number
                     * @param _versionName Full version name corresponding to kernel number
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpu Number of CPU cores
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
                     * 获取Memory size in MB
                     * @return Memory Memory size in MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size in MB
                     * @param _memory Memory size in MB
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
                     * 获取Maximum storage capacity in GB supported by this specification
                     * @return MaxStorage Maximum storage capacity in GB supported by this specification
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置Maximum storage capacity in GB supported by this specification
                     * @param _maxStorage Maximum storage capacity in GB supported by this specification
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取Minimum storage capacity in GB supported by this specification
                     * @return MinStorage Minimum storage capacity in GB supported by this specification
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置Minimum storage capacity in GB supported by this specification
                     * @param _minStorage Minimum storage capacity in GB supported by this specification
                     * 
                     */
                    void SetMinStorage(const uint64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取Estimated QPS for this specification
                     * @return Qps Estimated QPS for this specification
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Estimated QPS for this specification
                     * @param _qps Estimated QPS for this specification
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取(Disused)
                     * @return Pid (Disused)
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置(Disused)
                     * @param _pid (Disused)
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Machine type
                     * @return Type Machine type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Machine type
                     * @param _type Machine type
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
                     * 获取PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MajorVersion PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMajorVersion() const;

                    /**
                     * 设置PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _majorVersion PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMajorVersion(const std::string& _majorVersion);

                    /**
                     * 判断参数 MajorVersion 是否已赋值
                     * @return MajorVersion 是否已赋值
                     * 
                     */
                    bool MajorVersionHasBeenSet() const;

                    /**
                     * 获取PostgreSQL kernel version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return KernelVersion PostgreSQL kernel version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置PostgreSQL kernel version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _kernelVersion PostgreSQL kernel version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKernelVersion(const std::string& _kernelVersion);

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取Whether TDE data encryption is supported. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return IsSupportTDE Whether TDE data encryption is supported. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetIsSupportTDE() const;

                    /**
                     * 设置Whether TDE data encryption is supported. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _isSupportTDE Whether TDE data encryption is supported. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetIsSupportTDE(const int64_t& _isSupportTDE);

                    /**
                     * 判断参数 IsSupportTDE 是否已赋值
                     * @return IsSupportTDE 是否已赋值
                     * 
                     */
                    bool IsSupportTDEHasBeenSet() const;

                private:

                    /**
                     * Specification ID
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * PostgerSQL version number
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Full version name corresponding to kernel number
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size in MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Maximum storage capacity in GB supported by this specification
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * Minimum storage capacity in GB supported by this specification
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * Estimated QPS for this specification
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * (Disused)
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Machine type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_majorVersion;
                    bool m_majorVersionHasBeenSet;

                    /**
                     * PostgreSQL kernel version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * Whether TDE data encryption is supported. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_isSupportTDE;
                    bool m_isSupportTDEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_
