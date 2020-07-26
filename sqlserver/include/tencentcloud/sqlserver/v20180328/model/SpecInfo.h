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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Information of purchasable specification for an instance
                */
                class SpecInfo : public AbstractModel
                {
                public:
                    SpecInfo();
                    ~SpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance specification ID. The `SpecId` returned by `DescribeZones` together with the purchasable specification information returned by `DescribeProductConfig` can be used to find out what specifications can be purchased in a specified AZ
                     * @return SpecId Instance specification ID. The `SpecId` returned by `DescribeZones` together with the purchasable specification information returned by `DescribeProductConfig` can be used to find out what specifications can be purchased in a specified AZ
                     */
                    int64_t GetSpecId() const;

                    /**
                     * 设置Instance specification ID. The `SpecId` returned by `DescribeZones` together with the purchasable specification information returned by `DescribeProductConfig` can be used to find out what specifications can be purchased in a specified AZ
                     * @param SpecId Instance specification ID. The `SpecId` returned by `DescribeZones` together with the purchasable specification information returned by `DescribeProductConfig` can be used to find out what specifications can be purchased in a specified AZ
                     */
                    void SetSpecId(const int64_t& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取Model ID
                     * @return MachineType Model ID
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Model ID
                     * @param MachineType Model ID
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Model name
                     * @return MachineTypeName Model name
                     */
                    std::string GetMachineTypeName() const;

                    /**
                     * 设置Model name
                     * @param MachineTypeName Model name
                     */
                    void SetMachineTypeName(const std::string& _machineTypeName);

                    /**
                     * 判断参数 MachineTypeName 是否已赋值
                     * @return MachineTypeName 是否已赋值
                     */
                    bool MachineTypeNameHasBeenSet() const;

                    /**
                     * 获取Database version information. Valid values: 2008R2 (SQL Server 2008 Enterprise), 2012SP3 (SQL Server 2012 Enterprise), 2016SP1 (SQL Server 2016 Enterprise), 201602 (SQL Server 2016 Standard), 2017 (SQL Server 2017 Enterprise)
                     * @return Version Database version information. Valid values: 2008R2 (SQL Server 2008 Enterprise), 2012SP3 (SQL Server 2012 Enterprise), 2016SP1 (SQL Server 2016 Enterprise), 201602 (SQL Server 2016 Standard), 2017 (SQL Server 2017 Enterprise)
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Database version information. Valid values: 2008R2 (SQL Server 2008 Enterprise), 2012SP3 (SQL Server 2012 Enterprise), 2016SP1 (SQL Server 2016 Enterprise), 201602 (SQL Server 2016 Standard), 2017 (SQL Server 2017 Enterprise)
                     * @param Version Database version information. Valid values: 2008R2 (SQL Server 2008 Enterprise), 2012SP3 (SQL Server 2012 Enterprise), 2016SP1 (SQL Server 2016 Enterprise), 201602 (SQL Server 2016 Standard), 2017 (SQL Server 2017 Enterprise)
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Version name corresponding to the `Version` field
                     * @return VersionName Version name corresponding to the `Version` field
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version name corresponding to the `Version` field
                     * @param VersionName Version name corresponding to the `Version` field
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Memory size in GB
                     * @return Memory Memory size in GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB
                     * @param Memory Memory size in GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return CPU Number of CPU cores
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores
                     * @param CPU Number of CPU cores
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Minimum disk size under this specification in GB
                     * @return MinStorage Minimum disk size under this specification in GB
                     */
                    int64_t GetMinStorage() const;

                    /**
                     * 设置Minimum disk size under this specification in GB
                     * @param MinStorage Minimum disk size under this specification in GB
                     */
                    void SetMinStorage(const int64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取Maximum disk size under this specification in GB
                     * @return MaxStorage Maximum disk size under this specification in GB
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置Maximum disk size under this specification in GB
                     * @param MaxStorage Maximum disk size under this specification in GB
                     */
                    void SetMaxStorage(const int64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取QPS of this specification
                     * @return QPS QPS of this specification
                     */
                    int64_t GetQPS() const;

                    /**
                     * 设置QPS of this specification
                     * @param QPS QPS of this specification
                     */
                    void SetQPS(const int64_t& _qPS);

                    /**
                     * 判断参数 QPS 是否已赋值
                     * @return QPS 是否已赋值
                     */
                    bool QPSHasBeenSet() const;

                    /**
                     * 获取Description of this specification
                     * @return SuitInfo Description of this specification
                     */
                    std::string GetSuitInfo() const;

                    /**
                     * 设置Description of this specification
                     * @param SuitInfo Description of this specification
                     */
                    void SetSuitInfo(const std::string& _suitInfo);

                    /**
                     * 判断参数 SuitInfo 是否已赋值
                     * @return SuitInfo 是否已赋值
                     */
                    bool SuitInfoHasBeenSet() const;

                    /**
                     * 获取Pid of this specification
                     * @return Pid Pid of this specification
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Pid of this specification
                     * @param Pid Pid of this specification
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Pay-as-you-go Pid list corresponding to this specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PostPid Pay-as-you-go Pid list corresponding to this specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetPostPid() const;

                    /**
                     * 设置Pay-as-you-go Pid list corresponding to this specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PostPid Pay-as-you-go Pid list corresponding to this specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPostPid(const std::vector<int64_t>& _postPid);

                    /**
                     * 判断参数 PostPid 是否已赋值
                     * @return PostPid 是否已赋值
                     */
                    bool PostPidHasBeenSet() const;

                    /**
                     * 获取Billing mode under this specification. POST: pay-as-you-go
                     * @return PayModeStatus Billing mode under this specification. POST: pay-as-you-go
                     */
                    std::string GetPayModeStatus() const;

                    /**
                     * 设置Billing mode under this specification. POST: pay-as-you-go
                     * @param PayModeStatus Billing mode under this specification. POST: pay-as-you-go
                     */
                    void SetPayModeStatus(const std::string& _payModeStatus);

                    /**
                     * 判断参数 PayModeStatus 是否已赋值
                     * @return PayModeStatus 是否已赋值
                     */
                    bool PayModeStatusHasBeenSet() const;

                private:

                    /**
                     * Instance specification ID. The `SpecId` returned by `DescribeZones` together with the purchasable specification information returned by `DescribeProductConfig` can be used to find out what specifications can be purchased in a specified AZ
                     */
                    int64_t m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * Model ID
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Model name
                     */
                    std::string m_machineTypeName;
                    bool m_machineTypeNameHasBeenSet;

                    /**
                     * Database version information. Valid values: 2008R2 (SQL Server 2008 Enterprise), 2012SP3 (SQL Server 2012 Enterprise), 2016SP1 (SQL Server 2016 Enterprise), 201602 (SQL Server 2016 Standard), 2017 (SQL Server 2017 Enterprise)
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Version name corresponding to the `Version` field
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Memory size in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Minimum disk size under this specification in GB
                     */
                    int64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * Maximum disk size under this specification in GB
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * QPS of this specification
                     */
                    int64_t m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * Description of this specification
                     */
                    std::string m_suitInfo;
                    bool m_suitInfoHasBeenSet;

                    /**
                     * Pid of this specification
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Pay-as-you-go Pid list corresponding to this specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_postPid;
                    bool m_postPidHasBeenSet;

                    /**
                     * Billing mode under this specification. POST: pay-as-you-go
                     */
                    std::string m_payModeStatus;
                    bool m_payModeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECINFO_H_
