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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRREQUEST_H_

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
                * HmtResidentPermitOCR request structure.
                */
                class HmtResidentPermitOCRRequest : public AbstractModel
                {
                public:
                    HmtResidentPermitOCRRequest();
                    ~HmtResidentPermitOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after the downloaded image is Base64-encoded. The image download must complete within 3 seconds.Either ImageUrl or ImageBase64 must be provided. If both are provided, only ImageUrl is used.</p>
                     * @return ImageBase64 <p>Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after the downloaded image is Base64-encoded. The image download must complete within 3 seconds.Either ImageUrl or ImageBase64 must be provided. If both are provided, only ImageUrl is used.</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after the downloaded image is Base64-encoded. The image download must complete within 3 seconds.Either ImageUrl or ImageBase64 must be provided. If both are provided, only ImageUrl is used.</p>
                     * @param _imageBase64 <p>Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after the downloaded image is Base64-encoded. The image download must complete within 3 seconds.Either ImageUrl or ImageBase64 must be provided. If both are provided, only ImageUrl is used.</p>
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
                     * 获取<p>Image URL.Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after Base64 encoding. Image download time no more than 3 seconds. URLs stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. Speed and stability may be impacted for URLs not stored in Tencent Cloud.</p>
                     * @return ImageUrl <p>Image URL.Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after Base64 encoding. Image download time no more than 3 seconds. URLs stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. Speed and stability may be impacted for URLs not stored in Tencent Cloud.</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>Image URL.Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after Base64 encoding. Image download time no more than 3 seconds. URLs stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. Speed and stability may be impacted for URLs not stored in Tencent Cloud.</p>
                     * @param _imageUrl <p>Image URL.Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after Base64 encoding. Image download time no more than 3 seconds. URLs stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. Speed and stability may be impacted for URLs not stored in Tencent Cloud.</p>
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
                     * 获取<p>FRONT: the side with a photo (portrait side),<br>BACK: the side without a photo (national emblem side),<br>if this parameter is left empty or incorrect, the front or back side is automatically determined for you.</p>
                     * @return CardSide <p>FRONT: the side with a photo (portrait side),<br>BACK: the side without a photo (national emblem side),<br>if this parameter is left empty or incorrect, the front or back side is automatically determined for you.</p>
                     * 
                     */
                    std::string GetCardSide() const;

                    /**
                     * 设置<p>FRONT: the side with a photo (portrait side),<br>BACK: the side without a photo (national emblem side),<br>if this parameter is left empty or incorrect, the front or back side is automatically determined for you.</p>
                     * @param _cardSide <p>FRONT: the side with a photo (portrait side),<br>BACK: the side without a photo (national emblem side),<br>if this parameter is left empty or incorrect, the front or back side is automatically determined for you.</p>
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
                     * 获取Whether to return the portrait image and position coordinates
                     * @return CropPortrait Whether to return the portrait image and position coordinates
                     * 
                     */
                    bool GetCropPortrait() const;

                    /**
                     * 设置Whether to return the portrait image and position coordinates
                     * @param _cropPortrait Whether to return the portrait image and position coordinates
                     * 
                     */
                    void SetCropPortrait(const bool& _cropPortrait);

                    /**
                     * 判断参数 CropPortrait 是否已赋值
                     * @return CropPortrait 是否已赋值
                     * 
                     */
                    bool CropPortraitHasBeenSet() const;

                private:

                    /**
                     * <p>Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after the downloaded image is Base64-encoded. The image download must complete within 3 seconds.Either ImageUrl or ImageBase64 must be provided. If both are provided, only ImageUrl is used.</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>Image URL.Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: no more than 7M after Base64 encoding. Image download time no more than 3 seconds. URLs stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. Speed and stability may be impacted for URLs not stored in Tencent Cloud.</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>FRONT: the side with a photo (portrait side),<br>BACK: the side without a photo (national emblem side),<br>if this parameter is left empty or incorrect, the front or back side is automatically determined for you.</p>
                     */
                    std::string m_cardSide;
                    bool m_cardSideHasBeenSet;

                    /**
                     * Whether to return the portrait image and position coordinates
                     */
                    bool m_cropPortrait;
                    bool m_cropPortraitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRREQUEST_H_
