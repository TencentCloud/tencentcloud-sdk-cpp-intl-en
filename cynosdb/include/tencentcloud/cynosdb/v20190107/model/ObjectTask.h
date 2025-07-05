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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OBJECTTASK_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OBJECTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Task information
                */
                class ObjectTask : public AbstractModel
                {
                public:
                    ObjectTask();
                    ~ObjectTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task auto-increment ID.
                     * @return TaskId Task auto-increment ID.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task auto-increment ID.
                     * @param _taskId Task auto-increment ID.
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
                     * 获取Task type
                     * @return TaskType Task type
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type
                     * @param _taskType Task type
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Status of tasks.
                     * @return TaskStatus Status of tasks.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Status of tasks.
                     * @param _taskStatus Status of tasks.
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
                     * 获取Task ID (cluster ID | instance group ID | instance ID).
                     * @return ObjectId Task ID (cluster ID | instance group ID | instance ID).
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置Task ID (cluster ID | instance group ID | instance ID).
                     * @param _objectId Task ID (cluster ID | instance group ID | instance ID).
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取Task type
                     * @return ObjectType Task type
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置Task type
                     * @param _objectType Task type
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                private:

                    /**
                     * Task auto-increment ID.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task type
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Status of tasks.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task ID (cluster ID | instance group ID | instance ID).
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * Task type
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OBJECTTASK_H_
