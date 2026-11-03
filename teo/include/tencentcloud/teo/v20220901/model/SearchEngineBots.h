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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SEARCHENGINEBOTS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SEARCHENGINEBOTS_H_

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
                * Search engine rule configuration.
                */
                class SearchEngineBots : public AbstractModel
                {
                public:
                    SearchEngineBots();
                    ~SearchEngineBots() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution action for requests from search engine crawlers. Supported values of SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (to be deprecated).</li>
                     * @return BaseAction Execution action for requests from search engine crawlers. Supported values of SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (to be deprecated).</li>
                     * 
                     */
                    SecurityAction GetBaseAction() const;

                    /**
                     * 设置Execution action for requests from search engine crawlers. Supported values of SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (to be deprecated).</li>
                     * @param _baseAction Execution action for requests from search engine crawlers. Supported values of SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (to be deprecated).</li>
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
                     * 获取Specify the handling method for search engine crawler requests.
                     * @return BotManagementActionOverrides Specify the handling method for search engine crawler requests.
                     * 
                     */
                    std::vector<BotManagementActionOverrides> GetBotManagementActionOverrides() const;

                    /**
                     * 设置Specify the handling method for search engine crawler requests.
                     * @param _botManagementActionOverrides Specify the handling method for search engine crawler requests.
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
                     * Execution action for requests from search engine crawlers. Supported values of SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (to be deprecated).</li>
                     */
                    SecurityAction m_baseAction;
                    bool m_baseActionHasBeenSet;

                    /**
                     * Specify the handling method for search engine crawler requests.
                     */
                    std::vector<BotManagementActionOverrides> m_botManagementActionOverrides;
                    bool m_botManagementActionOverridesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SEARCHENGINEBOTS_H_
