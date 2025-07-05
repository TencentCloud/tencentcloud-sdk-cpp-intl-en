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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Table definition file details, including file content
                */
                class IdlFileInfo : public AbstractModel
                {
                public:
                    IdlFileInfo();
                    ~IdlFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename excluding extension
                     * @return FileName Filename excluding extension
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename excluding extension
                     * @param _fileName Filename excluding extension
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
                     * 获取Data interface description language (IDL) type
                     * @return FileType Data interface description language (IDL) type
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Data interface description language (IDL) type
                     * @param _fileType Data interface description language (IDL) type
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
                     * 获取File extension
                     * @return FileExtType File extension
                     * 
                     */
                    std::string GetFileExtType() const;

                    /**
                     * 设置File extension
                     * @param _fileExtType File extension
                     * 
                     */
                    void SetFileExtType(const std::string& _fileExtType);

                    /**
                     * 判断参数 FileExtType 是否已赋值
                     * @return FileExtType 是否已赋值
                     * 
                     */
                    bool FileExtTypeHasBeenSet() const;

                    /**
                     * 获取File size in bytes
                     * @return FileSize File size in bytes
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size in bytes
                     * @param _fileSize File size in bytes
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取File ID, which is meaningful for files already uploaded
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId File ID, which is meaningful for files already uploaded
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFileId() const;

                    /**
                     * 设置File ID, which is meaningful for files already uploaded
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileId File ID, which is meaningful for files already uploaded
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileId(const int64_t& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取File content, which is meaningful for files to be uploaded in this request
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileContent File content, which is meaningful for files to be uploaded in this request
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置File content, which is meaningful for files to be uploaded in this request
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileContent File content, which is meaningful for files to be uploaded in this request
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * Filename excluding extension
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Data interface description language (IDL) type
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * File extension
                     */
                    std::string m_fileExtType;
                    bool m_fileExtTypeHasBeenSet;

                    /**
                     * File size in bytes
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * File ID, which is meaningful for files already uploaded
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * File content, which is meaningful for files to be uploaded in this request
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFO_H_
