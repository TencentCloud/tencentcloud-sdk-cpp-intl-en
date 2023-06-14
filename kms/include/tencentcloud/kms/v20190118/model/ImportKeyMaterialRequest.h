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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTKEYMATERIALREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTKEYMATERIALREQUEST_H_

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
                * ImportKeyMaterial request structure.
                */
                class ImportKeyMaterialRequest : public AbstractModel
                {
                public:
                    ImportKeyMaterialRequest();
                    ~ImportKeyMaterialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded key material that encrypted with the `PublicKey` returned by `GetParametersForImport`. For the KMS of SM-CRYPTO version, the length of the key material should be 128 bits, while for KMS of FIPS-compliant version, the length should be 256 bits.
                     * @return EncryptedKeyMaterial Base64-encoded key material that encrypted with the `PublicKey` returned by `GetParametersForImport`. For the KMS of SM-CRYPTO version, the length of the key material should be 128 bits, while for KMS of FIPS-compliant version, the length should be 256 bits.
                     * 
                     */
                    std::string GetEncryptedKeyMaterial() const;

                    /**
                     * 设置Base64-encoded key material that encrypted with the `PublicKey` returned by `GetParametersForImport`. For the KMS of SM-CRYPTO version, the length of the key material should be 128 bits, while for KMS of FIPS-compliant version, the length should be 256 bits.
                     * @param _encryptedKeyMaterial Base64-encoded key material that encrypted with the `PublicKey` returned by `GetParametersForImport`. For the KMS of SM-CRYPTO version, the length of the key material should be 128 bits, while for KMS of FIPS-compliant version, the length should be 256 bits.
                     * 
                     */
                    void SetEncryptedKeyMaterial(const std::string& _encryptedKeyMaterial);

                    /**
                     * 判断参数 EncryptedKeyMaterial 是否已赋值
                     * @return EncryptedKeyMaterial 是否已赋值
                     * 
                     */
                    bool EncryptedKeyMaterialHasBeenSet() const;

                    /**
                     * 获取Import token obtained by calling `GetParametersForImport`.
                     * @return ImportToken Import token obtained by calling `GetParametersForImport`.
                     * 
                     */
                    std::string GetImportToken() const;

                    /**
                     * 设置Import token obtained by calling `GetParametersForImport`.
                     * @param _importToken Import token obtained by calling `GetParametersForImport`.
                     * 
                     */
                    void SetImportToken(const std::string& _importToken);

                    /**
                     * 判断参数 ImportToken 是否已赋值
                     * @return ImportToken 是否已赋值
                     * 
                     */
                    bool ImportTokenHasBeenSet() const;

                    /**
                     * 获取Specifies the CMK into which to import key material, which must be the same as the one specified by `GetParametersForImport`.
                     * @return KeyId Specifies the CMK into which to import key material, which must be the same as the one specified by `GetParametersForImport`.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Specifies the CMK into which to import key material, which must be the same as the one specified by `GetParametersForImport`.
                     * @param _keyId Specifies the CMK into which to import key material, which must be the same as the one specified by `GetParametersForImport`.
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
                     * 获取Unix timestamp of the key material's expiration time. If this value is empty or 0, the key material will never expire. To specify the expiration time, it should be later than the current time. Maximum value: 2147443200.
                     * @return ValidTo Unix timestamp of the key material's expiration time. If this value is empty or 0, the key material will never expire. To specify the expiration time, it should be later than the current time. Maximum value: 2147443200.
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置Unix timestamp of the key material's expiration time. If this value is empty or 0, the key material will never expire. To specify the expiration time, it should be later than the current time. Maximum value: 2147443200.
                     * @param _validTo Unix timestamp of the key material's expiration time. If this value is empty or 0, the key material will never expire. To specify the expiration time, it should be later than the current time. Maximum value: 2147443200.
                     * 
                     */
                    void SetValidTo(const uint64_t& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded key material that encrypted with the `PublicKey` returned by `GetParametersForImport`. For the KMS of SM-CRYPTO version, the length of the key material should be 128 bits, while for KMS of FIPS-compliant version, the length should be 256 bits.
                     */
                    std::string m_encryptedKeyMaterial;
                    bool m_encryptedKeyMaterialHasBeenSet;

                    /**
                     * Import token obtained by calling `GetParametersForImport`.
                     */
                    std::string m_importToken;
                    bool m_importTokenHasBeenSet;

                    /**
                     * Specifies the CMK into which to import key material, which must be the same as the one specified by `GetParametersForImport`.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Unix timestamp of the key material's expiration time. If this value is empty or 0, the key material will never expire. To specify the expiration time, it should be later than the current time. Maximum value: 2147443200.
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTKEYMATERIALREQUEST_H_
