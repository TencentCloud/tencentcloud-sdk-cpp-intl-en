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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_VERIFYSMSCODEREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_VERIFYSMSCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * VerifySmsCode request structure.
                */
                class VerifySmsCodeRequest : public AbstractModel
                {
                public:
                    VerifySmsCodeRequest();
                    ~VerifySmsCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Captcha target, currently supported: rebind super administrator account, BindSuperAdmin; trial version business upgrade verification, ChannelUpdateVerify.
                     * @return Purpose Captcha target, currently supported: rebind super administrator account, BindSuperAdmin; trial version business upgrade verification, ChannelUpdateVerify.
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 设置Captcha target, currently supported: rebind super administrator account, BindSuperAdmin; trial version business upgrade verification, ChannelUpdateVerify.
                     * @param _purpose Captcha target, currently supported: rebind super administrator account, BindSuperAdmin; trial version business upgrade verification, ChannelUpdateVerify.
                     * 
                     */
                    void SetPurpose(const std::string& _purpose);

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取Specifies the mobile number as the super admin account.
                     * @return PhoneNumber Specifies the mobile number as the super admin account.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Specifies the mobile number as the super admin account.
                     * @param _phoneNumber Specifies the mobile number as the super admin account.
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the sms verification code.
                     * @return Code Specifies the sms verification code.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Specifies the sms verification code.
                     * @param _code Specifies the sms verification code.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Official cloud disk instance ID.
                     * @return InstanceId Official cloud disk instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Official cloud disk instance ID.
                     * @param _instanceId Official cloud disk instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the country code of the mobile number that serves as the super administrator account. defaults to +86.
                     * @return CountryCode Specifies the country code of the mobile number that serves as the super administrator account. defaults to +86.
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Specifies the country code of the mobile number that serves as the super administrator account. defaults to +86.
                     * @param _countryCode Specifies the country code of the mobile number that serves as the super administrator account. defaults to +86.
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                private:

                    /**
                     * Captcha target, currently supported: rebind super administrator account, BindSuperAdmin; trial version business upgrade verification, ChannelUpdateVerify.
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * Specifies the mobile number as the super admin account.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Specifies the sms verification code.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Official cloud disk instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the country code of the mobile number that serves as the super administrator account. defaults to +86.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_VERIFYSMSCODEREQUEST_H_
