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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/BotManagedRule.h>
#include <tencentcloud/teo/v20220106/model/BotPortraitRule.h>
#include <tencentcloud/teo/v20220106/model/IntelligenceRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取Whether to enable bot security configuration
                     * @return Switch Whether to enable bot security configuration
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable bot security configuration
                     * @param _switch Whether to enable bot security configuration
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
                     * 获取Preset rules
                     * @return ManagedRule Preset rules
                     * 
                     */
                    BotManagedRule GetManagedRule() const;

                    /**
                     * 设置Preset rules
                     * @param _managedRule Preset rules
                     * 
                     */
                    void SetManagedRule(const BotManagedRule& _managedRule);

                    /**
                     * 判断参数 ManagedRule 是否已赋值
                     * @return ManagedRule 是否已赋值
                     * 
                     */
                    bool ManagedRuleHasBeenSet() const;

                    /**
                     * 获取Not supported currently
                     * @return UaBotRule Not supported currently
                     * 
                     */
                    BotManagedRule GetUaBotRule() const;

                    /**
                     * 设置Not supported currently
                     * @param _uaBotRule Not supported currently
                     * 
                     */
                    void SetUaBotRule(const BotManagedRule& _uaBotRule);

                    /**
                     * 判断参数 UaBotRule 是否已赋值
                     * @return UaBotRule 是否已赋值
                     * 
                     */
                    bool UaBotRuleHasBeenSet() const;

                    /**
                     * 获取Not supported currently
                     * @return IspBotRule Not supported currently
                     * 
                     */
                    BotManagedRule GetIspBotRule() const;

                    /**
                     * 设置Not supported currently
                     * @param _ispBotRule Not supported currently
                     * 
                     */
                    void SetIspBotRule(const BotManagedRule& _ispBotRule);

                    /**
                     * 判断参数 IspBotRule 是否已赋值
                     * @return IspBotRule 是否已赋值
                     * 
                     */
                    bool IspBotRuleHasBeenSet() const;

                    /**
                     * 获取User portrait rules
                     * @return PortraitRule User portrait rules
                     * 
                     */
                    BotPortraitRule GetPortraitRule() const;

                    /**
                     * 设置User portrait rules
                     * @param _portraitRule User portrait rules
                     * 
                     */
                    void SetPortraitRule(const BotPortraitRule& _portraitRule);

                    /**
                     * 判断参数 PortraitRule 是否已赋值
                     * @return PortraitRule 是否已赋值
                     * 
                     */
                    bool PortraitRuleHasBeenSet() const;

                    /**
                     * 获取Bot intelligence rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntelligenceRule Bot intelligence rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    IntelligenceRule GetIntelligenceRule() const;

                    /**
                     * 设置Bot intelligence rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intelligenceRule Bot intelligence rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntelligenceRule(const IntelligenceRule& _intelligenceRule);

                    /**
                     * 判断参数 IntelligenceRule 是否已赋值
                     * @return IntelligenceRule 是否已赋值
                     * 
                     */
                    bool IntelligenceRuleHasBeenSet() const;

                private:

                    /**
                     * Whether to enable bot security configuration
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Preset rules
                     */
                    BotManagedRule m_managedRule;
                    bool m_managedRuleHasBeenSet;

                    /**
                     * Not supported currently
                     */
                    BotManagedRule m_uaBotRule;
                    bool m_uaBotRuleHasBeenSet;

                    /**
                     * Not supported currently
                     */
                    BotManagedRule m_ispBotRule;
                    bool m_ispBotRuleHasBeenSet;

                    /**
                     * User portrait rules
                     */
                    BotPortraitRule m_portraitRule;
                    bool m_portraitRuleHasBeenSet;

                    /**
                     * Bot intelligence rules
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IntelligenceRule m_intelligenceRule;
                    bool m_intelligenceRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTCONFIG_H_
