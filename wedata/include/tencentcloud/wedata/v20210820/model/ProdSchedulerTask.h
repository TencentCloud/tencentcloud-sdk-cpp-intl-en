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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PRODSCHEDULERTASK_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PRODSCHEDULERTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Data Quality Production Scheduling Task Business Entity
                */
                class ProdSchedulerTask : public AbstractModel
                {
                public:
                    ProdSchedulerTask();
                    ~ProdSchedulerTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Production Scheduling Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Production Scheduling Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Production Scheduling Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Production Scheduling Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Production Scheduling Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Production Scheduling Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Production Scheduling Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Production Scheduling Task ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Production Scheduling Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Production Scheduling Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Production Scheduling Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Production Scheduling Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Production Scheduling Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleType Production Scheduling Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCycleType() const;

                    /**
                     * 设置Production Scheduling Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleType Production Scheduling Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleType(const int64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                private:

                    /**
                     * Production Scheduling Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Production Scheduling Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Production Scheduling Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Production Scheduling Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PRODSCHEDULERTASK_H_
