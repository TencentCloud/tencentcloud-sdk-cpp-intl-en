/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * CreateAccount request structure.
                */
                class CreateAccountRequest : public AbstractModel
                {
                public:
                    CreateAccountRequest();
                    ~CreateAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Account type of a new customer. Valid values: `personal`, `company`.
                     * @return AccountType Account type of a new customer. Valid values: `personal`, `company`.
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置Account type of a new customer. Valid values: `personal`, `company`.
                     * @param AccountType Account type of a new customer. Valid values: `personal`, `company`.
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取Registered email address, which should be valid and correct.
For example, account@qq.com.
                     * @return Mail Registered email address, which should be valid and correct.
For example, account@qq.com.
                     */
                    std::string GetMail() const;

                    /**
                     * 设置Registered email address, which should be valid and correct.
For example, account@qq.com.
                     * @param Mail Registered email address, which should be valid and correct.
For example, account@qq.com.
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取Account password
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     * @return Password Account password
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Account password
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     * @param Password Account password
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取The confirmed password, which must be the same as that entered in the `Password` field.
                     * @return ConfirmPassword The confirmed password, which must be the same as that entered in the `Password` field.
                     */
                    std::string GetConfirmPassword() const;

                    /**
                     * 设置The confirmed password, which must be the same as that entered in the `Password` field.
                     * @param ConfirmPassword The confirmed password, which must be the same as that entered in the `Password` field.
                     */
                    void SetConfirmPassword(const std::string& _confirmPassword);

                    /**
                     * 判断参数 ConfirmPassword 是否已赋值
                     * @return ConfirmPassword 是否已赋值
                     */
                    bool ConfirmPasswordHasBeenSet() const;

                    /**
                     * 获取Customer mobile number, which should be valid and correct.
A global mobile number within 1-32 digits is allowed, such as 18888888888.
                     * @return PhoneNum Customer mobile number, which should be valid and correct.
A global mobile number within 1-32 digits is allowed, such as 18888888888.
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Customer mobile number, which should be valid and correct.
A global mobile number within 1-32 digits is allowed, such as 18888888888.
                     * @param PhoneNum Customer mobile number, which should be valid and correct.
A global mobile number within 1-32 digits is allowed, such as 18888888888.
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取Customer’s country/region code, which can be obtained via the `GetCountryCodes` API, such as “852”.
                     * @return CountryCode Customer’s country/region code, which can be obtained via the `GetCountryCodes` API, such as “852”.
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Customer’s country/region code, which can be obtained via the `GetCountryCodes` API, such as “852”.
                     * @param CountryCode Customer’s country/region code, which can be obtained via the `GetCountryCodes` API, such as “852”.
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Customer’s ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     * @return Area Customer’s ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Customer’s ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     * @param Area Customer’s ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Extension field, which is left empty by default.
                     * @return Extended Extension field, which is left empty by default.
                     */
                    std::string GetExtended() const;

                    /**
                     * 设置Extension field, which is left empty by default.
                     * @param Extended Extension field, which is left empty by default.
                     */
                    void SetExtended(const std::string& _extended);

                    /**
                     * 判断参数 Extended 是否已赋值
                     * @return Extended 是否已赋值
                     */
                    bool ExtendedHasBeenSet() const;

                private:

                    /**
                     * Account type of a new customer. Valid values: `personal`, `company`.
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * Registered email address, which should be valid and correct.
For example, account@qq.com.
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * Account password
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * The confirmed password, which must be the same as that entered in the `Password` field.
                     */
                    std::string m_confirmPassword;
                    bool m_confirmPasswordHasBeenSet;

                    /**
                     * Customer mobile number, which should be valid and correct.
A global mobile number within 1-32 digits is allowed, such as 18888888888.
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Customer’s country/region code, which can be obtained via the `GetCountryCodes` API, such as “852”.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Customer’s ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Extension field, which is left empty by default.
                     */
                    std::string m_extended;
                    bool m_extendedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTREQUEST_H_
