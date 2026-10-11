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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFILEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetFile request structure.
                */
                class GetFileRequest : public AbstractModel
                {
                public:
                    GetFileRequest();
                    ~GetFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API.</p>
                     * @return WorkspaceId <p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API.</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API.</p>
                     * @param _workspaceId <p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API.</p>
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
                     * 获取<p>File ID. Source: FileId returned by the CreateFile / ListFiles API. Choose either this or FilePath</p>
                     * @return FileId <p>File ID. Source: FileId returned by the CreateFile / ListFiles API. Choose either this or FilePath</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File ID. Source: FileId returned by the CreateFile / ListFiles API. Choose either this or FilePath</p>
                     * @param _fileId <p>File ID. Source: FileId returned by the CreateFile / ListFiles API. Choose either this or FilePath</p>
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
                     * 获取<p>File type. Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     * @return FileType <p>File type. Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type. Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     * @param _fileType <p>File type. Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
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
                     * 获取<p>Whether to return file content. If true, Storage.Content returns base64 content. false by default</p>
                     * @return IncludeContent <p>Whether to return file content. If true, Storage.Content returns base64 content. false by default</p>
                     * 
                     */
                    bool GetIncludeContent() const;

                    /**
                     * 设置<p>Whether to return file content. If true, Storage.Content returns base64 content. false by default</p>
                     * @param _includeContent <p>Whether to return file content. If true, Storage.Content returns base64 content. false by default</p>
                     * 
                     */
                    void SetIncludeContent(const bool& _includeContent);

                    /**
                     * 判断参数 IncludeContent 是否已赋值
                     * @return IncludeContent 是否已赋值
                     * 
                     */
                    bool IncludeContentHasBeenSet() const;

                    /**
                     * 获取<p>File version ID. Source: VersionId returned by the ListFileVersions API. If not specified, the latest version is read.</p>
                     * @return VersionId <p>File version ID. Source: VersionId returned by the ListFileVersions API. If not specified, the latest version is read.</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>File version ID. Source: VersionId returned by the ListFileVersions API. If not specified, the latest version is read.</p>
                     * @param _versionId <p>File version ID. Source: VersionId returned by the ListFileVersions API. If not specified, the latest version is read.</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Full path of the file, beginning with /, for example /etl/daily/demo.ipynb. Either this or FileId</p>
                     * @return FilePath <p>Full path of the file, beginning with /, for example /etl/daily/demo.ipynb. Either this or FileId</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>Full path of the file, beginning with /, for example /etl/daily/demo.ipynb. Either this or FileId</p>
                     * @param _filePath <p>Full path of the file, beginning with /, for example /etl/daily/demo.ipynb. Either this or FileId</p>
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID. Source: WorkspaceId returned by the ListWorkspaces API.</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>File ID. Source: FileId returned by the CreateFile / ListFiles API. Choose either this or FilePath</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>File type. Value: FILE (regular file/script), NOTEBOOK_FILE (Notebook), SQL_FILE (SQL file). Corresponds to common/domain/entity.proto EntityType</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Whether to return file content. If true, Storage.Content returns base64 content. false by default</p>
                     */
                    bool m_includeContent;
                    bool m_includeContentHasBeenSet;

                    /**
                     * <p>File version ID. Source: VersionId returned by the ListFileVersions API. If not specified, the latest version is read.</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>Full path of the file, beginning with /, for example /etl/daily/demo.ipynb. Either this or FileId</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFILEREQUEST_H_
