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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TASKSTATUS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Task status information.
                */
                class TaskStatus : public AbstractModel
                {
                public:
                    TaskStatus();
                    ~TaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status. Valid values: InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     * @return Status Task status. Valid values: InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     * @param _status Task status. Valid values: InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
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
                     * 获取Task type. Valid values:ProvisionRoleConfiguration: Deploy permission configurations.
DeprovisionRoleConfiguration: Undeploy permission configurations.CreateRoleAssignment: Grant authorizations on member accounts.
DeleteRoleAssignment: Remove authorizations on member accounts.
                     * @return TaskType Task type. Valid values:ProvisionRoleConfiguration: Deploy permission configurations.
DeprovisionRoleConfiguration: Undeploy permission configurations.CreateRoleAssignment: Grant authorizations on member accounts.
DeleteRoleAssignment: Remove authorizations on member accounts.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type. Valid values:ProvisionRoleConfiguration: Deploy permission configurations.
DeprovisionRoleConfiguration: Undeploy permission configurations.CreateRoleAssignment: Grant authorizations on member accounts.
DeleteRoleAssignment: Remove authorizations on member accounts.
                     * @param _taskType Task type. Valid values:ProvisionRoleConfiguration: Deploy permission configurations.
DeprovisionRoleConfiguration: Undeploy permission configurations.CreateRoleAssignment: Grant authorizations on member accounts.
DeleteRoleAssignment: Remove authorizations on member accounts.
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
                     * 获取Cause of task failure.
Description.
This parameter is displayed only when the Status is Failed.
                     * @return FailureReason Cause of task failure.
Description.
This parameter is displayed only when the Status is Failed.
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置Cause of task failure.
Description.
This parameter is displayed only when the Status is Failed.
                     * @param _failureReason Cause of task failure.
Description.
This parameter is displayed only when the Status is Failed.
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                private:

                    /**
                     * Task status. Valid values: InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task type. Valid values:ProvisionRoleConfiguration: Deploy permission configurations.
DeprovisionRoleConfiguration: Undeploy permission configurations.CreateRoleAssignment: Grant authorizations on member accounts.
DeleteRoleAssignment: Remove authorizations on member accounts.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Cause of task failure.
Description.
This parameter is displayed only when the Status is Failed.
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TASKSTATUS_H_
