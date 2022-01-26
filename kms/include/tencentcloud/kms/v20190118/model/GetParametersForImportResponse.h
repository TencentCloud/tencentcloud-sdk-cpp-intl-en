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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTRESPONSE_H_

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
                * GetParametersForImport response structure.
                */
                class GetParametersForImportResponse : public AbstractModel
                {
                public:
                    GetParametersForImportResponse();
                    ~GetParametersForImportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of a CMK, which is used to specify the CMK into which to import key material.
                     * @return KeyId Unique ID of a CMK, which is used to specify the CMK into which to import key material.
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取The token required for importing key material, which is used as a parameter for `ImportKeyMaterial`.
                     * @return ImportToken The token required for importing key material, which is used as a parameter for `ImportKeyMaterial`.
                     */
                    std::string GetImportToken() const;

                    /**
                     * 判断参数 ImportToken 是否已赋值
                     * @return ImportToken 是否已赋值
                     */
                    bool ImportTokenHasBeenSet() const;

                    /**
                     * 获取The Base64-encoded RSA public key used to encrypt key material before importing it with `ImportKeyMaterial`.
                     * @return PublicKey The Base64-encoded RSA public key used to encrypt key material before importing it with `ImportKeyMaterial`.
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Validity period of the token and public key. A token and public key can only be imported when they are valid. If they are expired, you will need to call the `GetParametersForImport` API again to get a new token and public key.
                     * @return ParametersValidTo Validity period of the token and public key. A token and public key can only be imported when they are valid. If they are expired, you will need to call the `GetParametersForImport` API again to get a new token and public key.
                     */
                    uint64_t GetParametersValidTo() const;

                    /**
                     * 判断参数 ParametersValidTo 是否已赋值
                     * @return ParametersValidTo 是否已赋值
                     */
                    bool ParametersValidToHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a CMK, which is used to specify the CMK into which to import key material.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * The token required for importing key material, which is used as a parameter for `ImportKeyMaterial`.
                     */
                    std::string m_importToken;
                    bool m_importTokenHasBeenSet;

                    /**
                     * The Base64-encoded RSA public key used to encrypt key material before importing it with `ImportKeyMaterial`.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Validity period of the token and public key. A token and public key can only be imported when they are valid. If they are expired, you will need to call the `GetParametersForImport` API again to get a new token and public key.
                     */
                    uint64_t m_parametersValidTo;
                    bool m_parametersValidToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTRESPONSE_H_
