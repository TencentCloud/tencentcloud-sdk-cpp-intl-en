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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * IdCardOCRVerification request structure.
                */
                class IdCardOCRVerificationRequest : public AbstractModel
                {
                public:
                    IdCardOCRVerificationRequest();
                    ~IdCardOCRVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Identity card number.
-Name, identity card number, ImageBase64, or ImageUrl must provide one of the three.
-If both are provided, proceed to use parameters according to the priority of name and identity card number > ImageBase64 > ImageUrl.
                     * @return IdCard Identity card number.
-Name, identity card number, ImageBase64, or ImageUrl must provide one of the three.
-If both are provided, proceed to use parameters according to the priority of name and identity card number > ImageBase64 > ImageUrl.
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置Identity card number.
-Name, identity card number, ImageBase64, or ImageUrl must provide one of the three.
-If both are provided, proceed to use parameters according to the priority of name and identity card number > ImageBase64 > ImageUrl.
                     * @param _idCard Identity card number.
-Name, identity card number, ImageBase64, or ImageUrl must provide one of the three.
-If both are provided, proceed to use parameters according to the priority of name and identity card number > ImageBase64 > ImageUrl.
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Base64 value of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image after Base64 encoding is no more than 3M. Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.
                     * @return ImageBase64 Base64 value of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image after Base64 encoding is no more than 3M. Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64 value of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image after Base64 encoding is no more than 3M. Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.
                     * @param _imageBase64 Base64 value of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image after Base64 encoding is no more than 3M. Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.
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
                     * 获取Url of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image is no more than 3M after Base64 encoding. Image download time is no more than 3 seconds.
-Images stored on Tencent Cloud's Url guarantee higher download speed and stability. It is advisable to store images on Tencent Cloud.
-The speed and stability of non-Tencent Cloud Storage URLs may be impacted.
                     * @return ImageUrl Url of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image is no more than 3M after Base64 encoding. Image download time is no more than 3 seconds.
-Images stored on Tencent Cloud's Url guarantee higher download speed and stability. It is advisable to store images on Tencent Cloud.
-The speed and stability of non-Tencent Cloud Storage URLs may be impacted.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Url of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image is no more than 3M after Base64 encoding. Image download time is no more than 3 seconds.
-Images stored on Tencent Cloud's Url guarantee higher download speed and stability. It is advisable to store images on Tencent Cloud.
-The speed and stability of non-Tencent Cloud Storage URLs may be impacted.
                     * @param _imageUrl Url of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image is no more than 3M after Base64 encoding. Image download time is no more than 3 seconds.
-Images stored on Tencent Cloud's Url guarantee higher download speed and stability. It is advisable to store images on Tencent Cloud.
-The speed and stability of non-Tencent Cloud Storage URLs may be impacted.
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
                     * 获取Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.
                     * @return Encryption Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.
                     * @param _encryption Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * Identity card number.
-Name, identity card number, ImageBase64, or ImageUrl must provide one of the three.
-If both are provided, proceed to use parameters according to the priority of name and identity card number > ImageBase64 > ImageUrl.
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Base64 value of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image after Base64 encoding is no more than 3M. Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Url of the ID card portrait side.
-Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.
-Supported image size: The downloaded image is no more than 3M after Base64 encoding. Image download time is no more than 3 seconds.
-Images stored on Tencent Cloud's Url guarantee higher download speed and stability. It is advisable to store images on Tencent Cloud.
-The speed and stability of non-Tencent Cloud Storage URLs may be impacted.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONREQUEST_H_
