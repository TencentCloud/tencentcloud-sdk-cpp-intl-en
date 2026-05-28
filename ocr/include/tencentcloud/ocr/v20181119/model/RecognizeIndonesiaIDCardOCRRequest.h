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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRREQUEST_H_

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
                * RecognizeIndonesiaIDCardOCR request structure.
                */
                class RecognizeIndonesiaIDCardOCRRequest : public AbstractModel
                {
                public:
                    RecognizeIndonesiaIDCardOCRRequest();
                    ~RecognizeIndonesiaIDCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is not more than 3 seconds. Either ImageUrl or ImageBase64 must be provided. If both are provided, only use ImageUrl.
                     * @return ImageBase64 The Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is not more than 3 seconds. Either ImageUrl or ImageBase64 must be provided. If both are provided, only use ImageUrl.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is not more than 3 seconds. Either ImageUrl or ImageBase64 must be provided. If both are provided, only use ImageUrl.
                     * @param _imageBase64 The Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is not more than 3 seconds. Either ImageUrl or ImageBase64 must be provided. If both are provided, only use ImageUrl.
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
                     * 获取The Url address of the image. 
Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. 
Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is no more than 3 seconds. 
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
For a non-Tencent Cloud URL, the download speed and stability may be affected.
                     * @return ImageUrl The Url address of the image. 
Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. 
Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is no more than 3 seconds. 
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
For a non-Tencent Cloud URL, the download speed and stability may be affected.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The Url address of the image. 
Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. 
Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is no more than 3 seconds. 
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
For a non-Tencent Cloud URL, the download speed and stability may be affected.
                     * @param _imageUrl The Url address of the image. 
Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. 
Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is no more than 3 seconds. 
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
For a non-Tencent Cloud URL, the download speed and stability may be affected.
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
                     * 获取Whether to return the portrait photo.
If selected true, image restrictions are: Image size after encoding must not exceed 5M, jpg format long side pixel cannot exceed 4000, other formats image long edge pixel maximum of 2000. Short side pixel of all format images not less than 64.
Support PNG, jpg, JPEG, BMP, no support for GIF images.
If portrait matting fails, return an empty string.
                     * @return ReturnHeadImage Whether to return the portrait photo.
If selected true, image restrictions are: Image size after encoding must not exceed 5M, jpg format long side pixel cannot exceed 4000, other formats image long edge pixel maximum of 2000. Short side pixel of all format images not less than 64.
Support PNG, jpg, JPEG, BMP, no support for GIF images.
If portrait matting fails, return an empty string.
                     * 
                     */
                    bool GetReturnHeadImage() const;

                    /**
                     * 设置Whether to return the portrait photo.
If selected true, image restrictions are: Image size after encoding must not exceed 5M, jpg format long side pixel cannot exceed 4000, other formats image long edge pixel maximum of 2000. Short side pixel of all format images not less than 64.
Support PNG, jpg, JPEG, BMP, no support for GIF images.
If portrait matting fails, return an empty string.
                     * @param _returnHeadImage Whether to return the portrait photo.
If selected true, image restrictions are: Image size after encoding must not exceed 5M, jpg format long side pixel cannot exceed 4000, other formats image long edge pixel maximum of 2000. Short side pixel of all format images not less than 64.
Support PNG, jpg, JPEG, BMP, no support for GIF images.
If portrait matting fails, return an empty string.
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
                     * 获取Scene parameter, default value is V1
Available values:
V1
V2
                     * @return Scene Scene parameter, default value is V1
Available values:
V1
V2
                     * @deprecated
                     */
                    std::string GetScene() const;

                    /**
                     * 设置Scene parameter, default value is V1
Available values:
V1
V2
                     * @param _scene Scene parameter, default value is V1
Available values:
V1
V2
                     * @deprecated
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * @deprecated
                     */
                    bool SceneHasBeenSet() const;

                private:

                    /**
                     * The Base64 value of the image. Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is not more than 3 seconds. Either ImageUrl or ImageBase64 must be provided. If both are provided, only use ImageUrl.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * The Url address of the image. 
Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. 
Supported image size: the downloaded image after Base64 encoding is no more than 7M. Image download time is no more than 3 seconds. 
We recommend that you store the image in Tencent Cloud for higher download speed and stability.
For a non-Tencent Cloud URL, the download speed and stability may be affected.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Whether to return the portrait photo.
If selected true, image restrictions are: Image size after encoding must not exceed 5M, jpg format long side pixel cannot exceed 4000, other formats image long edge pixel maximum of 2000. Short side pixel of all format images not less than 64.
Support PNG, jpg, JPEG, BMP, no support for GIF images.
If portrait matting fails, return an empty string.
                     */
                    bool m_returnHeadImage;
                    bool m_returnHeadImageHasBeenSet;

                    /**
                     * Scene parameter, default value is V1
Available values:
V1
V2
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRREQUEST_H_
