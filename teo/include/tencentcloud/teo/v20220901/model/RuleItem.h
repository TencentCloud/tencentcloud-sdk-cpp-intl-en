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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Rule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule details of the rule engine
                */
                class RuleItem : public AbstractModel
                {
                public:
                    RuleItem();
                    ~RuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param RuleId The rule ID.
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The rule name. It is a string that can contain 1–255 characters.
                     * @return RuleName The rule name. It is a string that can contain 1–255 characters.
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置The rule name. It is a string that can contain 1–255 characters.
                     * @param RuleName The rule name. It is a string that can contain 1–255 characters.
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     * @return Status Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     * @param Status Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The rule content.
                     * @return Rules The rule content.
                     */
                    std::vector<Rule> GetRules() const;

                    /**
                     * 设置The rule content.
                     * @param Rules The rule content.
                     */
                    void SetRules(const std::vector<Rule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取The rule priority. The greater the value, the higher the priority. The minimum value is `1`.
                     * @return RulePriority The rule priority. The greater the value, the higher the priority. The minimum value is `1`.
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置The rule priority. The greater the value, the higher the priority. The minimum value is `1`.
                     * @param RulePriority The rule priority. The greater the value, the higher the priority. The minimum value is `1`.
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     */
                    bool RulePriorityHasBeenSet() const;

                private:

                    /**
                     * The rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The rule name. It is a string that can contain 1–255 characters.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The rule content.
                     */
                    std::vector<Rule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * The rule priority. The greater the value, the higher the priority. The minimum value is `1`.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEITEM_H_
