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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONREQUEST_H_

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
                * ReportConversion request structure.
                */
                class ReportConversionRequest : public AbstractModel
                {
                public:
                    ReportConversionRequest();
                    ~ReportConversionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SMS SdkAppId generated after an application is created in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as “1400006666”.
                     * @return SmsSdkAppId The SMS SdkAppId generated after an application is created in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as “1400006666”.
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置The SMS SdkAppId generated after an application is created in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as “1400006666”.
                     * @param _smsSdkAppId The SMS SdkAppId generated after an application is created in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as “1400006666”.
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
                     * 获取The serial number returned for a message sent.
                     * @return SerialNo The serial number returned for a message sent.
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置The serial number returned for a message sent.
                     * @param _serialNo The serial number returned for a message sent.
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
                     * 获取The recipient’s reply time in seconds in the format of UNIX timestamp.
                     * @return ConversionTime The recipient’s reply time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetConversionTime() const;

                    /**
                     * 设置The recipient’s reply time in seconds in the format of UNIX timestamp.
                     * @param _conversionTime The recipient’s reply time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetConversionTime(const uint64_t& _conversionTime);

                    /**
                     * 判断参数 ConversionTime 是否已赋值
                     * @return ConversionTime 是否已赋值
                     * 
                     */
                    bool ConversionTimeHasBeenSet() const;

                private:

                    /**
                     * The SMS SdkAppId generated after an application is created in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as “1400006666”.
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * The serial number returned for a message sent.
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * The recipient’s reply time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_conversionTime;
                    bool m_conversionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONREQUEST_H_
