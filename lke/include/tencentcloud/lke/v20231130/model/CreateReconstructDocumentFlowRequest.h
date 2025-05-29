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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/CreateReconstructDocumentFlowConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateReconstructDocumentFlow request structure.
                */
                class CreateReconstructDocumentFlowRequest : public AbstractModel
                {
                public:
                    CreateReconstructDocumentFlowRequest();
                    ~CreateReconstructDocumentFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File type. Supported file types: pdf, doc, docx, ppt, pptx, md, txt, xls, xlsx, csv, png, jpg, jpeg, bmp, gif, webp, heic, eps, icns, im, pcx, ppm, tiff, xbm, heif, jp2.
                     * @return FileType File type. Supported file types: pdf, doc, docx, ppt, pptx, md, txt, xls, xlsx, csv, png, jpg, jpeg, bmp, gif, webp, heic, eps, icns, im, pcx, ppm, tiff, xbm, heif, jp2.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type. Supported file types: pdf, doc, docx, ppt, pptx, md, txt, xls, xlsx, csv, png, jpg, jpeg, bmp, gif, webp, heic, eps, icns, im, pcx, ppm, tiff, xbm, heif, jp2.
                     * @param _fileType File type. Supported file types: pdf, doc, docx, ppt, pptx, md, txt, xls, xlsx, csv, png, jpg, jpeg, bmp, gif, webp, heic, eps, icns, im, pcx, ppm, tiff, xbm, heif, jp2.
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
                     * 获取The base64 value of the file. File size limit: the downloaded file does not exceed 8m after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * @return FileBase64 The base64 value of the file. File size limit: the downloaded file does not exceed 8m after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * 
                     */
                    std::string GetFileBase64() const;

                    /**
                     * 设置The base64 value of the file. File size limit: the downloaded file does not exceed 8m after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * @param _fileBase64 The base64 value of the file. File size limit: the downloaded file does not exceed 8m after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     * 
                     */
                    void SetFileBase64(const std::string& _fileBase64);

                    /**
                     * 判断参数 FileBase64 是否已赋值
                     * @return FileBase64 是否已赋值
                     * 
                     */
                    bool FileBase64HasBeenSet() const;

                    /**
                     * 获取<p>File URL. The file download time does not exceed 15 seconds. Supported image pixels: the length of a single side is between 20-10000px. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. The downloaded file shall not exceed the supported file size after Base64 encoding: </p><table> <tbody> <tr> <td>File Type</td> <td>Supported File Size</td> </tr> <tr> <td>PDF</td> <td>200M</td> </tr> <tr> <td>DOC</td> <td>200M</td> </tr> <tr> <td>DOCX</td> <td>200M</td> </tr> <tr> <td>PPT</td> <td>200M</td> </tr> <tr> <td>PPTX</td> <td>200M</td> </tr> <tr> <td>MD</td> <td>10M</td> </tr> <tr> <td>TXT</td> <td>10M</td> </tr> <tr> <td>XLS</td> <td>20M</td> </tr> <tr> <td>XLSX</td> <td>20M</td> </tr> <tr> <td>CSV</td> <td>20M</td> </tr> <tr> <td>PNG</td> <td>20M</td> </tr> <tr> <td>JPG</td> <td>20M</td> </tr> <tr> <td>JPEG</td> <td>20M</td> </tr> <tr> <td>BMP</td> <td>20M</td> </tr> <tr> <td>GIF</td> <td>20M</td> </tr> <tr> <td>WEBP</td> <td>20M</td> </tr> <tr> <td>HEIC</td> <td>20M</td> </tr> <tr> <td>EPS</td> <td>20M</td> </tr> <tr> <td>ICNS</td> <td>20M</td> </tr> <tr> <td>IM</td> <td>20M</td> </tr> <tr> <td>PCX</td> <td>20M</td> </tr> <tr> <td>PPM</td> <td>20M</td> </tr> <tr> <td>TIFF</td> <td>20M</td> </tr> <tr> <td>XBM</td> <td>20M</td> </tr> <tr> <td>HEIF</td> <td>20M</td> </tr> <tr> <td>JP2</td> <td>20M</td> </tr> </tbody> <colgroup> <col> <col> </colgroup></table>
                     * @return FileUrl <p>File URL. The file download time does not exceed 15 seconds. Supported image pixels: the length of a single side is between 20-10000px. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. The downloaded file shall not exceed the supported file size after Base64 encoding: </p><table> <tbody> <tr> <td>File Type</td> <td>Supported File Size</td> </tr> <tr> <td>PDF</td> <td>200M</td> </tr> <tr> <td>DOC</td> <td>200M</td> </tr> <tr> <td>DOCX</td> <td>200M</td> </tr> <tr> <td>PPT</td> <td>200M</td> </tr> <tr> <td>PPTX</td> <td>200M</td> </tr> <tr> <td>MD</td> <td>10M</td> </tr> <tr> <td>TXT</td> <td>10M</td> </tr> <tr> <td>XLS</td> <td>20M</td> </tr> <tr> <td>XLSX</td> <td>20M</td> </tr> <tr> <td>CSV</td> <td>20M</td> </tr> <tr> <td>PNG</td> <td>20M</td> </tr> <tr> <td>JPG</td> <td>20M</td> </tr> <tr> <td>JPEG</td> <td>20M</td> </tr> <tr> <td>BMP</td> <td>20M</td> </tr> <tr> <td>GIF</td> <td>20M</td> </tr> <tr> <td>WEBP</td> <td>20M</td> </tr> <tr> <td>HEIC</td> <td>20M</td> </tr> <tr> <td>EPS</td> <td>20M</td> </tr> <tr> <td>ICNS</td> <td>20M</td> </tr> <tr> <td>IM</td> <td>20M</td> </tr> <tr> <td>PCX</td> <td>20M</td> </tr> <tr> <td>PPM</td> <td>20M</td> </tr> <tr> <td>TIFF</td> <td>20M</td> </tr> <tr> <td>XBM</td> <td>20M</td> </tr> <tr> <td>HEIF</td> <td>20M</td> </tr> <tr> <td>JP2</td> <td>20M</td> </tr> </tbody> <colgroup> <col> <col> </colgroup></table>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>File URL. The file download time does not exceed 15 seconds. Supported image pixels: the length of a single side is between 20-10000px. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. The downloaded file shall not exceed the supported file size after Base64 encoding: </p><table> <tbody> <tr> <td>File Type</td> <td>Supported File Size</td> </tr> <tr> <td>PDF</td> <td>200M</td> </tr> <tr> <td>DOC</td> <td>200M</td> </tr> <tr> <td>DOCX</td> <td>200M</td> </tr> <tr> <td>PPT</td> <td>200M</td> </tr> <tr> <td>PPTX</td> <td>200M</td> </tr> <tr> <td>MD</td> <td>10M</td> </tr> <tr> <td>TXT</td> <td>10M</td> </tr> <tr> <td>XLS</td> <td>20M</td> </tr> <tr> <td>XLSX</td> <td>20M</td> </tr> <tr> <td>CSV</td> <td>20M</td> </tr> <tr> <td>PNG</td> <td>20M</td> </tr> <tr> <td>JPG</td> <td>20M</td> </tr> <tr> <td>JPEG</td> <td>20M</td> </tr> <tr> <td>BMP</td> <td>20M</td> </tr> <tr> <td>GIF</td> <td>20M</td> </tr> <tr> <td>WEBP</td> <td>20M</td> </tr> <tr> <td>HEIC</td> <td>20M</td> </tr> <tr> <td>EPS</td> <td>20M</td> </tr> <tr> <td>ICNS</td> <td>20M</td> </tr> <tr> <td>IM</td> <td>20M</td> </tr> <tr> <td>PCX</td> <td>20M</td> </tr> <tr> <td>PPM</td> <td>20M</td> </tr> <tr> <td>TIFF</td> <td>20M</td> </tr> <tr> <td>XBM</td> <td>20M</td> </tr> <tr> <td>HEIF</td> <td>20M</td> </tr> <tr> <td>JP2</td> <td>20M</td> </tr> </tbody> <colgroup> <col> <col> </colgroup></table>
                     * @param _fileUrl <p>File URL. The file download time does not exceed 15 seconds. Supported image pixels: the length of a single side is between 20-10000px. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. The downloaded file shall not exceed the supported file size after Base64 encoding: </p><table> <tbody> <tr> <td>File Type</td> <td>Supported File Size</td> </tr> <tr> <td>PDF</td> <td>200M</td> </tr> <tr> <td>DOC</td> <td>200M</td> </tr> <tr> <td>DOCX</td> <td>200M</td> </tr> <tr> <td>PPT</td> <td>200M</td> </tr> <tr> <td>PPTX</td> <td>200M</td> </tr> <tr> <td>MD</td> <td>10M</td> </tr> <tr> <td>TXT</td> <td>10M</td> </tr> <tr> <td>XLS</td> <td>20M</td> </tr> <tr> <td>XLSX</td> <td>20M</td> </tr> <tr> <td>CSV</td> <td>20M</td> </tr> <tr> <td>PNG</td> <td>20M</td> </tr> <tr> <td>JPG</td> <td>20M</td> </tr> <tr> <td>JPEG</td> <td>20M</td> </tr> <tr> <td>BMP</td> <td>20M</td> </tr> <tr> <td>GIF</td> <td>20M</td> </tr> <tr> <td>WEBP</td> <td>20M</td> </tr> <tr> <td>HEIC</td> <td>20M</td> </tr> <tr> <td>EPS</td> <td>20M</td> </tr> <tr> <td>ICNS</td> <td>20M</td> </tr> <tr> <td>IM</td> <td>20M</td> </tr> <tr> <td>PCX</td> <td>20M</td> </tr> <tr> <td>PPM</td> <td>20M</td> </tr> <tr> <td>TIFF</td> <td>20M</td> </tr> <tr> <td>XBM</td> <td>20M</td> </tr> <tr> <td>HEIF</td> <td>20M</td> </tr> <tr> <td>JP2</td> <td>20M</td> </tr> </tbody> <colgroup> <col> <col> </colgroup></table>
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
                     * 获取When type of the uploaded file is pdf, doc, docx, ppt, or pptx, it specifies the starting page number for file recognition, including the current value. The default is 1, indicating recognition starts from the first page of the file.
                     * @return FileStartPageNumber When type of the uploaded file is pdf, doc, docx, ppt, or pptx, it specifies the starting page number for file recognition, including the current value. The default is 1, indicating recognition starts from the first page of the file.
                     * 
                     */
                    int64_t GetFileStartPageNumber() const;

                    /**
                     * 设置When type of the uploaded file is pdf, doc, docx, ppt, or pptx, it specifies the starting page number for file recognition, including the current value. The default is 1, indicating recognition starts from the first page of the file.
                     * @param _fileStartPageNumber When type of the uploaded file is pdf, doc, docx, ppt, or pptx, it specifies the starting page number for file recognition, including the current value. The default is 1, indicating recognition starts from the first page of the file.
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
                     * 获取When type of the uploaded file is pdf, doc, docx, orppt, pptx, it specifies the end page number for file recognition, including the current value. The default is 100, indicating recognition up to page 100 of the file. a single call supports recognition of up to 1000 pages, i.e., FileEndPageNumber-FileStartPageNumber should be no more than 1000.
                     * @return FileEndPageNumber When type of the uploaded file is pdf, doc, docx, orppt, pptx, it specifies the end page number for file recognition, including the current value. The default is 100, indicating recognition up to page 100 of the file. a single call supports recognition of up to 1000 pages, i.e., FileEndPageNumber-FileStartPageNumber should be no more than 1000.
                     * 
                     */
                    int64_t GetFileEndPageNumber() const;

                    /**
                     * 设置When type of the uploaded file is pdf, doc, docx, orppt, pptx, it specifies the end page number for file recognition, including the current value. The default is 100, indicating recognition up to page 100 of the file. a single call supports recognition of up to 1000 pages, i.e., FileEndPageNumber-FileStartPageNumber should be no more than 1000.
                     * @param _fileEndPageNumber When type of the uploaded file is pdf, doc, docx, orppt, pptx, it specifies the end page number for file recognition, including the current value. The default is 100, indicating recognition up to page 100 of the file. a single call supports recognition of up to 1000 pages, i.e., FileEndPageNumber-FileStartPageNumber should be no more than 1000.
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
                     * 获取Configuration information for creating a document parsing task.
                     * @return Config Configuration information for creating a document parsing task.
                     * 
                     */
                    CreateReconstructDocumentFlowConfig GetConfig() const;

                    /**
                     * 设置Configuration information for creating a document parsing task.
                     * @param _config Configuration information for creating a document parsing task.
                     * 
                     */
                    void SetConfig(const CreateReconstructDocumentFlowConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * File type. Supported file types: pdf, doc, docx, ppt, pptx, md, txt, xls, xlsx, csv, png, jpg, jpeg, bmp, gif, webp, heic, eps, icns, im, pcx, ppm, tiff, xbm, heif, jp2.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * The base64 value of the file. File size limit: the downloaded file does not exceed 8m after base64 encoding. File download time does not exceed 3 seconds. Supported image pixels: the length of a single side is between 20-10000px. Either FileUrl or FileBase64 of the file must be provided. If both are provided, only the FileUrl is used.
                     */
                    std::string m_fileBase64;
                    bool m_fileBase64HasBeenSet;

                    /**
                     * <p>File URL. The file download time does not exceed 15 seconds. Supported image pixels: the length of a single side is between 20-10000px. It is recommended to store the file in Tencent Cloud as the URL where the file is stored in Tencent Cloud can ensure higher download speed and stability. External URL may affect the speed and stability. The downloaded file shall not exceed the supported file size after Base64 encoding: </p><table> <tbody> <tr> <td>File Type</td> <td>Supported File Size</td> </tr> <tr> <td>PDF</td> <td>200M</td> </tr> <tr> <td>DOC</td> <td>200M</td> </tr> <tr> <td>DOCX</td> <td>200M</td> </tr> <tr> <td>PPT</td> <td>200M</td> </tr> <tr> <td>PPTX</td> <td>200M</td> </tr> <tr> <td>MD</td> <td>10M</td> </tr> <tr> <td>TXT</td> <td>10M</td> </tr> <tr> <td>XLS</td> <td>20M</td> </tr> <tr> <td>XLSX</td> <td>20M</td> </tr> <tr> <td>CSV</td> <td>20M</td> </tr> <tr> <td>PNG</td> <td>20M</td> </tr> <tr> <td>JPG</td> <td>20M</td> </tr> <tr> <td>JPEG</td> <td>20M</td> </tr> <tr> <td>BMP</td> <td>20M</td> </tr> <tr> <td>GIF</td> <td>20M</td> </tr> <tr> <td>WEBP</td> <td>20M</td> </tr> <tr> <td>HEIC</td> <td>20M</td> </tr> <tr> <td>EPS</td> <td>20M</td> </tr> <tr> <td>ICNS</td> <td>20M</td> </tr> <tr> <td>IM</td> <td>20M</td> </tr> <tr> <td>PCX</td> <td>20M</td> </tr> <tr> <td>PPM</td> <td>20M</td> </tr> <tr> <td>TIFF</td> <td>20M</td> </tr> <tr> <td>XBM</td> <td>20M</td> </tr> <tr> <td>HEIF</td> <td>20M</td> </tr> <tr> <td>JP2</td> <td>20M</td> </tr> </tbody> <colgroup> <col> <col> </colgroup></table>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * When type of the uploaded file is pdf, doc, docx, ppt, or pptx, it specifies the starting page number for file recognition, including the current value. The default is 1, indicating recognition starts from the first page of the file.
                     */
                    int64_t m_fileStartPageNumber;
                    bool m_fileStartPageNumberHasBeenSet;

                    /**
                     * When type of the uploaded file is pdf, doc, docx, orppt, pptx, it specifies the end page number for file recognition, including the current value. The default is 100, indicating recognition up to page 100 of the file. a single call supports recognition of up to 1000 pages, i.e., FileEndPageNumber-FileStartPageNumber should be no more than 1000.
                     */
                    int64_t m_fileEndPageNumber;
                    bool m_fileEndPageNumberHasBeenSet;

                    /**
                     * Configuration information for creating a document parsing task.
                     */
                    CreateReconstructDocumentFlowConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWREQUEST_H_
