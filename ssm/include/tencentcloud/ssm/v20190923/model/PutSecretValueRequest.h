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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_PUTSECRETVALUEREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_PUTSECRETVALUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * PutSecretValue request structure.
                */
                class PutSecretValueRequest : public AbstractModel
                {
                public:
                    PutSecretValueRequest();
                    ~PutSecretValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of a Secret where the version is added to.
                     * @return SecretName Name of a Secret where the version is added to.
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Name of a Secret where the version is added to.
                     * @param SecretName Name of a Secret where the version is added to.
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取ID of the new Secret version. It can be up to 64 bytes, contain letters, digits, hyphens (-), and underscores (_), and must begin with a letter or digit.
                     * @return VersionId ID of the new Secret version. It can be up to 64 bytes, contain letters, digits, hyphens (-), and underscores (_), and must begin with a letter or digit.
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置ID of the new Secret version. It can be up to 64 bytes, contain letters, digits, hyphens (-), and underscores (_), and must begin with a letter or digit.
                     * @param VersionId ID of the new Secret version. It can be up to 64 bytes, contain letters, digits, hyphens (-), and underscores (_), and must begin with a letter or digit.
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded binary credential information.
Either `SecretBinary` or `SecretString` must be set.
                     * @return SecretBinary Base64-encoded binary credential information.
Either `SecretBinary` or `SecretString` must be set.
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 设置Base64-encoded binary credential information.
Either `SecretBinary` or `SecretString` must be set.
                     * @param SecretBinary Base64-encoded binary credential information.
Either `SecretBinary` or `SecretString` must be set.
                     */
                    void SetSecretBinary(const std::string& _secretBinary);

                    /**
                     * 判断参数 SecretBinary 是否已赋值
                     * @return SecretBinary 是否已赋值
                     */
                    bool SecretBinaryHasBeenSet() const;

                    /**
                     * 获取Secret information plaintext in text format, base64 encoding is not needed. Either `SecretBinary` or `SecretString` must be set.
                     * @return SecretString Secret information plaintext in text format, base64 encoding is not needed. Either `SecretBinary` or `SecretString` must be set.
                     */
                    std::string GetSecretString() const;

                    /**
                     * 设置Secret information plaintext in text format, base64 encoding is not needed. Either `SecretBinary` or `SecretString` must be set.
                     * @param SecretString Secret information plaintext in text format, base64 encoding is not needed. Either `SecretBinary` or `SecretString` must be set.
                     */
                    void SetSecretString(const std::string& _secretString);

                    /**
                     * 判断参数 SecretString 是否已赋值
                     * @return SecretString 是否已赋值
                     */
                    bool SecretStringHasBeenSet() const;

                private:

                    /**
                     * Name of a Secret where the version is added to.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * ID of the new Secret version. It can be up to 64 bytes, contain letters, digits, hyphens (-), and underscores (_), and must begin with a letter or digit.
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Base64-encoded binary credential information.
Either `SecretBinary` or `SecretString` must be set.
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * Secret information plaintext in text format, base64 encoding is not needed. Either `SecretBinary` or `SecretString` must be set.
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_PUTSECRETVALUEREQUEST_H_
