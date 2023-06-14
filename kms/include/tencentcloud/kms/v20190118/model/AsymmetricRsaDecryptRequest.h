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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICRSADECRYPTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICRSADECRYPTREQUEST_H_

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
                * AsymmetricRsaDecrypt request structure.
                */
                class AsymmetricRsaDecryptRequest : public AbstractModel
                {
                public:
                    AsymmetricRsaDecryptRequest();
                    ~AsymmetricRsaDecryptRequest() = default;
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
                     * 获取Base64-encoded ciphertext encrypted with `PublicKey`
                     * @return Ciphertext Base64-encoded ciphertext encrypted with `PublicKey`
                     * 
                     */
                    std::string GetCiphertext() const;

                    /**
                     * 设置Base64-encoded ciphertext encrypted with `PublicKey`
                     * @param _ciphertext Base64-encoded ciphertext encrypted with `PublicKey`
                     * 
                     */
                    void SetCiphertext(const std::string& _ciphertext);

                    /**
                     * 判断参数 Ciphertext 是否已赋值
                     * @return Ciphertext 是否已赋值
                     * 
                     */
                    bool CiphertextHasBeenSet() const;

                    /**
                     * 获取Corresponding algorithm when a public key is used for encryption. Valid values: RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, RSAES_OAEP_SHA_256
                     * @return Algorithm Corresponding algorithm when a public key is used for encryption. Valid values: RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, RSAES_OAEP_SHA_256
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Corresponding algorithm when a public key is used for encryption. Valid values: RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, RSAES_OAEP_SHA_256
                     * @param _algorithm Corresponding algorithm when a public key is used for encryption. Valid values: RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, RSAES_OAEP_SHA_256
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                private:

                    /**
                     * Unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Base64-encoded ciphertext encrypted with `PublicKey`
                     */
                    std::string m_ciphertext;
                    bool m_ciphertextHasBeenSet;

                    /**
                     * Corresponding algorithm when a public key is used for encryption. Valid values: RSAES_PKCS1_V1_5, RSAES_OAEP_SHA_1, RSAES_OAEP_SHA_256
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICRSADECRYPTREQUEST_H_
