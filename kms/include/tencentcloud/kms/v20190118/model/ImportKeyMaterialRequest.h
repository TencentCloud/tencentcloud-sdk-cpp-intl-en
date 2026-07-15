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
                     * 获取<p>base64-encoded encrypted key material using the PublicKey returned by GetParametersForImport. For KMS in national cryptography version regions, the length requirement for imported key material is 128 bit. For KMS in FIPS 140-2 version regions, the length requirement for imported key material is 256 bit.</p>
                     * @return EncryptedKeyMaterial <p>base64-encoded encrypted key material using the PublicKey returned by GetParametersForImport. For KMS in national cryptography version regions, the length requirement for imported key material is 128 bit. For KMS in FIPS 140-2 version regions, the length requirement for imported key material is 256 bit.</p>
                     * 
                     */
                    std::string GetEncryptedKeyMaterial() const;

                    /**
                     * 设置<p>base64-encoded encrypted key material using the PublicKey returned by GetParametersForImport. For KMS in national cryptography version regions, the length requirement for imported key material is 128 bit. For KMS in FIPS 140-2 version regions, the length requirement for imported key material is 256 bit.</p>
                     * @param _encryptedKeyMaterial <p>base64-encoded encrypted key material using the PublicKey returned by GetParametersForImport. For KMS in national cryptography version regions, the length requirement for imported key material is 128 bit. For KMS in FIPS 140-2 version regions, the length requirement for imported key material is 256 bit.</p>
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
                     * 获取<p>Import token obtained by calling GetParametersForImport.</p>
                     * @return ImportToken <p>Import token obtained by calling GetParametersForImport.</p>
                     * 
                     */
                    std::string GetImportToken() const;

                    /**
                     * 设置<p>Import token obtained by calling GetParametersForImport.</p>
                     * @param _importToken <p>Import token obtained by calling GetParametersForImport.</p>
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
                     * 获取<p>The CMK designated for importing key material must be identical to the CMK specified in GetParametersForImport.</p>
                     * @return KeyId <p>The CMK designated for importing key material must be identical to the CMK specified in GetParametersForImport.</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>The CMK designated for importing key material must be identical to the CMK specified in GetParametersForImport.</p>
                     * @param _keyId <p>The CMK designated for importing key material must be identical to the CMK specified in GetParametersForImport.</p>
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
                     * 获取<p>Expiration time of the key material in unix timestamp. If unspecified or 0, the key material does not expire. If specified, the expiration time must be greater than the current time and supports up to 2147443200.</p>
                     * @return ValidTo <p>Expiration time of the key material in unix timestamp. If unspecified or 0, the key material does not expire. If specified, the expiration time must be greater than the current time and supports up to 2147443200.</p>
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置<p>Expiration time of the key material in unix timestamp. If unspecified or 0, the key material does not expire. If specified, the expiration time must be greater than the current time and supports up to 2147443200.</p>
                     * @param _validTo <p>Expiration time of the key material in unix timestamp. If unspecified or 0, the key material does not expire. If specified, the expiration time must be greater than the current time and supports up to 2147443200.</p>
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
                     * <p>base64-encoded encrypted key material using the PublicKey returned by GetParametersForImport. For KMS in national cryptography version regions, the length requirement for imported key material is 128 bit. For KMS in FIPS 140-2 version regions, the length requirement for imported key material is 256 bit.</p>
                     */
                    std::string m_encryptedKeyMaterial;
                    bool m_encryptedKeyMaterialHasBeenSet;

                    /**
                     * <p>Import token obtained by calling GetParametersForImport.</p>
                     */
                    std::string m_importToken;
                    bool m_importTokenHasBeenSet;

                    /**
                     * <p>The CMK designated for importing key material must be identical to the CMK specified in GetParametersForImport.</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>Expiration time of the key material in unix timestamp. If unspecified or 0, the key material does not expire. If specified, the expiration time must be greater than the current time and supports up to 2147443200.</p>
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTKEYMATERIALREQUEST_H_
