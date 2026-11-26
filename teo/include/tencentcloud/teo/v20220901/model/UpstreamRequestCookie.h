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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTCOOKIE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTCOOKIE_H_

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
                * Origin-pull request Cookie configuration.
                */
                class UpstreamRequestCookie : public AbstractModel
                {
                public:
                    UpstreamRequestCookie();
                    ~UpstreamRequestCookie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cookie configuration switch for origin-pull request parameters. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Cookie configuration switch for origin-pull request parameters. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Cookie configuration switch for origin-pull request parameters. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Cookie configuration switch for origin-pull request parameters. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
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
                     * 获取Cookie mode for origin-pull requests. This parameter is required when Switch is on. Valid values:
<li>full: retain all;</li>
<li>ignore: ignore all;</li>
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>
                     * @return Action Cookie mode for origin-pull requests. This parameter is required when Switch is on. Valid values:
<li>full: retain all;</li>
<li>ignore: ignore all;</li>
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Cookie mode for origin-pull requests. This parameter is required when Switch is on. Valid values:
<li>full: retain all;</li>
<li>ignore: ignore all;</li>
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>
                     * @param _action Cookie mode for origin-pull requests. This parameter is required when Switch is on. Valid values:
<li>full: retain all;</li>
<li>ignore: ignore all;</li>
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>
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
                     * 获取Specified parameter values. This parameter takes effect only when the query string mode Action is includeCustom or excludeCustom, and is used to specify the parameters to keep or ignore. Supports up to 10 parameters.
                     * @return Values Specified parameter values. This parameter takes effect only when the query string mode Action is includeCustom or excludeCustom, and is used to specify the parameters to keep or ignore. Supports up to 10 parameters.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Specified parameter values. This parameter takes effect only when the query string mode Action is includeCustom or excludeCustom, and is used to specify the parameters to keep or ignore. Supports up to 10 parameters.
                     * @param _values Specified parameter values. This parameter takes effect only when the query string mode Action is includeCustom or excludeCustom, and is used to specify the parameters to keep or ignore. Supports up to 10 parameters.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Cookie configuration switch for origin-pull request parameters. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cookie mode for origin-pull requests. This parameter is required when Switch is on. Valid values:
<li>full: retain all;</li>
<li>ignore: ignore all;</li>
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Specified parameter values. This parameter takes effect only when the query string mode Action is includeCustom or excludeCustom, and is used to specify the parameters to keep or ignore. Supports up to 10 parameters.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTCOOKIE_H_
