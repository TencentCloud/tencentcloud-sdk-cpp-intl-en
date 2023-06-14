/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRREQUEST_H_

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
                * HKIDCardOCR request structure.
                */
                class HKIDCardOCRRequest : public AbstractModel
                {
                public:
                    HKIDCardOCRRequest();
                    ~HKIDCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to check for authenticity.
                     * @return DetectFake Whether to check for authenticity.
                     * 
                     */
                    bool GetDetectFake() const;

                    /**
                     * 设置Whether to check for authenticity.
                     * @param _detectFake Whether to check for authenticity.
                     * 
                     */
                    void SetDetectFake(const bool& _detectFake);

                    /**
                     * 判断参数 DetectFake 是否已赋值
                     * @return DetectFake 是否已赋值
                     * 
                     */
                    bool DetectFakeHasBeenSet() const;

                    /**
                     * 获取Whether to return identity photo.
                     * @return ReturnHeadImage Whether to return identity photo.
                     * 
                     */
                    bool GetReturnHeadImage() const;

                    /**
                     * 设置Whether to return identity photo.
                     * @param _returnHeadImage Whether to return identity photo.
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
                     * 获取Base64 string of the image
Supported image formats: PNG, JPG, JPEG. GIF is not supported yet.
Supported image size: The downloaded image cannot exceed 7 MB after being Base64-encoded, and it cannot take longer than 3 seconds to download the image.
                     * @return ImageBase64 Base64 string of the image
Supported image formats: PNG, JPG, JPEG. GIF is not supported yet.
Supported image size: The downloaded image cannot exceed 7 MB after being Base64-encoded, and it cannot take longer than 3 seconds to download the image.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64 string of the image
Supported image formats: PNG, JPG, JPEG. GIF is not supported yet.
Supported image size: The downloaded image cannot exceed 7 MB after being Base64-encoded, and it cannot take longer than 3 seconds to download the image.
                     * @param _imageBase64 Base64 string of the image
Supported image formats: PNG, JPG, JPEG. GIF is not supported yet.
Supported image size: The downloaded image cannot exceed 7 MB after being Base64-encoded, and it cannot take longer than 3 seconds to download the image.
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
                     * 获取URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 3 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 3 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 3 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param _imageUrl URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 3 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
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

                private:

                    /**
                     * Whether to check for authenticity.
                     */
                    bool m_detectFake;
                    bool m_detectFakeHasBeenSet;

                    /**
                     * Whether to return identity photo.
                     */
                    bool m_returnHeadImage;
                    bool m_returnHeadImageHasBeenSet;

                    /**
                     * Base64 string of the image
Supported image formats: PNG, JPG, JPEG. GIF is not supported yet.
Supported image size: The downloaded image cannot exceed 7 MB after being Base64-encoded, and it cannot take longer than 3 seconds to download the image.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 3 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRREQUEST_H_
