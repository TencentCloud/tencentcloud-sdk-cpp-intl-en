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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFOLDERREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FolderLocator.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateFolder request structure.
                */
                class UpdateFolderRequest : public AbstractModel
                {
                public:
                    UpdateFolderRequest();
                    ~UpdateFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID</p>
                     * @return WorkspaceId <p>Workspace ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID</p>
                     * @param _workspaceId <p>Workspace ID</p>
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
                     * 获取<p>Folder to update</p>
                     * @return Folder <p>Folder to update</p>
                     * 
                     */
                    FolderLocator GetFolder() const;

                    /**
                     * 设置<p>Folder to update</p>
                     * @param _folder <p>Folder to update</p>
                     * 
                     */
                    void SetFolder(const FolderLocator& _folder);

                    /**
                     * 判断参数 Folder 是否已赋值
                     * @return Folder 是否已赋值
                     * 
                     */
                    bool FolderHasBeenSet() const;

                    /**
                     * 获取<p>Operation type</p><p>Enumeration values:</p><ul><li>1: Rename</li><li>2: Move</li></ul>
                     * @return OperationType <p>Operation type</p><p>Enumeration values:</p><ul><li>1: Rename</li><li>2: Move</li></ul>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置<p>Operation type</p><p>Enumeration values:</p><ul><li>1: Rename</li><li>2: Move</li></ul>
                     * @param _operationType <p>Operation type</p><p>Enumeration values:</p><ul><li>1: Rename</li><li>2: Move</li></ul>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取<p>New file name. This parameter is valid only when OperationType = 1.</p>
                     * @return FolderName <p>New file name. This parameter is valid only when OperationType = 1.</p>
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>New file name. This parameter is valid only when OperationType = 1.</p>
                     * @param _folderName <p>New file name. This parameter is valid only when OperationType = 1.</p>
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
                     * 获取<p>Destination folder to move to. This parameter is valid only when OperationType = 2.</p>
                     * @return TargetParent <p>Destination folder to move to. This parameter is valid only when OperationType = 2.</p>
                     * 
                     */
                    FolderLocator GetTargetParent() const;

                    /**
                     * 设置<p>Destination folder to move to. This parameter is valid only when OperationType = 2.</p>
                     * @param _targetParent <p>Destination folder to move to. This parameter is valid only when OperationType = 2.</p>
                     * 
                     */
                    void SetTargetParent(const FolderLocator& _targetParent);

                    /**
                     * 判断参数 TargetParent 是否已赋值
                     * @return TargetParent 是否已赋值
                     * 
                     */
                    bool TargetParentHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Folder to update</p>
                     */
                    FolderLocator m_folder;
                    bool m_folderHasBeenSet;

                    /**
                     * <p>Operation type</p><p>Enumeration values:</p><ul><li>1: Rename</li><li>2: Move</li></ul>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <p>New file name. This parameter is valid only when OperationType = 1.</p>
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>Destination folder to move to. This parameter is valid only when OperationType = 2.</p>
                     */
                    FolderLocator m_targetParent;
                    bool m_targetParentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFOLDERREQUEST_H_
