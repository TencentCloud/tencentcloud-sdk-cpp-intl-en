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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Listener task information.
                */
                class EventListenerTaskInfo : public AbstractModel
                {
                public:
                    EventListenerTaskInfo();
                    ~EventListenerTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Workflow id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowId Workflow id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowId Workflow id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Task type name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskType Task type name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskType Task type name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CycleType Task cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Task cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cycleType Task cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                private:

                    /**
                     * Task ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task type name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERTASKINFO_H_
