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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETVERSIONREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETVERSIONREQUEST_H_

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
                * DeleteSecretVersion request structure.
                */
                class DeleteSecretVersionRequest : public AbstractModel
                {
                public:
                    DeleteSecretVersionRequest();
                    ~DeleteSecretVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the Secret.
                     * @return SecretName Name of the Secret.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Name of the Secret.
                     * @param _secretName Name of the Secret.
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
                     * 获取ID of the Secret version to be deleted.
                     * @return VersionId ID of the Secret version to be deleted.
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置ID of the Secret version to be deleted.
                     * @param _versionId ID of the Secret version to be deleted.
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * Name of the Secret.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * ID of the Secret version to be deleted.
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETVERSIONREQUEST_H_
