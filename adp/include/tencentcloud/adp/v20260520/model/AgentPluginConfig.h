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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginParameter.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginCredentialConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Basic plug-in configuration of the Agent
                */
                class AgentPluginConfig : public AbstractModel
                {
                public:
                    AgentPluginConfig();
                    ~AgentPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>plugin_id</p>
                     * @return PluginId <p>plugin_id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>plugin_id</p>
                     * @param _pluginId <p>plugin_id</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in Header parameter</p>
                     * @return HeaderParameterList <p>Plug-in Header parameter</p>
                     * 
                     */
                    std::vector<AgentPluginParameter> GetHeaderParameterList() const;

                    /**
                     * 设置<p>Plug-in Header parameter</p>
                     * @param _headerParameterList <p>Plug-in Header parameter</p>
                     * 
                     */
                    void SetHeaderParameterList(const std::vector<AgentPluginParameter>& _headerParameterList);

                    /**
                     * 判断参数 HeaderParameterList 是否已赋值
                     * @return HeaderParameterList 是否已赋值
                     * 
                     */
                    bool HeaderParameterListHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in Query parameter</p>
                     * @return QueryParameterList <p>Plug-in Query parameter</p>
                     * 
                     */
                    std::vector<AgentPluginParameter> GetQueryParameterList() const;

                    /**
                     * 设置<p>Plug-in Query parameter</p>
                     * @param _queryParameterList <p>Plug-in Query parameter</p>
                     * 
                     */
                    void SetQueryParameterList(const std::vector<AgentPluginParameter>& _queryParameterList);

                    /**
                     * 判断参数 QueryParameterList 是否已赋值
                     * @return QueryParameterList 是否已赋值
                     * 
                     */
                    bool QueryParameterListHasBeenSet() const;

                    /**
                     * 获取<p>Whether to use CAM one-click authorization. This parameter is valid only when auth_type=2</p>
                     * @return EnableCamRoleAuth <p>Whether to use CAM one-click authorization. This parameter is valid only when auth_type=2</p>
                     * 
                     */
                    bool GetEnableCamRoleAuth() const;

                    /**
                     * 设置<p>Whether to use CAM one-click authorization. This parameter is valid only when auth_type=2</p>
                     * @param _enableCamRoleAuth <p>Whether to use CAM one-click authorization. This parameter is valid only when auth_type=2</p>
                     * 
                     */
                    void SetEnableCamRoleAuth(const bool& _enableCamRoleAuth);

                    /**
                     * 判断参数 EnableCamRoleAuth 是否已赋值
                     * @return EnableCamRoleAuth 是否已赋值
                     * 
                     */
                    bool EnableCamRoleAuthHasBeenSet() const;

                    /**
                     * 获取<p>Authorization type</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key</li><li>2: CAM authorization</li><li>3: OAuth2.0 authorization</li></ul>
                     * @return AuthType <p>Authorization type</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key</li><li>2: CAM authorization</li><li>3: OAuth2.0 authorization</li></ul>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>Authorization type</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key</li><li>2: CAM authorization</li><li>3: OAuth2.0 authorization</li></ul>
                     * @param _authType <p>Authorization type</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key</li><li>2: CAM authorization</li><li>3: OAuth2.0 authorization</li></ul>
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
                     * 获取<p>OAuth authorization and consent mode; 0 - developer authorization; 1 - user authorization (valid only when auth_type=3)</p>
                     * @return OAuthConsent <p>OAuth authorization and consent mode; 0 - developer authorization; 1 - user authorization (valid only when auth_type=3)</p>
                     * 
                     */
                    int64_t GetOAuthConsent() const;

                    /**
                     * 设置<p>OAuth authorization and consent mode; 0 - developer authorization; 1 - user authorization (valid only when auth_type=3)</p>
                     * @param _oAuthConsent <p>OAuth authorization and consent mode; 0 - developer authorization; 1 - user authorization (valid only when auth_type=3)</p>
                     * 
                     */
                    void SetOAuthConsent(const int64_t& _oAuthConsent);

                    /**
                     * 判断参数 OAuthConsent 是否已赋值
                     * @return OAuthConsent 是否已赋值
                     * 
                     */
                    bool OAuthConsentHasBeenSet() const;

                    /**
                     * 获取<p>Credential configuration</p>
                     * @return CredentialConfig <p>Credential configuration</p>
                     * 
                     */
                    AgentPluginCredentialConfig GetCredentialConfig() const;

                    /**
                     * 设置<p>Credential configuration</p>
                     * @param _credentialConfig <p>Credential configuration</p>
                     * 
                     */
                    void SetCredentialConfig(const AgentPluginCredentialConfig& _credentialConfig);

                    /**
                     * 判断参数 CredentialConfig 是否已赋值
                     * @return CredentialConfig 是否已赋值
                     * 
                     */
                    bool CredentialConfigHasBeenSet() const;

                private:

                    /**
                     * <p>plugin_id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>Plug-in Header parameter</p>
                     */
                    std::vector<AgentPluginParameter> m_headerParameterList;
                    bool m_headerParameterListHasBeenSet;

                    /**
                     * <p>Plug-in Query parameter</p>
                     */
                    std::vector<AgentPluginParameter> m_queryParameterList;
                    bool m_queryParameterListHasBeenSet;

                    /**
                     * <p>Whether to use CAM one-click authorization. This parameter is valid only when auth_type=2</p>
                     */
                    bool m_enableCamRoleAuth;
                    bool m_enableCamRoleAuthHasBeenSet;

                    /**
                     * <p>Authorization type</p><p>Enumeration values:</p><ul><li>0: No authentication</li><li>1: API Key</li><li>2: CAM authorization</li><li>3: OAuth2.0 authorization</li></ul>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>OAuth authorization and consent mode; 0 - developer authorization; 1 - user authorization (valid only when auth_type=3)</p>
                     */
                    int64_t m_oAuthConsent;
                    bool m_oAuthConsentHasBeenSet;

                    /**
                     * <p>Credential configuration</p>
                     */
                    AgentPluginCredentialConfig m_credentialConfig;
                    bool m_credentialConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCONFIG_H_
