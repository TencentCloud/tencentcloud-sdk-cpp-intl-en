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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateWorkflowFolder request structure.
                */
                class CreateWorkflowFolderRequest : public AbstractModel
                {
                public:
                    CreateWorkflowFolderRequest();
                    ~CreateWorkflowFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Parent folder absolute path, such as /abc/de. if it is the root directory, pass /.
                     * @return ParentFolderPath Parent folder absolute path, such as /abc/de. if it is the root directory, pass /.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Parent folder absolute path, such as /abc/de. if it is the root directory, pass /.
                     * @param _parentFolderPath Parent folder absolute path, such as /abc/de. if it is the root directory, pass /.
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取Specifies the folder name to be created.
                     * @return FolderName Specifies the folder name to be created.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Specifies the folder name to be created.
                     * @param _folderName Specifies the folder name to be created.
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Parent folder absolute path, such as /abc/de. if it is the root directory, pass /.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Specifies the folder name to be created.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWFOLDERREQUEST_H_
