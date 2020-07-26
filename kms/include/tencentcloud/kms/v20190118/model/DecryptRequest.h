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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DECRYPTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DECRYPTREQUEST_H_

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
                * Decrypt request structure.
                */
                class DecryptRequest : public AbstractModel
                {
                public:
                    DecryptRequest();
                    ~DecryptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ciphertext data to be decrypted.
                     * @return CiphertextBlob The ciphertext data to be decrypted.
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置The ciphertext data to be decrypted.
                     * @param CiphertextBlob The ciphertext data to be decrypted.
                     */
                    void SetCiphertextBlob(const std::string& _ciphertextBlob);

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     */
                    bool CiphertextBlobHasBeenSet() const;

                    /**
                     * 获取
                     * @return EncryptionContext 
                     */
                    std::string GetEncryptionContext() const;

                    /**
                     * 设置
                     * @param EncryptionContext 
                     */
                    void SetEncryptionContext(const std::string& _encryptionContext);

                    /**
                     * 判断参数 EncryptionContext 是否已赋值
                     * @return EncryptionContext 是否已赋值
                     */
                    bool EncryptionContextHasBeenSet() const;

                private:

                    /**
                     * The ciphertext data to be decrypted.
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_encryptionContext;
                    bool m_encryptionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DECRYPTREQUEST_H_
