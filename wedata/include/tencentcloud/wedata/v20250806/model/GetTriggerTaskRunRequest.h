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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTRIGGERTASKRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTRIGGERTASKRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetTriggerTaskRun request structure.
                */
                class GetTriggerTaskRunRequest : public AbstractModel
                {
                public:
                    GetTriggerTaskRunRequest();
                    ~GetTriggerTaskRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Workspace ID.
                     * @return ProjectId Workspace ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Workspace ID.
                     * @param _projectId Workspace ID.
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
                     * 获取Task run ID.
                     * @return TaskExecutionId Task run ID.
                     * 
                     */
                    std::string GetTaskExecutionId() const;

                    /**
                     * 设置Task run ID.
                     * @param _taskExecutionId Task run ID.
                     * 
                     */
                    void SetTaskExecutionId(const std::string& _taskExecutionId);

                    /**
                     * 判断参数 TaskExecutionId 是否已赋值
                     * @return TaskExecutionId 是否已赋值
                     * 
                     */
                    bool TaskExecutionIdHasBeenSet() const;

                private:

                    /**
                     * Workspace ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task run ID.
                     */
                    std::string m_taskExecutionId;
                    bool m_taskExecutionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTRIGGERTASKRUNREQUEST_H_
