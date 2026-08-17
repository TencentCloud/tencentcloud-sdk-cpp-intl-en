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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESCHEDULEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTrigger.h>
#include <tencentcloud/mps/v20190612/model/Activity.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateSchedule request structure.
                */
                class CreateScheduleRequest : public AbstractModel
                {
                public:
                    CreateScheduleRequest();
                    ~CreateScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Orchestration name, up to 128 characters. The name is unique for the same user.
                     * @return ScheduleName Orchestration name, up to 128 characters. The name is unique for the same user.
                     * 
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置Orchestration name, up to 128 characters. The name is unique for the same user.
                     * @param _scheduleName Orchestration name, up to 128 characters. The name is unique for the same user.
                     * 
                     */
                    void SetScheduleName(const std::string& _scheduleName);

                    /**
                     * 判断参数 ScheduleName 是否已赋值
                     * @return ScheduleName 是否已赋值
                     * 
                     */
                    bool ScheduleNameHasBeenSet() const;

                    /**
                     * 获取Orchestrate the bound trigger rule. The orchestration is triggered when an uploaded video hits the rule for the object.
                     * @return Trigger Orchestrate the bound trigger rule. The orchestration is triggered when an uploaded video hits the rule for the object.
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置Orchestrate the bound trigger rule. The orchestration is triggered when an uploaded video hits the rule for the object.
                     * @param _trigger Orchestrate the bound trigger rule. The orchestration is triggered when an uploaded video hits the rule for the object.
                     * 
                     */
                    void SetTrigger(const WorkflowTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取Orchestration task list.
                     * @return Activities Orchestration task list.
                     * 
                     */
                    std::vector<Activity> GetActivities() const;

                    /**
                     * 设置Orchestration task list.
                     * @param _activities Orchestration task list.
                     * 
                     */
                    void SetActivities(const std::vector<Activity>& _activities);

                    /**
                     * 判断参数 Activities 是否已赋值
                     * @return Activities 是否已赋值
                     * 
                     */
                    bool ActivitiesHasBeenSet() const;

                    /**
                     * 获取Media Processing Service output storage location. If left blank, it inherits the storage location from Trigger.
                     * @return OutputStorage Media Processing Service output storage location. If left blank, it inherits the storage location from Trigger.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Media Processing Service output storage location. If left blank, it inherits the storage location from Trigger.
                     * @param _outputStorage Media Processing Service output storage location. If left blank, it inherits the storage location from Trigger.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file.
                     * @return OutputDir Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file.
                     * @param _outputDir Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file.
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取Event notification configuration of the task. If left blank, it indicates that no event notification will be obtained.
                     * @return TaskNotifyConfig Event notification configuration of the task. If left blank, it indicates that no event notification will be obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification configuration of the task. If left blank, it indicates that no event notification will be obtained.
                     * @param _taskNotifyConfig Event notification configuration of the task. If left blank, it indicates that no event notification will be obtained.
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * @return ResourceId Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * @param _resourceId Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Orchestration name, up to 128 characters. The name is unique for the same user.
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * Orchestrate the bound trigger rule. The orchestration is triggered when an uploaded video hits the rule for the object.
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * Orchestration task list.
                     */
                    std::vector<Activity> m_activities;
                    bool m_activitiesHasBeenSet;

                    /**
                     * Media Processing Service output storage location. If left blank, it inherits the storage location from Trigger.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * Event notification configuration of the task. If left blank, it indicates that no event notification will be obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESCHEDULEREQUEST_H_
