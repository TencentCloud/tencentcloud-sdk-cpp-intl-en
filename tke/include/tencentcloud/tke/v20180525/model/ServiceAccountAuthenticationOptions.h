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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SERVICEACCOUNTAUTHENTICATIONOPTIONS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SERVICEACCOUNTAUTHENTICATIONOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ServiceAccount authentication configuration
                */
                class ServiceAccountAuthenticationOptions : public AbstractModel
                {
                public:
                    ServiceAccountAuthenticationOptions();
                    ~ServiceAccountAuthenticationOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Use TKE default issuer and jwksuri
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UseTKEDefault Use TKE default issuer and jwksuri
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetUseTKEDefault() const;

                    /**
                     * 设置Use TKE default issuer and jwksuri
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _useTKEDefault Use TKE default issuer and jwksuri
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUseTKEDefault(const bool& _useTKEDefault);

                    /**
                     * 判断参数 UseTKEDefault 是否已赋值
                     * @return UseTKEDefault 是否已赋值
                     * 
                     */
                    bool UseTKEDefaultHasBeenSet() const;

                    /**
                     * 获取service-account-issuer
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Issuer service-account-issuer
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置service-account-issuer
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _issuer service-account-issuer
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取service-account-jwks-uri
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return JWKSURI service-account-jwks-uri
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJWKSURI() const;

                    /**
                     * 设置service-account-jwks-uri
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _jWKSURI service-account-jwks-uri
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJWKSURI(const std::string& _jWKSURI);

                    /**
                     * 判断参数 JWKSURI 是否已赋值
                     * @return JWKSURI 是否已赋值
                     * 
                     */
                    bool JWKSURIHasBeenSet() const;

                    /**
                     * 获取If it is set to `true`, a RABC rule is automatically created to allow anonymous users to access `/.well-known/openid-configuration` and `/openid/v1/jwks`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoCreateDiscoveryAnonymousAuth If it is set to `true`, a RABC rule is automatically created to allow anonymous users to access `/.well-known/openid-configuration` and `/openid/v1/jwks`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoCreateDiscoveryAnonymousAuth() const;

                    /**
                     * 设置If it is set to `true`, a RABC rule is automatically created to allow anonymous users to access `/.well-known/openid-configuration` and `/openid/v1/jwks`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _autoCreateDiscoveryAnonymousAuth If it is set to `true`, a RABC rule is automatically created to allow anonymous users to access `/.well-known/openid-configuration` and `/openid/v1/jwks`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoCreateDiscoveryAnonymousAuth(const bool& _autoCreateDiscoveryAnonymousAuth);

                    /**
                     * 判断参数 AutoCreateDiscoveryAnonymousAuth 是否已赋值
                     * @return AutoCreateDiscoveryAnonymousAuth 是否已赋值
                     * 
                     */
                    bool AutoCreateDiscoveryAnonymousAuthHasBeenSet() const;

                private:

                    /**
                     * Use TKE default issuer and jwksuri
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_useTKEDefault;
                    bool m_useTKEDefaultHasBeenSet;

                    /**
                     * service-account-issuer
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * service-account-jwks-uri
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_jWKSURI;
                    bool m_jWKSURIHasBeenSet;

                    /**
                     * If it is set to `true`, a RABC rule is automatically created to allow anonymous users to access `/.well-known/openid-configuration` and `/openid/v1/jwks`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_autoCreateDiscoveryAnonymousAuth;
                    bool m_autoCreateDiscoveryAnonymousAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SERVICEACCOUNTAUTHENTICATIONOPTIONS_H_
