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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_WAFCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_WAFCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/WafRule.h>
#include <tencentcloud/teo/v20220106/model/AiRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * WAF configuration
                */
                class WafConfig : public AbstractModel
                {
                public:
                    WafConfig();
                    ~WafConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch
                     * @return Switch Switch
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch
                     * @param _switch Switch
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
                     * 获取Protection level: `loose`, `normal`, `strict`, `stricter`, `custom`
                     * @return Level Protection level: `loose`, `normal`, `strict`, `stricter`, `custom`
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Protection level: `loose`, `normal`, `strict`, `stricter`, `custom`
                     * @param _level Protection level: `loose`, `normal`, `strict`, `stricter`, `custom`
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
                     * 获取Mode: `block`, `observe`, `close`
                     * @return Mode Mode: `block`, `observe`, `close`
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Mode: `block`, `observe`, `close`
                     * @param _mode Mode: `block`, `observe`, `close`
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
                     * 获取WAF rule allowlist/blocklist
                     * @return WafRules WAF rule allowlist/blocklist
                     * 
                     */
                    WafRule GetWafRules() const;

                    /**
                     * 设置WAF rule allowlist/blocklist
                     * @param _wafRules WAF rule allowlist/blocklist
                     * 
                     */
                    void SetWafRules(const WafRule& _wafRules);

                    /**
                     * 判断参数 WafRules 是否已赋值
                     * @return WafRules 是否已赋值
                     * 
                     */
                    bool WafRulesHasBeenSet() const;

                    /**
                     * 获取AI rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AiRule AI rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AiRule GetAiRule() const;

                    /**
                     * 设置AI rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _aiRule AI rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * Switch
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Protection level: `loose`, `normal`, `strict`, `stricter`, `custom`
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Mode: `block`, `observe`, `close`
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * WAF rule allowlist/blocklist
                     */
                    WafRule m_wafRules;
                    bool m_wafRulesHasBeenSet;

                    /**
                     * AI rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AiRule m_aiRule;
                    bool m_aiRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_WAFCONFIG_H_
