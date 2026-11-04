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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ApiKeyAuthConfig.h>
#include <tencentcloud/adp/v20260520/model/CamAuthConfig.h>
#include <tencentcloud/adp/v20260520/model/OAuthConfig.h>
#include <tencentcloud/adp/v20260520/model/AccessKeyAuthConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Plugin authorization configuration
                */
                class AuthConfig : public AbstractModel
                {
                public:
                    AuthConfig();
                    ~AuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Authorization mode.</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key authentication</li><li>2: CAM authorization</li><li>3: OAuth 2.0 authorization</li></ul>
                     * @return AuthType <p>Authorization mode.</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key authentication</li><li>2: CAM authorization</li><li>3: OAuth 2.0 authorization</li></ul>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>Authorization mode.</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key authentication</li><li>2: CAM authorization</li><li>3: OAuth 2.0 authorization</li></ul>
                     * @param _authType <p>Authorization mode.</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key authentication</li><li>2: CAM authorization</li><li>3: OAuth 2.0 authorization</li></ul>
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>API Key Authorization Configuration</p>
                     * @return ApiKeyAuthConfig <p>API Key Authorization Configuration</p>
                     * 
                     */
                    ApiKeyAuthConfig GetApiKeyAuthConfig() const;

                    /**
                     * 设置<p>API Key Authorization Configuration</p>
                     * @param _apiKeyAuthConfig <p>API Key Authorization Configuration</p>
                     * 
                     */
                    void SetApiKeyAuthConfig(const ApiKeyAuthConfig& _apiKeyAuthConfig);

                    /**
                     * 判断参数 ApiKeyAuthConfig 是否已赋值
                     * @return ApiKeyAuthConfig 是否已赋值
                     * 
                     */
                    bool ApiKeyAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>CAM Authorization Configuration</p>
                     * @return CamAuthConfig <p>CAM Authorization Configuration</p>
                     * 
                     */
                    CamAuthConfig GetCamAuthConfig() const;

                    /**
                     * 设置<p>CAM Authorization Configuration</p>
                     * @param _camAuthConfig <p>CAM Authorization Configuration</p>
                     * 
                     */
                    void SetCamAuthConfig(const CamAuthConfig& _camAuthConfig);

                    /**
                     * 判断参数 CamAuthConfig 是否已赋值
                     * @return CamAuthConfig 是否已赋值
                     * 
                     */
                    bool CamAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>OAuth 2.0 authorization configuration</p>
                     * @return OAuthConfig <p>OAuth 2.0 authorization configuration</p>
                     * 
                     */
                    OAuthConfig GetOAuthConfig() const;

                    /**
                     * 设置<p>OAuth 2.0 authorization configuration</p>
                     * @param _oAuthConfig <p>OAuth 2.0 authorization configuration</p>
                     * 
                     */
                    void SetOAuthConfig(const OAuthConfig& _oAuthConfig);

                    /**
                     * 判断参数 OAuthConfig 是否已赋值
                     * @return OAuthConfig 是否已赋值
                     * 
                     */
                    bool OAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>AccessKey authorization configuration</p>
                     * @return AccessKeyAuthConfig <p>AccessKey authorization configuration</p>
                     * 
                     */
                    AccessKeyAuthConfig GetAccessKeyAuthConfig() const;

                    /**
                     * 设置<p>AccessKey authorization configuration</p>
                     * @param _accessKeyAuthConfig <p>AccessKey authorization configuration</p>
                     * 
                     */
                    void SetAccessKeyAuthConfig(const AccessKeyAuthConfig& _accessKeyAuthConfig);

                    /**
                     * 判断参数 AccessKeyAuthConfig 是否已赋值
                     * @return AccessKeyAuthConfig 是否已赋值
                     * 
                     */
                    bool AccessKeyAuthConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Authorization mode.</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key authentication</li><li>2: CAM authorization</li><li>3: OAuth 2.0 authorization</li></ul>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>API Key Authorization Configuration</p>
                     */
                    ApiKeyAuthConfig m_apiKeyAuthConfig;
                    bool m_apiKeyAuthConfigHasBeenSet;

                    /**
                     * <p>CAM Authorization Configuration</p>
                     */
                    CamAuthConfig m_camAuthConfig;
                    bool m_camAuthConfigHasBeenSet;

                    /**
                     * <p>OAuth 2.0 authorization configuration</p>
                     */
                    OAuthConfig m_oAuthConfig;
                    bool m_oAuthConfigHasBeenSet;

                    /**
                     * <p>AccessKey authorization configuration</p>
                     */
                    AccessKeyAuthConfig m_accessKeyAuthConfig;
                    bool m_accessKeyAuthConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AUTHCONFIG_H_
