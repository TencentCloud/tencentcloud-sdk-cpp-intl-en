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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowConfig.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * CreateSplitDocumentFlow request structure.
                */
                class CreateSplitDocumentFlowRequest : public AbstractModel
                {
                public:
                    CreateSplitDocumentFlowRequest();
                    ~CreateSplitDocumentFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File type.
**Supported file types**: PDF, DOC, DOCX, XLS, XLSX, PPT, PPTX, MD, TXT, PNG, JPG, JPEG, CSV, HTML, EPUB.
**Supported file sizes**: 
- Max 500 MB for PDF.
- Max 200 MB for DOC, DOCX, PPT, and PPTX .
- Max 10 MB for MD, and TXT.
- Max 20 MB for others.
                     * @return FileType File type.
**Supported file types**: PDF, DOC, DOCX, XLS, XLSX, PPT, PPTX, MD, TXT, PNG, JPG, JPEG, CSV, HTML, EPUB.
**Supported file sizes**: 
- Max 500 MB for PDF.
- Max 200 MB for DOC, DOCX, PPT, and PPTX .
- Max 10 MB for MD, and TXT.
- Max 20 MB for others.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type.
**Supported file types**: PDF, DOC, DOCX, XLS, XLSX, PPT, PPTX, MD, TXT, PNG, JPG, JPEG, CSV, HTML, EPUB.
**Supported file sizes**: 
- Max 500 MB for PDF.
- Max 200 MB for DOC, DOCX, PPT, and PPTX .
- Max 10 MB for MD, and TXT.
- Max 20 MB for others.
                     * @param _fileType File type.
**Supported file types**: PDF, DOC, DOCX, XLS, XLSX, PPT, PPTX, MD, TXT, PNG, JPG, JPEG, CSV, HTML, EPUB.
**Supported file sizes**: 
- Max 500 MB for PDF.
- Max 200 MB for DOC, DOCX, PPT, and PPTX .
- Max 10 MB for MD, and TXT.
- Max 20 MB for others.
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
                     * 获取File URL. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. 
Refer to: [Tencent Cloud COS Documentation](https://cloud.tencent.com/document/product/436/7749).
                     * @return FileUrl File URL. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. 
Refer to: [Tencent Cloud COS Documentation](https://cloud.tencent.com/document/product/436/7749).
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置File URL. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. 
Refer to: [Tencent Cloud COS Documentation](https://cloud.tencent.com/document/product/436/7749).
                     * @param _fileUrl File URL. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. 
Refer to: [Tencent Cloud COS Documentation](https://cloud.tencent.com/document/product/436/7749).
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
                     * 获取Filename. optional.
**The file type suffix shall be included**. This field is required to be specified when the file name cannot be obtained from the passed-in "FileUrl".
                     * @return FileName Filename. optional.
**The file type suffix shall be included**. This field is required to be specified when the file name cannot be obtained from the passed-in "FileUrl".
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename. optional.
**The file type suffix shall be included**. This field is required to be specified when the file name cannot be obtained from the passed-in "FileUrl".
                     * @param _fileName Filename. optional.
**The file type suffix shall be included**. This field is required to be specified when the file name cannot be obtained from the passed-in "FileUrl".
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
                     * 获取The base64 value of the file. File size limit: the downloaded file shall not exceed 8MB after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * @return FileBase64 The base64 value of the file. File size limit: the downloaded file shall not exceed 8MB after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * @deprecated
                     */
                    std::string GetFileBase64() const;

                    /**
                     * 设置The base64 value of the file. File size limit: the downloaded file shall not exceed 8MB after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * @param _fileBase64 The base64 value of the file. File size limit: the downloaded file shall not exceed 8MB after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * @deprecated
                     */
                    void SetFileBase64(const std::string& _fileBase64);

                    /**
                     * 判断参数 FileBase64 是否已赋值
                     * @return FileBase64 是否已赋值
                     * @deprecated
                     */
                    bool FileBase64HasBeenSet() const;

                    /**
                     * 获取The starting page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the starting page number for recognition, including the current value.
                     * @return FileStartPageNumber The starting page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the starting page number for recognition, including the current value.
                     * 
                     */
                    int64_t GetFileStartPageNumber() const;

                    /**
                     * 设置The starting page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the starting page number for recognition, including the current value.
                     * @param _fileStartPageNumber The starting page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the starting page number for recognition, including the current value.
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
                     * 获取The end page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the end page number for recognition, including the current value.
                     * @return FileEndPageNumber The end page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the end page number for recognition, including the current value.
                     * 
                     */
                    int64_t GetFileEndPageNumber() const;

                    /**
                     * 设置The end page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the end page number for recognition, including the current value.
                     * @param _fileEndPageNumber The end page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the end page number for recognition, including the current value.
                     * 
                     */
                    void SetFileEndPageNumber(const int64_t& _fileEndPageNumber);

                    /**
                     * 判断参数 FileEndPageNumber 是否已赋值
                     * @return FileEndPageNumber 是否已赋值
                     * 
                     */
                    bool FileEndPageNumberHasBeenSet() const;

                    /**
                     * 获取Configuration message for document splitting task.
                     * @return Config Configuration message for document splitting task.
                     * 
                     */
                    CreateSplitDocumentFlowConfig GetConfig() const;

                    /**
                     * 设置Configuration message for document splitting task.
                     * @param _config Configuration message for document splitting task.
                     * 
                     */
                    void SetConfig(const CreateSplitDocumentFlowConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * File type.
**Supported file types**: PDF, DOC, DOCX, XLS, XLSX, PPT, PPTX, MD, TXT, PNG, JPG, JPEG, CSV, HTML, EPUB.
**Supported file sizes**: 
- Max 500 MB for PDF.
- Max 200 MB for DOC, DOCX, PPT, and PPTX .
- Max 10 MB for MD, and TXT.
- Max 20 MB for others.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * File URL. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. 
Refer to: [Tencent Cloud COS Documentation](https://cloud.tencent.com/document/product/436/7749).
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Filename. optional.
**The file type suffix shall be included**. This field is required to be specified when the file name cannot be obtained from the passed-in "FileUrl".
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * The base64 value of the file. File size limit: the downloaded file shall not exceed 8MB after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     */
                    std::string m_fileBase64;
                    bool m_fileBase64HasBeenSet;

                    /**
                     * The starting page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the starting page number for recognition, including the current value.
                     */
                    int64_t m_fileStartPageNumber;
                    bool m_fileStartPageNumberHasBeenSet;

                    /**
                     * The end page number of the file. When type of the uploaded file is pdf, doc, ppt, or pptx, it specifies the end page number for recognition, including the current value.
                     */
                    int64_t m_fileEndPageNumber;
                    bool m_fileEndPageNumberHasBeenSet;

                    /**
                     * Configuration message for document splitting task.
                     */
                    CreateSplitDocumentFlowConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWREQUEST_H_
