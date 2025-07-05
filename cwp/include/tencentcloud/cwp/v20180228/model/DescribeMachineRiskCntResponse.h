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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINERISKCNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINERISKCNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineRiskCnt response structure.
                */
                class DescribeMachineRiskCntResponse : public AbstractModel
                {
                public:
                    DescribeMachineRiskCntResponse();
                    ~DescribeMachineRiskCntResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cross-region log-in
                     * @return HostLogin Cross-region log-in
                     * 
                     */
                    uint64_t GetHostLogin() const;

                    /**
                     * 判断参数 HostLogin 是否已赋值
                     * @return HostLogin 是否已赋值
                     * 
                     */
                    bool HostLoginHasBeenSet() const;

                    /**
                     * 获取Password cracking
                     * @return BruteAttack Password cracking
                     * 
                     */
                    uint64_t GetBruteAttack() const;

                    /**
                     * 判断参数 BruteAttack 是否已赋值
                     * @return BruteAttack 是否已赋值
                     * 
                     */
                    bool BruteAttackHasBeenSet() const;

                    /**
                     * 获取Malicious request
                     * @return MaliciousRequest Malicious request
                     * 
                     */
                    uint64_t GetMaliciousRequest() const;

                    /**
                     * 判断参数 MaliciousRequest 是否已赋值
                     * @return MaliciousRequest 是否已赋值
                     * 
                     */
                    bool MaliciousRequestHasBeenSet() const;

                    /**
                     * 获取Reverse Shell
                     * @return ReverseShell Reverse Shell
                     * 
                     */
                    uint64_t GetReverseShell() const;

                    /**
                     * 判断参数 ReverseShell 是否已赋值
                     * @return ReverseShell 是否已赋值
                     * 
                     */
                    bool ReverseShellHasBeenSet() const;

                    /**
                     * 获取High-risk command
                     * @return Bash High-risk command
                     * 
                     */
                    uint64_t GetBash() const;

                    /**
                     * 判断参数 Bash 是否已赋值
                     * @return Bash 是否已赋值
                     * 
                     */
                    bool BashHasBeenSet() const;

                    /**
                     * 获取Local privilege escalation
                     * @return PrivilegeEscalation Local privilege escalation
                     * 
                     */
                    uint64_t GetPrivilegeEscalation() const;

                    /**
                     * 判断参数 PrivilegeEscalation 是否已赋值
                     * @return PrivilegeEscalation 是否已赋值
                     * 
                     */
                    bool PrivilegeEscalationHasBeenSet() const;

                    /**
                     * 获取Trojan
                     * @return Malware Trojan
                     * 
                     */
                    uint64_t GetMalware() const;

                    /**
                     * 判断参数 Malware 是否已赋值
                     * @return Malware 是否已赋值
                     * 
                     */
                    bool MalwareHasBeenSet() const;

                private:

                    /**
                     * Cross-region log-in
                     */
                    uint64_t m_hostLogin;
                    bool m_hostLoginHasBeenSet;

                    /**
                     * Password cracking
                     */
                    uint64_t m_bruteAttack;
                    bool m_bruteAttackHasBeenSet;

                    /**
                     * Malicious request
                     */
                    uint64_t m_maliciousRequest;
                    bool m_maliciousRequestHasBeenSet;

                    /**
                     * Reverse Shell
                     */
                    uint64_t m_reverseShell;
                    bool m_reverseShellHasBeenSet;

                    /**
                     * High-risk command
                     */
                    uint64_t m_bash;
                    bool m_bashHasBeenSet;

                    /**
                     * Local privilege escalation
                     */
                    uint64_t m_privilegeEscalation;
                    bool m_privilegeEscalationHasBeenSet;

                    /**
                     * Trojan
                     */
                    uint64_t m_malware;
                    bool m_malwareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINERISKCNTRESPONSE_H_
