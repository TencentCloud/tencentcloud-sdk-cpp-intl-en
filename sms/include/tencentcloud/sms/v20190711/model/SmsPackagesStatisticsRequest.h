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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SmsPackagesStatistics request structure.
                */
                class SmsPackagesStatisticsRequest : public AbstractModel
                {
                public:
                    SmsPackagesStatisticsRequest();
                    ~SmsPackagesStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     * @return SmsSdkAppid SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     * 
                     */
                    std::string GetSmsSdkAppid() const;

                    /**
                     * 设置SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     * @param _smsSdkAppid SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     * 
                     */
                    void SetSmsSdkAppid(const std::string& _smsSdkAppid);

                    /**
                     * 判断参数 SmsSdkAppid 是否已赋值
                     * @return SmsSdkAppid 是否已赋值
                     * 
                     */
                    bool SmsSdkAppidHasBeenSet() const;

                    /**
                     * 获取Upper limit (number of packages to be pulled).
                     * @return Limit Upper limit (number of packages to be pulled).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Upper limit (number of packages to be pulled).
                     * @param _limit Upper limit (number of packages to be pulled).
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

                private:

                    /**
                     * SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     */
                    std::string m_smsSdkAppid;
                    bool m_smsSdkAppidHasBeenSet;

                    /**
                     * Upper limit (number of packages to be pulled).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
Note: this parameter is currently fixed at 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_
