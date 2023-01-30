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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTTENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Trend of pending abnormal process events
                */
                class AbnormalProcessEventTendencyInfo : public AbstractModel
                {
                public:
                    AbnormalProcessEventTendencyInfo();
                    ~AbnormalProcessEventTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
                     * @return Date Date
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date
                     * @param Date Date
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Number of pending proxy events
                     * @return ProxyToolEventCount Number of pending proxy events
                     */
                    int64_t GetProxyToolEventCount() const;

                    /**
                     * 设置Number of pending proxy events
                     * @param ProxyToolEventCount Number of pending proxy events
                     */
                    void SetProxyToolEventCount(const int64_t& _proxyToolEventCount);

                    /**
                     * 判断参数 ProxyToolEventCount 是否已赋值
                     * @return ProxyToolEventCount 是否已赋值
                     */
                    bool ProxyToolEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending lateral movement events
                     * @return TransferControlEventCount Number of pending lateral movement events
                     */
                    int64_t GetTransferControlEventCount() const;

                    /**
                     * 设置Number of pending lateral movement events
                     * @param TransferControlEventCount Number of pending lateral movement events
                     */
                    void SetTransferControlEventCount(const int64_t& _transferControlEventCount);

                    /**
                     * 判断参数 TransferControlEventCount 是否已赋值
                     * @return TransferControlEventCount 是否已赋值
                     */
                    bool TransferControlEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending malicious command events
                     * @return AttackCmdEventCount Number of pending malicious command events
                     */
                    int64_t GetAttackCmdEventCount() const;

                    /**
                     * 设置Number of pending malicious command events
                     * @param AttackCmdEventCount Number of pending malicious command events
                     */
                    void SetAttackCmdEventCount(const int64_t& _attackCmdEventCount);

                    /**
                     * 判断参数 AttackCmdEventCount 是否已赋值
                     * @return AttackCmdEventCount 是否已赋值
                     */
                    bool AttackCmdEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending reverse shell events
                     * @return ReverseShellEventCount Number of pending reverse shell events
                     */
                    int64_t GetReverseShellEventCount() const;

                    /**
                     * 设置Number of pending reverse shell events
                     * @param ReverseShellEventCount Number of pending reverse shell events
                     */
                    void SetReverseShellEventCount(const int64_t& _reverseShellEventCount);

                    /**
                     * 判断参数 ReverseShellEventCount 是否已赋值
                     * @return ReverseShellEventCount 是否已赋值
                     */
                    bool ReverseShellEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending fileless execution events
                     * @return FilelessEventCount Number of pending fileless execution events
                     */
                    int64_t GetFilelessEventCount() const;

                    /**
                     * 设置Number of pending fileless execution events
                     * @param FilelessEventCount Number of pending fileless execution events
                     */
                    void SetFilelessEventCount(const int64_t& _filelessEventCount);

                    /**
                     * 判断参数 FilelessEventCount 是否已赋值
                     * @return FilelessEventCount 是否已赋值
                     */
                    bool FilelessEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending high-risk command events
                     * @return RiskCmdEventCount Number of pending high-risk command events
                     */
                    int64_t GetRiskCmdEventCount() const;

                    /**
                     * 设置Number of pending high-risk command events
                     * @param RiskCmdEventCount Number of pending high-risk command events
                     */
                    void SetRiskCmdEventCount(const int64_t& _riskCmdEventCount);

                    /**
                     * 判断参数 RiskCmdEventCount 是否已赋值
                     * @return RiskCmdEventCount 是否已赋值
                     */
                    bool RiskCmdEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending events of unusual startups found in the child process of the sensitive service
                     * @return AbnormalChildProcessEventCount Number of pending events of unusual startups found in the child process of the sensitive service
                     */
                    int64_t GetAbnormalChildProcessEventCount() const;

                    /**
                     * 设置Number of pending events of unusual startups found in the child process of the sensitive service
                     * @param AbnormalChildProcessEventCount Number of pending events of unusual startups found in the child process of the sensitive service
                     */
                    void SetAbnormalChildProcessEventCount(const int64_t& _abnormalChildProcessEventCount);

                    /**
                     * 判断参数 AbnormalChildProcessEventCount 是否已赋值
                     * @return AbnormalChildProcessEventCount 是否已赋值
                     */
                    bool AbnormalChildProcessEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending custom rule events
                     * @return UserDefinedRuleEventCount Number of pending custom rule events
                     */
                    int64_t GetUserDefinedRuleEventCount() const;

                    /**
                     * 设置Number of pending custom rule events
                     * @param UserDefinedRuleEventCount Number of pending custom rule events
                     */
                    void SetUserDefinedRuleEventCount(const int64_t& _userDefinedRuleEventCount);

                    /**
                     * 判断参数 UserDefinedRuleEventCount 是否已赋值
                     * @return UserDefinedRuleEventCount 是否已赋值
                     */
                    bool UserDefinedRuleEventCountHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Number of pending proxy events
                     */
                    int64_t m_proxyToolEventCount;
                    bool m_proxyToolEventCountHasBeenSet;

                    /**
                     * Number of pending lateral movement events
                     */
                    int64_t m_transferControlEventCount;
                    bool m_transferControlEventCountHasBeenSet;

                    /**
                     * Number of pending malicious command events
                     */
                    int64_t m_attackCmdEventCount;
                    bool m_attackCmdEventCountHasBeenSet;

                    /**
                     * Number of pending reverse shell events
                     */
                    int64_t m_reverseShellEventCount;
                    bool m_reverseShellEventCountHasBeenSet;

                    /**
                     * Number of pending fileless execution events
                     */
                    int64_t m_filelessEventCount;
                    bool m_filelessEventCountHasBeenSet;

                    /**
                     * Number of pending high-risk command events
                     */
                    int64_t m_riskCmdEventCount;
                    bool m_riskCmdEventCountHasBeenSet;

                    /**
                     * Number of pending events of unusual startups found in the child process of the sensitive service
                     */
                    int64_t m_abnormalChildProcessEventCount;
                    bool m_abnormalChildProcessEventCountHasBeenSet;

                    /**
                     * Number of pending custom rule events
                     */
                    int64_t m_userDefinedRuleEventCount;
                    bool m_userDefinedRuleEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTTENDENCYINFO_H_
