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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSCNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSCNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/SecurityEventInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityEventsCnt response structure.
                */
                class DescribeSecurityEventsCntResponse : public AbstractModel
                {
                public:
                    DescribeSecurityEventsCntResponse();
                    ~DescribeSecurityEventsCntResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Trojan file-related risk event
                     * @return Malware Trojan file-related risk event
                     * 
                     */
                    SecurityEventInfo GetMalware() const;

                    /**
                     * 判断参数 Malware 是否已赋值
                     * @return Malware 是否已赋值
                     * 
                     */
                    bool MalwareHasBeenSet() const;

                    /**
                     * 获取Log-in audit-related risk event
                     * @return HostLogin Log-in audit-related risk event
                     * 
                     */
                    SecurityEventInfo GetHostLogin() const;

                    /**
                     * 判断参数 HostLogin 是否已赋值
                     * @return HostLogin 是否已赋值
                     * 
                     */
                    bool HostLoginHasBeenSet() const;

                    /**
                     * 获取Password cracking-related risk event
                     * @return BruteAttack Password cracking-related risk event
                     * 
                     */
                    SecurityEventInfo GetBruteAttack() const;

                    /**
                     * 判断参数 BruteAttack 是否已赋值
                     * @return BruteAttack 是否已赋值
                     * 
                     */
                    bool BruteAttackHasBeenSet() const;

                    /**
                     * 获取Malicious request-related risk event
                     * @return RiskDns Malicious request-related risk event
                     * 
                     */
                    SecurityEventInfo GetRiskDns() const;

                    /**
                     * 判断参数 RiskDns 是否已赋值
                     * @return RiskDns 是否已赋值
                     * 
                     */
                    bool RiskDnsHasBeenSet() const;

                    /**
                     * 获取High-risk command-related risk event
                     * @return Bash High-risk command-related risk event
                     * 
                     */
                    SecurityEventInfo GetBash() const;

                    /**
                     * 判断参数 Bash 是否已赋值
                     * @return Bash 是否已赋值
                     * 
                     */
                    bool BashHasBeenSet() const;

                    /**
                     * 获取Local privilege escalation-related risk event
                     * @return PrivilegeRules Local privilege escalation-related risk event
                     * 
                     */
                    SecurityEventInfo GetPrivilegeRules() const;

                    /**
                     * 判断参数 PrivilegeRules 是否已赋值
                     * @return PrivilegeRules 是否已赋值
                     * 
                     */
                    bool PrivilegeRulesHasBeenSet() const;

                    /**
                     * 获取Reverse Shell-related risk event
                     * @return ReverseShell Reverse Shell-related risk event
                     * 
                     */
                    SecurityEventInfo GetReverseShell() const;

                    /**
                     * 判断参数 ReverseShell 是否已赋值
                     * @return ReverseShell 是否已赋值
                     * 
                     */
                    bool ReverseShellHasBeenSet() const;

                    /**
                     * 获取Application vulnerability-related risk event
                     * @return SysVul Application vulnerability-related risk event
                     * 
                     */
                    SecurityEventInfo GetSysVul() const;

                    /**
                     * 判断参数 SysVul 是否已赋值
                     * @return SysVul 是否已赋值
                     * 
                     */
                    bool SysVulHasBeenSet() const;

                    /**
                     * 获取Web application vulnerability-related risk event
                     * @return WebVul Web application vulnerability-related risk event
                     * 
                     */
                    SecurityEventInfo GetWebVul() const;

                    /**
                     * 判断参数 WebVul 是否已赋值
                     * @return WebVul 是否已赋值
                     * 
                     */
                    bool WebVulHasBeenSet() const;

                    /**
                     * 获取Emergency vulnerability-related risk event
                     * @return EmergencyVul Emergency vulnerability-related risk event
                     * 
                     */
                    SecurityEventInfo GetEmergencyVul() const;

                    /**
                     * 判断参数 EmergencyVul 是否已赋值
                     * @return EmergencyVul 是否已赋值
                     * 
                     */
                    bool EmergencyVulHasBeenSet() const;

                    /**
                     * 获取Security baseline-related risk event
                     * @return BaseLine Security baseline-related risk event
                     * 
                     */
                    SecurityEventInfo GetBaseLine() const;

                    /**
                     * 判断参数 BaseLine 是否已赋值
                     * @return BaseLine 是否已赋值
                     * 
                     */
                    bool BaseLineHasBeenSet() const;

                    /**
                     * 获取Attack detection-related risk event
                     * @return AttackLogs Attack detection-related risk event
                     * 
                     */
                    SecurityEventInfo GetAttackLogs() const;

                    /**
                     * 判断参数 AttackLogs 是否已赋值
                     * @return AttackLogs 是否已赋值
                     * 
                     */
                    bool AttackLogsHasBeenSet() const;

                    /**
                     * 获取Number of affected machines
                     * @return EffectMachineCount Number of affected machines
                     * 
                     */
                    uint64_t GetEffectMachineCount() const;

                    /**
                     * 判断参数 EffectMachineCount 是否已赋值
                     * @return EffectMachineCount 是否已赋值
                     * 
                     */
                    bool EffectMachineCountHasBeenSet() const;

                    /**
                     * 获取Total of number of events
                     * @return EventsCount Total of number of events
                     * 
                     */
                    uint64_t GetEventsCount() const;

                    /**
                     * 判断参数 EventsCount 是否已赋值
                     * @return EventsCount 是否已赋值
                     * 
                     */
                    bool EventsCountHasBeenSet() const;

                    /**
                     * 获取Total of Windows system vulnerability events
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WindowVul Total of Windows system vulnerability events
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SecurityEventInfo GetWindowVul() const;

                    /**
                     * 判断参数 WindowVul 是否已赋值
                     * @return WindowVul 是否已赋值
                     * 
                     */
                    bool WindowVulHasBeenSet() const;

                    /**
                     * 获取Total of Linux system vulnerability events
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LinuxVul Total of Linux system vulnerability events
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SecurityEventInfo GetLinuxVul() const;

                    /**
                     * 判断参数 LinuxVul 是否已赋值
                     * @return LinuxVul 是否已赋值
                     * 
                     */
                    bool LinuxVulHasBeenSet() const;

                private:

                    /**
                     * Trojan file-related risk event
                     */
                    SecurityEventInfo m_malware;
                    bool m_malwareHasBeenSet;

                    /**
                     * Log-in audit-related risk event
                     */
                    SecurityEventInfo m_hostLogin;
                    bool m_hostLoginHasBeenSet;

                    /**
                     * Password cracking-related risk event
                     */
                    SecurityEventInfo m_bruteAttack;
                    bool m_bruteAttackHasBeenSet;

                    /**
                     * Malicious request-related risk event
                     */
                    SecurityEventInfo m_riskDns;
                    bool m_riskDnsHasBeenSet;

                    /**
                     * High-risk command-related risk event
                     */
                    SecurityEventInfo m_bash;
                    bool m_bashHasBeenSet;

                    /**
                     * Local privilege escalation-related risk event
                     */
                    SecurityEventInfo m_privilegeRules;
                    bool m_privilegeRulesHasBeenSet;

                    /**
                     * Reverse Shell-related risk event
                     */
                    SecurityEventInfo m_reverseShell;
                    bool m_reverseShellHasBeenSet;

                    /**
                     * Application vulnerability-related risk event
                     */
                    SecurityEventInfo m_sysVul;
                    bool m_sysVulHasBeenSet;

                    /**
                     * Web application vulnerability-related risk event
                     */
                    SecurityEventInfo m_webVul;
                    bool m_webVulHasBeenSet;

                    /**
                     * Emergency vulnerability-related risk event
                     */
                    SecurityEventInfo m_emergencyVul;
                    bool m_emergencyVulHasBeenSet;

                    /**
                     * Security baseline-related risk event
                     */
                    SecurityEventInfo m_baseLine;
                    bool m_baseLineHasBeenSet;

                    /**
                     * Attack detection-related risk event
                     */
                    SecurityEventInfo m_attackLogs;
                    bool m_attackLogsHasBeenSet;

                    /**
                     * Number of affected machines
                     */
                    uint64_t m_effectMachineCount;
                    bool m_effectMachineCountHasBeenSet;

                    /**
                     * Total of number of events
                     */
                    uint64_t m_eventsCount;
                    bool m_eventsCountHasBeenSet;

                    /**
                     * Total of Windows system vulnerability events
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SecurityEventInfo m_windowVul;
                    bool m_windowVulHasBeenSet;

                    /**
                     * Total of Linux system vulnerability events
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SecurityEventInfo m_linuxVul;
                    bool m_linuxVulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSCNTRESPONSE_H_
