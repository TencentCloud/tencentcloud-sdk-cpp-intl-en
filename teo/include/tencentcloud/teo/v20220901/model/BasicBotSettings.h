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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BASICBOTSETTINGS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BASICBOTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SourceIDC.h>
#include <tencentcloud/teo/v20220901/model/SearchEngineBots.h>
#include <tencentcloud/teo/v20220901/model/KnownBotCategories.h>
#include <tencentcloud/teo/v20220901/model/IPReputation.h>
#include <tencentcloud/teo/v20220901/model/BotIntelligence.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot management basic configuration takes effect for all domains with policy association. CustomRules can be used to customize.
                */
                class BasicBotSettings : public AbstractModel
                {
                public:
                    BasicBotSettings();
                    ~BasicBotSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client IP source IDC configuration, used for handling access requests from client ips in idcs (data centers). such source requests are not directly accessed by mobile terminals or browser-side.
                     * @return SourceIDC Client IP source IDC configuration, used for handling access requests from client ips in idcs (data centers). such source requests are not directly accessed by mobile terminals or browser-side.
                     * 
                     */
                    SourceIDC GetSourceIDC() const;

                    /**
                     * 设置Client IP source IDC configuration, used for handling access requests from client ips in idcs (data centers). such source requests are not directly accessed by mobile terminals or browser-side.
                     * @param _sourceIDC Client IP source IDC configuration, used for handling access requests from client ips in idcs (data centers). such source requests are not directly accessed by mobile terminals or browser-side.
                     * 
                     */
                    void SetSourceIDC(const SourceIDC& _sourceIDC);

                    /**
                     * 判断参数 SourceIDC 是否已赋值
                     * @return SourceIDC 是否已赋值
                     * 
                     */
                    bool SourceIDCHasBeenSet() const;

                    /**
                     * 获取Search engine crawler configuration, used to handle requests from search engine crawlers. the IP, User-Agent, or rDNS results of such requests match known search engine crawlers.
                     * @return SearchEngineBots Search engine crawler configuration, used to handle requests from search engine crawlers. the IP, User-Agent, or rDNS results of such requests match known search engine crawlers.
                     * 
                     */
                    SearchEngineBots GetSearchEngineBots() const;

                    /**
                     * 设置Search engine crawler configuration, used to handle requests from search engine crawlers. the IP, User-Agent, or rDNS results of such requests match known search engine crawlers.
                     * @param _searchEngineBots Search engine crawler configuration, used to handle requests from search engine crawlers. the IP, User-Agent, or rDNS results of such requests match known search engine crawlers.
                     * 
                     */
                    void SetSearchEngineBots(const SearchEngineBots& _searchEngineBots);

                    /**
                     * 判断参数 SearchEngineBots 是否已赋值
                     * @return SearchEngineBots 是否已赋值
                     * 
                     */
                    bool SearchEngineBotsHasBeenSet() const;

                    /**
                     * 获取Commercial or open-source tool UA feature configuration (original UA feature rule), used to handle access requests from known commercial or open-source tools. the User-Agent header of such requests complies with known commercial or open-source tool features.
                     * @return KnownBotCategories Commercial or open-source tool UA feature configuration (original UA feature rule), used to handle access requests from known commercial or open-source tools. the User-Agent header of such requests complies with known commercial or open-source tool features.
                     * 
                     */
                    KnownBotCategories GetKnownBotCategories() const;

                    /**
                     * 设置Commercial or open-source tool UA feature configuration (original UA feature rule), used to handle access requests from known commercial or open-source tools. the User-Agent header of such requests complies with known commercial or open-source tool features.
                     * @param _knownBotCategories Commercial or open-source tool UA feature configuration (original UA feature rule), used to handle access requests from known commercial or open-source tools. the User-Agent header of such requests complies with known commercial or open-source tool features.
                     * 
                     */
                    void SetKnownBotCategories(const KnownBotCategories& _knownBotCategories);

                    /**
                     * 判断参数 KnownBotCategories 是否已赋值
                     * @return KnownBotCategories 是否已赋值
                     * 
                     */
                    bool KnownBotCategoriesHasBeenSet() const;

                    /**
                     * 获取Threat intelligence database (originally client profile analysis) configuration, used for handling client ips with specific risk characteristics in recent access behavior.
                     * @return IPReputation Threat intelligence database (originally client profile analysis) configuration, used for handling client ips with specific risk characteristics in recent access behavior.
                     * 
                     */
                    IPReputation GetIPReputation() const;

                    /**
                     * 设置Threat intelligence database (originally client profile analysis) configuration, used for handling client ips with specific risk characteristics in recent access behavior.
                     * @param _iPReputation Threat intelligence database (originally client profile analysis) configuration, used for handling client ips with specific risk characteristics in recent access behavior.
                     * 
                     */
                    void SetIPReputation(const IPReputation& _iPReputation);

                    /**
                     * 判断参数 IPReputation 是否已赋值
                     * @return IPReputation 是否已赋值
                     * 
                     */
                    bool IPReputationHasBeenSet() const;

                    /**
                     * 获取Specifies the configuration for Bot intelligent analysis.
                     * @return BotIntelligence Specifies the configuration for Bot intelligent analysis.
                     * 
                     */
                    BotIntelligence GetBotIntelligence() const;

                    /**
                     * 设置Specifies the configuration for Bot intelligent analysis.
                     * @param _botIntelligence Specifies the configuration for Bot intelligent analysis.
                     * 
                     */
                    void SetBotIntelligence(const BotIntelligence& _botIntelligence);

                    /**
                     * 判断参数 BotIntelligence 是否已赋值
                     * @return BotIntelligence 是否已赋值
                     * 
                     */
                    bool BotIntelligenceHasBeenSet() const;

                private:

                    /**
                     * Client IP source IDC configuration, used for handling access requests from client ips in idcs (data centers). such source requests are not directly accessed by mobile terminals or browser-side.
                     */
                    SourceIDC m_sourceIDC;
                    bool m_sourceIDCHasBeenSet;

                    /**
                     * Search engine crawler configuration, used to handle requests from search engine crawlers. the IP, User-Agent, or rDNS results of such requests match known search engine crawlers.
                     */
                    SearchEngineBots m_searchEngineBots;
                    bool m_searchEngineBotsHasBeenSet;

                    /**
                     * Commercial or open-source tool UA feature configuration (original UA feature rule), used to handle access requests from known commercial or open-source tools. the User-Agent header of such requests complies with known commercial or open-source tool features.
                     */
                    KnownBotCategories m_knownBotCategories;
                    bool m_knownBotCategoriesHasBeenSet;

                    /**
                     * Threat intelligence database (originally client profile analysis) configuration, used for handling client ips with specific risk characteristics in recent access behavior.
                     */
                    IPReputation m_iPReputation;
                    bool m_iPReputationHasBeenSet;

                    /**
                     * Specifies the configuration for Bot intelligent analysis.
                     */
                    BotIntelligence m_botIntelligence;
                    bool m_botIntelligenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BASICBOTSETTINGS_H_
