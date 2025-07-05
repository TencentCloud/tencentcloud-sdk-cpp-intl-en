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
                * Action for specific RuleId.
                */
                class ManagedRuleAction : public AbstractModel
                {
                public:
                    ManagedRuleAction();
                    ~ManagedRuleAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific items under ManagedRuleGroup, used to rewrite the configuration of this individual rule item, refer to product documentation for details.	
                     * @return RuleId Specific items under ManagedRuleGroup, used to rewrite the configuration of this individual rule item, refer to product documentation for details.	
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Specific items under ManagedRuleGroup, used to rewrite the configuration of this individual rule item, refer to product documentation for details.	
                     * @param _ruleId Specific items under ManagedRuleGroup, used to rewrite the configuration of this individual rule item, refer to product documentation for details.	
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
                     * 获取Action for the managed rule item specified by RuleId, the SecurityAction Name parameter supports: <li>`Deny`: block and respond with an block page;</li> <li>`Monitor`: observe, do not process the request and record the security event in logs;</li> <li>`Disabled`: disabled, do not scan the request and skip this rule.</li>.
                     * @return Action Action for the managed rule item specified by RuleId, the SecurityAction Name parameter supports: <li>`Deny`: block and respond with an block page;</li> <li>`Monitor`: observe, do not process the request and record the security event in logs;</li> <li>`Disabled`: disabled, do not scan the request and skip this rule.</li>.
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Action for the managed rule item specified by RuleId, the SecurityAction Name parameter supports: <li>`Deny`: block and respond with an block page;</li> <li>`Monitor`: observe, do not process the request and record the security event in logs;</li> <li>`Disabled`: disabled, do not scan the request and skip this rule.</li>.
                     * @param _action Action for the managed rule item specified by RuleId, the SecurityAction Name parameter supports: <li>`Deny`: block and respond with an block page;</li> <li>`Monitor`: observe, do not process the request and record the security event in logs;</li> <li>`Disabled`: disabled, do not scan the request and skip this rule.</li>.
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
                     * Specific items under ManagedRuleGroup, used to rewrite the configuration of this individual rule item, refer to product documentation for details.	
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Action for the managed rule item specified by RuleId, the SecurityAction Name parameter supports: <li>`Deny`: block and respond with an block page;</li> <li>`Monitor`: observe, do not process the request and record the security event in logs;</li> <li>`Disabled`: disabled, do not scan the request and skip this rule.</li>.
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEACTION_H_
