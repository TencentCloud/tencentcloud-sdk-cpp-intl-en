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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCOUNTPROTECTIONSETTINGS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCOUNTPROTECTIONSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/UserRiskProfile.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Account protection configuration.
                */
                class AccountProtectionSettings : public AbstractModel
                {
                public:
                    AccountProtectionSettings();
                    ~AccountProtectionSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Account protection feature switch.</p><p>Enumeration values: </p><ul><li>on: Enable;</li><li>off: Disable.</li></ul><p>Default value: off.</p>
                     * @return Enabled <p>Account protection feature switch.</p><p>Enumeration values: </p><ul><li>on: Enable;</li><li>off: Disable.</li></ul><p>Default value: off.</p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>Account protection feature switch.</p><p>Enumeration values: </p><ul><li>on: Enable;</li><li>off: Disable.</li></ul><p>Default value: off.</p>
                     * @param _enabled <p>Account protection feature switch.</p><p>Enumeration values: </p><ul><li>on: Enable;</li><li>off: Disable.</li></ul><p>Default value: off.</p>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Request target. Used to identify the business operation scenario the request belongs to.</p> <p>Enumeration values:</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD: request to change the password when the original password is known;</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION: request to modify the account security question;</li> <li>ACCOUNT.CHECK_EXISTENCE: request to verify whether the account exists, commonly used for pre-verification after entering an email or phone number on the login or registration page;</li> <li>ACCOUNT.LOGIN: request to log in to an account;</li> <li>ACCOUNT.REGISTER: request to sign up for a new account;</li> <li>ACCOUNT.RESET_PASSWORD: request to reset the password, usually by verifying identity through email or SMS and then setting a new password;</li> <li>ACCOUNT.UPDATE: request to modify account association information, such as phone number, email, payment card number, shipping address, etc.;</li> <li>ASSET.CHECK_GIFTCARD_BALANCE: request to query the gift card balance by card number and other information;</li> <li>ASSET.CHECK_LOYALTY_POINTS: request to query the account point balance;</li> <li>ASSET.REDEEM_CODE: request to exchange rights and interests using a redemption code;</li> <li>BROWSE.QUERY: request for in-site search of products or services;</li> <li>PAYMENT.ADD_TO_CART: request to add merchandise to the shopping cart;</li> <li>PAYMENT.GET_METHODS: request to obtain the list of payment methods bound to the account;</li> <li>PAYMENT.MAKE_PAYMENT: request to submit a payment, settlement, or fund transfer.</li> </ul>
                     * @return RequestPurpose <p>Request target. Used to identify the business operation scenario the request belongs to.</p> <p>Enumeration values:</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD: request to change the password when the original password is known;</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION: request to modify the account security question;</li> <li>ACCOUNT.CHECK_EXISTENCE: request to verify whether the account exists, commonly used for pre-verification after entering an email or phone number on the login or registration page;</li> <li>ACCOUNT.LOGIN: request to log in to an account;</li> <li>ACCOUNT.REGISTER: request to sign up for a new account;</li> <li>ACCOUNT.RESET_PASSWORD: request to reset the password, usually by verifying identity through email or SMS and then setting a new password;</li> <li>ACCOUNT.UPDATE: request to modify account association information, such as phone number, email, payment card number, shipping address, etc.;</li> <li>ASSET.CHECK_GIFTCARD_BALANCE: request to query the gift card balance by card number and other information;</li> <li>ASSET.CHECK_LOYALTY_POINTS: request to query the account point balance;</li> <li>ASSET.REDEEM_CODE: request to exchange rights and interests using a redemption code;</li> <li>BROWSE.QUERY: request for in-site search of products or services;</li> <li>PAYMENT.ADD_TO_CART: request to add merchandise to the shopping cart;</li> <li>PAYMENT.GET_METHODS: request to obtain the list of payment methods bound to the account;</li> <li>PAYMENT.MAKE_PAYMENT: request to submit a payment, settlement, or fund transfer.</li> </ul>
                     * 
                     */
                    std::string GetRequestPurpose() const;

                    /**
                     * 设置<p>Request target. Used to identify the business operation scenario the request belongs to.</p> <p>Enumeration values:</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD: request to change the password when the original password is known;</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION: request to modify the account security question;</li> <li>ACCOUNT.CHECK_EXISTENCE: request to verify whether the account exists, commonly used for pre-verification after entering an email or phone number on the login or registration page;</li> <li>ACCOUNT.LOGIN: request to log in to an account;</li> <li>ACCOUNT.REGISTER: request to sign up for a new account;</li> <li>ACCOUNT.RESET_PASSWORD: request to reset the password, usually by verifying identity through email or SMS and then setting a new password;</li> <li>ACCOUNT.UPDATE: request to modify account association information, such as phone number, email, payment card number, shipping address, etc.;</li> <li>ASSET.CHECK_GIFTCARD_BALANCE: request to query the gift card balance by card number and other information;</li> <li>ASSET.CHECK_LOYALTY_POINTS: request to query the account point balance;</li> <li>ASSET.REDEEM_CODE: request to exchange rights and interests using a redemption code;</li> <li>BROWSE.QUERY: request for in-site search of products or services;</li> <li>PAYMENT.ADD_TO_CART: request to add merchandise to the shopping cart;</li> <li>PAYMENT.GET_METHODS: request to obtain the list of payment methods bound to the account;</li> <li>PAYMENT.MAKE_PAYMENT: request to submit a payment, settlement, or fund transfer.</li> </ul>
                     * @param _requestPurpose <p>Request target. Used to identify the business operation scenario the request belongs to.</p> <p>Enumeration values:</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD: request to change the password when the original password is known;</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION: request to modify the account security question;</li> <li>ACCOUNT.CHECK_EXISTENCE: request to verify whether the account exists, commonly used for pre-verification after entering an email or phone number on the login or registration page;</li> <li>ACCOUNT.LOGIN: request to log in to an account;</li> <li>ACCOUNT.REGISTER: request to sign up for a new account;</li> <li>ACCOUNT.RESET_PASSWORD: request to reset the password, usually by verifying identity through email or SMS and then setting a new password;</li> <li>ACCOUNT.UPDATE: request to modify account association information, such as phone number, email, payment card number, shipping address, etc.;</li> <li>ASSET.CHECK_GIFTCARD_BALANCE: request to query the gift card balance by card number and other information;</li> <li>ASSET.CHECK_LOYALTY_POINTS: request to query the account point balance;</li> <li>ASSET.REDEEM_CODE: request to exchange rights and interests using a redemption code;</li> <li>BROWSE.QUERY: request for in-site search of products or services;</li> <li>PAYMENT.ADD_TO_CART: request to add merchandise to the shopping cart;</li> <li>PAYMENT.GET_METHODS: request to obtain the list of payment methods bound to the account;</li> <li>PAYMENT.MAKE_PAYMENT: request to submit a payment, settlement, or fund transfer.</li> </ul>
                     * 
                     */
                    void SetRequestPurpose(const std::string& _requestPurpose);

                    /**
                     * 判断参数 RequestPurpose 是否已赋值
                     * @return RequestPurpose 是否已赋值
                     * 
                     */
                    bool RequestPurposeHasBeenSet() const;

                    /**
                     * 获取<p>The location of the user identity in the request source, where key is replaced with the actual parameter name.</p><p>Valid values:</p><ul><li>http.request.cookies["key"]: Obtain the Cookie value named key from the Cookie;</li><li>http.request.headers["key"]: Obtain the header value named key from the request header;</li><li>http.request.uri.args["key"]: Obtain the parameter value named key from the URL query parameter.</li></ul>
                     * @return UserIDSource <p>The location of the user identity in the request source, where key is replaced with the actual parameter name.</p><p>Valid values:</p><ul><li>http.request.cookies["key"]: Obtain the Cookie value named key from the Cookie;</li><li>http.request.headers["key"]: Obtain the header value named key from the request header;</li><li>http.request.uri.args["key"]: Obtain the parameter value named key from the URL query parameter.</li></ul>
                     * 
                     */
                    std::string GetUserIDSource() const;

                    /**
                     * 设置<p>The location of the user identity in the request source, where key is replaced with the actual parameter name.</p><p>Valid values:</p><ul><li>http.request.cookies["key"]: Obtain the Cookie value named key from the Cookie;</li><li>http.request.headers["key"]: Obtain the header value named key from the request header;</li><li>http.request.uri.args["key"]: Obtain the parameter value named key from the URL query parameter.</li></ul>
                     * @param _userIDSource <p>The location of the user identity in the request source, where key is replaced with the actual parameter name.</p><p>Valid values:</p><ul><li>http.request.cookies["key"]: Obtain the Cookie value named key from the Cookie;</li><li>http.request.headers["key"]: Obtain the header value named key from the request header;</li><li>http.request.uri.args["key"]: Obtain the parameter value named key from the URL query parameter.</li></ul>
                     * 
                     */
                    void SetUserIDSource(const std::string& _userIDSource);

                    /**
                     * 判断参数 UserIDSource 是否已赋值
                     * @return UserIDSource 是否已赋值
                     * 
                     */
                    bool UserIDSourceHasBeenSet() const;

                    /**
                     * 获取<p>User Risk Level configuration.</p>
                     * @return UserRiskProfile <p>User Risk Level configuration.</p>
                     * 
                     */
                    UserRiskProfile GetUserRiskProfile() const;

                    /**
                     * 设置<p>User Risk Level configuration.</p>
                     * @param _userRiskProfile <p>User Risk Level configuration.</p>
                     * 
                     */
                    void SetUserRiskProfile(const UserRiskProfile& _userRiskProfile);

                    /**
                     * 判断参数 UserRiskProfile 是否已赋值
                     * @return UserRiskProfile 是否已赋值
                     * 
                     */
                    bool UserRiskProfileHasBeenSet() const;

                private:

                    /**
                     * <p>Account protection feature switch.</p><p>Enumeration values: </p><ul><li>on: Enable;</li><li>off: Disable.</li></ul><p>Default value: off.</p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Request target. Used to identify the business operation scenario the request belongs to.</p> <p>Enumeration values:</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD: request to change the password when the original password is known;</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION: request to modify the account security question;</li> <li>ACCOUNT.CHECK_EXISTENCE: request to verify whether the account exists, commonly used for pre-verification after entering an email or phone number on the login or registration page;</li> <li>ACCOUNT.LOGIN: request to log in to an account;</li> <li>ACCOUNT.REGISTER: request to sign up for a new account;</li> <li>ACCOUNT.RESET_PASSWORD: request to reset the password, usually by verifying identity through email or SMS and then setting a new password;</li> <li>ACCOUNT.UPDATE: request to modify account association information, such as phone number, email, payment card number, shipping address, etc.;</li> <li>ASSET.CHECK_GIFTCARD_BALANCE: request to query the gift card balance by card number and other information;</li> <li>ASSET.CHECK_LOYALTY_POINTS: request to query the account point balance;</li> <li>ASSET.REDEEM_CODE: request to exchange rights and interests using a redemption code;</li> <li>BROWSE.QUERY: request for in-site search of products or services;</li> <li>PAYMENT.ADD_TO_CART: request to add merchandise to the shopping cart;</li> <li>PAYMENT.GET_METHODS: request to obtain the list of payment methods bound to the account;</li> <li>PAYMENT.MAKE_PAYMENT: request to submit a payment, settlement, or fund transfer.</li> </ul>
                     */
                    std::string m_requestPurpose;
                    bool m_requestPurposeHasBeenSet;

                    /**
                     * <p>The location of the user identity in the request source, where key is replaced with the actual parameter name.</p><p>Valid values:</p><ul><li>http.request.cookies["key"]: Obtain the Cookie value named key from the Cookie;</li><li>http.request.headers["key"]: Obtain the header value named key from the request header;</li><li>http.request.uri.args["key"]: Obtain the parameter value named key from the URL query parameter.</li></ul>
                     */
                    std::string m_userIDSource;
                    bool m_userIDSourceHasBeenSet;

                    /**
                     * <p>User Risk Level configuration.</p>
                     */
                    UserRiskProfile m_userRiskProfile;
                    bool m_userRiskProfileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCOUNTPROTECTIONSETTINGS_H_
