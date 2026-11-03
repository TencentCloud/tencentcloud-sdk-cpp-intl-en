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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYWEIGHTEDACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYWEIGHTEDACTION_H_

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
                * SecurityAction with weight assignment.
                */
                class SecurityWeightedAction : public AbstractModel
                {
                public:
                    SecurityWeightedAction();
                    ~SecurityWeightedAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Handling method of the Bot custom rule. Valid values: <li>Allow: Allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: Monitor;</li><li>Challenge: Challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to a URL.</li>
                     * @return SecurityAction Handling method of the Bot custom rule. Valid values: <li>Allow: Allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: Monitor;</li><li>Challenge: Challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to a URL.</li>
                     * 
                     */
                    SecurityAction GetSecurityAction() const;

                    /**
                     * 设置Handling method of the Bot custom rule. Valid values: <li>Allow: Allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: Monitor;</li><li>Challenge: Challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to a URL.</li>
                     * @param _securityAction Handling method of the Bot custom rule. Valid values: <li>Allow: Allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: Monitor;</li><li>Challenge: Challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to a URL.</li>
                     * 
                     */
                    void SetSecurityAction(const SecurityAction& _securityAction);

                    /**
                     * 判断参数 SecurityAction 是否已赋值
                     * @return SecurityAction 是否已赋值
                     * 
                     */
                    bool SecurityActionHasBeenSet() const;

                    /**
                     * 获取Weight of the current SecurityAction. Only multiples of 10 from 10 to 100 are supported. The sum of all Weight parameters must equal 100.
                     * @return Weight Weight of the current SecurityAction. Only multiples of 10 from 10 to 100 are supported. The sum of all Weight parameters must equal 100.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight of the current SecurityAction. Only multiples of 10 from 10 to 100 are supported. The sum of all Weight parameters must equal 100.
                     * @param _weight Weight of the current SecurityAction. Only multiples of 10 from 10 to 100 are supported. The sum of all Weight parameters must equal 100.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Handling method of the Bot custom rule. Valid values: <li>Allow: Allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: Monitor;</li><li>Challenge: Challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to a URL.</li>
                     */
                    SecurityAction m_securityAction;
                    bool m_securityActionHasBeenSet;

                    /**
                     * Weight of the current SecurityAction. Only multiples of 10 from 10 to 100 are supported. The sum of all Weight parameters must equal 100.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYWEIGHTEDACTION_H_
