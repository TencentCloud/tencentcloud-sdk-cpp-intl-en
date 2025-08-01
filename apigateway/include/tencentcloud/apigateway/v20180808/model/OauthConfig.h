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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_OAUTHCONFIG_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_OAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * OAuth authorization configuration information
                */
                class OauthConfig : public AbstractModel
                {
                public:
                    OauthConfig();
                    ~OauthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public key for user token verification.
                     * @return PublicKey Public key for user token verification.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key for user token verification.
                     * @param _publicKey Public key for user token verification.
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Token delivery location.
                     * @return TokenLocation Token delivery location.
                     * 
                     */
                    std::string GetTokenLocation() const;

                    /**
                     * 设置Token delivery location.
                     * @param _tokenLocation Token delivery location.
                     * 
                     */
                    void SetTokenLocation(const std::string& _tokenLocation);

                    /**
                     * 判断参数 TokenLocation 是否已赋值
                     * @return TokenLocation 是否已赋值
                     * 
                     */
                    bool TokenLocationHasBeenSet() const;

                    /**
                     * 获取Redirect address, which is used to guide user logins.
                     * @return LoginRedirectUrl Redirect address, which is used to guide user logins.
                     * 
                     */
                    std::string GetLoginRedirectUrl() const;

                    /**
                     * 设置Redirect address, which is used to guide user logins.
                     * @param _loginRedirectUrl Redirect address, which is used to guide user logins.
                     * 
                     */
                    void SetLoginRedirectUrl(const std::string& _loginRedirectUrl);

                    /**
                     * 判断参数 LoginRedirectUrl 是否已赋值
                     * @return LoginRedirectUrl 是否已赋值
                     * 
                     */
                    bool LoginRedirectUrlHasBeenSet() const;

                private:

                    /**
                     * Public key for user token verification.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Token delivery location.
                     */
                    std::string m_tokenLocation;
                    bool m_tokenLocationHasBeenSet;

                    /**
                     * Redirect address, which is used to guide user logins.
                     */
                    std::string m_loginRedirectUrl;
                    bool m_loginRedirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_OAUTHCONFIG_H_
