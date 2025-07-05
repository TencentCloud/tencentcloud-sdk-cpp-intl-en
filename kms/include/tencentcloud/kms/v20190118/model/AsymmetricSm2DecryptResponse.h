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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTRESPONSE_H_

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
                * AsymmetricSm2Decrypt response structure.
                */
                class AsymmetricSm2DecryptResponse : public AbstractModel
                {
                public:
                    AsymmetricSm2DecryptResponse();
                    ~AsymmetricSm2DecryptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique CMK ID
                     * @return KeyId Unique CMK ID
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
                     * 获取Base64-encoded plaintext after decryption
                     * @return Plaintext Base64-encoded plaintext after decryption
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
                     * Unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Base64-encoded plaintext after decryption
                     */
                    std::string m_plaintext;
                    bool m_plaintextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTRESPONSE_H_
