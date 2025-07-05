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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeTableAccurateOCR request structure.
                */
                class RecognizeTableAccurateOCRRequest : public AbstractModel
                {
                public:
                    RecognizeTableAccurateOCRRequest();
                    ~RecognizeTableAccurateOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64-encoded value of an image.
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     * @return ImageBase64 The Base64-encoded value of an image.
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64-encoded value of an image.
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     * @param _imageBase64 The Base64-encoded value of an image.
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取The URL of the image or PDF file.
The image or PDF file cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl The URL of the image or PDF file.
The image or PDF file cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL of the image or PDF file.
The image or PDF file cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param _imageUrl The URL of the image or PDF file.
The image or PDF file cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of `IsPdf` is `true`. Default value: `1`.
                     * @return PdfPageNumber The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of `IsPdf` is `true`. Default value: `1`.
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of `IsPdf` is `true`. Default value: `1`.
                     * @param _pdfPageNumber The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of `IsPdf` is `true`. Default value: `1`.
                     * 
                     */
                    void SetPdfPageNumber(const uint64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                private:

                    /**
                     * The Base64-encoded value of an image.
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * The URL of the image or PDF file.
The image or PDF file cannot exceed 7 MB after being Base64-encoded. A resolution above 600 x 800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
Supported image pixels: 20 to 10,000
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of `IsPdf` is `true`. Default value: `1`.
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRREQUEST_H_
