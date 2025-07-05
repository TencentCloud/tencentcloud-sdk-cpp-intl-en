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

#ifndef TENCENTCLOUD_IAP_V20240713_MODEL_CREATEIAPUSEROIDCCONFIGREQUEST_H_
#define TENCENTCLOUD_IAP_V20240713_MODEL_CREATEIAPUSEROIDCCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iap
    {
        namespace V20240713
        {
            namespace Model
            {
                /**
                * CreateIAPUserOIDCConfig request structure.
                */
                class CreateIAPUserOIDCConfigRequest : public AbstractModel
                {
                public:
                    CreateIAPUserOIDCConfigRequest();
                    ~CreateIAPUserOIDCConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取OpenID Connect IdP URL. It corresponds to the value of the "issuer" field in the Openid-configuration provided by the enterprise IdP.
                     * @return IdentityUrl OpenID Connect IdP URL. It corresponds to the value of the "issuer" field in the Openid-configuration provided by the enterprise IdP.
                     * 
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 设置OpenID Connect IdP URL. It corresponds to the value of the "issuer" field in the Openid-configuration provided by the enterprise IdP.
                     * @param _identityUrl OpenID Connect IdP URL. It corresponds to the value of the "issuer" field in the Openid-configuration provided by the enterprise IdP.
                     * 
                     */
                    void SetIdentityUrl(const std::string& _identityUrl);

                    /**
                     * 判断参数 IdentityUrl 是否已赋值
                     * @return IdentityUrl 是否已赋值
                     * 
                     */
                    bool IdentityUrlHasBeenSet() const;

                    /**
                     * 获取Client ID registered with the OpenID Connect IdP.
                     * @return ClientId Client ID registered with the OpenID Connect IdP.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID registered with the OpenID Connect IdP.
                     * @param _clientId Client ID registered with the OpenID Connect IdP.
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取OpenID Connect IdP authorization endpoint. It corresponds to the value of the "authorization_endpoint" field in the Openid-configuration provided by the enterprise IdP.
                     * @return AuthorizationEndpoint OpenID Connect IdP authorization endpoint. It corresponds to the value of the "authorization_endpoint" field in the Openid-configuration provided by the enterprise IdP.
                     * 
                     */
                    std::string GetAuthorizationEndpoint() const;

                    /**
                     * 设置OpenID Connect IdP authorization endpoint. It corresponds to the value of the "authorization_endpoint" field in the Openid-configuration provided by the enterprise IdP.
                     * @param _authorizationEndpoint OpenID Connect IdP authorization endpoint. It corresponds to the value of the "authorization_endpoint" field in the Openid-configuration provided by the enterprise IdP.
                     * 
                     */
                    void SetAuthorizationEndpoint(const std::string& _authorizationEndpoint);

                    /**
                     * 判断参数 AuthorizationEndpoint 是否已赋值
                     * @return AuthorizationEndpoint 是否已赋值
                     * 
                     */
                    bool AuthorizationEndpointHasBeenSet() const;

                    /**
                     * 获取Authorization response type, which is always id_token.
                     * @return ResponseType Authorization response type, which is always id_token.
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置Authorization response type, which is always id_token.
                     * @param _responseType Authorization response type, which is always id_token.
                     * 
                     */
                    void SetResponseType(const std::string& _responseType);

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取Authorization response mode. Valid values: form_post (recommended); fragment.
                     * @return ResponseMode Authorization response mode. Valid values: form_post (recommended); fragment.
                     * 
                     */
                    std::string GetResponseMode() const;

                    /**
                     * 设置Authorization response mode. Valid values: form_post (recommended); fragment.
                     * @param _responseMode Authorization response mode. Valid values: form_post (recommended); fragment.
                     * 
                     */
                    void SetResponseMode(const std::string& _responseMode);

                    /**
                     * 判断参数 ResponseMode 是否已赋值
                     * @return ResponseMode 是否已赋值
                     * 
                     */
                    bool ResponseModeHasBeenSet() const;

                    /**
                     * 获取Mapping field name. It indicates which field in the id_token of the IdP is mapped to the username of a sub-user. It is usually the sub or name field.
                     * @return MappingFiled Mapping field name. It indicates which field in the id_token of the IdP is mapped to the username of a sub-user. It is usually the sub or name field.
                     * 
                     */
                    std::string GetMappingFiled() const;

                    /**
                     * 设置Mapping field name. It indicates which field in the id_token of the IdP is mapped to the username of a sub-user. It is usually the sub or name field.
                     * @param _mappingFiled Mapping field name. It indicates which field in the id_token of the IdP is mapped to the username of a sub-user. It is usually the sub or name field.
                     * 
                     */
                    void SetMappingFiled(const std::string& _mappingFiled);

                    /**
                     * 判断参数 MappingFiled 是否已赋值
                     * @return MappingFiled 是否已赋值
                     * 
                     */
                    bool MappingFiledHasBeenSet() const;

                    /**
                     * 获取Signature public key, which is used to verify the OpenID Connect IdP's ID token and must be Base64-encoded. For the security of your account, we recommend you rotate it regularly.
                     * @return IdentityKey Signature public key, which is used to verify the OpenID Connect IdP's ID token and must be Base64-encoded. For the security of your account, we recommend you rotate it regularly.
                     * 
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 设置Signature public key, which is used to verify the OpenID Connect IdP's ID token and must be Base64-encoded. For the security of your account, we recommend you rotate it regularly.
                     * @param _identityKey Signature public key, which is used to verify the OpenID Connect IdP's ID token and must be Base64-encoded. For the security of your account, we recommend you rotate it regularly.
                     * 
                     */
                    void SetIdentityKey(const std::string& _identityKey);

                    /**
                     * 判断参数 IdentityKey 是否已赋值
                     * @return IdentityKey 是否已赋值
                     * 
                     */
                    bool IdentityKeyHasBeenSet() const;

                    /**
                     * 获取Authorization information scope. Valid values: openid (default); email; profile.
                     * @return Scope Authorization information scope. Valid values: openid (default); email; profile.
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置Authorization information scope. Valid values: openid (default); email; profile.
                     * @param _scope Authorization information scope. Valid values: openid (default); email; profile.
                     * 
                     */
                    void SetScope(const std::vector<std::string>& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * OpenID Connect IdP URL. It corresponds to the value of the "issuer" field in the Openid-configuration provided by the enterprise IdP.
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * Client ID registered with the OpenID Connect IdP.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * OpenID Connect IdP authorization endpoint. It corresponds to the value of the "authorization_endpoint" field in the Openid-configuration provided by the enterprise IdP.
                     */
                    std::string m_authorizationEndpoint;
                    bool m_authorizationEndpointHasBeenSet;

                    /**
                     * Authorization response type, which is always id_token.
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * Authorization response mode. Valid values: form_post (recommended); fragment.
                     */
                    std::string m_responseMode;
                    bool m_responseModeHasBeenSet;

                    /**
                     * Mapping field name. It indicates which field in the id_token of the IdP is mapped to the username of a sub-user. It is usually the sub or name field.
                     */
                    std::string m_mappingFiled;
                    bool m_mappingFiledHasBeenSet;

                    /**
                     * Signature public key, which is used to verify the OpenID Connect IdP's ID token and must be Base64-encoded. For the security of your account, we recommend you rotate it regularly.
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * Authorization information scope. Valid values: openid (default); email; profile.
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAP_V20240713_MODEL_CREATEIAPUSEROIDCCONFIGREQUEST_H_
