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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEDATAREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeData request structure.
                */
                class DescribeDataRequest : public AbstractModel
                {
                public:
                    DescribeDataRequest();
                    ~DescribeDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time in seconds
                     * @return StartTime Start time in seconds
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time in seconds
                     * @param _startTime Start time in seconds
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in seconds
                     * @return EndTime End time in seconds
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time in seconds
                     * @param _endTime End time in seconds
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Time granularity. Valid values: 1: 1 day, 2: 1 hour, 3: 1 minute, 4: 10 minutes, 5: 30 minutes
                     * @return TimeType Time granularity. Valid values: 1: 1 day, 2: 1 hour, 3: 1 minute, 4: 10 minutes, 5: 30 minutes
                     * 
                     */
                    int64_t GetTimeType() const;

                    /**
                     * 设置Time granularity. Valid values: 1: 1 day, 2: 1 hour, 3: 1 minute, 4: 10 minutes, 5: 30 minutes
                     * @param _timeType Time granularity. Valid values: 1: 1 day, 2: 1 hour, 3: 1 minute, 4: 10 minutes, 5: 30 minutes
                     * 
                     */
                    void SetTimeType(const int64_t& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取MatchCode
                     * @return MatchCode MatchCode
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置MatchCode
                     * @param _matchCode MatchCode
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                private:

                    /**
                     * Start time in seconds
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in seconds
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Time granularity. Valid values: 1: 1 day, 2: 1 hour, 3: 1 minute, 4: 10 minutes, 5: 30 minutes
                     */
                    int64_t m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * MatchCode
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEDATAREQUEST_H_
