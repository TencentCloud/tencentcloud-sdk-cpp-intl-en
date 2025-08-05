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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_JSINJECTIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_JSINJECTIONRULE_H_

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
                * JavaScript injection rule.
                */
                class JSInjectionRule : public AbstractModel
                {
                public:
                    JSInjectionRule();
                    ~JSInjectionRule() = default;
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
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Rule priority. a smaller value indicates higher priority execution. value range: 0-100. default value is 0.
                     * @return Priority Rule priority. a smaller value indicates higher priority execution. value range: 0-100. default value is 0.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Rule priority. a smaller value indicates higher priority execution. value range: 0-100. default value is 0.
                     * @param _priority Rule priority. a smaller value indicates higher priority execution. value range: 0-100. default value is 0.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Specifies the match condition content, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     * @return Condition Specifies the match condition content, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Specifies the match condition content, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     * @param _condition Specifies the match condition content, which must comply with the expression grammar. please refer to the product document for detailed requirements.
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
                     * 获取JavaScript injection option. default value: run-attestations. valid values:.
<li>no-injection: specifies not to inject JavaScript.</li>.
<li>inject-sdk-only: injects sdks for all currently supported authentication methods. currently supported: TC-RCE and TC-CAPTCHA. note: to execute authentication detection, configure challenge rules.</li>.

                     * @return InjectJS JavaScript injection option. default value: run-attestations. valid values:.
<li>no-injection: specifies not to inject JavaScript.</li>.
<li>inject-sdk-only: injects sdks for all currently supported authentication methods. currently supported: TC-RCE and TC-CAPTCHA. note: to execute authentication detection, configure challenge rules.</li>.

                     * 
                     */
                    std::string GetInjectJS() const;

                    /**
                     * 设置JavaScript injection option. default value: run-attestations. valid values:.
<li>no-injection: specifies not to inject JavaScript.</li>.
<li>inject-sdk-only: injects sdks for all currently supported authentication methods. currently supported: TC-RCE and TC-CAPTCHA. note: to execute authentication detection, configure challenge rules.</li>.

                     * @param _injectJS JavaScript injection option. default value: run-attestations. valid values:.
<li>no-injection: specifies not to inject JavaScript.</li>.
<li>inject-sdk-only: injects sdks for all currently supported authentication methods. currently supported: TC-RCE and TC-CAPTCHA. note: to execute authentication detection, configure challenge rules.</li>.

                     * 
                     */
                    void SetInjectJS(const std::string& _injectJS);

                    /**
                     * 判断参数 InjectJS 是否已赋值
                     * @return InjectJS 是否已赋值
                     * 
                     */
                    bool InjectJSHasBeenSet() const;

                private:

                    /**
                     * Rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule priority. a smaller value indicates higher priority execution. value range: 0-100. default value is 0.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Specifies the match condition content, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * JavaScript injection option. default value: run-attestations. valid values:.
<li>no-injection: specifies not to inject JavaScript.</li>.
<li>inject-sdk-only: injects sdks for all currently supported authentication methods. currently supported: TC-RCE and TC-CAPTCHA. note: to execute authentication detection, configure challenge rules.</li>.

                     */
                    std::string m_injectJS;
                    bool m_injectJSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_JSINJECTIONRULE_H_
