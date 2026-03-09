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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETRIGGERTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETRIGGERTASKREQUEST_H_

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
                * DeleteTriggerTask request structure.
                */
                class DeleteTriggerTaskRequest : public AbstractModel
                {
                public:
                    DeleteTriggerTaskRequest();
                    ~DeleteTriggerTaskRequest() = default;
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
                     * 获取Task ID.
Specifies either VirtualTaskId or the other parameter.
                     * @return TaskId Task ID.
Specifies either VirtualTaskId or the other parameter.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
Specifies either VirtualTaskId or the other parameter.
                     * @param _taskId Task ID.
Specifies either VirtualTaskId or the other parameter.
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
                     * 获取Whether task operation notifies downstream task owners. valid values: true (notify).
false: do not notify.
Default false if not passed.
                     * @return OperateInform Whether task operation notifies downstream task owners. valid values: true (notify).
false: do not notify.
Default false if not passed.
                     * 
                     */
                    bool GetOperateInform() const;

                    /**
                     * 设置Whether task operation notifies downstream task owners. valid values: true (notify).
false: do not notify.
Default false if not passed.
                     * @param _operateInform Whether task operation notifies downstream task owners. valid values: true (notify).
false: do not notify.
Default false if not passed.
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
                     * 获取This parameter does not take effect. currently, deleting an upstream task does not force failure on downstream task instances.
                     * @return DeleteMode This parameter does not take effect. currently, deleting an upstream task does not force failure on downstream task instances.
                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置This parameter does not take effect. currently, deleting an upstream task does not force failure on downstream task instances.
                     * @param _deleteMode This parameter does not take effect. currently, deleting an upstream task does not force failure on downstream task instances.
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
                     * Task ID.
Specifies either VirtualTaskId or the other parameter.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Whether task operation notifies downstream task owners. valid values: true (notify).
false: do not notify.
Default false if not passed.
                     */
                    bool m_operateInform;
                    bool m_operateInformHasBeenSet;

                    /**
                     * This parameter does not take effect. currently, deleting an upstream task does not force failure on downstream task instances.
                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETRIGGERTASKREQUEST_H_
