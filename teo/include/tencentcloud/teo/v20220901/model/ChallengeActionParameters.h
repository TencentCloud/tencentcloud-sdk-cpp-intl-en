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
                * Additional parameter for the safe execution action when it is a challenge.

This parameter is used to specify the extra handling action taken by the system when a security rule is hit and a challenge action is executed.
Challenge disposal actions are segmented through ChallengeOption. Different challenge types correspond to different interaction forms and parameter requirements. The system will bring the corresponding parameter configuration into effect according to the selected challenge type.
ChallengeActionParameters supports the following challenge disposition types: <li>Interstitial challenge: responds with a new page and runs the authentication mechanism within the new page. The corresponding ChallengeOption value is InterstitialChallenge.</li><li>Inline challenge: responds with an SDK challenge. The corresponding ChallengeOption value is InlineChallenge.</li><li>JavaScript challenge: invisible verification in the browser. The browser automatically performs verification and shows the requested resource. The corresponding ChallengeOption value is JSChallenge.</li><li>Managed challenge: responds with a redirect page containing a JavaScript program, used for verification of the browser runtime environment. The corresponding ChallengeOption value is ManagedChallenge.</li>
                */
                class ChallengeActionParameters : public AbstractModel
                {
                public:
                    ChallengeActionParameters();
                    ~ChallengeActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Specific challenge action for safe execution.</p><p>Enumeration values:</p><ul><li>InterstitialChallenge: Interstitial challenge;</li><li>InlineChallenge: Embedded challenge (SDK challenge);</li><li>ManagedChallenge: Managed challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure;</li><li>JSChallenge: JavaScript challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure.</li></ul>
                     * @return ChallengeOption <p>Specific challenge action for safe execution.</p><p>Enumeration values:</p><ul><li>InterstitialChallenge: Interstitial challenge;</li><li>InlineChallenge: Embedded challenge (SDK challenge);</li><li>ManagedChallenge: Managed challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure;</li><li>JSChallenge: JavaScript challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure.</li></ul>
                     * 
                     */
                    std::string GetChallengeOption() const;

                    /**
                     * 设置<p>Specific challenge action for safe execution.</p><p>Enumeration values:</p><ul><li>InterstitialChallenge: Interstitial challenge;</li><li>InlineChallenge: Embedded challenge (SDK challenge);</li><li>ManagedChallenge: Managed challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure;</li><li>JSChallenge: JavaScript challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure.</li></ul>
                     * @param _challengeOption <p>Specific challenge action for safe execution.</p><p>Enumeration values:</p><ul><li>InterstitialChallenge: Interstitial challenge;</li><li>InlineChallenge: Embedded challenge (SDK challenge);</li><li>ManagedChallenge: Managed challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure;</li><li>JSChallenge: JavaScript challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure.</li></ul>
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
                     * 获取<p>Time interval for repeating the challenge. This field is required when ChallengeOption is InterstitialChallenge/InlineChallenge. Default value: 300s. Supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li></p>
                     * @return Interval <p>Time interval for repeating the challenge. This field is required when ChallengeOption is InterstitialChallenge/InlineChallenge. Default value: 300s. Supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li></p>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>Time interval for repeating the challenge. This field is required when ChallengeOption is InterstitialChallenge/InlineChallenge. Default value: 300s. Supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li></p>
                     * @param _interval <p>Time interval for repeating the challenge. This field is required when ChallengeOption is InterstitialChallenge/InlineChallenge. Default value: 300s. Supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li></p>
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
                     * 获取<p>Client authentication method ID. This field is required when Name is InterstitialChallenge/InlineChallenge.</p>
                     * @return AttesterId <p>Client authentication method ID. This field is required when Name is InterstitialChallenge/InlineChallenge.</p>
                     * 
                     */
                    std::string GetAttesterId() const;

                    /**
                     * 设置<p>Client authentication method ID. This field is required when Name is InterstitialChallenge/InlineChallenge.</p>
                     * @param _attesterId <p>Client authentication method ID. This field is required when Name is InterstitialChallenge/InlineChallenge.</p>
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
                     * <p>Specific challenge action for safe execution.</p><p>Enumeration values:</p><ul><li>InterstitialChallenge: Interstitial challenge;</li><li>InlineChallenge: Embedded challenge (SDK challenge);</li><li>ManagedChallenge: Managed challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure;</li><li>JSChallenge: JavaScript challenge. Applicable only to HTML web pages directly accessed by users through a browser. API interfaces, XHR/AJAX asynchronous requests within web pages, mobile apps, command line tools, and other scenarios cannot complete the verification. Do not configure.</li></ul>
                     */
                    std::string m_challengeOption;
                    bool m_challengeOptionHasBeenSet;

                    /**
                     * <p>Time interval for repeating the challenge. This field is required when ChallengeOption is InterstitialChallenge/InlineChallenge. Default value: 300s. Supported units: <li>s: second, value ranges from 1 to 60;</li><li>m: minute, value ranges from 1 to 60;</li><li>h: hour, value ranges from 1 to 24.</li></p>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Client authentication method ID. This field is required when Name is InterstitialChallenge/InlineChallenge.</p>
                     */
                    std::string m_attesterId;
                    bool m_attesterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHALLENGEACTIONPARAMETERS_H_
