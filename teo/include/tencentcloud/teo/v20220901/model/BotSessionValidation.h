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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTSESSIONVALIDATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTSESSIONVALIDATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MaxNewSessionTriggerConfig.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/SessionRateControl.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Cookie verification and session tracking behavior configuration.
                */
                class BotSessionValidation : public AbstractModel
                {
                public:
                    BotSessionValidation();
                    ~BotSessionValidation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to update the Cookie and verify. Valid values: <li>on: update the Cookie and verify;</li><li>off: verify only.</li>
                     * @return IssueNewBotSessionCookie Whether to update the Cookie and verify. Valid values: <li>on: update the Cookie and verify;</li><li>off: verify only.</li>
                     * 
                     */
                    std::string GetIssueNewBotSessionCookie() const;

                    /**
                     * 设置Whether to update the Cookie and verify. Valid values: <li>on: update the Cookie and verify;</li><li>off: verify only.</li>
                     * @param _issueNewBotSessionCookie Whether to update the Cookie and verify. Valid values: <li>on: update the Cookie and verify;</li><li>off: verify only.</li>
                     * 
                     */
                    void SetIssueNewBotSessionCookie(const std::string& _issueNewBotSessionCookie);

                    /**
                     * 判断参数 IssueNewBotSessionCookie 是否已赋值
                     * @return IssueNewBotSessionCookie 是否已赋值
                     * 
                     */
                    bool IssueNewBotSessionCookieHasBeenSet() const;

                    /**
                     * 获取Update threshold for cookie update and validation. Valid only when IssueNewBotSessionCookie is on.
                     * @return MaxNewSessionTriggerConfig Update threshold for cookie update and validation. Valid only when IssueNewBotSessionCookie is on.
                     * 
                     */
                    MaxNewSessionTriggerConfig GetMaxNewSessionTriggerConfig() const;

                    /**
                     * 设置Update threshold for cookie update and validation. Valid only when IssueNewBotSessionCookie is on.
                     * @param _maxNewSessionTriggerConfig Update threshold for cookie update and validation. Valid only when IssueNewBotSessionCookie is on.
                     * 
                     */
                    void SetMaxNewSessionTriggerConfig(const MaxNewSessionTriggerConfig& _maxNewSessionTriggerConfig);

                    /**
                     * 判断参数 MaxNewSessionTriggerConfig 是否已赋值
                     * @return MaxNewSessionTriggerConfig 是否已赋值
                     * 
                     */
                    bool MaxNewSessionTriggerConfigHasBeenSet() const;

                    /**
                     * 获取Execution action without a Cookie or with an expired Cookie. Supported Name values for SecurityAction: <li>Deny: block. DenyActionParameters supports Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @return SessionExpiredAction Execution action without a Cookie or with an expired Cookie. Supported Name values for SecurityAction: <li>Deny: block. DenyActionParameters supports Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    SecurityAction GetSessionExpiredAction() const;

                    /**
                     * 设置Execution action without a Cookie or with an expired Cookie. Supported Name values for SecurityAction: <li>Deny: block. DenyActionParameters supports Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @param _sessionExpiredAction Execution action without a Cookie or with an expired Cookie. Supported Name values for SecurityAction: <li>Deny: block. DenyActionParameters supports Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    void SetSessionExpiredAction(const SecurityAction& _sessionExpiredAction);

                    /**
                     * 判断参数 SessionExpiredAction 是否已赋值
                     * @return SessionExpiredAction 是否已赋值
                     * 
                     */
                    bool SessionExpiredActionHasBeenSet() const;

                    /**
                     * 获取Execution action for invalid Cookie. The Name parameter of SecurityAction supports the following values: <li>Deny: block. DenyActionParameters supports the Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires the MinDelayTime and MaxDelayTime configurations.</li>
                     * @return SessionInvalidAction Execution action for invalid Cookie. The Name parameter of SecurityAction supports the following values: <li>Deny: block. DenyActionParameters supports the Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires the MinDelayTime and MaxDelayTime configurations.</li>
                     * 
                     */
                    SecurityAction GetSessionInvalidAction() const;

                    /**
                     * 设置Execution action for invalid Cookie. The Name parameter of SecurityAction supports the following values: <li>Deny: block. DenyActionParameters supports the Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires the MinDelayTime and MaxDelayTime configurations.</li>
                     * @param _sessionInvalidAction Execution action for invalid Cookie. The Name parameter of SecurityAction supports the following values: <li>Deny: block. DenyActionParameters supports the Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires the MinDelayTime and MaxDelayTime configurations.</li>
                     * 
                     */
                    void SetSessionInvalidAction(const SecurityAction& _sessionInvalidAction);

                    /**
                     * 判断参数 SessionInvalidAction 是否已赋值
                     * @return SessionInvalidAction 是否已赋值
                     * 
                     */
                    bool SessionInvalidActionHasBeenSet() const;

                    /**
                     * 获取Specific configuration for session rate and periodic feature verification.
                     * @return SessionRateControl Specific configuration for session rate and periodic feature verification.
                     * 
                     */
                    SessionRateControl GetSessionRateControl() const;

                    /**
                     * 设置Specific configuration for session rate and periodic feature verification.
                     * @param _sessionRateControl Specific configuration for session rate and periodic feature verification.
                     * 
                     */
                    void SetSessionRateControl(const SessionRateControl& _sessionRateControl);

                    /**
                     * 判断参数 SessionRateControl 是否已赋值
                     * @return SessionRateControl 是否已赋值
                     * 
                     */
                    bool SessionRateControlHasBeenSet() const;

                private:

                    /**
                     * Whether to update the Cookie and verify. Valid values: <li>on: update the Cookie and verify;</li><li>off: verify only.</li>
                     */
                    std::string m_issueNewBotSessionCookie;
                    bool m_issueNewBotSessionCookieHasBeenSet;

                    /**
                     * Update threshold for cookie update and validation. Valid only when IssueNewBotSessionCookie is on.
                     */
                    MaxNewSessionTriggerConfig m_maxNewSessionTriggerConfig;
                    bool m_maxNewSessionTriggerConfigHasBeenSet;

                    /**
                     * Execution action without a Cookie or with an expired Cookie. Supported Name values for SecurityAction: <li>Deny: block. DenyActionParameters supports Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     */
                    SecurityAction m_sessionExpiredAction;
                    bool m_sessionExpiredActionHasBeenSet;

                    /**
                     * Execution action for invalid Cookie. The Name parameter of SecurityAction supports the following values: <li>Deny: block. DenyActionParameters supports the Stall configuration.</li><li>Monitor: observe.</li><li>Allow: respond after waiting. AllowActionParameters requires the MinDelayTime and MaxDelayTime configurations.</li>
                     */
                    SecurityAction m_sessionInvalidAction;
                    bool m_sessionInvalidActionHasBeenSet;

                    /**
                     * Specific configuration for session rate and periodic feature verification.
                     */
                    SessionRateControl m_sessionRateControl;
                    bool m_sessionRateControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTSESSIONVALIDATION_H_
