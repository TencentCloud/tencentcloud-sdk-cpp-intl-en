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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHALLENGEACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHALLENGEACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security Challenge additional parameter.
                */
                class ChallengeActionParameters : public AbstractModel
                {
                public:
                    ChallengeActionParameters();
                    ~ChallengeActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Safe execution challenge actions. valid values: <li> InterstitialChallenge: interstitial challenge;</li> <li> InlineChallenge: embedded challenge;</li> <li> JSChallenge: JavaScript challenge;</li> <li> ManagedChallenge: managed challenge.</li>.
                     * @return ChallengeOption Safe execution challenge actions. valid values: <li> InterstitialChallenge: interstitial challenge;</li> <li> InlineChallenge: embedded challenge;</li> <li> JSChallenge: JavaScript challenge;</li> <li> ManagedChallenge: managed challenge.</li>.
                     * 
                     */
                    std::string GetChallengeOption() const;

                    /**
                     * 设置Safe execution challenge actions. valid values: <li> InterstitialChallenge: interstitial challenge;</li> <li> InlineChallenge: embedded challenge;</li> <li> JSChallenge: JavaScript challenge;</li> <li> ManagedChallenge: managed challenge.</li>.
                     * @param _challengeOption Safe execution challenge actions. valid values: <li> InterstitialChallenge: interstitial challenge;</li> <li> InlineChallenge: embedded challenge;</li> <li> JSChallenge: JavaScript challenge;</li> <li> ManagedChallenge: managed challenge.</li>.
                     * 
                     */
                    void SetChallengeOption(const std::string& _challengeOption);

                    /**
                     * 判断参数 ChallengeOption 是否已赋值
                     * @return ChallengeOption 是否已赋值
                     * 
                     */
                    bool ChallengeOptionHasBeenSet() const;

                    /**
                     * 获取Specifies the time interval for challenge repetition. this field is required when Name is InterstitialChallenge/InlineChallenge. default value is 300s. supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li>.

                     * @return Interval Specifies the time interval for challenge repetition. this field is required when Name is InterstitialChallenge/InlineChallenge. default value is 300s. supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li>.

                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Specifies the time interval for challenge repetition. this field is required when Name is InterstitialChallenge/InlineChallenge. default value is 300s. supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li>.

                     * @param _interval Specifies the time interval for challenge repetition. this field is required when Name is InterstitialChallenge/InlineChallenge. default value is 300s. supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li>.

                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Client authentication method ID. this field is required when Name is InterstitialChallenge/InlineChallenge.
                     * @return AttesterId Client authentication method ID. this field is required when Name is InterstitialChallenge/InlineChallenge.
                     * 
                     */
                    std::string GetAttesterId() const;

                    /**
                     * 设置Client authentication method ID. this field is required when Name is InterstitialChallenge/InlineChallenge.
                     * @param _attesterId Client authentication method ID. this field is required when Name is InterstitialChallenge/InlineChallenge.
                     * 
                     */
                    void SetAttesterId(const std::string& _attesterId);

                    /**
                     * 判断参数 AttesterId 是否已赋值
                     * @return AttesterId 是否已赋值
                     * 
                     */
                    bool AttesterIdHasBeenSet() const;

                private:

                    /**
                     * Safe execution challenge actions. valid values: <li> InterstitialChallenge: interstitial challenge;</li> <li> InlineChallenge: embedded challenge;</li> <li> JSChallenge: JavaScript challenge;</li> <li> ManagedChallenge: managed challenge.</li>.
                     */
                    std::string m_challengeOption;
                    bool m_challengeOptionHasBeenSet;

                    /**
                     * Specifies the time interval for challenge repetition. this field is required when Name is InterstitialChallenge/InlineChallenge. default value is 300s. supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li>.

                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Client authentication method ID. this field is required when Name is InterstitialChallenge/InlineChallenge.
                     */
                    std::string m_attesterId;
                    bool m_attesterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHALLENGEACTIONPARAMETERS_H_
