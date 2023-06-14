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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TASKDETAIL_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Task details
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task
                     * @return TaskName Task
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task
                     * @param _taskName Task
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
                     * 获取Task UUID
                     * @return TaskUUID Task UUID
                     * 
                     */
                    std::string GetTaskUUID() const;

                    /**
                     * 设置Task UUID
                     * @param _taskUUID Task UUID
                     * 
                     */
                    void SetTaskUUID(const std::string& _taskUUID);

                    /**
                     * 判断参数 TaskUUID 是否已赋值
                     * @return TaskUUID 是否已赋值
                     * 
                     */
                    bool TaskUUIDHasBeenSet() const;

                    /**
                     * 获取Task status
                     * @return TaskStatus Task status
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Task status
                     * @param _taskStatus Task status
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TaskMessage Task details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskMessage() const;

                    /**
                     * 设置Task details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _taskMessage Task details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskMessage(const std::string& _taskMessage);

                    /**
                     * 判断参数 TaskMessage 是否已赋值
                     * @return TaskMessage 是否已赋值
                     * 
                     */
                    bool TaskMessageHasBeenSet() const;

                    /**
                     * 获取Start time of the task
                     * @return CreatedTime Start time of the task
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Start time of the task
                     * @param _createdTime Start time of the task
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取End time of the task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FinishedTime End time of the task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置End time of the task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _finishedTime End time of the task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFinishedTime(const std::string& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                private:

                    /**
                     * Task
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task UUID
                     */
                    std::string m_taskUUID;
                    bool m_taskUUIDHasBeenSet;

                    /**
                     * Task status
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_taskMessage;
                    bool m_taskMessageHasBeenSet;

                    /**
                     * Start time of the task
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * End time of the task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TASKDETAIL_H_
