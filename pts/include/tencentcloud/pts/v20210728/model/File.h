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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_FILE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_FILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/Scenario.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * File.
                */
                class File : public AbstractModel
                {
                public:
                    File();
                    ~File() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File ID.
                     * @return FileId File ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID.
                     * @param _fileId File ID.
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
                     * 获取File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * @return Kind File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * @param _kind File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Filename.
                     * @return Name Filename.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filename.
                     * @param _name Filename.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取File size.
                     * @return Size File size.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size.
                     * @param _size File size.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取File type. The 'folder' represents a folder; if not specified, it represents a normal file.
                     * @return Type File type. The 'folder' represents a folder; if not specified, it represents a normal file.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置File type. The 'folder' represents a folder; if not specified, it represents a normal file.
                     * @param _type File type. The 'folder' represents a folder; if not specified, it represents a normal file.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedAt Update time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
                     * @param _updatedAt Update time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * @return LineCount Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * @param _lineCount Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取First few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * @return HeadLines First few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetHeadLines() const;

                    /**
                     * 设置First few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * @param _headLines First few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHeadLines(const std::vector<std::string>& _headLines);

                    /**
                     * 判断参数 HeadLines 是否已赋值
                     * @return HeadLines 是否已赋值
                     * 
                     */
                    bool HeadLinesHasBeenSet() const;

                    /**
                     * 获取Last few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * @return TailLines Last few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetTailLines() const;

                    /**
                     * 设置Last few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * @param _tailLines Last few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTailLines(const std::vector<std::string>& _tailLines);

                    /**
                     * 判断参数 TailLines 是否已赋值
                     * @return TailLines 是否已赋值
                     * 
                     */
                    bool TailLinesHasBeenSet() const;

                    /**
                     * 获取Whether the header is in the file.

Note: This field may return null, indicating that no valid value is found.
                     * @return HeaderInFile Whether the header is in the file.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetHeaderInFile() const;

                    /**
                     * 设置Whether the header is in the file.

Note: This field may return null, indicating that no valid value is found.
                     * @param _headerInFile Whether the header is in the file.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHeaderInFile(const bool& _headerInFile);

                    /**
                     * 判断参数 HeaderInFile 是否已赋值
                     * @return HeaderInFile 是否已赋值
                     * 
                     */
                    bool HeaderInFileHasBeenSet() const;

                    /**
                     * 获取Parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * @return HeaderColumns Parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetHeaderColumns() const;

                    /**
                     * 设置Parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _headerColumns Parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHeaderColumns(const std::vector<std::string>& _headerColumns);

                    /**
                     * 判断参数 HeaderColumns 是否已赋值
                     * @return HeaderColumns 是否已赋值
                     * 
                     */
                    bool HeaderColumnsHasBeenSet() const;

                    /**
                     * 获取Files in the folder.

Note: This field may return null, indicating that no valid value is found.
                     * @return FileInfos Files in the folder.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置Files in the folder.

Note: This field may return null, indicating that no valid value is found.
                     * @param _fileInfos Files in the folder.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取Associated scenario.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScenarioSet Associated scenario.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Scenario> GetScenarioSet() const;

                    /**
                     * 设置Associated scenario.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scenarioSet Associated scenario.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetScenarioSet(const std::vector<Scenario>& _scenarioSet);

                    /**
                     * 判断参数 ScenarioSet 是否已赋值
                     * @return ScenarioSet 是否已赋值
                     * 
                     */
                    bool ScenarioSetHasBeenSet() const;

                    /**
                     * 获取File status.

Note: This field may return null, indicating that no valid value is found.
                     * @return Status File status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置File status.

Note: This field may return null, indicating that no valid value is found.
                     * @param _status File status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Create time.

Note: This field may return null, indicating that no valid value is found.
                     * @return CreatedAt Create time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Create time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _createdAt Create time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @return AppID Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _appID Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return Uin Uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _uin Uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return SubAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _subAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取App ID of user account.

Note: This field may return null, indicating that no valid value is found.
                     * @return AppId App ID of user account.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID of user account.

Note: This field may return null, indicating that no valid value is found.
                     * @param _appId App ID of user account.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * File ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Filename.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * File size.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * File type. The 'folder' represents a folder; if not specified, it represents a normal file.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * First few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_headLines;
                    bool m_headLinesHasBeenSet;

                    /**
                     * Last few rows of file.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_tailLines;
                    bool m_tailLinesHasBeenSet;

                    /**
                     * Whether the header is in the file.

Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_headerInFile;
                    bool m_headerInFileHasBeenSet;

                    /**
                     * Parameter name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_headerColumns;
                    bool m_headerColumnsHasBeenSet;

                    /**
                     * Files in the folder.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Associated scenario.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Scenario> m_scenarioSet;
                    bool m_scenarioSetHasBeenSet;

                    /**
                     * File status.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Create time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * App ID of user account.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_FILE_H_
