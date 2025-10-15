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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PAUSEOPSTASKSASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PAUSEOPSTASKSASYNCREQUEST_H_

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
                * PauseOpsTasksAsync request structure.
                */
                class PauseOpsTasksAsyncRequest : public AbstractModel
                {
                public:
                    PauseOpsTasksAsyncRequest();
                    ~PauseOpsTasksAsyncRequest() = default;
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
                     * 获取Task Id list. specifies the list of task ids.
                     * @return TaskIds Task Id list. specifies the list of task ids.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Task Id list. specifies the list of task ids.
                     * @param _taskIds Task Id list. specifies the list of task ids.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Whether required to terminate the generated instance.
                     * @return KillInstance Whether required to terminate the generated instance.
                     * 
                     */
                    bool GetKillInstance() const;

                    /**
                     * 设置Whether required to terminate the generated instance.
                     * @param _killInstance Whether required to terminate the generated instance.
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
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Id list. specifies the list of task ids.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Whether required to terminate the generated instance.
                     */
                    bool m_killInstance;
                    bool m_killInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PAUSEOPSTASKSASYNCREQUEST_H_
