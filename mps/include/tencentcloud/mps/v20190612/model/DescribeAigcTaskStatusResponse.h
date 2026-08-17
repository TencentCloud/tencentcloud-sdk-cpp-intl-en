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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAigcTaskStatus response structure.
                */
                class DescribeAigcTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeAigcTaskStatusResponse();
                    ~DescribeAigcTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task status description</p><p>Enumeration values: </p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     * @return TaskStatus <p>Task status description</p><p>Enumeration values: </p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutputUrl 
                     * 
                     */
                    std::string GetOutputUrl() const;

                    /**
                     * 判断参数 OutputUrl 是否已赋值
                     * @return OutputUrl 是否已赋值
                     * 
                     */
                    bool OutputUrlHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time</p>
                     * @return CreateTime <p>Task creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task scheduling time</p>
                     * @return ScheduledTime <p>Task scheduling time</p>
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task completion time</p>
                     * @return FinishedTime <p>Task completion time</p>
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task error code</p>
                     * @return TaskResultCode <p>Task error code</p>
                     * 
                     */
                    int64_t GetTaskResultCode() const;

                    /**
                     * 判断参数 TaskResultCode 是否已赋值
                     * @return TaskResultCode 是否已赋值
                     * 
                     */
                    bool TaskResultCodeHasBeenSet() const;

                    /**
                     * 获取<p>Task returned error message</p>
                     * @return TaskResultMsg <p>Task returned error message</p>
                     * 
                     */
                    std::string GetTaskResultMsg() const;

                    /**
                     * 判断参数 TaskResultMsg 是否已赋值
                     * @return TaskResultMsg 是否已赋值
                     * 
                     */
                    bool TaskResultMsgHasBeenSet() const;

                    /**
                     * 获取<p>Request structure</p>
                     * @return RequestBody <p>Request structure</p>
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取<p>Task type</p>
                     * @return TaskType <p>Task type</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task status description</p><p>Enumeration values: </p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_outputUrl;
                    bool m_outputUrlHasBeenSet;

                    /**
                     * <p>Task creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task scheduling time</p>
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                    /**
                     * <p>Task completion time</p>
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * <p>Task error code</p>
                     */
                    int64_t m_taskResultCode;
                    bool m_taskResultCodeHasBeenSet;

                    /**
                     * <p>Task returned error message</p>
                     */
                    std::string m_taskResultMsg;
                    bool m_taskResultMsgHasBeenSet;

                    /**
                     * <p>Request structure</p>
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * <p>Task type</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKSTATUSRESPONSE_H_
