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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULESINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The details of a scheme.
                */
                class SchedulesInfo : public AbstractModel
                {
                public:
                    SchedulesInfo();
                    ~SchedulesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The scheme ID.
                     * @return ScheduleId The scheme ID.
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置The scheme ID.
                     * @param _scheduleId The scheme ID.
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取The scheme name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScheduleName The scheme name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置The scheme name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduleName The scheme name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The scheme type. Valid values:
 <li>`Preset`</li>
<li>`Custom` </li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Type The scheme type. Valid values:
 <li>`Preset`</li>
<li>`Custom` </li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The scheme type. Valid values:
 <li>`Preset`</li>
<li>`Custom` </li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _type The scheme type. Valid values:
 <li>`Preset`</li>
<li>`Custom` </li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The scheme status. Valid values:
`Enabled`
`Disabled`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The scheme status. Valid values:
`Enabled`
`Disabled`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The scheme status. Valid values:
`Enabled`
`Disabled`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The scheme status. Valid values:
`Enabled`
`Disabled`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The trigger of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Trigger The trigger of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置The trigger of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trigger The trigger of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Activities The subtasks of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Activity> GetActivities() const;

                    /**
                     * 设置The subtasks of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _activities The subtasks of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The bucket to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputStorage The bucket to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The bucket to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputStorage The bucket to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The directory to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputDir The directory to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置The directory to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputDir The directory to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The notification configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskNotifyConfig The notification configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置The notification configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskNotifyConfig The notification configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime The creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime The creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The last updated time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime The last updated time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last updated time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime The last updated time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Resource ID. For those without an associated resource ID, fill in with an account's primary resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId Resource ID. For those without an associated resource ID, fill in with an account's primary resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. For those without an associated resource ID, fill in with an account's primary resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceId Resource ID. For those without an associated resource ID, fill in with an account's primary resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The scheme ID.
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * The scheme name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * The scheme type. Valid values:
 <li>`Preset`</li>
<li>`Custom` </li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The scheme status. Valid values:
`Enabled`
`Disabled`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The trigger of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * The subtasks of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Activity> m_activities;
                    bool m_activitiesHasBeenSet;

                    /**
                     * The bucket to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The directory to save the output file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * The notification configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * The creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last updated time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Resource ID. For those without an associated resource ID, fill in with an account's primary resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULESINFO_H_
