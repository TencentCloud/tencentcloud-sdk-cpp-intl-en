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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEDETECTCARDCOORDSREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEDETECTCARDCOORDSREQUEST_H_

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
                * RecognizeDetectCardCoords request structure.
                */
                class RecognizeDetectCardCoordsRequest : public AbstractModel
                {
                public:
                    RecognizeDetectCardCoordsRequest();
                    ~RecognizeDetectCardCoordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Url of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: the downloaded image should be no more than 7M after Base64 encoding. image download time should be no more than 3 seconds. images stored in tencent cloud's urls guarantee higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     * @return ImageUrl The Url of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: the downloaded image should be no more than 7M after Base64 encoding. image download time should be no more than 3 seconds. images stored in tencent cloud's urls guarantee higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The Url of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: the downloaded image should be no more than 7M after Base64 encoding. image download time should be no more than 3 seconds. images stored in tencent cloud's urls guarantee higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     * @param _imageUrl The Url of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: the downloaded image should be no more than 7M after Base64 encoding. image download time should be no more than 3 seconds. images stored in tencent cloud's urls guarantee higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
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
                     * 获取The Base64 value of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: no more than 7M after the downloaded image is encoded in Base64. image download time is not more than 3 seconds. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     * @return ImageBase64 The Base64 value of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: no more than 7M after the downloaded image is encoded in Base64. image download time is not more than 3 seconds. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64 value of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: no more than 7M after the downloaded image is encoded in Base64. image download time is not more than 3 seconds. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     * @param _imageBase64 The Base64 value of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: no more than 7M after the downloaded image is encoded in Base64. image download time is not more than 3 seconds. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                private:

                    /**
                     * The Url of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: the downloaded image should be no more than 7M after Base64 encoding. image download time should be no more than 3 seconds. images stored in tencent cloud's urls guarantee higher download speed and stability. it is recommended to store images in tencent cloud. the speed and stability of non-tencent cloud storage urls may be impacted.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The Base64 value of the image. supported image formats: PNG, JPG, JPEG. GIF format is not currently supported. supported image size: no more than 7M after the downloaded image is encoded in Base64. image download time is not more than 3 seconds. either ImageUrl or ImageBase64 must be provided. if both are provided, only use ImageUrl.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEDETECTCARDCOORDSREQUEST_H_
