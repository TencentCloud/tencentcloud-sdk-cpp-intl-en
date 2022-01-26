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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUS_H_

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
                * SMS delivery status
                */
                class SendStatus : public AbstractModel
                {
                public:
                    SendStatus();
                    ~SendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Delivery serial number.
                     * @return SerialNo Delivery serial number.
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置Delivery serial number.
                     * @param SerialNo Delivery serial number.
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

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
                     * 获取Number of billable SMS messages. For billing rules, see Billing Policy.
                     * @return Fee Number of billable SMS messages. For billing rules, see Billing Policy.
                     */
                    uint64_t GetFee() const;

                    /**
                     * 设置Number of billable SMS messages. For billing rules, see Billing Policy.
                     * @param Fee Number of billable SMS messages. For billing rules, see Billing Policy.
                     */
                    void SetFee(const uint64_t& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     */
                    bool FeeHasBeenSet() const;

                    /**
                     * 获取User session content.
                     * @return SessionContext User session content.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置User session content.
                     * @param SessionContext User session content.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取SMS request error code. For specific meanings, see [Error Codes](https://intl.cloud.tencent.com/zh/document/product/382/40536#6.-error-code). `Ok` will be returned for successful delivery.
                     * @return Code SMS request error code. For specific meanings, see [Error Codes](https://intl.cloud.tencent.com/zh/document/product/382/40536#6.-error-code). `Ok` will be returned for successful delivery.
                     */
                    std::string GetCode() const;

                    /**
                     * 设置SMS request error code. For specific meanings, see [Error Codes](https://intl.cloud.tencent.com/zh/document/product/382/40536#6.-error-code). `Ok` will be returned for successful delivery.
                     * @param Code SMS request error code. For specific meanings, see [Error Codes](https://intl.cloud.tencent.com/zh/document/product/382/40536#6.-error-code). `Ok` will be returned for successful delivery.
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取SMS request error message.
                     * @return Message SMS request error message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置SMS request error message.
                     * @param Message SMS request error message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Country/Region code, such as CN and US. For unrecognized country/region codes, `DEF` is returned by default. For the specific list of supported values, please see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1).
                     * @return IsoCode Country/Region code, such as CN and US. For unrecognized country/region codes, `DEF` is returned by default. For the specific list of supported values, please see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1).
                     */
                    std::string GetIsoCode() const;

                    /**
                     * 设置Country/Region code, such as CN and US. For unrecognized country/region codes, `DEF` is returned by default. For the specific list of supported values, please see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1).
                     * @param IsoCode Country/Region code, such as CN and US. For unrecognized country/region codes, `DEF` is returned by default. For the specific list of supported values, please see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1).
                     */
                    void SetIsoCode(const std::string& _isoCode);

                    /**
                     * 判断参数 IsoCode 是否已赋值
                     * @return IsoCode 是否已赋值
                     */
                    bool IsoCodeHasBeenSet() const;

                private:

                    /**
                     * Delivery serial number.
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * Mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Number of billable SMS messages. For billing rules, see Billing Policy.
                     */
                    uint64_t m_fee;
                    bool m_feeHasBeenSet;

                    /**
                     * User session content.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * SMS request error code. For specific meanings, see [Error Codes](https://intl.cloud.tencent.com/zh/document/product/382/40536#6.-error-code). `Ok` will be returned for successful delivery.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * SMS request error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Country/Region code, such as CN and US. For unrecognized country/region codes, `DEF` is returned by default. For the specific list of supported values, please see [Global SMS Price Overview](https://intl.cloud.tencent.com/document/product/382/18051?from_cn_redirect=1).
                     */
                    std::string m_isoCode;
                    bool m_isoCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUS_H_
