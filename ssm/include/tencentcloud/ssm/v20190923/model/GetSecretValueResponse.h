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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUERESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUERESPONSE_H_

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
                * GetSecretValue response structure.
                */
                class GetSecretValueResponse : public AbstractModel
                {
                public:
                    GetSecretValueResponse();
                    ~GetSecretValueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the Secret.
                     * @return SecretName Name of the Secret.
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取ID of the Secret version.
                     * @return VersionId ID of the Secret version.
                     */
                    std::string GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取When creating a credential (CreateSecret), if you specify binary data, this field will be the Base64-encoded returned result. The application needs to Base64-decode the result to get the original data.
Either `SecretBinary` or `SecretString` cannot be empty.
                     * @return SecretBinary When creating a credential (CreateSecret), if you specify binary data, this field will be the Base64-encoded returned result. The application needs to Base64-decode the result to get the original data.
Either `SecretBinary` or `SecretString` cannot be empty.
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 判断参数 SecretBinary 是否已赋值
                     * @return SecretBinary 是否已赋值
                     */
                    bool SecretBinaryHasBeenSet() const;

                    /**
                     * 获取When creating a credential (CreateSecret), if you specify general text data, this field will be the returned result.
Either `SecretBinary` or `SecretString` cannot be empty.
                     * @return SecretString When creating a credential (CreateSecret), if you specify general text data, this field will be the returned result.
Either `SecretBinary` or `SecretString` cannot be empty.
                     */
                    std::string GetSecretString() const;

                    /**
                     * 判断参数 SecretString 是否已赋值
                     * @return SecretString 是否已赋值
                     */
                    bool SecretStringHasBeenSet() const;

                private:

                    /**
                     * Name of the Secret.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * ID of the Secret version.
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * When creating a credential (CreateSecret), if you specify binary data, this field will be the Base64-encoded returned result. The application needs to Base64-decode the result to get the original data.
Either `SecretBinary` or `SecretString` cannot be empty.
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * When creating a credential (CreateSecret), if you specify general text data, this field will be the returned result.
Either `SecretBinary` or `SecretString` cannot be empty.
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUERESPONSE_H_
