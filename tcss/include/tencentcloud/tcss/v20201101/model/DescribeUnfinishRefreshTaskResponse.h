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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEUNFINISHREFRESHTASKRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEUNFINISHREFRESHTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeUnfinishRefreshTask response structure.
                */
                class DescribeUnfinishRefreshTaskResponse : public AbstractModel
                {
                public:
                    DescribeUnfinishRefreshTaskResponse();
                    ~DescribeUnfinishRefreshTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the last task
                     * @return TaskId ID of the last task
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `Task_New`, `Task_Running`, `Task_Finish`, `Task_Error`, `Task_NoExist`. `Task_New` and `Task_Running` indicate that a task exists and no new task can be distributed.
                     * @return TaskStatus Task status. Valid values: `Task_New`, `Task_Running`, `Task_Finish`, `Task_Error`, `Task_NoExist`. `Task_New` and `Task_Running` indicate that a task exists and no new task can be distributed.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * ID of the last task
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values: `Task_New`, `Task_Running`, `Task_Finish`, `Task_Error`, `Task_NoExist`. `Task_New` and `Task_Running` indicate that a task exists and no new task can be distributed.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEUNFINISHREFRESHTASKRESPONSE_H_
