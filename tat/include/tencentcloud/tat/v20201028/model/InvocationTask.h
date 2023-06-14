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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASK_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/TaskResult.h>
#include <tencentcloud/tat/v20201028/model/CommandDocument.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Execution task.
                */
                class InvocationTask : public AbstractModel
                {
                public:
                    InvocationTask();
                    ~InvocationTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution activity ID.
                     * @return InvocationId Execution activity ID.
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置Execution activity ID.
                     * @param _invocationId Execution activity ID.
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取Execution task ID.
                     * @return InvocationTaskId Execution task ID.
                     * 
                     */
                    std::string GetInvocationTaskId() const;

                    /**
                     * 设置Execution task ID.
                     * @param _invocationTaskId Execution task ID.
                     * 
                     */
                    void SetInvocationTaskId(const std::string& _invocationTaskId);

                    /**
                     * 判断参数 InvocationTaskId 是否已赋值
                     * @return InvocationTaskId 是否已赋值
                     * 
                     */
                    bool InvocationTaskIdHasBeenSet() const;

                    /**
                     * 获取Command ID.
                     * @return CommandId Command ID.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Command ID.
                     * @param _commandId Command ID.
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Execution task status. Valid values:
<li> PENDING: Pending 
<li> DELIVERING: Delivering
<li> DELIVER_DELAYED: Delivery delayed 
<li> DELIVER_FAILED: Delivery failed
<li> START_FAILED: Failed to start the command
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed to execute the command. The exit code is not 0 after execution.
<li> TIMEOUT: Command timed out
<li> TASK_TIMEOUT: Task timed out
<li> CANCELLING: Canceling
<li> CANCELLED: Canceled (canceled before execution)
<li> TERMINATED: Terminated (canceled during execution)
                     * @return TaskStatus Execution task status. Valid values:
<li> PENDING: Pending 
<li> DELIVERING: Delivering
<li> DELIVER_DELAYED: Delivery delayed 
<li> DELIVER_FAILED: Delivery failed
<li> START_FAILED: Failed to start the command
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed to execute the command. The exit code is not 0 after execution.
<li> TIMEOUT: Command timed out
<li> TASK_TIMEOUT: Task timed out
<li> CANCELLING: Canceling
<li> CANCELLED: Canceled (canceled before execution)
<li> TERMINATED: Terminated (canceled during execution)
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Execution task status. Valid values:
<li> PENDING: Pending 
<li> DELIVERING: Delivering
<li> DELIVER_DELAYED: Delivery delayed 
<li> DELIVER_FAILED: Delivery failed
<li> START_FAILED: Failed to start the command
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed to execute the command. The exit code is not 0 after execution.
<li> TIMEOUT: Command timed out
<li> TASK_TIMEOUT: Task timed out
<li> CANCELLING: Canceling
<li> CANCELLED: Canceled (canceled before execution)
<li> TERMINATED: Terminated (canceled during execution)
                     * @param _taskStatus Execution task status. Valid values:
<li> PENDING: Pending 
<li> DELIVERING: Delivering
<li> DELIVER_DELAYED: Delivery delayed 
<li> DELIVER_FAILED: Delivery failed
<li> START_FAILED: Failed to start the command
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed to execute the command. The exit code is not 0 after execution.
<li> TIMEOUT: Command timed out
<li> TASK_TIMEOUT: Task timed out
<li> CANCELLING: Canceling
<li> CANCELLED: Canceled (canceled before execution)
<li> TERMINATED: Terminated (canceled during execution)
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

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
                     * 获取Execution result.
                     * @return TaskResult Execution result.
                     * 
                     */
                    TaskResult GetTaskResult() const;

                    /**
                     * 设置Execution result.
                     * @param _taskResult Execution result.
                     * 
                     */
                    void SetTaskResult(const TaskResult& _taskResult);

                    /**
                     * 判断参数 TaskResult 是否已赋值
                     * @return TaskResult 是否已赋值
                     * 
                     */
                    bool TaskResultHasBeenSet() const;

                    /**
                     * 获取Start time of the execution task.
                     * @return StartTime Start time of the execution task.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the execution task.
                     * @param _startTime Start time of the execution task.
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
                     * 获取End time of the execution task.
                     * @return EndTime End time of the execution task.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the execution task.
                     * @param _endTime End time of the execution task.
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
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedTime Update time.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Update time.
                     * @param _updatedTime Update time.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Command details of the execution task.
                     * @return CommandDocument Command details of the execution task.
                     * 
                     */
                    CommandDocument GetCommandDocument() const;

                    /**
                     * 设置Command details of the execution task.
                     * @param _commandDocument Command details of the execution task.
                     * 
                     */
                    void SetCommandDocument(const CommandDocument& _commandDocument);

                    /**
                     * 判断参数 CommandDocument 是否已赋值
                     * @return CommandDocument 是否已赋值
                     * 
                     */
                    bool CommandDocumentHasBeenSet() const;

                    /**
                     * 获取Error message displayed when the execution task fails.
                     * @return ErrorInfo Error message displayed when the execution task fails.
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置Error message displayed when the execution task fails.
                     * @param _errorInfo Error message displayed when the execution task fails.
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取Invocation source.
                     * @return InvocationSource Invocation source.
                     * 
                     */
                    std::string GetInvocationSource() const;

                    /**
                     * 设置Invocation source.
                     * @param _invocationSource Invocation source.
                     * 
                     */
                    void SetInvocationSource(const std::string& _invocationSource);

                    /**
                     * 判断参数 InvocationSource 是否已赋值
                     * @return InvocationSource 是否已赋值
                     * 
                     */
                    bool InvocationSourceHasBeenSet() const;

                private:

                    /**
                     * Execution activity ID.
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * Execution task ID.
                     */
                    std::string m_invocationTaskId;
                    bool m_invocationTaskIdHasBeenSet;

                    /**
                     * Command ID.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Execution task status. Valid values:
<li> PENDING: Pending 
<li> DELIVERING: Delivering
<li> DELIVER_DELAYED: Delivery delayed 
<li> DELIVER_FAILED: Delivery failed
<li> START_FAILED: Failed to start the command
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed to execute the command. The exit code is not 0 after execution.
<li> TIMEOUT: Command timed out
<li> TASK_TIMEOUT: Task timed out
<li> CANCELLING: Canceling
<li> CANCELLED: Canceled (canceled before execution)
<li> TERMINATED: Terminated (canceled during execution)
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Execution result.
                     */
                    TaskResult m_taskResult;
                    bool m_taskResultHasBeenSet;

                    /**
                     * Start time of the execution task.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the execution task.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Command details of the execution task.
                     */
                    CommandDocument m_commandDocument;
                    bool m_commandDocumentHasBeenSet;

                    /**
                     * Error message displayed when the execution task fails.
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * Invocation source.
                     */
                    std::string m_invocationSource;
                    bool m_invocationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASK_H_
