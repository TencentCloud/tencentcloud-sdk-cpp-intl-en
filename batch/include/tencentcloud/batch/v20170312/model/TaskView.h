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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task view information
                */
                class TaskView : public AbstractModel
                {
                public:
                    TaskView();
                    ~TaskView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name
                     * @return TaskName Task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
                     * @param _taskName Task name
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
                     * 获取Task status
                     * @return TaskState Task status
                     * 
                     */
                    std::string GetTaskState() const;

                    /**
                     * 设置Task status
                     * @param _taskState Task status
                     * 
                     */
                    void SetTaskState(const std::string& _taskState);

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     * 
                     */
                    bool TaskStateHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return CreateTime Start time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Start time
                     * @param _createTime Start time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取End time
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EndTime End time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _endTime End time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task status
                     */
                    std::string m_taskState;
                    bool m_taskStateHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * End time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKVIEW_H_
