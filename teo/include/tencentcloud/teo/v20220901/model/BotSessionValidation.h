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
                * Specifies the configuration for Cookie verification and session tracking behavior.
                */
                class BotSessionValidation : public AbstractModel
                {
                public:
                    BotSessionValidation();
                    ~BotSessionValidation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to update Cookie and validate. valid values: <li>on: update Cookie and validate;</li> <li>off: verify only.</li>.
                     * @return IssueNewBotSessionCookie Whether to update Cookie and validate. valid values: <li>on: update Cookie and validate;</li> <li>off: verify only.</li>.
                     * 
                     */
                    std::string GetIssueNewBotSessionCookie() const;

                    /**
                     * 设置Whether to update Cookie and validate. valid values: <li>on: update Cookie and validate;</li> <li>off: verify only.</li>.
                     * @param _issueNewBotSessionCookie Whether to update Cookie and validate. valid values: <li>on: update Cookie and validate;</li> <li>off: verify only.</li>.
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
                     * 获取Specifies the trigger threshold for updating and validating cookies. valid only when IssueNewBotSessionCookie is set to on.
                     * @return MaxNewSessionTriggerConfig Specifies the trigger threshold for updating and validating cookies. valid only when IssueNewBotSessionCookie is set to on.
                     * 
                     */
                    MaxNewSessionTriggerConfig GetMaxNewSessionTriggerConfig() const;

                    /**
                     * 设置Specifies the trigger threshold for updating and validating cookies. valid only when IssueNewBotSessionCookie is set to on.
                     * @param _maxNewSessionTriggerConfig Specifies the trigger threshold for updating and validating cookies. valid only when IssueNewBotSessionCookie is set to on.
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
                     * 获取Execution action when no Cookie is carried or the Cookie expired. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     * @return SessionExpiredAction Execution action when no Cookie is carried or the Cookie expired. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     * 
                     */
                    SecurityAction GetSessionExpiredAction() const;

                    /**
                     * 设置Execution action when no Cookie is carried or the Cookie expired. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     * @param _sessionExpiredAction Execution action when no Cookie is carried or the Cookie expired. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
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
                     * 获取Execution action for invalid Cookie. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>.
                     * @return SessionInvalidAction Execution action for invalid Cookie. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>.
                     * 
                     */
                    SecurityAction GetSessionInvalidAction() const;

                    /**
                     * 设置Execution action for invalid Cookie. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>.
                     * @param _sessionInvalidAction Execution action for invalid Cookie. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>.
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
                     * 获取Specifies the session rate and periodic feature verification configuration.
                     * @return SessionRateControl Specifies the session rate and periodic feature verification configuration.
                     * 
                     */
                    SessionRateControl GetSessionRateControl() const;

                    /**
                     * 设置Specifies the session rate and periodic feature verification configuration.
                     * @param _sessionRateControl Specifies the session rate and periodic feature verification configuration.
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
                     * Whether to update Cookie and validate. valid values: <li>on: update Cookie and validate;</li> <li>off: verify only.</li>.
                     */
                    std::string m_issueNewBotSessionCookie;
                    bool m_issueNewBotSessionCookieHasBeenSet;

                    /**
                     * Specifies the trigger threshold for updating and validating cookies. valid only when IssueNewBotSessionCookie is set to on.
                     */
                    MaxNewSessionTriggerConfig m_maxNewSessionTriggerConfig;
                    bool m_maxNewSessionTriggerConfigHasBeenSet;

                    /**
                     * Execution action when no Cookie is carried or the Cookie expired. valid values for the Name parameter in SecurityAction: <li>Deny: block, where Stall can be configured in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where MinDelayTime and MaxDelayTime must be configured in AllowActionParameters.</li>.
                     */
                    SecurityAction m_sessionExpiredAction;
                    bool m_sessionExpiredActionHasBeenSet;

                    /**
                     * Execution action for invalid Cookie. valid values for the Name parameter in SecurityAction: <li>Deny: block, where the DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after wait, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>.
                     */
                    SecurityAction m_sessionInvalidAction;
                    bool m_sessionInvalidActionHasBeenSet;

                    /**
                     * Specifies the session rate and periodic feature verification configuration.
                     */
                    SessionRateControl m_sessionRateControl;
                    bool m_sessionRateControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTSESSIONVALIDATION_H_
