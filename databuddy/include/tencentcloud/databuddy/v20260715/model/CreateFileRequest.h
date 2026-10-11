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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFILEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFILEREQUEST_H_

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
                * CreateFile request structure.
                */
                class CreateFileRequest : public AbstractModel
                {
                public:
                    CreateFileRequest();
                    ~CreateFileRequest() = default;
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
                     * 获取<p>File name with suffix, up to 255 bytes. It cannot begin or end with . or .., and cannot contain spaces or control characters.</p>
                     * @return FileName <p>File name with suffix, up to 255 bytes. It cannot begin or end with . or .., and cannot contain spaces or control characters.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name with suffix, up to 255 bytes. It cannot begin or end with . or .., and cannot contain spaces or control characters.</p>
                     * @param _fileName <p>File name with suffix, up to 255 bytes. It cannot begin or end with . or .., and cannot contain spaces or control characters.</p>
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
                     * 获取<p>Parent folder path, starting with / and not ending with /. Pass / for the root directory. Source: Path returned by the ListFiles API</p>
                     * @return ParentFolderPath <p>Parent folder path, starting with / and not ending with /. Pass / for the root directory. Source: Path returned by the ListFiles API</p>
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置<p>Parent folder path, starting with / and not ending with /. Pass / for the root directory. Source: Path returned by the ListFiles API</p>
                     * @param _parentFolderPath <p>Parent folder path, starting with / and not ending with /. Pass / for the root directory. Source: Path returned by the ListFiles API</p>
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
                     * 获取<p>Initial file content. If not passed, default content will be generated based on FileType.</p>
                     * @return Storage <p>Initial file content. If not passed, default content will be generated based on FileType.</p>
                     * 
                     */
                    FileStorage GetStorage() const;

                    /**
                     * 设置<p>Initial file content. If not passed, default content will be generated based on FileType.</p>
                     * @param _storage <p>Initial file content. If not passed, default content will be generated based on FileType.</p>
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
                     * 获取Whether to asynchronously decompress and create ZIP files in Storage. false by default. When true, the async job is fully managed by Workspace throughout its lifecycle, and the response only returns job information through AsyncOperation (FileId is empty). Job progress querying is implemented by the basic platform WS interface and is not defined in this agreement.
                     * @return ExtractArchive Whether to asynchronously decompress and create ZIP files in Storage. false by default. When true, the async job is fully managed by Workspace throughout its lifecycle, and the response only returns job information through AsyncOperation (FileId is empty). Job progress querying is implemented by the basic platform WS interface and is not defined in this agreement.
                     * 
                     */
                    bool GetExtractArchive() const;

                    /**
                     * 设置Whether to asynchronously decompress and create ZIP files in Storage. false by default. When true, the async job is fully managed by Workspace throughout its lifecycle, and the response only returns job information through AsyncOperation (FileId is empty). Job progress querying is implemented by the basic platform WS interface and is not defined in this agreement.
                     * @param _extractArchive Whether to asynchronously decompress and create ZIP files in Storage. false by default. When true, the async job is fully managed by Workspace throughout its lifecycle, and the response only returns job information through AsyncOperation (FileId is empty). Job progress querying is implemented by the basic platform WS interface and is not defined in this agreement.
                     * 
                     */
                    void SetExtractArchive(const bool& _extractArchive);

                    /**
                     * 判断参数 ExtractArchive 是否已赋值
                     * @return ExtractArchive 是否已赋值
                     * 
                     */
                    bool ExtractArchiveHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>File name with suffix, up to 255 bytes. It cannot begin or end with . or .., and cannot contain spaces or control characters.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Parent folder path, starting with / and not ending with /. Pass / for the root directory. Source: Path returned by the ListFiles API</p>
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * <p>File type. Parameter Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>File operation configuration.</p>
                     */
                    FileConfig m_fileConfig;
                    bool m_fileConfigHasBeenSet;

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
                     * <p>Initial file content. If not passed, default content will be generated based on FileType.</p>
                     */
                    FileStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Whether to asynchronously decompress and create ZIP files in Storage. false by default. When true, the async job is fully managed by Workspace throughout its lifecycle, and the response only returns job information through AsyncOperation (FileId is empty). Job progress querying is implemented by the basic platform WS interface and is not defined in this agreement.
                     */
                    bool m_extractArchive;
                    bool m_extractArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFILEREQUEST_H_
