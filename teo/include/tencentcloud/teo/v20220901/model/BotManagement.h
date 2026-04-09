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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BotManagementCustomRules.h>
#include <tencentcloud/teo/v20220901/model/BasicBotSettings.h>
#include <tencentcloud/teo/v20220901/model/ClientAttestationRules.h>
#include <tencentcloud/teo/v20220901/model/BrowserImpersonationDetection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security BOT managed rules architecture.
                */
                class BotManagement : public AbstractModel
                {
                public:
                    BotManagement();
                    ~BotManagement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether Bot management is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * @return Enabled Whether Bot management is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether Bot management is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * @param _enabled Whether Bot management is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Bot management custom rule combines various crawlers and request behavior characteristics to accurately define bots and configure customized handling methods.
                     * @return CustomRules Bot management custom rule combines various crawlers and request behavior characteristics to accurately define bots and configure customized handling methods.
                     * 
                     */
                    BotManagementCustomRules GetCustomRules() const;

                    /**
                     * 设置Bot management custom rule combines various crawlers and request behavior characteristics to accurately define bots and configure customized handling methods.
                     * @param _customRules Bot management custom rule combines various crawlers and request behavior characteristics to accurately define bots and configure customized handling methods.
                     * 
                     */
                    void SetCustomRules(const BotManagementCustomRules& _customRules);

                    /**
                     * 判断参数 CustomRules 是否已赋值
                     * @return CustomRules 是否已赋值
                     * 
                     */
                    bool CustomRulesHasBeenSet() const;

                    /**
                     * 获取Bot management basic configuration. takes effect on all domains associated with the policy. can be customized through CustomRules.
                     * @return BasicBotSettings Bot management basic configuration. takes effect on all domains associated with the policy. can be customized through CustomRules.
                     * 
                     */
                    BasicBotSettings GetBasicBotSettings() const;

                    /**
                     * 设置Bot management basic configuration. takes effect on all domains associated with the policy. can be customized through CustomRules.
                     * @param _basicBotSettings Bot management basic configuration. takes effect on all domains associated with the policy. can be customized through CustomRules.
                     * 
                     */
                    void SetBasicBotSettings(const BasicBotSettings& _basicBotSettings);

                    /**
                     * 判断参数 BasicBotSettings 是否已赋值
                     * @return BasicBotSettings 是否已赋值
                     * 
                     */
                    bool BasicBotSettingsHasBeenSet() const;

                    /**
                     * 获取Definition list of client authentication rules. this feature is in beta test. submit a ticket if you need to use it.
                     * @return ClientAttestationRules Definition list of client authentication rules. this feature is in beta test. submit a ticket if you need to use it.
                     * 
                     */
                    ClientAttestationRules GetClientAttestationRules() const;

                    /**
                     * 设置Definition list of client authentication rules. this feature is in beta test. submit a ticket if you need to use it.
                     * @param _clientAttestationRules Definition list of client authentication rules. this feature is in beta test. submit a ticket if you need to use it.
                     * 
                     */
                    void SetClientAttestationRules(const ClientAttestationRules& _clientAttestationRules);

                    /**
                     * 判断参数 ClientAttestationRules 是否已赋值
                     * @return ClientAttestationRules 是否已赋值
                     * 
                     */
                    bool ClientAttestationRulesHasBeenSet() const;

                    /**
                     * 获取Configures browser spoofing identification rules (formerly active feature detection rule). sets the response page range for JavaScript injection, browser check options, and handling method for non-browser clients.
                     * @return BrowserImpersonationDetection Configures browser spoofing identification rules (formerly active feature detection rule). sets the response page range for JavaScript injection, browser check options, and handling method for non-browser clients.
                     * 
                     */
                    BrowserImpersonationDetection GetBrowserImpersonationDetection() const;

                    /**
                     * 设置Configures browser spoofing identification rules (formerly active feature detection rule). sets the response page range for JavaScript injection, browser check options, and handling method for non-browser clients.
                     * @param _browserImpersonationDetection Configures browser spoofing identification rules (formerly active feature detection rule). sets the response page range for JavaScript injection, browser check options, and handling method for non-browser clients.
                     * 
                     */
                    void SetBrowserImpersonationDetection(const BrowserImpersonationDetection& _browserImpersonationDetection);

                    /**
                     * 判断参数 BrowserImpersonationDetection 是否已赋值
                     * @return BrowserImpersonationDetection 是否已赋值
                     * 
                     */
                    bool BrowserImpersonationDetectionHasBeenSet() const;

                private:

                    /**
                     * Whether Bot management is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Bot management custom rule combines various crawlers and request behavior characteristics to accurately define bots and configure customized handling methods.
                     */
                    BotManagementCustomRules m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * Bot management basic configuration. takes effect on all domains associated with the policy. can be customized through CustomRules.
                     */
                    BasicBotSettings m_basicBotSettings;
                    bool m_basicBotSettingsHasBeenSet;

                    /**
                     * Definition list of client authentication rules. this feature is in beta test. submit a ticket if you need to use it.
                     */
                    ClientAttestationRules m_clientAttestationRules;
                    bool m_clientAttestationRulesHasBeenSet;

                    /**
                     * Configures browser spoofing identification rules (formerly active feature detection rule). sets the response page range for JavaScript injection, browser check options, and handling method for non-browser clients.
                     */
                    BrowserImpersonationDetection m_browserImpersonationDetection;
                    bool m_browserImpersonationDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_
