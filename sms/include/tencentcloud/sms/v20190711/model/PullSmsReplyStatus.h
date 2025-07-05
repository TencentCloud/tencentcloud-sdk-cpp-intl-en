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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUS_H_

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
        namespace V20190711
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
                     * 获取SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1).
                     * @return ExtendCode SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetExtendCode() const;

                    /**
                     * 设置SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1).
                     * @param _extendCode SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1).
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
                     * 获取Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @return PhoneNumber Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @param _phoneNumber Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
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
                     * 获取SMS signature.
                     * @return Sign SMS signature.
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 设置SMS signature.
                     * @param _sign SMS signature.
                     * 
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取User reply.
                     * @return ReplyContent User reply.
                     * 
                     */
                    std::string GetReplyContent() const;

                    /**
                     * 设置User reply.
                     * @param _replyContent User reply.
                     * 
                     */
                    void SetReplyContent(const std::string& _replyContent);

                    /**
                     * 判断参数 ReplyContent 是否已赋值
                     * @return ReplyContent 是否已赋值
                     * 
                     */
                    bool ReplyContentHasBeenSet() const;

                    /**
                     * 获取Reply time (e.g., 2019-10-08 17:18:37).
                     * @return ReplyTime Reply time (e.g., 2019-10-08 17:18:37).
                     * 
                     */
                    std::string GetReplyTime() const;

                    /**
                     * 设置Reply time (e.g., 2019-10-08 17:18:37).
                     * @param _replyTime Reply time (e.g., 2019-10-08 17:18:37).
                     * 
                     */
                    void SetReplyTime(const std::string& _replyTime);

                    /**
                     * 判断参数 ReplyTime 是否已赋值
                     * @return ReplyTime 是否已赋值
                     * 
                     */
                    bool ReplyTimeHasBeenSet() const;

                    /**
                     * 获取Reply time in seconds in the format of UNIX timestamp.
                     * @return ReplyUnixTime Reply time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetReplyUnixTime() const;

                    /**
                     * 设置Reply time in seconds in the format of UNIX timestamp.
                     * @param _replyUnixTime Reply time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetReplyUnixTime(const uint64_t& _replyUnixTime);

                    /**
                     * 判断参数 ReplyUnixTime 是否已赋值
                     * @return ReplyUnixTime 是否已赋值
                     * 
                     */
                    bool ReplyUnixTimeHasBeenSet() const;

                private:

                    /**
                     * SMS code number extension, which is not activated by default. If you need to activate it, please contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1).
                     */
                    std::string m_extendCode;
                    bool m_extendCodeHasBeenSet;

                    /**
                     * Country (or region) code.
                     */
                    std::string m_nationCode;
                    bool m_nationCodeHasBeenSet;

                    /**
                     * Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * SMS signature.
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * User reply.
                     */
                    std::string m_replyContent;
                    bool m_replyContentHasBeenSet;

                    /**
                     * Reply time (e.g., 2019-10-08 17:18:37).
                     */
                    std::string m_replyTime;
                    bool m_replyTimeHasBeenSet;

                    /**
                     * Reply time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_replyUnixTime;
                    bool m_replyUnixTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUS_H_
