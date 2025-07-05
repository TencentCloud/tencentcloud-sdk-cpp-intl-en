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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SMARTSTRUCTURALPROREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SMARTSTRUCTURALPROREQUEST_H_

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
                * SmartStructuralPro request structure.
                */
                class SmartStructuralProRequest : public AbstractModel
                {
                public:
                    SmartStructuralProRequest();
                    ~SmartStructuralProRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The URL of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl The URL of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param _imageUrl The URL of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
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
                     * 获取The Base64-encoded value of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     * @return ImageBase64 The Base64-encoded value of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64-encoded value of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     * @param _imageBase64 The Base64-encoded value of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
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
                     * 获取The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF `. Default value: `1`.
                     * @return PdfPageNumber The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF `. Default value: `1`.
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF `. Default value: `1`.
                     * @param _pdfPageNumber The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF `. Default value: `1`.
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
                     * 获取The names of the fields you want to return for the structured information recognition.
For example, if you want to return only the recognition result of the "Name" and "Gender" fields, set this parameter as follows:
ItemNames=["Name","Gender"]
                     * @return ItemNames The names of the fields you want to return for the structured information recognition.
For example, if you want to return only the recognition result of the "Name" and "Gender" fields, set this parameter as follows:
ItemNames=["Name","Gender"]
                     * 
                     */
                    std::vector<std::string> GetItemNames() const;

                    /**
                     * 设置The names of the fields you want to return for the structured information recognition.
For example, if you want to return only the recognition result of the "Name" and "Gender" fields, set this parameter as follows:
ItemNames=["Name","Gender"]
                     * @param _itemNames The names of the fields you want to return for the structured information recognition.
For example, if you want to return only the recognition result of the "Name" and "Gender" fields, set this parameter as follows:
ItemNames=["Name","Gender"]
                     * 
                     */
                    void SetItemNames(const std::vector<std::string>& _itemNames);

                    /**
                     * 判断参数 ItemNames 是否已赋值
                     * @return ItemNames 是否已赋值
                     * 
                     */
                    bool ItemNamesHasBeenSet() const;

                    /**
                     * 获取Whether to enable recognition of all fields.
                     * @return ReturnFullText Whether to enable recognition of all fields.
                     * 
                     */
                    bool GetReturnFullText() const;

                    /**
                     * 设置Whether to enable recognition of all fields.
                     * @param _returnFullText Whether to enable recognition of all fields.
                     * 
                     */
                    void SetReturnFullText(const bool& _returnFullText);

                    /**
                     * 判断参数 ReturnFullText 是否已赋值
                     * @return ReturnFullText 是否已赋值
                     * 
                     */
                    bool ReturnFullTextHasBeenSet() const;

                    /**
                     * 获取Configuration ID support: General 
-- General scenarios; InvoiceEng 
-- Ocean bill of lading, international invoice template; 
-- Ocean shipment order template; WayBillEng 
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
                     * @return ConfigId Configuration ID support: General 
-- General scenarios; InvoiceEng 
-- Ocean bill of lading, international invoice template; 
-- Ocean shipment order template; WayBillEng 
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Configuration ID support: General 
-- General scenarios; InvoiceEng 
-- Ocean bill of lading, international invoice template; 
-- Ocean shipment order template; WayBillEng 
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
                     * @param _configId Configuration ID support: General 
-- General scenarios; InvoiceEng 
-- Ocean bill of lading, international invoice template; 
-- Ocean shipment order template; WayBillEng 
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Enable recognition of coordinate values in full-text fields
                     * @return EnableCoord Enable recognition of coordinate values in full-text fields
                     * 
                     */
                    bool GetEnableCoord() const;

                    /**
                     * 设置Enable recognition of coordinate values in full-text fields
                     * @param _enableCoord Enable recognition of coordinate values in full-text fields
                     * 
                     */
                    void SetEnableCoord(const bool& _enableCoord);

                    /**
                     * 判断参数 EnableCoord 是否已赋值
                     * @return EnableCoord 是否已赋值
                     * 
                     */
                    bool EnableCoordHasBeenSet() const;

                private:

                    /**
                     * The URL of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The Base64-encoded value of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * The number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF `. Default value: `1`.
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * The names of the fields you want to return for the structured information recognition.
For example, if you want to return only the recognition result of the "Name" and "Gender" fields, set this parameter as follows:
ItemNames=["Name","Gender"]
                     */
                    std::vector<std::string> m_itemNames;
                    bool m_itemNamesHasBeenSet;

                    /**
                     * Whether to enable recognition of all fields.
                     */
                    bool m_returnFullText;
                    bool m_returnFullTextHasBeenSet;

                    /**
                     * Configuration ID support: General 
-- General scenarios; InvoiceEng 
-- Ocean bill of lading, international invoice template; 
-- Ocean shipment order template; WayBillEng 
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Enable recognition of coordinate values in full-text fields
                     */
                    bool m_enableCoord;
                    bool m_enableCoordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SMARTSTRUCTURALPROREQUEST_H_
