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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSCHEDULEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSCHEDULEREQUEST_H_

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
                * ModifySchedule request structure.
                */
                class ModifyScheduleRequest : public AbstractModel
                {
                public:
                    ModifyScheduleRequest();
                    ~ModifyScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The scheme ID.
                     * @return ScheduleId The scheme ID.
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置The scheme ID.
                     * @param ScheduleId The scheme ID.
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取The scheme name.
                     * @return ScheduleName The scheme name.
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置The scheme name.
                     * @param ScheduleName The scheme name.
                     */
                    void SetScheduleName(const std::string& _scheduleName);

                    /**
                     * 判断参数 ScheduleName 是否已赋值
                     * @return ScheduleName 是否已赋值
                     */
                    bool ScheduleNameHasBeenSet() const;

                    /**
                     * 获取The trigger of the scheme.
                     * @return Trigger The trigger of the scheme.
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置The trigger of the scheme.
                     * @param Trigger The trigger of the scheme.
                     */
                    void SetTrigger(const WorkflowTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取The subtasks of the scheme.
Note: You need to pass in the full list of subtasks even if you want to change only some of the subtasks.
                     * @return Activities The subtasks of the scheme.
Note: You need to pass in the full list of subtasks even if you want to change only some of the subtasks.
                     */
                    std::vector<Activity> GetActivities() const;

                    /**
                     * 设置The subtasks of the scheme.
Note: You need to pass in the full list of subtasks even if you want to change only some of the subtasks.
                     * @param Activities The subtasks of the scheme.
Note: You need to pass in the full list of subtasks even if you want to change only some of the subtasks.
                     */
                    void SetActivities(const std::vector<Activity>& _activities);

                    /**
                     * 判断参数 Activities 是否已赋值
                     * @return Activities 是否已赋值
                     */
                    bool ActivitiesHasBeenSet() const;

                    /**
                     * 获取The bucket to save the output file.
                     * @return OutputStorage The bucket to save the output file.
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The bucket to save the output file.
                     * @param OutputStorage The bucket to save the output file.
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取The directory to save the media processing output file, which must start and end with `/`.
Note: If this parameter is left empty, the current `OutputDir` value will be invalidated.
                     * @return OutputDir The directory to save the media processing output file, which must start and end with `/`.
Note: If this parameter is left empty, the current `OutputDir` value will be invalidated.
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置The directory to save the media processing output file, which must start and end with `/`.
Note: If this parameter is left empty, the current `OutputDir` value will be invalidated.
                     * @param OutputDir The directory to save the media processing output file, which must start and end with `/`.
Note: If this parameter is left empty, the current `OutputDir` value will be invalidated.
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取The notification configuration.
                     * @return TaskNotifyConfig The notification configuration.
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置The notification configuration.
                     * @param TaskNotifyConfig The notification configuration.
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                private:

                    /**
                     * The scheme ID.
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * The scheme name.
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * The trigger of the scheme.
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * The subtasks of the scheme.
Note: You need to pass in the full list of subtasks even if you want to change only some of the subtasks.
                     */
                    std::vector<Activity> m_activities;
                    bool m_activitiesHasBeenSet;

                    /**
                     * The bucket to save the output file.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The directory to save the media processing output file, which must start and end with `/`.
Note: If this parameter is left empty, the current `OutputDir` value will be invalidated.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * The notification configuration.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSCHEDULEREQUEST_H_
