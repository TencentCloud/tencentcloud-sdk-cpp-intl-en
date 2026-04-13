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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKSET_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/TaskDetail.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task list information
                */
                class TaskSet : public AbstractModel
                {
                public:
                    TaskSet();
                    ~TaskSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Specifies the task type.
                     * @return TaskType Specifies the task type.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Specifies the task type.
                     * @param _taskType Specifies the task type.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the instance ID of the task instance.
                     * @return DBInstanceId Specifies the instance ID of the task instance.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Specifies the instance ID of the task instance.
                     * @param _dBInstanceId Specifies the instance ID of the task instance.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time of the task.
                     * @return StartTime Start time of the task.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the task.
                     * @param _startTime Start time of the task.
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
                     * 获取Task end time.
                     * @return EndTime Task end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time.
                     * @param _endTime Task end time.
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
                     * 获取Specifies the task Running status, including Running, Success, WaitSwitch, Fail, Pause.
                     * @return Status Specifies the task Running status, including Running, Success, WaitSwitch, Fail, Pause.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Specifies the task Running status, including Running, Success, WaitSwitch, Fail, Pause.
                     * @param _status Specifies the task Running status, including Running, Success, WaitSwitch, Fail, Pause.
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
                     * 获取Indicates the progress of task execution, with a value range of 0-100.
                     * @return Progress Indicates the progress of task execution, with a value range of 0-100.
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Indicates the progress of task execution, with a value range of 0-100.
                     * @param _progress Indicates the progress of task execution, with a value range of 0-100.
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Specifies the task details.
                     * @return TaskDetail Specifies the task details.
                     * 
                     */
                    TaskDetail GetTaskDetail() const;

                    /**
                     * 设置Specifies the task details.
                     * @param _taskDetail Specifies the task details.
                     * 
                     */
                    void SetTaskDetail(const TaskDetail& _taskDetail);

                    /**
                     * 判断参数 TaskDetail 是否已赋值
                     * @return TaskDetail 是否已赋值
                     * 
                     */
                    bool TaskDetailHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Specifies the task type.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Specifies the instance ID of the task instance.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Start time of the task.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the task Running status, including Running, Success, WaitSwitch, Fail, Pause.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Indicates the progress of task execution, with a value range of 0-100.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Specifies the task details.
                     */
                    TaskDetail m_taskDetail;
                    bool m_taskDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKSET_H_
