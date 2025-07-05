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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/StageCloudApiRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SubmitTaskTestRun request structure.
                */
                class SubmitTaskTestRunRequest : public AbstractModel
                {
                public:
                    SubmitTaskTestRunRequest();
                    ~SubmitTaskTestRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取taskId list
                     * @return TaskIds taskId list
                     * 
                     */
                    std::string GetTaskIds() const;

                    /**
                     * 设置taskId list
                     * @param _taskIds taskId list
                     * 
                     */
                    void SetTaskIds(const std::string& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Workflow ID
                     * @return WorkFlowId Workflow ID
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workFlowId Workflow ID
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

                    /**
                     * 获取Workflow name
                     * @return Name Workflow name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Workflow name
                     * @param _name Workflow name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Workflow Task List
                     * @return Tasks Workflow Task List
                     * 
                     */
                    std::vector<StageCloudApiRequest> GetTasks() const;

                    /**
                     * 设置Workflow Task List
                     * @param _tasks Workflow Task List
                     * 
                     */
                    void SetTasks(const std::vector<StageCloudApiRequest>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Description Remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks
                     * @param _description Remarks
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Runtime Parameters, JSON format of map
                     * @return RunParams Runtime Parameters, JSON format of map
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置Runtime Parameters, JSON format of map
                     * @param _runParams Runtime Parameters, JSON format of map
                     * 
                     */
                    void SetRunParams(const std::string& _runParams);

                    /**
                     * 判断参数 RunParams 是否已赋值
                     * @return RunParams 是否已赋值
                     * 
                     */
                    bool RunParamsHasBeenSet() const;

                    /**
                     * 获取Script Content
                     * @return ScriptContent Script Content
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Script Content
                     * @param _scriptContent Script Content
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return VersionId Version number
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Version number
                     * @param _versionId Version number
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * taskId list
                     */
                    std::string m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                    /**
                     * Workflow name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Workflow Task List
                     */
                    std::vector<StageCloudApiRequest> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Runtime Parameters, JSON format of map
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * Script Content
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Version number
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNREQUEST_H_
