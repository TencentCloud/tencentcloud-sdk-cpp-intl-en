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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETASKREQUEST_H_

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
                * DeleteTask request structure.
                */
                class DeleteTaskRequest : public AbstractModel
                {
                public:
                    DeleteTaskRequest();
                    ~DeleteTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.

                     * @return ProjectId Project ID.

                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

                     * @param _projectId Project ID.

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
                     * 获取Either Task ID or VirtualTaskId must be provided (optional, choose one).
                     * @return TaskId Either Task ID or VirtualTaskId must be provided (optional, choose one).
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Either Task ID or VirtualTaskId must be provided (optional, choose one).
                     * @param _taskId Either Task ID or VirtualTaskId must be provided (optional, choose one).
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
                     * 获取Whether to send a notification to downstream task owners when performing task operations.
true: Send notification
false: Do not send notification
default: false.
                     * @return OperateInform Whether to send a notification to downstream task owners when performing task operations.
true: Send notification
false: Do not send notification
default: false.
                     * 
                     */
                    bool GetOperateInform() const;

                    /**
                     * 设置Whether to send a notification to downstream task owners when performing task operations.
true: Send notification
false: Do not send notification
default: false.
                     * @param _operateInform Whether to send a notification to downstream task owners when performing task operations.
true: Send notification
false: Do not send notification
default: false.
                     * 
                     */
                    void SetOperateInform(const bool& _operateInform);

                    /**
                     * 判断参数 OperateInform 是否已赋值
                     * @return OperateInform 是否已赋值
                     * 
                     */
                    bool OperateInformHasBeenSet() const;

                    /**
                     * 获取Task Deletion Mode.
true: Do not force downstream task instances to fail
false: Force downstream task instances to fail
default: false 

                     * @return DeleteMode Task Deletion Mode.
true: Do not force downstream task instances to fail
false: Force downstream task instances to fail
default: false 

                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置Task Deletion Mode.
true: Do not force downstream task instances to fail
false: Force downstream task instances to fail
default: false 

                     * @param _deleteMode Task Deletion Mode.
true: Do not force downstream task instances to fail
false: Force downstream task instances to fail
default: false 

                     * 
                     */
                    void SetDeleteMode(const bool& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                private:

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Either Task ID or VirtualTaskId must be provided (optional, choose one).
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Whether to send a notification to downstream task owners when performing task operations.
true: Send notification
false: Do not send notification
default: false.
                     */
                    bool m_operateInform;
                    bool m_operateInformHasBeenSet;

                    /**
                     * Task Deletion Mode.
true: Do not force downstream task instances to fail
false: Force downstream task instances to fail
default: false 

                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETASKREQUEST_H_
