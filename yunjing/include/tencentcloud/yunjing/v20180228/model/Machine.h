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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MACHINE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/MachineTag.h>
#include <tencentcloud/yunjing/v20180228/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Server list
                */
                class Machine : public AbstractModel
                {
                public:
                    Machine();
                    ~Machine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param MachineName Server name.
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Server OS.
                     * @return MachineOs Server OS.
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置Server OS.
                     * @param MachineOs Server OS.
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取Server status.
<li>OFFLINE: offline</li>
<li>ONLINE: online</li>
<li>MACHINE_STOPPED: shut down</li>
                     * @return MachineStatus Server status.
<li>OFFLINE: offline</li>
<li>ONLINE: online</li>
<li>MACHINE_STOPPED: shut down</li>
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置Server status.
<li>OFFLINE: offline</li>
<li>ONLINE: online</li>
<li>MACHINE_STOPPED: shut down</li>
                     * @param MachineStatus Server status.
<li>OFFLINE: offline</li>
<li>ONLINE: online</li>
<li>MACHINE_STOPPED: shut down</li>
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取CWP agent `Uuid`. If the agent is offline for a long time, a null character will be returned.
                     * @return Uuid CWP agent `Uuid`. If the agent is offline for a long time, a null character will be returned.
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `Uuid`. If the agent is offline for a long time, a null character will be returned.
                     * @param Uuid CWP agent `Uuid`. If the agent is offline for a long time, a null character will be returned.
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取CVM or BM instance `Uuid`.
                     * @return Quuid CVM or BM instance `Uuid`.
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM or BM instance `Uuid`.
                     * @param Quuid CVM or BM instance `Uuid`.
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities.
                     * @return VulNum Number of vulnerabilities.
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置Number of vulnerabilities.
                     * @param VulNum Number of vulnerabilities.
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取Server IP.
                     * @return MachineIp Server IP.
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Server IP.
                     * @param MachineIp Server IP.
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Whether the server has enabled CWP Pro.
<li>true: yes</li>
<li>false: no</li>
                     * @return IsProVersion Whether the server has enabled CWP Pro.
<li>true: yes</li>
<li>false: no</li>
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置Whether the server has enabled CWP Pro.
<li>true: yes</li>
<li>false: no</li>
                     * @param IsProVersion Whether the server has enabled CWP Pro.
<li>true: yes</li>
<li>false: no</li>
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取Public IP of server.
                     * @return MachineWanIp Public IP of server.
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP of server.
                     * @param MachineWanIp Public IP of server.
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     * @return PayMode Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     * @param PayMode Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Number of trojans.
                     * @return MalwareNum Number of trojans.
                     */
                    int64_t GetMalwareNum() const;

                    /**
                     * 设置Number of trojans.
                     * @param MalwareNum Number of trojans.
                     */
                    void SetMalwareNum(const int64_t& _malwareNum);

                    /**
                     * 判断参数 MalwareNum 是否已赋值
                     * @return MalwareNum 是否已赋值
                     */
                    bool MalwareNumHasBeenSet() const;

                    /**
                     * 获取Tag information
                     * @return Tag Tag information
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置Tag information
                     * @param Tag Tag information
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Number of baseline risks.
                     * @return BaselineNum Number of baseline risks.
                     */
                    int64_t GetBaselineNum() const;

                    /**
                     * 设置Number of baseline risks.
                     * @param BaselineNum Number of baseline risks.
                     */
                    void SetBaselineNum(const int64_t& _baselineNum);

                    /**
                     * 判断参数 BaselineNum 是否已赋值
                     * @return BaselineNum 是否已赋值
                     */
                    bool BaselineNumHasBeenSet() const;

                    /**
                     * 获取Number of network risks.
                     * @return CyberAttackNum Number of network risks.
                     */
                    int64_t GetCyberAttackNum() const;

                    /**
                     * 设置Number of network risks.
                     * @param CyberAttackNum Number of network risks.
                     */
                    void SetCyberAttackNum(const int64_t& _cyberAttackNum);

                    /**
                     * 判断参数 CyberAttackNum 是否已赋值
                     * @return CyberAttackNum 是否已赋值
                     */
                    bool CyberAttackNumHasBeenSet() const;

                    /**
                     * 获取Risk status.
<li>SAFE: safe</li>
<li>RISK: at risk</li>
<li>UNKNOWN: unknown</li>
                     * @return SecurityStatus Risk status.
<li>SAFE: safe</li>
<li>RISK: at risk</li>
<li>UNKNOWN: unknown</li>
                     */
                    std::string GetSecurityStatus() const;

                    /**
                     * 设置Risk status.
<li>SAFE: safe</li>
<li>RISK: at risk</li>
<li>UNKNOWN: unknown</li>
                     * @param SecurityStatus Risk status.
<li>SAFE: safe</li>
<li>RISK: at risk</li>
<li>UNKNOWN: unknown</li>
                     */
                    void SetSecurityStatus(const std::string& _securityStatus);

                    /**
                     * 判断参数 SecurityStatus 是否已赋值
                     * @return SecurityStatus 是否已赋值
                     */
                    bool SecurityStatusHasBeenSet() const;

                    /**
                     * 获取Number of intrusions
                     * @return InvasionNum Number of intrusions
                     */
                    int64_t GetInvasionNum() const;

                    /**
                     * 设置Number of intrusions
                     * @param InvasionNum Number of intrusions
                     */
                    void SetInvasionNum(const int64_t& _invasionNum);

                    /**
                     * 判断参数 InvasionNum 是否已赋值
                     * @return InvasionNum 是否已赋值
                     */
                    bool InvasionNumHasBeenSet() const;

                    /**
                     * 获取Region information
                     * @return RegionInfo Region information
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Region information
                     * @param RegionInfo Region information
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     */
                    bool RegionInfoHasBeenSet() const;

                private:

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Server OS.
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * Server status.
<li>OFFLINE: offline</li>
<li>ONLINE: online</li>
<li>MACHINE_STOPPED: shut down</li>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * CWP agent `Uuid`. If the agent is offline for a long time, a null character will be returned.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * CVM or BM instance `Uuid`.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Number of vulnerabilities.
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Server IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Whether the server has enabled CWP Pro.
<li>true: yes</li>
<li>false: no</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * Public IP of server.
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Number of trojans.
                     */
                    int64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Number of baseline risks.
                     */
                    int64_t m_baselineNum;
                    bool m_baselineNumHasBeenSet;

                    /**
                     * Number of network risks.
                     */
                    int64_t m_cyberAttackNum;
                    bool m_cyberAttackNumHasBeenSet;

                    /**
                     * Risk status.
<li>SAFE: safe</li>
<li>RISK: at risk</li>
<li>UNKNOWN: unknown</li>
                     */
                    std::string m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                    /**
                     * Number of intrusions
                     */
                    int64_t m_invasionNum;
                    bool m_invasionNumHasBeenSet;

                    /**
                     * Region information
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MACHINE_H_
