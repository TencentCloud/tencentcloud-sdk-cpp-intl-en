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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRREQUEST_H_

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
                * RecognizeThaiIDCardOCR request structure.
                */
                class RecognizeThaiIDCardOCRRequest : public AbstractModel
                {
                public:
                    RecognizeThaiIDCardOCRRequest();
                    ~RecognizeThaiIDCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64-encoded value of an image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, `ImageUrl` is used.
                     * @return ImageBase64 The Base64-encoded value of an image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, `ImageUrl` is used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64-encoded value of an image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, `ImageUrl` is used.
                     * @param _imageBase64 The Base64-encoded value of an image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, `ImageUrl` is used.
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
                     * 获取Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @return BackImageBase64 Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * 
                     */
                    std::string GetBackImageBase64() const;

                    /**
                     * 设置Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @param _backImageBase64 Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
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
                     * 获取The URL of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
                     * @return ImageUrl The URL of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
                     * @param _imageUrl The URL of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
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
                     * 获取The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * @return BackImageUrl The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * 
                     */
                    std::string GetBackImageUrl() const;

                    /**
                     * 设置The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * @param _backImageUrl The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
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
                     * 获取Whether to crop the profile photo. The default value is `false`, meaning not to return the Base64-encoded value of the profile photo on the Thai identity card.
When this parameter is set to `true`, the Base64-encoded value of the profile photo on the Thai identity card after rotation correction is returned.
                     * @return CropPortrait Whether to crop the profile photo. The default value is `false`, meaning not to return the Base64-encoded value of the profile photo on the Thai identity card.
When this parameter is set to `true`, the Base64-encoded value of the profile photo on the Thai identity card after rotation correction is returned.
                     * 
                     */
                    bool GetCropPortrait() const;

                    /**
                     * 设置Whether to crop the profile photo. The default value is `false`, meaning not to return the Base64-encoded value of the profile photo on the Thai identity card.
When this parameter is set to `true`, the Base64-encoded value of the profile photo on the Thai identity card after rotation correction is returned.
                     * @param _cropPortrait Whether to crop the profile photo. The default value is `false`, meaning not to return the Base64-encoded value of the profile photo on the Thai identity card.
When this parameter is set to `true`, the Base64-encoded value of the profile photo on the Thai identity card after rotation correction is returned.
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
                     * The Base64-encoded value of an image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, `ImageUrl` is used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     */
                    std::string m_backImageBase64;
                    bool m_backImageBase64HasBeenSet;

                    /**
                     * The URL of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     */
                    std::string m_backImageUrl;
                    bool m_backImageUrlHasBeenSet;

                    /**
                     * Whether to crop the profile photo. The default value is `false`, meaning not to return the Base64-encoded value of the profile photo on the Thai identity card.
When this parameter is set to `true`, the Base64-encoded value of the profile photo on the Thai identity card after rotation correction is returned.
                     */
                    bool m_cropPortrait;
                    bool m_cropPortraitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRREQUEST_H_
