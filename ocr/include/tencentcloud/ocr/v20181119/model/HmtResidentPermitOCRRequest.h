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
                     * 获取`FRONT`: The side with the profile photo.
`BACK`: The side with the national emblem.
If this parameter is not specified, the system will automatically determine the ID card side.
                     * @return CardSide `FRONT`: The side with the profile photo.
`BACK`: The side with the national emblem.
If this parameter is not specified, the system will automatically determine the ID card side.
                     * 
                     */
                    std::string GetCardSide() const;

                    /**
                     * 设置`FRONT`: The side with the profile photo.
`BACK`: The side with the national emblem.
If this parameter is not specified, the system will automatically determine the ID card side.
                     * @param _cardSide `FRONT`: The side with the profile photo.
`BACK`: The side with the national emblem.
If this parameter is not specified, the system will automatically determine the ID card side.
                     * 
                     */
                    void SetCardSide(const std::string& _cardSide);

                    /**
                     * 判断参数 CardSide 是否已赋值
                     * @return CardSide 是否已赋值
                     * 
                     */
                    bool CardSideHasBeenSet() const;

                private:

                    /**
                     * The Base64-encoded value of the image.
Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported.
Supported image size: The downloaded image after Base64 encoding can be up to 7 MB. The download time of the image cannot exceed 3s.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` is used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

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
                     * `FRONT`: The side with the profile photo.
`BACK`: The side with the national emblem.
If this parameter is not specified, the system will automatically determine the ID card side.
                     */
                    std::string m_cardSide;
                    bool m_cardSideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRREQUEST_H_
