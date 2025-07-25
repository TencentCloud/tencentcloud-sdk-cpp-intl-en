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
                * Origin-pull request parameters Cookie configuration
                */
                class UpstreamRequestCookie : public AbstractModel
                {
                public:
                    UpstreamRequestCookie();
                    ~UpstreamRequestCookie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the origin-pull request parameter cookie. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @return Switch Whether to enable the origin-pull request parameter cookie. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the origin-pull request parameter cookie. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @param _switch Whether to enable the origin-pull request parameter cookie. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
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
                     * 获取Origin-Pull request parameter cookie mode. this parameter is required when `switch` is on. valid values are:.
<Li>Full: indicates full retention;</li>.
<Li>Ignore: ignore all.</li>.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>ExcludeCustom: ignore partial parameters.</li>.
                     * @return Action Origin-Pull request parameter cookie mode. this parameter is required when `switch` is on. valid values are:.
<Li>Full: indicates full retention;</li>.
<Li>Ignore: ignore all.</li>.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>ExcludeCustom: ignore partial parameters.</li>.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Origin-Pull request parameter cookie mode. this parameter is required when `switch` is on. valid values are:.
<Li>Full: indicates full retention;</li>.
<Li>Ignore: ignore all.</li>.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>ExcludeCustom: ignore partial parameters.</li>.
                     * @param _action Origin-Pull request parameter cookie mode. this parameter is required when `switch` is on. valid values are:.
<Li>Full: indicates full retention;</li>.
<Li>Ignore: ignore all.</li>.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>ExcludeCustom: ignore partial parameters.</li>.
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
                     * 获取Specifies parameter values. this parameter takes effect only when the query string mode action is `includecustom` or `excludecustom`, and is used to specify the parameters to be reserved or ignored. up to 10 parameters are supported.
                     * @return Values Specifies parameter values. this parameter takes effect only when the query string mode action is `includecustom` or `excludecustom`, and is used to specify the parameters to be reserved or ignored. up to 10 parameters are supported.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Specifies parameter values. this parameter takes effect only when the query string mode action is `includecustom` or `excludecustom`, and is used to specify the parameters to be reserved or ignored. up to 10 parameters are supported.
                     * @param _values Specifies parameter values. this parameter takes effect only when the query string mode action is `includecustom` or `excludecustom`, and is used to specify the parameters to be reserved or ignored. up to 10 parameters are supported.
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
                     * Whether to enable the origin-pull request parameter cookie. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Origin-Pull request parameter cookie mode. this parameter is required when `switch` is on. valid values are:.
<Li>Full: indicates full retention;</li>.
<Li>Ignore: ignore all.</li>.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>ExcludeCustom: ignore partial parameters.</li>.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Specifies parameter values. this parameter takes effect only when the query string mode action is `includecustom` or `excludecustom`, and is used to specify the parameters to be reserved or ignored. up to 10 parameters are supported.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTCOOKIE_H_
