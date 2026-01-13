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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEEVENTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceEvent request structure.
                */
                class ModifyInstanceEventRequest : public AbstractModel
                {
                public:
                    ModifyInstanceEventRequest();
                    ~ModifyInstanceEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis#/) and copy the instance ID in the instance list.
                     * @return InstanceId Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis#/) and copy the instance ID in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis#/) and copy the instance ID in the instance list.
                     * @param _instanceId Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis#/) and copy the instance ID in the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Event ID. Call the [DescribeInstanceEvents](https://www.tencentcloud.com/document/product/239/104779?from_cn_redirect=1) API to obtain the ID of the event to be modified.
                     * @return EventId Event ID. Call the [DescribeInstanceEvents](https://www.tencentcloud.com/document/product/239/104779?from_cn_redirect=1) API to obtain the ID of the event to be modified.
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Event ID. Call the [DescribeInstanceEvents](https://www.tencentcloud.com/document/product/239/104779?from_cn_redirect=1) API to obtain the ID of the event to be modified.
                     * @param _eventId Event ID. Call the [DescribeInstanceEvents](https://www.tencentcloud.com/document/product/239/104779?from_cn_redirect=1) API to obtain the ID of the event to be modified.
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Modifies the scheduled start time of event execution.
                     * @return StartTime Modifies the scheduled start time of event execution.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Modifies the scheduled start time of event execution.
                     * @param _startTime Modifies the scheduled start time of event execution.
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
                     * 获取Modifies the scheduled end time of event execution. After the start time is configured, the end time can only be 30 minutes, 1 hour, 1.5 hours, 2 hours, or 3 hours later than the start time.
                     * @return EndTime Modifies the scheduled end time of event execution. After the start time is configured, the end time can only be 30 minutes, 1 hour, 1.5 hours, 2 hours, or 3 hours later than the start time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Modifies the scheduled end time of event execution. After the start time is configured, the end time can only be 30 minutes, 1 hour, 1.5 hours, 2 hours, or 3 hours later than the start time.
                     * @param _endTime Modifies the scheduled end time of event execution. After the start time is configured, the end time can only be 30 minutes, 1 hour, 1.5 hours, 2 hours, or 3 hours later than the start time.
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
                     * 获取Modifies the start date of the event execution schedule.
                     * @return ExecutionDate Modifies the start date of the event execution schedule.
                     * 
                     */
                    std::string GetExecutionDate() const;

                    /**
                     * 设置Modifies the start date of the event execution schedule.
                     * @param _executionDate Modifies the start date of the event execution schedule.
                     * 
                     */
                    void SetExecutionDate(const std::string& _executionDate);

                    /**
                     * 判断参数 ExecutionDate 是否已赋值
                     * @return ExecutionDate 是否已赋值
                     * 
                     */
                    bool ExecutionDateHasBeenSet() const;

                    /**
                     * 获取Modifies the running status of the event. Currently, this parameter can be set only to **Canceled**, indicating that the execution of the current event is canceled. You can query the running status and level of the current event using DescribeInstanceEvents.- Critical or High events cannot be canceled, which means that they must be executed.- Only events in the Waiting state (to be executed) can be canceled.
                     * @return Status Modifies the running status of the event. Currently, this parameter can be set only to **Canceled**, indicating that the execution of the current event is canceled. You can query the running status and level of the current event using DescribeInstanceEvents.- Critical or High events cannot be canceled, which means that they must be executed.- Only events in the Waiting state (to be executed) can be canceled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Modifies the running status of the event. Currently, this parameter can be set only to **Canceled**, indicating that the execution of the current event is canceled. You can query the running status and level of the current event using DescribeInstanceEvents.- Critical or High events cannot be canceled, which means that they must be executed.- Only events in the Waiting state (to be executed) can be canceled.
                     * @param _status Modifies the running status of the event. Currently, this parameter can be set only to **Canceled**, indicating that the execution of the current event is canceled. You can query the running status and level of the current event using DescribeInstanceEvents.- Critical or High events cannot be canceled, which means that they must be executed.- Only events in the Waiting state (to be executed) can be canceled.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis#/) and copy the instance ID in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Event ID. Call the [DescribeInstanceEvents](https://www.tencentcloud.com/document/product/239/104779?from_cn_redirect=1) API to obtain the ID of the event to be modified.
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Modifies the scheduled start time of event execution.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Modifies the scheduled end time of event execution. After the start time is configured, the end time can only be 30 minutes, 1 hour, 1.5 hours, 2 hours, or 3 hours later than the start time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Modifies the start date of the event execution schedule.
                     */
                    std::string m_executionDate;
                    bool m_executionDateHasBeenSet;

                    /**
                     * Modifies the running status of the event. Currently, this parameter can be set only to **Canceled**, indicating that the execution of the current event is canceled. You can query the running status and level of the current event using DescribeInstanceEvents.- Critical or High events cannot be canceled, which means that they must be executed.- Only events in the Waiting state (to be executed) can be canceled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEEVENTREQUEST_H_
