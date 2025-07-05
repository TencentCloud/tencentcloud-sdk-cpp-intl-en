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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CREATEFILEREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CREATEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
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
                     * 获取File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     * @return FileId File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     * @param _fileId File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
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
                     * 获取File type. The 'folder' represents a folder; if not specified, it represents a file.
                     * @return Type File type. The 'folder' represents a folder; if not specified, it represents a file.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置File type. The 'folder' represents a folder; if not specified, it represents a file.
                     * @param _type File type. The 'folder' represents a folder; if not specified, it represents a file.
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
                     * 获取Number of Rows.
                     * @return LineCount Number of Rows.
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置Number of Rows.
                     * @param _lineCount Number of Rows.
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
                     * @return HeadLines First few rows of file.
                     * 
                     */
                    std::vector<std::string> GetHeadLines() const;

                    /**
                     * 设置First few rows of file.
                     * @param _headLines First few rows of file.
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
                     * @return TailLines Last few rows of file.
                     * 
                     */
                    std::vector<std::string> GetTailLines() const;

                    /**
                     * 设置Last few rows of file.
                     * @param _tailLines Last few rows of file.
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
                     * @return HeaderInFile Whether the header is in the file.
                     * 
                     */
                    bool GetHeaderInFile() const;

                    /**
                     * 设置Whether the header is in the file.
                     * @param _headerInFile Whether the header is in the file.
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
                     * 获取Header.
                     * @return HeaderColumns Header.
                     * 
                     */
                    std::vector<std::string> GetHeaderColumns() const;

                    /**
                     * 设置Header.
                     * @param _headerColumns Header.
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
                     * @return FileInfos Files in the folder.
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置Files in the folder.
                     * @param _fileInfos Files in the folder.
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                private:

                    /**
                     * File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * File type. The 'folder' represents a folder; if not specified, it represents a file.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of Rows.
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * First few rows of file.
                     */
                    std::vector<std::string> m_headLines;
                    bool m_headLinesHasBeenSet;

                    /**
                     * Last few rows of file.
                     */
                    std::vector<std::string> m_tailLines;
                    bool m_tailLinesHasBeenSet;

                    /**
                     * Whether the header is in the file.
                     */
                    bool m_headerInFile;
                    bool m_headerInFileHasBeenSet;

                    /**
                     * Header.
                     */
                    std::vector<std::string> m_headerColumns;
                    bool m_headerColumnsHasBeenSet;

                    /**
                     * Files in the folder.
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CREATEFILEREQUEST_H_
