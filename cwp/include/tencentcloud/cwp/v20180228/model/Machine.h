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
                     * 获取<p>Host name.</p>
                     * @return MachineName <p>Host name.</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _machineName <p>Host name.</p>
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
                     * 获取<p>Host operating system.</p>
                     * @return MachineOs <p>Host operating system.</p>
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置<p>Host operating system.</p>
                     * @param _machineOs <p>Host operating system.</p>
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
                     * 获取<p>Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shut down</li> <li>UNINSTALLED: Unprotected</li></p>
                     * @return MachineStatus <p>Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shut down</li> <li>UNINSTALLED: Unprotected</li></p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shut down</li> <li>UNINSTALLED: Unprotected</li></p>
                     * @param _machineStatus <p>Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shut down</li> <li>UNINSTALLED: Unprotected</li></p>
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
                     * 获取<p>ONLINE: Protected; OFFLINE: Offline; UNINSTALLED: Not installed</p>
                     * @return AgentStatus <p>ONLINE: Protected; OFFLINE: Offline; UNINSTALLED: Not installed</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>ONLINE: Protected; OFFLINE: Offline; UNINSTALLED: Not installed</p>
                     * @param _agentStatus <p>ONLINE: Protected; OFFLINE: Offline; UNINSTALLED: Not installed</p>
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
                     * 获取<p>RUNNING: Running; STOPED: Shut down; EXPIRED: Pending reclamation</p>
                     * @return InstanceStatus <p>RUNNING: Running; STOPED: Shut down; EXPIRED: Pending reclamation</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>RUNNING: Running; STOPED: Shut down; EXPIRED: Pending reclamation</p>
                     * @param _instanceStatus <p>RUNNING: Running; STOPED: Shut down; EXPIRED: Pending reclamation</p>
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
                     * 获取<p>CWP Uuid. Returns an empty string if the client is offline long-term.</p>
                     * @return Uuid <p>CWP Uuid. Returns an empty string if the client is offline long-term.</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>CWP Uuid. Returns an empty string if the client is offline long-term.</p>
                     * @param _uuid <p>CWP Uuid. Returns an empty string if the client is offline long-term.</p>
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
                     * 获取<p>Unique Uuid of a CVM or BM machine.</p>
                     * @return Quuid <p>Unique Uuid of a CVM or BM machine.</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Unique Uuid of a CVM or BM machine.</p>
                     * @param _quuid <p>Unique Uuid of a CVM or BM machine.</p>
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
                     * 获取<p>Number of vulnerabilities.</p>
                     * @return VulNum <p>Number of vulnerabilities.</p>
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置<p>Number of vulnerabilities.</p>
                     * @param _vulNum <p>Number of vulnerabilities.</p>
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
                     * 获取<p>Host IP.</p>
                     * @return MachineIp <p>Host IP.</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>Host IP.</p>
                     * @param _machineIp <p>Host IP.</p>
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
                     * 获取<p>Whether the host is Pro Edition.</p><li>true: Yes</li><li>false: No</li>
                     * @return IsProVersion <p>Whether the host is Pro Edition.</p><li>true: Yes</li><li>false: No</li>
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置<p>Whether the host is Pro Edition.</p><li>true: Yes</li><li>false: No</li>
                     * @param _isProVersion <p>Whether the host is Pro Edition.</p><li>true: Yes</li><li>false: No</li>
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
                     * 获取<p>Host public IP.</p>
                     * @return MachineWanIp <p>Host public IP.</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>Host public IP.</p>
                     * @param _machineWanIp <p>Host public IP.</p>
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
                     * 获取<p>Host status.</p><li>POSTPAY: Postpaid (pay-as-you-go)</li><li>PREPAY: Prepaid (monthly or yearly subscription)</li>
                     * @return PayMode <p>Host status.</p><li>POSTPAY: Postpaid (pay-as-you-go)</li><li>PREPAY: Prepaid (monthly or yearly subscription)</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>Host status.</p><li>POSTPAY: Postpaid (pay-as-you-go)</li><li>PREPAY: Prepaid (monthly or yearly subscription)</li>
                     * @param _payMode <p>Host status.</p><li>POSTPAY: Postpaid (pay-as-you-go)</li><li>PREPAY: Prepaid (monthly or yearly subscription)</li>
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
                     * 获取<p>Number of trojans.</p>
                     * @return MalwareNum <p>Number of trojans.</p>
                     * 
                     */
                    int64_t GetMalwareNum() const;

                    /**
                     * 设置<p>Number of trojans.</p>
                     * @param _malwareNum <p>Number of trojans.</p>
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
                     * 获取<p>Tag information</p>
                     * @return Tag <p>Tag information</p>
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置<p>Tag information</p>
                     * @param _tag <p>Tag information</p>
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
                     * 获取<p>Number of baseline risks.</p>
                     * @return BaselineNum <p>Number of baseline risks.</p>
                     * 
                     */
                    int64_t GetBaselineNum() const;

                    /**
                     * 设置<p>Number of baseline risks.</p>
                     * @param _baselineNum <p>Number of baseline risks.</p>
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
                     * 获取<p>Number of network risks.</p>
                     * @return CyberAttackNum <p>Number of network risks.</p>
                     * 
                     */
                    int64_t GetCyberAttackNum() const;

                    /**
                     * 设置<p>Number of network risks.</p>
                     * @param _cyberAttackNum <p>Number of network risks.</p>
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
                     * 获取<p>Risk status.</p><li>SAFE: Safe</li><li>RISK: Risk</li><li>UNKNOWN: Unknown</li>
                     * @return SecurityStatus <p>Risk status.</p><li>SAFE: Safe</li><li>RISK: Risk</li><li>UNKNOWN: Unknown</li>
                     * 
                     */
                    std::string GetSecurityStatus() const;

                    /**
                     * 设置<p>Risk status.</p><li>SAFE: Safe</li><li>RISK: Risk</li><li>UNKNOWN: Unknown</li>
                     * @param _securityStatus <p>Risk status.</p><li>SAFE: Safe</li><li>RISK: Risk</li><li>UNKNOWN: Unknown</li>
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
                     * 获取<p>Number of intrusion events</p>
                     * @return InvasionNum <p>Number of intrusion events</p>
                     * 
                     */
                    int64_t GetInvasionNum() const;

                    /**
                     * 设置<p>Number of intrusion events</p>
                     * @param _invasionNum <p>Number of intrusion events</p>
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
                     * 获取<p>Region information</p>
                     * @return RegionInfo <p>Region information</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>Region information</p>
                     * @param _regionInfo <p>Region information</p>
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
                     * 获取<p>Instance status. TERMINATED_PRO_VERSION: terminated.</p>
                     * @return InstanceState <p>Instance status. TERMINATED_PRO_VERSION: terminated.</p>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>Instance status. TERMINATED_PRO_VERSION: terminated.</p>
                     * @param _instanceState <p>Instance status. TERMINATED_PRO_VERSION: terminated.</p>
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
                     * 获取<p>Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized</p>
                     * @return LicenseStatus <p>Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized</p>
                     * 
                     */
                    uint64_t GetLicenseStatus() const;

                    /**
                     * 设置<p>Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized</p>
                     * @param _licenseStatus <p>Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized</p>
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
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
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
                     * 获取<p>Whether the asset scanning API is available. 0: No; 1: Yes</p>
                     * @return HasAssetScan <p>Whether the asset scanning API is available. 0: No; 1: Yes</p>
                     * 
                     */
                    uint64_t GetHasAssetScan() const;

                    /**
                     * 设置<p>Whether the asset scanning API is available. 0: No; 1: Yes</p>
                     * @param _hasAssetScan <p>Whether the asset scanning API is available. 0: No; 1: Yes</p>
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
                     * 获取<p>Machine zone type. CVM: Cloud Virtual Machine; BM: Blackstone; ECM: Edge Computing Machine; LH: Lighthouse; Other: Hybrid cloud zone</p>
                     * @return MachineType <p>Machine zone type. CVM: Cloud Virtual Machine; BM: Blackstone; ECM: Edge Computing Machine; LH: Lighthouse; Other: Hybrid cloud zone</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>Machine zone type. CVM: Cloud Virtual Machine; BM: Blackstone; ECM: Edge Computing Machine; LH: Lighthouse; Other: Hybrid cloud zone</p>
                     * @param _machineType <p>Machine zone type. CVM: Cloud Virtual Machine; BM: Blackstone; ECM: Edge Computing Machine; LH: Lighthouse; Other: Hybrid cloud zone</p>
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
                     * 获取<p>Kernel version</p>
                     * @return KernelVersion <p>Kernel version</p>
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置<p>Kernel version</p>
                     * @param _kernelVersion <p>Kernel version</p>
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
                     * 获取<p>Protection edition: BASIC_VERSION: Basic Edition; PRO_VERSION: Pro Edition; Flagship: Ultimate Edition; GENERAL_DISCOUNT: Lighthouse Edition</p>
                     * @return ProtectType <p>Protection edition: BASIC_VERSION: Basic Edition; PRO_VERSION: Pro Edition; Flagship: Ultimate Edition; GENERAL_DISCOUNT: Lighthouse Edition</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置<p>Protection edition: BASIC_VERSION: Basic Edition; PRO_VERSION: Pro Edition; Flagship: Ultimate Edition; GENERAL_DISCOUNT: Lighthouse Edition</p>
                     * @param _protectType <p>Protection edition: BASIC_VERSION: Basic Edition; PRO_VERSION: Pro Edition; Flagship: Ultimate Edition; GENERAL_DISCOUNT: Lighthouse Edition</p>
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
                     * 获取<p>Cloud tag information</p>
                     * @return CloudTags <p>Cloud tag information</p>
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置<p>Cloud tag information</p>
                     * @param _cloudTags <p>Cloud tag information</p>
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
                     * 获取<p>Whether the host was added within the last 15 days. 0: No; 1: Yes</p>
                     * @return IsAddedOnTheFifteen <p>Whether the host was added within the last 15 days. 0: No; 1: Yes</p>
                     * 
                     */
                    uint64_t GetIsAddedOnTheFifteen() const;

                    /**
                     * 设置<p>Whether the host was added within the last 15 days. 0: No; 1: Yes</p>
                     * @param _isAddedOnTheFifteen <p>Whether the host was added within the last 15 days. 0: No; 1: Yes</p>
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
                     * 获取<p>Host IP list</p>
                     * @return IpList <p>Host IP list</p>
                     * 
                     */
                    std::string GetIpList() const;

                    /**
                     * 设置<p>Host IP list</p>
                     * @param _ipList <p>Host IP list</p>
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
                     * 获取<p>Network</p>
                     * @return VpcId <p>Network</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Network</p>
                     * @param _vpcId <p>Network</p>
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
                     * 获取<p>Additional information</p>
                     * @return MachineExtraInfo <p>Additional information</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>Additional information</p>
                     * @param _machineExtraInfo <p>Additional information</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Remarks</p>
                     * @return Remark <p>Remarks</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks</p>
                     * @param _remark <p>Remarks</p>
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
                     * 获取<p>CWP agent version</p>
                     * @return AgentVersion <p>CWP agent version</p>
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>CWP agent version</p>
                     * @param _agentVersion <p>CWP agent version</p>
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
                     * 获取<p>APPID of the machine</p>
                     * @return AppId <p>APPID of the machine</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>APPID of the machine</p>
                     * @param _appId <p>APPID of the machine</p>
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
                     * 获取<p>CSC paid edition</p>
                     * @return CSIPProtectType <p>CSC paid edition</p>
                     * 
                     */
                    std::string GetCSIPProtectType() const;

                    /**
                     * 设置<p>CSC paid edition</p>
                     * @param _cSIPProtectType <p>CSC paid edition</p>
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
                     * <p>Host name.</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Host operating system.</p>
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * <p>Host status. <li>OFFLINE: Offline</li> <li>ONLINE: Online</li> <li>SHUTDOWN: Shut down</li> <li>UNINSTALLED: Unprotected</li></p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>ONLINE: Protected; OFFLINE: Offline; UNINSTALLED: Not installed</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>RUNNING: Running; STOPED: Shut down; EXPIRED: Pending reclamation</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>CWP Uuid. Returns an empty string if the client is offline long-term.</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>Unique Uuid of a CVM or BM machine.</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Number of vulnerabilities.</p>
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * <p>Host IP.</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>Whether the host is Pro Edition.</p><li>true: Yes</li><li>false: No</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * <p>Host public IP.</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>Host status.</p><li>POSTPAY: Postpaid (pay-as-you-go)</li><li>PREPAY: Prepaid (monthly or yearly subscription)</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Number of trojans.</p>
                     */
                    int64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * <p>Tag information</p>
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Number of baseline risks.</p>
                     */
                    int64_t m_baselineNum;
                    bool m_baselineNumHasBeenSet;

                    /**
                     * <p>Number of network risks.</p>
                     */
                    int64_t m_cyberAttackNum;
                    bool m_cyberAttackNumHasBeenSet;

                    /**
                     * <p>Risk status.</p><li>SAFE: Safe</li><li>RISK: Risk</li><li>UNKNOWN: Unknown</li>
                     */
                    std::string m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                    /**
                     * <p>Number of intrusion events</p>
                     */
                    int64_t m_invasionNum;
                    bool m_invasionNumHasBeenSet;

                    /**
                     * <p>Region information</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>Instance status. TERMINATED_PRO_VERSION: terminated.</p>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * <p>Tamper-proof; authorization status: 1 - authorized; 0 - unauthorized</p>
                     */
                    uint64_t m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Whether the asset scanning API is available. 0: No; 1: Yes</p>
                     */
                    uint64_t m_hasAssetScan;
                    bool m_hasAssetScanHasBeenSet;

                    /**
                     * <p>Machine zone type. CVM: Cloud Virtual Machine; BM: Blackstone; ECM: Edge Computing Machine; LH: Lighthouse; Other: Hybrid cloud zone</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>Kernel version</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * <p>Protection edition: BASIC_VERSION: Basic Edition; PRO_VERSION: Pro Edition; Flagship: Ultimate Edition; GENERAL_DISCOUNT: Lighthouse Edition</p>
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * <p>Cloud tag information</p>
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>Whether the host was added within the last 15 days. 0: No; 1: Yes</p>
                     */
                    uint64_t m_isAddedOnTheFifteen;
                    bool m_isAddedOnTheFifteenHasBeenSet;

                    /**
                     * <p>Host IP list</p>
                     */
                    std::string m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>Network</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Additional information</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Remarks</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>CWP agent version</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>APPID of the machine</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>CSC paid edition</p>
                     */
                    std::string m_cSIPProtectType;
                    bool m_cSIPProtectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINE_H_
