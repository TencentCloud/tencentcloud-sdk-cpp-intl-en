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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSSYSTEMCHILDRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSSYSTEMCHILDRULEINFO_H_

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
                * Information of the sub-policy of the preset policy for abnormal processes
                */
                class AbnormalProcessSystemChildRuleInfo : public AbstractModel
                {
                public:
                    AbnormalProcessSystemChildRuleInfo();
                    ~AbnormalProcessSystemChildRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-policy ID
                     * @return RuleId Sub-policy ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Sub-policy ID
                     * @param RuleId Sub-policy ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Sub-policy status. Valid values: `true` (enabled); `false` (disabled).
                     * @return IsEnable Sub-policy status. Valid values: `true` (enabled); `false` (disabled).
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置Sub-policy status. Valid values: `true` (enabled); `false` (disabled).
                     * @param IsEnable Sub-policy status. Valid values: `true` (enabled); `false` (disabled).
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     * @return RuleMode Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     */
                    std::string GetRuleMode() const;

                    /**
                     * 设置Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     * @param RuleMode Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     */
                    void SetRuleMode(const std::string& _ruleMode);

                    /**
                     * 判断参数 RuleMode 是否已赋值
                     * @return RuleMode 是否已赋值
                     */
                    bool RuleModeHasBeenSet() const;

                    /**
                     * 获取Behavior type detected by the sub-policy
`PROXY_TOOL`: Proxy.
`TRANSFER_CONTROL`: Lateral movement.
`ATTACK_CMD`: Malicious command.
`REVERSE_SHELL`: Reverse shell.
`FILELESS`: Fileless execution.
`RISK_CMD`: High-risk command.
`ABNORMAL_CHILD_PROC`: Unusual start found in the child process of the sensitive service.
                     * @return RuleType Behavior type detected by the sub-policy
`PROXY_TOOL`: Proxy.
`TRANSFER_CONTROL`: Lateral movement.
`ATTACK_CMD`: Malicious command.
`REVERSE_SHELL`: Reverse shell.
`FILELESS`: Fileless execution.
`RISK_CMD`: High-risk command.
`ABNORMAL_CHILD_PROC`: Unusual start found in the child process of the sensitive service.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Behavior type detected by the sub-policy
`PROXY_TOOL`: Proxy.
`TRANSFER_CONTROL`: Lateral movement.
`ATTACK_CMD`: Malicious command.
`REVERSE_SHELL`: Reverse shell.
`FILELESS`: Fileless execution.
`RISK_CMD`: High-risk command.
`ABNORMAL_CHILD_PROC`: Unusual start found in the child process of the sensitive service.
                     * @param RuleType Behavior type detected by the sub-policy
`PROXY_TOOL`: Proxy.
`TRANSFER_CONTROL`: Lateral movement.
`ATTACK_CMD`: Malicious command.
`REVERSE_SHELL`: Reverse shell.
`FILELESS`: Fileless execution.
`RISK_CMD`: High-risk command.
`ABNORMAL_CHILD_PROC`: Unusual start found in the child process of the sensitive service.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Severity. Valid values: `HIGH` (high); `MIDDLE` (medium); `LOW` (low).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleLevel Severity. Valid values: `HIGH` (high); `MIDDLE` (medium); `LOW` (low).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleLevel() const;

                    /**
                     * 设置Severity. Valid values: `HIGH` (high); `MIDDLE` (medium); `LOW` (low).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleLevel Severity. Valid values: `HIGH` (high); `MIDDLE` (medium); `LOW` (low).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleLevel(const std::string& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     */
                    bool RuleLevelHasBeenSet() const;

                private:

                    /**
                     * Sub-policy ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Sub-policy status. Valid values: `true` (enabled); `false` (disabled).
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     */
                    std::string m_ruleMode;
                    bool m_ruleModeHasBeenSet;

                    /**
                     * Behavior type detected by the sub-policy
`PROXY_TOOL`: Proxy.
`TRANSFER_CONTROL`: Lateral movement.
`ATTACK_CMD`: Malicious command.
`REVERSE_SHELL`: Reverse shell.
`FILELESS`: Fileless execution.
`RISK_CMD`: High-risk command.
`ABNORMAL_CHILD_PROC`: Unusual start found in the child process of the sensitive service.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Severity. Valid values: `HIGH` (high); `MIDDLE` (medium); `LOW` (low).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSSYSTEMCHILDRULEINFO_H_
