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
                     * @return ID Event ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Event ID.
                     * @param _iD Event ID.
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     * @return Type Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     * @param _type Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
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
                     * 获取Event level. The levels are divided into critical, important, medium, and general based on severity and urgency.
 - Critical: critical.
 - High: important.
 - Middle: medium.
 - Low.
                     * @return Grade Event level. The levels are divided into critical, important, medium, and general based on severity and urgency.
 - Critical: critical.
 - High: important.
 - Middle: medium.
 - Low.
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置Event level. The levels are divided into critical, important, medium, and general based on severity and urgency.
 - Critical: critical.
 - High: important.
 - Middle: medium.
 - Low.
                     * @param _grade Event level. The levels are divided into critical, important, medium, and general based on severity and urgency.
 - Critical: critical.
 - High: important.
 - Middle: medium.
 - Low.
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
                     * 获取Scheduled event execution date.
                     * @return ExecutionDate Scheduled event execution date.
                     * 
                     */
                    std::string GetExecutionDate() const;

                    /**
                     * 设置Scheduled event execution date.
                     * @param _executionDate Scheduled event execution date.
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
                     * 获取Start date of scheduled event execution.
                     * @return StartTime Start date of scheduled event execution.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date of scheduled event execution.
                     * @param _startTime Start date of scheduled event execution.
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
                     * 获取End date of scheduled event execution.
                     * @return EndTime End date of scheduled event execution.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date of scheduled event execution.
                     * @param _endTime End date of scheduled event execution.
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
                     * 获取Latest execution date of the Ops event. The event should be completed before this date. Otherwise, the business may be affected.
                     * @return LatestExecutionDate Latest execution date of the Ops event. The event should be completed before this date. Otherwise, the business may be affected.
                     * 
                     */
                    std::string GetLatestExecutionDate() const;

                    /**
                     * 设置Latest execution date of the Ops event. The event should be completed before this date. Otherwise, the business may be affected.
                     * @param _latestExecutionDate Latest execution date of the Ops event. The event should be completed before this date. Otherwise, the business may be affected.
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
                     * 获取Current event status.
 - Waiting: event not reached the execution date or not within the maintenance window.
 - Running: event within the maintenance window and under maintenance execution.
 - Finished: event with maintenance completed.
- Canceled: Execution of the event is canceled.
                     * @return Status Current event status.
 - Waiting: event not reached the execution date or not within the maintenance window.
 - Running: event within the maintenance window and under maintenance execution.
 - Finished: event with maintenance completed.
- Canceled: Execution of the event is canceled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current event status.
 - Waiting: event not reached the execution date or not within the maintenance window.
 - Running: event within the maintenance window and under maintenance execution.
 - Finished: event with maintenance completed.
- Canceled: Execution of the event is canceled.
                     * @param _status Current event status.
 - Waiting: event not reached the execution date or not within the maintenance window.
 - Running: event within the maintenance window and under maintenance execution.
 - Finished: event with maintenance completed.
- Canceled: Execution of the event is canceled.
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
                     * @return TaskEndTime Completion time of the event execution task.
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置Completion time of the event execution task.
                     * @param _taskEndTime Completion time of the event execution task.
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
                     * 获取Event impact information.
                     * @return EffectInfo Event impact information.
                     * 
                     */
                    std::string GetEffectInfo() const;

                    /**
                     * 设置Event impact information.
                     * @param _effectInfo Event impact information.
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
                     * 获取Initial scheduled event execution date.
                     * @return InitialExecutionDate Initial scheduled event execution date.
                     * 
                     */
                    std::string GetInitialExecutionDate() const;

                    /**
                     * 设置Initial scheduled event execution date.
                     * @param _initialExecutionDate Initial scheduled event execution date.
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
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Event level. The levels are divided into critical, important, medium, and general based on severity and urgency.
 - Critical: critical.
 - High: important.
 - Middle: medium.
 - Low.
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * Scheduled event execution date.
                     */
                    std::string m_executionDate;
                    bool m_executionDateHasBeenSet;

                    /**
                     * Start date of scheduled event execution.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date of scheduled event execution.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Latest execution date of the Ops event. The event should be completed before this date. Otherwise, the business may be affected.
                     */
                    std::string m_latestExecutionDate;
                    bool m_latestExecutionDateHasBeenSet;

                    /**
                     * Current event status.
 - Waiting: event not reached the execution date or not within the maintenance window.
 - Running: event within the maintenance window and under maintenance execution.
 - Finished: event with maintenance completed.
- Canceled: Execution of the event is canceled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Completion time of the event execution task.
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * Event impact information.
                     */
                    std::string m_effectInfo;
                    bool m_effectInfoHasBeenSet;

                    /**
                     * Initial scheduled event execution date.
                     */
                    std::string m_initialExecutionDate;
                    bool m_initialExecutionDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISINSTANCEEVENT_H_
