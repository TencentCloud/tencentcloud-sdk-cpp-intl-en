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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUS_H_

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
                * SMS reply status
                */
                class PullSmsReplyStatus : public AbstractModel
                {
                public:
                    PullSmsReplyStatus();
                    ~PullSmsReplyStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * @return ExtendCode SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     */
                    std::string GetExtendCode() const;

                    /**
                     * 设置SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     * @param ExtendCode SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     */
                    void SetExtendCode(const std::string& _extendCode);

                    /**
                     * 判断参数 ExtendCode 是否已赋值
                     * @return ExtendCode 是否已赋值
                     */
                    bool ExtendCodeHasBeenSet() const;

                    /**
                     * 获取Country (or region) code.
                     * @return CountryCode Country (or region) code.
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Country (or region) code.
                     * @param CountryCode Country (or region) code.
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @return PhoneNumber Mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @param PhoneNumber Mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取SMS signature name.
                     * @return SignName SMS signature name.
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置SMS signature name.
                     * @param SignName SMS signature name.
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取User reply.
                     * @return ReplyContent User reply.
                     */
                    std::string GetReplyContent() const;

                    /**
                     * 设置User reply.
                     * @param ReplyContent User reply.
                     */
                    void SetReplyContent(const std::string& _replyContent);

                    /**
                     * 判断参数 ReplyContent 是否已赋值
                     * @return ReplyContent 是否已赋值
                     */
                    bool ReplyContentHasBeenSet() const;

                    /**
                     * 获取Reply time in seconds in the format of UNIX timestamp.
                     * @return ReplyTime Reply time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t GetReplyTime() const;

                    /**
                     * 设置Reply time in seconds in the format of UNIX timestamp.
                     * @param ReplyTime Reply time in seconds in the format of UNIX timestamp.
                     */
                    void SetReplyTime(const uint64_t& _replyTime);

                    /**
                     * 判断参数 ReplyTime 是否已赋值
                     * @return ReplyTime 是否已赋值
                     */
                    bool ReplyTimeHasBeenSet() const;

                    /**
                     * 获取User's mobile number in a common format such as 13711112222.
                     * @return SubscriberNumber User's mobile number in a common format such as 13711112222.
                     */
                    std::string GetSubscriberNumber() const;

                    /**
                     * 设置User's mobile number in a common format such as 13711112222.
                     * @param SubscriberNumber User's mobile number in a common format such as 13711112222.
                     */
                    void SetSubscriberNumber(const std::string& _subscriberNumber);

                    /**
                     * 判断参数 SubscriberNumber 是否已赋值
                     * @return SubscriberNumber 是否已赋值
                     */
                    bool SubscriberNumberHasBeenSet() const;

                private:

                    /**
                     * SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                     */
                    std::string m_extendCode;
                    bool m_extendCodeHasBeenSet;

                    /**
                     * Country (or region) code.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * SMS signature name.
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * User reply.
                     */
                    std::string m_replyContent;
                    bool m_replyContentHasBeenSet;

                    /**
                     * Reply time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_replyTime;
                    bool m_replyTimeHasBeenSet;

                    /**
                     * User's mobile number in a common format such as 13711112222.
                     */
                    std::string m_subscriberNumber;
                    bool m_subscriberNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUS_H_
