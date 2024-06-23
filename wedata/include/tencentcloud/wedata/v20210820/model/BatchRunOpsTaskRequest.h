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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNOPSTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNOPSTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * BatchRunOpsTask request structure.
                */
                class BatchRunOpsTaskRequest : public AbstractModel
                {
                public:
                    BatchRunOpsTaskRequest();
                    ~BatchRunOpsTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Whether to Supplement Intermediate Instances, 0 for not supplementing; 1 for supplementing
                     * @return EnableMakeUp Whether to Supplement Intermediate Instances, 0 for not supplementing; 1 for supplementing
                     * 
                     */
                    int64_t GetEnableMakeUp() const;

                    /**
                     * 设置Whether to Supplement Intermediate Instances, 0 for not supplementing; 1 for supplementing
                     * @param _enableMakeUp Whether to Supplement Intermediate Instances, 0 for not supplementing; 1 for supplementing
                     * 
                     */
                    void SetEnableMakeUp(const int64_t& _enableMakeUp);

                    /**
                     * 判断参数 EnableMakeUp 是否已赋值
                     * @return EnableMakeUp 是否已赋值
                     * 
                     */
                    bool EnableMakeUpHasBeenSet() const;

                    /**
                     * 获取Task ID list
                     * @return Tasks Task ID list
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置Task ID list
                     * @param _tasks Task ID list
                     * 
                     */
                    void SetTasks(const std::vector<std::string>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to Supplement Intermediate Instances, 0 for not supplementing; 1 for supplementing
                     */
                    int64_t m_enableMakeUp;
                    bool m_enableMakeUpHasBeenSet;

                    /**
                     * Task ID list
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNOPSTASKREQUEST_H_
