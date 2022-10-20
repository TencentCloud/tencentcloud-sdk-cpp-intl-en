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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafGroupRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of the managed rule group
                */
                class WafGroupDetail : public AbstractModel
                {
                public:
                    WafGroupDetail();
                    ~WafGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取List of rules.
                     * @return WafGroupRules List of rules.
                     */
                    std::vector<WafGroupRule> GetWafGroupRules() const;

                    /**
                     * 设置List of rules.
                     * @param WafGroupRules List of rules.
                     */
                    void SetWafGroupRules(const std::vector<WafGroupRule>& _wafGroupRules);

                    /**
                     * 判断参数 WafGroupRules 是否已赋值
                     * @return WafGroupRules 是否已赋值
                     */
                    bool WafGroupRulesHasBeenSet() const;

                    /**
                     * 获取The rule level.
                     * @return Level The rule level.
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置The rule level.
                     * @param Level The rule level.
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取The rule action.
                     * @return Action The rule action.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The rule action.
                     * @param Action The rule action.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * ID of the rule type.
                     */
                    int64_t m_ruleTypeId;
                    bool m_ruleTypeIdHasBeenSet;

                    /**
                     * The rule type.
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * Description of the rule type.
                     */
                    std::string m_ruleTypeDesc;
                    bool m_ruleTypeDescHasBeenSet;

                    /**
                     * List of rules.
                     */
                    std::vector<WafGroupRule> m_wafGroupRules;
                    bool m_wafGroupRulesHasBeenSet;

                    /**
                     * The rule level.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * The rule action.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPDETAIL_H_
