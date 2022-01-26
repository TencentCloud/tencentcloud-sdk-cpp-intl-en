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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_

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
                * GeneralAccurateOCR request structure.
                */
                class GeneralAccurateOCRRequest : public AbstractModel
                {
                public:
                    GeneralAccurateOCRRequest();
                    ~GeneralAccurateOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded value of image.
The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
Either `ImageUrl` or `ImageBase64` of the image must be provided; if both are provided, only `ImageUrl` will be used.
                     * @return ImageBase64 Base64-encoded value of image.
The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
Either `ImageUrl` or `ImageBase64` of the image must be provided; if both are provided, only `ImageUrl` will be used.
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64-encoded value of image.
The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
Either `ImageUrl` or `ImageBase64` of the image must be provided; if both are provided, only `ImageUrl` will be used.
                     * @param ImageBase64 Base64-encoded value of image.
The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
Either `ImageUrl` or `ImageBase64` of the image must be provided; if both are provided, only `ImageUrl` will be used.
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param ImageUrl URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取Whether to return the character information. Default value: `false`
                     * @return IsWords Whether to return the character information. Default value: `false`
                     */
                    bool GetIsWords() const;

                    /**
                     * 设置Whether to return the character information. Default value: `false`
                     * @param IsWords Whether to return the character information. Default value: `false`
                     */
                    void SetIsWords(const bool& _isWords);

                    /**
                     * 判断参数 IsWords 是否已赋值
                     * @return IsWords 是否已赋值
                     */
                    bool IsWordsHasBeenSet() const;

                    /**
                     * 获取Whether to slice the input image to enhance the recognition effects for scenarios where the whole image is big, but the size of a single character is small (e.g., test papers). This feature is disabled by default.
                     * @return EnableDetectSplit Whether to slice the input image to enhance the recognition effects for scenarios where the whole image is big, but the size of a single character is small (e.g., test papers). This feature is disabled by default.
                     */
                    bool GetEnableDetectSplit() const;

                    /**
                     * 设置Whether to slice the input image to enhance the recognition effects for scenarios where the whole image is big, but the size of a single character is small (e.g., test papers). This feature is disabled by default.
                     * @param EnableDetectSplit Whether to slice the input image to enhance the recognition effects for scenarios where the whole image is big, but the size of a single character is small (e.g., test papers). This feature is disabled by default.
                     */
                    void SetEnableDetectSplit(const bool& _enableDetectSplit);

                    /**
                     * 判断参数 EnableDetectSplit 是否已赋值
                     * @return EnableDetectSplit 是否已赋值
                     */
                    bool EnableDetectSplitHasBeenSet() const;

                    /**
                     * 获取Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     * @return IsPdf Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     * @param IsPdf Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     */
                    void SetIsPdf(const bool& _isPdf);

                    /**
                     * 判断参数 IsPdf 是否已赋值
                     * @return IsPdf 是否已赋值
                     */
                    bool IsPdfHasBeenSet() const;

                    /**
                     * 获取Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     * @return PdfPageNumber Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     * @param PdfPageNumber Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     */
                    void SetPdfPageNumber(const uint64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     */
                    bool PdfPageNumberHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded value of image.
The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
Either `ImageUrl` or `ImageBase64` of the image must be provided; if both are provided, only `ImageUrl` will be used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Whether to return the character information. Default value: `false`
                     */
                    bool m_isWords;
                    bool m_isWordsHasBeenSet;

                    /**
                     * Whether to slice the input image to enhance the recognition effects for scenarios where the whole image is big, but the size of a single character is small (e.g., test papers). This feature is disabled by default.
                     */
                    bool m_enableDetectSplit;
                    bool m_enableDetectSplitHasBeenSet;

                    /**
                     * Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     */
                    bool m_isPdf;
                    bool m_isPdfHasBeenSet;

                    /**
                     * Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_
