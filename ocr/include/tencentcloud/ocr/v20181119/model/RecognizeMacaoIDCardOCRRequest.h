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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMACAOIDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMACAOIDCARDOCRREQUEST_H_

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
                * RecognizeMacaoIDCardOCR request structure.
                */
                class RecognizeMacaoIDCardOCRRequest : public AbstractModel
                {
                public:
                    RecognizeMacaoIDCardOCRRequest();
                    ~RecognizeMacaoIDCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The URL address of the image. 
Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M. The image download takes no more than 3 seconds.Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * @return ImageUrl The URL address of the image. 
Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M. The image download takes no more than 3 seconds.Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL address of the image. 
Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M. The image download takes no more than 3 seconds.Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * @param _imageUrl The URL address of the image. 
Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M. The image download takes no more than 3 seconds.Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
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
                     * 获取The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * @return BackImageUrl The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * 
                     */
                    std::string GetBackImageUrl() const;

                    /**
                     * 设置The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     * @param _backImageUrl The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
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
                     * 获取Base64 value of the image.Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds.
One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @return ImageBase64 Base64 value of the image.Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds.
One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64 value of the image.Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds.
One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @param _imageBase64 Base64 value of the image.Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds.
One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
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
                     * 获取Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @return BackImageBase64 Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * 
                     */
                    std::string GetBackImageBase64() const;

                    /**
                     * 设置Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     * @param _backImageBase64 Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
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
                     * 获取The following optional fields are of string type and are empty by default: 
RetImage: whether to return the processed image (base64 encrypted string); the value and meaning of RetImage are as follows: 1.preprocess returns the preprocessed image data 2.portrait Return portrait image data 3."" Do not return image data SDK setting method reference: Config = Json.stringify({"RetImage":"preprocess"}) API 3.0 Explorer setting method reference: Config = {"RetImage":"portrait" }
                     * @return Config The following optional fields are of string type and are empty by default: 
RetImage: whether to return the processed image (base64 encrypted string); the value and meaning of RetImage are as follows: 1.preprocess returns the preprocessed image data 2.portrait Return portrait image data 3."" Do not return image data SDK setting method reference: Config = Json.stringify({"RetImage":"preprocess"}) API 3.0 Explorer setting method reference: Config = {"RetImage":"portrait" }
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置The following optional fields are of string type and are empty by default: 
RetImage: whether to return the processed image (base64 encrypted string); the value and meaning of RetImage are as follows: 1.preprocess returns the preprocessed image data 2.portrait Return portrait image data 3."" Do not return image data SDK setting method reference: Config = Json.stringify({"RetImage":"preprocess"}) API 3.0 Explorer setting method reference: Config = {"RetImage":"portrait" }
                     * @param _config The following optional fields are of string type and are empty by default: 
RetImage: whether to return the processed image (base64 encrypted string); the value and meaning of RetImage are as follows: 1.preprocess returns the preprocessed image data 2.portrait Return portrait image data 3."" Do not return image data SDK setting method reference: Config = Json.stringify({"RetImage":"preprocess"}) API 3.0 Explorer setting method reference: Config = {"RetImage":"portrait" }
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * The URL address of the image. 
Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M. The image download takes no more than 3 seconds.Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The URL address of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. Storing images in Tencent Cloud URLs can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent.
                     */
                    std::string m_backImageUrl;
                    bool m_backImageUrlHasBeenSet;

                    /**
                     * Base64 value of the image.Supported image formats: PNG, JPG, JPEG. Not support GIF yet.
Supported image size: The downloaded image should not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds.
One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Base64 value of the image on the back of the card. Supported image formats: PNG, JPG, JPEG. The GIF format is not supported yet. Supported image size: The downloaded image does not exceed 7M after Base64 encoding. The image download takes no more than 3 seconds. One of ImageUrl and ImageBase64 of the image must be provided. If both are provided, only ImageUrl will be used.
                     */
                    std::string m_backImageBase64;
                    bool m_backImageBase64HasBeenSet;

                    /**
                     * The following optional fields are of string type and are empty by default: 
RetImage: whether to return the processed image (base64 encrypted string); the value and meaning of RetImage are as follows: 1.preprocess returns the preprocessed image data 2.portrait Return portrait image data 3."" Do not return image data SDK setting method reference: Config = Json.stringify({"RetImage":"preprocess"}) API 3.0 Explorer setting method reference: Config = {"RetImage":"portrait" }
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMACAOIDCARDOCRREQUEST_H_
