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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICSREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICSREQUEST_H_

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
                * CallbackStatusStatistics request structure.
                */
                class CallbackStatusStatisticsRequest : public AbstractModel
                {
                public:
                    CallbackStatusStatisticsRequest();
                    ~CallbackStatusStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of pull in the format of `yyyymmddhh` accurate to the hour.
                     * @return StartDateTime Start time of pull in the format of `yyyymmddhh` accurate to the hour.
                     * 
                     */
                    uint64_t GetStartDateTime() const;

                    /**
                     * 设置Start time of pull in the format of `yyyymmddhh` accurate to the hour.
                     * @param _startDateTime Start time of pull in the format of `yyyymmddhh` accurate to the hour.
                     * 
                     */
                    void SetStartDateTime(const uint64_t& _startDateTime);

                    /**
                     * 判断参数 StartDateTime 是否已赋值
                     * @return StartDateTime 是否已赋值
                     * 
                     */
                    bool StartDateTimeHasBeenSet() const;

                    /**
                     * 获取End time of pull in the format of `yyyymmddhh` accurate to the hour.
Note: `EndDataTime` must be later than `StartDateTime`.
                     * @return EndDataTime End time of pull in the format of `yyyymmddhh` accurate to the hour.
Note: `EndDataTime` must be later than `StartDateTime`.
                     * 
                     */
                    uint64_t GetEndDataTime() const;

                    /**
                     * 设置End time of pull in the format of `yyyymmddhh` accurate to the hour.
Note: `EndDataTime` must be later than `StartDateTime`.
                     * @param _endDataTime End time of pull in the format of `yyyymmddhh` accurate to the hour.
Note: `EndDataTime` must be later than `StartDateTime`.
                     * 
                     */
                    void SetEndDataTime(const uint64_t& _endDataTime);

                    /**
                     * 判断参数 EndDataTime 是否已赋值
                     * @return EndDataTime 是否已赋值
                     * 
                     */
                    bool EndDataTimeHasBeenSet() const;

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
                     * 获取Upper limit.
Note: this parameter is currently fixed at 0.
                     * @return Limit Upper limit.
Note: this parameter is currently fixed at 0.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Upper limit.
Note: this parameter is currently fixed at 0.
                     * @param _limit Upper limit.
Note: this parameter is currently fixed at 0.
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
                     * Start time of pull in the format of `yyyymmddhh` accurate to the hour.
                     */
                    uint64_t m_startDateTime;
                    bool m_startDateTimeHasBeenSet;

                    /**
                     * End time of pull in the format of `yyyymmddhh` accurate to the hour.
Note: `EndDataTime` must be later than `StartDateTime`.
                     */
                    uint64_t m_endDataTime;
                    bool m_endDataTimeHasBeenSet;

                    /**
                     * SMS `SdkAppid` actually generated after an application is added in the [SMS Console](https://console.cloud.tencent.com/sms/smslist), such as 1400006666.
                     */
                    std::string m_smsSdkAppid;
                    bool m_smsSdkAppidHasBeenSet;

                    /**
                     * Upper limit.
Note: this parameter is currently fixed at 0.
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

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICSREQUEST_H_
