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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ConfigAdvanced.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ExtractDocMulti request structure.
                */
                class ExtractDocMultiRequest : public AbstractModel
                {
                public:
                    ExtractDocMultiRequest();
                    ~ExtractDocMultiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Url address of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after Base64 encoding. image download time should not exceed 3 seconds. supported image pixels: between 20-10000px. images stored in tencent cloud's Url ensure higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     * @return ImageUrl The Url address of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after Base64 encoding. image download time should not exceed 3 seconds. supported image pixels: between 20-10000px. images stored in tencent cloud's Url ensure higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The Url address of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after Base64 encoding. image download time should not exceed 3 seconds. supported image pixels: between 20-10000px. images stored in tencent cloud's Url ensure higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     * @param _imageUrl The Url address of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after Base64 encoding. image download time should not exceed 3 seconds. supported image pixels: between 20-10000px. images stored in tencent cloud's Url ensure higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
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
                     * 获取The Base64 value of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after encoding the downloaded image with Base64. image download time: no more than 3 seconds. supported image pixels: between 20-10000px. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     * @return ImageBase64 The Base64 value of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after encoding the downloaded image with Base64. image download time: no more than 3 seconds. supported image pixels: between 20-10000px. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64 value of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after encoding the downloaded image with Base64. image download time: no more than 3 seconds. supported image pixels: between 20-10000px. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     * @param _imageBase64 The Base64 value of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after encoding the downloaded image with Base64. image download time: no more than 3 seconds. supported image pixels: between 20-10000px. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
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
                     * 获取Specifies the page number of the PDF to be recognized. only single page recognition is supported. valid when uploading a PDF file with the IsPdf parameter set to true. default value is the first 3 pages.
                     * @return PdfPageNumber Specifies the page number of the PDF to be recognized. only single page recognition is supported. valid when uploading a PDF file with the IsPdf parameter set to true. default value is the first 3 pages.
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置Specifies the page number of the PDF to be recognized. only single page recognition is supported. valid when uploading a PDF file with the IsPdf parameter set to true. default value is the first 3 pages.
                     * @param _pdfPageNumber Specifies the page number of the PDF to be recognized. only single page recognition is supported. valid when uploading a PDF file with the IsPdf parameter set to true. default value is the first 3 pages.
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
                     * 获取Specifies the field names to be returned by the customized structuring feature. for example, if the customer wants to add the recognition result of two fields, name and gender, manually input ItemNames=["name","gender"].
                     * @return ItemNames Specifies the field names to be returned by the customized structuring feature. for example, if the customer wants to add the recognition result of two fields, name and gender, manually input ItemNames=["name","gender"].
                     * 
                     */
                    std::vector<std::string> GetItemNames() const;

                    /**
                     * 设置Specifies the field names to be returned by the customized structuring feature. for example, if the customer wants to add the recognition result of two fields, name and gender, manually input ItemNames=["name","gender"].
                     * @param _itemNames Specifies the field names to be returned by the customized structuring feature. for example, if the customer wants to add the recognition result of two fields, name and gender, manually input ItemNames=["name","gender"].
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
                     * 获取true: only custom field.
False: default value field + custom field.
Default true.
                     * @return ItemNamesShowMode true: only custom field.
False: default value field + custom field.
Default true.
                     * 
                     */
                    bool GetItemNamesShowMode() const;

                    /**
                     * 设置true: only custom field.
False: default value field + custom field.
Default true.
                     * @param _itemNamesShowMode true: only custom field.
False: default value field + custom field.
Default true.
                     * 
                     */
                    void SetItemNamesShowMode(const bool& _itemNamesShowMode);

                    /**
                     * 判断参数 ItemNamesShowMode 是否已赋值
                     * @return ItemNamesShowMode 是否已赋值
                     * 
                     */
                    bool ItemNamesShowModeHasBeenSet() const;

                    /**
                     * 获取Whether the full-text field recognition is enabled.
                     * @return ReturnFullText Whether the full-text field recognition is enabled.
                     * 
                     */
                    bool GetReturnFullText() const;

                    /**
                     * 设置Whether the full-text field recognition is enabled.
                     * @param _returnFullText Whether the full-text field recognition is enabled.
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
                     * 获取Configuration ID support: 
-- General
-- InvoiceEng
-- WayBillEng
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
-- BillOfLading
-- EntrustmentBook
-- Statement
-- BookingConfirmation
-- AirWayBill
-- Table
-- SteelLabel
-- CarInsurance
-- MultiRealEstateCertificate
-- MultiRealEstateMaterial
-- HongKongUtilityBill
-- OverseasCheques
-- RegistrationCertificate
-- GridPhoto
-- SignaturePage
                     * @return ConfigId Configuration ID support: 
-- General
-- InvoiceEng
-- WayBillEng
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
-- BillOfLading
-- EntrustmentBook
-- Statement
-- BookingConfirmation
-- AirWayBill
-- Table
-- SteelLabel
-- CarInsurance
-- MultiRealEstateCertificate
-- MultiRealEstateMaterial
-- HongKongUtilityBill
-- OverseasCheques
-- RegistrationCertificate
-- GridPhoto
-- SignaturePage
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Configuration ID support: 
-- General
-- InvoiceEng
-- WayBillEng
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
-- BillOfLading
-- EntrustmentBook
-- Statement
-- BookingConfirmation
-- AirWayBill
-- Table
-- SteelLabel
-- CarInsurance
-- MultiRealEstateCertificate
-- MultiRealEstateMaterial
-- HongKongUtilityBill
-- OverseasCheques
-- RegistrationCertificate
-- GridPhoto
-- SignaturePage
                     * @param _configId Configuration ID support: 
-- General
-- InvoiceEng
-- WayBillEng
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
-- BillOfLading
-- EntrustmentBook
-- Statement
-- BookingConfirmation
-- AirWayBill
-- Table
-- SteelLabel
-- CarInsurance
-- MultiRealEstateCertificate
-- MultiRealEstateMaterial
-- HongKongUtilityBill
-- OverseasCheques
-- RegistrationCertificate
-- GridPhoto
-- SignaturePage
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
                     * 获取Whether the full-text field coordinate value recognition is enabled.
                     * @return EnableCoord Whether the full-text field coordinate value recognition is enabled.
                     * 
                     */
                    bool GetEnableCoord() const;

                    /**
                     * 设置Whether the full-text field coordinate value recognition is enabled.
                     * @param _enableCoord Whether the full-text field coordinate value recognition is enabled.
                     * 
                     */
                    void SetEnableCoord(const bool& _enableCoord);

                    /**
                     * 判断参数 EnableCoord 是否已赋值
                     * @return EnableCoord 是否已赋值
                     * 
                     */
                    bool EnableCoordHasBeenSet() const;

                    /**
                     * 获取Whether parent-child key recognition is enabled. the option is selected by default.
                     * @return OutputParentKey Whether parent-child key recognition is enabled. the option is selected by default.
                     * 
                     */
                    bool GetOutputParentKey() const;

                    /**
                     * 设置Whether parent-child key recognition is enabled. the option is selected by default.
                     * @param _outputParentKey Whether parent-child key recognition is enabled. the option is selected by default.
                     * 
                     */
                    void SetOutputParentKey(const bool& _outputParentKey);

                    /**
                     * 判断参数 OutputParentKey 是否已赋值
                     * @return OutputParentKey 是否已赋值
                     * 
                     */
                    bool OutputParentKeyHasBeenSet() const;

                    /**
                     * 获取Single attribute configuration of a template.
                     * @return ConfigAdvanced Single attribute configuration of a template.
                     * 
                     */
                    ConfigAdvanced GetConfigAdvanced() const;

                    /**
                     * 设置Single attribute configuration of a template.
                     * @param _configAdvanced Single attribute configuration of a template.
                     * 
                     */
                    void SetConfigAdvanced(const ConfigAdvanced& _configAdvanced);

                    /**
                     * 判断参数 ConfigAdvanced 是否已赋值
                     * @return ConfigAdvanced 是否已赋值
                     * 
                     */
                    bool ConfigAdvancedHasBeenSet() const;

                    /**
                     * 获取When cn, the added key is chinese.  
When set to en, the added key is english.
                     * @return OutputLanguage When cn, the added key is chinese.  
When set to en, the added key is english.
                     * 
                     */
                    std::string GetOutputLanguage() const;

                    /**
                     * 设置When cn, the added key is chinese.  
When set to en, the added key is english.
                     * @param _outputLanguage When cn, the added key is chinese.  
When set to en, the added key is english.
                     * 
                     */
                    void SetOutputLanguage(const std::string& _outputLanguage);

                    /**
                     * 判断参数 OutputLanguage 是否已赋值
                     * @return OutputLanguage 是否已赋值
                     * 
                     */
                    bool OutputLanguageHasBeenSet() const;

                private:

                    /**
                     * The Url address of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after Base64 encoding. image download time should not exceed 3 seconds. supported image pixels: between 20-10000px. images stored in tencent cloud's Url ensure higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The Base64 value of the image. supported image formats: PNG, JPG, JPEG, WORD, EXCEL. GIF format is not currently supported. supported image size: no more than 10M after encoding the downloaded image with Base64. image download time: no more than 3 seconds. supported image pixels: between 20-10000px. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Specifies the page number of the PDF to be recognized. only single page recognition is supported. valid when uploading a PDF file with the IsPdf parameter set to true. default value is the first 3 pages.
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * Specifies the field names to be returned by the customized structuring feature. for example, if the customer wants to add the recognition result of two fields, name and gender, manually input ItemNames=["name","gender"].
                     */
                    std::vector<std::string> m_itemNames;
                    bool m_itemNamesHasBeenSet;

                    /**
                     * true: only custom field.
False: default value field + custom field.
Default true.
                     */
                    bool m_itemNamesShowMode;
                    bool m_itemNamesShowModeHasBeenSet;

                    /**
                     * Whether the full-text field recognition is enabled.
                     */
                    bool m_returnFullText;
                    bool m_returnFullTextHasBeenSet;

                    /**
                     * Configuration ID support: 
-- General
-- InvoiceEng
-- WayBillEng
-- CustomsDeclaration
-- WeightNote
-- MedicalMeter
-- BillOfLading
-- EntrustmentBook
-- Statement
-- BookingConfirmation
-- AirWayBill
-- Table
-- SteelLabel
-- CarInsurance
-- MultiRealEstateCertificate
-- MultiRealEstateMaterial
-- HongKongUtilityBill
-- OverseasCheques
-- RegistrationCertificate
-- GridPhoto
-- SignaturePage
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Whether the full-text field coordinate value recognition is enabled.
                     */
                    bool m_enableCoord;
                    bool m_enableCoordHasBeenSet;

                    /**
                     * Whether parent-child key recognition is enabled. the option is selected by default.
                     */
                    bool m_outputParentKey;
                    bool m_outputParentKeyHasBeenSet;

                    /**
                     * Single attribute configuration of a template.
                     */
                    ConfigAdvanced m_configAdvanced;
                    bool m_configAdvancedHasBeenSet;

                    /**
                     * When cn, the added key is chinese.  
When set to en, the added key is english.
                     */
                    std::string m_outputLanguage;
                    bool m_outputLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_
