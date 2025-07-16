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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETDATAKEYPLAINTEXTRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETDATAKEYPLAINTEXTRESPONSE_H_

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
                * GetDataKeyPlaintext response structure.
                */
                class GetDataKeyPlaintextResponse : public AbstractModel
                {
                public:
                    GetDataKeyPlaintextResponse();
                    ~GetDataKeyPlaintextResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取If EncryptionPublicKey is not provided during the call, the field value is the plaintext encoded in Base64, and the Base64 decoding is required to obtain the plaintext. If EncryptionPublicKey is provided during the call, the field value is the ciphertext asymmetrically encrypted with the EncryptionPublicKey and encoded in Base64. After Base64 decoding, the private key corresponding to the user-uploaded public key is used for further decryption to obtain the plaintext.
                     * @return Plaintext If EncryptionPublicKey is not provided during the call, the field value is the plaintext encoded in Base64, and the Base64 decoding is required to obtain the plaintext. If EncryptionPublicKey is provided during the call, the field value is the ciphertext asymmetrically encrypted with the EncryptionPublicKey and encoded in Base64. After Base64 decoding, the private key corresponding to the user-uploaded public key is used for further decryption to obtain the plaintext.
                     * 
                     */
                    std::string GetPlaintext() const;

                    /**
                     * 判断参数 Plaintext 是否已赋值
                     * @return Plaintext 是否已赋值
                     * 
                     */
                    bool PlaintextHasBeenSet() const;

                private:

                    /**
                     * If EncryptionPublicKey is not provided during the call, the field value is the plaintext encoded in Base64, and the Base64 decoding is required to obtain the plaintext. If EncryptionPublicKey is provided during the call, the field value is the ciphertext asymmetrically encrypted with the EncryptionPublicKey and encoded in Base64. After Base64 decoding, the private key corresponding to the user-uploaded public key is used for further decryption to obtain the plaintext.
                     */
                    std::string m_plaintext;
                    bool m_plaintextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETDATAKEYPLAINTEXTRESPONSE_H_
