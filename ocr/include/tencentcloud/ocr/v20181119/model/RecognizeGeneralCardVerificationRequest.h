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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/CardVerificationConfig.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeGeneralCardVerification request structure.
                */
                class RecognizeGeneralCardVerificationRequest : public AbstractModel
                {
                public:
                    RecognizeGeneralCardVerificationRequest();
                    ~RecognizeGeneralCardVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64 value of the front document image. Supported formats: PNG, JPG, JPEG. The Base64 encoded size shall not exceed 7 MB. One of ImageUrl, ImageBase64, BackImageUrl, BackImageBase64 must be provided. If both URL and Base64 are passed, URL will be used preferentially. Image download timeout is 3 seconds.
                     * @return ImageBase64 Base64 value of the front document image. Supported formats: PNG, JPG, JPEG. The Base64 encoded size shall not exceed 7 MB. One of ImageUrl, ImageBase64, BackImageUrl, BackImageBase64 must be provided. If both URL and Base64 are passed, URL will be used preferentially. Image download timeout is 3 seconds.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64 value of the front document image. Supported formats: PNG, JPG, JPEG. The Base64 encoded size shall not exceed 7 MB. One of ImageUrl, ImageBase64, BackImageUrl, BackImageBase64 must be provided. If both URL and Base64 are passed, URL will be used preferentially. Image download timeout is 3 seconds.
                     * @param _imageBase64 Base64 value of the front document image. Supported formats: PNG, JPG, JPEG. The Base64 encoded size shall not exceed 7 MB. One of ImageUrl, ImageBase64, BackImageUrl, BackImageBase64 must be provided. If both URL and Base64 are passed, URL will be used preferentially. Image download timeout is 3 seconds.
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
                     * 获取URL address of the front side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * @return ImageUrl URL address of the front side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of the front side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * @param _imageUrl URL address of the front side image of the card. Refer to the description of ImageBase64 for image requirements.
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
                     * 获取Base64-encoded value of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * @return BackImageBase64 Base64-encoded value of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * 
                     */
                    std::string GetBackImageBase64() const;

                    /**
                     * 设置Base64-encoded value of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * @param _backImageBase64 Base64-encoded value of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * 
                     */
                    void SetBackImageBase64(const std::string& _backImageBase64);

                    /**
                     * 判断参数 BackImageBase64 是否已赋值
                     * @return BackImageBase64 是否已赋值
                     * 
                     */
                    bool BackImageBase64HasBeenSet() const;

                    /**
                     * 获取URL address of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * @return BackImageUrl URL address of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * 
                     */
                    std::string GetBackImageUrl() const;

                    /**
                     * 设置URL address of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * @param _backImageUrl URL address of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     * 
                     */
                    void SetBackImageUrl(const std::string& _backImageUrl);

                    /**
                     * 判断参数 BackImageUrl 是否已赋值
                     * @return BackImageUrl 是否已赋值
                     * 
                     */
                    bool BackImageUrlHasBeenSet() const;

                    /**
                     * 获取Specifies the target document type for this verification. Each element is a full card type enum in the format {CountryOrRegionCode}_{CardType}, such as THA_ID_CARD and PHL_UMID. For passports, use the single value PASSPORT regardless of the issuing country. Wildcards are supported: * indicates all supported card types, and {CountryCode}_* indicates all card types of a country/region, such as PHL_*. If this parameter is not specified or an empty array is passed, the server performs automatic classification across all supported card types. An unsupported card type returns InvalidParameterValueLimit, and the unsupported values are listed in the error message.
                     * @return CardTypes Specifies the target document type for this verification. Each element is a full card type enum in the format {CountryOrRegionCode}_{CardType}, such as THA_ID_CARD and PHL_UMID. For passports, use the single value PASSPORT regardless of the issuing country. Wildcards are supported: * indicates all supported card types, and {CountryCode}_* indicates all card types of a country/region, such as PHL_*. If this parameter is not specified or an empty array is passed, the server performs automatic classification across all supported card types. An unsupported card type returns InvalidParameterValueLimit, and the unsupported values are listed in the error message.
                     * 
                     */
                    std::vector<std::string> GetCardTypes() const;

                    /**
                     * 设置Specifies the target document type for this verification. Each element is a full card type enum in the format {CountryOrRegionCode}_{CardType}, such as THA_ID_CARD and PHL_UMID. For passports, use the single value PASSPORT regardless of the issuing country. Wildcards are supported: * indicates all supported card types, and {CountryCode}_* indicates all card types of a country/region, such as PHL_*. If this parameter is not specified or an empty array is passed, the server performs automatic classification across all supported card types. An unsupported card type returns InvalidParameterValueLimit, and the unsupported values are listed in the error message.
                     * @param _cardTypes Specifies the target document type for this verification. Each element is a full card type enum in the format {CountryOrRegionCode}_{CardType}, such as THA_ID_CARD and PHL_UMID. For passports, use the single value PASSPORT regardless of the issuing country. Wildcards are supported: * indicates all supported card types, and {CountryCode}_* indicates all card types of a country/region, such as PHL_*. If this parameter is not specified or an empty array is passed, the server performs automatic classification across all supported card types. An unsupported card type returns InvalidParameterValueLimit, and the unsupported values are listed in the error message.
                     * 
                     */
                    void SetCardTypes(const std::vector<std::string>& _cardTypes);

                    /**
                     * 判断参数 CardTypes 是否已赋值
                     * @return CardTypes 是否已赋值
                     * 
                     */
                    bool CardTypesHasBeenSet() const;

                    /**
                     * 获取Whether to return the Base64-encoded portrait image of the card. Default: false.
                     * @return ReturnHeadImage Whether to return the Base64-encoded portrait image of the card. Default: false.
                     * 
                     */
                    bool GetReturnHeadImage() const;

                    /**
                     * 设置Whether to return the Base64-encoded portrait image of the card. Default: false.
                     * @param _returnHeadImage Whether to return the Base64-encoded portrait image of the card. Default: false.
                     * 
                     */
                    void SetReturnHeadImage(const bool& _returnHeadImage);

                    /**
                     * 判断参数 ReturnHeadImage 是否已赋值
                     * @return ReturnHeadImage 是否已赋值
                     * 
                     */
                    bool ReturnHeadImageHasBeenSet() const;

                    /**
                     * 获取Card verification configuration.
                     * @return VerificationConfig Card verification configuration.
                     * 
                     */
                    CardVerificationConfig GetVerificationConfig() const;

                    /**
                     * 设置Card verification configuration.
                     * @param _verificationConfig Card verification configuration.
                     * 
                     */
                    void SetVerificationConfig(const CardVerificationConfig& _verificationConfig);

                    /**
                     * 判断参数 VerificationConfig 是否已赋值
                     * @return VerificationConfig 是否已赋值
                     * 
                     */
                    bool VerificationConfigHasBeenSet() const;

                private:

                    /**
                     * Base64 value of the front document image. Supported formats: PNG, JPG, JPEG. The Base64 encoded size shall not exceed 7 MB. One of ImageUrl, ImageBase64, BackImageUrl, BackImageBase64 must be provided. If both URL and Base64 are passed, URL will be used preferentially. Image download timeout is 3 seconds.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * URL address of the front side image of the card. Refer to the description of ImageBase64 for image requirements.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Base64-encoded value of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     */
                    std::string m_backImageBase64;
                    bool m_backImageBase64HasBeenSet;

                    /**
                     * URL address of the back side image of the card. Refer to the description of ImageBase64 for image requirements.
                     */
                    std::string m_backImageUrl;
                    bool m_backImageUrlHasBeenSet;

                    /**
                     * Specifies the target document type for this verification. Each element is a full card type enum in the format {CountryOrRegionCode}_{CardType}, such as THA_ID_CARD and PHL_UMID. For passports, use the single value PASSPORT regardless of the issuing country. Wildcards are supported: * indicates all supported card types, and {CountryCode}_* indicates all card types of a country/region, such as PHL_*. If this parameter is not specified or an empty array is passed, the server performs automatic classification across all supported card types. An unsupported card type returns InvalidParameterValueLimit, and the unsupported values are listed in the error message.
                     */
                    std::vector<std::string> m_cardTypes;
                    bool m_cardTypesHasBeenSet;

                    /**
                     * Whether to return the Base64-encoded portrait image of the card. Default: false.
                     */
                    bool m_returnHeadImage;
                    bool m_returnHeadImageHasBeenSet;

                    /**
                     * Card verification configuration.
                     */
                    CardVerificationConfig m_verificationConfig;
                    bool m_verificationConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDVERIFICATIONREQUEST_H_
