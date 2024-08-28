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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENMACHINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENMACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Data of listed hosts on the large screen
                */
                class ScreenMachine : public AbstractModel
                {
                public:
                    ScreenMachine();
                    ~ScreenMachine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host name.
                     * @return MachineName Host name.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Host name.
                     * @param _machineName Host name.
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Host System.
                     * @return MachineOs Host System.
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置Host System.
                     * @param _machineOs Host System.
                     * 
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     * 
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * @return Uuid Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * @param _uuid Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Status of a host on the large screen. 0: agent not installed; 1: offline; 2: offline - risky; 3: offline - critical;
4: device installed - normal; 5: device installed - normal and of either Pro Edition or Ultimate Edition; 6: device installed - risky (network attack events > 0);
7: device installed - risky (network attack events > 0) and of either Pro Edition or Ultimate Edition; 8: device installed - critical (intrusion detection events > 0);
9: device installed - critical (intrusion detection events > 0) and of either Pro Edition or Ultimate Edition
                     * @return MachineStatus Status of a host on the large screen. 0: agent not installed; 1: offline; 2: offline - risky; 3: offline - critical;
4: device installed - normal; 5: device installed - normal and of either Pro Edition or Ultimate Edition; 6: device installed - risky (network attack events > 0);
7: device installed - risky (network attack events > 0) and of either Pro Edition or Ultimate Edition; 8: device installed - critical (intrusion detection events > 0);
9: device installed - critical (intrusion detection events > 0) and of either Pro Edition or Ultimate Edition
                     * 
                     */
                    uint64_t GetMachineStatus() const;

                    /**
                     * 设置Status of a host on the large screen. 0: agent not installed; 1: offline; 2: offline - risky; 3: offline - critical;
4: device installed - normal; 5: device installed - normal and of either Pro Edition or Ultimate Edition; 6: device installed - risky (network attack events > 0);
7: device installed - risky (network attack events > 0) and of either Pro Edition or Ultimate Edition; 8: device installed - critical (intrusion detection events > 0);
9: device installed - critical (intrusion detection events > 0) and of either Pro Edition or Ultimate Edition
                     * @param _machineStatus Status of a host on the large screen. 0: agent not installed; 1: offline; 2: offline - risky; 3: offline - critical;
4: device installed - normal; 5: device installed - normal and of either Pro Edition or Ultimate Edition; 6: device installed - risky (network attack events > 0);
7: device installed - risky (network attack events > 0) and of either Pro Edition or Ultimate Edition; 8: device installed - critical (intrusion detection events > 0);
9: device installed - critical (intrusion detection events > 0) and of either Pro Edition or Ultimate Edition
                     * 
                     */
                    void SetMachineStatus(const uint64_t& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取CVM or BM Machine Unique UUID.
                     * @return Quuid CVM or BM Machine Unique UUID.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM or BM Machine Unique UUID.
                     * @param _quuid CVM or BM Machine Unique UUID.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
                     * @return VulNum Number of vulnerabilities
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _vulNum Number of vulnerabilities
                     * 
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取Host IP.
                     * @return MachineIp Host IP.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Host IP.
                     * @param _machineIp Host IP.
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Public IP address of the host
                     * @return MachineWanIp Public IP address of the host
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address of the host
                     * @param _machineWanIp Public IP address of the host
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Number of baseline risks
                     * @return BaselineNum Number of baseline risks
                     * 
                     */
                    int64_t GetBaselineNum() const;

                    /**
                     * 设置Number of baseline risks
                     * @param _baselineNum Number of baseline risks
                     * 
                     */
                    void SetBaselineNum(const int64_t& _baselineNum);

                    /**
                     * 判断参数 BaselineNum 是否已赋值
                     * @return BaselineNum 是否已赋值
                     * 
                     */
                    bool BaselineNumHasBeenSet() const;

                    /**
                     * 获取Number of network risks
                     * @return CyberAttackNum Number of network risks
                     * 
                     */
                    int64_t GetCyberAttackNum() const;

                    /**
                     * 设置Number of network risks
                     * @param _cyberAttackNum Number of network risks
                     * 
                     */
                    void SetCyberAttackNum(const int64_t& _cyberAttackNum);

                    /**
                     * 判断参数 CyberAttackNum 是否已赋值
                     * @return CyberAttackNum 是否已赋值
                     * 
                     */
                    bool CyberAttackNumHasBeenSet() const;

                    /**
                     * 获取Risk status
<li>SAFE: Safe</li>
<li>RISK: Risk</li>
<li>UNKNOWN: Unknown</li>
                     * @return SecurityStatus Risk status
<li>SAFE: Safe</li>
<li>RISK: Risk</li>
<li>UNKNOWN: Unknown</li>
                     * 
                     */
                    std::string GetSecurityStatus() const;

                    /**
                     * 设置Risk status
<li>SAFE: Safe</li>
<li>RISK: Risk</li>
<li>UNKNOWN: Unknown</li>
                     * @param _securityStatus Risk status
<li>SAFE: Safe</li>
<li>RISK: Risk</li>
<li>UNKNOWN: Unknown</li>
                     * 
                     */
                    void SetSecurityStatus(const std::string& _securityStatus);

                    /**
                     * 判断参数 SecurityStatus 是否已赋值
                     * @return SecurityStatus 是否已赋值
                     * 
                     */
                    bool SecurityStatusHasBeenSet() const;

                    /**
                     * 获取Number of intrusion events
                     * @return InvasionNum Number of intrusion events
                     * 
                     */
                    int64_t GetInvasionNum() const;

                    /**
                     * 设置Number of intrusion events
                     * @param _invasionNum Number of intrusion events
                     * 
                     */
                    void SetInvasionNum(const int64_t& _invasionNum);

                    /**
                     * 判断参数 InvasionNum 是否已赋值
                     * @return InvasionNum 是否已赋值
                     * 
                     */
                    bool InvasionNumHasBeenSet() const;

                    /**
                     * 获取Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * @return MachineType Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * @param _machineType Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取CPU load status
                     * @return CpuLoad CPU load status
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置CPU load status
                     * @param _cpuLoad CPU load status
                     * 
                     */
                    void SetCpuLoad(const std::string& _cpuLoad);

                    /**
                     * 判断参数 CpuLoad 是否已赋值
                     * @return CpuLoad 是否已赋值
                     * 
                     */
                    bool CpuLoadHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return CpuSize Number of CPU cores
                     * 
                     */
                    double GetCpuSize() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpuSize Number of CPU cores
                     * 
                     */
                    void SetCpuSize(const double& _cpuSize);

                    /**
                     * 判断参数 CpuSize 是否已赋值
                     * @return CpuSize 是否已赋值
                     * 
                     */
                    bool CpuSizeHasBeenSet() const;

                    /**
                     * 获取Hard disk utilization (%)
                     * @return DiskLoad Hard disk utilization (%)
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置Hard disk utilization (%)
                     * @param _diskLoad Hard disk utilization (%)
                     * 
                     */
                    void SetDiskLoad(const std::string& _diskLoad);

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     * 
                     */
                    bool DiskLoadHasBeenSet() const;

                    /**
                     * 获取Hard disk capacity (GB)
                     * @return DiskSize Hard disk capacity (GB)
                     * 
                     */
                    double GetDiskSize() const;

                    /**
                     * 设置Hard disk capacity (GB)
                     * @param _diskSize Hard disk capacity (GB)
                     * 
                     */
                    void SetDiskSize(const double& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Memory utilization (%)
                     * @return MemLoad Memory utilization (%)
                     * 
                     */
                    std::string GetMemLoad() const;

                    /**
                     * 设置Memory utilization (%)
                     * @param _memLoad Memory utilization (%)
                     * 
                     */
                    void SetMemLoad(const std::string& _memLoad);

                    /**
                     * 判断参数 MemLoad 是否已赋值
                     * @return MemLoad 是否已赋值
                     * 
                     */
                    bool MemLoadHasBeenSet() const;

                    /**
                     * 获取Memory capacity (GB)
                     * @return MemSize Memory capacity (GB)
                     * 
                     */
                    double GetMemSize() const;

                    /**
                     * 设置Memory capacity (GB)
                     * @param _memSize Memory capacity (GB)
                     * 
                     */
                    void SetMemSize(const double& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Kernel version
                     * @return CoreVersion Kernel version
                     * 
                     */
                    std::string GetCoreVersion() const;

                    /**
                     * 设置Kernel version
                     * @param _coreVersion Kernel version
                     * 
                     */
                    void SetCoreVersion(const std::string& _coreVersion);

                    /**
                     * 判断参数 CoreVersion 是否已赋值
                     * @return CoreVersion 是否已赋值
                     * 
                     */
                    bool CoreVersionHasBeenSet() const;

                    /**
                     * 获取Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Host name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Host System.
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Status of a host on the large screen. 0: agent not installed; 1: offline; 2: offline - risky; 3: offline - critical;
4: device installed - normal; 5: device installed - normal and of either Pro Edition or Ultimate Edition; 6: device installed - risky (network attack events > 0);
7: device installed - risky (network attack events > 0) and of either Pro Edition or Ultimate Edition; 8: device installed - critical (intrusion detection events > 0);
9: device installed - critical (intrusion detection events > 0) and of either Pro Edition or Ultimate Edition
                     */
                    uint64_t m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * CVM or BM Machine Unique UUID.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Host IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Public IP address of the host
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Number of baseline risks
                     */
                    int64_t m_baselineNum;
                    bool m_baselineNumHasBeenSet;

                    /**
                     * Number of network risks
                     */
                    int64_t m_cyberAttackNum;
                    bool m_cyberAttackNumHasBeenSet;

                    /**
                     * Risk status
<li>SAFE: Safe</li>
<li>RISK: Risk</li>
<li>UNKNOWN: Unknown</li>
                     */
                    std::string m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                    /**
                     * Number of intrusion events
                     */
                    int64_t m_invasionNum;
                    bool m_invasionNumHasBeenSet;

                    /**
                     * Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * CPU load status
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    double m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * Hard disk utilization (%)
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * Hard disk capacity (GB)
                     */
                    double m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Memory utilization (%)
                     */
                    std::string m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * Memory capacity (GB)
                     */
                    double m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Kernel version
                     */
                    std::string m_coreVersion;
                    bool m_coreVersionHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENMACHINE_H_
