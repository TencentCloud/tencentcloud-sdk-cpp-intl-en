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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISINSTANCEEVENT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISINSTANCEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Instance event information.
                */
                class RedisInstanceEvent : public AbstractModel
                {
                public:
                    RedisInstanceEvent();
                    ~RedisInstanceEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID Event ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Event ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD Event ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Instance ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be only set to **InstanceMigration**.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be only set to **InstanceMigration**.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be only set to **InstanceMigration**.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be only set to **InstanceMigration**.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Event levels are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical
- High
- Middle
- Low
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Grade Event levels are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical
- High
- Middle
- Low
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置Event levels are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical
- High
- Middle
- Low
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _grade Event levels are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical
- High
- Middle
- Low
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取Scheduled event execution date.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionDate Scheduled event execution date.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionDate() const;

                    /**
                     * 设置Scheduled event execution date.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionDate Scheduled event execution date.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scheduled start time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Scheduled start time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Scheduled start time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Scheduled start time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scheduled end time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Scheduled end time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Scheduled end time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Scheduled end time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The latest execution date of the operations event. Event execution must be completed before this date. Otherwise, the business may be affected.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestExecutionDate The latest execution date of the operations event. Event execution must be completed before this date. Otherwise, the business may be affected.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestExecutionDate() const;

                    /**
                     * 设置The latest execution date of the operations event. Event execution must be completed before this date. Otherwise, the business may be affected.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestExecutionDate The latest execution date of the operations event. Event execution must be completed before this date. Otherwise, the business may be affected.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLatestExecutionDate(const std::string& _latestExecutionDate);

                    /**
                     * 判断参数 LatestExecutionDate 是否已赋值
                     * @return LatestExecutionDate 是否已赋值
                     * 
                     */
                    bool LatestExecutionDateHasBeenSet() const;

                    /**
                     * 获取Current event status.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event operations is completed.- Canceled: Execution of the event is canceled.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Current event status.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event operations is completed.- Canceled: Execution of the event is canceled.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current event status.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event operations is completed.- Canceled: Execution of the event is canceled.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Current event status.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event operations is completed.- Canceled: Execution of the event is canceled.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Completion time of the event execution task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskEndTime Completion time of the event execution task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置Completion time of the event execution task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskEndTime Completion time of the event execution task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     * 
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取Impact of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectInfo Impact of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEffectInfo() const;

                    /**
                     * 设置Impact of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectInfo Impact of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEffectInfo(const std::string& _effectInfo);

                    /**
                     * 判断参数 EffectInfo 是否已赋值
                     * @return EffectInfo 是否已赋值
                     * 
                     */
                    bool EffectInfoHasBeenSet() const;

                    /**
                     * 获取Initial scheduled execution date of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InitialExecutionDate Initial scheduled execution date of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInitialExecutionDate() const;

                    /**
                     * 设置Initial scheduled execution date of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _initialExecutionDate Initial scheduled execution date of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInitialExecutionDate(const std::string& _initialExecutionDate);

                    /**
                     * 判断参数 InitialExecutionDate 是否已赋值
                     * @return InitialExecutionDate 是否已赋值
                     * 
                     */
                    bool InitialExecutionDateHasBeenSet() const;

                private:

                    /**
                     * Event ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be only set to **InstanceMigration**.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Event levels are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical
- High
- Middle
- Low
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * Scheduled event execution date.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionDate;
                    bool m_executionDateHasBeenSet;

                    /**
                     * Scheduled start time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Scheduled end time of event execution.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The latest execution date of the operations event. Event execution must be completed before this date. Otherwise, the business may be affected.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestExecutionDate;
                    bool m_latestExecutionDateHasBeenSet;

                    /**
                     * Current event status.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event operations is completed.- Canceled: Execution of the event is canceled.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Completion time of the event execution task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * Impact of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_effectInfo;
                    bool m_effectInfoHasBeenSet;

                    /**
                     * Initial scheduled execution date of the event.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_initialExecutionDate;
                    bool m_initialExecutionDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISINSTANCEEVENT_H_
