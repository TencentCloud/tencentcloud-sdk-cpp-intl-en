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
                     * 获取<p>Alias that makes the key easier to identify and understand. It cannot be empty and must contain 1-60 alphanumeric characters, hyphens (-), or underscores (_), and start with a letter or digit. Aliases prefixed with kms- are reserved for cloud services. The alias must be unique.</p>
                     * @return Alias <p>Alias that makes the key easier to identify and understand. It cannot be empty and must contain 1-60 alphanumeric characters, hyphens (-), or underscores (_), and start with a letter or digit. Aliases prefixed with kms- are reserved for cloud services. The alias must be unique.</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>Alias that makes the key easier to identify and understand. It cannot be empty and must contain 1-60 alphanumeric characters, hyphens (-), or underscores (_), and start with a letter or digit. Aliases prefixed with kms- are reserved for cloud services. The alias must be unique.</p>
                     * @param _alias <p>Alias that makes the key easier to identify and understand. It cannot be empty and must contain 1-60 alphanumeric characters, hyphens (-), or underscores (_), and start with a letter or digit. Aliases prefixed with kms- are reserved for cloud services. The alias must be unique.</p>
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
                     * 获取<p>Description of the CMK. Maximum length: 1024 bytes.</p>
                     * @return Description <p>Description of the CMK. Maximum length: 1024 bytes.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description of the CMK. Maximum length: 1024 bytes.</p>
                     * @param _description <p>Description of the CMK. Maximum length: 1024 bytes.</p>
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
                     * 获取<p>Specifies the purpose of the key. The default value is "ENCRYPT_DECRYPT", which indicates creating a symmetric encryption/decryption key. Other supported purposes: "ASYMMETRIC_DECRYPT_RSA_2048" indicates creating an RSA2048 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_3072" indicates creating an RSA3072 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_4096" indicates creating an RSA4096 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_SM2" indicates creating an SM2 asymmetric key for encryption/decryption; "ASYMMETRIC_SIGN_VERIFY_SM2" indicates creating an SM2 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECC" indicates creating an ECC asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_2048" indicates creating an RSA_2048 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_3072" indicates creating an RSA_3072 asymmetric key for signature generation and verification; <br>"ASYMMETRIC_SIGN_VERIFY_RSA_4096" indicates creating an RSA_4096 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECDSA384" indicates creating an ECDSA384 asymmetric key for signature generation and verification. For the complete list of key purposes and supported algorithms, call the ListAlgorithms API.</p>
                     * @return KeyUsage <p>Specifies the purpose of the key. The default value is "ENCRYPT_DECRYPT", which indicates creating a symmetric encryption/decryption key. Other supported purposes: "ASYMMETRIC_DECRYPT_RSA_2048" indicates creating an RSA2048 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_3072" indicates creating an RSA3072 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_4096" indicates creating an RSA4096 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_SM2" indicates creating an SM2 asymmetric key for encryption/decryption; "ASYMMETRIC_SIGN_VERIFY_SM2" indicates creating an SM2 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECC" indicates creating an ECC asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_2048" indicates creating an RSA_2048 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_3072" indicates creating an RSA_3072 asymmetric key for signature generation and verification; <br>"ASYMMETRIC_SIGN_VERIFY_RSA_4096" indicates creating an RSA_4096 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECDSA384" indicates creating an ECDSA384 asymmetric key for signature generation and verification. For the complete list of key purposes and supported algorithms, call the ListAlgorithms API.</p>
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置<p>Specifies the purpose of the key. The default value is "ENCRYPT_DECRYPT", which indicates creating a symmetric encryption/decryption key. Other supported purposes: "ASYMMETRIC_DECRYPT_RSA_2048" indicates creating an RSA2048 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_3072" indicates creating an RSA3072 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_4096" indicates creating an RSA4096 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_SM2" indicates creating an SM2 asymmetric key for encryption/decryption; "ASYMMETRIC_SIGN_VERIFY_SM2" indicates creating an SM2 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECC" indicates creating an ECC asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_2048" indicates creating an RSA_2048 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_3072" indicates creating an RSA_3072 asymmetric key for signature generation and verification; <br>"ASYMMETRIC_SIGN_VERIFY_RSA_4096" indicates creating an RSA_4096 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECDSA384" indicates creating an ECDSA384 asymmetric key for signature generation and verification. For the complete list of key purposes and supported algorithms, call the ListAlgorithms API.</p>
                     * @param _keyUsage <p>Specifies the purpose of the key. The default value is "ENCRYPT_DECRYPT", which indicates creating a symmetric encryption/decryption key. Other supported purposes: "ASYMMETRIC_DECRYPT_RSA_2048" indicates creating an RSA2048 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_3072" indicates creating an RSA3072 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_4096" indicates creating an RSA4096 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_SM2" indicates creating an SM2 asymmetric key for encryption/decryption; "ASYMMETRIC_SIGN_VERIFY_SM2" indicates creating an SM2 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECC" indicates creating an ECC asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_2048" indicates creating an RSA_2048 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_3072" indicates creating an RSA_3072 asymmetric key for signature generation and verification; <br>"ASYMMETRIC_SIGN_VERIFY_RSA_4096" indicates creating an RSA_4096 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECDSA384" indicates creating an ECDSA384 asymmetric key for signature generation and verification. For the complete list of key purposes and supported algorithms, call the ListAlgorithms API.</p>
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
                     * 获取<p>Specifies the key type. The default value is 1. 1 indicates the default type, where the CMK is created by KMS. 2 indicates the EXTERNAL type, where you need to import the key material. For more information, see the GetParametersForImport and ImportKeyMaterial APIs.</p>
                     * @return Type <p>Specifies the key type. The default value is 1. 1 indicates the default type, where the CMK is created by KMS. 2 indicates the EXTERNAL type, where you need to import the key material. For more information, see the GetParametersForImport and ImportKeyMaterial APIs.</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>Specifies the key type. The default value is 1. 1 indicates the default type, where the CMK is created by KMS. 2 indicates the EXTERNAL type, where you need to import the key material. For more information, see the GetParametersForImport and ImportKeyMaterial APIs.</p>
                     * @param _type <p>Specifies the key type. The default value is 1. 1 indicates the default type, where the CMK is created by KMS. 2 indicates the EXTERNAL type, where you need to import the key material. For more information, see the GetParametersForImport and ImportKeyMaterial APIs.</p>
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
                     * 获取<p>Tag list.</p>
                     * @return Tags <p>Tag list.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag list.</p>
                     * @param _tags <p>Tag list.</p>
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
                     * 获取<p>HSM cluster ID corresponding to KMS Advanced Edition (valid only for KMS exclusive/managed service instances).</p>
                     * @return HsmClusterId <p>HSM cluster ID corresponding to KMS Advanced Edition (valid only for KMS exclusive/managed service instances).</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>HSM cluster ID corresponding to KMS Advanced Edition (valid only for KMS exclusive/managed service instances).</p>
                     * @param _hsmClusterId <p>HSM cluster ID corresponding to KMS Advanced Edition (valid only for KMS exclusive/managed service instances).</p>
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
                     * <p>Alias that makes the key easier to identify and understand. It cannot be empty and must contain 1-60 alphanumeric characters, hyphens (-), or underscores (_), and start with a letter or digit. Aliases prefixed with kms- are reserved for cloud services. The alias must be unique.</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>Description of the CMK. Maximum length: 1024 bytes.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Specifies the purpose of the key. The default value is "ENCRYPT_DECRYPT", which indicates creating a symmetric encryption/decryption key. Other supported purposes: "ASYMMETRIC_DECRYPT_RSA_2048" indicates creating an RSA2048 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_3072" indicates creating an RSA3072 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_RSA_4096" indicates creating an RSA4096 asymmetric key for encryption/decryption; "ASYMMETRIC_DECRYPT_SM2" indicates creating an SM2 asymmetric key for encryption/decryption; "ASYMMETRIC_SIGN_VERIFY_SM2" indicates creating an SM2 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECC" indicates creating an ECC asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_2048" indicates creating an RSA_2048 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_RSA_3072" indicates creating an RSA_3072 asymmetric key for signature generation and verification; <br>"ASYMMETRIC_SIGN_VERIFY_RSA_4096" indicates creating an RSA_4096 asymmetric key for signature generation and verification; "ASYMMETRIC_SIGN_VERIFY_ECDSA384" indicates creating an ECDSA384 asymmetric key for signature generation and verification. For the complete list of key purposes and supported algorithms, call the ListAlgorithms API.</p>
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * <p>Specifies the key type. The default value is 1. 1 indicates the default type, where the CMK is created by KMS. 2 indicates the EXTERNAL type, where you need to import the key material. For more information, see the GetParametersForImport and ImportKeyMaterial APIs.</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Tag list.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>HSM cluster ID corresponding to KMS Advanced Edition (valid only for KMS exclusive/managed service instances).</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYREQUEST_H_
