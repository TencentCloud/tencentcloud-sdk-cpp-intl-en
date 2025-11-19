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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEPROFILETASKREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEPROFILETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateProfileTask request structure.
                */
                class CreateProfileTaskRequest : public AbstractModel
                {
                public:
                    CreateProfileTaskRequest();
                    ~CreateProfileTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application name
                     * @return ServiceName Application name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name
                     * @param _serviceName Application name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取APM business system ID.
                     * @return InstanceId APM business system ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置APM business system ID.
                     * @param _instanceId APM business system ID.
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
                     * 获取Application instance (online).
                     * @return ServiceInstance Application instance (online).
                     * 
                     */
                    std::string GetServiceInstance() const;

                    /**
                     * 设置Application instance (online).
                     * @param _serviceInstance Application instance (online).
                     * 
                     */
                    void SetServiceInstance(const std::string& _serviceInstance);

                    /**
                     * 判断参数 ServiceInstance 是否已赋值
                     * @return ServiceInstance 是否已赋值
                     * 
                     */
                    bool ServiceInstanceHasBeenSet() const;

                    /**
                     * 获取Event type (cpu, alloc).
                     * @return Event Event type (cpu, alloc).
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置Event type (cpu, alloc).
                     * @param _event Event type (cpu, alloc).
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取Specifies the task duration in milliseconds (ms). value range: 5 to 180 seconds.
                     * @return Duration Specifies the task duration in milliseconds (ms). value range: 5 to 180 seconds.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Specifies the task duration in milliseconds (ms). value range: 5 to 180 seconds.
                     * @param _duration Specifies the task duration in milliseconds (ms). value range: 5 to 180 seconds.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Number of execution. value range: 1-100.
                     * @return AllTimes Number of execution. value range: 1-100.
                     * 
                     */
                    int64_t GetAllTimes() const;

                    /**
                     * 设置Number of execution. value range: 1-100.
                     * @param _allTimes Number of execution. value range: 1-100.
                     * 
                     */
                    void SetAllTimes(const int64_t& _allTimes);

                    /**
                     * 判断参数 AllTimes 是否已赋值
                     * @return AllTimes 是否已赋值
                     * 
                     */
                    bool AllTimesHasBeenSet() const;

                    /**
                     * 获取Start timestamp. 0 indicates start from the current time (unit: seconds).
                     * @return StartTime Start timestamp. 0 indicates start from the current time (unit: seconds).
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp. 0 indicates start from the current time (unit: seconds).
                     * @param _startTime Start timestamp. 0 indicates start from the current time (unit: seconds).
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
                     * 获取Specifies the task execution interval in milliseconds (ms). value range: 10 to 600 seconds. cannot be less than 1.5 times the Duration.
                     * @return TaskInterval Specifies the task execution interval in milliseconds (ms). value range: 10 to 600 seconds. cannot be less than 1.5 times the Duration.
                     * 
                     */
                    int64_t GetTaskInterval() const;

                    /**
                     * 设置Specifies the task execution interval in milliseconds (ms). value range: 10 to 600 seconds. cannot be less than 1.5 times the Duration.
                     * @param _taskInterval Specifies the task execution interval in milliseconds (ms). value range: 10 to 600 seconds. cannot be less than 1.5 times the Duration.
                     * 
                     */
                    void SetTaskInterval(const int64_t& _taskInterval);

                    /**
                     * 判断参数 TaskInterval 是否已赋值
                     * @return TaskInterval 是否已赋值
                     * 
                     */
                    bool TaskIntervalHasBeenSet() const;

                private:

                    /**
                     * Application name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * APM business system ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Application instance (online).
                     */
                    std::string m_serviceInstance;
                    bool m_serviceInstanceHasBeenSet;

                    /**
                     * Event type (cpu, alloc).
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * Specifies the task duration in milliseconds (ms). value range: 5 to 180 seconds.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Number of execution. value range: 1-100.
                     */
                    int64_t m_allTimes;
                    bool m_allTimesHasBeenSet;

                    /**
                     * Start timestamp. 0 indicates start from the current time (unit: seconds).
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the task execution interval in milliseconds (ms). value range: 10 to 600 seconds. cannot be less than 1.5 times the Duration.
                     */
                    int64_t m_taskInterval;
                    bool m_taskIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEPROFILETASKREQUEST_H_
