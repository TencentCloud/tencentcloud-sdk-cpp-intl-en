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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKREQUEST_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/EventDetail.h>
#include <tencentcloud/rce/v20260130/model/Browser.h>
#include <tencentcloud/rce/v20260130/model/App.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * AssessRisk request structure.
                */
                class AssessRiskRequest : public AbstractModel
                {
                public:
                    AssessRiskRequest();
                    ~AssessRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Event code. Used to specify the scenario node for business access.</p><p>Standard events under the account protection product include:</p><ul><li> login: Log in<p></p></li> <li>register: Register </li><li>sms: SMS </li><li>logout: Log out </li><li>modify_account: Modify account </li><li>modify_password: Modify password </li><li>security_verification: Security verification</li></ul><p>Standard events under the payment protection product include:</p><ul><li>create_order: Create an order </li><li>transaction: Transaction</li><li>charge_back: Chargeback</li></ul><p>Standard events under the promotion protection product include:</p><ul><li>add_promotion: Participate in promotions</li><li>redeem: Redeem a prize </li><li>withdraw: Withdraw</li><li>cust_event: Custom event, cust_xxx </li><li>scan_code: Scan a code </li><li>lucky_draw: Lucky draw </li><li>task: Complete a task </li><li>invitation: Invitation </li><li>claim_red_packet: Receive a red packet </li><li>browse: Browse</li></ul><p>Custom events can be evaluated for risk based on an agreement with RCE</p>
                     * @return EventCode <p>Event code. Used to specify the scenario node for business access.</p><p>Standard events under the account protection product include:</p><ul><li> login: Log in<p></p></li> <li>register: Register </li><li>sms: SMS </li><li>logout: Log out </li><li>modify_account: Modify account </li><li>modify_password: Modify password </li><li>security_verification: Security verification</li></ul><p>Standard events under the payment protection product include:</p><ul><li>create_order: Create an order </li><li>transaction: Transaction</li><li>charge_back: Chargeback</li></ul><p>Standard events under the promotion protection product include:</p><ul><li>add_promotion: Participate in promotions</li><li>redeem: Redeem a prize </li><li>withdraw: Withdraw</li><li>cust_event: Custom event, cust_xxx </li><li>scan_code: Scan a code </li><li>lucky_draw: Lucky draw </li><li>task: Complete a task </li><li>invitation: Invitation </li><li>claim_red_packet: Receive a red packet </li><li>browse: Browse</li></ul><p>Custom events can be evaluated for risk based on an agreement with RCE</p>
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置<p>Event code. Used to specify the scenario node for business access.</p><p>Standard events under the account protection product include:</p><ul><li> login: Log in<p></p></li> <li>register: Register </li><li>sms: SMS </li><li>logout: Log out </li><li>modify_account: Modify account </li><li>modify_password: Modify password </li><li>security_verification: Security verification</li></ul><p>Standard events under the payment protection product include:</p><ul><li>create_order: Create an order </li><li>transaction: Transaction</li><li>charge_back: Chargeback</li></ul><p>Standard events under the promotion protection product include:</p><ul><li>add_promotion: Participate in promotions</li><li>redeem: Redeem a prize </li><li>withdraw: Withdraw</li><li>cust_event: Custom event, cust_xxx </li><li>scan_code: Scan a code </li><li>lucky_draw: Lucky draw </li><li>task: Complete a task </li><li>invitation: Invitation </li><li>claim_red_packet: Receive a red packet </li><li>browse: Browse</li></ul><p>Custom events can be evaluated for risk based on an agreement with RCE</p>
                     * @param _eventCode <p>Event code. Used to specify the scenario node for business access.</p><p>Standard events under the account protection product include:</p><ul><li> login: Log in<p></p></li> <li>register: Register </li><li>sms: SMS </li><li>logout: Log out </li><li>modify_account: Modify account </li><li>modify_password: Modify password </li><li>security_verification: Security verification</li></ul><p>Standard events under the payment protection product include:</p><ul><li>create_order: Create an order </li><li>transaction: Transaction</li><li>charge_back: Chargeback</li></ul><p>Standard events under the promotion protection product include:</p><ul><li>add_promotion: Participate in promotions</li><li>redeem: Redeem a prize </li><li>withdraw: Withdraw</li><li>cust_event: Custom event, cust_xxx </li><li>scan_code: Scan a code </li><li>lucky_draw: Lucky draw </li><li>task: Complete a task </li><li>invitation: Invitation </li><li>claim_red_packet: Receive a red packet </li><li>browse: Browse</li></ul><p>Custom events can be evaluated for risk based on an agreement with RCE</p>
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取<p>The time when the event occurred</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with the ISO 8601 standard</p>
                     * @return EventTime <p>The time when the event occurred</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with the ISO 8601 standard</p>
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置<p>The time when the event occurred</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with the ISO 8601 standard</p>
                     * @param _eventTime <p>The time when the event occurred</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with the ISO 8601 standard</p>
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>The user's current session ID used to associate with the actions before and after logging in. If UserId is not passed, SessionId is required. If missing, an empty string can be filled.</p>
                     * @return SessionId <p>The user's current session ID used to associate with the actions before and after logging in. If UserId is not passed, SessionId is required. If missing, an empty string can be filled.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>The user's current session ID used to associate with the actions before and after logging in. If UserId is not passed, SessionId is required. If missing, an empty string can be filled.</p>
                     * @param _sessionId <p>The user's current session ID used to associate with the actions before and after logging in. If UserId is not passed, SessionId is required. If missing, an empty string can be filled.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Device fingerprint token, obtained after integration of the device fingerprint SDK into your website or application</p>
                     * @return DeviceToken <p>Device fingerprint token, obtained after integration of the device fingerprint SDK into your website or application</p>
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置<p>Device fingerprint token, obtained after integration of the device fingerprint SDK into your website or application</p>
                     * @param _deviceToken <p>Device fingerprint token, obtained after integration of the device fingerprint SDK into your website or application</p>
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                    /**
                     * 获取<p>Client IP address (IPv4 or IPv6)</p>
                     * @return UserIp <p>Client IP address (IPv4 or IPv6)</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>Client IP address (IPv4 or IPv6)</p>
                     * @param _userIp <p>Client IP address (IPv4 or IPv6)</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取<p>Event details. The event information is imported based on the event code you input.</p>
                     * @return EventDetail <p>Event details. The event information is imported based on the event code you input.</p>
                     * 
                     */
                    EventDetail GetEventDetail() const;

                    /**
                     * 设置<p>Event details. The event information is imported based on the event code you input.</p>
                     * @param _eventDetail <p>Event details. The event information is imported based on the event code you input.</p>
                     * 
                     */
                    void SetEventDetail(const EventDetail& _eventDetail);

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     * 
                     */
                    bool EventDetailHasBeenSet() const;

                    /**
                     * 获取<p>The user's account ID in your system</p>
                     * @return UserId <p>The user's account ID in your system</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>The user's account ID in your system</p>
                     * @param _userId <p>The user's account ID in your system</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>Email of the user</p>
                     * @return UserEmail <p>Email of the user</p>
                     * 
                     */
                    std::string GetUserEmail() const;

                    /**
                     * 设置<p>Email of the user</p>
                     * @param _userEmail <p>Email of the user</p>
                     * 
                     */
                    void SetUserEmail(const std::string& _userEmail);

                    /**
                     * 判断参数 UserEmail 是否已赋值
                     * @return UserEmail 是否已赋值
                     * 
                     */
                    bool UserEmailHasBeenSet() const;

                    /**
                     * 获取<p>Phone number of the user.</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number</p>
                     * @return UserPhone <p>Phone number of the user.</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number</p>
                     * 
                     */
                    std::string GetUserPhone() const;

                    /**
                     * 设置<p>Phone number of the user.</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number</p>
                     * @param _userPhone <p>Phone number of the user.</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number</p>
                     * 
                     */
                    void SetUserPhone(const std::string& _userPhone);

                    /**
                     * 判断参数 UserPhone 是否已赋值
                     * @return UserPhone 是否已赋值
                     * 
                     */
                    bool UserPhoneHasBeenSet() const;

                    /**
                     * 获取<p>The details of the browser. If you've already integrated our device SDK, this field is not required</p>
                     * @return Browser <p>The details of the browser. If you've already integrated our device SDK, this field is not required</p>
                     * 
                     */
                    Browser GetBrowser() const;

                    /**
                     * 设置<p>The details of the browser. If you've already integrated our device SDK, this field is not required</p>
                     * @param _browser <p>The details of the browser. If you've already integrated our device SDK, this field is not required</p>
                     * 
                     */
                    void SetBrowser(const Browser& _browser);

                    /**
                     * 判断参数 Browser 是否已赋值
                     * @return Browser 是否已赋值
                     * 
                     */
                    bool BrowserHasBeenSet() const;

                    /**
                     * 获取<p>The details of the app, os and device.If you've already integrated our device SDK, this field is not required</p>
                     * @return App <p>The details of the app, os and device.If you've already integrated our device SDK, this field is not required</p>
                     * 
                     */
                    App GetApp() const;

                    /**
                     * 设置<p>The details of the app, os and device.If you've already integrated our device SDK, this field is not required</p>
                     * @param _app <p>The details of the app, os and device.If you've already integrated our device SDK, this field is not required</p>
                     * 
                     */
                    void SetApp(const App& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                private:

                    /**
                     * <p>Event code. Used to specify the scenario node for business access.</p><p>Standard events under the account protection product include:</p><ul><li> login: Log in<p></p></li> <li>register: Register </li><li>sms: SMS </li><li>logout: Log out </li><li>modify_account: Modify account </li><li>modify_password: Modify password </li><li>security_verification: Security verification</li></ul><p>Standard events under the payment protection product include:</p><ul><li>create_order: Create an order </li><li>transaction: Transaction</li><li>charge_back: Chargeback</li></ul><p>Standard events under the promotion protection product include:</p><ul><li>add_promotion: Participate in promotions</li><li>redeem: Redeem a prize </li><li>withdraw: Withdraw</li><li>cust_event: Custom event, cust_xxx </li><li>scan_code: Scan a code </li><li>lucky_draw: Lucky draw </li><li>task: Complete a task </li><li>invitation: Invitation </li><li>claim_red_packet: Receive a red packet </li><li>browse: Browse</li></ul><p>Custom events can be evaluated for risk based on an agreement with RCE</p>
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * <p>The time when the event occurred</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with the ISO 8601 standard</p>
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>The user's current session ID used to associate with the actions before and after logging in. If UserId is not passed, SessionId is required. If missing, an empty string can be filled.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Device fingerprint token, obtained after integration of the device fingerprint SDK into your website or application</p>
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * <p>Client IP address (IPv4 or IPv6)</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * <p>Event details. The event information is imported based on the event code you input.</p>
                     */
                    EventDetail m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                    /**
                     * <p>The user's account ID in your system</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>Email of the user</p>
                     */
                    std::string m_userEmail;
                    bool m_userEmailHasBeenSet;

                    /**
                     * <p>Phone number of the user.</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number</p>
                     */
                    std::string m_userPhone;
                    bool m_userPhoneHasBeenSet;

                    /**
                     * <p>The details of the browser. If you've already integrated our device SDK, this field is not required</p>
                     */
                    Browser m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * <p>The details of the app, os and device.If you've already integrated our device SDK, this field is not required</p>
                     */
                    App m_app;
                    bool m_appHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKREQUEST_H_
