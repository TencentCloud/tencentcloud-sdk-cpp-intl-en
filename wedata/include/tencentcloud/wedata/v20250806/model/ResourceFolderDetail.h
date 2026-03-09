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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERDETAIL_H_

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
                * Resource folder details.
                */
                class ResourceFolderDetail : public AbstractModel
                {
                public:
                    ResourceFolderDetail();
                    ~ResourceFolderDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource folder ID.
                     * @return FolderId Resource folder ID.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Resource folder ID.
                     * @param _folderId Resource folder ID.
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
                     * 获取Creator ID.
                     * @return CreateUserUin Creator ID.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID.
                     * @param _createUserUin Creator ID.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Creator'S name.
                     * @return CreateUserName Creator'S name.
                     * 
                     */
                    std::string GetCreateUserName() const;

                    /**
                     * 设置Creator'S name.
                     * @param _createUserName Creator'S name.
                     * 
                     */
                    void SetCreateUserName(const std::string& _createUserName);

                    /**
                     * 判断参数 CreateUserName 是否已赋值
                     * @return CreateUserName 是否已赋值
                     * 
                     */
                    bool CreateUserNameHasBeenSet() const;

                    /**
                     * 获取Folder path.
                     * @return FolderPath Folder path.
                     * 
                     */
                    std::string GetFolderPath() const;

                    /**
                     * 设置Folder path.
                     * @param _folderPath Folder path.
                     * 
                     */
                    void SetFolderPath(const std::string& _folderPath);

                    /**
                     * 判断参数 FolderPath 是否已赋值
                     * @return FolderPath 是否已赋值
                     * 
                     */
                    bool FolderPathHasBeenSet() const;

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
                     * 获取Absolute path of the parent folder, excluding the folder name.
                     * @return ParentFolderPath Absolute path of the parent folder, excluding the folder name.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Absolute path of the parent folder, excluding the folder name.
                     * @param _parentFolderPath Absolute path of the parent folder, excluding the folder name.
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

                private:

                    /**
                     * Resource folder ID.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Creator ID.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Creator'S name.
                     */
                    std::string m_createUserName;
                    bool m_createUserNameHasBeenSet;

                    /**
                     * Folder path.
                     */
                    std::string m_folderPath;
                    bool m_folderPathHasBeenSet;

                    /**
                     * Folder name.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Absolute path of the parent folder, excluding the folder name.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERDETAIL_H_
