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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMQUIETINTERVAL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMQUIETINTERVAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Alarm do-not-disturb time interval.
                */
                class AlarmQuietInterval : public AbstractModel
                {
                public:
                    AlarmQuietInterval();
                    ~AlarmQuietInterval() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ISO standard. 1 means monday, 7 means sunday.
                     * @return DaysOfWeek ISO standard. 1 means monday, 7 means sunday.
                     * 
                     */
                    std::vector<uint64_t> GetDaysOfWeek() const;

                    /**
                     * 设置ISO standard. 1 means monday, 7 means sunday.
                     * @param _daysOfWeek ISO standard. 1 means monday, 7 means sunday.
                     * 
                     */
                    void SetDaysOfWeek(const std::vector<uint64_t>& _daysOfWeek);

                    /**
                     * 判断参数 DaysOfWeek 是否已赋值
                     * @return DaysOfWeek 是否已赋值
                     * 
                     */
                    bool DaysOfWeekHasBeenSet() const;

                    /**
                     * 获取Start time. precision: hour/minute/second. format: HH:mm:ss.
                     * @return StartTime Start time. precision: hour/minute/second. format: HH:mm:ss.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. precision: hour/minute/second. format: HH:mm:ss.
                     * @param _startTime Start time. precision: hour/minute/second. format: HH:mm:ss.
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
                     * 获取End time. precision: hour/minute/second. format: HH:mm:ss.
                     * @return EndTime End time. precision: hour/minute/second. format: HH:mm:ss.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. precision: hour/minute/second. format: HH:mm:ss.
                     * @param _endTime End time. precision: hour/minute/second. format: HH:mm:ss.
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
                     * ISO standard. 1 means monday, 7 means sunday.
                     */
                    std::vector<uint64_t> m_daysOfWeek;
                    bool m_daysOfWeekHasBeenSet;

                    /**
                     * Start time. precision: hour/minute/second. format: HH:mm:ss.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. precision: hour/minute/second. format: HH:mm:ss.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMQUIETINTERVAL_H_
