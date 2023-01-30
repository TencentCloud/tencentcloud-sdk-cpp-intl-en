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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTDESCRIPTION_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessChildRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Description of the abnormal container process event at runtime
                */
                class AbnormalProcessEventDescription : public AbstractModel
                {
                public:
                    AbnormalProcessEventDescription();
                    ~AbnormalProcessEventDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event rule
                     * @return Description Event rule
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event rule
                     * @param Description Event rule
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return Solution Solution
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
                     * @param Solution Solution
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Remark Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Details of the hit rule
                     * @return MatchRule Details of the hit rule
                     */
                    AbnormalProcessChildRuleInfo GetMatchRule() const;

                    /**
                     * 设置Details of the hit rule
                     * @param MatchRule Details of the hit rule
                     */
                    void SetMatchRule(const AbnormalProcessChildRuleInfo& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     */
                    bool MatchRuleHasBeenSet() const;

                    /**
                     * 获取Name of the hit rule. Valid values: `PROXY_TOOL` (proxy); `TRANSFER_CONTROL` (lateral movement); `ATTACK_CMD` (malicious command); `REVERSE_SHELL` (reverse shell); `FILELESS` (fileless execution); `RISK_CMD` (high-risk command); `ABNORMAL_CHILD_PROC` (unusual start found in the child process of the sensitive service); `USER_DEFINED_RULE` (custom rule).
                     * @return RuleName Name of the hit rule. Valid values: `PROXY_TOOL` (proxy); `TRANSFER_CONTROL` (lateral movement); `ATTACK_CMD` (malicious command); `REVERSE_SHELL` (reverse shell); `FILELESS` (fileless execution); `RISK_CMD` (high-risk command); `ABNORMAL_CHILD_PROC` (unusual start found in the child process of the sensitive service); `USER_DEFINED_RULE` (custom rule).
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Name of the hit rule. Valid values: `PROXY_TOOL` (proxy); `TRANSFER_CONTROL` (lateral movement); `ATTACK_CMD` (malicious command); `REVERSE_SHELL` (reverse shell); `FILELESS` (fileless execution); `RISK_CMD` (high-risk command); `ABNORMAL_CHILD_PROC` (unusual start found in the child process of the sensitive service); `USER_DEFINED_RULE` (custom rule).
                     * @param RuleName Name of the hit rule. Valid values: `PROXY_TOOL` (proxy); `TRANSFER_CONTROL` (lateral movement); `ATTACK_CMD` (malicious command); `REVERSE_SHELL` (reverse shell); `FILELESS` (fileless execution); `RISK_CMD` (high-risk command); `ABNORMAL_CHILD_PROC` (unusual start found in the child process of the sensitive service); `USER_DEFINED_RULE` (custom rule).
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取ID of the hit rule
                     * @return RuleId ID of the hit rule
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置ID of the hit rule
                     * @param RuleId ID of the hit rule
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperationTime Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OperationTime Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     */
                    bool OperationTimeHasBeenSet() const;

                    /**
                     * 获取Name of the hit policy. Valid values: `SYSTEM_DEFINED_RULE` (preset policy); name of the custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName Name of the hit policy. Valid values: `SYSTEM_DEFINED_RULE` (preset policy); name of the custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Name of the hit policy. Valid values: `SYSTEM_DEFINED_RULE` (preset policy); name of the custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GroupName Name of the hit policy. Valid values: `SYSTEM_DEFINED_RULE` (preset policy); name of the custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * Event rule
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Details of the hit rule
                     */
                    AbnormalProcessChildRuleInfo m_matchRule;
                    bool m_matchRuleHasBeenSet;

                    /**
                     * Name of the hit rule. Valid values: `PROXY_TOOL` (proxy); `TRANSFER_CONTROL` (lateral movement); `ATTACK_CMD` (malicious command); `REVERSE_SHELL` (reverse shell); `FILELESS` (fileless execution); `RISK_CMD` (high-risk command); `ABNORMAL_CHILD_PROC` (unusual start found in the child process of the sensitive service); `USER_DEFINED_RULE` (custom rule).
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * ID of the hit rule
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                    /**
                     * Name of the hit policy. Valid values: `SYSTEM_DEFINED_RULE` (preset policy); name of the custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTDESCRIPTION_H_
