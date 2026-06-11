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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EVENTLOG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EVENTLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Windows event log collection configuration
                */
                class EventLog : public AbstractModel
                {
                public:
                    EventLog();
                    ~EventLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event channel, support
-Application log
-Security log
-Startup log
-System log
-ALL logs

                     * @return EventChannel Event channel, support
-Application log
-Security log
-Startup log
-System log
-ALL logs

                     * 
                     */
                    std::string GetEventChannel() const;

                    /**
                     * 设置Event channel, support
-Application log
-Security log
-Startup log
-System log
-ALL logs

                     * @param _eventChannel Event channel, support
-Application log
-Security log
-Startup log
-System log
-ALL logs

                     * 
                     */
                    void SetEventChannel(const std::string& _eventChannel);

                    /**
                     * 判断参数 EventChannel 是否已赋值
                     * @return EventChannel 是否已赋值
                     * 
                     */
                    bool EventChannelHasBeenSet() const;

                    /**
                     * 获取Supported types of the time field (Timestamp)
-1 (User-customized time)
-2 (current time)
                     * @return TimeType Supported types of the time field (Timestamp)
-1 (User-customized time)
-2 (current time)
                     * 
                     */
                    uint64_t GetTimeType() const;

                    /**
                     * 设置Supported types of the time field (Timestamp)
-1 (User-customized time)
-2 (current time)
                     * @param _timeType Supported types of the time field (Timestamp)
-1 (User-customized time)
-2 (current time)
                     * 
                     */
                    void SetTimeType(const uint64_t& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取Time, when users choose custom time type, specify the time in seconds
Format: timestamp, 1754897446
                     * @return Timestamp Time, when users choose custom time type, specify the time in seconds
Format: timestamp, 1754897446
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Time, when users choose custom time type, specify the time in seconds
Format: timestamp, 1754897446
                     * @param _timestamp Time, when users choose custom time type, specify the time in seconds
Format: timestamp, 1754897446
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Event ID filter list
	
Optional. Being empty indicates no filtering is applied.
Support forward filtering for a single value (for example: 20) or a range (for example: 0-20), also support reverse filtering for a single value (for example: -20).
Multiple filter items can be separated by commas, for example: 1-200,-100 means collect event logs within the range of 1-200 except 100.
                     * @return EventIDs Event ID filter list
	
Optional. Being empty indicates no filtering is applied.
Support forward filtering for a single value (for example: 20) or a range (for example: 0-20), also support reverse filtering for a single value (for example: -20).
Multiple filter items can be separated by commas, for example: 1-200,-100 means collect event logs within the range of 1-200 except 100.
                     * 
                     */
                    std::vector<std::string> GetEventIDs() const;

                    /**
                     * 设置Event ID filter list
	
Optional. Being empty indicates no filtering is applied.
Support forward filtering for a single value (for example: 20) or a range (for example: 0-20), also support reverse filtering for a single value (for example: -20).
Multiple filter items can be separated by commas, for example: 1-200,-100 means collect event logs within the range of 1-200 except 100.
                     * @param _eventIDs Event ID filter list
	
Optional. Being empty indicates no filtering is applied.
Support forward filtering for a single value (for example: 20) or a range (for example: 0-20), also support reverse filtering for a single value (for example: -20).
Multiple filter items can be separated by commas, for example: 1-200,-100 means collect event logs within the range of 1-200 except 100.
                     * 
                     */
                    void SetEventIDs(const std::vector<std::string>& _eventIDs);

                    /**
                     * 判断参数 EventIDs 是否已赋值
                     * @return EventIDs 是否已赋值
                     * 
                     */
                    bool EventIDsHasBeenSet() const;

                private:

                    /**
                     * Event channel, support
-Application log
-Security log
-Startup log
-System log
-ALL logs

                     */
                    std::string m_eventChannel;
                    bool m_eventChannelHasBeenSet;

                    /**
                     * Supported types of the time field (Timestamp)
-1 (User-customized time)
-2 (current time)
                     */
                    uint64_t m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * Time, when users choose custom time type, specify the time in seconds
Format: timestamp, 1754897446
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Event ID filter list
	
Optional. Being empty indicates no filtering is applied.
Support forward filtering for a single value (for example: 20) or a range (for example: 0-20), also support reverse filtering for a single value (for example: -20).
Multiple filter items can be separated by commas, for example: 1-200,-100 means collect event logs within the range of 1-200 except 100.
                     */
                    std::vector<std::string> m_eventIDs;
                    bool m_eventIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EVENTLOG_H_
