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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATIONGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATIONGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/BotManagementActionOverrides.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP intelligence library (formerly client profile analysis) specific configuration.
                */
                class IPReputationGroup : public AbstractModel
                {
                public:
                    IPReputationGroup();
                    ~IPReputationGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution action of the IP intelligence library (formerly client profile analysis). SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @return BaseAction Execution action of the IP intelligence library (formerly client profile analysis). SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    SecurityAction GetBaseAction() const;

                    /**
                     * 设置Execution action of the IP intelligence library (formerly client profile analysis). SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @param _baseAction Execution action of the IP intelligence library (formerly client profile analysis). SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    void SetBaseAction(const SecurityAction& _baseAction);

                    /**
                     * 判断参数 BaseAction 是否已赋值
                     * @return BaseAction 是否已赋值
                     * 
                     */
                    bool BaseActionHasBeenSet() const;

                    /**
                     * 获取The specific configuration of the IP intelligence library (originally client profile analysis), used to override the default configuration in BaseAction. among them, the Ids in BotManagementActionOverrides can be filled with: <li>IPREP_WEB_AND_DDOS_ATTACKERS_LOW: network attack - general confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_MID: network attack - medium confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_HIGH: network attack - HIGH confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_LOW: network proxy - general confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_MID: network proxy - medium confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_HIGH: network proxy - HIGH confidence;</li> <li>IPREP_SCANNING_TOOLS_LOW: scanner - general confidence;</li> <li>IPREP_SCANNING_TOOLS_MID: scanner - medium confidence;</li> <li>IPREP_SCANNING_TOOLS_HIGH: scanner - HIGH confidence;</li> <li>IPREP_ATO_ATTACKERS_LOW: account takeover attack - general confidence;</li> <li>IPREP_ATO_ATTACKERS_MID: account takeover attack - medium confidence;</li> <li>IPREP_ATO_ATTACKERS_HIGH: account takeover attack - HIGH confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_LOW: malicious BOT - general confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_MID: malicious BOT - medium confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_HIGH: malicious BOT - HIGH confidence.</li>.
                     * @return BotManagementActionOverrides The specific configuration of the IP intelligence library (originally client profile analysis), used to override the default configuration in BaseAction. among them, the Ids in BotManagementActionOverrides can be filled with: <li>IPREP_WEB_AND_DDOS_ATTACKERS_LOW: network attack - general confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_MID: network attack - medium confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_HIGH: network attack - HIGH confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_LOW: network proxy - general confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_MID: network proxy - medium confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_HIGH: network proxy - HIGH confidence;</li> <li>IPREP_SCANNING_TOOLS_LOW: scanner - general confidence;</li> <li>IPREP_SCANNING_TOOLS_MID: scanner - medium confidence;</li> <li>IPREP_SCANNING_TOOLS_HIGH: scanner - HIGH confidence;</li> <li>IPREP_ATO_ATTACKERS_LOW: account takeover attack - general confidence;</li> <li>IPREP_ATO_ATTACKERS_MID: account takeover attack - medium confidence;</li> <li>IPREP_ATO_ATTACKERS_HIGH: account takeover attack - HIGH confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_LOW: malicious BOT - general confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_MID: malicious BOT - medium confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_HIGH: malicious BOT - HIGH confidence.</li>.
                     * 
                     */
                    std::vector<BotManagementActionOverrides> GetBotManagementActionOverrides() const;

                    /**
                     * 设置The specific configuration of the IP intelligence library (originally client profile analysis), used to override the default configuration in BaseAction. among them, the Ids in BotManagementActionOverrides can be filled with: <li>IPREP_WEB_AND_DDOS_ATTACKERS_LOW: network attack - general confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_MID: network attack - medium confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_HIGH: network attack - HIGH confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_LOW: network proxy - general confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_MID: network proxy - medium confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_HIGH: network proxy - HIGH confidence;</li> <li>IPREP_SCANNING_TOOLS_LOW: scanner - general confidence;</li> <li>IPREP_SCANNING_TOOLS_MID: scanner - medium confidence;</li> <li>IPREP_SCANNING_TOOLS_HIGH: scanner - HIGH confidence;</li> <li>IPREP_ATO_ATTACKERS_LOW: account takeover attack - general confidence;</li> <li>IPREP_ATO_ATTACKERS_MID: account takeover attack - medium confidence;</li> <li>IPREP_ATO_ATTACKERS_HIGH: account takeover attack - HIGH confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_LOW: malicious BOT - general confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_MID: malicious BOT - medium confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_HIGH: malicious BOT - HIGH confidence.</li>.
                     * @param _botManagementActionOverrides The specific configuration of the IP intelligence library (originally client profile analysis), used to override the default configuration in BaseAction. among them, the Ids in BotManagementActionOverrides can be filled with: <li>IPREP_WEB_AND_DDOS_ATTACKERS_LOW: network attack - general confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_MID: network attack - medium confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_HIGH: network attack - HIGH confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_LOW: network proxy - general confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_MID: network proxy - medium confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_HIGH: network proxy - HIGH confidence;</li> <li>IPREP_SCANNING_TOOLS_LOW: scanner - general confidence;</li> <li>IPREP_SCANNING_TOOLS_MID: scanner - medium confidence;</li> <li>IPREP_SCANNING_TOOLS_HIGH: scanner - HIGH confidence;</li> <li>IPREP_ATO_ATTACKERS_LOW: account takeover attack - general confidence;</li> <li>IPREP_ATO_ATTACKERS_MID: account takeover attack - medium confidence;</li> <li>IPREP_ATO_ATTACKERS_HIGH: account takeover attack - HIGH confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_LOW: malicious BOT - general confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_MID: malicious BOT - medium confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_HIGH: malicious BOT - HIGH confidence.</li>.
                     * 
                     */
                    void SetBotManagementActionOverrides(const std::vector<BotManagementActionOverrides>& _botManagementActionOverrides);

                    /**
                     * 判断参数 BotManagementActionOverrides 是否已赋值
                     * @return BotManagementActionOverrides 是否已赋值
                     * 
                     */
                    bool BotManagementActionOverridesHasBeenSet() const;

                private:

                    /**
                     * Execution action of the IP intelligence library (formerly client profile analysis). SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     */
                    SecurityAction m_baseAction;
                    bool m_baseActionHasBeenSet;

                    /**
                     * The specific configuration of the IP intelligence library (originally client profile analysis), used to override the default configuration in BaseAction. among them, the Ids in BotManagementActionOverrides can be filled with: <li>IPREP_WEB_AND_DDOS_ATTACKERS_LOW: network attack - general confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_MID: network attack - medium confidence;</li> <li>IPREP_WEB_AND_DDOS_ATTACKERS_HIGH: network attack - HIGH confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_LOW: network proxy - general confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_MID: network proxy - medium confidence;</li> <li>IPREP_PROXIES_AND_ANONYMIZERS_HIGH: network proxy - HIGH confidence;</li> <li>IPREP_SCANNING_TOOLS_LOW: scanner - general confidence;</li> <li>IPREP_SCANNING_TOOLS_MID: scanner - medium confidence;</li> <li>IPREP_SCANNING_TOOLS_HIGH: scanner - HIGH confidence;</li> <li>IPREP_ATO_ATTACKERS_LOW: account takeover attack - general confidence;</li> <li>IPREP_ATO_ATTACKERS_MID: account takeover attack - medium confidence;</li> <li>IPREP_ATO_ATTACKERS_HIGH: account takeover attack - HIGH confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_LOW: malicious BOT - general confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_MID: malicious BOT - medium confidence;</li> <li>IPREP_WEB_SCRAPERS_AND_TRAFFIC_BOTS_HIGH: malicious BOT - HIGH confidence.</li>.
                     */
                    std::vector<BotManagementActionOverrides> m_botManagementActionOverrides;
                    bool m_botManagementActionOverridesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATIONGROUP_H_
