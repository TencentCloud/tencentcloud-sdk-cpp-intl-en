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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYREQUEST_H_

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
                * GenerateDataKey request structure.
                */
                class GenerateDataKeyRequest : public AbstractModel
                {
                public:
                    GenerateDataKeyRequest();
                    ~GenerateDataKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Globally unique CMK ID
                     * @return KeyId Globally unique CMK ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Globally unique CMK ID
                     * @param _keyId Globally unique CMK ID
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Specifies the encryption algorithm and size of the `DataKey`. Valid values: AES_128, AES_256. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * @return KeySpec Specifies the encryption algorithm and size of the `DataKey`. Valid values: AES_128, AES_256. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * 
                     */
                    std::string GetKeySpec() const;

                    /**
                     * 设置Specifies the encryption algorithm and size of the `DataKey`. Valid values: AES_128, AES_256. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * @param _keySpec Specifies the encryption algorithm and size of the `DataKey`. Valid values: AES_128, AES_256. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * 
                     */
                    void SetKeySpec(const std::string& _keySpec);

                    /**
                     * 判断参数 KeySpec 是否已赋值
                     * @return KeySpec 是否已赋值
                     * 
                     */
                    bool KeySpecHasBeenSet() const;

                    /**
                     * 获取Length of the `DataKey`. If both `NumberOfBytes` and `KeySpec` are specified, `NumberOfBytes` will prevail. Minimum value: 1; maximum value: 1024. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * @return NumberOfBytes Length of the `DataKey`. If both `NumberOfBytes` and `KeySpec` are specified, `NumberOfBytes` will prevail. Minimum value: 1; maximum value: 1024. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * 
                     */
                    uint64_t GetNumberOfBytes() const;

                    /**
                     * 设置Length of the `DataKey`. If both `NumberOfBytes` and `KeySpec` are specified, `NumberOfBytes` will prevail. Minimum value: 1; maximum value: 1024. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * @param _numberOfBytes Length of the `DataKey`. If both `NumberOfBytes` and `KeySpec` are specified, `NumberOfBytes` will prevail. Minimum value: 1; maximum value: 1024. Either `KeySpec` or `NumberOfBytes` must be specified.
                     * 
                     */
                    void SetNumberOfBytes(const uint64_t& _numberOfBytes);

                    /**
                     * 判断参数 NumberOfBytes 是否已赋值
                     * @return NumberOfBytes 是否已赋值
                     * 
                     */
                    bool NumberOfBytesHasBeenSet() const;

                    /**
                     * 获取JSON string of key-value pair. If this field is used, the same string should be entered when the returned `DataKey` is decrypted.
                     * @return EncryptionContext JSON string of key-value pair. If this field is used, the same string should be entered when the returned `DataKey` is decrypted.
                     * 
                     */
                    std::string GetEncryptionContext() const;

                    /**
                     * 设置JSON string of key-value pair. If this field is used, the same string should be entered when the returned `DataKey` is decrypted.
                     * @param _encryptionContext JSON string of key-value pair. If this field is used, the same string should be entered when the returned `DataKey` is decrypted.
                     * 
                     */
                    void SetEncryptionContext(const std::string& _encryptionContext);

                    /**
                     * 判断参数 EncryptionContext 是否已赋值
                     * @return EncryptionContext 是否已赋值
                     * 
                     */
                    bool EncryptionContextHasBeenSet() const;

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
                     * 获取Asymmetric encryption algorithm. Valid values: `SM2` (C1C3C2 ciphertext is returned)`, `SM2_C1C3C2_ASN1` (C1C3C2 ASN1 ciphertext is returned), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256`. This field is used in combination with `EncryptionPublicKey` for encryption. If it is left empty, an SM2 public key will be used by default.
                     * @return EncryptionAlgorithm Asymmetric encryption algorithm. Valid values: `SM2` (C1C3C2 ciphertext is returned)`, `SM2_C1C3C2_ASN1` (C1C3C2 ASN1 ciphertext is returned), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256`. This field is used in combination with `EncryptionPublicKey` for encryption. If it is left empty, an SM2 public key will be used by default.
                     * 
                     */
                    std::string GetEncryptionAlgorithm() const;

                    /**
                     * 设置Asymmetric encryption algorithm. Valid values: `SM2` (C1C3C2 ciphertext is returned)`, `SM2_C1C3C2_ASN1` (C1C3C2 ASN1 ciphertext is returned), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256`. This field is used in combination with `EncryptionPublicKey` for encryption. If it is left empty, an SM2 public key will be used by default.
                     * @param _encryptionAlgorithm Asymmetric encryption algorithm. Valid values: `SM2` (C1C3C2 ciphertext is returned)`, `SM2_C1C3C2_ASN1` (C1C3C2 ASN1 ciphertext is returned), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256`. This field is used in combination with `EncryptionPublicKey` for encryption. If it is left empty, an SM2 public key will be used by default.
                     * 
                     */
                    void SetEncryptionAlgorithm(const std::string& _encryptionAlgorithm);

                    /**
                     * 判断参数 EncryptionAlgorithm 是否已赋值
                     * @return EncryptionAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptionAlgorithmHasBeenSet() const;

                    /**
                     * 获取Indicates whether the data generated key is managed by KMS. 1 means the key is managed and saved by KMS. 0 means the key is not managed by KMS.
                     * @return IsHostedByKms Indicates whether the data generated key is managed by KMS. 1 means the key is managed and saved by KMS. 0 means the key is not managed by KMS.
                     * 
                     */
                    uint64_t GetIsHostedByKms() const;

                    /**
                     * 设置Indicates whether the data generated key is managed by KMS. 1 means the key is managed and saved by KMS. 0 means the key is not managed by KMS.
                     * @param _isHostedByKms Indicates whether the data generated key is managed by KMS. 1 means the key is managed and saved by KMS. 0 means the key is not managed by KMS.
                     * 
                     */
                    void SetIsHostedByKms(const uint64_t& _isHostedByKms);

                    /**
                     * 判断参数 IsHostedByKms 是否已赋值
                     * @return IsHostedByKms 是否已赋值
                     * 
                     */
                    bool IsHostedByKmsHasBeenSet() const;

                    /**
                     * 获取Name of the data key. required when IsHostedByKms is 1. optional when IsHostedByKms is 0 as KMS does not manage it.
                     * @return DataKeyName Name of the data key. required when IsHostedByKms is 1. optional when IsHostedByKms is 0 as KMS does not manage it.
                     * 
                     */
                    std::string GetDataKeyName() const;

                    /**
                     * 设置Name of the data key. required when IsHostedByKms is 1. optional when IsHostedByKms is 0 as KMS does not manage it.
                     * @param _dataKeyName Name of the data key. required when IsHostedByKms is 1. optional when IsHostedByKms is 0 as KMS does not manage it.
                     * 
                     */
                    void SetDataKeyName(const std::string& _dataKeyName);

                    /**
                     * 判断参数 DataKeyName 是否已赋值
                     * @return DataKeyName 是否已赋值
                     * 
                     */
                    bool DataKeyNameHasBeenSet() const;

                    /**
                     * 获取Describes the data key. maximum 100 bytes.
                     * @return Description Describes the data key. maximum 100 bytes.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Describes the data key. maximum 100 bytes.
                     * @param _description Describes the data key. maximum 100 bytes.
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
                     * 获取HSM cluster ID corresponding to the KMS exclusive edition. if HsmClusterId is specified, it indicates the root key is in this cluster and verifies whether KeyId corresponds to HsmClusterId.
                     * @return HsmClusterId HSM cluster ID corresponding to the KMS exclusive edition. if HsmClusterId is specified, it indicates the root key is in this cluster and verifies whether KeyId corresponds to HsmClusterId.
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置HSM cluster ID corresponding to the KMS exclusive edition. if HsmClusterId is specified, it indicates the root key is in this cluster and verifies whether KeyId corresponds to HsmClusterId.
                     * @param _hsmClusterId HSM cluster ID corresponding to the KMS exclusive edition. if HsmClusterId is specified, it indicates the root key is in this cluster and verifies whether KeyId corresponds to HsmClusterId.
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
                     * Globally unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Specifies the encryption algorithm and size of the `DataKey`. Valid values: AES_128, AES_256. Either `KeySpec` or `NumberOfBytes` must be specified.
                     */
                    std::string m_keySpec;
                    bool m_keySpecHasBeenSet;

                    /**
                     * Length of the `DataKey`. If both `NumberOfBytes` and `KeySpec` are specified, `NumberOfBytes` will prevail. Minimum value: 1; maximum value: 1024. Either `KeySpec` or `NumberOfBytes` must be specified.
                     */
                    uint64_t m_numberOfBytes;
                    bool m_numberOfBytesHasBeenSet;

                    /**
                     * JSON string of key-value pair. If this field is used, the same string should be entered when the returned `DataKey` is decrypted.
                     */
                    std::string m_encryptionContext;
                    bool m_encryptionContextHasBeenSet;

                    /**
                     * PEM-encoded public key (2048-bit RSA/SM2 key), which can be used to encrypt the `Plaintext` returned. If this field is left empty, the `Plaintext` will not be encrypted.
                     */
                    std::string m_encryptionPublicKey;
                    bool m_encryptionPublicKeyHasBeenSet;

                    /**
                     * Asymmetric encryption algorithm. Valid values: `SM2` (C1C3C2 ciphertext is returned)`, `SM2_C1C3C2_ASN1` (C1C3C2 ASN1 ciphertext is returned), `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256`. This field is used in combination with `EncryptionPublicKey` for encryption. If it is left empty, an SM2 public key will be used by default.
                     */
                    std::string m_encryptionAlgorithm;
                    bool m_encryptionAlgorithmHasBeenSet;

                    /**
                     * Indicates whether the data generated key is managed by KMS. 1 means the key is managed and saved by KMS. 0 means the key is not managed by KMS.
                     */
                    uint64_t m_isHostedByKms;
                    bool m_isHostedByKmsHasBeenSet;

                    /**
                     * Name of the data key. required when IsHostedByKms is 1. optional when IsHostedByKms is 0 as KMS does not manage it.
                     */
                    std::string m_dataKeyName;
                    bool m_dataKeyNameHasBeenSet;

                    /**
                     * Describes the data key. maximum 100 bytes.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * HSM cluster ID corresponding to the KMS exclusive edition. if HsmClusterId is specified, it indicates the root key is in this cluster and verifies whether KeyId corresponds to HsmClusterId.
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYREQUEST_H_
