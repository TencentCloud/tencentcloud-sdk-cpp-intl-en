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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONREQUEST_H_

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
                * CheckIdCardInformation request structure.
                */
                class CheckIdCardInformationRequest : public AbstractModel
                {
                public:
                    CheckIdCardInformationRequest();
                    ~CheckIdCardInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Base64 value of the ID card portrait side.</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: the downloaded image should be no more than 7M after Base64 encoding.</li><li>Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for coding specification.</li><li>Either ImageBase64 or ImageUrl must be provided. If both are provided, proceed to use parameters according to the priority of ImageUrl > ImageBase64.</li></ul>
                     * @return ImageBase64 <p>Base64 value of the ID card portrait side.</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: the downloaded image should be no more than 7M after Base64 encoding.</li><li>Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for coding specification.</li><li>Either ImageBase64 or ImageUrl must be provided. If both are provided, proceed to use parameters according to the priority of ImageUrl > ImageBase64.</li></ul>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>Base64 value of the ID card portrait side.</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: the downloaded image should be no more than 7M after Base64 encoding.</li><li>Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for coding specification.</li><li>Either ImageBase64 or ImageUrl must be provided. If both are provided, proceed to use parameters according to the priority of ImageUrl > ImageBase64.</li></ul>
                     * @param _imageBase64 <p>Base64 value of the ID card portrait side.</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: the downloaded image should be no more than 7M after Base64 encoding.</li><li>Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for coding specification.</li><li>Either ImageBase64 or ImageUrl must be provided. If both are provided, proceed to use parameters according to the priority of ImageUrl > ImageBase64.</li></ul>
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
                     * 获取<p>Url address of the ID card portrait side</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: The downloaded image after Base64 encoding is no more than 3M. Image download time is no more than 3 seconds.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of non-Tencent Cloud Storage URLs may be impacted to a certain extent.</li></ul>
                     * @return ImageUrl <p>Url address of the ID card portrait side</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: The downloaded image after Base64 encoding is no more than 3M. Image download time is no more than 3 seconds.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of non-Tencent Cloud Storage URLs may be impacted to a certain extent.</li></ul>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>Url address of the ID card portrait side</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: The downloaded image after Base64 encoding is no more than 3M. Image download time is no more than 3 seconds.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of non-Tencent Cloud Storage URLs may be impacted to a certain extent.</li></ul>
                     * @param _imageUrl <p>Url address of the ID card portrait side</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: The downloaded image after Base64 encoding is no more than 3M. Image download time is no more than 3 seconds.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of non-Tencent Cloud Storage URLs may be impacted to a certain extent.</li></ul>
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
                     * 获取<p>Configuration.</p><ul><li><p>All the following optional fields are bool type, default false.<br>CopyWarn, alarm for photocopy.<br>BorderCheckWarn, border and frame block alarm.<br>ReshootWarn, alarm for rephotographing.<br>DetectPsWarn, PS detection alarm (suspected PS traces).<br>TempIdWarn, temporary ID card alarm.<br>Quality, image Quality alarm (evaluates blurriness).</p></li><li><p>SDK configuration method for reference:<br>Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true}).</p></li><li><p>API 3.0 Explorer setting method for reference:<br>Config = {"CopyWarn":true,"ReshootWarn":true}.</p></li></ul>
                     * @return Config <p>Configuration.</p><ul><li><p>All the following optional fields are bool type, default false.<br>CopyWarn, alarm for photocopy.<br>BorderCheckWarn, border and frame block alarm.<br>ReshootWarn, alarm for rephotographing.<br>DetectPsWarn, PS detection alarm (suspected PS traces).<br>TempIdWarn, temporary ID card alarm.<br>Quality, image Quality alarm (evaluates blurriness).</p></li><li><p>SDK configuration method for reference:<br>Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true}).</p></li><li><p>API 3.0 Explorer setting method for reference:<br>Config = {"CopyWarn":true,"ReshootWarn":true}.</p></li></ul>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>Configuration.</p><ul><li><p>All the following optional fields are bool type, default false.<br>CopyWarn, alarm for photocopy.<br>BorderCheckWarn, border and frame block alarm.<br>ReshootWarn, alarm for rephotographing.<br>DetectPsWarn, PS detection alarm (suspected PS traces).<br>TempIdWarn, temporary ID card alarm.<br>Quality, image Quality alarm (evaluates blurriness).</p></li><li><p>SDK configuration method for reference:<br>Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true}).</p></li><li><p>API 3.0 Explorer setting method for reference:<br>Config = {"CopyWarn":true,"ReshootWarn":true}.</p></li></ul>
                     * @param _config <p>Configuration.</p><ul><li><p>All the following optional fields are bool type, default false.<br>CopyWarn, alarm for photocopy.<br>BorderCheckWarn, border and frame block alarm.<br>ReshootWarn, alarm for rephotographing.<br>DetectPsWarn, PS detection alarm (suspected PS traces).<br>TempIdWarn, temporary ID card alarm.<br>Quality, image Quality alarm (evaluates blurriness).</p></li><li><p>SDK configuration method for reference:<br>Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true}).</p></li><li><p>API 3.0 Explorer setting method for reference:<br>Config = {"CopyWarn":true,"ReshootWarn":true}.</p></li></ul>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>Whether required to encrypt sensitive information in the response.</p><ul><li>Default false.</li><li>Sensitive information includes Response.IdNum and Response.Name.</li></ul>
                     * @return IsEncrypt <p>Whether required to encrypt sensitive information in the response.</p><ul><li>Default false.</li><li>Sensitive information includes Response.IdNum and Response.Name.</li></ul>
                     * 
                     */
                    bool GetIsEncrypt() const;

                    /**
                     * 设置<p>Whether required to encrypt sensitive information in the response.</p><ul><li>Default false.</li><li>Sensitive information includes Response.IdNum and Response.Name.</li></ul>
                     * @param _isEncrypt <p>Whether required to encrypt sensitive information in the response.</p><ul><li>Default false.</li><li>Sensitive information includes Response.IdNum and Response.Name.</li></ul>
                     * 
                     */
                    void SetIsEncrypt(const bool& _isEncrypt);

                    /**
                     * 判断参数 IsEncrypt 是否已赋值
                     * @return IsEncrypt 是否已赋值
                     * 
                     */
                    bool IsEncryptHasBeenSet() const;

                    /**
                     * 获取<p>Whether required to encrypt the response body.</p>
                     * @return IsEncryptResponse <p>Whether required to encrypt the response body.</p>
                     * 
                     */
                    bool GetIsEncryptResponse() const;

                    /**
                     * 设置<p>Whether required to encrypt the response body.</p>
                     * @param _isEncryptResponse <p>Whether required to encrypt the response body.</p>
                     * 
                     */
                    void SetIsEncryptResponse(const bool& _isEncryptResponse);

                    /**
                     * 判断参数 IsEncryptResponse 是否已赋值
                     * @return IsEncryptResponse 是否已赋值
                     * 
                     */
                    bool IsEncryptResponseHasBeenSet() const;

                    /**
                     * 获取<p>Whether required to encrypt sensitive information in the response, need to be specified encryption algorithm Algorithm, initial vector for CBC encryption, and encrypted symmetric key.</p>
                     * @return Encryption <p>Whether required to encrypt sensitive information in the response, need to be specified encryption algorithm Algorithm, initial vector for CBC encryption, and encrypted symmetric key.</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>Whether required to encrypt sensitive information in the response, need to be specified encryption algorithm Algorithm, initial vector for CBC encryption, and encrypted symmetric key.</p>
                     * @param _encryption <p>Whether required to encrypt sensitive information in the response, need to be specified encryption algorithm Algorithm, initial vector for CBC encryption, and encrypted symmetric key.</p>
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
                     * <p>Base64 value of the ID card portrait side.</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: the downloaded image should be no more than 7M after Base64 encoding.</li><li>Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for coding specification.</li><li>Either ImageBase64 or ImageUrl must be provided. If both are provided, proceed to use parameters according to the priority of ImageUrl > ImageBase64.</li></ul>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>Url address of the ID card portrait side</p><ul><li>Supported image formats: PNG, JPG, JPEG. GIF format is not currently supported.</li><li>Supported image size: The downloaded image after Base64 encoding is no more than 3M. Image download time is no more than 3 seconds.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of non-Tencent Cloud Storage URLs may be impacted to a certain extent.</li></ul>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>Configuration.</p><ul><li><p>All the following optional fields are bool type, default false.<br>CopyWarn, alarm for photocopy.<br>BorderCheckWarn, border and frame block alarm.<br>ReshootWarn, alarm for rephotographing.<br>DetectPsWarn, PS detection alarm (suspected PS traces).<br>TempIdWarn, temporary ID card alarm.<br>Quality, image Quality alarm (evaluates blurriness).</p></li><li><p>SDK configuration method for reference:<br>Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true}).</p></li><li><p>API 3.0 Explorer setting method for reference:<br>Config = {"CopyWarn":true,"ReshootWarn":true}.</p></li></ul>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Whether required to encrypt sensitive information in the response.</p><ul><li>Default false.</li><li>Sensitive information includes Response.IdNum and Response.Name.</li></ul>
                     */
                    bool m_isEncrypt;
                    bool m_isEncryptHasBeenSet;

                    /**
                     * <p>Whether required to encrypt the response body.</p>
                     */
                    bool m_isEncryptResponse;
                    bool m_isEncryptResponseHasBeenSet;

                    /**
                     * <p>Whether required to encrypt sensitive information in the response, need to be specified encryption algorithm Algorithm, initial vector for CBC encryption, and encrypted symmetric key.</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONREQUEST_H_
