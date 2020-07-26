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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_JOB_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Task.h>
#include <tencentcloud/batch/v20170312/model/Dependence.h>
#include <tencentcloud/batch/v20170312/model/Notification.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Instance
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job information
                     * @return Tasks Job information
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 设置Job information
                     * @param Tasks Job information
                     */
                    void SetTasks(const std::vector<Task>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return JobName Instance name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Instance name
                     * @param JobName Instance name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Instance description
                     * @return JobDescription Instance description
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 设置Instance description
                     * @param JobDescription Instance description
                     */
                    void SetJobDescription(const std::string& _jobDescription);

                    /**
                     * 判断参数 JobDescription 是否已赋值
                     * @return JobDescription 是否已赋值
                     */
                    bool JobDescriptionHasBeenSet() const;

                    /**
                     * 获取Instance priority. Tasks (Task) and task instances (TaskInstance) inherit the priority of the instance
                     * @return Priority Instance priority. Tasks (Task) and task instances (TaskInstance) inherit the priority of the instance
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置Instance priority. Tasks (Task) and task instances (TaskInstance) inherit the priority of the instance
                     * @param Priority Instance priority. Tasks (Task) and task instances (TaskInstance) inherit the priority of the instance
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Dependency information
                     * @return Dependences Dependency information
                     */
                    std::vector<Dependence> GetDependences() const;

                    /**
                     * 设置Dependency information
                     * @param Dependences Dependency information
                     */
                    void SetDependences(const std::vector<Dependence>& _dependences);

                    /**
                     * 判断参数 Dependences 是否已赋值
                     * @return Dependences 是否已赋值
                     */
                    bool DependencesHasBeenSet() const;

                    /**
                     * 获取Notification information
                     * @return Notifications Notification information
                     */
                    std::vector<Notification> GetNotifications() const;

                    /**
                     * 设置Notification information
                     * @param Notifications Notification information
                     */
                    void SetNotifications(const std::vector<Notification>& _notifications);

                    /**
                     * 判断参数 Notifications 是否已赋值
                     * @return Notifications 是否已赋值
                     */
                    bool NotificationsHasBeenSet() const;

                    /**
                     * 获取This is the dependency of the subsequent task on the previous task if there is a dependent relationship between them. Value range: PRE_TASK_SUCCEED, PRE_TASK_AT_LEAST_PARTLY_SUCCEED, PRE_TASK_FINISHED. Default value: PRE_TASK_SUCCEED.
                     * @return TaskExecutionDependOn This is the dependency of the subsequent task on the previous task if there is a dependent relationship between them. Value range: PRE_TASK_SUCCEED, PRE_TASK_AT_LEAST_PARTLY_SUCCEED, PRE_TASK_FINISHED. Default value: PRE_TASK_SUCCEED.
                     */
                    std::string GetTaskExecutionDependOn() const;

                    /**
                     * 设置This is the dependency of the subsequent task on the previous task if there is a dependent relationship between them. Value range: PRE_TASK_SUCCEED, PRE_TASK_AT_LEAST_PARTLY_SUCCEED, PRE_TASK_FINISHED. Default value: PRE_TASK_SUCCEED.
                     * @param TaskExecutionDependOn This is the dependency of the subsequent task on the previous task if there is a dependent relationship between them. Value range: PRE_TASK_SUCCEED, PRE_TASK_AT_LEAST_PARTLY_SUCCEED, PRE_TASK_FINISHED. Default value: PRE_TASK_SUCCEED.
                     */
                    void SetTaskExecutionDependOn(const std::string& _taskExecutionDependOn);

                    /**
                     * 判断参数 TaskExecutionDependOn 是否已赋值
                     * @return TaskExecutionDependOn 是否已赋值
                     */
                    bool TaskExecutionDependOnHasBeenSet() const;

                    /**
                     * 获取Indicates which policy will be used in case that CVM instance creation fails. Value range: FAILED, RUNNABLE. FAILED indicates that the CVM instance creation failure will be processed as an execution failure, while RUNNABLE indicates that the failure will be processed as "keep waiting". Default value: FAILED. StateIfCreateCvmFailed is not valid for submitted jobs for which a compute environment is specified.
                     * @return StateIfCreateCvmFailed Indicates which policy will be used in case that CVM instance creation fails. Value range: FAILED, RUNNABLE. FAILED indicates that the CVM instance creation failure will be processed as an execution failure, while RUNNABLE indicates that the failure will be processed as "keep waiting". Default value: FAILED. StateIfCreateCvmFailed is not valid for submitted jobs for which a compute environment is specified.
                     */
                    std::string GetStateIfCreateCvmFailed() const;

                    /**
                     * 设置Indicates which policy will be used in case that CVM instance creation fails. Value range: FAILED, RUNNABLE. FAILED indicates that the CVM instance creation failure will be processed as an execution failure, while RUNNABLE indicates that the failure will be processed as "keep waiting". Default value: FAILED. StateIfCreateCvmFailed is not valid for submitted jobs for which a compute environment is specified.
                     * @param StateIfCreateCvmFailed Indicates which policy will be used in case that CVM instance creation fails. Value range: FAILED, RUNNABLE. FAILED indicates that the CVM instance creation failure will be processed as an execution failure, while RUNNABLE indicates that the failure will be processed as "keep waiting". Default value: FAILED. StateIfCreateCvmFailed is not valid for submitted jobs for which a compute environment is specified.
                     */
                    void SetStateIfCreateCvmFailed(const std::string& _stateIfCreateCvmFailed);

                    /**
                     * 判断参数 StateIfCreateCvmFailed 是否已赋值
                     * @return StateIfCreateCvmFailed 是否已赋值
                     */
                    bool StateIfCreateCvmFailedHasBeenSet() const;

                private:

                    /**
                     * Job information
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Instance description
                     */
                    std::string m_jobDescription;
                    bool m_jobDescriptionHasBeenSet;

                    /**
                     * Instance priority. Tasks (Task) and task instances (TaskInstance) inherit the priority of the instance
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Dependency information
                     */
                    std::vector<Dependence> m_dependences;
                    bool m_dependencesHasBeenSet;

                    /**
                     * Notification information
                     */
                    std::vector<Notification> m_notifications;
                    bool m_notificationsHasBeenSet;

                    /**
                     * This is the dependency of the subsequent task on the previous task if there is a dependent relationship between them. Value range: PRE_TASK_SUCCEED, PRE_TASK_AT_LEAST_PARTLY_SUCCEED, PRE_TASK_FINISHED. Default value: PRE_TASK_SUCCEED.
                     */
                    std::string m_taskExecutionDependOn;
                    bool m_taskExecutionDependOnHasBeenSet;

                    /**
                     * Indicates which policy will be used in case that CVM instance creation fails. Value range: FAILED, RUNNABLE. FAILED indicates that the CVM instance creation failure will be processed as an execution failure, while RUNNABLE indicates that the failure will be processed as "keep waiting". Default value: FAILED. StateIfCreateCvmFailed is not valid for submitted jobs for which a compute environment is specified.
                     */
                    std::string m_stateIfCreateCvmFailed;
                    bool m_stateIfCreateCvmFailedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_JOB_H_
