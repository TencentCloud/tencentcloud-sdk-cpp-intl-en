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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTRECORD_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTRECORD_H_

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
                * A recorded time shifting session.
                */
                class TimeShiftRecord : public AbstractModel
                {
                public:
                    TimeShiftRecord();
                    ~TimeShiftRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The session ID.
                     * @return Sid The session ID.
                     */
                    std::string GetSid() const;

                    /**
                     * 设置The session ID.
                     * @param Sid The session ID.
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取The recording start time, which is a Unix timestamp.
                     * @return StartTime The recording start time, which is a Unix timestamp.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The recording start time, which is a Unix timestamp.
                     * @param StartTime The recording start time, which is a Unix timestamp.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The recording end time, which is a Unix timestamp.
                     * @return EndTime The recording end time, which is a Unix timestamp.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The recording end time, which is a Unix timestamp.
                     * @param EndTime The recording end time, which is a Unix timestamp.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The session ID.
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * The recording start time, which is a Unix timestamp.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The recording end time, which is a Unix timestamp.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTRECORD_H_
