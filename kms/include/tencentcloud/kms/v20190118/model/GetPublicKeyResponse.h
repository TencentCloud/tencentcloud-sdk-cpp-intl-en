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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETPUBLICKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETPUBLICKEYRESPONSE_H_

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
                * GetPublicKey response structure.
                */
                class GetPublicKeyResponse : public AbstractModel
                {
                public:
                    GetPublicKeyResponse();
                    ~GetPublicKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Unique CMK ID.
                     * @return KeyId Unique CMK ID.
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded public key content.
                     * @return PublicKey Base64-encoded public key content.
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Public key content in PEM format.
                     * @return PublicKeyPem Public key content in PEM format.
                     */
                    std::string GetPublicKeyPem() const;

                    /**
                     * 判断参数 PublicKeyPem 是否已赋值
                     * @return PublicKeyPem 是否已赋值
                     */
                    bool PublicKeyPemHasBeenSet() const;

                private:

                    /**
                     * Unique CMK ID.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Base64-encoded public key content.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Public key content in PEM format.
                     */
                    std::string m_publicKeyPem;
                    bool m_publicKeyPemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETPUBLICKEYRESPONSE_H_
