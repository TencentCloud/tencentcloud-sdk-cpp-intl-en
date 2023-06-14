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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PHONENUMBERINFO_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PHONENUMBERINFO_H_

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
                * Mobile number information.
                */
                class PhoneNumberInfo : public AbstractModel
                {
                public:
                    PhoneNumberInfo();
                    ~PhoneNumberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error code for mobile number information query. `Ok` will be returned if the query is successful.
                     * @return Code Error code for mobile number information query. `Ok` will be returned if the query is successful.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Error code for mobile number information query. `Ok` will be returned if the query is successful.
                     * @param _code Error code for mobile number information query. `Ok` will be returned if the query is successful.
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
                     * 获取Description of the error code for mobile number information query.
                     * @return Message Description of the error code for mobile number information query.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Description of the error code for mobile number information query.
                     * @param _message Description of the error code for mobile number information query.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Country (or region) code.
                     * @return NationCode Country (or region) code.
                     * 
                     */
                    std::string GetNationCode() const;

                    /**
                     * 设置Country (or region) code.
                     * @param _nationCode Country (or region) code.
                     * 
                     */
                    void SetNationCode(const std::string& _nationCode);

                    /**
                     * 判断参数 NationCode 是否已赋值
                     * @return NationCode 是否已赋值
                     * 
                     */
                    bool NationCodeHasBeenSet() const;

                    /**
                     * 获取Subscriber number in normal format such as 13711112222, without any prefix (country or region code).
                     * @return SubscriberNumber Subscriber number in normal format such as 13711112222, without any prefix (country or region code).
                     * 
                     */
                    std::string GetSubscriberNumber() const;

                    /**
                     * 设置Subscriber number in normal format such as 13711112222, without any prefix (country or region code).
                     * @param _subscriberNumber Subscriber number in normal format such as 13711112222, without any prefix (country or region code).
                     * 
                     */
                    void SetSubscriberNumber(const std::string& _subscriberNumber);

                    /**
                     * 判断参数 SubscriberNumber 是否已赋值
                     * @return SubscriberNumber 是否已赋值
                     * 
                     */
                    bool SubscriberNumberHasBeenSet() const;

                    /**
                     * 获取The standardized mobile number in E.164 format after parsing, which is consistent with the parsed number for SMS message delivery. If the parsing fails, the original number will be returned.
                     * @return PhoneNumber The standardized mobile number in E.164 format after parsing, which is consistent with the parsed number for SMS message delivery. If the parsing fails, the original number will be returned.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置The standardized mobile number in E.164 format after parsing, which is consistent with the parsed number for SMS message delivery. If the parsing fails, the original number will be returned.
                     * @param _phoneNumber The standardized mobile number in E.164 format after parsing, which is consistent with the parsed number for SMS message delivery. If the parsing fails, the original number will be returned.
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
                     * 获取Country or region code such as CN and US. If the country or region code cannot be identified, `DEF` will be returned by default.
                     * @return IsoCode Country or region code such as CN and US. If the country or region code cannot be identified, `DEF` will be returned by default.
                     * 
                     */
                    std::string GetIsoCode() const;

                    /**
                     * 设置Country or region code such as CN and US. If the country or region code cannot be identified, `DEF` will be returned by default.
                     * @param _isoCode Country or region code such as CN and US. If the country or region code cannot be identified, `DEF` will be returned by default.
                     * 
                     */
                    void SetIsoCode(const std::string& _isoCode);

                    /**
                     * 判断参数 IsoCode 是否已赋值
                     * @return IsoCode 是否已赋值
                     * 
                     */
                    bool IsoCodeHasBeenSet() const;

                    /**
                     * 获取Country code or region name such as China. For more information, see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1#.E6.97.A5.E7.BB.93.E5.90.8E.E4.BB.98.E8.B4.B9.3Ca-id.3D.22post-payment.22.3E.3C.2Fa.3E)
                     * @return IsoName Country code or region name such as China. For more information, see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1#.E6.97.A5.E7.BB.93.E5.90.8E.E4.BB.98.E8.B4.B9.3Ca-id.3D.22post-payment.22.3E.3C.2Fa.3E)
                     * 
                     */
                    std::string GetIsoName() const;

                    /**
                     * 设置Country code or region name such as China. For more information, see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1#.E6.97.A5.E7.BB.93.E5.90.8E.E4.BB.98.E8.B4.B9.3Ca-id.3D.22post-payment.22.3E.3C.2Fa.3E)
                     * @param _isoName Country code or region name such as China. For more information, see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1#.E6.97.A5.E7.BB.93.E5.90.8E.E4.BB.98.E8.B4.B9.3Ca-id.3D.22post-payment.22.3E.3C.2Fa.3E)
                     * 
                     */
                    void SetIsoName(const std::string& _isoName);

                    /**
                     * 判断参数 IsoName 是否已赋值
                     * @return IsoName 是否已赋值
                     * 
                     */
                    bool IsoNameHasBeenSet() const;

                private:

                    /**
                     * Error code for mobile number information query. `Ok` will be returned if the query is successful.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Description of the error code for mobile number information query.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Country (or region) code.
                     */
                    std::string m_nationCode;
                    bool m_nationCodeHasBeenSet;

                    /**
                     * Subscriber number in normal format such as 13711112222, without any prefix (country or region code).
                     */
                    std::string m_subscriberNumber;
                    bool m_subscriberNumberHasBeenSet;

                    /**
                     * The standardized mobile number in E.164 format after parsing, which is consistent with the parsed number for SMS message delivery. If the parsing fails, the original number will be returned.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Country or region code such as CN and US. If the country or region code cannot be identified, `DEF` will be returned by default.
                     */
                    std::string m_isoCode;
                    bool m_isoCodeHasBeenSet;

                    /**
                     * Country code or region name such as China. For more information, see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1#.E6.97.A5.E7.BB.93.E5.90.8E.E4.BB.98.E8.B4.B9.3Ca-id.3D.22post-payment.22.3E.3C.2Fa.3E)
                     */
                    std::string m_isoName;
                    bool m_isoNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PHONENUMBERINFO_H_
