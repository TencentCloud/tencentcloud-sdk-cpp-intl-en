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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKINSTANCEREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExecuteTaskInstance request structure.
                */
                class ExecuteTaskInstanceRequest : public AbstractModel
                {
                public:
                    ExecuteTaskInstanceRequest();
                    ~ExecuteTaskInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task action ID
                     * @return TaskActionId Task action ID
                     * 
                     */
                    uint64_t GetTaskActionId() const;

                    /**
                     * 设置Task action ID
                     * @param _taskActionId Task action ID
                     * 
                     */
                    void SetTaskActionId(const uint64_t& _taskActionId);

                    /**
                     * 判断参数 TaskActionId 是否已赋值
                     * @return TaskActionId 是否已赋值
                     * 
                     */
                    bool TaskActionIdHasBeenSet() const;

                    /**
                     * 获取Task action instance ID
                     * @return TaskInstanceIds Task action instance ID
                     * 
                     */
                    std::vector<uint64_t> GetTaskInstanceIds() const;

                    /**
                     * 设置Task action instance ID
                     * @param _taskInstanceIds Task action instance ID
                     * 
                     */
                    void SetTaskInstanceIds(const std::vector<uint64_t>& _taskInstanceIds);

                    /**
                     * 判断参数 TaskInstanceIds 是否已赋值
                     * @return TaskInstanceIds 是否已赋值
                     * 
                     */
                    bool TaskInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether to operate on the entire task
                     * @return IsOperateAll Whether to operate on the entire task
                     * 
                     */
                    bool GetIsOperateAll() const;

                    /**
                     * 设置Whether to operate on the entire task
                     * @param _isOperateAll Whether to operate on the entire task
                     * 
                     */
                    void SetIsOperateAll(const bool& _isOperateAll);

                    /**
                     * 判断参数 IsOperateAll 是否已赋值
                     * @return IsOperateAll 是否已赋值
                     * 
                     */
                    bool IsOperateAllHasBeenSet() const;

                    /**
                     * 获取Operation type (1: start; 2: execute; 3: skip; 5: retry)
                     * @return ActionType Operation type (1: start; 2: execute; 3: skip; 5: retry)
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置Operation type (1: start; 2: execute; 3: skip; 5: retry)
                     * @param _actionType Operation type (1: start; 2: execute; 3: skip; 5: retry)
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Action group ID
                     * @return TaskGroupId Action group ID
                     * 
                     */
                    uint64_t GetTaskGroupId() const;

                    /**
                     * 设置Action group ID
                     * @param _taskGroupId Action group ID
                     * 
                     */
                    void SetTaskGroupId(const uint64_t& _taskGroupId);

                    /**
                     * 判断参数 TaskGroupId 是否已赋值
                     * @return TaskGroupId 是否已赋值
                     * 
                     */
                    bool TaskGroupIdHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task action ID
                     */
                    uint64_t m_taskActionId;
                    bool m_taskActionIdHasBeenSet;

                    /**
                     * Task action instance ID
                     */
                    std::vector<uint64_t> m_taskInstanceIds;
                    bool m_taskInstanceIdsHasBeenSet;

                    /**
                     * Whether to operate on the entire task
                     */
                    bool m_isOperateAll;
                    bool m_isOperateAllHasBeenSet;

                    /**
                     * Operation type (1: start; 2: execute; 3: skip; 5: retry)
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Action group ID
                     */
                    uint64_t m_taskGroupId;
                    bool m_taskGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKINSTANCEREQUEST_H_
