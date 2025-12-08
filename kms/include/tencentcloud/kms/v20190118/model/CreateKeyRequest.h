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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/Tag.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * CreateKey request structure.
                */
                class CreateKeyRequest : public AbstractModel
                {
                public:
                    CreateKeyRequest();
                    ~CreateKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique alias that makes a key more recognizable and understandable. This parameter cannot be empty, can contain 1-60 letters, digits, `-`, and `_`, and must begin with a letter or digit. The `kms-` prefix is used for Tencent Cloud products.
                     * @return Alias Unique alias that makes a key more recognizable and understandable. This parameter cannot be empty, can contain 1-60 letters, digits, `-`, and `_`, and must begin with a letter or digit. The `kms-` prefix is used for Tencent Cloud products.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Unique alias that makes a key more recognizable and understandable. This parameter cannot be empty, can contain 1-60 letters, digits, `-`, and `_`, and must begin with a letter or digit. The `kms-` prefix is used for Tencent Cloud products.
                     * @param _alias Unique alias that makes a key more recognizable and understandable. This parameter cannot be empty, can contain 1-60 letters, digits, `-`, and `_`, and must begin with a letter or digit. The `kms-` prefix is used for Tencent Cloud products.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取CMK description of up to 1,024 bytes in length
                     * @return Description CMK description of up to 1,024 bytes in length
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置CMK description of up to 1,024 bytes in length
                     * @param _description CMK description of up to 1,024 bytes in length
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Specifies the key purpose, defaults to "ENCRYPT_DECRYPT" indicating the creation of a symmetric encryption/decryption key. other supported purposes include "ASYMMETRIC_DECRYPT_RSA_2048" for RSA2048 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_DECRYPT_SM2" for SM2 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_SIGN_VERIFY_SM2" for SM2 ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_ECC" for ECC ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_RSA_2048" for RSA_2048 ASYMMETRIC keys used for signature verification, and "ASYMMETRIC_SIGN_VERIFY_ECDSA384" for ECDSA384 ASYMMETRIC keys used for signature verification. the complete list of key purposes and algorithm support can be obtained through the ListAlgorithms api.
                     * @return KeyUsage Specifies the key purpose, defaults to "ENCRYPT_DECRYPT" indicating the creation of a symmetric encryption/decryption key. other supported purposes include "ASYMMETRIC_DECRYPT_RSA_2048" for RSA2048 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_DECRYPT_SM2" for SM2 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_SIGN_VERIFY_SM2" for SM2 ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_ECC" for ECC ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_RSA_2048" for RSA_2048 ASYMMETRIC keys used for signature verification, and "ASYMMETRIC_SIGN_VERIFY_ECDSA384" for ECDSA384 ASYMMETRIC keys used for signature verification. the complete list of key purposes and algorithm support can be obtained through the ListAlgorithms api.
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置Specifies the key purpose, defaults to "ENCRYPT_DECRYPT" indicating the creation of a symmetric encryption/decryption key. other supported purposes include "ASYMMETRIC_DECRYPT_RSA_2048" for RSA2048 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_DECRYPT_SM2" for SM2 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_SIGN_VERIFY_SM2" for SM2 ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_ECC" for ECC ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_RSA_2048" for RSA_2048 ASYMMETRIC keys used for signature verification, and "ASYMMETRIC_SIGN_VERIFY_ECDSA384" for ECDSA384 ASYMMETRIC keys used for signature verification. the complete list of key purposes and algorithm support can be obtained through the ListAlgorithms api.
                     * @param _keyUsage Specifies the key purpose, defaults to "ENCRYPT_DECRYPT" indicating the creation of a symmetric encryption/decryption key. other supported purposes include "ASYMMETRIC_DECRYPT_RSA_2048" for RSA2048 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_DECRYPT_SM2" for SM2 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_SIGN_VERIFY_SM2" for SM2 ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_ECC" for ECC ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_RSA_2048" for RSA_2048 ASYMMETRIC keys used for signature verification, and "ASYMMETRIC_SIGN_VERIFY_ECDSA384" for ECDSA384 ASYMMETRIC keys used for signature verification. the complete list of key purposes and algorithm support can be obtained through the ListAlgorithms api.
                     * 
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取Specifies the key type. Default value: 1. Valid value: 1 - default type, indicating that the CMK is created by KMS; 2 - EXTERNAL type, indicating that you need to import key material. For more information, please see the `GetParametersForImport` and `ImportKeyMaterial` API documents.
                     * @return Type Specifies the key type. Default value: 1. Valid value: 1 - default type, indicating that the CMK is created by KMS; 2 - EXTERNAL type, indicating that you need to import key material. For more information, please see the `GetParametersForImport` and `ImportKeyMaterial` API documents.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Specifies the key type. Default value: 1. Valid value: 1 - default type, indicating that the CMK is created by KMS; 2 - EXTERNAL type, indicating that you need to import key material. For more information, please see the `GetParametersForImport` and `ImportKeyMaterial` API documents.
                     * @param _type Specifies the key type. Default value: 1. Valid value: 1 - default type, indicating that the CMK is created by KMS; 2 - EXTERNAL type, indicating that you need to import key material. For more information, please see the `GetParametersForImport` and `ImportKeyMaterial` API documents.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
                     * @return HsmClusterId ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
                     * @param _hsmClusterId ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * Unique alias that makes a key more recognizable and understandable. This parameter cannot be empty, can contain 1-60 letters, digits, `-`, and `_`, and must begin with a letter or digit. The `kms-` prefix is used for Tencent Cloud products.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * CMK description of up to 1,024 bytes in length
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Specifies the key purpose, defaults to "ENCRYPT_DECRYPT" indicating the creation of a symmetric encryption/decryption key. other supported purposes include "ASYMMETRIC_DECRYPT_RSA_2048" for RSA2048 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_DECRYPT_SM2" for SM2 ASYMMETRIC keys used to ENCRYPT and DECRYPT, "ASYMMETRIC_SIGN_VERIFY_SM2" for SM2 ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_ECC" for ECC ASYMMETRIC keys used for signature verification, "ASYMMETRIC_SIGN_VERIFY_RSA_2048" for RSA_2048 ASYMMETRIC keys used for signature verification, and "ASYMMETRIC_SIGN_VERIFY_ECDSA384" for ECDSA384 ASYMMETRIC keys used for signature verification. the complete list of key purposes and algorithm support can be obtained through the ListAlgorithms api.
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * Specifies the key type. Default value: 1. Valid value: 1 - default type, indicating that the CMK is created by KMS; 2 - EXTERNAL type, indicating that you need to import key material. For more information, please see the `GetParametersForImport` and `ImportKeyMaterial` API documents.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYREQUEST_H_
