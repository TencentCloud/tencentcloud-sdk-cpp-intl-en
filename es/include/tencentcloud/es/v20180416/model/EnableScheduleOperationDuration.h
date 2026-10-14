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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_ENABLESCHEDULEOPERATIONDURATION_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_ENABLESCHEDULEOPERATIONDURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Placement group async task maintenance time period
                */
                class EnableScheduleOperationDuration : public AbstractModel
                {
                public:
                    EnableScheduleOperationDuration();
                    ~EnableScheduleOperationDuration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date when enabling an asynchronous task is supported
                     * @return Periods Date when enabling an asynchronous task is supported
                     * 
                     */
                    std::vector<std::string> GetPeriods() const;

                    /**
                     * 设置Date when enabling an asynchronous task is supported
                     * @param _periods Date when enabling an asynchronous task is supported
                     * 
                     */
                    void SetPeriods(const std::vector<std::string>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取Enable async start time
                     * @return TimeStart Enable async start time
                     * 
                     */
                    std::string GetTimeStart() const;

                    /**
                     * 设置Enable async start time
                     * @param _timeStart Enable async start time
                     * 
                     */
                    void SetTimeStart(const std::string& _timeStart);

                    /**
                     * 判断参数 TimeStart 是否已赋值
                     * @return TimeStart 是否已赋值
                     * 
                     */
                    bool TimeStartHasBeenSet() const;

                    /**
                     * 获取Supports enabling asynchronous termination time
                     * @return TimeEnd Supports enabling asynchronous termination time
                     * 
                     */
                    std::string GetTimeEnd() const;

                    /**
                     * 设置Supports enabling asynchronous termination time
                     * @param _timeEnd Supports enabling asynchronous termination time
                     * 
                     */
                    void SetTimeEnd(const std::string& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取Enable async time zone
                     * @return TimeZone Enable async time zone
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Enable async time zone
                     * @param _timeZone Enable async time zone
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Date when enabling an asynchronous task is supported
                     */
                    std::vector<std::string> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * Enable async start time
                     */
                    std::string m_timeStart;
                    bool m_timeStartHasBeenSet;

                    /**
                     * Supports enabling asynchronous termination time
                     */
                    std::string m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * Enable async time zone
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ENABLESCHEDULEOPERATIONDURATION_H_
