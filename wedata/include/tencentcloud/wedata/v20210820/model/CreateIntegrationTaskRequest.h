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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINTEGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINTEGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateIntegrationTask request structure.
                */
                class CreateIntegrationTaskRequest : public AbstractModel
                {
                public:
                    CreateIntegrationTaskRequest();
                    ~CreateIntegrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task Information
                     * @return TaskInfo Task Information
                     * 
                     */
                    IntegrationTaskInfo GetTaskInfo() const;

                    /**
                     * 设置Task Information
                     * @param _taskInfo Task Information
                     * 
                     */
                    void SetTaskInfo(const IntegrationTaskInfo& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

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

                private:

                    /**
                     * Task Information
                     */
                    IntegrationTaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINTEGRATIONTASKREQUEST_H_
