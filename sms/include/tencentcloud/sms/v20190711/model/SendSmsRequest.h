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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * SendSms request structure.
                */
                class SendSmsRequest : public AbstractModel
                {
                public:
                    SendSmsRequest();
                    ~SendSmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target mobile number in the e.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Mainland China mobile numbers or all global mobile numbers).
Example: +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @return PhoneNumberSet Target mobile number in the e.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Mainland China mobile numbers or all global mobile numbers).
Example: +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::vector<std::string> GetPhoneNumberSet() const;

                    /**
                     * 设置Target mobile number in the e.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Mainland China mobile numbers or all global mobile numbers).
Example: +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @param PhoneNumberSet Target mobile number in the e.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Mainland China mobile numbers or all global mobile numbers).
Example: +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    void SetPhoneNumberSet(const std::vector<std::string>& _phoneNumberSet);

                    /**
                     * 判断参数 PhoneNumberSet 是否已赋值
                     * @return PhoneNumberSet 是否已赋值
                     */
                    bool PhoneNumberSetHasBeenSet() const;

                    /**
                     * 获取Template ID. You must enter the ID of an approved template, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist).
                     * @return TemplateID Template ID. You must enter the ID of an approved template, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist).
                     */
                    std::string GetTemplateID() const;

                    /**
                     * 设置Template ID. You must enter the ID of an approved template, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist).
                     * @param TemplateID Template ID. You must enter the ID of an approved template, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist).
                     */
                    void SetTemplateID(const std::string& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     */
                    bool TemplateIDHasBeenSet() const;

                    /**
                     * 获取SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     * @return SmsSdkAppid SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     */
                    std::string GetSmsSdkAppid() const;

                    /**
                     * 设置SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     * @param SmsSdkAppid SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     */
                    void SetSmsSdkAppid(const std::string& _smsSdkAppid);

                    /**
                     * 判断参数 SmsSdkAppid 是否已赋值
                     * @return SmsSdkAppid 是否已赋值
                     */
                    bool SmsSdkAppidHasBeenSet() const;

                    /**
                     * 获取The content of SMS signature should be encoded in UTF-8. You must enter an approved signature, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist). Note: this parameter is required for Mainland China SMS.
                     * @return Sign The content of SMS signature should be encoded in UTF-8. You must enter an approved signature, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist). Note: this parameter is required for Mainland China SMS.
                     */
                    std::string GetSign() const;

                    /**
                     * 设置The content of SMS signature should be encoded in UTF-8. You must enter an approved signature, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist). Note: this parameter is required for Mainland China SMS.
                     * @param Sign The content of SMS signature should be encoded in UTF-8. You must enter an approved signature, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist). Note: this parameter is required for Mainland China SMS.
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取Template parameter. If there is no template parameter, leave this parameter blank.
                     * @return TemplateParamSet Template parameter. If there is no template parameter, leave this parameter blank.
                     */
                    std::vector<std::string> GetTemplateParamSet() const;

                    /**
                     * 设置Template parameter. If there is no template parameter, leave this parameter blank.
                     * @param TemplateParamSet Template parameter. If there is no template parameter, leave this parameter blank.
                     */
                    void SetTemplateParamSet(const std::vector<std::string>& _templateParamSet);

                    /**
                     * 判断参数 TemplateParamSet 是否已赋值
                     * @return TemplateParamSet 是否已赋值
                     */
                    bool TemplateParamSetHasBeenSet() const;

                    /**
                     * 获取SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773).
                     * @return ExtendCode SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773).
                     */
                    std::string GetExtendCode() const;

                    /**
                     * 设置SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773).
                     * @param ExtendCode SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773).
                     */
                    void SetExtendCode(const std::string& _extendCode);

                    /**
                     * 判断参数 ExtendCode 是否已赋值
                     * @return ExtendCode 是否已赋值
                     */
                    bool ExtendCodeHasBeenSet() const;

                    /**
                     * 获取User session content, which can carry context information such as user-side ID and will be returned as-is by the server.
                     * @return SessionContext User session content, which can carry context information such as user-side ID and will be returned as-is by the server.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置User session content, which can carry context information such as user-side ID and will be returned as-is by the server.
                     * @param SessionContext User session content, which can carry context information such as user-side ID and will be returned as-is by the server.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取`senderid` for Global SMS, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773) for assistance. This parameter should be empty for Mainland China SMS.
                     * @return SenderId `senderid` for Global SMS, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773) for assistance. This parameter should be empty for Mainland China SMS.
                     */
                    std::string GetSenderId() const;

                    /**
                     * 设置`senderid` for Global SMS, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773) for assistance. This parameter should be empty for Mainland China SMS.
                     * @param SenderId `senderid` for Global SMS, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773) for assistance. This parameter should be empty for Mainland China SMS.
                     */
                    void SetSenderId(const std::string& _senderId);

                    /**
                     * 判断参数 SenderId 是否已赋值
                     * @return SenderId 是否已赋值
                     */
                    bool SenderIdHasBeenSet() const;

                private:

                    /**
                     * Target mobile number in the e.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Mainland China mobile numbers or all global mobile numbers).
Example: +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::vector<std::string> m_phoneNumberSet;
                    bool m_phoneNumberSetHasBeenSet;

                    /**
                     * Template ID. You must enter the ID of an approved template, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist).
                     */
                    std::string m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     */
                    std::string m_smsSdkAppid;
                    bool m_smsSdkAppidHasBeenSet;

                    /**
                     * The content of SMS signature should be encoded in UTF-8. You must enter an approved signature, which can be viewed in the [SMS Console](https://console.cloud.tencent.com/sms/smslist). Note: this parameter is required for Mainland China SMS.
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * Template parameter. If there is no template parameter, leave this parameter blank.
                     */
                    std::vector<std::string> m_templateParamSet;
                    bool m_templateParamSetHasBeenSet;

                    /**
                     * SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773).
                     */
                    std::string m_extendCode;
                    bool m_extendCodeHasBeenSet;

                    /**
                     * User session content, which can carry context information such as user-side ID and will be returned as-is by the server.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * `senderid` for Global SMS, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://cloud.tencent.com/document/product/382/3773) for assistance. This parameter should be empty for Mainland China SMS.
                     */
                    std::string m_senderId;
                    bool m_senderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSREQUEST_H_
