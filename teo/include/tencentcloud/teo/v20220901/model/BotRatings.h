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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTRATINGS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTRATINGS_H_

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
                * Based on client and request features, the request source is divided into human request, valid Bot request, suspected Bot request, and high-risk Bot request, with request handling options provided.
                */
                class BotRatings : public AbstractModel
                {
                public:
                    BotRatings();
                    ~BotRatings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution action for malicious Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @return HighRiskBotRequestsAction Execution action for malicious Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    SecurityAction GetHighRiskBotRequestsAction() const;

                    /**
                     * 设置Execution action for malicious Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @param _highRiskBotRequestsAction Execution action for malicious Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    void SetHighRiskBotRequestsAction(const SecurityAction& _highRiskBotRequestsAction);

                    /**
                     * 判断参数 HighRiskBotRequestsAction 是否已赋值
                     * @return HighRiskBotRequestsAction 是否已赋值
                     * 
                     */
                    bool HighRiskBotRequestsActionHasBeenSet() const;

                    /**
                     * 获取The execution action for suspected Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @return LikelyBotRequestsAction The execution action for suspected Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    SecurityAction GetLikelyBotRequestsAction() const;

                    /**
                     * 设置The execution action for suspected Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @param _likelyBotRequestsAction The execution action for suspected Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    void SetLikelyBotRequestsAction(const SecurityAction& _likelyBotRequestsAction);

                    /**
                     * 判断参数 LikelyBotRequestsAction 是否已赋值
                     * @return LikelyBotRequestsAction 是否已赋值
                     * 
                     */
                    bool LikelyBotRequestsActionHasBeenSet() const;

                    /**
                     * 获取Execution action for friendly Bot request. SecurityAction Name parameter supports: <li>Deny: block;</li><li>Monitor: observe;</li><li>Allow: pass;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @return VerifiedBotRequestsAction Execution action for friendly Bot request. SecurityAction Name parameter supports: <li>Deny: block;</li><li>Monitor: observe;</li><li>Allow: pass;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    SecurityAction GetVerifiedBotRequestsAction() const;

                    /**
                     * 设置Execution action for friendly Bot request. SecurityAction Name parameter supports: <li>Deny: block;</li><li>Monitor: observe;</li><li>Allow: pass;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * @param _verifiedBotRequestsAction Execution action for friendly Bot request. SecurityAction Name parameter supports: <li>Deny: block;</li><li>Monitor: observe;</li><li>Allow: pass;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     * 
                     */
                    void SetVerifiedBotRequestsAction(const SecurityAction& _verifiedBotRequestsAction);

                    /**
                     * 判断参数 VerifiedBotRequestsAction 是否已赋值
                     * @return VerifiedBotRequestsAction 是否已赋值
                     * 
                     */
                    bool VerifiedBotRequestsActionHasBeenSet() const;

                    /**
                     * 获取Execution action for a normal Bot request. valid values for the Name parameter in SecurityAction: <li>Allow: pass.</li>.
                     * @return HumanRequestsAction Execution action for a normal Bot request. valid values for the Name parameter in SecurityAction: <li>Allow: pass.</li>.
                     * 
                     */
                    SecurityAction GetHumanRequestsAction() const;

                    /**
                     * 设置Execution action for a normal Bot request. valid values for the Name parameter in SecurityAction: <li>Allow: pass.</li>.
                     * @param _humanRequestsAction Execution action for a normal Bot request. valid values for the Name parameter in SecurityAction: <li>Allow: pass.</li>.
                     * 
                     */
                    void SetHumanRequestsAction(const SecurityAction& _humanRequestsAction);

                    /**
                     * 判断参数 HumanRequestsAction 是否已赋值
                     * @return HumanRequestsAction 是否已赋值
                     * 
                     */
                    bool HumanRequestsActionHasBeenSet() const;

                private:

                    /**
                     * Execution action for malicious Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     */
                    SecurityAction m_highRiskBotRequestsAction;
                    bool m_highRiskBotRequestsActionHasBeenSet;

                    /**
                     * The execution action for suspected Bot requests. valid values for the Name parameter in SecurityAction: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Allow: pass;</li> <li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     */
                    SecurityAction m_likelyBotRequestsAction;
                    bool m_likelyBotRequestsActionHasBeenSet;

                    /**
                     * Execution action for friendly Bot request. SecurityAction Name parameter supports: <li>Deny: block;</li><li>Monitor: observe;</li><li>Allow: pass;</li><li>Challenge: Challenge, where ChallengeOption in ChallengeActionParameters supports JSChallenge and ManagedChallenge.</li>.
                     */
                    SecurityAction m_verifiedBotRequestsAction;
                    bool m_verifiedBotRequestsActionHasBeenSet;

                    /**
                     * Execution action for a normal Bot request. valid values for the Name parameter in SecurityAction: <li>Allow: pass.</li>.
                     */
                    SecurityAction m_humanRequestsAction;
                    bool m_humanRequestsActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTRATINGS_H_
