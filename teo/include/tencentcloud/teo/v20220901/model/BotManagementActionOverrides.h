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
                * Bot rules specific configuration, used to override the upper layer default configuration.
                */
                class BotManagementActionOverrides : public AbstractModel
                {
                public:
                    BotManagementActionOverrides();
                    ~BotManagementActionOverrides() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific item under Bot rules used to rewrite the configuration content of this single rule. refer to the returned message from the DescribeBotManagedRules API for detailed information corresponding to Ids.
                     * @return Ids Specific item under Bot rules used to rewrite the configuration content of this single rule. refer to the returned message from the DescribeBotManagedRules API for detailed information corresponding to Ids.
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置Specific item under Bot rules used to rewrite the configuration content of this single rule. refer to the returned message from the DescribeBotManagedRules API for detailed information corresponding to Ids.
                     * @param _ids Specific item under Bot rules used to rewrite the configuration content of this single rule. refer to the returned message from the DescribeBotManagedRules API for detailed information corresponding to Ids.
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
                     * 获取Specifies the handling action for Bot rule items in Ids. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: Disabled, disable the specified rule;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: pass (only for Bot basic feature management).</li>.

                     * @return Action Specifies the handling action for Bot rule items in Ids. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: Disabled, disable the specified rule;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: pass (only for Bot basic feature management).</li>.

                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Specifies the handling action for Bot rule items in Ids. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: Disabled, disable the specified rule;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: pass (only for Bot basic feature management).</li>.

                     * @param _action Specifies the handling action for Bot rule items in Ids. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: Disabled, disable the specified rule;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: pass (only for Bot basic feature management).</li>.

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
                     * Specific item under Bot rules used to rewrite the configuration content of this single rule. refer to the returned message from the DescribeBotManagedRules API for detailed information corresponding to Ids.
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Specifies the handling action for Bot rule items in Ids. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li><li>Monitor: observe;</li><li>Disabled: Disabled, disable the specified rule;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li><li>Allow: pass (only for Bot basic feature management).</li>.

                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTACTIONOVERRIDES_H_
