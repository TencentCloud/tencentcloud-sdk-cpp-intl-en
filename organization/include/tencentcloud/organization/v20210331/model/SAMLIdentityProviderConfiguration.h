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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDENTITYPROVIDERCONFIGURATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDENTITYPROVIDERCONFIGURATION_H_

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
                * SAML identity provider configuration information.
                */
                class SAMLIdentityProviderConfiguration : public AbstractModel
                {
                public:
                    SAMLIdentityProviderConfiguration();
                    ~SAMLIdentityProviderConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取IdP metadata document (Base64 encoded).
                     * @return EncodedMetadataDocument IdP metadata document (Base64 encoded).
                     * 
                     */
                    std::string GetEncodedMetadataDocument() const;

                    /**
                     * 设置IdP metadata document (Base64 encoded).
                     * @param _encodedMetadataDocument IdP metadata document (Base64 encoded).
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
                     * 获取X509 certificate ID.
                     * @return CertificateIds X509 certificate ID.
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置X509 certificate ID.
                     * @param _certificateIds X509 certificate ID.
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * IdP identifier.
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * SSO enabling status. Valid values: Enabled, Disabled (default).
                     */
                    std::string m_sSOStatus;
                    bool m_sSOStatusHasBeenSet;

                    /**
                     * IdP metadata document (Base64 encoded).
                     */
                    std::string m_encodedMetadataDocument;
                    bool m_encodedMetadataDocumentHasBeenSet;

                    /**
                     * X509 certificate ID.
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * IdP login URL.
                     */
                    std::string m_loginUrl;
                    bool m_loginUrlHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDENTITYPROVIDERCONFIGURATION_H_
