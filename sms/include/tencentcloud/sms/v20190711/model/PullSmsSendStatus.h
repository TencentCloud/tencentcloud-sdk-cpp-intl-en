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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUS_H_

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
                     * 获取Actual time of SMS receipt by user.
                     * @return UserReceiveTime Actual time of SMS receipt by user.
                     * 
                     */
                    std::string GetUserReceiveTime() const;

                    /**
                     * 设置Actual time of SMS receipt by user.
                     * @param _userReceiveTime Actual time of SMS receipt by user.
                     * 
                     */
                    void SetUserReceiveTime(const std::string& _userReceiveTime);

                    /**
                     * 判断参数 UserReceiveTime 是否已赋值
                     * @return UserReceiveTime 是否已赋值
                     * 
                     */
                    bool UserReceiveTimeHasBeenSet() const;

                    /**
                     * 获取Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     * @return UserReceiveUnixTime Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetUserReceiveUnixTime() const;

                    /**
                     * 设置Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     * @param _userReceiveUnixTime Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetUserReceiveUnixTime(const uint64_t& _userReceiveUnixTime);

                    /**
                     * 判断参数 UserReceiveUnixTime 是否已赋值
                     * @return UserReceiveUnixTime 是否已赋值
                     * 
                     */
                    bool UserReceiveUnixTimeHasBeenSet() const;

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
                     * @return PurePhoneNumber Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * 
                     */
                    std::string GetPurePhoneNumber() const;

                    /**
                     * 设置Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @param _purePhoneNumber Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * 
                     */
                    void SetPurePhoneNumber(const std::string& _purePhoneNumber);

                    /**
                     * 判断参数 PurePhoneNumber 是否已赋值
                     * @return PurePhoneNumber 是否已赋值
                     * 
                     */
                    bool PurePhoneNumberHasBeenSet() const;

                    /**
                     * 获取Mobile number in a common format such as 13711112222.
                     * @return PhoneNumber Mobile number in a common format such as 13711112222.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number in a common format such as 13711112222.
                     * @param _phoneNumber Mobile number in a common format such as 13711112222.
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
                     * 获取ID of the current delivery.
                     * @return SerialNo ID of the current delivery.
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置ID of the current delivery.
                     * @param _serialNo ID of the current delivery.
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
                     * 获取Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     * @return ReportStatus Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     * 
                     */
                    std::string GetReportStatus() const;

                    /**
                     * 设置Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     * @param _reportStatus Whether the SMS message is actually received. Valid values: SUCCESS (success), FAIL (failure).
                     * 
                     */
                    void SetReportStatus(const std::string& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     * 
                     */
                    bool ReportStatusHasBeenSet() const;

                    /**
                     * 获取Description of SMS receipt by user.
                     * @return Description Description of SMS receipt by user.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of SMS receipt by user.
                     * @param _description Description of SMS receipt by user.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Actual time of SMS receipt by user.
                     */
                    std::string m_userReceiveTime;
                    bool m_userReceiveTimeHasBeenSet;

                    /**
                     * Actual time of SMS receipt by user in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_userReceiveUnixTime;
                    bool m_userReceiveUnixTimeHasBeenSet;

                    /**
                     * Country (or region) code.
                     */
                    std::string m_nationCode;
                    bool m_nationCodeHasBeenSet;

                    /**
                     * Mobile number in the e.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string m_purePhoneNumber;
                    bool m_purePhoneNumberHasBeenSet;

                    /**
                     * Mobile number in a common format such as 13711112222.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUS_H_
