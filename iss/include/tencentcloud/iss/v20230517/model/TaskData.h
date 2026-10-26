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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_TASKDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_TASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Returned results of querying complex task details
                */
                class TaskData : public AbstractModel
                {
                public:
                    TaskData();
                    ~TaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     * @return Status Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     * @param _status Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
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
                     * 获取Reason for failure
                     * @return FailReason Reason for failure
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Reason for failure
                     * @param _failReason Reason for failure
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取Progress (0-1)
                     * @return Progress Progress (0-1)
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置Progress (0-1)
                     * @param _progress Progress (0-1)
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Task operation type. A batch task type starts with "Batch".
                     * @return Action Task operation type. A batch task type starts with "Batch".
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Task operation type. A batch task type starts with "Batch".
                     * @param _action Task operation type. A batch task type starts with "Batch".
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Operation type Chinese description
                     * @return ActionZhDesc Operation type Chinese description
                     * 
                     */
                    std::string GetActionZhDesc() const;

                    /**
                     * 设置Operation type Chinese description
                     * @param _actionZhDesc Operation type Chinese description
                     * 
                     */
                    void SetActionZhDesc(const std::string& _actionZhDesc);

                    /**
                     * 判断参数 ActionZhDesc 是否已赋值
                     * @return ActionZhDesc 是否已赋值
                     * 
                     */
                    bool ActionZhDescHasBeenSet() const;

                    /**
                     * 获取Task type. 1. Simple 2. Complex 3. Subtask
                     * @return TaskType Task type. 1. Simple 2. Complex 3. Subtask
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Task type. 1. Simple 2. Complex 3. Subtask
                     * @param _taskType Task type. 1. Simple 2. Complex 3. Subtask
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task resource ID (invalid for complex tasks)
                     * @return ResourceId Task resource ID (invalid for complex tasks)
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Task resource ID (invalid for complex tasks)
                     * @param _resourceId Task resource ID (invalid for complex tasks)
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Total number of tasks (valid only for complex tasks)
                     * @return Total Total number of tasks (valid only for complex tasks)
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number of tasks (valid only for complex tasks)
                     * @param _total Total number of tasks (valid only for complex tasks)
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Successful Tasks (valid only for complex tasks)
                     * @return SuccessCount Successful Tasks (valid only for complex tasks)
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Successful Tasks (valid only for complex tasks)
                     * @param _successCount Successful Tasks (valid only for complex tasks)
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of failed tasks (valid only for complex tasks)
                     * @return FailCount Number of failed tasks (valid only for complex tasks)
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置Number of failed tasks (valid only for complex tasks)
                     * @param _failCount Number of failed tasks (valid only for complex tasks)
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取Number of running tasks (valid only for complex tasks)
                     * @return RunningCount Number of running tasks (valid only for complex tasks)
                     * 
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 设置Number of running tasks (valid only for complex tasks)
                     * @param _runningCount Number of running tasks (valid only for complex tasks)
                     * 
                     */
                    void SetRunningCount(const int64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取Task start time.
                     * @return StartedAt Task start time.
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置Task start time.
                     * @param _startedAt Task start time.
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreatedAt Task creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Task creation time
                     * @param _createdAt Task creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update task time.
                     * @return UpdatedAt Update task time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update task time.
                     * @param _updatedAt Update task time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Task running time in milliseconds.
                     * @return Runtime Task running time in milliseconds.
                     * 
                     */
                    int64_t GetRuntime() const;

                    /**
                     * 设置Task running time in milliseconds.
                     * @param _runtime Task running time in milliseconds.
                     * 
                     */
                    void SetRuntime(const int64_t& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name.
                     * @param _deviceName Device name.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Channel name
                     * @return ChannelName Channel name
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Channel name
                     * @param _channelName Channel name
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * Progress (0-1)
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task operation type. A batch task type starts with "Batch".
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Operation type Chinese description
                     */
                    std::string m_actionZhDesc;
                    bool m_actionZhDescHasBeenSet;

                    /**
                     * Task type. 1. Simple 2. Complex 3. Subtask
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task resource ID (invalid for complex tasks)
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Total number of tasks (valid only for complex tasks)
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Successful Tasks (valid only for complex tasks)
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of failed tasks (valid only for complex tasks)
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * Number of running tasks (valid only for complex tasks)
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * Task start time.
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update task time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Task running time in milliseconds.
                     */
                    int64_t m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Channel name
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_TASKDATA_H_
