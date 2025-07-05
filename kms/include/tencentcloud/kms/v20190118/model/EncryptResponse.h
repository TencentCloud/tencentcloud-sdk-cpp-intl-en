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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTRESPONSE_H_

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
                * Encrypt response structure.
                */
                class EncryptResponse : public AbstractModel
                {
                public:
                    EncryptResponse();
                    ~EncryptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded ciphertext, which is the encrypted information of the ciphertext and key. To get the plaintext, you need to pass in this field to the Decrypt API.
                     * @return CiphertextBlob Base64-encoded ciphertext, which is the encrypted information of the ciphertext and key. To get the plaintext, you need to pass in this field to the Decrypt API.
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     * 
                     */
                    bool CiphertextBlobHasBeenSet() const;

                    /**
                     * 获取Globally unique ID of the CMK used for encryption
                     * @return KeyId Globally unique ID of the CMK used for encryption
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded ciphertext, which is the encrypted information of the ciphertext and key. To get the plaintext, you need to pass in this field to the Decrypt API.
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * Globally unique ID of the CMK used for encryption
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTRESPONSE_H_
