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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BOTCOOKIE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BOTCOOKIE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Bot cookie policy
                */
                class BotCookie : public AbstractModel
                {
                public:
                    BotCookie();
                    ~BotCookie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable bot cookie policies. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable bot cookie policies. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable bot cookie policies. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable bot cookie policies. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Rule type, which can only be `all` currently.
                     * @return RuleType Rule type, which can only be `all` currently.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type, which can only be `all` currently.
                     * @param _ruleType Rule type, which can only be `all` currently.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Rule value. Valid value: `*`.
                     * @return RuleValue Rule value. Valid value: `*`.
                     * 
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置Rule value. Valid value: `*`.
                     * @param _ruleValue Rule value. Valid value: `*`.
                     * 
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     * 
                     */
                    bool RuleValueHasBeenSet() const;

                    /**
                     * 获取Action. Valid values: `monitor`, `intercept`, `redirect`, and `captcha`.
                     * @return Action Action. Valid values: `monitor`, `intercept`, `redirect`, and `captcha`.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values: `monitor`, `intercept`, `redirect`, and `captcha`.
                     * @param _action Action. Valid values: `monitor`, `intercept`, `redirect`, and `captcha`.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Redirection target page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RedirectUrl Redirection target page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置Redirection target page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _redirectUrl Redirection target page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable bot cookie policies. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Rule type, which can only be `all` currently.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Rule value. Valid value: `*`.
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                    /**
                     * Action. Valid values: `monitor`, `intercept`, `redirect`, and `captcha`.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Redirection target page
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BOTCOOKIE_H_
