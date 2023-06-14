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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafRule.h>
#include <tencentcloud/teo/v20220901/model/AiRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * WAF configuration.
                */
                class WafConfig : public AbstractModel
                {
                public:
                    WafConfig();
                    ~WafConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable WAF configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>The configuration can be modified even when it is disabled.
                     * @return Switch Whether to enable WAF configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>The configuration can be modified even when it is disabled.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable WAF configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>The configuration can be modified even when it is disabled.
                     * @param _switch Whether to enable WAF configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>The configuration can be modified even when it is disabled.
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
                     * 获取The protection level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>
                     * @return Level The protection level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置The protection level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>
                     * @param _level The protection level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取The WAF global mode. Values:
<li>`block`: Block globally</li>
<li>`observe`: Observe globally</li>
                     * @return Mode The WAF global mode. Values:
<li>`block`: Block globally</li>
<li>`observe`: Observe globally</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The WAF global mode. Values:
<li>`block`: Block globally</li>
<li>`observe`: Observe globally</li>
                     * @param _mode The WAF global mode. Values:
<li>`block`: Block globally</li>
<li>`observe`: Observe globally</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取The settings of the managed rule. If it is null, the settings that were last configured will be used.
                     * @return WafRule The settings of the managed rule. If it is null, the settings that were last configured will be used.
                     * 
                     */
                    WafRule GetWafRule() const;

                    /**
                     * 设置The settings of the managed rule. If it is null, the settings that were last configured will be used.
                     * @param _wafRule The settings of the managed rule. If it is null, the settings that were last configured will be used.
                     * 
                     */
                    void SetWafRule(const WafRule& _wafRule);

                    /**
                     * 判断参数 WafRule 是否已赋值
                     * @return WafRule 是否已赋值
                     * 
                     */
                    bool WafRuleHasBeenSet() const;

                    /**
                     * 获取The setting of the AI rule engine. If it is null, the setting that was last configured will be used.
                     * @return AiRule The setting of the AI rule engine. If it is null, the setting that was last configured will be used.
                     * 
                     */
                    AiRule GetAiRule() const;

                    /**
                     * 设置The setting of the AI rule engine. If it is null, the setting that was last configured will be used.
                     * @param _aiRule The setting of the AI rule engine. If it is null, the setting that was last configured will be used.
                     * 
                     */
                    void SetAiRule(const AiRule& _aiRule);

                    /**
                     * 判断参数 AiRule 是否已赋值
                     * @return AiRule 是否已赋值
                     * 
                     */
                    bool AiRuleHasBeenSet() const;

                private:

                    /**
                     * Whether to enable WAF configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>The configuration can be modified even when it is disabled.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The protection level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * The WAF global mode. Values:
<li>`block`: Block globally</li>
<li>`observe`: Observe globally</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The settings of the managed rule. If it is null, the settings that were last configured will be used.
                     */
                    WafRule m_wafRule;
                    bool m_wafRuleHasBeenSet;

                    /**
                     * The setting of the AI rule engine. If it is null, the setting that was last configured will be used.
                     */
                    AiRule m_aiRule;
                    bool m_aiRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFCONFIG_H_
