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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTODECRYPTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTODECRYPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * PostQuantumCryptoDecrypt request structure.
                */
                class PostQuantumCryptoDecryptRequest : public AbstractModel
                {
                public:
                    PostQuantumCryptoDecryptRequest();
                    ~PostQuantumCryptoDecryptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ciphertext data to be decrypted.
                     * @return CiphertextBlob The ciphertext data to be decrypted.
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置The ciphertext data to be decrypted.
                     * @param _ciphertextBlob The ciphertext data to be decrypted.
                     * 
                     */
                    void SetCiphertextBlob(const std::string& _ciphertextBlob);

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     * 
                     */
                    bool CiphertextBlobHasBeenSet() const;

                    /**
                     * 获取PEM-encoded public key (2048-bit RSA/SM2 key), which can be used to encrypt the `Plaintext` returned. If this field is left empty, the `Plaintext` will not be encrypted.
                     * @return EncryptionPublicKey PEM-encoded public key (2048-bit RSA/SM2 key), which can be used to encrypt the `Plaintext` returned. If this field is left empty, the `Plaintext` will not be encrypted.
                     * 
                     */
                    std::string GetEncryptionPublicKey() const;

                    /**
                     * 设置PEM-encoded public key (2048-bit RSA/SM2 key), which can be used to encrypt the `Plaintext` returned. If this field is left empty, the `Plaintext` will not be encrypted.
                     * @param _encryptionPublicKey PEM-encoded public key (2048-bit RSA/SM2 key), which can be used to encrypt the `Plaintext` returned. If this field is left empty, the `Plaintext` will not be encrypted.
                     * 
                     */
                    void SetEncryptionPublicKey(const std::string& _encryptionPublicKey);

                    /**
                     * 判断参数 EncryptionPublicKey 是否已赋值
                     * @return EncryptionPublicKey 是否已赋值
                     * 
                     */
                    bool EncryptionPublicKeyHasBeenSet() const;

                    /**
                     * 获取Asymmetric encryption algorithm. It is used in combination with `EncryptionPublicKey` to encrypt the returned data. Values: `SM2` u200d(Return the ciphertext in the format of "C1C3C2"), `SM2_C1C3C2_ASN1` (Return the ciphertext in the format of "C1C3C2 ASN1"), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, `RSAES_OAEP_SHA_256`. It defaults to `SM2` if it's not specified. 
                     * @return EncryptionAlgorithm Asymmetric encryption algorithm. It is used in combination with `EncryptionPublicKey` to encrypt the returned data. Values: `SM2` u200d(Return the ciphertext in the format of "C1C3C2"), `SM2_C1C3C2_ASN1` (Return the ciphertext in the format of "C1C3C2 ASN1"), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, `RSAES_OAEP_SHA_256`. It defaults to `SM2` if it's not specified. 
                     * 
                     */
                    std::string GetEncryptionAlgorithm() const;

                    /**
                     * 设置Asymmetric encryption algorithm. It is used in combination with `EncryptionPublicKey` to encrypt the returned data. Values: `SM2` u200d(Return the ciphertext in the format of "C1C3C2"), `SM2_C1C3C2_ASN1` (Return the ciphertext in the format of "C1C3C2 ASN1"), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, `RSAES_OAEP_SHA_256`. It defaults to `SM2` if it's not specified. 
                     * @param _encryptionAlgorithm Asymmetric encryption algorithm. It is used in combination with `EncryptionPublicKey` to encrypt the returned data. Values: `SM2` u200d(Return the ciphertext in the format of "C1C3C2"), `SM2_C1C3C2_ASN1` (Return the ciphertext in the format of "C1C3C2 ASN1"), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, `RSAES_OAEP_SHA_256`. It defaults to `SM2` if it's not specified. 
                     * 
                     */
                    void SetEncryptionAlgorithm(const std::string& _encryptionAlgorithm);

                    /**
                     * 判断参数 EncryptionAlgorithm 是否已赋值
                     * @return EncryptionAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptionAlgorithmHasBeenSet() const;

                private:

                    /**
                     * The ciphertext data to be decrypted.
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * PEM-encoded public key (2048-bit RSA/SM2 key), which can be used to encrypt the `Plaintext` returned. If this field is left empty, the `Plaintext` will not be encrypted.
                     */
                    std::string m_encryptionPublicKey;
                    bool m_encryptionPublicKeyHasBeenSet;

                    /**
                     * Asymmetric encryption algorithm. It is used in combination with `EncryptionPublicKey` to encrypt the returned data. Values: `SM2` u200d(Return the ciphertext in the format of "C1C3C2"), `SM2_C1C3C2_ASN1` (Return the ciphertext in the format of "C1C3C2 ASN1"), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, `RSAES_OAEP_SHA_256`. It defaults to `SM2` if it's not specified. 
                     */
                    std::string m_encryptionAlgorithm;
                    bool m_encryptionAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTODECRYPTREQUEST_H_
