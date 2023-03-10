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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCE_H_

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
                * Client filtering
                */
                class RateLimitIntelligence : public AbstractModel
                {
                public:
                    RateLimitIntelligence();
                    ~RateLimitIntelligence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param Switch Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Action to be executed. Values:
<li>`monitor`: Observe</li>
<li>`alg`: Challenge</li>
                     * @return Action Action to be executed. Values:
<li>`monitor`: Observe</li>
<li>`alg`: Challenge</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed. Values:
<li>`monitor`: Observe</li>
<li>`alg`: Challenge</li>
                     * @param Action Action to be executed. Values:
<li>`monitor`: Observe</li>
<li>`alg`: Challenge</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The rule ID, which is only used as a response parameter.
                     * @return RuleId The rule ID, which is only used as a response parameter.
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置The rule ID, which is only used as a response parameter.
                     * @param RuleId The rule ID, which is only used as a response parameter.
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Action to be executed. Values:
<li>`monitor`: Observe</li>
<li>`alg`: Challenge</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The rule ID, which is only used as a response parameter.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCE_H_
