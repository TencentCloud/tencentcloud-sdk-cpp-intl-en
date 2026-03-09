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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDER_H_

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
                * Task folder info.
                */
                class TaskFolder : public AbstractModel
                {
                public:
                    TaskFolder();
                    ~TaskFolder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskFolderId Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskFolderId Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取Folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskFolderPath Folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskFolderPath() const;

                    /**
                     * 设置Folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskFolderPath Folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskFolderPath(const std::string& _taskFolderPath);

                    /**
                     * 判断参数 TaskFolderPath 是否已赋值
                     * @return TaskFolderPath 是否已赋值
                     * 
                     */
                    bool TaskFolderPathHasBeenSet() const;

                    /**
                     * 获取Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUserUin Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUserUin Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                private:

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * Folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskFolderPath;
                    bool m_taskFolderPathHasBeenSet;

                    /**
                     * Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDER_H_
