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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTOPOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTOPOPSTASKSREQUEST_H_

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
                * BatchStopOpsTasks request structure.
                */
                class BatchStopOpsTasksRequest : public AbstractModel
                {
                public:
                    BatchStopOpsTasksRequest();
                    ~BatchStopOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TaskId for batch stop tasks
                     * @return TaskIdList TaskId for batch stop tasks
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置TaskId for batch stop tasks
                     * @param _taskIdList TaskId for batch stop tasks
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

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
                     * 获取Whether to terminate the generated instance
                     * @return KillInstance Whether to terminate the generated instance
                     * 
                     */
                    bool GetKillInstance() const;

                    /**
                     * 设置Whether to terminate the generated instance
                     * @param _killInstance Whether to terminate the generated instance
                     * 
                     */
                    void SetKillInstance(const bool& _killInstance);

                    /**
                     * 判断参数 KillInstance 是否已赋值
                     * @return KillInstance 是否已赋值
                     * 
                     */
                    bool KillInstanceHasBeenSet() const;

                private:

                    /**
                     * TaskId for batch stop tasks
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to terminate the generated instance
                     */
                    bool m_killInstance;
                    bool m_killInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTOPOPSTASKSREQUEST_H_
