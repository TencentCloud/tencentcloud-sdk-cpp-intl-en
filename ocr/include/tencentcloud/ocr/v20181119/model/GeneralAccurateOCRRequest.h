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
                     * 获取<p>The Base64 value of the image/PDF. The image size after Base64 encoding must be no more than 10M, with a resolution of 600*800 or higher recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.</p>
                     * @return ImageBase64 <p>The Base64 value of the image/PDF. The image size after Base64 encoding must be no more than 10M, with a resolution of 600*800 or higher recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>The Base64 value of the image/PDF. The image size after Base64 encoding must be no more than 10M, with a resolution of 600*800 or higher recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.</p>
                     * @param _imageBase64 <p>The Base64 value of the image/PDF. The image size after Base64 encoding must be no more than 10M, with a resolution of 600*800 or higher recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.</p>
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
                     * 获取URL address of image. 
The image cannot exceed 10 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl URL address of image. 
The image cannot exceed 10 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of image. 
The image cannot exceed 10 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param _imageUrl URL address of image. 
The image cannot exceed 10 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
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
                     * 获取<p>Whether to enable original image slicing detection. Once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character occupies a small proportion" (for example: exam paper). Default: disabled. Note: Only supported when ConfigID is configured as OCR.</p>
                     * @return EnableDetectSplit <p>Whether to enable original image slicing detection. Once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character occupies a small proportion" (for example: exam paper). Default: disabled. Note: Only supported when ConfigID is configured as OCR.</p>
                     * 
                     */
                    bool GetEnableDetectSplit() const;

                    /**
                     * 设置<p>Whether to enable original image slicing detection. Once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character occupies a small proportion" (for example: exam paper). Default: disabled. Note: Only supported when ConfigID is configured as OCR.</p>
                     * @param _enableDetectSplit <p>Whether to enable original image slicing detection. Once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character occupies a small proportion" (for example: exam paper). Default: disabled. Note: Only supported when ConfigID is configured as OCR.</p>
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
                     * 获取<p>Whether PDF recognition is enabled. The default value is false. Once enabled, it can simultaneously support image and PDF recognition.</p>
                     * @return IsPdf <p>Whether PDF recognition is enabled. The default value is false. Once enabled, it can simultaneously support image and PDF recognition.</p>
                     * 
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置<p>Whether PDF recognition is enabled. The default value is false. Once enabled, it can simultaneously support image and PDF recognition.</p>
                     * @param _isPdf <p>Whether PDF recognition is enabled. The default value is false. Once enabled, it can simultaneously support image and PDF recognition.</p>
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
                     * 获取<p>The corresponding page number of the PDF page to be recognized. Only single page recognition is supported. Valid at that time when the upload file is a PDF and the IsPdf parameter value is true. The default value is 1.</p>
                     * @return PdfPageNumber <p>The corresponding page number of the PDF page to be recognized. Only single page recognition is supported. Valid at that time when the upload file is a PDF and the IsPdf parameter value is true. The default value is 1.</p>
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>The corresponding page number of the PDF page to be recognized. Only single page recognition is supported. Valid at that time when the upload file is a PDF and the IsPdf parameter value is true. The default value is 1.</p>
                     * @param _pdfPageNumber <p>The corresponding page number of the PDF page to be recognized. Only single page recognition is supported. Valid at that time when the upload file is a PDF and the IsPdf parameter value is true. The default value is 1.</p>
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
                     * 获取<p>Text Detection Switch, true by default. Set to false to directly perform single-line recognition, suitable for image scenarios containing only forward single-line text.</p>
                     * @return EnableDetectText <p>Text Detection Switch, true by default. Set to false to directly perform single-line recognition, suitable for image scenarios containing only forward single-line text.</p>
                     * 
                     */
                    bool GetEnableDetectText() const;

                    /**
                     * 设置<p>Text Detection Switch, true by default. Set to false to directly perform single-line recognition, suitable for image scenarios containing only forward single-line text.</p>
                     * @param _enableDetectText <p>Text Detection Switch, true by default. Set to false to directly perform single-line recognition, suitable for image scenarios containing only forward single-line text.</p>
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
                     * 获取<p>Configuration ID support: OCR -- common scenarios MulOCR -- multilingual scenario. Default value: OCR.</p>
                     * @return ConfigID <p>Configuration ID support: OCR -- common scenarios MulOCR -- multilingual scenario. Default value: OCR.</p>
                     * 
                     */
                    std::string GetConfigID() const;

                    /**
                     * 设置<p>Configuration ID support: OCR -- common scenarios MulOCR -- multilingual scenario. Default value: OCR.</p>
                     * @param _configID <p>Configuration ID support: OCR -- common scenarios MulOCR -- multilingual scenario. Default value: OCR.</p>
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
                     * <p>The Base64 value of the image/PDF. The image size after Base64 encoding must be no more than 10M, with a resolution of 600*800 or higher recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * URL address of image. 
The image cannot exceed 10 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, and BMP formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>Whether to enable original image slicing detection. Once enabled, it improves recognition accuracy in scenarios where "the overall image area is large but the single character occupies a small proportion" (for example: exam paper). Default: disabled. Note: Only supported when ConfigID is configured as OCR.</p>
                     */
                    bool m_enableDetectSplit;
                    bool m_enableDetectSplitHasBeenSet;

                    /**
                     * <p>Whether PDF recognition is enabled. The default value is false. Once enabled, it can simultaneously support image and PDF recognition.</p>
                     */
                    bool m_isPdf;
                    bool m_isPdfHasBeenSet;

                    /**
                     * <p>The corresponding page number of the PDF page to be recognized. Only single page recognition is supported. Valid at that time when the upload file is a PDF and the IsPdf parameter value is true. The default value is 1.</p>
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>Text Detection Switch, true by default. Set to false to directly perform single-line recognition, suitable for image scenarios containing only forward single-line text.</p>
                     */
                    bool m_enableDetectText;
                    bool m_enableDetectTextHasBeenSet;

                    /**
                     * <p>Configuration ID support: OCR -- common scenarios MulOCR -- multilingual scenario. Default value: OCR.</p>
                     */
                    std::string m_configID;
                    bool m_configIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_
