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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
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
                * Host list
                */
                class Machine : public AbstractModel
                {
                public:
                    Machine();
                    ~Machine() = default;
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
                     * 获取Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shutdown</li> <li>UNINSTALLED: No protection</li>	
                     * @return MachineStatus Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shutdown</li> <li>UNINSTALLED: No protection</li>	
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shutdown</li> <li>UNINSTALLED: No protection</li>	
                     * @param _machineStatus Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shutdown</li> <li>UNINSTALLED: No protection</li>	
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取ONLINE Under protection; OFFLINE OFFLINE; UNINStALLED Not installed
                     * @return AgentStatus ONLINE Under protection; OFFLINE OFFLINE; UNINStALLED Not installed
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置ONLINE Under protection; OFFLINE OFFLINE; UNINStALLED Not installed
                     * @param _agentStatus ONLINE Under protection; OFFLINE OFFLINE; UNINStALLED Not installed
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取RUNNING; is shut down; to be recycled	
                     * @return InstanceStatus RUNNING; is shut down; to be recycled	
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置RUNNING; is shut down; to be recycled	
                     * @param _instanceStatus RUNNING; is shut down; to be recycled	
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取CWP UUID. If the CWP client is offline for a long time, an empty character is returned.
                     * @return Uuid CWP UUID. If the CWP client is offline for a long time, an empty character is returned.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP UUID. If the CWP client is offline for a long time, an empty character is returned.
                     * @param _uuid CWP UUID. If the CWP client is offline for a long time, an empty character is returned.
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
                     * 获取Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * @return IsProVersion Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * @param _isProVersion Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取Public IP address of a host
                     * @return MachineWanIp Public IP address of a host
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address of a host
                     * @param _machineWanIp Public IP address of a host
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
                     * 获取Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode  </li>
<li>PREPAY: prepaid, indicating yearly/monthly subscription mode</li>
                     * @return PayMode Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode  </li>
<li>PREPAY: prepaid, indicating yearly/monthly subscription mode</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode  </li>
<li>PREPAY: prepaid, indicating yearly/monthly subscription mode</li>
                     * @param _payMode Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode  </li>
<li>PREPAY: prepaid, indicating yearly/monthly subscription mode</li>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Number of Trojans
                     * @return MalwareNum Number of Trojans
                     * 
                     */
                    int64_t GetMalwareNum() const;

                    /**
                     * 设置Number of Trojans
                     * @param _malwareNum Number of Trojans
                     * 
                     */
                    void SetMalwareNum(const int64_t& _malwareNum);

                    /**
                     * 判断参数 MalwareNum 是否已赋值
                     * @return MalwareNum 是否已赋值
                     * 
                     */
                    bool MalwareNumHasBeenSet() const;

                    /**
                     * 获取Tag information
                     * @return Tag Tag information
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置Tag information
                     * @param _tag Tag information
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

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
                     * 获取Region information
                     * @return RegionInfo Region information
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Region information
                     * @param _regionInfo Region information
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取Instance status: TERMINATED_PRO_VERSION - terminated
                     * @return InstanceState Instance status: TERMINATED_PRO_VERSION - terminated
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status: TERMINATED_PRO_VERSION - terminated
                     * @param _instanceState Instance status: TERMINATED_PRO_VERSION - terminated
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized
                     * @return LicenseStatus Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized
                     * 
                     */
                    uint64_t GetLicenseStatus() const;

                    /**
                     * 设置Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized
                     * @param _licenseStatus Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized
                     * 
                     */
                    void SetLicenseStatus(const uint64_t& _licenseStatus);

                    /**
                     * 判断参数 LicenseStatus 是否已赋值
                     * @return LicenseStatus 是否已赋值
                     * 
                     */
                    bool LicenseStatusHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Whether there is an available asset scanning API: 0 - no; 1 - yes
                     * @return HasAssetScan Whether there is an available asset scanning API: 0 - no; 1 - yes
                     * 
                     */
                    uint64_t GetHasAssetScan() const;

                    /**
                     * 设置Whether there is an available asset scanning API: 0 - no; 1 - yes
                     * @param _hasAssetScan Whether there is an available asset scanning API: 0 - no; 1 - yes
                     * 
                     */
                    void SetHasAssetScan(const uint64_t& _hasAssetScan);

                    /**
                     * 判断参数 HasAssetScan 是否已赋值
                     * @return HasAssetScan 是否已赋值
                     * 
                     */
                    bool HasAssetScanHasBeenSet() const;

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
                     * 获取Kernel version
                     * @return KernelVersion Kernel version
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置Kernel version
                     * @param _kernelVersion Kernel version
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
                     * 获取Protection version: BASIC_VERSION - Basic Edition; PRO_VERSION - Professional Edition; Flagship - Ultimate Edition; GENERAL_DISCOUNT - Lightweight Edition
                     * @return ProtectType Protection version: BASIC_VERSION - Basic Edition; PRO_VERSION - Professional Edition; Flagship - Ultimate Edition; GENERAL_DISCOUNT - Lightweight Edition
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置Protection version: BASIC_VERSION - Basic Edition; PRO_VERSION - Professional Edition; Flagship - Ultimate Edition; GENERAL_DISCOUNT - Lightweight Edition
                     * @param _protectType Protection version: BASIC_VERSION - Basic Edition; PRO_VERSION - Professional Edition; Flagship - Ultimate Edition; GENERAL_DISCOUNT - Lightweight Edition
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取Cloud Tag Information
                     * @return CloudTags Cloud Tag Information
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置Cloud Tag Information
                     * @param _cloudTags Cloud Tag Information
                     * 
                     */
                    void SetCloudTags(const std::vector<Tags>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取Whether the host is added within 15 days. 0: Host not added within 15 days. 1: Host added within 15 days.
                     * @return IsAddedOnTheFifteen Whether the host is added within 15 days. 0: Host not added within 15 days. 1: Host added within 15 days.
                     * 
                     */
                    uint64_t GetIsAddedOnTheFifteen() const;

                    /**
                     * 设置Whether the host is added within 15 days. 0: Host not added within 15 days. 1: Host added within 15 days.
                     * @param _isAddedOnTheFifteen Whether the host is added within 15 days. 0: Host not added within 15 days. 1: Host added within 15 days.
                     * 
                     */
                    void SetIsAddedOnTheFifteen(const uint64_t& _isAddedOnTheFifteen);

                    /**
                     * 判断参数 IsAddedOnTheFifteen 是否已赋值
                     * @return IsAddedOnTheFifteen 是否已赋值
                     * 
                     */
                    bool IsAddedOnTheFifteenHasBeenSet() const;

                    /**
                     * 获取Host IP List
                     * @return IpList Host IP List
                     * 
                     */
                    std::string GetIpList() const;

                    /**
                     * 设置Host IP List
                     * @param _ipList Host IP List
                     * 
                     */
                    void SetIpList(const std::string& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取Network
                     * @return VpcId Network
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Network
                     * @param _vpcId Network
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Additional information
                     * @return MachineExtraInfo Additional information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
                     * @param _machineExtraInfo Additional information
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Host security agent version
                     * @return AgentVersion Host security agent version
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置Host security agent version
                     * @param _agentVersion Host security agent version
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取
                     * @return AppId 
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置
                     * @param _appId 
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return CSIPProtectType 
                     * 
                     */
                    std::string GetCSIPProtectType() const;

                    /**
                     * 设置
                     * @param _cSIPProtectType 
                     * 
                     */
                    void SetCSIPProtectType(const std::string& _cSIPProtectType);

                    /**
                     * 判断参数 CSIPProtectType 是否已赋值
                     * @return CSIPProtectType 是否已赋值
                     * 
                     */
                    bool CSIPProtectTypeHasBeenSet() const;

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
                     * Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shutdown</li> <li>UNINSTALLED: No protection</li>	
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * ONLINE Under protection; OFFLINE OFFLINE; UNINStALLED Not installed
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * RUNNING; is shut down; to be recycled	
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * CWP UUID. If the CWP client is offline for a long time, an empty character is returned.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

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
                     * Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * Public IP address of a host
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode  </li>
<li>PREPAY: prepaid, indicating yearly/monthly subscription mode</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Number of Trojans
                     */
                    int64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

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
                     * Region information
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * Instance status: TERMINATED_PRO_VERSION - terminated
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized
                     */
                    uint64_t m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether there is an available asset scanning API: 0 - no; 1 - yes
                     */
                    uint64_t m_hasAssetScan;
                    bool m_hasAssetScanHasBeenSet;

                    /**
                     * Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Kernel version
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * Protection version: BASIC_VERSION - Basic Edition; PRO_VERSION - Professional Edition; Flagship - Ultimate Edition; GENERAL_DISCOUNT - Lightweight Edition
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * Cloud Tag Information
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * Whether the host is added within 15 days. 0: Host not added within 15 days. 1: Host added within 15 days.
                     */
                    uint64_t m_isAddedOnTheFifteen;
                    bool m_isAddedOnTheFifteenHasBeenSet;

                    /**
                     * Host IP List
                     */
                    std::string m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * Network
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Additional information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Host security agent version
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_cSIPProtectType;
                    bool m_cSIPProtectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINE_H_
