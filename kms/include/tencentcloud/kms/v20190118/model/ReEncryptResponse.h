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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_REENCRYPTRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_REENCRYPTRESPONSE_H_

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
                * ReEncrypt response structure.
                */
                class ReEncryptResponse : public AbstractModel
                {
                public:
                    ReEncryptResponse();
                    ~ReEncryptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Re-encrypted ciphertext
                     * @return CiphertextBlob Re-encrypted ciphertext
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
                     * 获取CMK used for re-encryption
                     * @return KeyId CMK used for re-encryption
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
                     * 获取CMK used by ciphertext before re-encryption
                     * @return SourceKeyId CMK used by ciphertext before re-encryption
                     * 
                     */
                    std::string GetSourceKeyId() const;

                    /**
                     * 判断参数 SourceKeyId 是否已赋值
                     * @return SourceKeyId 是否已赋值
                     * 
                     */
                    bool SourceKeyIdHasBeenSet() const;

                    /**
                     * 获取`true` indicates that the ciphertext has been re-encrypted. When re-encryption is initiated by using the same CMK, as long as the CMK is not rotated, no actual re-encryption will be performed, and the original ciphertext will be returned
                     * @return ReEncrypted `true` indicates that the ciphertext has been re-encrypted. When re-encryption is initiated by using the same CMK, as long as the CMK is not rotated, no actual re-encryption will be performed, and the original ciphertext will be returned
                     * 
                     */
                    bool GetReEncrypted() const;

                    /**
                     * 判断参数 ReEncrypted 是否已赋值
                     * @return ReEncrypted 是否已赋值
                     * 
                     */
                    bool ReEncryptedHasBeenSet() const;

                private:

                    /**
                     * Re-encrypted ciphertext
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * CMK used for re-encryption
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * CMK used by ciphertext before re-encryption
                     */
                    std::string m_sourceKeyId;
                    bool m_sourceKeyIdHasBeenSet;

                    /**
                     * `true` indicates that the ciphertext has been re-encrypted. When re-encryption is initiated by using the same CMK, as long as the CMK is not rotated, no actual re-encryption will be performed, and the original ciphertext will be returned
                     */
                    bool m_reEncrypted;
                    bool m_reEncryptedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_REENCRYPTRESPONSE_H_
