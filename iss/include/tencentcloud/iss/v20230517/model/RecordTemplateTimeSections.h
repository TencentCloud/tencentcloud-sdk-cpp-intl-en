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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTEMPLATETIMESECTIONS_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTEMPLATETIMESECTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Data format of the time segment in the cloud template
                */
                class RecordTemplateTimeSections : public AbstractModel
                {
                public:
                    RecordTemplateTimeSections();
                    ~RecordTemplateTimeSections() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Day of the week. Value range: 1–7 (corresponding to Monday–Sunday)
                     * @return DayOfWeek Day of the week. Value range: 1–7 (corresponding to Monday–Sunday)
                     * 
                     */
                    int64_t GetDayOfWeek() const;

                    /**
                     * 设置Day of the week. Value range: 1–7 (corresponding to Monday–Sunday)
                     * @param _dayOfWeek Day of the week. Value range: 1–7 (corresponding to Monday–Sunday)
                     * 
                     */
                    void SetDayOfWeek(const int64_t& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取Start time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     * @return StartTime Start time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     * @param _startTime Start time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
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
                     * 获取End time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     * @return EndTime End time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     * @param _endTime End time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
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
                     * Day of the week. Value range: 1–7 (corresponding to Monday–Sunday)
                     */
                    int64_t m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * Start time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. Format: HH:MM:SS. Range: [00:00:00–23:59:59]
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTEMPLATETIMESECTIONS_H_
