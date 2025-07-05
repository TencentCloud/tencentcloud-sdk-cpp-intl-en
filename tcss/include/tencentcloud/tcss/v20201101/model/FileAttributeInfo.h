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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_FILEATTRIBUTEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_FILEATTRIBUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Container runtime security - File attribute information
                */
                class FileAttributeInfo : public AbstractModel
                {
                public:
                    FileAttributeInfo();
                    ~FileAttributeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename
                     * @return FileName Filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
                     * @param _fileName Filename
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
                     * 获取File type
                     * @return FileType File type
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type
                     * @param _fileType File type
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
                     * 获取File size in bytes
                     * @return FileSize File size in bytes
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置File size in bytes
                     * @param _fileSize File size in bytes
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取File path
                     * @return FilePath File path
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path
                     * @param _filePath File path
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取File creation time
                     * @return FileCreateTime File creation time
                     * 
                     */
                    std::string GetFileCreateTime() const;

                    /**
                     * 设置File creation time
                     * @param _fileCreateTime File creation time
                     * 
                     */
                    void SetFileCreateTime(const std::string& _fileCreateTime);

                    /**
                     * 判断参数 FileCreateTime 是否已赋值
                     * @return FileCreateTime 是否已赋值
                     * 
                     */
                    bool FileCreateTimeHasBeenSet() const;

                    /**
                     * 获取Time when the file is last tampered with
                     * @return LatestTamperedFileMTime Time when the file is last tampered with
                     * 
                     */
                    std::string GetLatestTamperedFileMTime() const;

                    /**
                     * 设置Time when the file is last tampered with
                     * @param _latestTamperedFileMTime Time when the file is last tampered with
                     * 
                     */
                    void SetLatestTamperedFileMTime(const std::string& _latestTamperedFileMTime);

                    /**
                     * 判断参数 LatestTamperedFileMTime 是否已赋值
                     * @return LatestTamperedFileMTime 是否已赋值
                     * 
                     */
                    bool LatestTamperedFileMTimeHasBeenSet() const;

                    /**
                     * 获取Content of the new file
                     * @return NewFile Content of the new file
                     * 
                     */
                    std::string GetNewFile() const;

                    /**
                     * 设置Content of the new file
                     * @param _newFile Content of the new file
                     * 
                     */
                    void SetNewFile(const std::string& _newFile);

                    /**
                     * 判断参数 NewFile 是否已赋值
                     * @return NewFile 是否已赋值
                     * 
                     */
                    bool NewFileHasBeenSet() const;

                    /**
                     * 获取Differences between old and new files
                     * @return FileDiff Differences between old and new files
                     * 
                     */
                    std::string GetFileDiff() const;

                    /**
                     * 设置Differences between old and new files
                     * @param _fileDiff Differences between old and new files
                     * 
                     */
                    void SetFileDiff(const std::string& _fileDiff);

                    /**
                     * 判断参数 FileDiff 是否已赋值
                     * @return FileDiff 是否已赋值
                     * 
                     */
                    bool FileDiffHasBeenSet() const;

                private:

                    /**
                     * Filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File type
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * File size in bytes
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * File path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * File creation time
                     */
                    std::string m_fileCreateTime;
                    bool m_fileCreateTimeHasBeenSet;

                    /**
                     * Time when the file is last tampered with
                     */
                    std::string m_latestTamperedFileMTime;
                    bool m_latestTamperedFileMTimeHasBeenSet;

                    /**
                     * Content of the new file
                     */
                    std::string m_newFile;
                    bool m_newFileHasBeenSet;

                    /**
                     * Differences between old and new files
                     */
                    std::string m_fileDiff;
                    bool m_fileDiffHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_FILEATTRIBUTEINFO_H_
