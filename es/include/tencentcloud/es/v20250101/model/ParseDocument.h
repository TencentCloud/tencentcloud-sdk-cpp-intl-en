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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENT_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/DocumentParseConfig.h>


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
                class ParseDocument : public AbstractModel
                {
                public:
                    ParseDocument();
                    ~ParseDocument() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Another supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Other maximum 20M
                     * @return FileType Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Another supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Other maximum 20M
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
-Another supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Other maximum 20M
                     * @param _fileType Supported file types: PDF, DOC, DOCX, PPT, PPTX, MD, TXT, XLS.
XLSX,CSV,PNG,JPG,JPEG,BMP,GIF,WEBP,HEIC,EPS,ICNS,
IM,PCX,PPM,TIFF,XBM,HEIF,JP2

Supported file size for document parsing:
-PDF, DOC, DOCX, PPT, PPTX support 100M.
-MD, TXT, XLS, XLSX, CSV support 10M.
-Another supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Other maximum 20M
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
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is no more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
Either FileUrl or FileContent of the file must be provided. If both are provided, only FileUrl is used.
                     * @return FileContent base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is no more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
Either FileUrl or FileContent of the file must be provided. If both are provided, only FileUrl is used.
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is no more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
Either FileUrl or FileContent of the file must be provided. If both are provided, only FileUrl is used.
                     * @param _fileContent base64 value of the file, carrying the MineType prefix information. The encoded file is no more than 10M.
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is no more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
Either FileUrl or FileContent of the file must be provided. If both are provided, only FileUrl is used.
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
                     * 获取Document parsing configuration
                     * @return DocumentParseConfig Document parsing configuration
                     * 
                     */
                    DocumentParseConfig GetDocumentParseConfig() const;

                    /**
                     * 设置Document parsing configuration
                     * @param _documentParseConfig Document parsing configuration
                     * 
                     */
                    void SetDocumentParseConfig(const DocumentParseConfig& _documentParseConfig);

                    /**
                     * 判断参数 DocumentParseConfig 是否已赋值
                     * @return DocumentParseConfig 是否已赋值
                     * 
                     */
                    bool DocumentParseConfigHasBeenSet() const;

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
-Another supports 20M

Supported file size for text slicing:
-Maximum PDF size: 300 MB
-D0CX, D0C, PPT, PPTX maximum 200M
-Maximum 10M for TXT, MD
-Other maximum 20M
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
Supported file size: The downloaded file is no more than 8M after Base64 encoding. File download time is no more than 3 seconds.
Supported image pixel: Unilateral between 20-10000px.
Either FileUrl or FileContent of the file must be provided. If both are provided, only FileUrl is used.
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * Document parsing configuration
                     */
                    DocumentParseConfig m_documentParseConfig;
                    bool m_documentParseConfigHasBeenSet;

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

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENT_H_
