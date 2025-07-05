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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUS_H_

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
                * SMS sending status
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
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置Delivery serial number.
                     * @param _serialNo Delivery serial number.
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

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
                     * 获取Number of billable SMS messages. For billing rules, please see [Billing Policy](https://intl.cloud.tencent.com/document/product/382/36135?from_cn_redirect=1).
                     * @return Fee Number of billable SMS messages. For billing rules, please see [Billing Policy](https://intl.cloud.tencent.com/document/product/382/36135?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetFee() const;

                    /**
                     * 设置Number of billable SMS messages. For billing rules, please see [Billing Policy](https://intl.cloud.tencent.com/document/product/382/36135?from_cn_redirect=1).
                     * @param _fee Number of billable SMS messages. For billing rules, please see [Billing Policy](https://intl.cloud.tencent.com/document/product/382/36135?from_cn_redirect=1).
                     * 
                     */
                    void SetFee(const uint64_t& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     * 
                     */
                    bool FeeHasBeenSet() const;

                    /**
                     * 获取User session content.
                     * @return SessionContext User session content.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置User session content.
                     * @param _sessionContext User session content.
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
                     * 获取SMS request error code. For specific meanings, please see Error Codes.
                     * @return Code SMS request error code. For specific meanings, please see Error Codes.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置SMS request error code. For specific meanings, please see Error Codes.
                     * @param _code SMS request error code. For specific meanings, please see Error Codes.
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
                     * 获取SMS request error message.
                     * @return Message SMS request error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置SMS request error message.
                     * @param _message SMS request error message.
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
                     * 获取Country code or region code, such as CN and US. If the country code or region code is not obtained, the returned value will be 'DEF' by default. For more information on the supported list, see price overview for non-Mainland China regions.
                     * @return IsoCode Country code or region code, such as CN and US. If the country code or region code is not obtained, the returned value will be 'DEF' by default. For more information on the supported list, see price overview for non-Mainland China regions.
                     * 
                     */
                    std::string GetIsoCode() const;

                    /**
                     * 设置Country code or region code, such as CN and US. If the country code or region code is not obtained, the returned value will be 'DEF' by default. For more information on the supported list, see price overview for non-Mainland China regions.
                     * @param _isoCode Country code or region code, such as CN and US. If the country code or region code is not obtained, the returned value will be 'DEF' by default. For more information on the supported list, see price overview for non-Mainland China regions.
                     * 
                     */
                    void SetIsoCode(const std::string& _isoCode);

                    /**
                     * 判断参数 IsoCode 是否已赋值
                     * @return IsoCode 是否已赋值
                     * 
                     */
                    bool IsoCodeHasBeenSet() const;

                private:

                    /**
                     * Delivery serial number.
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Number of billable SMS messages. For billing rules, please see [Billing Policy](https://intl.cloud.tencent.com/document/product/382/36135?from_cn_redirect=1).
                     */
                    uint64_t m_fee;
                    bool m_feeHasBeenSet;

                    /**
                     * User session content.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * SMS request error code. For specific meanings, please see Error Codes.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * SMS request error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Country code or region code, such as CN and US. If the country code or region code is not obtained, the returned value will be 'DEF' by default. For more information on the supported list, see price overview for non-Mainland China regions.
                     */
                    std::string m_isoCode;
                    bool m_isoCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUS_H_
