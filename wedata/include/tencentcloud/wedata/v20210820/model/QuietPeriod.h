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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_QUIETPERIOD_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_QUIETPERIOD_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DataInLong - Alarm do-not-disturb time
                */
                class QuietPeriod : public AbstractModel
                {
                public:
                    QuietPeriod();
                    ~QuietPeriod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Represents the days of the week, 1 for Monday, 7 for Sunday, and so on
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DaysOfWeek Represents the days of the week, 1 for Monday, 7 for Sunday, and so on
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetDaysOfWeek() const;

                    /**
                     * 设置Represents the days of the week, 1 for Monday, 7 for Sunday, and so on
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _daysOfWeek Represents the days of the week, 1 for Monday, 7 for Sunday, and so on
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime End timeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * Represents the days of the week, 1 for Monday, 7 for Sunday, and so on
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> m_daysOfWeek;
                    bool m_daysOfWeekHasBeenSet;

                    /**
                     * Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_QUIETPERIOD_H_
