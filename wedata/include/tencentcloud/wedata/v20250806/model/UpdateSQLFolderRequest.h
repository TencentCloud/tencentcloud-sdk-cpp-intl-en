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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLFOLDERREQUEST_H_

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
                * UpdateSQLFolder request structure.
                */
                class UpdateSQLFolderRequest : public AbstractModel
                {
                public:
                    UpdateSQLFolderRequest();
                    ~UpdateSQLFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Folder ID
                     * @return FolderId Folder ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID
                     * @param _folderId Folder ID
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Folder name.
                     * @return FolderName Folder name.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder name.
                     * @param _folderName Folder name.
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

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
                     * 获取Access permission: SHARED, PRIVATE.
                     * @return AccessScope Access permission: SHARED, PRIVATE.
                     * 
                     */
                    std::string GetAccessScope() const;

                    /**
                     * 设置Access permission: SHARED, PRIVATE.
                     * @param _accessScope Access permission: SHARED, PRIVATE.
                     * 
                     */
                    void SetAccessScope(const std::string& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * Folder ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Folder name.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Access permission: SHARED, PRIVATE.
                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLFOLDERREQUEST_H_
