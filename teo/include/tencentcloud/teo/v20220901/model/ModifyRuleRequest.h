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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRule request structure.
                */
                class ModifyRuleRequest : public AbstractModel
                {
                public:
                    ModifyRuleRequest();
                    ~ModifyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site
                     * @return ZoneId ID of the site
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site
                     * @param _zoneId ID of the site
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The rule name. It is a string that can contain 1–255 characters.
                     * @return RuleName The rule name. It is a string that can contain 1–255 characters.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置The rule name. It is a string that can contain 1–255 characters.
                     * @param _ruleName The rule name. It is a string that can contain 1–255 characters.
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
                     * 获取The rule content.
                     * @return Rules The rule content.
                     * 
                     */
                    std::vector<Rule> GetRules() const;

                    /**
                     * 设置The rule content.
                     * @param _rules The rule content.
                     * 
                     */
                    void SetRules(const std::vector<Rule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param _ruleId The rule ID.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     * @return Status Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     * @param _status Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
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
                     * 获取Tag of the rule.
                     * @return Tags Tag of the rule.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag of the rule.
                     * @param _tags Tag of the rule.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * ID of the site
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The rule name. It is a string that can contain 1–255 characters.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * The rule content.
                     */
                    std::vector<Rule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * The rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule status. Values:
<li>`enable`: Enabled</li>
<li>`disable`: Disabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tag of the rule.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRULEREQUEST_H_
