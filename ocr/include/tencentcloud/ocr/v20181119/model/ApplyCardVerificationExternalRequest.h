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
                     * 获取Specifies the country of the document.
ARG:Argentina
AUS:Australia
KHM:Cambodia
CAN:Canada
SGP:Singapore
CHL:Chile
DEU:Germany
MEX:Mexico
MMR:Myanmar
NZL:New Zealand
BGD:Bangladesh
NGA:Nigeria
PAK:Pakistan
RUS:Russia
IDN:Indonesia
HKG:Hong Kong, China
THA:Thailand
MYS:Malaysia
JPN:Japan
PHL:Philippines
MAC:Macao, China
CHN:ChinaPermit
TWN:Taiwan, China
BGD:Bangladesh
NGA:Nigeria 
PAK:Pakistan

AUTO: supports cards and documents from 200+ countries
                     * @return Nationality Specifies the country of the document.
ARG:Argentina
AUS:Australia
KHM:Cambodia
CAN:Canada
SGP:Singapore
CHL:Chile
DEU:Germany
MEX:Mexico
MMR:Myanmar
NZL:New Zealand
BGD:Bangladesh
NGA:Nigeria
PAK:Pakistan
RUS:Russia
IDN:Indonesia
HKG:Hong Kong, China
THA:Thailand
MYS:Malaysia
JPN:Japan
PHL:Philippines
MAC:Macao, China
CHN:ChinaPermit
TWN:Taiwan, China
BGD:Bangladesh
NGA:Nigeria 
PAK:Pakistan

AUTO: supports cards and documents from 200+ countries
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Specifies the country of the document.
ARG:Argentina
AUS:Australia
KHM:Cambodia
CAN:Canada
SGP:Singapore
CHL:Chile
DEU:Germany
MEX:Mexico
MMR:Myanmar
NZL:New Zealand
BGD:Bangladesh
NGA:Nigeria
PAK:Pakistan
RUS:Russia
IDN:Indonesia
HKG:Hong Kong, China
THA:Thailand
MYS:Malaysia
JPN:Japan
PHL:Philippines
MAC:Macao, China
CHN:ChinaPermit
TWN:Taiwan, China
BGD:Bangladesh
NGA:Nigeria 
PAK:Pakistan

AUTO: supports cards and documents from 200+ countries
                     * @param _nationality Specifies the country of the document.
ARG:Argentina
AUS:Australia
KHM:Cambodia
CAN:Canada
SGP:Singapore
CHL:Chile
DEU:Germany
MEX:Mexico
MMR:Myanmar
NZL:New Zealand
BGD:Bangladesh
NGA:Nigeria
PAK:Pakistan
RUS:Russia
IDN:Indonesia
HKG:Hong Kong, China
THA:Thailand
MYS:Malaysia
JPN:Japan
PHL:Philippines
MAC:Macao, China
CHN:ChinaPermit
TWN:Taiwan, China
BGD:Bangladesh
NGA:Nigeria 
PAK:Pakistan

AUTO: supports cards and documents from 200+ countries
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
                     * 获取Document type.
ID_CARD
PASSPORT
DRIVING_LICENSE
RESIDENCE_PERMIT (Supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     * @return CardType Document type.
ID_CARD
PASSPORT
DRIVING_LICENSE
RESIDENCE_PERMIT (Supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 设置Document type.
ID_CARD
PASSPORT
DRIVING_LICENSE
RESIDENCE_PERMIT (Supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     * @param _cardType Document type.
ID_CARD
PASSPORT
DRIVING_LICENSE
RESIDENCE_PERMIT (Supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
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
                     * 获取The Base64 value of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     * @return ImageBase64Front The Base64 value of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     * 
                     */
                    std::string GetImageBase64Front() const;

                    /**
                     * 设置The Base64 value of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     * @param _imageBase64Front The Base64 value of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
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
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     * @return ImageBase64Back The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     * 
                     */
                    std::string GetImageBase64Back() const;

                    /**
                     * 设置The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     * @param _imageBase64Back The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
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
                     * 获取Url of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     * @return ImageUrlFront Url of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     * 
                     */
                    std::string GetImageUrlFront() const;

                    /**
                     * 设置Url of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     * @param _imageUrlFront Url of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
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
                     * 获取Specifies the Url of the document Back. supported image formats: PNG, JPG/JPEG
Supported image size: no more than 2M after Base64 encoding. image download time should not exceed 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only use ImageUrlBack.

                     * @return ImageUrlBack Specifies the Url of the document Back. supported image formats: PNG, JPG/JPEG
Supported image size: no more than 2M after Base64 encoding. image download time should not exceed 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only use ImageUrlBack.

                     * 
                     */
                    std::string GetImageUrlBack() const;

                    /**
                     * 设置Specifies the Url of the document Back. supported image formats: PNG, JPG/JPEG
Supported image size: no more than 2M after Base64 encoding. image download time should not exceed 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only use ImageUrlBack.

                     * @param _imageUrlBack Specifies the Url of the document Back. supported image formats: PNG, JPG/JPEG
Supported image size: no more than 2M after Base64 encoding. image download time should not exceed 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only use ImageUrlBack.

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
                     * Specifies the country of the document.
ARG:Argentina
AUS:Australia
KHM:Cambodia
CAN:Canada
SGP:Singapore
CHL:Chile
DEU:Germany
MEX:Mexico
MMR:Myanmar
NZL:New Zealand
BGD:Bangladesh
NGA:Nigeria
PAK:Pakistan
RUS:Russia
IDN:Indonesia
HKG:Hong Kong, China
THA:Thailand
MYS:Malaysia
JPN:Japan
PHL:Philippines
MAC:Macao, China
CHN:ChinaPermit
TWN:Taiwan, China
BGD:Bangladesh
NGA:Nigeria 
PAK:Pakistan

AUTO: supports cards and documents from 200+ countries
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Document type.
ID_CARD
PASSPORT
DRIVING_LICENSE
RESIDENCE_PERMIT (Supported in certain countries/regions, including Australia, Canada, Germany, New Zealand, Nigeria, Singapore).
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * The Base64 value of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     */
                    std::string m_imageBase64Front;
                    bool m_imageBase64FrontHasBeenSet;

                    /**
                     * The Base64 value of the reverse side of the document. Supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlBack is used.
                     */
                    std::string m_imageBase64Back;
                    bool m_imageBase64BackHasBeenSet;

                    /**
                     * Url of the document Front. supported image formats: PNG, JPG/JPEG. 
Supported image size: the downloaded image after Base64 encoding must be no more than 2M. image download time must be no more than 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only ImageUrlFront will be used.
                     */
                    std::string m_imageUrlFront;
                    bool m_imageUrlFrontHasBeenSet;

                    /**
                     * Specifies the Url of the document Back. supported image formats: PNG, JPG/JPEG
Supported image size: no more than 2M after Base64 encoding. image download time should not exceed 5 seconds. 
Supported image resolution: between 256 \* 256 and 4096 \* 4096. For some documents, either ImageUrlBack or ImageBase64Back must be provided. If both are provided, only use ImageUrlBack.

                     */
                    std::string m_imageUrlBack;
                    bool m_imageUrlBackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_APPLYCARDVERIFICATIONEXTERNALREQUEST_H_
