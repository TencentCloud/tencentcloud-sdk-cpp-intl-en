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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEXEVENTSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEXEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeXEvents request structure.
                */
                class DescribeXEventsRequest : public AbstractModel
                {
                public:
                    DescribeXEventsRequest();
                    ~DescribeXEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  deadlock` (deadlock event).
                     * @return EventType Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  deadlock` (deadlock event).
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  deadlock` (deadlock event).
                     * @param EventType Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  deadlock` (deadlock event).
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Generation start time of an extended file
                     * @return StartTime Generation start time of an extended file
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Generation start time of an extended file
                     * @param StartTime Generation start time of an extended file
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Generation end time of an extended file
                     * @return EndTime Generation end time of an extended file
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Generation end time of an extended file
                     * @param EndTime Generation end time of an extended file
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: `0`
                     * @return Offset Page number. Default value: `0`
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`
                     * @param Offset Page number. Default value: `0`
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     * @return Limit Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     * @param Limit Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  deadlock` (deadlock event).
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Generation start time of an extended file
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Generation end time of an extended file
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Page number. Default value: `0`
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEXEVENTSREQUEST_H_
