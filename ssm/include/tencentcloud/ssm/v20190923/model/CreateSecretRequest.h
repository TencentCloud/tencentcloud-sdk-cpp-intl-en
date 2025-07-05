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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssm/v20190923/model/Tag.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * CreateSecret request structure.
                */
                class CreateSecretRequest : public AbstractModel
                {
                public:
                    CreateSecretRequest();
                    ~CreateSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Secret name, which must be unique in the same region. It can contain 128 bytes ([a-z], [A-Z], [0-9], [-_]). It must begin with a letter or digit. Note that it cannot be modified once created. 
                     * @return SecretName Secret name, which must be unique in the same region. It can contain 128 bytes ([a-z], [A-Z], [0-9], [-_]). It must begin with a letter or digit. Note that it cannot be modified once created. 
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Secret name, which must be unique in the same region. It can contain 128 bytes ([a-z], [A-Z], [0-9], [-_]). It must begin with a letter or digit. Note that it cannot be modified once created. 
                     * @param _secretName Secret name, which must be unique in the same region. It can contain 128 bytes ([a-z], [A-Z], [0-9], [-_]). It must begin with a letter or digit. Note that it cannot be modified once created. 
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Secret version. It can contain up to 64 bytes ([a-z], [A-Z], [0-9], [-_.]). It must begin with a letter or digit. `SecretName` and `VersionId` are used to query the Secret information. If it is left empty, the initial Secret version number is used by default.
                     * @return VersionId Secret version. It can contain up to 64 bytes ([a-z], [A-Z], [0-9], [-_.]). It must begin with a letter or digit. `SecretName` and `VersionId` are used to query the Secret information. If it is left empty, the initial Secret version number is used by default.
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Secret version. It can contain up to 64 bytes ([a-z], [A-Z], [0-9], [-_.]). It must begin with a letter or digit. `SecretName` and `VersionId` are used to query the Secret information. If it is left empty, the initial Secret version number is used by default.
                     * @param _versionId Secret version. It can contain up to 64 bytes ([a-z], [A-Z], [0-9], [-_.]). It must begin with a letter or digit. `SecretName` and `VersionId` are used to query the Secret information. If it is left empty, the initial Secret version number is used by default.
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取Description information, such as the detailed use cases. It can be up to 2048 bytes.
                     * @return Description Description information, such as the detailed use cases. It can be up to 2048 bytes.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information, such as the detailed use cases. It can be up to 2048 bytes.
                     * @param _description Description information, such as the detailed use cases. It can be up to 2048 bytes.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取KMS CMK used for Secret encryption. If this parameter is left empty, SecretsManager will create a CMK by default. You can also specify a KMS CMK that is created in the same region.
                     * @return KmsKeyId KMS CMK used for Secret encryption. If this parameter is left empty, SecretsManager will create a CMK by default. You can also specify a KMS CMK that is created in the same region.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置KMS CMK used for Secret encryption. If this parameter is left empty, SecretsManager will create a CMK by default. You can also specify a KMS CMK that is created in the same region.
                     * @param _kmsKeyId KMS CMK used for Secret encryption. If this parameter is left empty, SecretsManager will create a CMK by default. You can also specify a KMS CMK that is created in the same region.
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取Secret type. It defaults to `custom`.
                     * @return SecretType Secret type. It defaults to `custom`.
                     * 
                     */
                    uint64_t GetSecretType() const;

                    /**
                     * 设置Secret type. It defaults to `custom`.
                     * @param _secretType Secret type. It defaults to `custom`.
                     * 
                     */
                    void SetSecretType(const uint64_t& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取Base64-encoded plaintext of a binary Secret. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * @return SecretBinary Base64-encoded plaintext of a binary Secret. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * 
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 设置Base64-encoded plaintext of a binary Secret. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * @param _secretBinary Base64-encoded plaintext of a binary Secret. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * 
                     */
                    void SetSecretBinary(const std::string& _secretBinary);

                    /**
                     * 判断参数 SecretBinary 是否已赋值
                     * @return SecretBinary 是否已赋值
                     * 
                     */
                    bool SecretBinaryHasBeenSet() const;

                    /**
                     * 获取Plaintext of a Secret, in text format. Base64 encoding is not required. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * @return SecretString Plaintext of a Secret, in text format. Base64 encoding is not required. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * 
                     */
                    std::string GetSecretString() const;

                    /**
                     * 设置Plaintext of a Secret, in text format. Base64 encoding is not required. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * @param _secretString Plaintext of a Secret, in text format. Base64 encoding is not required. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     * 
                     */
                    void SetSecretString(const std::string& _secretString);

                    /**
                     * 判断参数 SecretString 是否已赋值
                     * @return SecretString 是否已赋值
                     * 
                     */
                    bool SecretStringHasBeenSet() const;

                    /**
                     * 获取Additional configuration of the Secret in JSON format
                     * @return AdditionalConfig Additional configuration of the Secret in JSON format
                     * 
                     */
                    std::string GetAdditionalConfig() const;

                    /**
                     * 设置Additional configuration of the Secret in JSON format
                     * @param _additionalConfig Additional configuration of the Secret in JSON format
                     * 
                     */
                    void SetAdditionalConfig(const std::string& _additionalConfig);

                    /**
                     * 判断参数 AdditionalConfig 是否已赋值
                     * @return AdditionalConfig 是否已赋值
                     * 
                     */
                    bool AdditionalConfigHasBeenSet() const;

                    /**
                     * 获取List of tags.
                     * @return Tags List of tags.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags.
                     * @param _tags List of tags.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Secret name, which must be unique in the same region. It can contain 128 bytes ([a-z], [A-Z], [0-9], [-_]). It must begin with a letter or digit. Note that it cannot be modified once created. 
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Secret version. It can contain up to 64 bytes ([a-z], [A-Z], [0-9], [-_.]). It must begin with a letter or digit. `SecretName` and `VersionId` are used to query the Secret information. If it is left empty, the initial Secret version number is used by default.
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Description information, such as the detailed use cases. It can be up to 2048 bytes.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * KMS CMK used for Secret encryption. If this parameter is left empty, SecretsManager will create a CMK by default. You can also specify a KMS CMK that is created in the same region.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Secret type. It defaults to `custom`.
                     */
                    uint64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * Base64-encoded plaintext of a binary Secret. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * Plaintext of a Secret, in text format. Base64 encoding is not required. Either `SecretBinary` or `SecretString` must be set. A maximum of 4096 bytes is supported.
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                    /**
                     * Additional configuration of the Secret in JSON format
                     */
                    std::string m_additionalConfig;
                    bool m_additionalConfigHasBeenSet;

                    /**
                     * List of tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETREQUEST_H_
