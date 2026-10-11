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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFOLDERREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FolderLocator.h>
#include <tencentcloud/databuddy/v20260715/model/GitRepoConfig.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateFolder request structure.
                */
                class CreateFolderRequest : public AbstractModel
                {
                public:
                    CreateFolderRequest();
                    ~CreateFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace name</p>
                     * @return WorkspaceId <p>Workspace name</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace name</p>
                     * @param _workspaceId <p>Workspace name</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Folder name.</p>
                     * @return FolderName <p>Folder name.</p>
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>Folder name.</p>
                     * @param _folderName <p>Folder name.</p>
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
                     * 获取<p>FOLDER type</p><p>Enumeration values:</p><ul><li>FOLDER: FOLDER</li><li>GIT_FOLDER: GIT FOLDER</li></ul>
                     * @return FolderType <p>FOLDER type</p><p>Enumeration values:</p><ul><li>FOLDER: FOLDER</li><li>GIT_FOLDER: GIT FOLDER</li></ul>
                     * 
                     */
                    std::string GetFolderType() const;

                    /**
                     * 设置<p>FOLDER type</p><p>Enumeration values:</p><ul><li>FOLDER: FOLDER</li><li>GIT_FOLDER: GIT FOLDER</li></ul>
                     * @param _folderType <p>FOLDER type</p><p>Enumeration values:</p><ul><li>FOLDER: FOLDER</li><li>GIT_FOLDER: GIT FOLDER</li></ul>
                     * 
                     */
                    void SetFolderType(const std::string& _folderType);

                    /**
                     * 判断参数 FolderType 是否已赋值
                     * @return FolderType 是否已赋值
                     * 
                     */
                    bool FolderTypeHasBeenSet() const;

                    /**
                     * 获取<p>Parent node</p>
                     * @return ParentFolder <p>Parent node</p>
                     * 
                     */
                    FolderLocator GetParentFolder() const;

                    /**
                     * 设置<p>Parent node</p>
                     * @param _parentFolder <p>Parent node</p>
                     * 
                     */
                    void SetParentFolder(const FolderLocator& _parentFolder);

                    /**
                     * 判断参数 ParentFolder 是否已赋值
                     * @return ParentFolder 是否已赋值
                     * 
                     */
                    bool ParentFolderHasBeenSet() const;

                    /**
                     * 获取<p>git configuration. Required when FolderType is git_FOLDER.</p>
                     * @return GitConfig <p>git configuration. Required when FolderType is git_FOLDER.</p>
                     * 
                     */
                    GitRepoConfig GetGitConfig() const;

                    /**
                     * 设置<p>git configuration. Required when FolderType is git_FOLDER.</p>
                     * @param _gitConfig <p>git configuration. Required when FolderType is git_FOLDER.</p>
                     * 
                     */
                    void SetGitConfig(const GitRepoConfig& _gitConfig);

                    /**
                     * 判断参数 GitConfig 是否已赋值
                     * @return GitConfig 是否已赋值
                     * 
                     */
                    bool GitConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace name</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Folder name.</p>
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>FOLDER type</p><p>Enumeration values:</p><ul><li>FOLDER: FOLDER</li><li>GIT_FOLDER: GIT FOLDER</li></ul>
                     */
                    std::string m_folderType;
                    bool m_folderTypeHasBeenSet;

                    /**
                     * <p>Parent node</p>
                     */
                    FolderLocator m_parentFolder;
                    bool m_parentFolderHasBeenSet;

                    /**
                     * <p>git configuration. Required when FolderType is git_FOLDER.</p>
                     */
                    GitRepoConfig m_gitConfig;
                    bool m_gitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFOLDERREQUEST_H_
