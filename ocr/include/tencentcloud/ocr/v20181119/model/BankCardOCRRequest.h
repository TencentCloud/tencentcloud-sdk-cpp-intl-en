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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRREQUEST_H_

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
                * BankCardOCR request structure.
                */
                class BankCardOCRRequest : public AbstractModel
                {
                public:
                    BankCardOCRRequest();
                    ~BankCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded value of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either the `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` will be used.
                     * @return ImageBase64 Base64-encoded value of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either the `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` will be used.
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64-encoded value of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either the `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` will be used.
                     * @param ImageBase64 Base64-encoded value of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either the `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` will be used.
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param ImageUrl URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取Whether to return the bank card image data after preprocessing (precise cropping and alignment). Default value: `false`
                     * @return RetBorderCutImage Whether to return the bank card image data after preprocessing (precise cropping and alignment). Default value: `false`
                     */
                    bool GetRetBorderCutImage() const;

                    /**
                     * 设置Whether to return the bank card image data after preprocessing (precise cropping and alignment). Default value: `false`
                     * @param RetBorderCutImage Whether to return the bank card image data after preprocessing (precise cropping and alignment). Default value: `false`
                     */
                    void SetRetBorderCutImage(const bool& _retBorderCutImage);

                    /**
                     * 判断参数 RetBorderCutImage 是否已赋值
                     * @return RetBorderCutImage 是否已赋值
                     */
                    bool RetBorderCutImageHasBeenSet() const;

                    /**
                     * 获取Whether to return the card number image data after slicing. Default value: `false`
                     * @return RetCardNoImage Whether to return the card number image data after slicing. Default value: `false`
                     */
                    bool GetRetCardNoImage() const;

                    /**
                     * 设置Whether to return the card number image data after slicing. Default value: `false`
                     * @param RetCardNoImage Whether to return the card number image data after slicing. Default value: `false`
                     */
                    void SetRetCardNoImage(const bool& _retCardNoImage);

                    /**
                     * 判断参数 RetCardNoImage 是否已赋值
                     * @return RetCardNoImage 是否已赋值
                     */
                    bool RetCardNoImageHasBeenSet() const;

                    /**
                     * 获取Whether to enable photocopy check. If the input image is a bank card photocopy, an alarm will be returned. Default value: `false`
                     * @return EnableCopyCheck Whether to enable photocopy check. If the input image is a bank card photocopy, an alarm will be returned. Default value: `false`
                     */
                    bool GetEnableCopyCheck() const;

                    /**
                     * 设置Whether to enable photocopy check. If the input image is a bank card photocopy, an alarm will be returned. Default value: `false`
                     * @param EnableCopyCheck Whether to enable photocopy check. If the input image is a bank card photocopy, an alarm will be returned. Default value: `false`
                     */
                    void SetEnableCopyCheck(const bool& _enableCopyCheck);

                    /**
                     * 判断参数 EnableCopyCheck 是否已赋值
                     * @return EnableCopyCheck 是否已赋值
                     */
                    bool EnableCopyCheckHasBeenSet() const;

                    /**
                     * 获取Whether to enable photograph check. If the input image is a bank card photograph, an alarm will be returned. Default value: `false`
                     * @return EnableReshootCheck Whether to enable photograph check. If the input image is a bank card photograph, an alarm will be returned. Default value: `false`
                     */
                    bool GetEnableReshootCheck() const;

                    /**
                     * 设置Whether to enable photograph check. If the input image is a bank card photograph, an alarm will be returned. Default value: `false`
                     * @param EnableReshootCheck Whether to enable photograph check. If the input image is a bank card photograph, an alarm will be returned. Default value: `false`
                     */
                    void SetEnableReshootCheck(const bool& _enableReshootCheck);

                    /**
                     * 判断参数 EnableReshootCheck 是否已赋值
                     * @return EnableReshootCheck 是否已赋值
                     */
                    bool EnableReshootCheckHasBeenSet() const;

                    /**
                     * 获取Whether to enable obscured border check. If the input image is a bank card with obscured border, an alarm will be returned. Default value: `false`
                     * @return EnableBorderCheck Whether to enable obscured border check. If the input image is a bank card with obscured border, an alarm will be returned. Default value: `false`
                     */
                    bool GetEnableBorderCheck() const;

                    /**
                     * 设置Whether to enable obscured border check. If the input image is a bank card with obscured border, an alarm will be returned. Default value: `false`
                     * @param EnableBorderCheck Whether to enable obscured border check. If the input image is a bank card with obscured border, an alarm will be returned. Default value: `false`
                     */
                    void SetEnableBorderCheck(const bool& _enableBorderCheck);

                    /**
                     * 判断参数 EnableBorderCheck 是否已赋值
                     * @return EnableBorderCheck 是否已赋值
                     */
                    bool EnableBorderCheckHasBeenSet() const;

                    /**
                     * 获取Whether to return the image quality value, which measures how clear an image is. Default value: `false`
                     * @return EnableQualityValue Whether to return the image quality value, which measures how clear an image is. Default value: `false`
                     */
                    bool GetEnableQualityValue() const;

                    /**
                     * 设置Whether to return the image quality value, which measures how clear an image is. Default value: `false`
                     * @param EnableQualityValue Whether to return the image quality value, which measures how clear an image is. Default value: `false`
                     */
                    void SetEnableQualityValue(const bool& _enableQualityValue);

                    /**
                     * 判断参数 EnableQualityValue 是否已赋值
                     * @return EnableQualityValue 是否已赋值
                     */
                    bool EnableQualityValueHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded value of the image. The image cannot exceed 7 MB after being Base64-encoded. A resolution above 500 x 800 is recommended. PNG, JPG, JPEG, and BMP formats are supported. It is recommended that the card part occupy more than 2/3 area of the image.
Either the `ImageUrl` or `ImageBase64` of the image must be provided. If both are provided, only `ImageUrl` will be used.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * URL address of image. (This field is not supported outside Chinese mainland)
Supported image formats: PNG, JPG, JPEG. GIF is currently not supported.
Supported image size: the downloaded image cannot exceed 7 MB after being Base64-encoded. The download time of the image cannot exceed 3 seconds.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Whether to return the bank card image data after preprocessing (precise cropping and alignment). Default value: `false`
                     */
                    bool m_retBorderCutImage;
                    bool m_retBorderCutImageHasBeenSet;

                    /**
                     * Whether to return the card number image data after slicing. Default value: `false`
                     */
                    bool m_retCardNoImage;
                    bool m_retCardNoImageHasBeenSet;

                    /**
                     * Whether to enable photocopy check. If the input image is a bank card photocopy, an alarm will be returned. Default value: `false`
                     */
                    bool m_enableCopyCheck;
                    bool m_enableCopyCheckHasBeenSet;

                    /**
                     * Whether to enable photograph check. If the input image is a bank card photograph, an alarm will be returned. Default value: `false`
                     */
                    bool m_enableReshootCheck;
                    bool m_enableReshootCheckHasBeenSet;

                    /**
                     * Whether to enable obscured border check. If the input image is a bank card with obscured border, an alarm will be returned. Default value: `false`
                     */
                    bool m_enableBorderCheck;
                    bool m_enableBorderCheckHasBeenSet;

                    /**
                     * Whether to return the image quality value, which measures how clear an image is. Default value: `false`
                     */
                    bool m_enableQualityValue;
                    bool m_enableQualityValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRREQUEST_H_
