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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Real-Time uploaded file information.
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File name.
                     * @return FileName File name.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name.
                     * @param _fileName File name.
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
                     * 获取File size.
                     * @return FileSize File size.
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置File size.
                     * @param _fileSize File size.
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取URL of the file, address of COS.
                     * @return FileUrl URL of the file, address of COS.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置URL of the file, address of COS.
                     * @param _fileUrl URL of the file, address of COS.
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取File type.
                     * @return FileType File type.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type.
                     * @param _fileType File type.
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
                     * 获取DocID returned after parsing.
                     * @return DocId DocID returned after parsing.
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置DocID returned after parsing.
                     * @param _docId DocID returned after parsing.
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedAt Creation time.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.
                     * @param _createdAt Creation time.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * File name.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size.
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * URL of the file, address of COS.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * File type.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * DocID returned after parsing.
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFO_H_
