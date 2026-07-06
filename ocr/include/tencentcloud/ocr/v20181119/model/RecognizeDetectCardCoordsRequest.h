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
                     * 获取URL of the image. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The downloaded image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. Images stored in Tencent Cloud offer higher download speed and stability. We recommend storing images in Tencent Cloud. The speed and stability of URLs from non-Tencent Cloud storage may be affected.
                     * @return ImageUrl URL of the image. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The downloaded image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. Images stored in Tencent Cloud offer higher download speed and stability. We recommend storing images in Tencent Cloud. The speed and stability of URLs from non-Tencent Cloud storage may be affected.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL of the image. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The downloaded image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. Images stored in Tencent Cloud offer higher download speed and stability. We recommend storing images in Tencent Cloud. The speed and stability of URLs from non-Tencent Cloud storage may be affected.
                     * @param _imageUrl URL of the image. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The downloaded image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. Images stored in Tencent Cloud offer higher download speed and stability. We recommend storing images in Tencent Cloud. The speed and stability of URLs from non-Tencent Cloud storage may be affected.
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
                     * 获取Base64-encoded image data. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. You must provide either ImageUrl or ImageBase64. If both are provided, ImageUrl will be used.
                     * @return ImageBase64 Base64-encoded image data. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. You must provide either ImageUrl or ImageBase64. If both are provided, ImageUrl will be used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64-encoded image data. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. You must provide either ImageUrl or ImageBase64. If both are provided, ImageUrl will be used.
                     * @param _imageBase64 Base64-encoded image data. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. You must provide either ImageUrl or ImageBase64. If both are provided, ImageUrl will be used.
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
                     * URL of the image. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The downloaded image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. Images stored in Tencent Cloud offer higher download speed and stability. We recommend storing images in Tencent Cloud. The speed and stability of URLs from non-Tencent Cloud storage may be affected.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Base64-encoded image data. Supported image formats: PNG, JPG, JPEG. GIF is not supported. The image must be no larger than 7 MB after Base64 encoding. Image download must complete within 3 seconds. You must provide either ImageUrl or ImageBase64. If both are provided, ImageUrl will be used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEDETECTCARDCOORDSREQUEST_H_
