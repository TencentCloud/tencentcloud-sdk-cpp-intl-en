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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Task group action instance
                */
                class TaskGroupInstance : public AbstractModel
                {
                public:
                    TaskGroupInstance();
                    ~TaskGroupInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return TaskGroupInstanceId Instance ID
                     * 
                     */
                    int64_t GetTaskGroupInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _taskGroupInstanceId Instance ID
                     * 
                     */
                    void SetTaskGroupInstanceId(const int64_t& _taskGroupInstanceId);

                    /**
                     * 判断参数 TaskGroupInstanceId 是否已赋值
                     * @return TaskGroupInstanceId 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstanceObjectId Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskGroupInstanceObjectId() const;

                    /**
                     * 设置Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstanceObjectId Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstanceObjectId(const std::string& _taskGroupInstanceObjectId);

                    /**
                     * 判断参数 TaskGroupInstanceObjectId 是否已赋值
                     * @return TaskGroupInstanceObjectId 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceObjectIdHasBeenSet() const;

                    /**
                     * 获取Instance action execution status

                     * @return TaskGroupInstanceStatus Instance action execution status

                     * 
                     */
                    int64_t GetTaskGroupInstanceStatus() const;

                    /**
                     * 设置Instance action execution status

                     * @param _taskGroupInstanceStatus Instance action execution status

                     * 
                     */
                    void SetTaskGroupInstanceStatus(const int64_t& _taskGroupInstanceStatus);

                    /**
                     * 判断参数 TaskGroupInstanceStatus 是否已赋值
                     * @return TaskGroupInstanceStatus 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return TaskGroupInstanceCreateTime Instance creation time
                     * 
                     */
                    std::string GetTaskGroupInstanceCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _taskGroupInstanceCreateTime Instance creation time
                     * 
                     */
                    void SetTaskGroupInstanceCreateTime(const std::string& _taskGroupInstanceCreateTime);

                    /**
                     * 判断参数 TaskGroupInstanceCreateTime 是否已赋值
                     * @return TaskGroupInstanceCreateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance update time
                     * @return TaskGroupInstanceUpdateTime Instance update time
                     * 
                     */
                    std::string GetTaskGroupInstanceUpdateTime() const;

                    /**
                     * 设置Instance update time
                     * @param _taskGroupInstanceUpdateTime Instance update time
                     * 
                     */
                    void SetTaskGroupInstanceUpdateTime(const std::string& _taskGroupInstanceUpdateTime);

                    /**
                     * 判断参数 TaskGroupInstanceUpdateTime 是否已赋值
                     * @return TaskGroupInstanceUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Status. 0: no status; 1: successful; 2: failed; 3: terminated; 4: skipped.
                     * @return TaskGroupInstanceStatusType Status. 0: no status; 1: successful; 2: failed; 3: terminated; 4: skipped.
                     * 
                     */
                    int64_t GetTaskGroupInstanceStatusType() const;

                    /**
                     * 设置Status. 0: no status; 1: successful; 2: failed; 3: terminated; 4: skipped.
                     * @param _taskGroupInstanceStatusType Status. 0: no status; 1: successful; 2: failed; 3: terminated; 4: skipped.
                     * 
                     */
                    void SetTaskGroupInstanceStatusType(const int64_t& _taskGroupInstanceStatusType);

                    /**
                     * 判断参数 TaskGroupInstanceStatusType 是否已赋值
                     * @return TaskGroupInstanceStatusType 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceStatusTypeHasBeenSet() const;

                    /**
                     * 获取Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstanceStartTime Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskGroupInstanceStartTime() const;

                    /**
                     * 设置Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstanceStartTime Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstanceStartTime(const std::string& _taskGroupInstanceStartTime);

                    /**
                     * 判断参数 TaskGroupInstanceStartTime 是否已赋值
                     * @return TaskGroupInstanceStartTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceStartTimeHasBeenSet() const;

                    /**
                     * 获取Execution end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstanceEndTime Execution end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskGroupInstanceEndTime() const;

                    /**
                     * 设置Execution end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstanceEndTime Execution end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstanceEndTime(const std::string& _taskGroupInstanceEndTime);

                    /**
                     * 判断参数 TaskGroupInstanceEndTime 是否已赋值
                     * @return TaskGroupInstanceEndTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceEndTimeHasBeenSet() const;

                    /**
                     * 获取Instance action execution log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstanceExecuteLog Instance action execution log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetTaskGroupInstanceExecuteLog() const;

                    /**
                     * 设置Instance action execution log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstanceExecuteLog Instance action execution log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetTaskGroupInstanceExecuteLog(const std::string& _taskGroupInstanceExecuteLog);

                    /**
                     * 判断参数 TaskGroupInstanceExecuteLog 是否已赋值
                     * @return TaskGroupInstanceExecuteLog 是否已赋值
                     * @deprecated
                     */
                    bool TaskGroupInstanceExecuteLogHasBeenSet() const;

                    /**
                     * 获取Whether the instance can be retried
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstanceIsRedo Whether the instance can be retried
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTaskGroupInstanceIsRedo() const;

                    /**
                     * 设置Whether the instance can be retried
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstanceIsRedo Whether the instance can be retried
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstanceIsRedo(const bool& _taskGroupInstanceIsRedo);

                    /**
                     * 判断参数 TaskGroupInstanceIsRedo 是否已赋值
                     * @return TaskGroupInstanceIsRedo 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceIsRedoHasBeenSet() const;

                    /**
                     * 获取Action instance execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstanceExecuteTime Action instance execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupInstanceExecuteTime() const;

                    /**
                     * 设置Action instance execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstanceExecuteTime Action instance execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstanceExecuteTime(const int64_t& _taskGroupInstanceExecuteTime);

                    /**
                     * 判断参数 TaskGroupInstanceExecuteTime 是否已赋值
                     * @return TaskGroupInstanceExecuteTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceExecuteTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    int64_t m_taskGroupInstanceId;
                    bool m_taskGroupInstanceIdHasBeenSet;

                    /**
                     * Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskGroupInstanceObjectId;
                    bool m_taskGroupInstanceObjectIdHasBeenSet;

                    /**
                     * Instance action execution status

                     */
                    int64_t m_taskGroupInstanceStatus;
                    bool m_taskGroupInstanceStatusHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_taskGroupInstanceCreateTime;
                    bool m_taskGroupInstanceCreateTimeHasBeenSet;

                    /**
                     * Instance update time
                     */
                    std::string m_taskGroupInstanceUpdateTime;
                    bool m_taskGroupInstanceUpdateTimeHasBeenSet;

                    /**
                     * Status. 0: no status; 1: successful; 2: failed; 3: terminated; 4: skipped.
                     */
                    int64_t m_taskGroupInstanceStatusType;
                    bool m_taskGroupInstanceStatusTypeHasBeenSet;

                    /**
                     * Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskGroupInstanceStartTime;
                    bool m_taskGroupInstanceStartTimeHasBeenSet;

                    /**
                     * Execution end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskGroupInstanceEndTime;
                    bool m_taskGroupInstanceEndTimeHasBeenSet;

                    /**
                     * Instance action execution log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskGroupInstanceExecuteLog;
                    bool m_taskGroupInstanceExecuteLogHasBeenSet;

                    /**
                     * Whether the instance can be retried
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_taskGroupInstanceIsRedo;
                    bool m_taskGroupInstanceIsRedoHasBeenSet;

                    /**
                     * Action instance execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupInstanceExecuteTime;
                    bool m_taskGroupInstanceExecuteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCE_H_
