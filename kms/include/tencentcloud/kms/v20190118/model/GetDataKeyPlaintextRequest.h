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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETDATAKEYPLAINTEXTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETDATAKEYPLAINTEXTREQUEST_H_

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
                * GetDataKeyPlaintext request structure.
                */
                class GetDataKeyPlaintextRequest : public AbstractModel
                {
                public:
                    GetDataKeyPlaintextRequest();
                    ~GetDataKeyPlaintextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique id of a data key.
                     * @return DataKeyId Unique id of a data key.
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置Unique id of a data key.
                     * @param _dataKeyId Unique id of a data key.
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

                    /**
                     * 获取PEM formatted public key string, supporting RSA2048 and SM2 public keys, and used to encrypt the plaintext value in the returned data. If it is empty, plaintext value will not be encrypted.
                     * @return EncryptionPublicKey PEM formatted public key string, supporting RSA2048 and SM2 public keys, and used to encrypt the plaintext value in the returned data. If it is empty, plaintext value will not be encrypted.
                     * 
                     */
                    std::string GetEncryptionPublicKey() const;

                    /**
                     * 设置PEM formatted public key string, supporting RSA2048 and SM2 public keys, and used to encrypt the plaintext value in the returned data. If it is empty, plaintext value will not be encrypted.
                     * @param _encryptionPublicKey PEM formatted public key string, supporting RSA2048 and SM2 public keys, and used to encrypt the plaintext value in the returned data. If it is empty, plaintext value will not be encrypted.
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
                     * 获取Asymmetric encryption algorithm, used in conjunction with EncryptionPublicKey to encrypt the returned data. It currently supports SM2 (returns ciphertext in C1C3C2 format), SM2_C1C3C2_ASN1 (returns ciphertext in C1C3C2 ASN1 format), RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, and RSAES_OAEP_SHA_256. If it is empty, the default value SM2 is used.
                     * @return EncryptionAlgorithm Asymmetric encryption algorithm, used in conjunction with EncryptionPublicKey to encrypt the returned data. It currently supports SM2 (returns ciphertext in C1C3C2 format), SM2_C1C3C2_ASN1 (returns ciphertext in C1C3C2 ASN1 format), RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, and RSAES_OAEP_SHA_256. If it is empty, the default value SM2 is used.
                     * 
                     */
                    std::string GetEncryptionAlgorithm() const;

                    /**
                     * 设置Asymmetric encryption algorithm, used in conjunction with EncryptionPublicKey to encrypt the returned data. It currently supports SM2 (returns ciphertext in C1C3C2 format), SM2_C1C3C2_ASN1 (returns ciphertext in C1C3C2 ASN1 format), RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, and RSAES_OAEP_SHA_256. If it is empty, the default value SM2 is used.
                     * @param _encryptionAlgorithm Asymmetric encryption algorithm, used in conjunction with EncryptionPublicKey to encrypt the returned data. It currently supports SM2 (returns ciphertext in C1C3C2 format), SM2_C1C3C2_ASN1 (returns ciphertext in C1C3C2 ASN1 format), RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, and RSAES_OAEP_SHA_256. If it is empty, the default value SM2 is used.
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
                     * Unique id of a data key.
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                    /**
                     * PEM formatted public key string, supporting RSA2048 and SM2 public keys, and used to encrypt the plaintext value in the returned data. If it is empty, plaintext value will not be encrypted.
                     */
                    std::string m_encryptionPublicKey;
                    bool m_encryptionPublicKeyHasBeenSet;

                    /**
                     * Asymmetric encryption algorithm, used in conjunction with EncryptionPublicKey to encrypt the returned data. It currently supports SM2 (returns ciphertext in C1C3C2 format), SM2_C1C3C2_ASN1 (returns ciphertext in C1C3C2 ASN1 format), RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, and RSAES_OAEP_SHA_256. If it is empty, the default value SM2 is used.
                     */
                    std::string m_encryptionAlgorithm;
                    bool m_encryptionAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETDATAKEYPLAINTEXTREQUEST_H_
