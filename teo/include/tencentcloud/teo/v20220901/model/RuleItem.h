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
                * Rule engine rule details
                */
                class RuleItem : public AbstractModel
                {
                public:
                    RuleItem();
                    ~RuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID.
                     * @return RuleId Rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID.
                     * @param _ruleId Rule ID.
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
                     * 获取Rule name. The name string must be 1 to 255 characters in length.
                     * @return RuleName Rule name. The name string must be 1 to 255 characters in length.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name. The name string must be 1 to 255 characters in length.
                     * @param _ruleName Rule name. The name string must be 1 to 255 characters in length.
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
                     * 获取Rule status. Valid values:
<li> enable: enable; </li>
<li> disable: disabled. </li>
                     * @return Status Rule status. Valid values:
<li> enable: enable; </li>
<li> disable: disabled. </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status. Valid values:
<li> enable: enable; </li>
<li> disable: disabled. </li>
                     * @param _status Rule status. Valid values:
<li> enable: enable; </li>
<li> disable: disabled. </li>
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
                     * 获取Rule content.
                     * @return Rules Rule content.
                     * 
                     */
                    std::vector<Rule> GetRules() const;

                    /**
                     * 设置Rule content.
                     * @param _rules Rule content.
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
                     * 获取Rule priority. A larger value indicates higher priority. Minimum value: 1.
                     * @return RulePriority Rule priority. A larger value indicates higher priority. Minimum value: 1.
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置Rule priority. A larger value indicates higher priority. Minimum value: 1.
                     * @param _rulePriority Rule priority. A larger value indicates higher priority. Minimum value: 1.
                     * 
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     * 
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取Rule tag.
                     * @return Tags Rule tag.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Rule tag.
                     * @param _tags Rule tag.
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
                     * Rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name. The name string must be 1 to 255 characters in length.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule status. Valid values:
<li> enable: enable; </li>
<li> disable: disabled. </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule content.
                     */
                    std::vector<Rule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Rule priority. A larger value indicates higher priority. Minimum value: 1.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * Rule tag.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEITEM_H_
