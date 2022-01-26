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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_TIMINGSETTINGSRESP_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_TIMINGSETTINGSRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Event trigger time settings
                */
                class TimingSettingsResp : public AbstractModel
                {
                public:
                    TimingSettingsResp();
                    ~TimingSettingsResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event trigger type
                     * @return StartType Event trigger type
                     */
                    std::string GetStartType() const;

                    /**
                     * 设置Event trigger type
                     * @param StartType Event trigger type
                     */
                    void SetStartType(const std::string& _startType);

                    /**
                     * 判断参数 StartType 是否已赋值
                     * @return StartType 是否已赋值
                     */
                    bool StartTypeHasBeenSet() const;

                    /**
                     * 获取Not empty if `StartType` is `FIXED_TIME`
UTC time, such as `2020-01-01T12:00:00Z`
                     * @return Time Not empty if `StartType` is `FIXED_TIME`
UTC time, such as `2020-01-01T12:00:00Z`
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Not empty if `StartType` is `FIXED_TIME`
UTC time, such as `2020-01-01T12:00:00Z`
                     * @param Time Not empty if `StartType` is `FIXED_TIME`
UTC time, such as `2020-01-01T12:00:00Z`
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the start time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the current time.
                     * @return StartTime This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the start time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the current time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the start time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the current time.
                     * @param StartTime This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the start time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the current time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the end time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the start time for recording.
                     * @return EndTime This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the end time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the start time for recording.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the end time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the start time for recording.
                     * @param EndTime This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the end time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the start time for recording.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Event trigger type
                     */
                    std::string m_startType;
                    bool m_startTypeHasBeenSet;

                    /**
                     * Not empty if `StartType` is `FIXED_TIME`
UTC time, such as `2020-01-01T12:00:00Z`
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the start time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the current time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * This parameter cannot be empty if `EventType` is `TIMED_RECORD`.
It indicates the end time for recording in UTC format (e.g., `2020-01-01T12:00:00Z`) and must be at least 1 minute later than the start time for recording.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TIMINGSETTINGSRESP_H_
