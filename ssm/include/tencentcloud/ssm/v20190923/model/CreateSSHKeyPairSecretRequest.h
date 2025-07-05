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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETREQUEST_H_

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
                * CreateSSHKeyPairSecret request structure.
                */
                class CreateSSHKeyPairSecretRequest : public AbstractModel
                {
                public:
                    CreateSSHKeyPairSecretRequest();
                    ~CreateSSHKeyPairSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Secret name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens and underscores and must begin with a letter or digit.
                     * @return SecretName Secret name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens and underscores and must begin with a letter or digit.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Secret name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens and underscores and must begin with a letter or digit.
                     * @param _secretName Secret name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens and underscores and must begin with a letter or digit.
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
                     * 获取ID of the project to which the created SSH key belongs.
                     * @return ProjectId ID of the project to which the created SSH key belongs.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the created SSH key belongs.
                     * @param _projectId ID of the project to which the created SSH key belongs.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Description, such as what it is used for. It contains up to 2,048 bytes.
                     * @return Description Description, such as what it is used for. It contains up to 2,048 bytes.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description, such as what it is used for. It contains up to 2,048 bytes.
                     * @param _description Description, such as what it is used for. It contains up to 2,048 bytes.
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
                     * 获取Specifies a KMS CMK to encrypt the secret.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     * @return KmsKeyId Specifies a KMS CMK to encrypt the secret.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Specifies a KMS CMK to encrypt the secret.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     * @param _kmsKeyId Specifies a KMS CMK to encrypt the secret.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
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

                    /**
                     * 获取Name of the SSH key pair, which only contains digits, letters and underscores and must start with a digit or letter. The maximum length is 25 characters.
                     * @return SSHKeyName Name of the SSH key pair, which only contains digits, letters and underscores and must start with a digit or letter. The maximum length is 25 characters.
                     * 
                     */
                    std::string GetSSHKeyName() const;

                    /**
                     * 设置Name of the SSH key pair, which only contains digits, letters and underscores and must start with a digit or letter. The maximum length is 25 characters.
                     * @param _sSHKeyName Name of the SSH key pair, which only contains digits, letters and underscores and must start with a digit or letter. The maximum length is 25 characters.
                     * 
                     */
                    void SetSSHKeyName(const std::string& _sSHKeyName);

                    /**
                     * 判断参数 SSHKeyName 是否已赋值
                     * @return SSHKeyName 是否已赋值
                     * 
                     */
                    bool SSHKeyNameHasBeenSet() const;

                private:

                    /**
                     * Secret name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens and underscores and must begin with a letter or digit.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * ID of the project to which the created SSH key belongs.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Description, such as what it is used for. It contains up to 2,048 bytes.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Specifies a KMS CMK to encrypt the secret.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * List of tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Name of the SSH key pair, which only contains digits, letters and underscores and must start with a digit or letter. The maximum length is 25 characters.
                     */
                    std::string m_sSHKeyName;
                    bool m_sSHKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETREQUEST_H_
