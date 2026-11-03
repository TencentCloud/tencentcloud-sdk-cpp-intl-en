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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTBEHAVIORDETECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTBEHAVIORDETECTION_H_

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
                * Client behavior validation
                */
                class ClientBehaviorDetection : public AbstractModel
                {
                public:
                    ClientBehaviorDetection();
                    ~ClientBehaviorDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Proof-of-work strength. Valid values: <li>low: Low;</li><li>medium: Medium;</li><li>high: High.</li>
                     * @return CryptoChallengeIntensity Proof-of-work strength. Valid values: <li>low: Low;</li><li>medium: Medium;</li><li>high: High.</li>
                     * 
                     */
                    std::string GetCryptoChallengeIntensity() const;

                    /**
                     * 设置Proof-of-work strength. Valid values: <li>low: Low;</li><li>medium: Medium;</li><li>high: High.</li>
                     * @param _cryptoChallengeIntensity Proof-of-work strength. Valid values: <li>low: Low;</li><li>medium: Medium;</li><li>high: High.</li>
                     * 
                     */
                    void SetCryptoChallengeIntensity(const std::string& _cryptoChallengeIntensity);

                    /**
                     * 判断参数 CryptoChallengeIntensity 是否已赋值
                     * @return CryptoChallengeIntensity 是否已赋值
                     * 
                     */
                    bool CryptoChallengeIntensityHasBeenSet() const;

                    /**
                     * 获取Execution mode of client behavior validation. Valid values: <li>0ms: immediately execute;</li><li>100ms: execute after a 100ms delay;</li><li>200ms: execute after a 200ms delay;</li><li>300ms: execute after a 300ms delay;</li><li>400ms: execute after a 400ms delay;</li><li>500ms: execute after a 500ms delay;</li><li>600ms: execute after a 600ms delay;</li><li>700ms: execute after a 700ms delay;</li><li>800ms: execute after an 800ms delay;</li><li>900ms: execute after a 900ms delay;</li><li>1000ms: execute after a 1000ms delay.</li>
                     * @return CryptoChallengeDelayBefore Execution mode of client behavior validation. Valid values: <li>0ms: immediately execute;</li><li>100ms: execute after a 100ms delay;</li><li>200ms: execute after a 200ms delay;</li><li>300ms: execute after a 300ms delay;</li><li>400ms: execute after a 400ms delay;</li><li>500ms: execute after a 500ms delay;</li><li>600ms: execute after a 600ms delay;</li><li>700ms: execute after a 700ms delay;</li><li>800ms: execute after an 800ms delay;</li><li>900ms: execute after a 900ms delay;</li><li>1000ms: execute after a 1000ms delay.</li>
                     * 
                     */
                    std::string GetCryptoChallengeDelayBefore() const;

                    /**
                     * 设置Execution mode of client behavior validation. Valid values: <li>0ms: immediately execute;</li><li>100ms: execute after a 100ms delay;</li><li>200ms: execute after a 200ms delay;</li><li>300ms: execute after a 300ms delay;</li><li>400ms: execute after a 400ms delay;</li><li>500ms: execute after a 500ms delay;</li><li>600ms: execute after a 600ms delay;</li><li>700ms: execute after a 700ms delay;</li><li>800ms: execute after an 800ms delay;</li><li>900ms: execute after a 900ms delay;</li><li>1000ms: execute after a 1000ms delay.</li>
                     * @param _cryptoChallengeDelayBefore Execution mode of client behavior validation. Valid values: <li>0ms: immediately execute;</li><li>100ms: execute after a 100ms delay;</li><li>200ms: execute after a 200ms delay;</li><li>300ms: execute after a 300ms delay;</li><li>400ms: execute after a 400ms delay;</li><li>500ms: execute after a 500ms delay;</li><li>600ms: execute after a 600ms delay;</li><li>700ms: execute after a 700ms delay;</li><li>800ms: execute after an 800ms delay;</li><li>900ms: execute after a 900ms delay;</li><li>1000ms: execute after a 1000ms delay.</li>
                     * 
                     */
                    void SetCryptoChallengeDelayBefore(const std::string& _cryptoChallengeDelayBefore);

                    /**
                     * 判断参数 CryptoChallengeDelayBefore 是否已赋值
                     * @return CryptoChallengeDelayBefore 是否已赋值
                     * 
                     */
                    bool CryptoChallengeDelayBeforeHasBeenSet() const;

                    /**
                     * 获取Time window for trigger threshold statistics. Valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>
                     * @return MaxChallengeCountInterval Time window for trigger threshold statistics. Valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>
                     * 
                     */
                    std::string GetMaxChallengeCountInterval() const;

                    /**
                     * 设置Time window for trigger threshold statistics. Valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>
                     * @param _maxChallengeCountInterval Time window for trigger threshold statistics. Valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>
                     * 
                     */
                    void SetMaxChallengeCountInterval(const std::string& _maxChallengeCountInterval);

                    /**
                     * 判断参数 MaxChallengeCountInterval 是否已赋值
                     * @return MaxChallengeCountInterval 是否已赋值
                     * 
                     */
                    bool MaxChallengeCountIntervalHasBeenSet() const;

                    /**
                     * 获取Cumulative count of trigger threshold statistics. Value range: 1-100000000.
                     * @return MaxChallengeCountThreshold Cumulative count of trigger threshold statistics. Value range: 1-100000000.
                     * 
                     */
                    int64_t GetMaxChallengeCountThreshold() const;

                    /**
                     * 设置Cumulative count of trigger threshold statistics. Value range: 1-100000000.
                     * @param _maxChallengeCountThreshold Cumulative count of trigger threshold statistics. Value range: 1-100000000.
                     * 
                     */
                    void SetMaxChallengeCountThreshold(const int64_t& _maxChallengeCountThreshold);

                    /**
                     * 判断参数 MaxChallengeCountThreshold 是否已赋值
                     * @return MaxChallengeCountThreshold 是否已赋值
                     * 
                     */
                    bool MaxChallengeCountThresholdHasBeenSet() const;

                    /**
                     * 获取Execution action when client-side JavaScript is not enabled (test not completed). Supported values for SecurityAction Name: <li>Deny: block. DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @return ChallengeNotFinishedAction Execution action when client-side JavaScript is not enabled (test not completed). Supported values for SecurityAction Name: <li>Deny: block. DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    SecurityAction GetChallengeNotFinishedAction() const;

                    /**
                     * 设置Execution action when client-side JavaScript is not enabled (test not completed). Supported values for SecurityAction Name: <li>Deny: block. DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @param _challengeNotFinishedAction Execution action when client-side JavaScript is not enabled (test not completed). Supported values for SecurityAction Name: <li>Deny: block. DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    void SetChallengeNotFinishedAction(const SecurityAction& _challengeNotFinishedAction);

                    /**
                     * 判断参数 ChallengeNotFinishedAction 是否已赋值
                     * @return ChallengeNotFinishedAction 是否已赋值
                     * 
                     */
                    bool ChallengeNotFinishedActionHasBeenSet() const;

                    /**
                     * 获取Execution action for client-side detection timeout. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @return ChallengeTimeoutAction Execution action for client-side detection timeout. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    SecurityAction GetChallengeTimeoutAction() const;

                    /**
                     * 设置Execution action for client-side detection timeout. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @param _challengeTimeoutAction Execution action for client-side detection timeout. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    void SetChallengeTimeoutAction(const SecurityAction& _challengeTimeoutAction);

                    /**
                     * 判断参数 ChallengeTimeoutAction 是否已赋值
                     * @return ChallengeTimeoutAction 是否已赋值
                     * 
                     */
                    bool ChallengeTimeoutActionHasBeenSet() const;

                    /**
                     * 获取Execution action of the Bot client. Supported values of Name in SecurityAction: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>
                     * @return BotClientAction Execution action of the Bot client. Supported values of Name in SecurityAction: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>
                     * 
                     */
                    SecurityAction GetBotClientAction() const;

                    /**
                     * 设置Execution action of the Bot client. Supported values of Name in SecurityAction: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>
                     * @param _botClientAction Execution action of the Bot client. Supported values of Name in SecurityAction: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>
                     * 
                     */
                    void SetBotClientAction(const SecurityAction& _botClientAction);

                    /**
                     * 判断参数 BotClientAction 是否已赋值
                     * @return BotClientAction 是否已赋值
                     * 
                     */
                    bool BotClientActionHasBeenSet() const;

                private:

                    /**
                     * Proof-of-work strength. Valid values: <li>low: Low;</li><li>medium: Medium;</li><li>high: High.</li>
                     */
                    std::string m_cryptoChallengeIntensity;
                    bool m_cryptoChallengeIntensityHasBeenSet;

                    /**
                     * Execution mode of client behavior validation. Valid values: <li>0ms: immediately execute;</li><li>100ms: execute after a 100ms delay;</li><li>200ms: execute after a 200ms delay;</li><li>300ms: execute after a 300ms delay;</li><li>400ms: execute after a 400ms delay;</li><li>500ms: execute after a 500ms delay;</li><li>600ms: execute after a 600ms delay;</li><li>700ms: execute after a 700ms delay;</li><li>800ms: execute after an 800ms delay;</li><li>900ms: execute after a 900ms delay;</li><li>1000ms: execute after a 1000ms delay.</li>
                     */
                    std::string m_cryptoChallengeDelayBefore;
                    bool m_cryptoChallengeDelayBeforeHasBeenSet;

                    /**
                     * Time window for trigger threshold statistics. Valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>
                     */
                    std::string m_maxChallengeCountInterval;
                    bool m_maxChallengeCountIntervalHasBeenSet;

                    /**
                     * Cumulative count of trigger threshold statistics. Value range: 1-100000000.
                     */
                    int64_t m_maxChallengeCountThreshold;
                    bool m_maxChallengeCountThresholdHasBeenSet;

                    /**
                     * Execution action when client-side JavaScript is not enabled (test not completed). Supported values for SecurityAction Name: <li>Deny: block. DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     */
                    SecurityAction m_challengeNotFinishedAction;
                    bool m_challengeNotFinishedActionHasBeenSet;

                    /**
                     * Execution action for client-side detection timeout. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     */
                    SecurityAction m_challengeTimeoutAction;
                    bool m_challengeTimeoutActionHasBeenSet;

                    /**
                     * Execution action of the Bot client. Supported values of Name in SecurityAction: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>
                     */
                    SecurityAction m_botClientAction;
                    bool m_botClientActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTBEHAVIORDETECTION_H_
