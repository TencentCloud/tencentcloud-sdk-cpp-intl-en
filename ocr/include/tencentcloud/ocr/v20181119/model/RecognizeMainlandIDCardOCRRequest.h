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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMAINLANDIDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMAINLANDIDCARDOCRREQUEST_H_

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
                * RecognizeMainlandIDCardOCR request structure.
                */
                class RecognizeMainlandIDCardOCRRequest : public AbstractModel
                {
                public:
                    RecognizeMainlandIDCardOCRRequest();
                    ~RecognizeMainlandIDCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @return ImageBase64 The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @param _imageBase64 The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
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
                     * 获取The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     * @return ImageUrl The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     * @param _imageUrl The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
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
                     * 获取FRONT: The side of the ID card with the photo (portrait side), BACK: The side of the ID card with the national emblem (national emblem side). If this parameter is not filled in, the front and back of the ID card will be automatically determined for you.
                     * @return CardSide FRONT: The side of the ID card with the photo (portrait side), BACK: The side of the ID card with the national emblem (national emblem side). If this parameter is not filled in, the front and back of the ID card will be automatically determined for you.
                     * 
                     */
                    std::string GetCardSide() const;

                    /**
                     * 设置FRONT: The side of the ID card with the photo (portrait side), BACK: The side of the ID card with the national emblem (national emblem side). If this parameter is not filled in, the front and back of the ID card will be automatically determined for you.
                     * @param _cardSide FRONT: The side of the ID card with the photo (portrait side), BACK: The side of the ID card with the national emblem (national emblem side). If this parameter is not filled in, the front and back of the ID card will be automatically determined for you.
                     * 
                     */
                    void SetCardSide(const std::string& _cardSide);

                    /**
                     * 判断参数 CardSide 是否已赋值
                     * @return CardSide 是否已赋值
                     * 
                     */
                    bool CardSideHasBeenSet() const;

                    /**
                     * 获取Whether to return the ID card portrait, the default is false
                     * @return CropPortrait Whether to return the ID card portrait, the default is false
                     * 
                     */
                    bool GetCropPortrait() const;

                    /**
                     * 设置Whether to return the ID card portrait, the default is false
                     * @param _cropPortrait Whether to return the ID card portrait, the default is false
                     * 
                     */
                    void SetCropPortrait(const bool& _cropPortrait);

                    /**
                     * 判断参数 CropPortrait 是否已赋值
                     * @return CropPortrait 是否已赋值
                     * 
                     */
                    bool CropPortraitHasBeenSet() const;

                    /**
                     * 获取Whether to enable ID card photo cropping (removing excess edges outside the ID, automatically correcting the shooting angle), the default value is false
                     * @return CropIdCard Whether to enable ID card photo cropping (removing excess edges outside the ID, automatically correcting the shooting angle), the default value is false
                     * 
                     */
                    bool GetCropIdCard() const;

                    /**
                     * 设置Whether to enable ID card photo cropping (removing excess edges outside the ID, automatically correcting the shooting angle), the default value is false
                     * @param _cropIdCard Whether to enable ID card photo cropping (removing excess edges outside the ID, automatically correcting the shooting angle), the default value is false
                     * 
                     */
                    void SetCropIdCard(const bool& _cropIdCard);

                    /**
                     * 判断参数 CropIdCard 是否已赋值
                     * @return CropIdCard 是否已赋值
                     * 
                     */
                    bool CropIdCardHasBeenSet() const;

                private:

                    /**
                     * The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * FRONT: The side of the ID card with the photo (portrait side), BACK: The side of the ID card with the national emblem (national emblem side). If this parameter is not filled in, the front and back of the ID card will be automatically determined for you.
                     */
                    std::string m_cardSide;
                    bool m_cardSideHasBeenSet;

                    /**
                     * Whether to return the ID card portrait, the default is false
                     */
                    bool m_cropPortrait;
                    bool m_cropPortraitHasBeenSet;

                    /**
                     * Whether to enable ID card photo cropping (removing excess edges outside the ID, automatically correcting the shooting angle), the default value is false
                     */
                    bool m_cropIdCard;
                    bool m_cropIdCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMAINLANDIDCARDOCRREQUEST_H_
