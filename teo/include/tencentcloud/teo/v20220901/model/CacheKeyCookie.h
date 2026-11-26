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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_

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
                * Configuration parameters for custom Cache Key Cookie.
                */
                class CacheKeyCookie : public AbstractModel
                {
                public:
                    CacheKeyCookie();
                    ~CacheKeyCookie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Function switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Function switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Function switch. Valid values:
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
                     * 获取Cache action, with values:
<li>full: retain all;</li>
<li> ignore: ignore all;</li>
<li> includeCustom: retain specified parameters;</li>
<li>excludeCustom: ignore specified parameter.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field. If specified, it does not take effect.
                     * @return Action Cache action, with values:
<li>full: retain all;</li>
<li> ignore: ignore all;</li>
<li> includeCustom: retain specified parameters;</li>
<li>excludeCustom: ignore specified parameter.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field. If specified, it does not take effect.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Cache action, with values:
<li>full: retain all;</li>
<li> ignore: ignore all;</li>
<li> includeCustom: retain specified parameters;</li>
<li>excludeCustom: ignore specified parameter.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field. If specified, it does not take effect.
                     * @param _action Cache action, with values:
<li>full: retain all;</li>
<li> ignore: ignore all;</li>
<li> includeCustom: retain specified parameters;</li>
<li>excludeCustom: ignore specified parameter.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field. If specified, it does not take effect.
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
                     * 获取List of custom Cache Key Cookie names.<br>Note: This field is required when Action is includeCustom or excludeCustom. It is not required when Action is full or ignore, and will not take effect if specified.
                     * @return Values List of custom Cache Key Cookie names.<br>Note: This field is required when Action is includeCustom or excludeCustom. It is not required when Action is full or ignore, and will not take effect if specified.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置List of custom Cache Key Cookie names.<br>Note: This field is required when Action is includeCustom or excludeCustom. It is not required when Action is full or ignore, and will not take effect if specified.
                     * @param _values List of custom Cache Key Cookie names.<br>Note: This field is required when Action is includeCustom or excludeCustom. It is not required when Action is full or ignore, and will not take effect if specified.
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
                     * Function switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache action, with values:
<li>full: retain all;</li>
<li> ignore: ignore all;</li>
<li> includeCustom: retain specified parameters;</li>
<li>excludeCustom: ignore specified parameter.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field. If specified, it does not take effect.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * List of custom Cache Key Cookie names.<br>Note: This field is required when Action is includeCustom or excludeCustom. It is not required when Action is full or ignore, and will not take effect if specified.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_
