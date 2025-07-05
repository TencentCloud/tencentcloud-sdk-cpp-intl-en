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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP blocklist/allowlist rule details
                */
                class IpTableRule : public AbstractModel
                {
                public:
                    IpTableRule();
                    ~IpTableRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`monitor`: Observe</li>
                     * @return Action The action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`monitor`: Observe</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`monitor`: Observe</li>
                     * @param _action The action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`monitor`: Observe</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The matching dimension. Values:
<li>`ip`: Match by IP.</li>
<li>`area`: Match by IP region.</li>
                     * @return MatchFrom The matching dimension. Values:
<li>`ip`: Match by IP.</li>
<li>`area`: Match by IP region.</li>
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置The matching dimension. Values:
<li>`ip`: Match by IP.</li>
<li>`area`: Match by IP region.</li>
                     * @param _matchFrom The matching dimension. Values:
<li>`ip`: Match by IP.</li>
<li>`area`: Match by IP region.</li>
                     * 
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     * 
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取Matching method. It defaults to `equal` if it’s left empty.
Values: 
<li>`is_empty`: The field is empty.</li>
<li>`not_exists`: The configuration item does not exist.</li>
<li>`include`: Include</li>
<li>`not_include`: Do not include</li>
<li>`equal`: Equal to</li>
<li>`not_equal`: Not equal to</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operator Matching method. It defaults to `equal` if it’s left empty.
Values: 
<li>`is_empty`: The field is empty.</li>
<li>`not_exists`: The configuration item does not exist.</li>
<li>`include`: Include</li>
<li>`not_include`: Do not include</li>
<li>`equal`: Equal to</li>
<li>`not_equal`: Not equal to</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Matching method. It defaults to `equal` if it’s left empty.
Values: 
<li>`is_empty`: The field is empty.</li>
<li>`not_exists`: The configuration item does not exist.</li>
<li>`include`: Include</li>
<li>`not_include`: Do not include</li>
<li>`equal`: Equal to</li>
<li>`not_equal`: Not equal to</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operator Matching method. It defaults to `equal` if it’s left empty.
Values: 
<li>`is_empty`: The field is empty.</li>
<li>`not_exists`: The configuration item does not exist.</li>
<li>`include`: Include</li>
<li>`not_include`: Do not include</li>
<li>`equal`: Equal to</li>
<li>`not_equal`: Not equal to</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取The rule ID, which is only used as an output parameter.
                     * @return RuleID The rule ID, which is only used as an output parameter.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置The rule ID, which is only used as an output parameter.
                     * @param _ruleID The rule ID, which is only used as an output parameter.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取The update time, which is only used as an output parameter.
                     * @return UpdateTime The update time, which is only used as an output parameter.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time, which is only used as an output parameter.
                     * @param _updateTime The update time, which is only used as an output parameter.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The rule status. A null value indicates that the rule is enabled. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The rule status. A null value indicates that the rule is enabled. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The rule status. A null value indicates that the rule is enabled. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The rule status. A null value indicates that the rule is enabled. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleName The rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置The rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleName The rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Matching content. It’s not required when `Operator` is `is_emty` or `not_exists`. 
                     * @return MatchContent Matching content. It’s not required when `Operator` is `is_emty` or `not_exists`. 
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置Matching content. It’s not required when `Operator` is `is_emty` or `not_exists`. 
                     * @param _matchContent Matching content. It’s not required when `Operator` is `is_emty` or `not_exists`. 
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * The action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`monitor`: Observe</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The matching dimension. Values:
<li>`ip`: Match by IP.</li>
<li>`area`: Match by IP region.</li>
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * Matching method. It defaults to `equal` if it’s left empty.
Values: 
<li>`is_empty`: The field is empty.</li>
<li>`not_exists`: The configuration item does not exist.</li>
<li>`include`: Include</li>
<li>`not_include`: Do not include</li>
<li>`equal`: Equal to</li>
<li>`not_equal`: Not equal to</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * The rule ID, which is only used as an output parameter.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * The update time, which is only used as an output parameter.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The rule status. A null value indicates that the rule is enabled. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Matching content. It’s not required when `Operator` is `is_emty` or `not_exists`. 
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_
