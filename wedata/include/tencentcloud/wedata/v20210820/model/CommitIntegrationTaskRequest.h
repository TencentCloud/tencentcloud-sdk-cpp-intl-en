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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITINTEGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITINTEGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CommitIntegrationTask request structure.
                */
                class CommitIntegrationTaskRequest : public AbstractModel
                {
                public:
                    CommitIntegrationTaskRequest();
                    ~CommitIntegrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取0. Only submit, 1. Start immediately, 2. Stop online jobs, discard job state data, restart, 3. Pause online jobs, keep job state data, continue running, 4. Keep job state data, continue running
                     * @return CommitType 0. Only submit, 1. Start immediately, 2. Stop online jobs, discard job state data, restart, 3. Pause online jobs, keep job state data, continue running, 4. Keep job state data, continue running
                     * 
                     */
                    int64_t GetCommitType() const;

                    /**
                     * 设置0. Only submit, 1. Start immediately, 2. Stop online jobs, discard job state data, restart, 3. Pause online jobs, keep job state data, continue running, 4. Keep job state data, continue running
                     * @param _commitType 0. Only submit, 1. Start immediately, 2. Stop online jobs, discard job state data, restart, 3. Pause online jobs, keep job state data, continue running, 4. Keep job state data, continue running
                     * 
                     */
                    void SetCommitType(const int64_t& _commitType);

                    /**
                     * 判断参数 CommitType 是否已赋值
                     * @return CommitType 是否已赋值
                     * 
                     */
                    bool CommitTypeHasBeenSet() const;

                    /**
                     * 获取Real-time task 201 Offline task 202 Default is real-time task
                     * @return TaskType Real-time task 201 Offline task 202 Default is real-time task
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Real-time task 201 Offline task 202 Default is real-time task
                     * @param _taskType Real-time task 201 Offline task 202 Default is real-time task
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Additional parameters
                     * @return ExtConfig Additional parameters
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置Additional parameters
                     * @param _extConfig Additional parameters
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取Submit version description
                     * @return VersionDesc Submit version description
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置Submit version description
                     * @param _versionDesc Submit version description
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取Submit version number
                     * @return InstanceVersion Submit version number
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置Submit version number
                     * @param _instanceVersion Submit version number
                     * 
                     */
                    void SetInstanceVersion(const int64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取Describe the type of front-end operation
                     * @return EventDesc Describe the type of front-end operation
                     * 
                     */
                    std::string GetEventDesc() const;

                    /**
                     * 设置Describe the type of front-end operation
                     * @param _eventDesc Describe the type of front-end operation
                     * 
                     */
                    void SetEventDesc(const std::string& _eventDesc);

                    /**
                     * 判断参数 EventDesc 是否已赋值
                     * @return EventDesc 是否已赋值
                     * 
                     */
                    bool EventDescHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 0. Only submit, 1. Start immediately, 2. Stop online jobs, discard job state data, restart, 3. Pause online jobs, keep job state data, continue running, 4. Keep job state data, continue running
                     */
                    int64_t m_commitType;
                    bool m_commitTypeHasBeenSet;

                    /**
                     * Real-time task 201 Offline task 202 Default is real-time task
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Additional parameters
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * Submit version description
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * Submit version number
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * Describe the type of front-end operation
                     */
                    std::string m_eventDesc;
                    bool m_eventDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITINTEGRATIONTASKREQUEST_H_
