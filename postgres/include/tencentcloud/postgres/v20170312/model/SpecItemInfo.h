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
                     * 获取<p>Specification ID.</p>
                     * @return SpecCode <p>Specification ID.</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Specification ID.</p>
                     * @param _specCode <p>Specification ID.</p>
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
                     * 获取<p>PostgreSQL version number.</p>
                     * @return Version <p>PostgreSQL version number.</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>PostgreSQL version number.</p>
                     * @param _version <p>PostgreSQL version number.</p>
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
                     * 获取<p>Full version name of the kernel number.</p>
                     * @return VersionName <p>Full version name of the kernel number.</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>Full version name of the kernel number.</p>
                     * @param _versionName <p>Full version name of the kernel number.</p>
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
                     * 获取<p>CPU cores.</p>
                     * @return Cpu <p>CPU cores.</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>CPU cores.</p>
                     * @param _cpu <p>CPU cores.</p>
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
                     * 获取<p>Memory size, in MB.</p>
                     * @return Memory <p>Memory size, in MB.</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>Memory size, in MB.</p>
                     * @param _memory <p>Memory size, in MB.</p>
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
                     * 获取<p>Maximum storage capacity supported by this specification, in GB.</p>
                     * @return MaxStorage <p>Maximum storage capacity supported by this specification, in GB.</p>
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置<p>Maximum storage capacity supported by this specification, in GB.</p>
                     * @param _maxStorage <p>Maximum storage capacity supported by this specification, in GB.</p>
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
                     * 获取<p>Minimum storage capacity supported by this specification, in GB.</p>
                     * @return MinStorage <p>Minimum storage capacity supported by this specification, in GB.</p>
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置<p>Minimum storage capacity supported by this specification, in GB.</p>
                     * @param _minStorage <p>Minimum storage capacity supported by this specification, in GB.</p>
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
                     * 获取<p>Estimated QPS of the specification.</p>
                     * @return Qps <p>Estimated QPS of the specification.</p>
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置<p>Estimated QPS of the specification.</p>
                     * @param _qps <p>Estimated QPS of the specification.</p>
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
                     * 获取<p>[Deprecated field].</p>
                     * @return Pid <p>[Deprecated field].</p>
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置<p>[Deprecated field].</p>
                     * @param _pid <p>[Deprecated field].</p>
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
                     * 获取<p>Machine type.</p>
                     * @return Type <p>Machine type.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Machine type.</p>
                     * @param _type <p>Machine type.</p>
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
                     * 获取<p>PostgreSQL major version number.</p>
                     * @return MajorVersion <p>PostgreSQL major version number.</p>
                     * 
                     */
                    std::string GetMajorVersion() const;

                    /**
                     * 设置<p>PostgreSQL major version number.</p>
                     * @param _majorVersion <p>PostgreSQL major version number.</p>
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
                     * 获取<p>PostgreSQL kernel version number.</p>
                     * @return KernelVersion <p>PostgreSQL kernel version number.</p>
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置<p>PostgreSQL kernel version number.</p>
                     * @param _kernelVersion <p>PostgreSQL kernel version number.</p>
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
                     * 获取<p>Indicates whether the TDE data encryption feature is supported. 0 - not supported. 1 - supported.</p>
                     * @return IsSupportTDE <p>Indicates whether the TDE data encryption feature is supported. 0 - not supported. 1 - supported.</p>
                     * 
                     */
                    int64_t GetIsSupportTDE() const;

                    /**
                     * 设置<p>Indicates whether the TDE data encryption feature is supported. 0 - not supported. 1 - supported.</p>
                     * @param _isSupportTDE <p>Indicates whether the TDE data encryption feature is supported. 0 - not supported. 1 - supported.</p>
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
                     * <p>Specification ID.</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>PostgreSQL version number.</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Full version name of the kernel number.</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>CPU cores.</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Memory size, in MB.</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Maximum storage capacity supported by this specification, in GB.</p>
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>Minimum storage capacity supported by this specification, in GB.</p>
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * <p>Estimated QPS of the specification.</p>
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>[Deprecated field].</p>
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>Machine type.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>PostgreSQL major version number.</p>
                     */
                    std::string m_majorVersion;
                    bool m_majorVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL kernel version number.</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * <p>Indicates whether the TDE data encryption feature is supported. 0 - not supported. 1 - supported.</p>
                     */
                    int64_t m_isSupportTDE;
                    bool m_isSupportTDEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_
