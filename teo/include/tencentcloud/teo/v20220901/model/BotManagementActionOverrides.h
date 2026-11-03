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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTACTIONOVERRIDES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTACTIONOVERRIDES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Configuration of a Bot rule item, used to overwrite the upper-layer default configuration.
                */
                class BotManagementActionOverrides : public AbstractModel
                {
                public:
                    BotManagementActionOverrides();
                    ~BotManagementActionOverrides() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific item under the Bot rule group, used to rewrite the configuration content of this individual rule item. For detailed information corresponding to the Ids, see the returned message of the DescribeBotManagedRules API.
                     * @return Ids Specific item under the Bot rule group, used to rewrite the configuration content of this individual rule item. For detailed information corresponding to the Ids, see the returned message of the DescribeBotManagedRules API.
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置Specific item under the Bot rule group, used to rewrite the configuration content of this individual rule item. For detailed information corresponding to the Ids, see the returned message of the DescribeBotManagedRules API.
                     * @param _ids Specific item under the Bot rule group, used to rewrite the configuration content of this individual rule item. For detailed information corresponding to the Ids, see the returned message of the DescribeBotManagedRules API.
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Handling action for the Bot rule item specified in Ids. Supported values for SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (only for basic feature management of Bot).</li>

                     * @return Action Handling action for the Bot rule item specified in Ids. Supported values for SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (only for basic feature management of Bot).</li>

                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Handling action for the Bot rule item specified in Ids. Supported values for SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (only for basic feature management of Bot).</li>

                     * @param _action Handling action for the Bot rule item specified in Ids. Supported values for SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (only for basic feature management of Bot).</li>

                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Specific item under the Bot rule group, used to rewrite the configuration content of this individual rule item. For detailed information corresponding to the Ids, see the returned message of the DescribeBotManagedRules API.
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Handling action for the Bot rule item specified in Ids. Supported values for SecurityAction Name: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: not enabled, disable the specified rule;</li><li>Challenge: challenge. ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: allow (only for basic feature management of Bot).</li>

                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTACTIONOVERRIDES_H_
