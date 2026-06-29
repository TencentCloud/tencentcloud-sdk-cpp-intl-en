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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_APPLYCARDVERIFICATIONEXTERNALREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_APPLYCARDVERIFICATIONEXTERNALREQUEST_H_

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
                * ApplyCardVerificationExternal request structure.
                */
                class ApplyCardVerificationExternalRequest : public AbstractModel
                {
                public:
                    ApplyCardVerificationExternalRequest();
                    ~ApplyCardVerificationExternalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Country/Region of the document. For the full list of supported countries/regions, refer to the API description.
                     * @return Nationality Country/Region of the document. For the full list of supported countries/regions, refer to the API description.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Country/Region of the document. For the full list of supported countries/regions, refer to the API description.
                     * @param _nationality Country/Region of the document. For the full list of supported countries/regions, refer to the API description.
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Document type. Supported values: ID_CARD, PASSPORT, DRIVING_LICENSE, RESIDENCE_PERMIT (only supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     * @return CardType Document type. Supported values: ID_CARD, PASSPORT, DRIVING_LICENSE, RESIDENCE_PERMIT (only supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 设置Document type. Supported values: ID_CARD, PASSPORT, DRIVING_LICENSE, RESIDENCE_PERMIT (only supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     * @param _cardType Document type. Supported values: ID_CARD, PASSPORT, DRIVING_LICENSE, RESIDENCE_PERMIT (only supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     * 
                     */
                    void SetCardType(const std::string& _cardType);

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取Base64-encoded image of the document front.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * @return ImageBase64Front Base64-encoded image of the document front.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * 
                     */
                    std::string GetImageBase64Front() const;

                    /**
                     * 设置Base64-encoded image of the document front.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * @param _imageBase64Front Base64-encoded image of the document front.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * 
                     */
                    void SetImageBase64Front(const std::string& _imageBase64Front);

                    /**
                     * 判断参数 ImageBase64Front 是否已赋值
                     * @return ImageBase64Front 是否已赋值
                     * 
                     */
                    bool ImageBase64FrontHasBeenSet() const;

                    /**
                     * 获取The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. Image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     * @return ImageBase64Back The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. Image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     * 
                     */
                    std::string GetImageBase64Back() const;

                    /**
                     * 设置The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. Image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     * @param _imageBase64Back The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. Image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     * 
                     */
                    void SetImageBase64Back(const std::string& _imageBase64Back);

                    /**
                     * 判断参数 ImageBase64Back 是否已赋值
                     * @return ImageBase64Back 是否已赋值
                     * 
                     */
                    bool ImageBase64BackHasBeenSet() const;

                    /**
                     * 获取URL of the document front image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * @return ImageUrlFront URL of the document front image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * 
                     */
                    std::string GetImageUrlFront() const;

                    /**
                     * 设置URL of the document front image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * @param _imageUrlFront URL of the document front image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     * 
                     */
                    void SetImageUrlFront(const std::string& _imageUrlFront);

                    /**
                     * 判断参数 ImageUrlFront 是否已赋值
                     * @return ImageUrlFront 是否已赋值
                     * 
                     */
                    bool ImageUrlFrontHasBeenSet() const;

                    /**
                     * 获取URL of the document back image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: For some documents, you must provide either ImageUrlBack or ImageBase64Back. If both are provided, only ImageUrlBack is used.
                     * @return ImageUrlBack URL of the document back image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: For some documents, you must provide either ImageUrlBack or ImageBase64Back. If both are provided, only ImageUrlBack is used.
                     * 
                     */
                    std::string GetImageUrlBack() const;

                    /**
                     * 设置URL of the document back image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: For some documents, you must provide either ImageUrlBack or ImageBase64Back. If both are provided, only ImageUrlBack is used.
                     * @param _imageUrlBack URL of the document back image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: For some documents, you must provide either ImageUrlBack or ImageBase64Back. If both are provided, only ImageUrlBack is used.
                     * 
                     */
                    void SetImageUrlBack(const std::string& _imageUrlBack);

                    /**
                     * 判断参数 ImageUrlBack 是否已赋值
                     * @return ImageUrlBack 是否已赋值
                     * 
                     */
                    bool ImageUrlBackHasBeenSet() const;

                    /**
                     * 获取Whether to crop and return the face image from the document. Default: false.
If set to true, the image constraints are:
- Size after Base64 encoding must not exceed 5 MB.
- Maximum pixel width/height: 4000 for JPG, 2000 for other formats.
- Minimum pixel width/height: 64.
- Supported formats: PNG, JPG, JPEG, BMP (GIF not supported).
                     * @return ReturnHeadImage Whether to crop and return the face image from the document. Default: false.
If set to true, the image constraints are:
- Size after Base64 encoding must not exceed 5 MB.
- Maximum pixel width/height: 4000 for JPG, 2000 for other formats.
- Minimum pixel width/height: 64.
- Supported formats: PNG, JPG, JPEG, BMP (GIF not supported).
                     * 
                     */
                    bool GetReturnHeadImage() const;

                    /**
                     * 设置Whether to crop and return the face image from the document. Default: false.
If set to true, the image constraints are:
- Size after Base64 encoding must not exceed 5 MB.
- Maximum pixel width/height: 4000 for JPG, 2000 for other formats.
- Minimum pixel width/height: 64.
- Supported formats: PNG, JPG, JPEG, BMP (GIF not supported).
                     * @param _returnHeadImage Whether to crop and return the face image from the document. Default: false.
If set to true, the image constraints are:
- Size after Base64 encoding must not exceed 5 MB.
- Maximum pixel width/height: 4000 for JPG, 2000 for other formats.
- Minimum pixel width/height: 64.
- Supported formats: PNG, JPG, JPEG, BMP (GIF not supported).
                     * 
                     */
                    void SetReturnHeadImage(const bool& _returnHeadImage);

                    /**
                     * 判断参数 ReturnHeadImage 是否已赋值
                     * @return ReturnHeadImage 是否已赋值
                     * 
                     */
                    bool ReturnHeadImageHasBeenSet() const;

                private:

                    /**
                     * Country/Region of the document. For the full list of supported countries/regions, refer to the API description.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Document type. Supported values: ID_CARD, PASSPORT, DRIVING_LICENSE, RESIDENCE_PERMIT (only supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * Base64-encoded image of the document front.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     */
                    std::string m_imageBase64Front;
                    bool m_imageBase64FrontHasBeenSet;

                    /**
                     * The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. Image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     */
                    std::string m_imageBase64Back;
                    bool m_imageBase64BackHasBeenSet;

                    /**
                     * URL of the document front image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: You must provide either ImageUrlFront or ImageBase64Front. If both are provided, only ImageUrlFront is used.
                     */
                    std::string m_imageUrlFront;
                    bool m_imageUrlFrontHasBeenSet;

                    /**
                     * URL of the document back image.
Supported image formats: PNG, JPG/JPEG (GIF not supported).
Supported image size: The downloaded image after Base64 encoding must not exceed 2 MB. Image download time must not exceed 5 seconds.
Supported image resolution: Between 256*256 and 4096*4096 pixels.
Note: For some documents, you must provide either ImageUrlBack or ImageBase64Back. If both are provided, only ImageUrlBack is used.
                     */
                    std::string m_imageUrlBack;
                    bool m_imageUrlBackHasBeenSet;

                    /**
                     * Whether to crop and return the face image from the document. Default: false.
If set to true, the image constraints are:
- Size after Base64 encoding must not exceed 5 MB.
- Maximum pixel width/height: 4000 for JPG, 2000 for other formats.
- Minimum pixel width/height: 64.
- Supported formats: PNG, JPG, JPEG, BMP (GIF not supported).
                     */
                    bool m_returnHeadImage;
                    bool m_returnHeadImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_APPLYCARDVERIFICATIONEXTERNALREQUEST_H_
