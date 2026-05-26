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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/CreateTaskBaseAttribute.h>
#include <tencentcloud/wedata/v20250806/model/CreateTaskConfiguration.h>
#include <tencentcloud/wedata/v20250806/model/CreateTaskSchedulerConfiguration.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateTask request structure.
                */
                class CreateTaskRequest : public AbstractModel
                {
                public:
                    CreateTaskRequest();
                    ~CreateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
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
                     * 获取<p>The
basic attributes of the task.</p>
                     * @return TaskBaseAttribute <p>The
basic attributes of the task.</p>
                     * 
                     */
                    CreateTaskBaseAttribute GetTaskBaseAttribute() const;

                    /**
                     * 设置<p>The
basic attributes of the task.</p>
                     * @param _taskBaseAttribute <p>The
basic attributes of the task.</p>
                     * 
                     */
                    void SetTaskBaseAttribute(const CreateTaskBaseAttribute& _taskBaseAttribute);

                    /**
                     * 判断参数 TaskBaseAttribute 是否已赋值
                     * @return TaskBaseAttribute 是否已赋值
                     * 
                     */
                    bool TaskBaseAttributeHasBeenSet() const;

                    /**
                     * 获取<p>Task configurations.</p>
                     * @return TaskConfiguration <p>Task configurations.</p>
                     * 
                     */
                    CreateTaskConfiguration GetTaskConfiguration() const;

                    /**
                     * 设置<p>Task configurations.</p>
                     * @param _taskConfiguration <p>Task configurations.</p>
                     * 
                     */
                    void SetTaskConfiguration(const CreateTaskConfiguration& _taskConfiguration);

                    /**
                     * 判断参数 TaskConfiguration 是否已赋值
                     * @return TaskConfiguration 是否已赋值
                     * 
                     */
                    bool TaskConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>Task scheduling configuration</p>
                     * @return TaskSchedulerConfiguration <p>Task scheduling configuration</p>
                     * 
                     */
                    CreateTaskSchedulerConfiguration GetTaskSchedulerConfiguration() const;

                    /**
                     * 设置<p>Task scheduling configuration</p>
                     * @param _taskSchedulerConfiguration <p>Task scheduling configuration</p>
                     * 
                     */
                    void SetTaskSchedulerConfiguration(const CreateTaskSchedulerConfiguration& _taskSchedulerConfiguration);

                    /**
                     * 判断参数 TaskSchedulerConfiguration 是否已赋值
                     * @return TaskSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool TaskSchedulerConfigurationHasBeenSet() const;

                private:

                    /**
                     * <p>Project ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>The
basic attributes of the task.</p>
                     */
                    CreateTaskBaseAttribute m_taskBaseAttribute;
                    bool m_taskBaseAttributeHasBeenSet;

                    /**
                     * <p>Task configurations.</p>
                     */
                    CreateTaskConfiguration m_taskConfiguration;
                    bool m_taskConfigurationHasBeenSet;

                    /**
                     * <p>Task scheduling configuration</p>
                     */
                    CreateTaskSchedulerConfiguration m_taskSchedulerConfiguration;
                    bool m_taskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKREQUEST_H_
