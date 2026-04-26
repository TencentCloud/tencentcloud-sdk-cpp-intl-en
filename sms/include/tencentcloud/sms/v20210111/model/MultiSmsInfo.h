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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MULTISMSINFO_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MULTISMSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * SMS information for each phone number in a batch delivery.
                */
                class MultiSmsInfo : public AbstractModel
                {
                public:
                    MultiSmsInfo();
                    ~MultiSmsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     * @return PhoneNumber Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     * @param _phoneNumber Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
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
                     * 获取Sender ID for Global SMS. For detail, please refer to the [Sender ID](https://www.tencentcloud.com/document/product/382/58270) Guidelines.
Note: This parameter applies solely to Global SMS. If you do not require a dedicated Sender ID, the public Sender ID will be used by default, and this parameter may be left blank.
Example: Qsms
                     * @return SenderId Sender ID for Global SMS. For detail, please refer to the [Sender ID](https://www.tencentcloud.com/document/product/382/58270) Guidelines.
Note: This parameter applies solely to Global SMS. If you do not require a dedicated Sender ID, the public Sender ID will be used by default, and this parameter may be left blank.
Example: Qsms
                     * 
                     */
                    std::string GetSenderId() const;

                    /**
                     * 设置Sender ID for Global SMS. For detail, please refer to the [Sender ID](https://www.tencentcloud.com/document/product/382/58270) Guidelines.
Note: This parameter applies solely to Global SMS. If you do not require a dedicated Sender ID, the public Sender ID will be used by default, and this parameter may be left blank.
Example: Qsms
                     * @param _senderId Sender ID for Global SMS. For detail, please refer to the [Sender ID](https://www.tencentcloud.com/document/product/382/58270) Guidelines.
Note: This parameter applies solely to Global SMS. If you do not require a dedicated Sender ID, the public Sender ID will be used by default, and this parameter may be left blank.
Example: Qsms
                     * 
                     */
                    void SetSenderId(const std::string& _senderId);

                    /**
                     * 判断参数 SenderId 是否已赋值
                     * @return SenderId 是否已赋值
                     * 
                     */
                    bool SenderIdHasBeenSet() const;

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

                private:

                    /**
                     * Target mobile number in the E.164 standard in the format of +[country/region code][mobile number]. Up to 200 mobile numbers are supported in one request (which should be all global mobile numbers). For example, +60198890000, which has a + sign followed by 60 (country/region code) and then by 198890000 (mobile number).
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Template ID, which can be viewed on the **Body Templates** page in [Global SMS](https://console.cloud.tencent.com/smsv2/isms-template). You must enter the ID of an approved template.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Template parameter. If there is no template parameter, leave this field empty.
<dx-alert infotype="notice" title="Note">The number of template parameters should be consistent with that of the template variables of `TemplateId`.</dx-alert>
                     */
                    std::vector<std::string> m_templateParamSet;
                    bool m_templateParamSetHasBeenSet;

                    /**
                     * Sender ID for Global SMS. For detail, please refer to the [Sender ID](https://www.tencentcloud.com/document/product/382/58270) Guidelines.
Note: This parameter applies solely to Global SMS. If you do not require a dedicated Sender ID, the public Sender ID will be used by default, and this parameter may be left blank.
Example: Qsms
                     */
                    std::string m_senderId;
                    bool m_senderIdHasBeenSet;

                    /**
                     * User session content, which can carry context information such as user-side ID and will be returned as-is by the server. Note that the length must be less than 512 bytes.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MULTISMSINFO_H_
