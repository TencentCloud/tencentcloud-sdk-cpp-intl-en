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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUSBYPHONENUMBERREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUSBYPHONENUMBERREQUEST_H_

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
                * PullSmsReplyStatusByPhoneNumber request structure.
                */
                class PullSmsReplyStatusByPhoneNumberRequest : public AbstractModel
                {
                public:
                    PullSmsReplyStatusByPhoneNumberRequest();
                    ~PullSmsReplyStatusByPhoneNumberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pull start time in seconds in the format of UNIX timestamp.
Note: the data for the last 7 days can be pulled at most.
                     * @return BeginTime Pull start time in seconds in the format of UNIX timestamp.
Note: the data for the last 7 days can be pulled at most.
                     * 
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置Pull start time in seconds in the format of UNIX timestamp.
Note: the data for the last 7 days can be pulled at most.
                     * @param _beginTime Pull start time in seconds in the format of UNIX timestamp.
Note: the data for the last 7 days can be pulled at most.
                     * 
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Offset.
Note: this parameter is currently fixed at 0.
                     * @return Offset Offset.
Note: this parameter is currently fixed at 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
Note: this parameter is currently fixed at 0.
                     * @param _offset Offset.
Note: this parameter is currently fixed at 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of pulled entries. Maximum value: 100.
                     * @return Limit Maximum number of pulled entries. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of pulled entries. Maximum value: 100.
                     * @param _limit Maximum number of pulled entries. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Target mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @return PhoneNumber Target mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Target mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     * @param _phoneNumber Target mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
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
                     * 获取The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     * @return SmsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     * @param _smsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
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
                     * 获取Pull end time in seconds in the format of UNIX timestamp.
                     * @return EndTime Pull end time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Pull end time in seconds in the format of UNIX timestamp.
                     * @param _endTime Pull end time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Pull start time in seconds in the format of UNIX timestamp.
Note: the data for the last 7 days can be pulled at most.
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Offset.
Note: this parameter is currently fixed at 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of pulled entries. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Target mobile number in the E.164 standard (+[country/region code][mobile number]), such as +8613711112222, which has a + sign followed by 86 (country/region code) and then by 13711112222 (mobile number).
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * Pull end time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUSBYPHONENUMBERREQUEST_H_
