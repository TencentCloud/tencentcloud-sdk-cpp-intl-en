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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUS_H_

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
                * SMS delivery status details
                */
                class PullSmsSendStatus : public AbstractModel
                {
                public:
                    PullSmsSendStatus();
                    ~PullSmsSendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     * @return UserReceiveTime Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     */
                    uint64_t GetUserReceiveTime() const;

                    /**
                     * 设置Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     * @param UserReceiveTime Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     */
                    void SetUserReceiveTime(const uint64_t& _userReceiveTime);

                    /**
                     * 判断参数 UserReceiveTime 是否已赋值
                     * @return UserReceiveTime 是否已赋值
                     */
                    bool UserReceiveTimeHasBeenSet() const;

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
                     * 获取ID of the current delivery.
                     * @return SerialNo ID of the current delivery.
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置ID of the current delivery.
                     * @param SerialNo ID of the current delivery.
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     * @return ReportStatus Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     */
                    std::string GetReportStatus() const;

                    /**
                     * 设置Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     * @param ReportStatus Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     */
                    void SetReportStatus(const std::string& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     */
                    bool ReportStatusHasBeenSet() const;

                    /**
                     * 获取Description of SMS receipt by user.
                     * @return Description Description of SMS receipt by user.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of SMS receipt by user.
                     * @param Description Description of SMS receipt by user.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取User session content, which is the same as the `SessionContext` in the request and is empty by default. If you need to activate it, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionContext User session content, which is the same as the `SessionContext` in the request and is empty by default. If you need to activate it, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置User session content, which is the same as the `SessionContext` in the request and is empty by default. If you need to activate it, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SessionContext User session content, which is the same as the `SessionContext` in the request and is empty by default. If you need to activate it, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_userReceiveTime;
                    bool m_userReceiveTimeHasBeenSet;

                    /**
                     * Country (or region) code.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * User's mobile number in a common format such as 13711112222.
                     */
                    std::string m_subscriberNumber;
                    bool m_subscriberNumberHasBeenSet;

                    /**
                     * Mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * ID of the current delivery.
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     */
                    std::string m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                    /**
                     * Description of SMS receipt by user.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User session content, which is the same as the `SessionContext` in the request and is empty by default. If you need to activate it, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUS_H_
