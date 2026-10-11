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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileConfig.h>
#include <tencentcloud/databuddy/v20260715/model/FileStorage.h>
#include <tencentcloud/databuddy/v20260715/model/AsyncOperation.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * File detail
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Root account AppId</p>
                     * @return AppId <p>Root account AppId</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Root account AppId</p>
                     * @param _appId <p>Root account AppId</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取<p>File ID</p>
                     * @return FileId <p>File ID</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File ID</p>
                     * @param _fileId <p>File ID</p>
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
                     * 获取<p>File name, including suffix</p>
                     * @return FileName <p>File name, including suffix</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name, including suffix</p>
                     * @param _fileName <p>File name, including suffix</p>
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
                     * 获取<p>Full path of the file in the workspace, starting with /, for example /etl/daily/demo.ipynb</p>
                     * @return Path <p>Full path of the file in the workspace, starting with /, for example /etl/daily/demo.ipynb</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Full path of the file in the workspace, starting with /, for example /etl/daily/demo.ipynb</p>
                     * @param _path <p>Full path of the file in the workspace, starting with /, for example /etl/daily/demo.ipynb</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>File operation configuration.</p>
                     * @return FileConfig <p>File operation configuration.</p>
                     * 
                     */
                    FileConfig GetFileConfig() const;

                    /**
                     * 设置<p>File operation configuration.</p>
                     * @param _fileConfig <p>File operation configuration.</p>
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
                     * 获取<p>Bound BundleId</p>
                     * @return BundleId <p>Bound BundleId</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>Bound BundleId</p>
                     * @param _bundleId <p>Bound BundleId</p>
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
                     * 获取<p>File status. active=normal, deleted=deleted</p>
                     * @return Status <p>File status. active=normal, deleted=deleted</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>File status. active=normal, deleted=deleted</p>
                     * @param _status <p>File status. active=normal, deleted=deleted</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>File owner userName</p>
                     * @return OwnerUserName <p>File owner userName</p>
                     * 
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置<p>File owner userName</p>
                     * @param _ownerUserName <p>File owner userName</p>
                     * 
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     * 
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取<p>Creator sub-account Uin.</p>
                     * @return CreateUserUin <p>Creator sub-account Uin.</p>
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>Creator sub-account Uin.</p>
                     * @param _createUserUin <p>Creator sub-account Uin.</p>
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
                     * 获取<p>Last updated by sub-account Uin</p>
                     * @return UpdateUserUin <p>Last updated by sub-account Uin</p>
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置<p>Last updated by sub-account Uin</p>
                     * @param _updateUserUin <p>Last updated by sub-account Uin</p>
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>Creation time, millisecond-level timestamp</p>
                     * @return CreateTime <p>Creation time, millisecond-level timestamp</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time, millisecond-level timestamp</p>
                     * @param _createTime <p>Creation time, millisecond-level timestamp</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Latest update time, millisecond-level timestamp</p>
                     * @return UpdateTime <p>Latest update time, millisecond-level timestamp</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Latest update time, millisecond-level timestamp</p>
                     * @param _updateTime <p>Latest update time, millisecond-level timestamp</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>File storage information. Content is returned only when the request IncludeContent=true</p>
                     * @return Storage <p>File storage information. Content is returned only when the request IncludeContent=true</p>
                     * 
                     */
                    FileStorage GetStorage() const;

                    /**
                     * 设置<p>File storage information. Content is returned only when the request IncludeContent=true</p>
                     * @param _storage <p>File storage information. Content is returned only when the request IncludeContent=true</p>
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
                     * 获取<p>Permission point list of the current caller for the file</p>
                     * @return Permissions <p>Permission point list of the current caller for the file</p>
                     * 
                     */
                    std::string GetPermissions() const;

                    /**
                     * 设置<p>Permission point list of the current caller for the file</p>
                     * @param _permissions <p>Permission point list of the current caller for the file</p>
                     * 
                     */
                    void SetPermissions(const std::string& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is released</p>
                     * @return ReleaseStatus <p>Whether it is released</p>
                     * 
                     */
                    bool GetReleaseStatus() const;

                    /**
                     * 设置<p>Whether it is released</p>
                     * @param _releaseStatus <p>Whether it is released</p>
                     * 
                     */
                    void SetReleaseStatus(const bool& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取<p>Resource mode. 1=distributed, 2=single-node</p>
                     * @return ResourceMode <p>Resource mode. 1=distributed, 2=single-node</p>
                     * 
                     */
                    int64_t GetResourceMode() const;

                    /**
                     * 设置<p>Resource mode. 1=distributed, 2=single-node</p>
                     * @param _resourceMode <p>Resource mode. 1=distributed, 2=single-node</p>
                     * 
                     */
                    void SetResourceMode(const int64_t& _resourceMode);

                    /**
                     * 判断参数 ResourceMode 是否已赋值
                     * @return ResourceMode 是否已赋值
                     * 
                     */
                    bool ResourceModeHasBeenSet() const;

                    /**
                     * 获取<p>Pass through Workspace job information during async file preview job creation; leave this field unset for ordinary sync creation or other APIs that reuse this return structure</p>
                     * @return AsyncOperation <p>Pass through Workspace job information during async file preview job creation; leave this field unset for ordinary sync creation or other APIs that reuse this return structure</p>
                     * 
                     */
                    AsyncOperation GetAsyncOperation() const;

                    /**
                     * 设置<p>Pass through Workspace job information during async file preview job creation; leave this field unset for ordinary sync creation or other APIs that reuse this return structure</p>
                     * @param _asyncOperation <p>Pass through Workspace job information during async file preview job creation; leave this field unset for ordinary sync creation or other APIs that reuse this return structure</p>
                     * 
                     */
                    void SetAsyncOperation(const AsyncOperation& _asyncOperation);

                    /**
                     * 判断参数 AsyncOperation 是否已赋值
                     * @return AsyncOperation 是否已赋值
                     * 
                     */
                    bool AsyncOperationHasBeenSet() const;

                    /**
                     * 获取<p>Script version ID.</p>
                     * @return VersionId <p>Script version ID.</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Script version ID.</p>
                     * @param _versionId <p>Script version ID.</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>Root account AppId</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>File ID</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>File name, including suffix</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File type. Parameter Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Full path of the file in the workspace, starting with /, for example /etl/daily/demo.ipynb</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>File operation configuration.</p>
                     */
                    FileConfig m_fileConfig;
                    bool m_fileConfigHasBeenSet;

                    /**
                     * <p>Bound BundleId</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bound BundleInfo, JSON string</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>File status. active=normal, deleted=deleted</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>File owner userName</p>
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * <p>Creator sub-account Uin.</p>
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>Last updated by sub-account Uin</p>
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * <p>Creation time, millisecond-level timestamp</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Latest update time, millisecond-level timestamp</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>File storage information. Content is returned only when the request IncludeContent=true</p>
                     */
                    FileStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Permission point list of the current caller for the file</p>
                     */
                    std::string m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * <p>Whether it is released</p>
                     */
                    bool m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * <p>Resource mode. 1=distributed, 2=single-node</p>
                     */
                    int64_t m_resourceMode;
                    bool m_resourceModeHasBeenSet;

                    /**
                     * <p>Pass through Workspace job information during async file preview job creation; leave this field unset for ordinary sync creation or other APIs that reuse this return structure</p>
                     */
                    AsyncOperation m_asyncOperation;
                    bool m_asyncOperationHasBeenSet;

                    /**
                     * <p>Script version ID.</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEINFO_H_
