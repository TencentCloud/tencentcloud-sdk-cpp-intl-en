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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_

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
                * Task list information
                */
                class TaskListItem : public AbstractModel
                {
                public:
                    TaskListItem();
                    ~TaskListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task name
                     * @return TaskTitle Task name
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置Task name
                     * @param _taskTitle Task name
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取Task description
                     * @return TaskDescription Task description
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置Task description
                     * @param _taskDescription Task description
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取Task tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTag Task tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskTag() const;

                    /**
                     * 设置Task tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTag Task tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTag(const std::string& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     * 
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * @return TaskStatus Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * @param _taskStatus Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return TaskCreateTime Task creation time
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _taskCreateTime Task creation time
                     * 
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取Task update time
                     * @return TaskUpdateTime Task update time
                     * 
                     */
                    std::string GetTaskUpdateTime() const;

                    /**
                     * 设置Task update time
                     * @param _taskUpdateTime Task update time
                     * 
                     */
                    void SetTaskUpdateTime(const std::string& _taskUpdateTime);

                    /**
                     * 判断参数 TaskUpdateTime 是否已赋值
                     * @return TaskUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskUpdateTimeHasBeenSet() const;

                    /**
                     * 获取0: not started; 1: in progress; 2: completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskPreCheckStatus 0: not started; 1: in progress; 2: completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskPreCheckStatus() const;

                    /**
                     * 设置0: not started; 1: in progress; 2: completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskPreCheckStatus 0: not started; 1: in progress; 2: completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskPreCheckStatus(const int64_t& _taskPreCheckStatus);

                    /**
                     * 判断参数 TaskPreCheckStatus 是否已赋值
                     * @return TaskPreCheckStatus 是否已赋值
                     * 
                     */
                    bool TaskPreCheckStatusHasBeenSet() const;

                    /**
                     * 获取Whether the environmental check is passed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskPreCheckSuccess Whether the environmental check is passed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTaskPreCheckSuccess() const;

                    /**
                     * 设置Whether the environmental check is passed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskPreCheckSuccess Whether the environmental check is passed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskPreCheckSuccess(const bool& _taskPreCheckSuccess);

                    /**
                     * 判断参数 TaskPreCheckSuccess 是否已赋值
                     * @return TaskPreCheckSuccess 是否已赋值
                     * 
                     */
                    bool TaskPreCheckSuccessHasBeenSet() const;

                    /**
                     * 获取Whether the experiment result meets expectations. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskExpect Whether the experiment result meets expectations. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskExpect() const;

                    /**
                     * 设置Whether the experiment result meets expectations. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskExpect Whether the experiment result meets expectations. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskExpect(const int64_t& _taskExpect);

                    /**
                     * 判断参数 TaskExpect 是否已赋值
                     * @return TaskExpect 是否已赋值
                     * 
                     */
                    bool TaskExpectHasBeenSet() const;

                    /**
                     * 获取ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Verification item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VerifyId Verification item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVerifyId() const;

                    /**
                     * 设置Verification item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _verifyId Verification item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyId(const uint64_t& _verifyId);

                    /**
                     * 判断参数 VerifyId 是否已赋值
                     * @return VerifyId 是否已赋值
                     * 
                     */
                    bool VerifyIdHasBeenSet() const;

                    /**
                     * 获取Status. 0: no status; 1: successful; 2: failed; 3: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatusType Status. 0: no status; 1: successful; 2: failed; 3: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskStatusType() const;

                    /**
                     * 设置Status. 0: no status; 1: successful; 2: failed; 3: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStatusType Status. 0: no status; 1: successful; 2: failed; 3: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskStatusType(const uint64_t& _taskStatusType);

                    /**
                     * 判断参数 TaskStatusType 是否已赋值
                     * @return TaskStatusType 是否已赋值
                     * 
                     */
                    bool TaskStatusTypeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * Task description
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * Task tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskTag;
                    bool m_taskTagHasBeenSet;

                    /**
                     * Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * Task update time
                     */
                    std::string m_taskUpdateTime;
                    bool m_taskUpdateTimeHasBeenSet;

                    /**
                     * 0: not started; 1: in progress; 2: completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskPreCheckStatus;
                    bool m_taskPreCheckStatusHasBeenSet;

                    /**
                     * Whether the environmental check is passed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_taskPreCheckSuccess;
                    bool m_taskPreCheckSuccessHasBeenSet;

                    /**
                     * Whether the experiment result meets expectations. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskExpect;
                    bool m_taskExpectHasBeenSet;

                    /**
                     * ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Verification item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_verifyId;
                    bool m_verifyIdHasBeenSet;

                    /**
                     * Status. 0: no status; 1: successful; 2: failed; 3: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskStatusType;
                    bool m_taskStatusTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_
