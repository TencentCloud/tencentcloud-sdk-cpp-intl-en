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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_H_

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
                * SetExternalSAMLIdentityProvider request structure.
                */
                class SetExternalSAMLIdentityProviderRequest : public AbstractModel
                {
                public:
                    SetExternalSAMLIdentityProviderRequest();
                    ~SetExternalSAMLIdentityProviderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID.
                     * @return ZoneId Space ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID.
                     * @param _zoneId Space ID.
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
                     * 获取IdP metadata document (Base64 encoded). Provided by an IdP that supports the SAML 2.0 protocol.
                     * @return EncodedMetadataDocument IdP metadata document (Base64 encoded). Provided by an IdP that supports the SAML 2.0 protocol.
                     * 
                     */
                    std::string GetEncodedMetadataDocument() const;

                    /**
                     * 设置IdP metadata document (Base64 encoded). Provided by an IdP that supports the SAML 2.0 protocol.
                     * @param _encodedMetadataDocument IdP metadata document (Base64 encoded). Provided by an IdP that supports the SAML 2.0 protocol.
                     * 
                     */
                    void SetEncodedMetadataDocument(const std::string& _encodedMetadataDocument);

                    /**
                     * 判断参数 EncodedMetadataDocument 是否已赋值
                     * @return EncodedMetadataDocument 是否已赋值
                     * 
                     */
                    bool EncodedMetadataDocumentHasBeenSet() const;

                    /**
                     * 获取SSO enabling status. Valid values: Enabled, Disabled (default).
                     * @return SSOStatus SSO enabling status. Valid values: Enabled, Disabled (default).
                     * 
                     */
                    std::string GetSSOStatus() const;

                    /**
                     * 设置SSO enabling status. Valid values: Enabled, Disabled (default).
                     * @param _sSOStatus SSO enabling status. Valid values: Enabled, Disabled (default).
                     * 
                     */
                    void SetSSOStatus(const std::string& _sSOStatus);

                    /**
                     * 判断参数 SSOStatus 是否已赋值
                     * @return SSOStatus 是否已赋值
                     * 
                     */
                    bool SSOStatusHasBeenSet() const;

                    /**
                     * 获取IdP identifier.
                     * @return EntityId IdP identifier.
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置IdP identifier.
                     * @param _entityId IdP identifier.
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取IdP login URL.
                     * @return LoginUrl IdP login URL.
                     * 
                     */
                    std::string GetLoginUrl() const;

                    /**
                     * 设置IdP login URL.
                     * @param _loginUrl IdP login URL.
                     * 
                     */
                    void SetLoginUrl(const std::string& _loginUrl);

                    /**
                     * 判断参数 LoginUrl 是否已赋值
                     * @return LoginUrl 是否已赋值
                     * 
                     */
                    bool LoginUrlHasBeenSet() const;

                    /**
                     * 获取X509 certificate in PEM format. If this parameter is specified, all existing certificates will be replaced.
                     * @return X509Certificate X509 certificate in PEM format. If this parameter is specified, all existing certificates will be replaced.
                     * 
                     */
                    std::string GetX509Certificate() const;

                    /**
                     * 设置X509 certificate in PEM format. If this parameter is specified, all existing certificates will be replaced.
                     * @param _x509Certificate X509 certificate in PEM format. If this parameter is specified, all existing certificates will be replaced.
                     * 
                     */
                    void SetX509Certificate(const std::string& _x509Certificate);

                    /**
                     * 判断参数 X509Certificate 是否已赋值
                     * @return X509Certificate 是否已赋值
                     * 
                     */
                    bool X509CertificateHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * IdP metadata document (Base64 encoded). Provided by an IdP that supports the SAML 2.0 protocol.
                     */
                    std::string m_encodedMetadataDocument;
                    bool m_encodedMetadataDocumentHasBeenSet;

                    /**
                     * SSO enabling status. Valid values: Enabled, Disabled (default).
                     */
                    std::string m_sSOStatus;
                    bool m_sSOStatusHasBeenSet;

                    /**
                     * IdP identifier.
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * IdP login URL.
                     */
                    std::string m_loginUrl;
                    bool m_loginUrlHasBeenSet;

                    /**
                     * X509 certificate in PEM format. If this parameter is specified, all existing certificates will be replaced.
                     */
                    std::string m_x509Certificate;
                    bool m_x509CertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_H_
