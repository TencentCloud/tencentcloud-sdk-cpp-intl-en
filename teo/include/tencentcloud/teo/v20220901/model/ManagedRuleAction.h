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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Item configuration of a managed rule
                */
                class ManagedRuleAction : public AbstractModel
                {
                public:
                    ManagedRuleAction();
                    ~ManagedRuleAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific item under the managed rule group, used for rewriting the configuration content of this individual rule. For details, refer to the product documentation.	
                     * @return RuleId Specific item under the managed rule group, used for rewriting the configuration content of this individual rule. For details, refer to the product documentation.	
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Specific item under the managed rule group, used for rewriting the configuration content of this individual rule. For details, refer to the product documentation.	
                     * @param _ruleId Specific item under the managed rule group, used for rewriting the configuration content of this individual rule. For details, refer to the product documentation.	
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
                     * 获取Specifies the handling action for the managed rule item in RuleId. Supported values for SecurityAction Name: <li>Deny: Block. Responds with an interception page.</li><li>Monitor: Observe. Does not process the request but records security events in logs.</li><li>Disabled: Not enabled. Skips the rule without scanning requests.</li>
                     * @return Action Specifies the handling action for the managed rule item in RuleId. Supported values for SecurityAction Name: <li>Deny: Block. Responds with an interception page.</li><li>Monitor: Observe. Does not process the request but records security events in logs.</li><li>Disabled: Not enabled. Skips the rule without scanning requests.</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Specifies the handling action for the managed rule item in RuleId. Supported values for SecurityAction Name: <li>Deny: Block. Responds with an interception page.</li><li>Monitor: Observe. Does not process the request but records security events in logs.</li><li>Disabled: Not enabled. Skips the rule without scanning requests.</li>
                     * @param _action Specifies the handling action for the managed rule item in RuleId. Supported values for SecurityAction Name: <li>Deny: Block. Responds with an interception page.</li><li>Monitor: Observe. Does not process the request but records security events in logs.</li><li>Disabled: Not enabled. Skips the rule without scanning requests.</li>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Specific item under the managed rule group, used for rewriting the configuration content of this individual rule. For details, refer to the product documentation.	
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Specifies the handling action for the managed rule item in RuleId. Supported values for SecurityAction Name: <li>Deny: Block. Responds with an interception page.</li><li>Monitor: Observe. Does not process the request but records security events in logs.</li><li>Disabled: Not enabled. Skips the rule without scanning requests.</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEACTION_H_
