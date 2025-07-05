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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FREEZEOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FREEZEOPSTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SimpleTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * FreezeOpsTasks request structure.
                */
                class FreezeOpsTasksRequest : public AbstractModel
                {
                public:
                    FreezeOpsTasksRequest();
                    ~FreezeOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task List
                     * @return Tasks Task List
                     * 
                     */
                    std::vector<SimpleTaskInfo> GetTasks() const;

                    /**
                     * 设置Task List
                     * @param _tasks Task List
                     * 
                     */
                    void SetTasks(const std::vector<SimpleTaskInfo>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Whether Task Operation Notifies Downstream Task Owners
                     * @return OperateIsInform Whether Task Operation Notifies Downstream Task Owners
                     * 
                     */
                    bool GetOperateIsInform() const;

                    /**
                     * 设置Whether Task Operation Notifies Downstream Task Owners
                     * @param _operateIsInform Whether Task Operation Notifies Downstream Task Owners
                     * 
                     */
                    void SetOperateIsInform(const bool& _operateIsInform);

                    /**
                     * 判断参数 OperateIsInform 是否已赋值
                     * @return OperateIsInform 是否已赋值
                     * 
                     */
                    bool OperateIsInformHasBeenSet() const;

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
                     * Task List
                     */
                    std::vector<SimpleTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Whether Task Operation Notifies Downstream Task Owners
                     */
                    bool m_operateIsInform;
                    bool m_operateIsInformHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FREEZEOPSTASKSREQUEST_H_
