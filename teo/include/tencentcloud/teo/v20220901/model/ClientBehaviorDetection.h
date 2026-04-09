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
                * Client behavior validation.
                */
                class ClientBehaviorDetection : public AbstractModel
                {
                public:
                    ClientBehaviorDetection();
                    ~ClientBehaviorDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the proof-of-work strength. valid values: <li>low: low;</li><li>medium: medium;</li><li>high: high.</li>.
                     * @return CryptoChallengeIntensity Specifies the proof-of-work strength. valid values: <li>low: low;</li><li>medium: medium;</li><li>high: high.</li>.
                     * 
                     */
                    std::string GetCryptoChallengeIntensity() const;

                    /**
                     * 设置Specifies the proof-of-work strength. valid values: <li>low: low;</li><li>medium: medium;</li><li>high: high.</li>.
                     * @param _cryptoChallengeIntensity Specifies the proof-of-work strength. valid values: <li>low: low;</li><li>medium: medium;</li><li>high: high.</li>.
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
                     * 获取Specifies the execution mode for client behavior verification. valid values: <li>0ms: immediate execution;</li> <li>100ms: delay 100ms execution;</li> <li>200ms: delay 200ms execution;</li> <li>300ms: delay 300ms execution;</li> <li>400ms: delay 400ms execution;</li> <li>500ms: delay 500ms execution;</li> <li>600ms: delay 600ms execution;</li> <li>700ms: delay 700ms execution;</li> <li>800ms: delay 800ms execution;</li> <li>900ms: delay 900ms execution;</li> <li>1000ms: delay 1000ms execution.</li>.
                     * @return CryptoChallengeDelayBefore Specifies the execution mode for client behavior verification. valid values: <li>0ms: immediate execution;</li> <li>100ms: delay 100ms execution;</li> <li>200ms: delay 200ms execution;</li> <li>300ms: delay 300ms execution;</li> <li>400ms: delay 400ms execution;</li> <li>500ms: delay 500ms execution;</li> <li>600ms: delay 600ms execution;</li> <li>700ms: delay 700ms execution;</li> <li>800ms: delay 800ms execution;</li> <li>900ms: delay 900ms execution;</li> <li>1000ms: delay 1000ms execution.</li>.
                     * 
                     */
                    std::string GetCryptoChallengeDelayBefore() const;

                    /**
                     * 设置Specifies the execution mode for client behavior verification. valid values: <li>0ms: immediate execution;</li> <li>100ms: delay 100ms execution;</li> <li>200ms: delay 200ms execution;</li> <li>300ms: delay 300ms execution;</li> <li>400ms: delay 400ms execution;</li> <li>500ms: delay 500ms execution;</li> <li>600ms: delay 600ms execution;</li> <li>700ms: delay 700ms execution;</li> <li>800ms: delay 800ms execution;</li> <li>900ms: delay 900ms execution;</li> <li>1000ms: delay 1000ms execution.</li>.
                     * @param _cryptoChallengeDelayBefore Specifies the execution mode for client behavior verification. valid values: <li>0ms: immediate execution;</li> <li>100ms: delay 100ms execution;</li> <li>200ms: delay 200ms execution;</li> <li>300ms: delay 300ms execution;</li> <li>400ms: delay 400ms execution;</li> <li>500ms: delay 500ms execution;</li> <li>600ms: delay 600ms execution;</li> <li>700ms: delay 700ms execution;</li> <li>800ms: delay 800ms execution;</li> <li>900ms: delay 900ms execution;</li> <li>1000ms: delay 1000ms execution.</li>.
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
                     * 获取Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     * @return MaxChallengeCountInterval Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     * 
                     */
                    std::string GetMaxChallengeCountInterval() const;

                    /**
                     * 设置Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     * @param _maxChallengeCountInterval Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
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
                     * 获取Trigger threshold cumulative count. value range: 1-100000000.
                     * @return MaxChallengeCountThreshold Trigger threshold cumulative count. value range: 1-100000000.
                     * 
                     */
                    int64_t GetMaxChallengeCountThreshold() const;

                    /**
                     * 设置Trigger threshold cumulative count. value range: 1-100000000.
                     * @param _maxChallengeCountThreshold Trigger threshold cumulative count. value range: 1-100000000.
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
                     * 获取Execution action when client-side javascript is not enabled (test not completed). valid values for SecurityAction Name: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>.
                     * @return ChallengeNotFinishedAction Execution action when client-side javascript is not enabled (test not completed). valid values for SecurityAction Name: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>.
                     * 
                     */
                    SecurityAction GetChallengeNotFinishedAction() const;

                    /**
                     * 设置Execution action when client-side javascript is not enabled (test not completed). valid values for SecurityAction Name: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>.
                     * @param _challengeNotFinishedAction Execution action when client-side javascript is not enabled (test not completed). valid values for SecurityAction Name: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>.
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
                     * 获取The execution action for client-side detection timeout. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li> <li>Monitor: observe;</li> <li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     * @return ChallengeTimeoutAction The execution action for client-side detection timeout. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li> <li>Monitor: observe;</li> <li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     * 
                     */
                    SecurityAction GetChallengeTimeoutAction() const;

                    /**
                     * 设置The execution action for client-side detection timeout. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li> <li>Monitor: observe;</li> <li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     * @param _challengeTimeoutAction The execution action for client-side detection timeout. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li> <li>Monitor: observe;</li> <li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
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
                     * 获取The execution action of the Bot client. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observation;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime configurations are required in AllowActionParameters.</li>.
                     * @return BotClientAction The execution action of the Bot client. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observation;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime configurations are required in AllowActionParameters.</li>.
                     * 
                     */
                    SecurityAction GetBotClientAction() const;

                    /**
                     * 设置The execution action of the Bot client. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observation;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime configurations are required in AllowActionParameters.</li>.
                     * @param _botClientAction The execution action of the Bot client. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observation;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime configurations are required in AllowActionParameters.</li>.
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
                     * Specifies the proof-of-work strength. valid values: <li>low: low;</li><li>medium: medium;</li><li>high: high.</li>.
                     */
                    std::string m_cryptoChallengeIntensity;
                    bool m_cryptoChallengeIntensityHasBeenSet;

                    /**
                     * Specifies the execution mode for client behavior verification. valid values: <li>0ms: immediate execution;</li> <li>100ms: delay 100ms execution;</li> <li>200ms: delay 200ms execution;</li> <li>300ms: delay 300ms execution;</li> <li>400ms: delay 400ms execution;</li> <li>500ms: delay 500ms execution;</li> <li>600ms: delay 600ms execution;</li> <li>700ms: delay 700ms execution;</li> <li>800ms: delay 800ms execution;</li> <li>900ms: delay 900ms execution;</li> <li>1000ms: delay 1000ms execution.</li>.
                     */
                    std::string m_cryptoChallengeDelayBefore;
                    bool m_cryptoChallengeDelayBeforeHasBeenSet;

                    /**
                     * Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     */
                    std::string m_maxChallengeCountInterval;
                    bool m_maxChallengeCountIntervalHasBeenSet;

                    /**
                     * Trigger threshold cumulative count. value range: 1-100000000.
                     */
                    int64_t m_maxChallengeCountThreshold;
                    bool m_maxChallengeCountThresholdHasBeenSet;

                    /**
                     * Execution action when client-side javascript is not enabled (test not completed). valid values for SecurityAction Name: <li>Deny: block, where Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where MinDelayTime and MaxDelayTime configuration is required in AllowActionParameters.</li>.
                     */
                    SecurityAction m_challengeNotFinishedAction;
                    bool m_challengeNotFinishedActionHasBeenSet;

                    /**
                     * The execution action for client-side detection timeout. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li> <li>Monitor: observe;</li> <li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     */
                    SecurityAction m_challengeTimeoutAction;
                    bool m_challengeTimeoutActionHasBeenSet;

                    /**
                     * The execution action of the Bot client. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the Stall configuration is supported in DenyActionParameters;</li><li>Monitor: observation;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime configurations are required in AllowActionParameters.</li>.
                     */
                    SecurityAction m_botClientAction;
                    bool m_botClientActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTBEHAVIORDETECTION_H_
