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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SOURCEIDC_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SOURCEIDC_H_

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
                * Specifies the specific content of IDC rule configuration.
                */
                class SourceIDC : public AbstractModel
                {
                public:
                    SourceIDC();
                    ~SourceIDC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Handling method for requests from the specified IDC. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li> <li>Allow: pass (to be deprecated).</li>.
                     * @return BaseAction Handling method for requests from the specified IDC. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li> <li>Allow: pass (to be deprecated).</li>.
                     * 
                     */
                    SecurityAction GetBaseAction() const;

                    /**
                     * 设置Handling method for requests from the specified IDC. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li> <li>Allow: pass (to be deprecated).</li>.
                     * @param _baseAction Handling method for requests from the specified IDC. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li> <li>Allow: pass (to be deprecated).</li>.
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
                     * 获取Specifies the handling method for the specified id request.
                     * @return BotManagementActionOverrides Specifies the handling method for the specified id request.
                     * 
                     */
                    std::vector<BotManagementActionOverrides> GetBotManagementActionOverrides() const;

                    /**
                     * 设置Specifies the handling method for the specified id request.
                     * @param _botManagementActionOverrides Specifies the handling method for the specified id request.
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
                     * Handling method for requests from the specified IDC. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Disabled: not enabled, disable specified rule;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge;</li> <li>Allow: pass (to be deprecated).</li>.
                     */
                    SecurityAction m_baseAction;
                    bool m_baseActionHasBeenSet;

                    /**
                     * Specifies the handling method for the specified id request.
                     */
                    std::vector<BotManagementActionOverrides> m_botManagementActionOverrides;
                    bool m_botManagementActionOverridesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SOURCEIDC_H_
