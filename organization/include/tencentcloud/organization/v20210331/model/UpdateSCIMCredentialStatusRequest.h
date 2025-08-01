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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMCREDENTIALSTATUSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMCREDENTIALSTATUSREQUEST_H_

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
                * UpdateSCIMCredentialStatus request structure.
                */
                class UpdateSCIMCredentialStatusRequest : public AbstractModel
                {
                public:
                    UpdateSCIMCredentialStatusRequest();
                    ~UpdateSCIMCredentialStatusRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取SCIM key status. Enabled: enabled. Disabled: disabled.
                     * @return NewStatus SCIM key status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    std::string GetNewStatus() const;

                    /**
                     * 设置SCIM key status. Enabled: enabled. Disabled: disabled.
                     * @param _newStatus SCIM key status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    void SetNewStatus(const std::string& _newStatus);

                    /**
                     * 判断参数 NewStatus 是否已赋值
                     * @return NewStatus 是否已赋值
                     * 
                     */
                    bool NewStatusHasBeenSet() const;

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
                     * SCIM key status. Enabled: enabled. Disabled: disabled.
                     */
                    std::string m_newStatus;
                    bool m_newStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMCREDENTIALSTATUSREQUEST_H_
