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
                * Waf configuration.
                */
                class WafConfig : public AbstractModel
                {
                public:
                    WafConfig();
                    ~WafConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WafConfig switch. Valid values:
<li>on: Enable;</li>
<li> off: disabled.</li>The switch only affects whether the configuration takes effect. Even if it is off, the configuration content can still be modified normally.
                     * @return Switch WafConfig switch. Valid values:
<li>on: Enable;</li>
<li> off: disabled.</li>The switch only affects whether the configuration takes effect. Even if it is off, the configuration content can still be modified normally.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置WafConfig switch. Valid values:
<li>on: Enable;</li>
<li> off: disabled.</li>The switch only affects whether the configuration takes effect. Even if it is off, the configuration content can still be modified normally.
                     * @param _switch WafConfig switch. Valid values:
<li>on: Enable;</li>
<li> off: disabled.</li>The switch only affects whether the configuration takes effect. Even if it is off, the configuration content can still be modified normally.
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
                     * 获取Protection level set last time. Valid values:
<li> loose: loose;</li>
<li> normal: Normal;</li>
<li> strict: strict;</li>
<li>stricter: ultra-strict;</li>
<li> custom: Custom.</li>
                     * @return Level Protection level set last time. Valid values:
<li> loose: loose;</li>
<li> normal: Normal;</li>
<li> strict: strict;</li>
<li>stricter: ultra-strict;</li>
<li> custom: Custom.</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Protection level set last time. Valid values:
<li> loose: loose;</li>
<li> normal: Normal;</li>
<li> strict: strict;</li>
<li>stricter: ultra-strict;</li>
<li> custom: Custom.</li>
                     * @param _level Protection level set last time. Valid values:
<li> loose: loose;</li>
<li> normal: Normal;</li>
<li> strict: strict;</li>
<li>stricter: ultra-strict;</li>
<li> custom: Custom.</li>
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
                     * 获取Global WAF mode. Valid values:
<li> block: block (global blocking, but you can configure rules to observe);</li>
<li> observe: observation (regardless of the detailed rule configuration, it is always observation).</li>
                     * @return Mode Global WAF mode. Valid values:
<li> block: block (global blocking, but you can configure rules to observe);</li>
<li> observe: observation (regardless of the detailed rule configuration, it is always observation).</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Global WAF mode. Valid values:
<li> block: block (global blocking, but you can configure rules to observe);</li>
<li> observe: observation (regardless of the detailed rule configuration, it is always observation).</li>
                     * @param _mode Global WAF mode. Valid values:
<li> block: block (global blocking, but you can configure rules to observe);</li>
<li> observe: observation (regardless of the detailed rule configuration, it is always observation).</li>
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
                     * 获取Detailed configuration of the managed rule. If null, use the last set configuration by default.
                     * @return WafRule Detailed configuration of the managed rule. If null, use the last set configuration by default.
                     * 
                     */
                    WafRule GetWafRule() const;

                    /**
                     * 设置Detailed configuration of the managed rule. If null, use the last set configuration by default.
                     * @param _wafRule Detailed configuration of the managed rule. If null, use the last set configuration by default.
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
                     * 获取Protection configuration of the AI rule engine. If it is null, use the last set configuration by default.
                     * @return AiRule Protection configuration of the AI rule engine. If it is null, use the last set configuration by default.
                     * 
                     */
                    AiRule GetAiRule() const;

                    /**
                     * 设置Protection configuration of the AI rule engine. If it is null, use the last set configuration by default.
                     * @param _aiRule Protection configuration of the AI rule engine. If it is null, use the last set configuration by default.
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
                     * WafConfig switch. Valid values:
<li>on: Enable;</li>
<li> off: disabled.</li>The switch only affects whether the configuration takes effect. Even if it is off, the configuration content can still be modified normally.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Protection level set last time. Valid values:
<li> loose: loose;</li>
<li> normal: Normal;</li>
<li> strict: strict;</li>
<li>stricter: ultra-strict;</li>
<li> custom: Custom.</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Global WAF mode. Valid values:
<li> block: block (global blocking, but you can configure rules to observe);</li>
<li> observe: observation (regardless of the detailed rule configuration, it is always observation).</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Detailed configuration of the managed rule. If null, use the last set configuration by default.
                     */
                    WafRule m_wafRule;
                    bool m_wafRuleHasBeenSet;

                    /**
                     * Protection configuration of the AI rule engine. If it is null, use the last set configuration by default.
                     */
                    AiRule m_aiRule;
                    bool m_aiRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFCONFIG_H_
