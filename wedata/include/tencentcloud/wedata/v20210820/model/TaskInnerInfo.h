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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINNERINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINNERINFO_H_

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
                * Task Attributes
                */
                class TaskInnerInfo : public AbstractModel
                {
                public:
                    TaskInnerInfo();
                    ~TaskInnerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Task Name
                     * @return TaskName Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name
                     * @param _taskName Task Name
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
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
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
                     * 获取Cycle Type 0: Crontab Type, 1: minutes, 2: Hour, 3: Days, 4: Weekly, 5: Month, 6: One-time, 7: User-driven, 10: Elastic Cycle (Week), 11: Elastic Cycle (Month), 12: Year, 13: Instant Trigger (Instant Type), isolated from normal cyclic scheduling tasks
                     * @return CycleType Cycle Type 0: Crontab Type, 1: minutes, 2: Hour, 3: Days, 4: Weekly, 5: Month, 6: One-time, 7: User-driven, 10: Elastic Cycle (Week), 11: Elastic Cycle (Month), 12: Year, 13: Instant Trigger (Instant Type), isolated from normal cyclic scheduling tasks
                     * 
                     */
                    int64_t GetCycleType() const;

                    /**
                     * 设置Cycle Type 0: Crontab Type, 1: minutes, 2: Hour, 3: Days, 4: Weekly, 5: Month, 6: One-time, 7: User-driven, 10: Elastic Cycle (Week), 11: Elastic Cycle (Month), 12: Year, 13: Instant Trigger (Instant Type), isolated from normal cyclic scheduling tasks
                     * @param _cycleType Cycle Type 0: Crontab Type, 1: minutes, 2: Hour, 3: Days, 4: Weekly, 5: Month, 6: One-time, 7: User-driven, 10: Elastic Cycle (Week), 11: Elastic Cycle (Month), 12: Year, 13: Instant Trigger (Instant Type), isolated from normal cyclic scheduling tasks
                     * 
                     */
                    void SetCycleType(const int64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VirtualTaskId Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _virtualTaskId Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVirtualTaskId(const std::string& _virtualTaskId);

                    /**
                     * 判断参数 VirtualTaskId 是否已赋值
                     * @return VirtualTaskId 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdHasBeenSet() const;

                    /**
                     * 获取Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VirtualFlag Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _virtualFlag Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                    /**
                     * 获取Real Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RealWorkflowId Real Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRealWorkflowId() const;

                    /**
                     * 设置Real Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _realWorkflowId Real Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRealWorkflowId(const std::string& _realWorkflowId);

                    /**
                     * 判断参数 RealWorkflowId 是否已赋值
                     * @return RealWorkflowId 是否已赋值
                     * 
                     */
                    bool RealWorkflowIdHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Cycle Type 0: Crontab Type, 1: minutes, 2: Hour, 3: Days, 4: Weekly, 5: Month, 6: One-time, 7: User-driven, 10: Elastic Cycle (Week), 11: Elastic Cycle (Month), 12: Year, 13: Instant Trigger (Instant Type), isolated from normal cyclic scheduling tasks
                     */
                    int64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                    /**
                     * Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * Real Task Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_realWorkflowId;
                    bool m_realWorkflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINNERINFO_H_
