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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFILEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileConfig.h>
#include <tencentcloud/databuddy/v20260715/model/FileStorage.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateFile request structure.
                */
                class UpdateFileRequest : public AbstractModel
                {
                public:
                    UpdateFileRequest();
                    ~UpdateFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API</p>
                     * @return WorkspaceId <p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API</p>
                     * @param _workspaceId <p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API</p>
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
                     * 获取<p>File ID. Source: FileId returned by the CreateFile / ListFiles / GetFile APIs</p>
                     * @return FileId <p>File ID. Source: FileId returned by the CreateFile / ListFiles / GetFile APIs</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File ID. Source: FileId returned by the CreateFile / ListFiles / GetFile APIs</p>
                     * @param _fileId <p>File ID. Source: FileId returned by the CreateFile / ListFiles / GetFile APIs</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>File operation configuration. If not passed, the configuration will not be updated.</p>
                     * @return FileConfig <p>File operation configuration. If not passed, the configuration will not be updated.</p>
                     * 
                     */
                    FileConfig GetFileConfig() const;

                    /**
                     * 设置<p>File operation configuration. If not passed, the configuration will not be updated.</p>
                     * @param _fileConfig <p>File operation configuration. If not passed, the configuration will not be updated.</p>
                     * 
                     */
                    void SetFileConfig(const FileConfig& _fileConfig);

                    /**
                     * 判断参数 FileConfig 是否已赋值
                     * @return FileConfig 是否已赋值
                     * 
                     */
                    bool FileConfigHasBeenSet() const;

                    /**
                     * 获取<p>File type. Parameter Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     * @return FileType <p>File type. Parameter Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type. Parameter Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     * @param _fileType <p>File type. Parameter Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>Bound BundleId. Source: BundleId returned by the ListBundles API</p>
                     * @return BundleId <p>Bound BundleId. Source: BundleId returned by the ListBundles API</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>Bound BundleId. Source: BundleId returned by the ListBundles API</p>
                     * @param _bundleId <p>Bound BundleId. Source: BundleId returned by the ListBundles API</p>
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取<p>Bound BundleInfo, JSON string</p>
                     * @return BundleInfo <p>Bound BundleInfo, JSON string</p>
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>Bound BundleInfo, JSON string</p>
                     * @param _bundleInfo <p>Bound BundleInfo, JSON string</p>
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取<p>File content. If not passed, the content will not be updated.</p>
                     * @return Storage <p>File content. If not passed, the content will not be updated.</p>
                     * 
                     */
                    FileStorage GetStorage() const;

                    /**
                     * 设置<p>File content. If not passed, the content will not be updated.</p>
                     * @param _storage <p>File content. If not passed, the content will not be updated.</p>
                     * 
                     */
                    void SetStorage(const FileStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>Target file name. When it is not empty and different from the current file name, perform the rename action. Length not exceeding SCRIPT_NAME_MAX_LENGTH. It must not begin or end with . or .., and spaces, double dots, control characters, and Linux reserved names are forbidden (see docs/linux_filename_rules.md). Validate the suffix legitimacy together with ExtensionType.</p>
                     * @return FileName <p>Target file name. When it is not empty and different from the current file name, perform the rename action. Length not exceeding SCRIPT_NAME_MAX_LENGTH. It must not begin or end with . or .., and spaces, double dots, control characters, and Linux reserved names are forbidden (see docs/linux_filename_rules.md). Validate the suffix legitimacy together with ExtensionType.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>Target file name. When it is not empty and different from the current file name, perform the rename action. Length not exceeding SCRIPT_NAME_MAX_LENGTH. It must not begin or end with . or .., and spaces, double dots, control characters, and Linux reserved names are forbidden (see docs/linux_filename_rules.md). Validate the suffix legitimacy together with ExtensionType.</p>
                     * @param _fileName <p>Target file name. When it is not empty and different from the current file name, perform the rename action. Length not exceeding SCRIPT_NAME_MAX_LENGTH. It must not begin or end with . or .., and spaces, double dots, control characters, and Linux reserved names are forbidden (see docs/linux_filename_rules.md). Validate the suffix legitimacy together with ExtensionType.</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>Target parent directory path. If not empty, execute the move action. For the root directory, pass /; it can simultaneously appear with FileName, with the semantics of "move + rename". It should be consistent with ParentFolderPath of CreateFile.</p>
                     * @return ParentFolderPath <p>Target parent directory path. If not empty, execute the move action. For the root directory, pass /; it can simultaneously appear with FileName, with the semantics of "move + rename". It should be consistent with ParentFolderPath of CreateFile.</p>
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置<p>Target parent directory path. If not empty, execute the move action. For the root directory, pass /; it can simultaneously appear with FileName, with the semantics of "move + rename". It should be consistent with ParentFolderPath of CreateFile.</p>
                     * @param _parentFolderPath <p>Target parent directory path. If not empty, execute the move action. For the root directory, pass /; it can simultaneously appear with FileName, with the semantics of "move + rename". It should be consistent with ParentFolderPath of CreateFile.</p>
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
                     * 获取<p>FileType of the target parent directory. Value: FOLDER, GIT_FOLDER. Used only when ParentFolderPath is not empty; by default, it is handled based on the actual type of the parsed parent directory</p>
                     * @return TargetFileType <p>FileType of the target parent directory. Value: FOLDER, GIT_FOLDER. Used only when ParentFolderPath is not empty; by default, it is handled based on the actual type of the parsed parent directory</p>
                     * 
                     */
                    std::string GetTargetFileType() const;

                    /**
                     * 设置<p>FileType of the target parent directory. Value: FOLDER, GIT_FOLDER. Used only when ParentFolderPath is not empty; by default, it is handled based on the actual type of the parsed parent directory</p>
                     * @param _targetFileType <p>FileType of the target parent directory. Value: FOLDER, GIT_FOLDER. Used only when ParentFolderPath is not empty; by default, it is handled based on the actual type of the parsed parent directory</p>
                     * 
                     */
                    void SetTargetFileType(const std::string& _targetFileType);

                    /**
                     * 判断参数 TargetFileType 是否已赋值
                     * @return TargetFileType 是否已赋值
                     * 
                     */
                    bool TargetFileTypeHasBeenSet() const;

                    /**
                     * 获取<p>Action type (optional, default value: 1, mandatory verification in future versions). Value: 1 = UPDATE_CONTENT (only refresh FileConfig / Storage / Bundle*, forbid passing FileName / ParentFolderPath / TargetFileType); 2 = RENAME (rename only, must pass FileName, forbid passing ParentFolderPath / FileConfig / Storage / Bundle*); 3 = MOVE (move only, must pass ParentFolderPath, forbid passing FileName / FileConfig / Storage / Bundle*). A ParamIllegal error will be returned if parameter mutual exclusion verification fails</p>
                     * @return UpdateAction <p>Action type (optional, default value: 1, mandatory verification in future versions). Value: 1 = UPDATE_CONTENT (only refresh FileConfig / Storage / Bundle*, forbid passing FileName / ParentFolderPath / TargetFileType); 2 = RENAME (rename only, must pass FileName, forbid passing ParentFolderPath / FileConfig / Storage / Bundle*); 3 = MOVE (move only, must pass ParentFolderPath, forbid passing FileName / FileConfig / Storage / Bundle*). A ParamIllegal error will be returned if parameter mutual exclusion verification fails</p>
                     * 
                     */
                    int64_t GetUpdateAction() const;

                    /**
                     * 设置<p>Action type (optional, default value: 1, mandatory verification in future versions). Value: 1 = UPDATE_CONTENT (only refresh FileConfig / Storage / Bundle*, forbid passing FileName / ParentFolderPath / TargetFileType); 2 = RENAME (rename only, must pass FileName, forbid passing ParentFolderPath / FileConfig / Storage / Bundle*); 3 = MOVE (move only, must pass ParentFolderPath, forbid passing FileName / FileConfig / Storage / Bundle*). A ParamIllegal error will be returned if parameter mutual exclusion verification fails</p>
                     * @param _updateAction <p>Action type (optional, default value: 1, mandatory verification in future versions). Value: 1 = UPDATE_CONTENT (only refresh FileConfig / Storage / Bundle*, forbid passing FileName / ParentFolderPath / TargetFileType); 2 = RENAME (rename only, must pass FileName, forbid passing ParentFolderPath / FileConfig / Storage / Bundle*); 3 = MOVE (move only, must pass ParentFolderPath, forbid passing FileName / FileConfig / Storage / Bundle*). A ParamIllegal error will be returned if parameter mutual exclusion verification fails</p>
                     * 
                     */
                    void SetUpdateAction(const int64_t& _updateAction);

                    /**
                     * 判断参数 UpdateAction 是否已赋值
                     * @return UpdateAction 是否已赋值
                     * 
                     */
                    bool UpdateActionHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>File ID. Source: FileId returned by the CreateFile / ListFiles / GetFile APIs</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>File operation configuration. If not passed, the configuration will not be updated.</p>
                     */
                    FileConfig m_fileConfig;
                    bool m_fileConfigHasBeenSet;

                    /**
                     * <p>File type. Parameter Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Bound BundleId. Source: BundleId returned by the ListBundles API</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bound BundleInfo, JSON string</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>File content. If not passed, the content will not be updated.</p>
                     */
                    FileStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Target file name. When it is not empty and different from the current file name, perform the rename action. Length not exceeding SCRIPT_NAME_MAX_LENGTH. It must not begin or end with . or .., and spaces, double dots, control characters, and Linux reserved names are forbidden (see docs/linux_filename_rules.md). Validate the suffix legitimacy together with ExtensionType.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Target parent directory path. If not empty, execute the move action. For the root directory, pass /; it can simultaneously appear with FileName, with the semantics of "move + rename". It should be consistent with ParentFolderPath of CreateFile.</p>
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * <p>FileType of the target parent directory. Value: FOLDER, GIT_FOLDER. Used only when ParentFolderPath is not empty; by default, it is handled based on the actual type of the parsed parent directory</p>
                     */
                    std::string m_targetFileType;
                    bool m_targetFileTypeHasBeenSet;

                    /**
                     * <p>Action type (optional, default value: 1, mandatory verification in future versions). Value: 1 = UPDATE_CONTENT (only refresh FileConfig / Storage / Bundle*, forbid passing FileName / ParentFolderPath / TargetFileType); 2 = RENAME (rename only, must pass FileName, forbid passing ParentFolderPath / FileConfig / Storage / Bundle*); 3 = MOVE (move only, must pass ParentFolderPath, forbid passing FileName / FileConfig / Storage / Bundle*). A ParamIllegal error will be returned if parameter mutual exclusion verification fails</p>
                     */
                    int64_t m_updateAction;
                    bool m_updateActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFILEREQUEST_H_
