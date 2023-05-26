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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BotManagedRule.h>
#include <tencentcloud/teo/v20220901/model/BotPortraitRule.h>
#include <tencentcloud/teo/v20220901/model/IntelligenceRule.h>
#include <tencentcloud/teo/v20220901/model/BotUserRule.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot security configuration
                */
                class BotConfig : public AbstractModel
                {
                public:
                    BotConfig();
                    ~BotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable bot security. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable bot security. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable bot security. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param Switch Whether to enable bot security. Values:
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
                     * 获取The settings of the bot managed rule. If it is null, the settings that were last configured will be used.
                     * @return BotManagedRule The settings of the bot managed rule. If it is null, the settings that were last configured will be used.
                     */
                    BotManagedRule GetBotManagedRule() const;

                    /**
                     * 设置The settings of the bot managed rule. If it is null, the settings that were last configured will be used.
                     * @param BotManagedRule The settings of the bot managed rule. If it is null, the settings that were last configured will be used.
                     */
                    void SetBotManagedRule(const BotManagedRule& _botManagedRule);

                    /**
                     * 判断参数 BotManagedRule 是否已赋值
                     * @return BotManagedRule 是否已赋值
                     */
                    bool BotManagedRuleHasBeenSet() const;

                    /**
                     * 获取The settings of the client reputation rule. If it is null, the settings that were last configured will be used.
                     * @return BotPortraitRule The settings of the client reputation rule. If it is null, the settings that were last configured will be used.
                     */
                    BotPortraitRule GetBotPortraitRule() const;

                    /**
                     * 设置The settings of the client reputation rule. If it is null, the settings that were last configured will be used.
                     * @param BotPortraitRule The settings of the client reputation rule. If it is null, the settings that were last configured will be used.
                     */
                    void SetBotPortraitRule(const BotPortraitRule& _botPortraitRule);

                    /**
                     * 判断参数 BotPortraitRule 是否已赋值
                     * @return BotPortraitRule 是否已赋值
                     */
                    bool BotPortraitRuleHasBeenSet() const;

                    /**
                     * 获取The bot intelligence settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntelligenceRule The bot intelligence settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IntelligenceRule GetIntelligenceRule() const;

                    /**
                     * 设置The bot intelligence settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IntelligenceRule The bot intelligence settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIntelligenceRule(const IntelligenceRule& _intelligenceRule);

                    /**
                     * 判断参数 IntelligenceRule 是否已赋值
                     * @return IntelligenceRule 是否已赋值
                     */
                    bool IntelligenceRuleHasBeenSet() const;

                    /**
                     * 获取Settings of the custom bot rule. If it is null, the settings that were last configured will be used.
                     * @return BotUserRules Settings of the custom bot rule. If it is null, the settings that were last configured will be used.
                     */
                    std::vector<BotUserRule> GetBotUserRules() const;

                    /**
                     * 设置Settings of the custom bot rule. If it is null, the settings that were last configured will be used.
                     * @param BotUserRules Settings of the custom bot rule. If it is null, the settings that were last configured will be used.
                     */
                    void SetBotUserRules(const std::vector<BotUserRule>& _botUserRules);

                    /**
                     * 判断参数 BotUserRules 是否已赋值
                     * @return BotUserRules 是否已赋值
                     */
                    bool BotUserRulesHasBeenSet() const;

                    /**
                     * 获取Active bot detection rule.
                     * @return AlgDetectRule Active bot detection rule.
                     */
                    std::vector<AlgDetectRule> GetAlgDetectRule() const;

                    /**
                     * 设置Active bot detection rule.
                     * @param AlgDetectRule Active bot detection rule.
                     */
                    void SetAlgDetectRule(const std::vector<AlgDetectRule>& _algDetectRule);

                    /**
                     * 判断参数 AlgDetectRule 是否已赋值
                     * @return AlgDetectRule 是否已赋值
                     */
                    bool AlgDetectRuleHasBeenSet() const;

                    /**
                     * 获取Settings of the bot managed rule. It is only used for output.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Customizes Settings of the bot managed rule. It is only used for output.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<BotUserRule> GetCustomizes() const;

                    /**
                     * 设置Settings of the bot managed rule. It is only used for output.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Customizes Settings of the bot managed rule. It is only used for output.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCustomizes(const std::vector<BotUserRule>& _customizes);

                    /**
                     * 判断参数 Customizes 是否已赋值
                     * @return Customizes 是否已赋值
                     */
                    bool CustomizesHasBeenSet() const;

                private:

                    /**
                     * Whether to enable bot security. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The settings of the bot managed rule. If it is null, the settings that were last configured will be used.
                     */
                    BotManagedRule m_botManagedRule;
                    bool m_botManagedRuleHasBeenSet;

                    /**
                     * The settings of the client reputation rule. If it is null, the settings that were last configured will be used.
                     */
                    BotPortraitRule m_botPortraitRule;
                    bool m_botPortraitRuleHasBeenSet;

                    /**
                     * The bot intelligence settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IntelligenceRule m_intelligenceRule;
                    bool m_intelligenceRuleHasBeenSet;

                    /**
                     * Settings of the custom bot rule. If it is null, the settings that were last configured will be used.
                     */
                    std::vector<BotUserRule> m_botUserRules;
                    bool m_botUserRulesHasBeenSet;

                    /**
                     * Active bot detection rule.
                     */
                    std::vector<AlgDetectRule> m_algDetectRule;
                    bool m_algDetectRuleHasBeenSet;

                    /**
                     * Settings of the bot managed rule. It is only used for output.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<BotUserRule> m_customizes;
                    bool m_customizesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTCONFIG_H_
