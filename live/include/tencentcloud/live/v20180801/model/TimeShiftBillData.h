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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTBILLDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTBILLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * The time shifting billing data.
                */
                class TimeShiftBillData : public AbstractModel
                {
                public:
                    TimeShiftBillData();
                    ~TimeShiftBillData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The push domain name.
                     * @return Domain The push domain name.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The push domain name.
                     * @param Domain The push domain name.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The time-shift video length (minutes).
                     * @return Duration The time-shift video length (minutes).
                     */
                    double GetDuration() const;

                    /**
                     * 设置The time-shift video length (minutes).
                     * @param Duration The time-shift video length (minutes).
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The time-shift days.
                     * @return StoragePeriod The time-shift days.
                     */
                    double GetStoragePeriod() const;

                    /**
                     * 设置The time-shift days.
                     * @param StoragePeriod The time-shift days.
                     */
                    void SetStoragePeriod(const double& _storagePeriod);

                    /**
                     * 判断参数 StoragePeriod 是否已赋值
                     * @return StoragePeriod 是否已赋值
                     */
                    bool StoragePeriodHasBeenSet() const;

                    /**
                     * 获取The time for the data returned. Format: YYYY-MM-DDThh:mm:ssZ.
                     * @return Time The time for the data returned. Format: YYYY-MM-DDThh:mm:ssZ.
                     */
                    std::string GetTime() const;

                    /**
                     * 设置The time for the data returned. Format: YYYY-MM-DDThh:mm:ssZ.
                     * @param Time The time for the data returned. Format: YYYY-MM-DDThh:mm:ssZ.
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The total time-shift duration (minutes).
                     * @return TotalDuration The total time-shift duration (minutes).
                     */
                    double GetTotalDuration() const;

                    /**
                     * 设置The total time-shift duration (minutes).
                     * @param TotalDuration The total time-shift duration (minutes).
                     */
                    void SetTotalDuration(const double& _totalDuration);

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     */
                    bool TotalDurationHasBeenSet() const;

                private:

                    /**
                     * The push domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The time-shift video length (minutes).
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The time-shift days.
                     */
                    double m_storagePeriod;
                    bool m_storagePeriodHasBeenSet;

                    /**
                     * The time for the data returned. Format: YYYY-MM-DDThh:mm:ssZ.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The total time-shift duration (minutes).
                     */
                    double m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTBILLDATA_H_
