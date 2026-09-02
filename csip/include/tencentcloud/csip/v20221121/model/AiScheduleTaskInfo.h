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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Task execution log
                */
                class AiScheduleTaskInfo : public AbstractModel
                {
                public:
                    AiScheduleTaskInfo();
                    ~AiScheduleTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the AI scheduled task it belongs to.</p>
                     * @return ScheduleId <p>ID of the AI scheduled task it belongs to.</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>ID of the AI scheduled task it belongs to.</p>
                     * @param _scheduleId <p>ID of the AI scheduled task it belongs to.</p>
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the trigger that triggers the task.</p>
                     * @return TriggerId <p>ID of the trigger that triggers the task.</p>
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>ID of the trigger that triggers the task.</p>
                     * @param _triggerId <p>ID of the trigger that triggers the task.</p>
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取<p>Unique conversation ID of the Agent call.</p>
                     * @return SessionId <p>Unique conversation ID of the Agent call.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Unique conversation ID of the Agent call.</p>
                     * @param _sessionId <p>Unique conversation ID of the Agent call.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Execution status.</p>
                     * @return Status <p>Execution status.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Execution status.</p>
                     * @param _status <p>Execution status.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Agent output result or error detail.</p>
                     * @return Result <p>Agent output result or error detail.</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>Agent output result or error detail.</p>
                     * @param _result <p>Agent output result or error detail.</p>
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>Planned trigger time, Unix millisecond timestamp.</p>
                     * @return ScheduledTime <p>Planned trigger time, Unix millisecond timestamp.</p>
                     * 
                     */
                    int64_t GetScheduledTime() const;

                    /**
                     * 设置<p>Planned trigger time, Unix millisecond timestamp.</p>
                     * @param _scheduledTime <p>Planned trigger time, Unix millisecond timestamp.</p>
                     * 
                     */
                    void SetScheduledTime(const int64_t& _scheduledTime);

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                    /**
                     * 获取<p>Actual start execution time, Unix millisecond timestamp.</p>
                     * @return StartTime <p>Actual start execution time, Unix millisecond timestamp.</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Actual start execution time, Unix millisecond timestamp.</p>
                     * @param _startTime <p>Actual start execution time, Unix millisecond timestamp.</p>
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
                     * 获取<p>Execution completion time, Unix millisecond timestamp.</p>
                     * @return EndTime <p>Execution completion time, Unix millisecond timestamp.</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Execution completion time, Unix millisecond timestamp.</p>
                     * @param _endTime <p>Execution completion time, Unix millisecond timestamp.</p>
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
                     * 获取<p>Creation time, Unix millisecond timestamp.</p>
                     * @return CreateTime <p>Creation time, Unix millisecond timestamp.</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time, Unix millisecond timestamp.</p>
                     * @param _createTime <p>Creation time, Unix millisecond timestamp.</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time, Unix millisecond timestamp.</p>
                     * @return UpdateTime <p>Update time, Unix millisecond timestamp.</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Update time, Unix millisecond timestamp.</p>
                     * @param _updateTime <p>Update time, Unix millisecond timestamp.</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled task name</p>
                     * @return TaskName <p>Scheduled task name</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Scheduled task name</p>
                     * @param _taskName <p>Scheduled task name</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled task prompt</p>
                     * @return Prompts <p>Scheduled task prompt</p>
                     * 
                     */
                    std::string GetPrompts() const;

                    /**
                     * 设置<p>Scheduled task prompt</p>
                     * @param _prompts <p>Scheduled task prompt</p>
                     * 
                     */
                    void SetPrompts(const std::string& _prompts);

                    /**
                     * 判断参数 Prompts 是否已赋值
                     * @return Prompts 是否已赋值
                     * 
                     */
                    bool PromptsHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>ID of the AI scheduled task it belongs to.</p>
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * <p>ID of the trigger that triggers the task.</p>
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>Unique conversation ID of the Agent call.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Execution status.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Agent output result or error detail.</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Planned trigger time, Unix millisecond timestamp.</p>
                     */
                    int64_t m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                    /**
                     * <p>Actual start execution time, Unix millisecond timestamp.</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Execution completion time, Unix millisecond timestamp.</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Creation time, Unix millisecond timestamp.</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time, Unix millisecond timestamp.</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Scheduled task name</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Scheduled task prompt</p>
                     */
                    std::string m_prompts;
                    bool m_promptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETASKINFO_H_
