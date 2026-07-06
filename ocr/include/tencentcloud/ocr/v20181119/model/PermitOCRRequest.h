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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRREQUEST_H_

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
                * PermitOCR request structure.
                */
                class PermitOCRRequest : public AbstractModel
                {
                public:
                    PermitOCRRequest();
                    ~PermitOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64-encoded value of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl is used.
                     * @return ImageBase64 The Base64-encoded value of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl is used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64-encoded value of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl is used.
                     * @param _imageBase64 The Base64-encoded value of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl is used.
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
                     * 获取The URL of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. We recommend that you store the image in Tencent Cloud for higher download speed and stability. The download speed and stability of images stored outside Tencent Cloud may be compromised.
                     * @return ImageUrl The URL of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. We recommend that you store the image in Tencent Cloud for higher download speed and stability. The download speed and stability of images stored outside Tencent Cloud may be compromised.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. We recommend that you store the image in Tencent Cloud for higher download speed and stability. The download speed and stability of images stored outside Tencent Cloud may be compromised.
                     * @param _imageUrl The URL of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. We recommend that you store the image in Tencent Cloud for higher download speed and stability. The download speed and stability of images stored outside Tencent Cloud may be compromised.
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
                     * 获取Whether to return the ID photo. The default value is false.
                     * @return CropPortrait Whether to return the ID photo. The default value is false.
                     * 
                     */
                    bool GetCropPortrait() const;

                    /**
                     * 设置Whether to return the ID photo. The default value is false.
                     * @param _cropPortrait Whether to return the ID photo. The default value is false.
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
                     * The Base64-encoded value of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only ImageUrl is used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * The URL of the image. Supported image formats: PNG, JPG, and JPEG. GIF is currently not supported. Supported image size: The downloaded image after Base64 encoding cannot exceed 7 MB. The download time of the image cannot exceed 3 seconds. We recommend that you store the image in Tencent Cloud for higher download speed and stability. The download speed and stability of images stored outside Tencent Cloud may be compromised.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Whether to return the ID photo. The default value is false.
                     */
                    bool m_cropPortrait;
                    bool m_cropPortraitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRREQUEST_H_
