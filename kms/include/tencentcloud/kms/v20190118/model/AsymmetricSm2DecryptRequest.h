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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTREQUEST_H_

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
                * AsymmetricSm2Decrypt request structure.
                */
                class AsymmetricSm2DecryptRequest : public AbstractModel
                {
                public:
                    AsymmetricSm2DecryptRequest();
                    ~AsymmetricSm2DecryptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique CMK ID
                     * @return KeyId Unique CMK ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Unique CMK ID
                     * @param _keyId Unique CMK ID
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
                     * 获取Specifies that the ciphertext encrypted with PublicKey is Base64 encoded. the original ciphertext format needs to be C1C3C2_ASN1. the length of the original ciphertext cannot exceed 256 bytes.
                     * @return Ciphertext Specifies that the ciphertext encrypted with PublicKey is Base64 encoded. the original ciphertext format needs to be C1C3C2_ASN1. the length of the original ciphertext cannot exceed 256 bytes.
                     * 
                     */
                    std::string GetCiphertext() const;

                    /**
                     * 设置Specifies that the ciphertext encrypted with PublicKey is Base64 encoded. the original ciphertext format needs to be C1C3C2_ASN1. the length of the original ciphertext cannot exceed 256 bytes.
                     * @param _ciphertext Specifies that the ciphertext encrypted with PublicKey is Base64 encoded. the original ciphertext format needs to be C1C3C2_ASN1. the length of the original ciphertext cannot exceed 256 bytes.
                     * 
                     */
                    void SetCiphertext(const std::string& _ciphertext);

                    /**
                     * 判断参数 Ciphertext 是否已赋值
                     * @return Ciphertext 是否已赋值
                     * 
                     */
                    bool CiphertextHasBeenSet() const;

                private:

                    /**
                     * Unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Specifies that the ciphertext encrypted with PublicKey is Base64 encoded. the original ciphertext format needs to be C1C3C2_ASN1. the length of the original ciphertext cannot exceed 256 bytes.
                     */
                    std::string m_ciphertext;
                    bool m_ciphertextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTREQUEST_H_
