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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CheckTaskNameExist request structure.
                */
                class CheckTaskNameExistRequest : public AbstractModel
                {
                public:
                    CheckTaskNameExistRequest();
                    ~CheckTaskNameExistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID/Workspace ID.
                     * @return ProjectId Project ID/Workspace ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID/Workspace ID.
                     * @param _projectId Project ID/Workspace ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task Type (consistent with scheduling parameters).
                     * @return TypeId Task Type (consistent with scheduling parameters).
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置Task Type (consistent with scheduling parameters).
                     * @param _typeId Task Type (consistent with scheduling parameters).
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Task Name.
                     * @return TaskName Task Name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name.
                     * @param _taskName Task Name.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                private:

                    /**
                     * Project ID/Workspace ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Type (consistent with scheduling parameters).
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Task Name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTREQUEST_H_
