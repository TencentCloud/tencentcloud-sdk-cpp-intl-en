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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_APPLYOCRTOKENREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_APPLYOCRTOKENREQUEST_H_

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
                * ApplyOcrToken request structure.
                */
                class ApplyOcrTokenRequest : public AbstractModel
                {
                public:
                    ApplyOcrTokenRequest();
                    ~ApplyOcrTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Country code. ISO 3166-1 Alpha-3 country/region code standard.
                     * @return Nationality Country code. ISO 3166-1 Alpha-3 country/region code standard.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Country code. ISO 3166-1 Alpha-3 country/region code standard.
                     * @param _nationality Country code. ISO 3166-1 Alpha-3 country/region code standard.
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Supported countries/regions and document types:

Mainland China: ID_CARD, PERMIT
Hong Kong: ID_CARD
Macao: ID_CARD
Hong Kong/Macao/Taiwan: MAINLAND_PERMIT, HMT_RESIDENT_PERMIT
Thailand: ID_CARD, THA_PINK_CARD
Indonesia: ID_CARD
Malaysia: ID_CARD
Singapore: ID_CARD
Philippines: PHL_UMID, PHL_VOTE_ID, PHL_TIN_ID, PHL_SSS_ID, DRIVING_LICENSE
Any country/region: PASSPORT
                     * @return CardType Supported countries/regions and document types:

Mainland China: ID_CARD, PERMIT
Hong Kong: ID_CARD
Macao: ID_CARD
Hong Kong/Macao/Taiwan: MAINLAND_PERMIT, HMT_RESIDENT_PERMIT
Thailand: ID_CARD, THA_PINK_CARD
Indonesia: ID_CARD
Malaysia: ID_CARD
Singapore: ID_CARD
Philippines: PHL_UMID, PHL_VOTE_ID, PHL_TIN_ID, PHL_SSS_ID, DRIVING_LICENSE
Any country/region: PASSPORT
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 设置Supported countries/regions and document types:

Mainland China: ID_CARD, PERMIT
Hong Kong: ID_CARD
Macao: ID_CARD
Hong Kong/Macao/Taiwan: MAINLAND_PERMIT, HMT_RESIDENT_PERMIT
Thailand: ID_CARD, THA_PINK_CARD
Indonesia: ID_CARD
Malaysia: ID_CARD
Singapore: ID_CARD
Philippines: PHL_UMID, PHL_VOTE_ID, PHL_TIN_ID, PHL_SSS_ID, DRIVING_LICENSE
Any country/region: PASSPORT
                     * @param _cardType Supported countries/regions and document types:

Mainland China: ID_CARD, PERMIT
Hong Kong: ID_CARD
Macao: ID_CARD
Hong Kong/Macao/Taiwan: MAINLAND_PERMIT, HMT_RESIDENT_PERMIT
Thailand: ID_CARD, THA_PINK_CARD
Indonesia: ID_CARD
Malaysia: ID_CARD
Singapore: ID_CARD
Philippines: PHL_UMID, PHL_VOTE_ID, PHL_TIN_ID, PHL_SSS_ID, DRIVING_LICENSE
Any country/region: PASSPORT
                     * 
                     */
                    void SetCardType(const std::string& _cardType);

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取SDK-generated device-related encryption configuration information.
                     * @return EncryptedConfig SDK-generated device-related encryption configuration information.
                     * 
                     */
                    std::string GetEncryptedConfig() const;

                    /**
                     * 设置SDK-generated device-related encryption configuration information.
                     * @param _encryptedConfig SDK-generated device-related encryption configuration information.
                     * 
                     */
                    void SetEncryptedConfig(const std::string& _encryptedConfig);

                    /**
                     * 判断参数 EncryptedConfig 是否已赋值
                     * @return EncryptedConfig 是否已赋值
                     * 
                     */
                    bool EncryptedConfigHasBeenSet() const;

                    /**
                     * 获取<p>Whether to extract the portrait image from the document. false by default</p><p>Default value: false</p>
                     * @return ReturnHeadImage <p>Whether to extract the portrait image from the document. false by default</p><p>Default value: false</p>
                     * 
                     */
                    bool GetReturnHeadImage() const;

                    /**
                     * 设置<p>Whether to extract the portrait image from the document. false by default</p><p>Default value: false</p>
                     * @param _returnHeadImage <p>Whether to extract the portrait image from the document. false by default</p><p>Default value: false</p>
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
                     * 获取<p>Maximum number of token retries</p><p>Value range: [1, 5]</p><p>Default value: 3</p>
                     * @return RetryLimit <p>Maximum number of token retries</p><p>Value range: [1, 5]</p><p>Default value: 3</p>
                     * 
                     */
                    int64_t GetRetryLimit() const;

                    /**
                     * 设置<p>Maximum number of token retries</p><p>Value range: [1, 5]</p><p>Default value: 3</p>
                     * @param _retryLimit <p>Maximum number of token retries</p><p>Value range: [1, 5]</p><p>Default value: 3</p>
                     * 
                     */
                    void SetRetryLimit(const int64_t& _retryLimit);

                    /**
                     * 判断参数 RetryLimit 是否已赋值
                     * @return RetryLimit 是否已赋值
                     * 
                     */
                    bool RetryLimitHasBeenSet() const;

                    /**
                     * 获取<p>SDK capture mode</p><p>Enumeration values:</p><ul><li>OCR_DETECT_MANUAL: Photo recognition mode. The system performs recognition after you tap to take a photo.</li><li>OCR_DETECT_AUTO_MANUAL: Automatic recognition mode. The system recognizes automatically, and you can switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO: Pure automatic recognition mode. The system recognizes automatically, and you cannot switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO_MULTI: Pure automatic recognition mode (multiple images). The system turns on the flash and automatically collects multiple document photos.</li></ul><p>Default value: OCR_DETECT_AUTO_MANUAL</p>
                     * @return OcrModeType <p>SDK capture mode</p><p>Enumeration values:</p><ul><li>OCR_DETECT_MANUAL: Photo recognition mode. The system performs recognition after you tap to take a photo.</li><li>OCR_DETECT_AUTO_MANUAL: Automatic recognition mode. The system recognizes automatically, and you can switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO: Pure automatic recognition mode. The system recognizes automatically, and you cannot switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO_MULTI: Pure automatic recognition mode (multiple images). The system turns on the flash and automatically collects multiple document photos.</li></ul><p>Default value: OCR_DETECT_AUTO_MANUAL</p>
                     * 
                     */
                    std::string GetOcrModeType() const;

                    /**
                     * 设置<p>SDK capture mode</p><p>Enumeration values:</p><ul><li>OCR_DETECT_MANUAL: Photo recognition mode. The system performs recognition after you tap to take a photo.</li><li>OCR_DETECT_AUTO_MANUAL: Automatic recognition mode. The system recognizes automatically, and you can switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO: Pure automatic recognition mode. The system recognizes automatically, and you cannot switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO_MULTI: Pure automatic recognition mode (multiple images). The system turns on the flash and automatically collects multiple document photos.</li></ul><p>Default value: OCR_DETECT_AUTO_MANUAL</p>
                     * @param _ocrModeType <p>SDK capture mode</p><p>Enumeration values:</p><ul><li>OCR_DETECT_MANUAL: Photo recognition mode. The system performs recognition after you tap to take a photo.</li><li>OCR_DETECT_AUTO_MANUAL: Automatic recognition mode. The system recognizes automatically, and you can switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO: Pure automatic recognition mode. The system recognizes automatically, and you cannot switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO_MULTI: Pure automatic recognition mode (multiple images). The system turns on the flash and automatically collects multiple document photos.</li></ul><p>Default value: OCR_DETECT_AUTO_MANUAL</p>
                     * 
                     */
                    void SetOcrModeType(const std::string& _ocrModeType);

                    /**
                     * 判断参数 OcrModeType 是否已赋值
                     * @return OcrModeType 是否已赋值
                     * 
                     */
                    bool OcrModeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to allow uploading gallery images for recognition.</p><p>Default value: true</p>
                     * @return AllowUploadPhoto <p>Whether to allow uploading gallery images for recognition.</p><p>Default value: true</p>
                     * 
                     */
                    bool GetAllowUploadPhoto() const;

                    /**
                     * 设置<p>Whether to allow uploading gallery images for recognition.</p><p>Default value: true</p>
                     * @param _allowUploadPhoto <p>Whether to allow uploading gallery images for recognition.</p><p>Default value: true</p>
                     * 
                     */
                    void SetAllowUploadPhoto(const bool& _allowUploadPhoto);

                    /**
                     * 判断参数 AllowUploadPhoto 是否已赋值
                     * @return AllowUploadPhoto 是否已赋值
                     * 
                     */
                    bool AllowUploadPhotoHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable ID card photo cropping (remove extra edges outside the document and automatically correct the shooting angle). It is false by default and only applicable to Mainland ID cards.</p><p>Default value: false</p>
                     * @return CropIdCard <p>Whether to enable ID card photo cropping (remove extra edges outside the document and automatically correct the shooting angle). It is false by default and only applicable to Mainland ID cards.</p><p>Default value: false</p>
                     * 
                     */
                    bool GetCropIdCard() const;

                    /**
                     * 设置<p>Whether to enable ID card photo cropping (remove extra edges outside the document and automatically correct the shooting angle). It is false by default and only applicable to Mainland ID cards.</p><p>Default value: false</p>
                     * @param _cropIdCard <p>Whether to enable ID card photo cropping (remove extra edges outside the document and automatically correct the shooting angle). It is false by default and only applicable to Mainland ID cards.</p><p>Default value: false</p>
                     * 
                     */
                    void SetCropIdCard(const bool& _cropIdCard);

                    /**
                     * 判断参数 CropIdCard 是否已赋值
                     * @return CropIdCard 是否已赋值
                     * 
                     */
                    bool CropIdCardHasBeenSet() const;

                    /**
                     * 获取<p>SDK-supported recognition version mode</p><p>Enumeration values:</p><ul><li>BASIC: Basic version</li><li>ENHANCED: Enhanced version</li></ul><p>Default value: BASIC</p>
                     * @return SdkVersion <p>SDK-supported recognition version mode</p><p>Enumeration values:</p><ul><li>BASIC: Basic version</li><li>ENHANCED: Enhanced version</li></ul><p>Default value: BASIC</p>
                     * 
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 设置<p>SDK-supported recognition version mode</p><p>Enumeration values:</p><ul><li>BASIC: Basic version</li><li>ENHANCED: Enhanced version</li></ul><p>Default value: BASIC</p>
                     * @param _sdkVersion <p>SDK-supported recognition version mode</p><p>Enumeration values:</p><ul><li>BASIC: Basic version</li><li>ENHANCED: Enhanced version</li></ul><p>Default value: BASIC</p>
                     * 
                     */
                    void SetSdkVersion(const std::string& _sdkVersion);

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     * 
                     */
                    bool SdkVersionHasBeenSet() const;

                    /**
                     * 获取OCR automatic capture mode timeout (ms).
Value range: [5000, 180000].
Default value: 20000.
If the value is below 5000, it is set to 5000; if above 180000, it is set to 180000.
                     * @return OcrAutoDetectTimeout OCR automatic capture mode timeout (ms).
Value range: [5000, 180000].
Default value: 20000.
If the value is below 5000, it is set to 5000; if above 180000, it is set to 180000.
                     * 
                     */
                    int64_t GetOcrAutoDetectTimeout() const;

                    /**
                     * 设置OCR automatic capture mode timeout (ms).
Value range: [5000, 180000].
Default value: 20000.
If the value is below 5000, it is set to 5000; if above 180000, it is set to 180000.
                     * @param _ocrAutoDetectTimeout OCR automatic capture mode timeout (ms).
Value range: [5000, 180000].
Default value: 20000.
If the value is below 5000, it is set to 5000; if above 180000, it is set to 180000.
                     * 
                     */
                    void SetOcrAutoDetectTimeout(const int64_t& _ocrAutoDetectTimeout);

                    /**
                     * 判断参数 OcrAutoDetectTimeout 是否已赋值
                     * @return OcrAutoDetectTimeout 是否已赋值
                     * 
                     */
                    bool OcrAutoDetectTimeoutHasBeenSet() const;

                private:

                    /**
                     * Country code. ISO 3166-1 Alpha-3 country/region code standard.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Supported countries/regions and document types:

Mainland China: ID_CARD, PERMIT
Hong Kong: ID_CARD
Macao: ID_CARD
Hong Kong/Macao/Taiwan: MAINLAND_PERMIT, HMT_RESIDENT_PERMIT
Thailand: ID_CARD, THA_PINK_CARD
Indonesia: ID_CARD
Malaysia: ID_CARD
Singapore: ID_CARD
Philippines: PHL_UMID, PHL_VOTE_ID, PHL_TIN_ID, PHL_SSS_ID, DRIVING_LICENSE
Any country/region: PASSPORT
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * SDK-generated device-related encryption configuration information.
                     */
                    std::string m_encryptedConfig;
                    bool m_encryptedConfigHasBeenSet;

                    /**
                     * <p>Whether to extract the portrait image from the document. false by default</p><p>Default value: false</p>
                     */
                    bool m_returnHeadImage;
                    bool m_returnHeadImageHasBeenSet;

                    /**
                     * <p>Maximum number of token retries</p><p>Value range: [1, 5]</p><p>Default value: 3</p>
                     */
                    int64_t m_retryLimit;
                    bool m_retryLimitHasBeenSet;

                    /**
                     * <p>SDK capture mode</p><p>Enumeration values:</p><ul><li>OCR_DETECT_MANUAL: Photo recognition mode. The system performs recognition after you tap to take a photo.</li><li>OCR_DETECT_AUTO_MANUAL: Automatic recognition mode. The system recognizes automatically, and you can switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO: Pure automatic recognition mode. The system recognizes automatically, and you cannot switch to photo recognition after a recognition timeout.</li><li>OCR_DETECT_AUTO_MULTI: Pure automatic recognition mode (multiple images). The system turns on the flash and automatically collects multiple document photos.</li></ul><p>Default value: OCR_DETECT_AUTO_MANUAL</p>
                     */
                    std::string m_ocrModeType;
                    bool m_ocrModeTypeHasBeenSet;

                    /**
                     * <p>Whether to allow uploading gallery images for recognition.</p><p>Default value: true</p>
                     */
                    bool m_allowUploadPhoto;
                    bool m_allowUploadPhotoHasBeenSet;

                    /**
                     * <p>Whether to enable ID card photo cropping (remove extra edges outside the document and automatically correct the shooting angle). It is false by default and only applicable to Mainland ID cards.</p><p>Default value: false</p>
                     */
                    bool m_cropIdCard;
                    bool m_cropIdCardHasBeenSet;

                    /**
                     * <p>SDK-supported recognition version mode</p><p>Enumeration values:</p><ul><li>BASIC: Basic version</li><li>ENHANCED: Enhanced version</li></ul><p>Default value: BASIC</p>
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

                    /**
                     * OCR automatic capture mode timeout (ms).
Value range: [5000, 180000].
Default value: 20000.
If the value is below 5000, it is set to 5000; if above 180000, it is set to 180000.
                     */
                    int64_t m_ocrAutoDetectTimeout;
                    bool m_ocrAutoDetectTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_APPLYOCRTOKENREQUEST_H_
