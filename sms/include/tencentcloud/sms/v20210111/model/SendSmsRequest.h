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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDSMSREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDSMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
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
                     * 获取Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Chinese mainland mobile numbers or all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     * @return PhoneNumberSet Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Chinese mainland mobile numbers or all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     * 
                     */
                    std::vector<std::string> GetPhoneNumberSet() const;

                    /**
                     * 设置Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Chinese mainland mobile numbers or all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     * @param _phoneNumberSet Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Chinese mainland mobile numbers or all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     * 
                     */
                    void SetPhoneNumberSet(const std::vector<std::string>& _phoneNumberSet);

                    /**
                     * 判断参数 PhoneNumberSet 是否已赋值
                     * @return PhoneNumberSet 是否已赋值
                     * 
                     */
                    bool PhoneNumberSetHasBeenSet() const;

                    /**
                     * 获取The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * @return SmsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * @param _smsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * 
                     */
                    void SetSmsSdkAppId(const std::string& _smsSdkAppId);

                    /**
                     * 判断参数 SmsSdkAppId 是否已赋值
                     * @return SmsSdkAppId 是否已赋值
                     * 
                     */
                    bool SmsSdkAppIdHasBeenSet() const;

                    /**
                     * 获取Template ID, which can be viewed on the **Body Templates** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-template). You must enter the ID of an approved template.
                     * @return TemplateId Template ID, which can be viewed on the **Body Templates** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-template). You must enter the ID of an approved template.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Template ID, which can be viewed on the **Body Templates** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-template). You must enter the ID of an approved template.
                     * @param _templateId Template ID, which can be viewed on the **Body Templates** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-template). You must enter the ID of an approved template.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取SMS signature information which is encoded in UTF-8. You must enter an approved signature (such as Tencent Cloud). The signing information can be viewed on the **Signatures** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-sign).
                     * @return SignName SMS signature information which is encoded in UTF-8. You must enter an approved signature (such as Tencent Cloud). The signing information can be viewed on the **Signatures** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-sign).
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置SMS signature information which is encoded in UTF-8. You must enter an approved signature (such as Tencent Cloud). The signing information can be viewed on the **Signatures** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-sign).
                     * @param _signName SMS signature information which is encoded in UTF-8. You must enter an approved signature (such as Tencent Cloud). The signing information can be viewed on the **Signatures** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-sign).
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取Template parameter. If there is no template parameter, leave this field empty.
<dx-alert infotype="notice" title="Note">The number of template parameters should be consistent with that of the template variables of `TemplateId`.</dx-alert>
                     * @return TemplateParamSet Template parameter. If there is no template parameter, leave this field empty.
<dx-alert infotype="notice" title="Note">The number of template parameters should be consistent with that of the template variables of `TemplateId`.</dx-alert>
                     * 
                     */
                    std::vector<std::string> GetTemplateParamSet() const;

                    /**
                     * 设置Template parameter. If there is no template parameter, leave this field empty.
<dx-alert infotype="notice" title="Note">The number of template parameters should be consistent with that of the template variables of `TemplateId`.</dx-alert>
                     * @param _templateParamSet Template parameter. If there is no template parameter, leave this field empty.
<dx-alert infotype="notice" title="Note">The number of template parameters should be consistent with that of the template variables of `TemplateId`.</dx-alert>
                     * 
                     */
                    void SetTemplateParamSet(const std::vector<std::string>& _templateParamSet);

                    /**
                     * 判断参数 TemplateParamSet 是否已赋值
                     * @return TemplateParamSet 是否已赋值
                     * 
                     */
                    bool TemplateParamSetHasBeenSet() const;

                    /**
                     * 获取SMS code number extension, which is not activated by default. If you need to activate it, you can contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * @return ExtendCode SMS code number extension, which is not activated by default. If you need to activate it, you can contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * 
                     */
                    std::string GetExtendCode() const;

                    /**
                     * 设置SMS code number extension, which is not activated by default. If you need to activate it, you can contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * @param _extendCode SMS code number extension, which is not activated by default. If you need to activate it, you can contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * 
                     */
                    void SetExtendCode(const std::string& _extendCode);

                    /**
                     * 判断参数 ExtendCode 是否已赋值
                     * @return ExtendCode 是否已赋值
                     * 
                     */
                    bool ExtendCodeHasBeenSet() const;

                    /**
                     * 获取User session content, which can carry context information such as user-side ID and will be returned as-is by the server. Note that the length must be less than 512 bytes.
                     * @return SessionContext User session content, which can carry context information such as user-side ID and will be returned as-is by the server. Note that the length must be less than 512 bytes.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置User session content, which can carry context information such as user-side ID and will be returned as-is by the server. Note that the length must be less than 512 bytes.
                     * @param _sessionContext User session content, which can carry context information such as user-side ID and will be returned as-is by the server. Note that the length must be less than 512 bytes.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取For Global SMS, if you have applied for a separate `SenderId`, this parameter is required. By default, the public `SenderId` is used, in which case you don't need to enter this parameter.
Note: If your monthly usage reaches the specified threshold, you can apply for an independent `SenderId`. For more information, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * @return SenderId For Global SMS, if you have applied for a separate `SenderId`, this parameter is required. By default, the public `SenderId` is used, in which case you don't need to enter this parameter.
Note: If your monthly usage reaches the specified threshold, you can apply for an independent `SenderId`. For more information, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * 
                     */
                    std::string GetSenderId() const;

                    /**
                     * 设置For Global SMS, if you have applied for a separate `SenderId`, this parameter is required. By default, the public `SenderId` is used, in which case you don't need to enter this parameter.
Note: If your monthly usage reaches the specified threshold, you can apply for an independent `SenderId`. For more information, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * @param _senderId For Global SMS, if you have applied for a separate `SenderId`, this parameter is required. By default, the public `SenderId` is used, in which case you don't need to enter this parameter.
Note: If your monthly usage reaches the specified threshold, you can apply for an independent `SenderId`. For more information, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * 
                     */
                    void SetSenderId(const std::string& _senderId);

                    /**
                     * 判断参数 SenderId 是否已赋值
                     * @return SenderId 是否已赋值
                     * 
                     */
                    bool SenderIdHasBeenSet() const;

                private:

                    /**
                     * Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all Chinese mainland mobile numbers or all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     */
                    std::vector<std::string> m_phoneNumberSet;
                    bool m_phoneNumberSetHasBeenSet;

                    /**
                     * The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * Template ID, which can be viewed on the **Body Templates** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-template). You must enter the ID of an approved template.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * SMS signature information which is encoded in UTF-8. You must enter an approved signature (such as Tencent Cloud). The signing information can be viewed on the **Signatures** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-sign).
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * Template parameter. If there is no template parameter, leave this field empty.
<dx-alert infotype="notice" title="Note">The number of template parameters should be consistent with that of the template variables of `TemplateId`.</dx-alert>
                     */
                    std::vector<std::string> m_templateParamSet;
                    bool m_templateParamSetHasBeenSet;

                    /**
                     * SMS code number extension, which is not activated by default. If you need to activate it, you can contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     */
                    std::string m_extendCode;
                    bool m_extendCodeHasBeenSet;

                    /**
                     * User session content, which can carry context information such as user-side ID and will be returned as-is by the server. Note that the length must be less than 512 bytes.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * For Global SMS, if you have applied for a separate `SenderId`, this parameter is required. By default, the public `SenderId` is used, in which case you don't need to enter this parameter.
Note: If your monthly usage reaches the specified threshold, you can apply for an independent `SenderId`. For more information, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     */
                    std::string m_senderId;
                    bool m_senderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDSMSREQUEST_H_
