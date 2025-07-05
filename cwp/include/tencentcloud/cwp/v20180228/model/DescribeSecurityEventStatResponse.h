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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/EventStat.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityEventStat response structure.
                */
                class DescribeSecurityEventStatResponse : public AbstractModel
                {
                public:
                    DescribeSecurityEventStatResponse();
                    ~DescribeSecurityEventStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Trojan event statistics
                     * @return MalwareStat Trojan event statistics
                     * 
                     */
                    EventStat GetMalwareStat() const;

                    /**
                     * 判断参数 MalwareStat 是否已赋值
                     * @return MalwareStat 是否已赋值
                     * 
                     */
                    bool MalwareStatHasBeenSet() const;

                    /**
                     * 获取Statistics of cross-region log-in events
                     * @return HostLoginStat Statistics of cross-region log-in events
                     * 
                     */
                    EventStat GetHostLoginStat() const;

                    /**
                     * 判断参数 HostLoginStat 是否已赋值
                     * @return HostLoginStat 是否已赋值
                     * 
                     */
                    bool HostLoginStatHasBeenSet() const;

                    /**
                     * 获取Statistics of brute force cracking events
                     * @return BruteAttackStat Statistics of brute force cracking events
                     * 
                     */
                    EventStat GetBruteAttackStat() const;

                    /**
                     * 判断参数 BruteAttackStat 是否已赋值
                     * @return BruteAttackStat 是否已赋值
                     * 
                     */
                    bool BruteAttackStatHasBeenSet() const;

                    /**
                     * 获取Malicious request event statistics
                     * @return MaliciousRequestStat Malicious request event statistics
                     * 
                     */
                    EventStat GetMaliciousRequestStat() const;

                    /**
                     * 判断参数 MaliciousRequestStat 是否已赋值
                     * @return MaliciousRequestStat 是否已赋值
                     * 
                     */
                    bool MaliciousRequestStatHasBeenSet() const;

                    /**
                     * 获取Statistics of local privilege escalation events
                     * @return PrivilegeStat Statistics of local privilege escalation events
                     * 
                     */
                    EventStat GetPrivilegeStat() const;

                    /**
                     * 判断参数 PrivilegeStat 是否已赋值
                     * @return PrivilegeStat 是否已赋值
                     * 
                     */
                    bool PrivilegeStatHasBeenSet() const;

                    /**
                     * 获取Reverse shell event statistics
                     * @return ReverseShellStat Reverse shell event statistics
                     * 
                     */
                    EventStat GetReverseShellStat() const;

                    /**
                     * 判断参数 ReverseShellStat 是否已赋值
                     * @return ReverseShellStat 是否已赋值
                     * 
                     */
                    bool ReverseShellStatHasBeenSet() const;

                    /**
                     * 获取Statistics of high-risk command events
                     * @return HighRiskBashStat Statistics of high-risk command events
                     * 
                     */
                    EventStat GetHighRiskBashStat() const;

                    /**
                     * 判断参数 HighRiskBashStat 是否已赋值
                     * @return HighRiskBashStat 是否已赋值
                     * 
                     */
                    bool HighRiskBashStatHasBeenSet() const;

                    /**
                     * 获取Network attack event statistics
                     * @return AttackLogsStat Network attack event statistics
                     * 
                     */
                    EventStat GetAttackLogsStat() const;

                    /**
                     * 判断参数 AttackLogsStat 是否已赋值
                     * @return AttackLogsStat 是否已赋值
                     * 
                     */
                    bool AttackLogsStatHasBeenSet() const;

                    /**
                     * 获取Statistics of high-risk vulnerability events
                     * @return VulHighStat Statistics of high-risk vulnerability events
                     * 
                     */
                    EventStat GetVulHighStat() const;

                    /**
                     * 判断参数 VulHighStat 是否已赋值
                     * @return VulHighStat 是否已赋值
                     * 
                     */
                    bool VulHighStatHasBeenSet() const;

                    /**
                     * 获取Statistics of medium-risk vulnerability events
                     * @return VulNormalStat Statistics of medium-risk vulnerability events
                     * 
                     */
                    EventStat GetVulNormalStat() const;

                    /**
                     * 判断参数 VulNormalStat 是否已赋值
                     * @return VulNormalStat 是否已赋值
                     * 
                     */
                    bool VulNormalStatHasBeenSet() const;

                    /**
                     * 获取Statistics of low-risk vulnerability events
                     * @return VulLowStat Statistics of low-risk vulnerability events
                     * 
                     */
                    EventStat GetVulLowStat() const;

                    /**
                     * 判断参数 VulLowStat 是否已赋值
                     * @return VulLowStat 是否已赋值
                     * 
                     */
                    bool VulLowStatHasBeenSet() const;

                    /**
                     * 获取Statistics of high-risk baseline vulnerability events
                     * @return BaselineHighStat Statistics of high-risk baseline vulnerability events
                     * 
                     */
                    EventStat GetBaselineHighStat() const;

                    /**
                     * 判断参数 BaselineHighStat 是否已赋值
                     * @return BaselineHighStat 是否已赋值
                     * 
                     */
                    bool BaselineHighStatHasBeenSet() const;

                    /**
                     * 获取Statistics of medium-risk baseline vulnerability events
                     * @return BaselineNormalStat Statistics of medium-risk baseline vulnerability events
                     * 
                     */
                    EventStat GetBaselineNormalStat() const;

                    /**
                     * 判断参数 BaselineNormalStat 是否已赋值
                     * @return BaselineNormalStat 是否已赋值
                     * 
                     */
                    bool BaselineNormalStatHasBeenSet() const;

                    /**
                     * 获取Statistics of low-risk baseline vulnerability events
                     * @return BaselineLowStat Statistics of low-risk baseline vulnerability events
                     * 
                     */
                    EventStat GetBaselineLowStat() const;

                    /**
                     * 判断参数 BaselineLowStat 是否已赋值
                     * @return BaselineLowStat 是否已赋值
                     * 
                     */
                    bool BaselineLowStatHasBeenSet() const;

                    /**
                     * 获取Total number of machines with unfixed security events
                     * @return MachineTotalAffectNum Total number of machines with unfixed security events
                     * 
                     */
                    uint64_t GetMachineTotalAffectNum() const;

                    /**
                     * 判断参数 MachineTotalAffectNum 是否已赋值
                     * @return MachineTotalAffectNum 是否已赋值
                     * 
                     */
                    bool MachineTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取Total number of machines with unfixed intrusion security events
                     * @return InvasionTotalAffectNum Total number of machines with unfixed intrusion security events
                     * 
                     */
                    uint64_t GetInvasionTotalAffectNum() const;

                    /**
                     * 判断参数 InvasionTotalAffectNum 是否已赋值
                     * @return InvasionTotalAffectNum 是否已赋值
                     * 
                     */
                    bool InvasionTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取Total number of machines with unfixed vulnerability security events
                     * @return VulTotalAffectNum Total number of machines with unfixed vulnerability security events
                     * 
                     */
                    uint64_t GetVulTotalAffectNum() const;

                    /**
                     * 判断参数 VulTotalAffectNum 是否已赋值
                     * @return VulTotalAffectNum 是否已赋值
                     * 
                     */
                    bool VulTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取Total number of machines with unfixed baseline security events
                     * @return BaseLineTotalAffectNum Total number of machines with unfixed baseline security events
                     * 
                     */
                    uint64_t GetBaseLineTotalAffectNum() const;

                    /**
                     * 判断参数 BaseLineTotalAffectNum 是否已赋值
                     * @return BaseLineTotalAffectNum 是否已赋值
                     * 
                     */
                    bool BaseLineTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取Total number of machines with unfixed network attack security events
                     * @return CyberAttackTotalAffectNum Total number of machines with unfixed network attack security events
                     * 
                     */
                    uint64_t GetCyberAttackTotalAffectNum() const;

                    /**
                     * 判断参数 CyberAttackTotalAffectNum 是否已赋值
                     * @return CyberAttackTotalAffectNum 是否已赋值
                     * 
                     */
                    bool CyberAttackTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取Critical vulnerability event statistics
                     * @return VulRiskStat Critical vulnerability event statistics
                     * 
                     */
                    EventStat GetVulRiskStat() const;

                    /**
                     * 判断参数 VulRiskStat 是否已赋值
                     * @return VulRiskStat 是否已赋值
                     * 
                     */
                    bool VulRiskStatHasBeenSet() const;

                    /**
                     * 获取Statistics of critical baseline vulnerability events
                     * @return BaselineRiskStat Statistics of critical baseline vulnerability events
                     * 
                     */
                    EventStat GetBaselineRiskStat() const;

                    /**
                     * 判断参数 BaselineRiskStat 是否已赋值
                     * @return BaselineRiskStat 是否已赋值
                     * 
                     */
                    bool BaselineRiskStatHasBeenSet() const;

                    /**
                     * 获取Statistics on the number of vulnerabilities
                     * @return VulStat Statistics on the number of vulnerabilities
                     * 
                     */
                    EventStat GetVulStat() const;

                    /**
                     * 判断参数 VulStat 是否已赋值
                     * @return VulStat 是否已赋值
                     * 
                     */
                    bool VulStatHasBeenSet() const;

                    /**
                     * 获取Security score
                     * @return Score Security score
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * Trojan event statistics
                     */
                    EventStat m_malwareStat;
                    bool m_malwareStatHasBeenSet;

                    /**
                     * Statistics of cross-region log-in events
                     */
                    EventStat m_hostLoginStat;
                    bool m_hostLoginStatHasBeenSet;

                    /**
                     * Statistics of brute force cracking events
                     */
                    EventStat m_bruteAttackStat;
                    bool m_bruteAttackStatHasBeenSet;

                    /**
                     * Malicious request event statistics
                     */
                    EventStat m_maliciousRequestStat;
                    bool m_maliciousRequestStatHasBeenSet;

                    /**
                     * Statistics of local privilege escalation events
                     */
                    EventStat m_privilegeStat;
                    bool m_privilegeStatHasBeenSet;

                    /**
                     * Reverse shell event statistics
                     */
                    EventStat m_reverseShellStat;
                    bool m_reverseShellStatHasBeenSet;

                    /**
                     * Statistics of high-risk command events
                     */
                    EventStat m_highRiskBashStat;
                    bool m_highRiskBashStatHasBeenSet;

                    /**
                     * Network attack event statistics
                     */
                    EventStat m_attackLogsStat;
                    bool m_attackLogsStatHasBeenSet;

                    /**
                     * Statistics of high-risk vulnerability events
                     */
                    EventStat m_vulHighStat;
                    bool m_vulHighStatHasBeenSet;

                    /**
                     * Statistics of medium-risk vulnerability events
                     */
                    EventStat m_vulNormalStat;
                    bool m_vulNormalStatHasBeenSet;

                    /**
                     * Statistics of low-risk vulnerability events
                     */
                    EventStat m_vulLowStat;
                    bool m_vulLowStatHasBeenSet;

                    /**
                     * Statistics of high-risk baseline vulnerability events
                     */
                    EventStat m_baselineHighStat;
                    bool m_baselineHighStatHasBeenSet;

                    /**
                     * Statistics of medium-risk baseline vulnerability events
                     */
                    EventStat m_baselineNormalStat;
                    bool m_baselineNormalStatHasBeenSet;

                    /**
                     * Statistics of low-risk baseline vulnerability events
                     */
                    EventStat m_baselineLowStat;
                    bool m_baselineLowStatHasBeenSet;

                    /**
                     * Total number of machines with unfixed security events
                     */
                    uint64_t m_machineTotalAffectNum;
                    bool m_machineTotalAffectNumHasBeenSet;

                    /**
                     * Total number of machines with unfixed intrusion security events
                     */
                    uint64_t m_invasionTotalAffectNum;
                    bool m_invasionTotalAffectNumHasBeenSet;

                    /**
                     * Total number of machines with unfixed vulnerability security events
                     */
                    uint64_t m_vulTotalAffectNum;
                    bool m_vulTotalAffectNumHasBeenSet;

                    /**
                     * Total number of machines with unfixed baseline security events
                     */
                    uint64_t m_baseLineTotalAffectNum;
                    bool m_baseLineTotalAffectNumHasBeenSet;

                    /**
                     * Total number of machines with unfixed network attack security events
                     */
                    uint64_t m_cyberAttackTotalAffectNum;
                    bool m_cyberAttackTotalAffectNumHasBeenSet;

                    /**
                     * Critical vulnerability event statistics
                     */
                    EventStat m_vulRiskStat;
                    bool m_vulRiskStatHasBeenSet;

                    /**
                     * Statistics of critical baseline vulnerability events
                     */
                    EventStat m_baselineRiskStat;
                    bool m_baselineRiskStatHasBeenSet;

                    /**
                     * Statistics on the number of vulnerabilities
                     */
                    EventStat m_vulStat;
                    bool m_vulStatHasBeenSet;

                    /**
                     * Security score
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSTATRESPONSE_H_
