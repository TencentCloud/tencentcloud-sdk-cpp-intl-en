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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20190711/model/SmsPackagesStatistics.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * SmsPackagesStatistics response structure.
                */
                class SmsPackagesStatisticsResponse : public AbstractModel
                {
                public:
                    SmsPackagesStatisticsResponse();
                    ~SmsPackagesStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Delivery statistics response packet body.
                     * @return SmsPackagesStatisticsSet Delivery statistics response packet body.
                     */
                    std::vector<SmsPackagesStatistics> GetSmsPackagesStatisticsSet() const;

                    /**
                     * 判断参数 SmsPackagesStatisticsSet 是否已赋值
                     * @return SmsPackagesStatisticsSet 是否已赋值
                     */
                    bool SmsPackagesStatisticsSetHasBeenSet() const;

                private:

                    /**
                     * Delivery statistics response packet body.
                     */
                    std::vector<SmsPackagesStatistics> m_smsPackagesStatisticsSet;
                    bool m_smsPackagesStatisticsSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSRESPONSE_H_
