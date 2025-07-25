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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULECONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Condition of a trigger rule for an edge function.
                */
                class FunctionRuleCondition : public AbstractModel
                {
                public:
                    FunctionRuleCondition();
                    ~FunctionRuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Condition of a trigger rule for an edge function. This condition is considered met if all items in the list are met.
                     * @return RuleConditions Condition of a trigger rule for an edge function. This condition is considered met if all items in the list are met.
                     * 
                     */
                    std::vector<RuleCondition> GetRuleConditions() const;

                    /**
                     * 设置Condition of a trigger rule for an edge function. This condition is considered met if all items in the list are met.
                     * @param _ruleConditions Condition of a trigger rule for an edge function. This condition is considered met if all items in the list are met.
                     * 
                     */
                    void SetRuleConditions(const std::vector<RuleCondition>& _ruleConditions);

                    /**
                     * 判断参数 RuleConditions 是否已赋值
                     * @return RuleConditions 是否已赋值
                     * 
                     */
                    bool RuleConditionsHasBeenSet() const;

                private:

                    /**
                     * Condition of a trigger rule for an edge function. This condition is considered met if all items in the list are met.
                     */
                    std::vector<RuleCondition> m_ruleConditions;
                    bool m_ruleConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULECONDITION_H_
