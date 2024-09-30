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
                     * 获取The scheme name (max 128 characters). This name should be unique across your account.
                     * @return ScheduleName The scheme name (max 128 characters). This name should be unique across your account.
                     * 
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置The scheme name (max 128 characters). This name should be unique across your account.
                     * @param _scheduleName The scheme name (max 128 characters). This name should be unique across your account.
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
                     * 获取The trigger of the scheme. If a file is uploaded to the specified bucket, the scheme will be triggered.
                     * @return Trigger The trigger of the scheme. If a file is uploaded to the specified bucket, the scheme will be triggered.
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置The trigger of the scheme. If a file is uploaded to the specified bucket, the scheme will be triggered.
                     * @param _trigger The trigger of the scheme. If a file is uploaded to the specified bucket, the scheme will be triggered.
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
                     * 获取The subtasks of the scheme.
                     * @return Activities The subtasks of the scheme.
                     * 
                     */
                    std::vector<Activity> GetActivities() const;

                    /**
                     * 设置The subtasks of the scheme.
                     * @param _activities The subtasks of the scheme.
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
                     * 获取The bucket to save the output file. If you do not specify this parameter, the bucket in `Trigger` will be used.
                     * @return OutputStorage The bucket to save the output file. If you do not specify this parameter, the bucket in `Trigger` will be used.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The bucket to save the output file. If you do not specify this parameter, the bucket in `Trigger` will be used.
                     * @param _outputStorage The bucket to save the output file. If you do not specify this parameter, the bucket in `Trigger` will be used.
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
                     * 获取The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     * @return OutputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     * @param _outputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
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
                     * 获取The notification configuration. If you do not specify this parameter, notifications will not be sent.
                     * @return TaskNotifyConfig The notification configuration. If you do not specify this parameter, notifications will not be sent.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置The notification configuration. If you do not specify this parameter, notifications will not be sent.
                     * @param _taskNotifyConfig The notification configuration. If you do not specify this parameter, notifications will not be sent.
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
                     * 获取Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * @return ResourceId Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * @param _resourceId Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
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
                     * The scheme name (max 128 characters). This name should be unique across your account.
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * The trigger of the scheme. If a file is uploaded to the specified bucket, the scheme will be triggered.
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * The subtasks of the scheme.
                     */
                    std::vector<Activity> m_activities;
                    bool m_activitiesHasBeenSet;

                    /**
                     * The bucket to save the output file. If you do not specify this parameter, the bucket in `Trigger` will be used.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * The notification configuration. If you do not specify this parameter, notifications will not be sent.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESCHEDULEREQUEST_H_
