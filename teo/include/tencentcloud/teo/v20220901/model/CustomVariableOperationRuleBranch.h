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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEBRANCH_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEBRANCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperationRuleAction.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperationSubRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom Variable operation sub-rule branch.
                */
                class CustomVariableOperationRuleBranch : public AbstractModel
                {
                public:
                    CustomVariableOperationRuleBranch();
                    ~CustomVariableOperationRuleBranch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition</a>.</p>
                     * @return Condition <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition</a>.</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition</a>.</p>
                     * @param _condition <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition</a>.</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#c7bd7e02-9247-4a72-b0e4-11c27cadb198">Operate</a>.<br>Note: Actions and SubRules cannot be empty at the same time.</p>
                     * @return Actions <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#c7bd7e02-9247-4a72-b0e4-11c27cadb198">Operate</a>.<br>Note: Actions and SubRules cannot be empty at the same time.</p>
                     * 
                     */
                    std::vector<CustomVariableOperationRuleAction> GetActions() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#c7bd7e02-9247-4a72-b0e4-11c27cadb198">Operate</a>.<br>Note: Actions and SubRules cannot be empty at the same time.</p>
                     * @param _actions <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#c7bd7e02-9247-4a72-b0e4-11c27cadb198">Operate</a>.<br>Note: Actions and SubRules cannot be empty at the same time.</p>
                     * 
                     */
                    void SetActions(const std::vector<CustomVariableOperationRuleAction>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取<p>Sub-rule list. If there are multiple rules in the list, they are executed in order from top to bottom.<br>Note: SubRules and Actions cannot be empty at the same time. Currently only support filling one level of SubRules.</p>
                     * @return SubRules <p>Sub-rule list. If there are multiple rules in the list, they are executed in order from top to bottom.<br>Note: SubRules and Actions cannot be empty at the same time. Currently only support filling one level of SubRules.</p>
                     * 
                     */
                    std::vector<CustomVariableOperationSubRule> GetSubRules() const;

                    /**
                     * 设置<p>Sub-rule list. If there are multiple rules in the list, they are executed in order from top to bottom.<br>Note: SubRules and Actions cannot be empty at the same time. Currently only support filling one level of SubRules.</p>
                     * @param _subRules <p>Sub-rule list. If there are multiple rules in the list, they are executed in order from top to bottom.<br>Note: SubRules and Actions cannot be empty at the same time. Currently only support filling one level of SubRules.</p>
                     * 
                     */
                    void SetSubRules(const std::vector<CustomVariableOperationSubRule>& _subRules);

                    /**
                     * 判断参数 SubRules 是否已赋值
                     * @return SubRules 是否已赋值
                     * 
                     */
                    bool SubRulesHasBeenSet() const;

                private:

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition</a>.</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#c7bd7e02-9247-4a72-b0e4-11c27cadb198">Operate</a>.<br>Note: Actions and SubRules cannot be empty at the same time.</p>
                     */
                    std::vector<CustomVariableOperationRuleAction> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * <p>Sub-rule list. If there are multiple rules in the list, they are executed in order from top to bottom.<br>Note: SubRules and Actions cannot be empty at the same time. Currently only support filling one level of SubRules.</p>
                     */
                    std::vector<CustomVariableOperationSubRule> m_subRules;
                    bool m_subRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEBRANCH_H_
