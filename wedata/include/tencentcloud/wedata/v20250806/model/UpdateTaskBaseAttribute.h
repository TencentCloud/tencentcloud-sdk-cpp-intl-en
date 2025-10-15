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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBASEATTRIBUTE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBASEATTRIBUTE_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Updates the basic attribute information of the task.
                */
                class UpdateTaskBaseAttribute : public AbstractModel
                {
                public:
                    UpdateTaskBaseAttribute();
                    ~UpdateTaskBaseAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
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
                     * 获取Task owner ID.
                     * @return OwnerUin Task owner ID.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Task owner ID.
                     * @param _ownerUin Task owner ID.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

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

                private:

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task owner ID.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Task description
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKBASEATTRIBUTE_H_
