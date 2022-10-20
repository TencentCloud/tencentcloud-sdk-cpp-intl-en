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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPRULE_H_

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
                * The managed rule details
                */
                class WafGroupRule : public AbstractModel
                {
                public:
                    WafGroupRule();
                    ~WafGroupRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param RuleId The rule ID.
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The rule description.
                     * @return Description The rule description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The rule description.
                     * @param Description The rule description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The description of the rule level.
                     * @return RuleLevelDesc The description of the rule level.
                     */
                    std::string GetRuleLevelDesc() const;

                    /**
                     * 设置The description of the rule level.
                     * @param RuleLevelDesc The description of the rule level.
                     */
                    void SetRuleLevelDesc(const std::string& _ruleLevelDesc);

                    /**
                     * 判断参数 RuleLevelDesc 是否已赋值
                     * @return RuleLevelDesc 是否已赋值
                     */
                    bool RuleLevelDescHasBeenSet() const;

                    /**
                     * 获取The rule tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleTags The rule tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetRuleTags() const;

                    /**
                     * 设置The rule tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleTags The rule tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleTags(const std::vector<std::string>& _ruleTags);

                    /**
                     * 判断参数 RuleTags 是否已赋值
                     * @return RuleTags 是否已赋值
                     */
                    bool RuleTagsHasBeenSet() const;

                    /**
                     * 获取The update time in the format of YYYY-MM-DD hh:mm:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime The update time in the format of YYYY-MM-DD hh:mm:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time in the format of YYYY-MM-DD hh:mm:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime The update time in the format of YYYY-MM-DD hh:mm:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>It can be left empty when you query a managed rule.
                     * @return Status The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>It can be left empty when you query a managed rule.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>It can be left empty when you query a managed rule.
                     * @param Status The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>It can be left empty when you query a managed rule.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The rule type.
                     * @return RuleTypeName The rule type.
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置The rule type.
                     * @param RuleTypeName The rule type.
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取ID of the rule type.
                     * @return RuleTypeId ID of the rule type.
                     */
                    int64_t GetRuleTypeId() const;

                    /**
                     * 设置ID of the rule type.
                     * @param RuleTypeId ID of the rule type.
                     */
                    void SetRuleTypeId(const int64_t& _ruleTypeId);

                    /**
                     * 判断参数 RuleTypeId 是否已赋值
                     * @return RuleTypeId 是否已赋值
                     */
                    bool RuleTypeIdHasBeenSet() const;

                    /**
                     * 获取Description of the rule type.
                     * @return RuleTypeDesc Description of the rule type.
                     */
                    std::string GetRuleTypeDesc() const;

                    /**
                     * 设置Description of the rule type.
                     * @param RuleTypeDesc Description of the rule type.
                     */
                    void SetRuleTypeDesc(const std::string& _ruleTypeDesc);

                    /**
                     * 判断参数 RuleTypeDesc 是否已赋值
                     * @return RuleTypeDesc 是否已赋值
                     */
                    bool RuleTypeDescHasBeenSet() const;

                private:

                    /**
                     * The rule ID.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The rule description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The description of the rule level.
                     */
                    std::string m_ruleLevelDesc;
                    bool m_ruleLevelDescHasBeenSet;

                    /**
                     * The rule tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ruleTags;
                    bool m_ruleTagsHasBeenSet;

                    /**
                     * The update time in the format of YYYY-MM-DD hh:mm:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>It can be left empty when you query a managed rule.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The rule type.
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * ID of the rule type.
                     */
                    int64_t m_ruleTypeId;
                    bool m_ruleTypeIdHasBeenSet;

                    /**
                     * Description of the rule type.
                     */
                    std::string m_ruleTypeDesc;
                    bool m_ruleTypeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPRULE_H_
