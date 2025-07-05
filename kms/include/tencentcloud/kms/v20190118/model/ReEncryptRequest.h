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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_REENCRYPTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_REENCRYPTREQUEST_H_

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
                * ReEncrypt request structure.
                */
                class ReEncryptRequest : public AbstractModel
                {
                public:
                    ReEncryptRequest();
                    ~ReEncryptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Ciphertext to be re-encrypted
                     * @return CiphertextBlob Ciphertext to be re-encrypted
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置Ciphertext to be re-encrypted
                     * @param _ciphertextBlob Ciphertext to be re-encrypted
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
                     * 获取CMK used for re-encryption. If this parameter is empty, the ciphertext will be re-encrypted by using the original CMK (as long as the key is not rotated, the ciphertext will not be refreshed)
                     * @return DestinationKeyId CMK used for re-encryption. If this parameter is empty, the ciphertext will be re-encrypted by using the original CMK (as long as the key is not rotated, the ciphertext will not be refreshed)
                     * 
                     */
                    std::string GetDestinationKeyId() const;

                    /**
                     * 设置CMK used for re-encryption. If this parameter is empty, the ciphertext will be re-encrypted by using the original CMK (as long as the key is not rotated, the ciphertext will not be refreshed)
                     * @param _destinationKeyId CMK used for re-encryption. If this parameter is empty, the ciphertext will be re-encrypted by using the original CMK (as long as the key is not rotated, the ciphertext will not be refreshed)
                     * 
                     */
                    void SetDestinationKeyId(const std::string& _destinationKeyId);

                    /**
                     * 判断参数 DestinationKeyId 是否已赋值
                     * @return DestinationKeyId 是否已赋值
                     * 
                     */
                    bool DestinationKeyIdHasBeenSet() const;

                    /**
                     * 获取JSON string of the key-value pair used during ciphertext encryption by `CiphertextBlob`. If not used during encryption, this parameter will be empty
                     * @return SourceEncryptionContext JSON string of the key-value pair used during ciphertext encryption by `CiphertextBlob`. If not used during encryption, this parameter will be empty
                     * 
                     */
                    std::string GetSourceEncryptionContext() const;

                    /**
                     * 设置JSON string of the key-value pair used during ciphertext encryption by `CiphertextBlob`. If not used during encryption, this parameter will be empty
                     * @param _sourceEncryptionContext JSON string of the key-value pair used during ciphertext encryption by `CiphertextBlob`. If not used during encryption, this parameter will be empty
                     * 
                     */
                    void SetSourceEncryptionContext(const std::string& _sourceEncryptionContext);

                    /**
                     * 判断参数 SourceEncryptionContext 是否已赋值
                     * @return SourceEncryptionContext 是否已赋值
                     * 
                     */
                    bool SourceEncryptionContextHasBeenSet() const;

                    /**
                     * 获取JSON string of the key-value pair used during re-encryption. If this field is used, the same string should be entered when the returned new ciphertext is decrypted
                     * @return DestinationEncryptionContext JSON string of the key-value pair used during re-encryption. If this field is used, the same string should be entered when the returned new ciphertext is decrypted
                     * 
                     */
                    std::string GetDestinationEncryptionContext() const;

                    /**
                     * 设置JSON string of the key-value pair used during re-encryption. If this field is used, the same string should be entered when the returned new ciphertext is decrypted
                     * @param _destinationEncryptionContext JSON string of the key-value pair used during re-encryption. If this field is used, the same string should be entered when the returned new ciphertext is decrypted
                     * 
                     */
                    void SetDestinationEncryptionContext(const std::string& _destinationEncryptionContext);

                    /**
                     * 判断参数 DestinationEncryptionContext 是否已赋值
                     * @return DestinationEncryptionContext 是否已赋值
                     * 
                     */
                    bool DestinationEncryptionContextHasBeenSet() const;

                private:

                    /**
                     * Ciphertext to be re-encrypted
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * CMK used for re-encryption. If this parameter is empty, the ciphertext will be re-encrypted by using the original CMK (as long as the key is not rotated, the ciphertext will not be refreshed)
                     */
                    std::string m_destinationKeyId;
                    bool m_destinationKeyIdHasBeenSet;

                    /**
                     * JSON string of the key-value pair used during ciphertext encryption by `CiphertextBlob`. If not used during encryption, this parameter will be empty
                     */
                    std::string m_sourceEncryptionContext;
                    bool m_sourceEncryptionContextHasBeenSet;

                    /**
                     * JSON string of the key-value pair used during re-encryption. If this field is used, the same string should be entered when the returned new ciphertext is decrypted
                     */
                    std::string m_destinationEncryptionContext;
                    bool m_destinationEncryptionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_REENCRYPTREQUEST_H_
