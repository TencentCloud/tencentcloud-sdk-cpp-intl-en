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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CRONJOB_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CRONJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Data structure of periodic rule execution
                */
                class CronJob : public AbstractModel
                {
                public:
                    CronJob();
                    ~CronJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Days in each month for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Days Days in each month for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetDays() const;

                    /**
                     * 设置Days in each month for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _days Days in each month for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDays(const std::vector<uint64_t>& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取Days of each week for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WDays Days of each week for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetWDays() const;

                    /**
                     * 设置Days of each week for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wDays Days of each week for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWDays(const std::vector<uint64_t>& _wDays);

                    /**
                     * 判断参数 WDays 是否已赋值
                     * @return WDays 是否已赋值
                     * 
                     */
                    bool WDaysHasBeenSet() const;

                    /**
                     * 获取Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Days in each month for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * Days of each week for execution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_wDays;
                    bool m_wDaysHasBeenSet;

                    /**
                     * Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CRONJOB_H_
