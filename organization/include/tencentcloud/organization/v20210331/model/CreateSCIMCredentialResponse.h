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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateSCIMCredential response structure.
                */
                class CreateSCIMCredentialResponse : public AbstractModel
                {
                public:
                    CreateSCIMCredentialResponse();
                    ~CreateSCIMCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * @return ZoneId Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取SCIM key ID, which starts with the scimcred- prefix, followed by 12 random digits/lowercase letters.
                     * @return CredentialId SCIM key ID, which starts with the scimcred- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取SCIM key type.
                     * @return CredentialType SCIM key type.
                     * 
                     */
                    std::string GetCredentialType() const;

                    /**
                     * 判断参数 CredentialType 是否已赋值
                     * @return CredentialType 是否已赋值
                     * 
                     */
                    bool CredentialTypeHasBeenSet() const;

                    /**
                     * 获取Creation time of a SCIM key.
                     * @return CreateTime Creation time of a SCIM key.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of a SCIM key.
                     * @return ExpireTime Expiration time of a SCIM key.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取SCIM key status. Enabled: enabled. Disabled: disabled.
                     * @return CredentialStatus SCIM key status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    std::string GetCredentialStatus() const;

                    /**
                     * 判断参数 CredentialStatus 是否已赋值
                     * @return CredentialStatus 是否已赋值
                     * 
                     */
                    bool CredentialStatusHasBeenSet() const;

                    /**
                     * 获取SCIM key.
                     * @return CredentialSecret SCIM key.
                     * 
                     */
                    std::string GetCredentialSecret() const;

                    /**
                     * 判断参数 CredentialSecret 是否已赋值
                     * @return CredentialSecret 是否已赋值
                     * 
                     */
                    bool CredentialSecretHasBeenSet() const;

                private:

                    /**
                     * Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * SCIM key ID, which starts with the scimcred- prefix, followed by 12 random digits/lowercase letters.
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * SCIM key type.
                     */
                    std::string m_credentialType;
                    bool m_credentialTypeHasBeenSet;

                    /**
                     * Creation time of a SCIM key.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Expiration time of a SCIM key.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * SCIM key status. Enabled: enabled. Disabled: disabled.
                     */
                    std::string m_credentialStatus;
                    bool m_credentialStatusHasBeenSet;

                    /**
                     * SCIM key.
                     */
                    std::string m_credentialSecret;
                    bool m_credentialSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALRESPONSE_H_
