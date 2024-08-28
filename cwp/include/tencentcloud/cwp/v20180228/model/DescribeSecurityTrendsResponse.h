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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/SecurityTrend.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityTrends response structure.
                */
                class DescribeSecurityTrendsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityTrendsResponse();
                    ~DescribeSecurityTrendsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of counted Trojan events
                     * @return Malwares Array of counted Trojan events
                     * 
                     */
                    std::vector<SecurityTrend> GetMalwares() const;

                    /**
                     * 判断参数 Malwares 是否已赋值
                     * @return Malwares 是否已赋值
                     * 
                     */
                    bool MalwaresHasBeenSet() const;

                    /**
                     * 获取Array of counted cross-region log-in events
                     * @return NonLocalLoginPlaces Array of counted cross-region log-in events
                     * 
                     */
                    std::vector<SecurityTrend> GetNonLocalLoginPlaces() const;

                    /**
                     * 判断参数 NonLocalLoginPlaces 是否已赋值
                     * @return NonLocalLoginPlaces 是否已赋值
                     * 
                     */
                    bool NonLocalLoginPlacesHasBeenSet() const;

                    /**
                     * 获取Array of counted password cracking events
                     * @return BruteAttacks Array of counted password cracking events
                     * 
                     */
                    std::vector<SecurityTrend> GetBruteAttacks() const;

                    /**
                     * 判断参数 BruteAttacks 是否已赋值
                     * @return BruteAttacks 是否已赋值
                     * 
                     */
                    bool BruteAttacksHasBeenSet() const;

                    /**
                     * 获取Array of counted vulnerabilities
                     * @return Vuls Array of counted vulnerabilities
                     * 
                     */
                    std::vector<SecurityTrend> GetVuls() const;

                    /**
                     * 判断参数 Vuls 是否已赋值
                     * @return Vuls 是否已赋值
                     * 
                     */
                    bool VulsHasBeenSet() const;

                    /**
                     * 获取Array of counted baselines
                     * @return BaseLines Array of counted baselines
                     * 
                     */
                    std::vector<SecurityTrend> GetBaseLines() const;

                    /**
                     * 判断参数 BaseLines 是否已赋值
                     * @return BaseLines 是否已赋值
                     * 
                     */
                    bool BaseLinesHasBeenSet() const;

                    /**
                     * 获取Array of counted malicious requests
                     * @return MaliciousRequests Array of counted malicious requests
                     * 
                     */
                    std::vector<SecurityTrend> GetMaliciousRequests() const;

                    /**
                     * 判断参数 MaliciousRequests 是否已赋值
                     * @return MaliciousRequests 是否已赋值
                     * 
                     */
                    bool MaliciousRequestsHasBeenSet() const;

                    /**
                     * 获取Array of counted high-risk command
                     * @return HighRiskBashs Array of counted high-risk command
                     * 
                     */
                    std::vector<SecurityTrend> GetHighRiskBashs() const;

                    /**
                     * 判断参数 HighRiskBashs 是否已赋值
                     * @return HighRiskBashs 是否已赋值
                     * 
                     */
                    bool HighRiskBashsHasBeenSet() const;

                    /**
                     * 获取Array of counted reverse shell
                     * @return ReverseShells Array of counted reverse shell
                     * 
                     */
                    std::vector<SecurityTrend> GetReverseShells() const;

                    /**
                     * 判断参数 ReverseShells 是否已赋值
                     * @return ReverseShells 是否已赋值
                     * 
                     */
                    bool ReverseShellsHasBeenSet() const;

                    /**
                     * 获取Array of counted local privilege escalation
                     * @return PrivilegeEscalations Array of counted local privilege escalation
                     * 
                     */
                    std::vector<SecurityTrend> GetPrivilegeEscalations() const;

                    /**
                     * 判断参数 PrivilegeEscalations 是否已赋值
                     * @return PrivilegeEscalations 是否已赋值
                     * 
                     */
                    bool PrivilegeEscalationsHasBeenSet() const;

                    /**
                     * 获取Array of counted network attacks
                     * @return CyberAttacks Array of counted network attacks
                     * 
                     */
                    std::vector<SecurityTrend> GetCyberAttacks() const;

                    /**
                     * 判断参数 CyberAttacks 是否已赋值
                     * @return CyberAttacks 是否已赋值
                     * 
                     */
                    bool CyberAttacksHasBeenSet() const;

                private:

                    /**
                     * Array of counted Trojan events
                     */
                    std::vector<SecurityTrend> m_malwares;
                    bool m_malwaresHasBeenSet;

                    /**
                     * Array of counted cross-region log-in events
                     */
                    std::vector<SecurityTrend> m_nonLocalLoginPlaces;
                    bool m_nonLocalLoginPlacesHasBeenSet;

                    /**
                     * Array of counted password cracking events
                     */
                    std::vector<SecurityTrend> m_bruteAttacks;
                    bool m_bruteAttacksHasBeenSet;

                    /**
                     * Array of counted vulnerabilities
                     */
                    std::vector<SecurityTrend> m_vuls;
                    bool m_vulsHasBeenSet;

                    /**
                     * Array of counted baselines
                     */
                    std::vector<SecurityTrend> m_baseLines;
                    bool m_baseLinesHasBeenSet;

                    /**
                     * Array of counted malicious requests
                     */
                    std::vector<SecurityTrend> m_maliciousRequests;
                    bool m_maliciousRequestsHasBeenSet;

                    /**
                     * Array of counted high-risk command
                     */
                    std::vector<SecurityTrend> m_highRiskBashs;
                    bool m_highRiskBashsHasBeenSet;

                    /**
                     * Array of counted reverse shell
                     */
                    std::vector<SecurityTrend> m_reverseShells;
                    bool m_reverseShellsHasBeenSet;

                    /**
                     * Array of counted local privilege escalation
                     */
                    std::vector<SecurityTrend> m_privilegeEscalations;
                    bool m_privilegeEscalationsHasBeenSet;

                    /**
                     * Array of counted network attacks
                     */
                    std::vector<SecurityTrend> m_cyberAttacks;
                    bool m_cyberAttacksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
