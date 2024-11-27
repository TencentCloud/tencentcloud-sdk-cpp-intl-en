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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SCIMCREDENTIAL_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SCIMCREDENTIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * SCIM key.
                */
                class SCIMCredential : public AbstractModel
                {
                public:
                    SCIMCredential();
                    ~SCIMCredential() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * @return ZoneId Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * @param _zoneId Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取SCIM key status. Enabled: enabled. Disabled: disabled.
                     * @return Status SCIM key status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置SCIM key status. Enabled: enabled. Disabled: disabled.
                     * @param _status SCIM key status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取SCIM key ID, which starts with the scimcred- prefix, followed by 12 random digits/lowercase letters.
                     * @return CredentialId SCIM key ID, which starts with the scimcred- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置SCIM key ID, which starts with the scimcred- prefix, followed by 12 random digits/lowercase letters.
                     * @param _credentialId SCIM key ID, which starts with the scimcred- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

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
                     * 设置SCIM key type.
                     * @param _credentialType SCIM key type.
                     * 
                     */
                    void SetCredentialType(const std::string& _credentialType);

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
                     * 设置Creation time of a SCIM key.
                     * @param _createTime Creation time of a SCIM key.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

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
                     * 设置Expiration time of a SCIM key.
                     * @param _expireTime Expiration time of a SCIM key.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * SCIM key status. Enabled: enabled. Disabled: disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SCIMCREDENTIAL_H_
