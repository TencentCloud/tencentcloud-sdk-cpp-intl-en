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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNBOTCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNBOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/BotCookie.h>
#include <tencentcloud/cdn/v20180606/model/BotJavaScript.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Bot configuration
                */
                class ScdnBotConfig : public AbstractModel
                {
                public:
                    ScdnBotConfig();
                    ~ScdnBotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable SCDN bot configuration. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable SCDN bot configuration. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable SCDN bot configuration. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable SCDN bot configuration. Values:
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
                     * 获取Bot cookie policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BotCookie Bot cookie policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BotCookie> GetBotCookie() const;

                    /**
                     * 设置Bot cookie policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _botCookie Bot cookie policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBotCookie(const std::vector<BotCookie>& _botCookie);

                    /**
                     * 判断参数 BotCookie 是否已赋值
                     * @return BotCookie 是否已赋值
                     * 
                     */
                    bool BotCookieHasBeenSet() const;

                    /**
                     * 获取Bot JS policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BotJavaScript Bot JS policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BotJavaScript> GetBotJavaScript() const;

                    /**
                     * 设置Bot JS policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _botJavaScript Bot JS policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBotJavaScript(const std::vector<BotJavaScript>& _botJavaScript);

                    /**
                     * 判断参数 BotJavaScript 是否已赋值
                     * @return BotJavaScript 是否已赋值
                     * 
                     */
                    bool BotJavaScriptHasBeenSet() const;

                private:

                    /**
                     * Whether to enable SCDN bot configuration. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Bot cookie policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<BotCookie> m_botCookie;
                    bool m_botCookieHasBeenSet;

                    /**
                     * Bot JS policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<BotJavaScript> m_botJavaScript;
                    bool m_botJavaScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNBOTCONFIG_H_
