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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZESINGAPOREIDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZESINGAPOREIDCARDOCRREQUEST_H_

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
                * RecognizeSingaporeIDCardOCR request structure.
                */
                class RecognizeSingaporeIDCardOCRRequest : public AbstractModel
                {
                public:
                    RecognizeSingaporeIDCardOCRRequest();
                    ~RecognizeSingaporeIDCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @return ImageBase64 The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @param _imageBase64 The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
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
                     * 获取The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     * @return ImageUrl The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     * @param _imageUrl The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
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
                     * 获取Whether to return portrait photos.
                     * @return ReturnHeadImage Whether to return portrait photos.
                     * 
                     */
                    bool GetReturnHeadImage() const;

                    /**
                     * 设置Whether to return portrait photos.
                     * @param _returnHeadImage Whether to return portrait photos.
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
                     * The Base64 value of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * The URL address of the image. The image is required to be no larger than 7M after Base64 encoding, and the resolution is recommended to be 500*800 or above. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupies at least 2/3 of the picture. It is recommended that images be stored in Tencent Cloud to ensure higher download speed and stability.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Whether to return portrait photos.
                     */
                    bool m_returnHeadImage;
                    bool m_returnHeadImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZESINGAPOREIDCARDOCRREQUEST_H_
