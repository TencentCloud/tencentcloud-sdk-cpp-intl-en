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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_OAUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_OAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * OAuth 2.0 authorization information
                */
                class OAuthConfig : public AbstractModel
                {
                public:
                    OAuthConfig();
                    ~OAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取url address of the OAuth service provider authorization page
                     * @return AuthorizationUrl url address of the OAuth service provider authorization page
                     * 
                     */
                    std::string GetAuthorizationUrl() const;

                    /**
                     * 设置url address of the OAuth service provider authorization page
                     * @param _authorizationUrl url address of the OAuth service provider authorization page
                     * 
                     */
                    void SetAuthorizationUrl(const std::string& _authorizationUrl);

                    /**
                     * 判断参数 AuthorizationUrl 是否已赋值
                     * @return AuthorizationUrl 是否已赋值
                     * 
                     */
                    bool AuthorizationUrlHasBeenSet() const;

                    /**
                     * 获取Client ID
                     * @return ClientId Client ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID
                     * @param _clientId Client ID
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
                     * 获取Client Key
                     * @return ClientSecret Client Key
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置Client Key
                     * @param _clientSecret Client Key
                     * 
                     */
                    void SetClientSecret(const std::string& _clientSecret);

                    /**
                     * 判断参数 ClientSecret 是否已赋值
                     * @return ClientSecret 是否已赋值
                     * 
                     */
                    bool ClientSecretHasBeenSet() const;

                    /**
                     * 获取Data scope for the authorization request
                     * @return ScopeList Data scope for the authorization request
                     * 
                     */
                    std::vector<std::string> GetScopeList() const;

                    /**
                     * 设置Data scope for the authorization request
                     * @param _scopeList Data scope for the authorization request
                     * 
                     */
                    void SetScopeList(const std::vector<std::string>& _scopeList);

                    /**
                     * 判断参数 ScopeList 是否已赋值
                     * @return ScopeList 是否已赋值
                     * 
                     */
                    bool ScopeListHasBeenSet() const;

                    /**
                     * 获取url address for obtaining the access token
                     * @return TokenUrl url address for obtaining the access token
                     * 
                     */
                    std::string GetTokenUrl() const;

                    /**
                     * 设置url address for obtaining the access token
                     * @param _tokenUrl url address for obtaining the access token
                     * 
                     */
                    void SetTokenUrl(const std::string& _tokenUrl);

                    /**
                     * 判断参数 TokenUrl 是否已赋值
                     * @return TokenUrl 是否已赋值
                     * 
                     */
                    bool TokenUrlHasBeenSet() const;

                private:

                    /**
                     * url address of the OAuth service provider authorization page
                     */
                    std::string m_authorizationUrl;
                    bool m_authorizationUrlHasBeenSet;

                    /**
                     * Client ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Client Key
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                    /**
                     * Data scope for the authorization request
                     */
                    std::vector<std::string> m_scopeList;
                    bool m_scopeListHasBeenSet;

                    /**
                     * url address for obtaining the access token
                     */
                    std::string m_tokenUrl;
                    bool m_tokenUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_OAUTHCONFIG_H_
