/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFOWITHOUTCONTENT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFOWITHOUTCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Table definition file details, excluding file content
                */
                class IdlFileInfoWithoutContent : public AbstractModel
                {
                public:
                    IdlFileInfoWithoutContent();
                    ~IdlFileInfoWithoutContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename excluding extension
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileName Filename excluding extension
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename excluding extension
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileName Filename excluding extension
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileType Data interface description language (IDL) type
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Data interface description language (IDL) type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileType Data interface description language (IDL) type
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileExtType File extension
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileExtType() const;

                    /**
                     * 设置File extension
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileExtType File extension
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileSize File size in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileSize File size in bytes
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取File ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId File ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFileId() const;

                    /**
                     * 设置File ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileId File ID
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
                     * 获取Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * Filename excluding extension
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Data interface description language (IDL) type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * File extension
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileExtType;
                    bool m_fileExtTypeHasBeenSet;

                    /**
                     * File size in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * File ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFOWITHOUTCONTENT_H_
