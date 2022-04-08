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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSEROIDCCONFIGRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSEROIDCCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeUserOIDCConfig response structure.
                */
                class DescribeUserOIDCConfigResponse : public AbstractModel
                {
                public:
                    DescribeUserOIDCConfigResponse();
                    ~DescribeUserOIDCConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IdP type. 12: user OIDC IdP
                     * @return ProviderType IdP type. 12: user OIDC IdP
                     */
                    uint64_t GetProviderType() const;

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取IdP URL
                     * @return IdentityUrl IdP URL
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 判断参数 IdentityUrl 是否已赋值
                     * @return IdentityUrl 是否已赋值
                     */
                    bool IdentityUrlHasBeenSet() const;

                    /**
                     * 获取Signature public key
                     * @return IdentityKey Signature public key
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 判断参数 IdentityKey 是否已赋值
                     * @return IdentityKey 是否已赋值
                     */
                    bool IdentityKeyHasBeenSet() const;

                    /**
                     * 获取Client ID
                     * @return ClientId Client ID
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Status. 0: not set; 2: disabled; 11: enabled.
                     * @return Status Status. 0: not set; 2: disabled; 11: enabled.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Authorization endpoint
                     * @return AuthorizationEndpoint Authorization endpoint
                     */
                    std::string GetAuthorizationEndpoint() const;

                    /**
                     * 判断参数 AuthorizationEndpoint 是否已赋值
                     * @return AuthorizationEndpoint 是否已赋值
                     */
                    bool AuthorizationEndpointHasBeenSet() const;

                    /**
                     * 获取Authorization scope
                     * @return Scope Authorization scope
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Authorization response type
                     * @return ResponseType Authorization response type
                     */
                    std::string GetResponseType() const;

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取Authorization response mode
                     * @return ResponseMode Authorization response mode
                     */
                    std::string GetResponseMode() const;

                    /**
                     * 判断参数 ResponseMode 是否已赋值
                     * @return ResponseMode 是否已赋值
                     */
                    bool ResponseModeHasBeenSet() const;

                    /**
                     * 获取Mapping field name
                     * @return MappingFiled Mapping field name
                     */
                    std::string GetMappingFiled() const;

                    /**
                     * 判断参数 MappingFiled 是否已赋值
                     * @return MappingFiled 是否已赋值
                     */
                    bool MappingFiledHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * IdP type. 12: user OIDC IdP
                     */
                    uint64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * IdP URL
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * Signature public key
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * Client ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Status. 0: not set; 2: disabled; 11: enabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Authorization endpoint
                     */
                    std::string m_authorizationEndpoint;
                    bool m_authorizationEndpointHasBeenSet;

                    /**
                     * Authorization scope
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Authorization response type
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * Authorization response mode
                     */
                    std::string m_responseMode;
                    bool m_responseModeHasBeenSet;

                    /**
                     * Mapping field name
                     */
                    std::string m_mappingFiled;
                    bool m_mappingFiledHasBeenSet;

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

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSEROIDCCONFIGRESPONSE_H_
