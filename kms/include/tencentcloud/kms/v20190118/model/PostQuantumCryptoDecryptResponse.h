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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTODECRYPTRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTODECRYPTRESPONSE_H_

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
                * PostQuantumCryptoDecrypt response structure.
                */
                class PostQuantumCryptoDecryptResponse : public AbstractModel
                {
                public:
                    PostQuantumCryptoDecryptResponse();
                    ~PostQuantumCryptoDecryptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Globally unique CMK ID
                     * @return KeyId Globally unique CMK ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取If `EncryptionPublicKey` is left empty, a Base64-encoded ciphertext will be returned. To get the plaintext, you need to decode the ciphertext first.
If `EncryptionPublicKey` is passed in, this field contains the Base64-encoded ciphertext after asymmetric encryption by using the public key in `EncryptionPublicKey` To get the plaintext, you need to first decode the Base64 format, and then decrypwith the private key corresponding with the public key. The private key is uploaded by the user. 
                     * @return PlainText If `EncryptionPublicKey` is left empty, a Base64-encoded ciphertext will be returned. To get the plaintext, you need to decode the ciphertext first.
If `EncryptionPublicKey` is passed in, this field contains the Base64-encoded ciphertext after asymmetric encryption by using the public key in `EncryptionPublicKey` To get the plaintext, you need to first decode the Base64 format, and then decrypwith the private key corresponding with the public key. The private key is uploaded by the user. 
                     * 
                     */
                    std::string GetPlainText() const;

                    /**
                     * 判断参数 PlainText 是否已赋值
                     * @return PlainText 是否已赋值
                     * 
                     */
                    bool PlainTextHasBeenSet() const;

                private:

                    /**
                     * Globally unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * If `EncryptionPublicKey` is left empty, a Base64-encoded ciphertext will be returned. To get the plaintext, you need to decode the ciphertext first.
If `EncryptionPublicKey` is passed in, this field contains the Base64-encoded ciphertext after asymmetric encryption by using the public key in `EncryptionPublicKey` To get the plaintext, you need to first decode the Base64 format, and then decrypwith the private key corresponding with the public key. The private key is uploaded by the user. 
                     */
                    std::string m_plainText;
                    bool m_plainTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTODECRYPTRESPONSE_H_
