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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYCARDVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYCARDVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ApplyCardVerification request structure.
                */
                class ApplyCardVerificationRequest : public AbstractModel
                {
                public:
                    ApplyCardVerificationRequest();
                    ~ApplyCardVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Please select the country code of ID document.
IDN: Indonesia
HKG: Hong Kong
THA: Thailand
MYS: Malaysia
SGP: Singapore
JPN: Japan
TWN:Taiwan
AUTO: Automatic Identification
                     * @return Nationality Please select the country code of ID document.
IDN: Indonesia
HKG: Hong Kong
THA: Thailand
MYS: Malaysia
SGP: Singapore
JPN: Japan
TWN:Taiwan
AUTO: Automatic Identification
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Please select the country code of ID document.
IDN: Indonesia
HKG: Hong Kong
THA: Thailand
MYS: Malaysia
SGP: Singapore
JPN: Japan
TWN:Taiwan
AUTO: Automatic Identification
                     * @param _nationality Please select the country code of ID document.
IDN: Indonesia
HKG: Hong Kong
THA: Thailand
MYS: Malaysia
SGP: Singapore
JPN: Japan
TWN:Taiwan
AUTO: Automatic Identification
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
                     * 获取Please select the type of ID document. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO
                     * @return CardType Please select the type of ID document. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 设置Please select the type of ID document. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO
                     * @param _cardType Please select the type of ID document. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO
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
                     * 获取Base64 value for the front of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding.
The image download takes no more than 3 seconds. Supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64 Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     * @return ImageBase64Front Base64 value for the front of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding.
The image download takes no more than 3 seconds. Supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64 Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     * 
                     */
                    std::string GetImageBase64Front() const;

                    /**
                     * 设置Base64 value for the front of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding.
The image download takes no more than 3 seconds. Supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64 Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     * @param _imageBase64Front Base64 value for the front of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding.
The image download takes no more than 3 seconds. Supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64 Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
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
                     * 获取Base64 value of the reverse side of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     * @return ImageBase64Back Base64 value of the reverse side of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     * 
                     */
                    std::string GetImageBase64Back() const;

                    /**
                     * 设置Base64 value of the reverse side of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     * @param _imageBase64Back Base64 value of the reverse side of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
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
                     * 获取The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     * @return ImageUrlFront The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     * 
                     */
                    std::string GetImageUrlFront() const;

                    /**
                     * 设置The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     * @param _imageUrlFront The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
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
                     * 获取The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     * @return ImageUrlBack The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     * 
                     */
                    std::string GetImageUrlBack() const;

                    /**
                     * 设置The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     * @param _imageUrlBack The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     * 
                     */
                    void SetImageUrlBack(const std::string& _imageUrlBack);

                    /**
                     * 判断参数 ImageUrlBack 是否已赋值
                     * @return ImageUrlBack 是否已赋值
                     * 
                     */
                    bool ImageUrlBackHasBeenSet() const;

                private:

                    /**
                     * Please select the country code of ID document.
IDN: Indonesia
HKG: Hong Kong
THA: Thailand
MYS: Malaysia
SGP: Singapore
JPN: Japan
TWN:Taiwan
AUTO: Automatic Identification
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Please select the type of ID document. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * Base64 value for the front of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding.
The image download takes no more than 3 seconds. Supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64 Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     */
                    std::string m_imageBase64Front;
                    bool m_imageBase64FrontHasBeenSet;

                    /**
                     * Base64 value of the reverse side of the document. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     */
                    std::string m_imageBase64Back;
                    bool m_imageBase64BackHasBeenSet;

                    /**
                     * The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. One of ImageUrlFront and ImageBase64Front of the image must be provided. If both are provided, only ImageUrlFront will be used.
                     */
                    std::string m_imageUrlFront;
                    bool m_imageUrlFrontHasBeenSet;

                    /**
                     * The URL value on the back of the certificate. Supported image formats: PNG, JPEG. GIF format is not supported yet. Supported image size: The downloaded image cannot exceed 5M after Base64 encoding. The image download takes no more than 3 seconds. Maximum supported image resolution: 8000*8000. For some certificates, one of ImageUrlBack and ImageBase64Back must be provided. If both are provided, only ImageUrlBack will be used.
                     */
                    std::string m_imageUrlBack;
                    bool m_imageUrlBackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYCARDVERIFICATIONREQUEST_H_
