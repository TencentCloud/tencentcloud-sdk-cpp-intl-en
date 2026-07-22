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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_DOCUMENT_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_DOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * Document Information
                */
                class Document : public AbstractModel
                {
                public:
                    Document();
                    ~Document() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Other supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Another maximum of 20M
                     * @return FileType Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Other supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Another maximum of 20M
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Other supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Another maximum of 20M
                     * @param _fileType Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Other supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Another maximum of 20M
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
                     * 获取File storage on Tencent Cloud's URL ensures higher download speed and stability by using Tencent Cloud COS file address.
                     * @return FileUrl File storage on Tencent Cloud's URL ensures higher download speed and stability by using Tencent Cloud COS file address.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置File storage on Tencent Cloud's URL ensures higher download speed and stability by using Tencent Cloud COS file address.
                     * @param _fileUrl File storage on Tencent Cloud's URL ensures higher download speed and stability by using Tencent Cloud COS file address.
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
                     * 获取base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is not more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
                     * @return FileContent base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is not more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is not more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
                     * @param _fileContent base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is not more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取File name, used when uploading with base64.
                     * @return FileName File name, used when uploading with base64.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name, used when uploading with base64.
                     * @param _fileName File name, used when uploading with base64.
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
                     * 获取Starting page number of the document
                     * @return FileStartPageNumber Starting page number of the document
                     * 
                     */
                    int64_t GetFileStartPageNumber() const;

                    /**
                     * 设置Starting page number of the document
                     * @param _fileStartPageNumber Starting page number of the document
                     * 
                     */
                    void SetFileStartPageNumber(const int64_t& _fileStartPageNumber);

                    /**
                     * 判断参数 FileStartPageNumber 是否已赋值
                     * @return FileStartPageNumber 是否已赋值
                     * 
                     */
                    bool FileStartPageNumberHasBeenSet() const;

                    /**
                     * 获取End page number of the document
                     * @return FileEndPageNumber End page number of the document
                     * 
                     */
                    int64_t GetFileEndPageNumber() const;

                    /**
                     * 设置End page number of the document
                     * @param _fileEndPageNumber End page number of the document
                     * 
                     */
                    void SetFileEndPageNumber(const int64_t& _fileEndPageNumber);

                    /**
                     * 判断参数 FileEndPageNumber 是否已赋值
                     * @return FileEndPageNumber 是否已赋值
                     * 
                     */
                    bool FileEndPageNumberHasBeenSet() const;

                private:

                    /**
                     * Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Other supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Another maximum of 20M
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * File storage on Tencent Cloud's URL ensures higher download speed and stability by using Tencent Cloud COS file address.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is not more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * File name, used when uploading with base64.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Starting page number of the document
                     */
                    int64_t m_fileStartPageNumber;
                    bool m_fileStartPageNumberHasBeenSet;

                    /**
                     * End page number of the document
                     */
                    int64_t m_fileEndPageNumber;
                    bool m_fileEndPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_DOCUMENT_H_
