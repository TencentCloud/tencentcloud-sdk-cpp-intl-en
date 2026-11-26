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
                * Security Bot configuration
                */
                class BotConfig : public AbstractModel
                {
                public:
                    BotConfig();
                    ~BotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取bot switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch bot switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置bot switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch bot switch. Valid values:
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
                     * 获取Common detailed basic rules. If it is null, use the last set configuration by default.
                     * @return BotManagedRule Common detailed basic rules. If it is null, use the last set configuration by default.
                     * 
                     */
                    BotManagedRule GetBotManagedRule() const;

                    /**
                     * 设置Common detailed basic rules. If it is null, use the last set configuration by default.
                     * @param _botManagedRule Common detailed basic rules. If it is null, use the last set configuration by default.
                     * 
                     */
                    void SetBotManagedRule(const BotManagedRule& _botManagedRule);

                    /**
                     * 判断参数 BotManagedRule 是否已赋值
                     * @return BotManagedRule 是否已赋值
                     * 
                     */
                    bool BotManagedRuleHasBeenSet() const;

                    /**
                     * 获取User profiling rule. If it is null, use the last set configuration by default.
                     * @return BotPortraitRule User profiling rule. If it is null, use the last set configuration by default.
                     * 
                     */
                    BotPortraitRule GetBotPortraitRule() const;

                    /**
                     * 设置User profiling rule. If it is null, use the last set configuration by default.
                     * @param _botPortraitRule User profiling rule. If it is null, use the last set configuration by default.
                     * 
                     */
                    void SetBotPortraitRule(const BotPortraitRule& _botPortraitRule);

                    /**
                     * 判断参数 BotPortraitRule 是否已赋值
                     * @return BotPortraitRule 是否已赋值
                     * 
                     */
                    bool BotPortraitRuleHasBeenSet() const;

                    /**
                     * 获取Bot intelligent analysis. If it is null, use the last set configuration by default.
                     * @return IntelligenceRule Bot intelligent analysis. If it is null, use the last set configuration by default.
                     * 
                     */
                    IntelligenceRule GetIntelligenceRule() const;

                    /**
                     * 设置Bot intelligent analysis. If it is null, use the last set configuration by default.
                     * @param _intelligenceRule Bot intelligent analysis. If it is null, use the last set configuration by default.
                     * 
                     */
                    void SetIntelligenceRule(const IntelligenceRule& _intelligenceRule);

                    /**
                     * 判断参数 IntelligenceRule 是否已赋值
                     * @return IntelligenceRule 是否已赋值
                     * 
                     */
                    bool IntelligenceRuleHasBeenSet() const;

                    /**
                     * 获取Bot custom rule. If it is null, the last set configuration is used by default.
                     * @return BotUserRules Bot custom rule. If it is null, the last set configuration is used by default.
                     * 
                     */
                    std::vector<BotUserRule> GetBotUserRules() const;

                    /**
                     * 设置Bot custom rule. If it is null, the last set configuration is used by default.
                     * @param _botUserRules Bot custom rule. If it is null, the last set configuration is used by default.
                     * 
                     */
                    void SetBotUserRules(const std::vector<BotUserRule>& _botUserRules);

                    /**
                     * 判断参数 BotUserRules 是否已赋值
                     * @return BotUserRules 是否已赋值
                     * 
                     */
                    bool BotUserRulesHasBeenSet() const;

                    /**
                     * 获取Bot active feature detection rule.
                     * @return AlgDetectRule Bot active feature detection rule.
                     * 
                     */
                    std::vector<AlgDetectRule> GetAlgDetectRule() const;

                    /**
                     * 设置Bot active feature detection rule.
                     * @param _algDetectRule Bot active feature detection rule.
                     * 
                     */
                    void SetAlgDetectRule(const std::vector<AlgDetectRule>& _algDetectRule);

                    /**
                     * 判断参数 AlgDetectRule 是否已赋值
                     * @return AlgDetectRule 是否已赋值
                     * 
                     */
                    bool AlgDetectRuleHasBeenSet() const;

                    /**
                     * 获取Bot managed custom policy. This input parameter is optional and is only used as an output parameter.
                     * @return Customizes Bot managed custom policy. This input parameter is optional and is only used as an output parameter.
                     * 
                     */
                    std::vector<BotUserRule> GetCustomizes() const;

                    /**
                     * 设置Bot managed custom policy. This input parameter is optional and is only used as an output parameter.
                     * @param _customizes Bot managed custom policy. This input parameter is optional and is only used as an output parameter.
                     * 
                     */
                    void SetCustomizes(const std::vector<BotUserRule>& _customizes);

                    /**
                     * 判断参数 Customizes 是否已赋值
                     * @return Customizes 是否已赋值
                     * 
                     */
                    bool CustomizesHasBeenSet() const;

                private:

                    /**
                     * bot switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Common detailed basic rules. If it is null, use the last set configuration by default.
                     */
                    BotManagedRule m_botManagedRule;
                    bool m_botManagedRuleHasBeenSet;

                    /**
                     * User profiling rule. If it is null, use the last set configuration by default.
                     */
                    BotPortraitRule m_botPortraitRule;
                    bool m_botPortraitRuleHasBeenSet;

                    /**
                     * Bot intelligent analysis. If it is null, use the last set configuration by default.
                     */
                    IntelligenceRule m_intelligenceRule;
                    bool m_intelligenceRuleHasBeenSet;

                    /**
                     * Bot custom rule. If it is null, the last set configuration is used by default.
                     */
                    std::vector<BotUserRule> m_botUserRules;
                    bool m_botUserRulesHasBeenSet;

                    /**
                     * Bot active feature detection rule.
                     */
                    std::vector<AlgDetectRule> m_algDetectRule;
                    bool m_algDetectRuleHasBeenSet;

                    /**
                     * Bot managed custom policy. This input parameter is optional and is only used as an output parameter.
                     */
                    std::vector<BotUserRule> m_customizes;
                    bool m_customizesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTCONFIG_H_
