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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETVERSIONIDSRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETVERSIONIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssm/v20190923/model/VersionInfo.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * ListSecretVersionIds response structure.
                */
                class ListSecretVersionIdsResponse : public AbstractModel
                {
                public:
                    ListSecretVersionIdsResponse();
                    ~ListSecretVersionIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the Secret.
                     * @return SecretName Name of the Secret.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取`VersionId` list.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Versions `VersionId` list.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<VersionInfo> GetVersions() const;

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                private:

                    /**
                     * Name of the Secret.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * `VersionId` list.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<VersionInfo> m_versions;
                    bool m_versionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETVERSIONIDSRESPONSE_H_
