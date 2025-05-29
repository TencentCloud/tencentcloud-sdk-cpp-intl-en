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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MSGFILEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MSGFILEINFO_H_

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
                * Document information.
                */
                class MsgFileInfo : public AbstractModel
                {
                public:
                    MsgFileInfo();
                    ~MsgFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Document name.
                     * @return FileName Document name.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Document name.
                     * @param _fileName Document name.
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
                     * 获取Document size.
                     * @return FileSize Document size.
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置Document size.
                     * @param _fileSize Document size.
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
                     * 获取Document URL.
                     * @return FileUrl Document URL.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置Document URL.
                     * @param _fileUrl Document URL.
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
                     * 获取Document type.
                     * @return FileType Document type.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Document type.
                     * @param _fileType Document type.
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
                     * 获取Document ID.
                     * @return DocId Document ID.
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置Document ID.
                     * @param _docId Document ID.
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                private:

                    /**
                     * Document name.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Document size.
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Document URL.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Document type.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MSGFILEINFO_H_
