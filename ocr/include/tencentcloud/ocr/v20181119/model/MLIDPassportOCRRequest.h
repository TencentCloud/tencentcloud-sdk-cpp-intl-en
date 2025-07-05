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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_

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
                * MLIDPassportOCR request structure.
                */
                class MLIDPassportOCRRequest : public AbstractModel
                {
                public:
                    MLIDPassportOCRRequest();
                    ~MLIDPassportOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded value of image. The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 500x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. It is recommended that the card part occupies more than 2/3 area of the image.
                     * @return ImageBase64 Base64-encoded value of image. The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 500x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. It is recommended that the card part occupies more than 2/3 area of the image.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64-encoded value of image. The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 500x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. It is recommended that the card part occupies more than 2/3 area of the image.
                     * @param _imageBase64 Base64-encoded value of image. The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 500x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. It is recommended that the card part occupies more than 2/3 area of the image.
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
                     * 获取Whether to return an image. 
Default value: false.
                     * @return RetImage Whether to return an image. 
Default value: false.
                     * 
                     */
                    bool GetRetImage() const;

                    /**
                     * 设置Whether to return an image. 
Default value: false.
                     * @param _retImage Whether to return an image. 
Default value: false.
                     * 
                     */
                    void SetRetImage(const bool& _retImage);

                    /**
                     * 判断参数 RetImage 是否已赋值
                     * @return RetImage 是否已赋值
                     * 
                     */
                    bool RetImageHasBeenSet() const;

                    /**
                     * 获取URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG, BMP, PDF.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG, BMP, PDF.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG, BMP, PDF.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param _imageUrl URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG, BMP, PDF.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
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
                     * Base64-encoded value of image. The image cannot exceed 7 MB in size after being Base64-encoded. A resolution above 500x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported. It is recommended that the card part occupies more than 2/3 area of the image.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Whether to return an image. 
Default value: false.
                     */
                    bool m_retImage;
                    bool m_retImageHasBeenSet;

                    /**
                     * URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG, BMP, PDF.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
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

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_
