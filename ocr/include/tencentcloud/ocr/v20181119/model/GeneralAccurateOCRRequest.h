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
                     * 获取The Base64 value of an image/PDF. the image must be no more than 10M after encoding, with a resolution of 600*800 or higher recommended. supported formats include PNG, JPG, JPEG, BMP, and PDF. either ImageUrl or ImageBase64 must be provided. if both are provided, only ImageUrl will be used.
                     * @return ImageBase64 The Base64 value of an image/PDF. the image must be no more than 10M after encoding, with a resolution of 600*800 or higher recommended. supported formats include PNG, JPG, JPEG, BMP, and PDF. either ImageUrl or ImageBase64 must be provided. if both are provided, only ImageUrl will be used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64 value of an image/PDF. the image must be no more than 10M after encoding, with a resolution of 600*800 or higher recommended. supported formats include PNG, JPG, JPEG, BMP, and PDF. either ImageUrl or ImageBase64 must be provided. if both are provided, only ImageUrl will be used.
                     * @param _imageBase64 The Base64 value of an image/PDF. the image must be no more than 10M after encoding, with a resolution of 600*800 or higher recommended. supported formats include PNG, JPG, JPEG, BMP, and PDF. either ImageUrl or ImageBase64 must be provided. if both are provided, only ImageUrl will be used.
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
                     * 获取URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param _imageUrl URL address of image. (This field is not supported outside Chinese mainland)
The image cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
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
                     * 获取Whether to enable original image slicing detection. once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character area is small" (for example: exam paper). default: disabled. note: only supported when ConfigID is configured as OCR.
                     * @return EnableDetectSplit Whether to enable original image slicing detection. once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character area is small" (for example: exam paper). default: disabled. note: only supported when ConfigID is configured as OCR.
                     * 
                     */
                    bool GetEnableDetectSplit() const;

                    /**
                     * 设置Whether to enable original image slicing detection. once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character area is small" (for example: exam paper). default: disabled. note: only supported when ConfigID is configured as OCR.
                     * @param _enableDetectSplit Whether to enable original image slicing detection. once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character area is small" (for example: exam paper). default: disabled. note: only supported when ConfigID is configured as OCR.
                     * 
                     */
                    void SetEnableDetectSplit(const bool& _enableDetectSplit);

                    /**
                     * 判断参数 EnableDetectSplit 是否已赋值
                     * @return EnableDetectSplit 是否已赋值
                     * 
                     */
                    bool EnableDetectSplitHasBeenSet() const;

                    /**
                     * 获取Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     * @return IsPdf Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     * 
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     * @param _isPdf Whether to enable PDF recognition. Default value: `false`. If you enable this feature, both images and PDF files can be recognized.
                     * 
                     */
                    void SetIsPdf(const bool& _isPdf);

                    /**
                     * 判断参数 IsPdf 是否已赋值
                     * @return IsPdf 是否已赋值
                     * 
                     */
                    bool IsPdfHasBeenSet() const;

                    /**
                     * 获取Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     * @return PdfPageNumber Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     * @param _pdfPageNumber Number of a PDF page that needs to be recognized. Currently, only one single page can be recognized. This parameter takes effect only if a PDF file is uploaded and `IsPdf` is set to `true`. Default value: `1`
                     * 
                     */
                    void SetPdfPageNumber(const uint64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取Text detection switch, default is true. set to false to directly perform single-line text recognition, suitable for image scenarios containing only forward single-line text.
                     * @return EnableDetectText Text detection switch, default is true. set to false to directly perform single-line text recognition, suitable for image scenarios containing only forward single-line text.
                     * 
                     */
                    bool GetEnableDetectText() const;

                    /**
                     * 设置Text detection switch, default is true. set to false to directly perform single-line text recognition, suitable for image scenarios containing only forward single-line text.
                     * @param _enableDetectText Text detection switch, default is true. set to false to directly perform single-line text recognition, suitable for image scenarios containing only forward single-line text.
                     * 
                     */
                    void SetEnableDetectText(const bool& _enableDetectText);

                    /**
                     * 判断参数 EnableDetectText 是否已赋值
                     * @return EnableDetectText 是否已赋值
                     * 
                     */
                    bool EnableDetectTextHasBeenSet() const;

                    /**
                     * 获取Configuration ID supports: OCR - general scenario MulOCR - multilingual scenario. default value is OCR.
                     * @return ConfigID Configuration ID supports: OCR - general scenario MulOCR - multilingual scenario. default value is OCR.
                     * 
                     */
                    std::string GetConfigID() const;

                    /**
                     * 设置Configuration ID supports: OCR - general scenario MulOCR - multilingual scenario. default value is OCR.
                     * @param _configID Configuration ID supports: OCR - general scenario MulOCR - multilingual scenario. default value is OCR.
                     * 
                     */
                    void SetConfigID(const std::string& _configID);

                    /**
                     * 判断参数 ConfigID 是否已赋值
                     * @return ConfigID 是否已赋值
                     * 
                     */
                    bool ConfigIDHasBeenSet() const;

                private:

                    /**
                     * The Base64 value of an image/PDF. the image must be no more than 10M after encoding, with a resolution of 600*800 or higher recommended. supported formats include PNG, JPG, JPEG, BMP, and PDF. either ImageUrl or ImageBase64 must be provided. if both are provided, only ImageUrl will be used.
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
                     * Whether to enable original image slicing detection. once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character area is small" (for example: exam paper). default: disabled. note: only supported when ConfigID is configured as OCR.
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

                    /**
                     * Text detection switch, default is true. set to false to directly perform single-line text recognition, suitable for image scenarios containing only forward single-line text.
                     */
                    bool m_enableDetectText;
                    bool m_enableDetectTextHasBeenSet;

                    /**
                     * Configuration ID supports: OCR - general scenario MulOCR - multilingual scenario. default value is OCR.
                     */
                    std::string m_configID;
                    bool m_configIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_
