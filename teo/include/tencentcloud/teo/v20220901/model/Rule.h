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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Action.h>
#include <tencentcloud/teo/v20220901/model/RuleAndConditions.h>
#include <tencentcloud/teo/v20220901/model/SubRuleItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule item of the rule engine. The items in the `Conditions` array are in `OR` relationship, and the items in the inner `Conditions` list are in `AND` relationship.
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Feature to be executed.
                     * @return Actions Feature to be executed.
                     */
                    std::vector<Action> GetActions() const;

                    /**
                     * 设置Feature to be executed.
                     * @param Actions Feature to be executed.
                     */
                    void SetActions(const std::vector<Action>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取Feature execution conditions.
Note: If any condition in the array is met, the feature will run.
                     * @return Conditions Feature execution conditions.
Note: If any condition in the array is met, the feature will run.
                     */
                    std::vector<RuleAndConditions> GetConditions() const;

                    /**
                     * 设置Feature execution conditions.
Note: If any condition in the array is met, the feature will run.
                     * @param Conditions Feature execution conditions.
Note: If any condition in the array is met, the feature will run.
                     */
                    void SetConditions(const std::vector<RuleAndConditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取The nested rule.
                     * @return SubRules The nested rule.
                     */
                    std::vector<SubRuleItem> GetSubRules() const;

                    /**
                     * 设置The nested rule.
                     * @param SubRules The nested rule.
                     */
                    void SetSubRules(const std::vector<SubRuleItem>& _subRules);

                    /**
                     * 判断参数 SubRules 是否已赋值
                     * @return SubRules 是否已赋值
                     */
                    bool SubRulesHasBeenSet() const;

                private:

                    /**
                     * Feature to be executed.
                     */
                    std::vector<Action> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * Feature execution conditions.
Note: If any condition in the array is met, the feature will run.
                     */
                    std::vector<RuleAndConditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * The nested rule.
                     */
                    std::vector<SubRuleItem> m_subRules;
                    bool m_subRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULE_H_
