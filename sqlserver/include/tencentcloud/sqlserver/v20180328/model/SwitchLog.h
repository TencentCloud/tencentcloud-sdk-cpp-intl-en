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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SWITCHLOG_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SWITCHLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Primary/Secondary Switchover Log
                */
                class SwitchLog : public AbstractModel
                {
                public:
                    SwitchLog();
                    ~SwitchLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switchover Event ID
                     * @return EventId Switchover Event ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Switchover Event ID
                     * @param _eventId Switchover Event ID
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Switchover Mode 0-System Automatic Switchover, 1-Manual Switchover
                     * @return SwitchType Switchover Mode 0-System Automatic Switchover, 1-Manual Switchover
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置Switchover Mode 0-System Automatic Switchover, 1-Manual Switchover
                     * @param _switchType Switchover Mode 0-System Automatic Switchover, 1-Manual Switchover
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取Switchover Start Time
                     * @return StartTime Switchover Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Switchover Start Time
                     * @param _startTime Switchover Start Time
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
                     * 获取Switchover End Time
                     * @return EndTime Switchover End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Switchover End Time
                     * @param _endTime Switchover End Time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Machine failure causes automatic switchover.
                     * @return Reason Machine failure causes automatic switchover.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Machine failure causes automatic switchover.
                     * @param _reason Machine failure causes automatic switchover.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Switchover Event ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Switchover Mode 0-System Automatic Switchover, 1-Manual Switchover
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * Switchover Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Switchover End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Machine failure causes automatic switchover.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SWITCHLOG_H_
