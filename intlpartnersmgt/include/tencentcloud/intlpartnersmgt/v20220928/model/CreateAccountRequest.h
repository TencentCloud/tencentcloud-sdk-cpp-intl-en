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
                     * 获取Account type of a new customer.
Valid values: `personal`, `company`.
                     * @return AccountType Account type of a new customer.
Valid values: `personal`, `company`.
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置Account type of a new customer.
Valid values: `personal`, `company`.
                     * @param _accountType Account type of a new customer.
Valid values: `personal`, `company`.
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取Registered email address, which should be valid and correct.
For example, account@qq.com.
                     * @return Mail Registered email address, which should be valid and correct.
For example, account@qq.com.
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置Registered email address, which should be valid and correct.
For example, account@qq.com.
                     * @param _mail Registered email address, which should be valid and correct.
For example, account@qq.com.
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取Account password.
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     * @return Password Account password.
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Account password.
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     * @param _password Account password.
Length limit: 8-20 characters
A password must contain numbers, letters, and symbols (!@#$%^&*()). Space is not allowed.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取The confirmed password, which must be the same as that entered in the `Password` field.
                     * @return ConfirmPassword The confirmed password, which must be the same as that entered in the `Password` field.
                     * 
                     */
                    std::string GetConfirmPassword() const;

                    /**
                     * 设置The confirmed password, which must be the same as that entered in the `Password` field.
                     * @param _confirmPassword The confirmed password, which must be the same as that entered in the `Password` field.
                     * 
                     */
                    void SetConfirmPassword(const std::string& _confirmPassword);

                    /**
                     * 判断参数 ConfirmPassword 是否已赋值
                     * @return ConfirmPassword 是否已赋值
                     * 
                     */
                    bool ConfirmPasswordHasBeenSet() const;

                    /**
                     * 获取Customer's mobile number. 
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed. 
The system will perform binding limit verification of the mobile number you provide, allowing a maximum of 5 accounts per mobile number.
                     * @return PhoneNum Customer's mobile number. 
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed. 
The system will perform binding limit verification of the mobile number you provide, allowing a maximum of 5 accounts per mobile number.
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Customer's mobile number. 
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed. 
The system will perform binding limit verification of the mobile number you provide, allowing a maximum of 5 accounts per mobile number.
                     * @param _phoneNum Customer's mobile number. 
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed. 
The system will perform binding limit verification of the mobile number you provide, allowing a maximum of 5 accounts per mobile number.
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取Customer's country/region code, which can be obtained via the `GetCountryCodes` API, such as "852".
Parameter value is not allowed to be 7,380,86.
                     * @return CountryCode Customer's country/region code, which can be obtained via the `GetCountryCodes` API, such as "852".
Parameter value is not allowed to be 7,380,86.
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Customer's country/region code, which can be obtained via the `GetCountryCodes` API, such as "852".
Parameter value is not allowed to be 7,380,86.
                     * @param _countryCode Customer's country/region code, which can be obtained via the `GetCountryCodes` API, such as "852".
Parameter value is not allowed to be 7,380,86.
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Customer's ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     * @return Area Customer's ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Customer's ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     * @param _area Customer's ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Extension field, which is left empty by default.
                     * @return Extended Extension field, which is left empty by default.
                     * 
                     */
                    std::string GetExtended() const;

                    /**
                     * 设置Extension field, which is left empty by default.
                     * @param _extended Extension field, which is left empty by default.
                     * 
                     */
                    void SetExtended(const std::string& _extended);

                    /**
                     * 判断参数 Extended 是否已赋值
                     * @return Extended 是否已赋值
                     * 
                     */
                    bool ExtendedHasBeenSet() const;

                    /**
                     * 获取Verification code. 
It will be used to verify the validity of the mobile number you provide. 
When the interface is requested for the first time, a null value can be passed in. The interface will send a 6-digit verification code by SMS to the mobile number you provide, and you need to pass it in again together with other parameters after you receive it.
                     * @return VerifyCode Verification code. 
It will be used to verify the validity of the mobile number you provide. 
When the interface is requested for the first time, a null value can be passed in. The interface will send a 6-digit verification code by SMS to the mobile number you provide, and you need to pass it in again together with other parameters after you receive it.
                     * 
                     */
                    std::string GetVerifyCode() const;

                    /**
                     * 设置Verification code. 
It will be used to verify the validity of the mobile number you provide. 
When the interface is requested for the first time, a null value can be passed in. The interface will send a 6-digit verification code by SMS to the mobile number you provide, and you need to pass it in again together with other parameters after you receive it.
                     * @param _verifyCode Verification code. 
It will be used to verify the validity of the mobile number you provide. 
When the interface is requested for the first time, a null value can be passed in. The interface will send a 6-digit verification code by SMS to the mobile number you provide, and you need to pass it in again together with other parameters after you receive it.
                     * 
                     */
                    void SetVerifyCode(const std::string& _verifyCode);

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                private:

                    /**
                     * Account type of a new customer.
Valid values: `personal`, `company`.
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
                     * Account password.
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
                     * Customer's mobile number. 
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed. 
The system will perform binding limit verification of the mobile number you provide, allowing a maximum of 5 accounts per mobile number.
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Customer's country/region code, which can be obtained via the `GetCountryCodes` API, such as "852".
Parameter value is not allowed to be 7,380,86.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Customer's ISO2 standard country/region code, which can be obtained via the `GetCountryCodes` API. It should correspond to the `CountryCode` field, such as `HK`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Extension field, which is left empty by default.
                     */
                    std::string m_extended;
                    bool m_extendedHasBeenSet;

                    /**
                     * Verification code. 
It will be used to verify the validity of the mobile number you provide. 
When the interface is requested for the first time, a null value can be passed in. The interface will send a 6-digit verification code by SMS to the mobile number you provide, and you need to pass it in again together with other parameters after you receive it.
                     */
                    std::string m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTREQUEST_H_
