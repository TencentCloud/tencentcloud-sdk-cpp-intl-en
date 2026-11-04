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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPPLUGINCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPPLUGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginParam.h>
#include <tencentcloud/adp/v20260520/model/AuthConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MCP plug-in configuration message
                */
                class MCPPluginConfig : public AbstractModel
                {
                public:
                    MCPPluginConfig();
                    ~MCPPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MCP plug-in public access address</p>
                     * @return ExternalMCPServerUrl <p>MCP plug-in public access address</p>
                     * 
                     */
                    std::string GetExternalMCPServerUrl() const;

                    /**
                     * 设置<p>MCP plug-in public access address</p>
                     * @param _externalMCPServerUrl <p>MCP plug-in public access address</p>
                     * 
                     */
                    void SetExternalMCPServerUrl(const std::string& _externalMCPServerUrl);

                    /**
                     * 判断参数 ExternalMCPServerUrl 是否已赋值
                     * @return ExternalMCPServerUrl 是否已赋值
                     * 
                     */
                    bool ExternalMCPServerUrlHasBeenSet() const;

                    /**
                     * 获取<p>MCP server address</p>
                     * @return MCPServerUrl <p>MCP server address</p>
                     * 
                     */
                    std::string GetMCPServerUrl() const;

                    /**
                     * 设置<p>MCP server address</p>
                     * @param _mCPServerUrl <p>MCP server address</p>
                     * 
                     */
                    void SetMCPServerUrl(const std::string& _mCPServerUrl);

                    /**
                     * 判断参数 MCPServerUrl 是否已赋值
                     * @return MCPServerUrl 是否已赋值
                     * 
                     */
                    bool MCPServerUrlHasBeenSet() const;

                    /**
                     * 获取<p>MCP transmission type: SSE/Streamable<br>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | SSE + HTTP mode |<br>| 1 | Streamable HTTP mode |</p>
                     * @return MCPTransport <p>MCP transmission type: SSE/Streamable<br>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | SSE + HTTP mode |<br>| 1 | Streamable HTTP mode |</p>
                     * 
                     */
                    int64_t GetMCPTransport() const;

                    /**
                     * 设置<p>MCP transmission type: SSE/Streamable<br>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | SSE + HTTP mode |<br>| 1 | Streamable HTTP mode |</p>
                     * @param _mCPTransport <p>MCP transmission type: SSE/Streamable<br>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | SSE + HTTP mode |<br>| 1 | Streamable HTTP mode |</p>
                     * 
                     */
                    void SetMCPTransport(const int64_t& _mCPTransport);

                    /**
                     * 判断参数 MCPTransport 是否已赋值
                     * @return MCPTransport 是否已赋值
                     * 
                     */
                    bool MCPTransportHasBeenSet() const;

                    /**
                     * 获取<p>header parameters of the MCP plug-in</p>
                     * @return PluginHeader <p>header parameters of the MCP plug-in</p>
                     * 
                     */
                    std::vector<PluginParam> GetPluginHeader() const;

                    /**
                     * 设置<p>header parameters of the MCP plug-in</p>
                     * @param _pluginHeader <p>header parameters of the MCP plug-in</p>
                     * 
                     */
                    void SetPluginHeader(const std::vector<PluginParam>& _pluginHeader);

                    /**
                     * 判断参数 PluginHeader 是否已赋值
                     * @return PluginHeader 是否已赋值
                     * 
                     */
                    bool PluginHeaderHasBeenSet() const;

                    /**
                     * 获取<p>query parameter of the MCP plug-in</p>
                     * @return PluginQuery <p>query parameter of the MCP plug-in</p>
                     * 
                     */
                    std::vector<PluginParam> GetPluginQuery() const;

                    /**
                     * 设置<p>query parameter of the MCP plug-in</p>
                     * @param _pluginQuery <p>query parameter of the MCP plug-in</p>
                     * 
                     */
                    void SetPluginQuery(const std::vector<PluginParam>& _pluginQuery);

                    /**
                     * 判断参数 PluginQuery 是否已赋值
                     * @return PluginQuery 是否已赋值
                     * 
                     */
                    bool PluginQueryHasBeenSet() const;

                    /**
                     * 获取<p>SSE persistent connection timeout period, in seconds</p>
                     * @return SSEReadTimeout <p>SSE persistent connection timeout period, in seconds</p>
                     * 
                     */
                    int64_t GetSSEReadTimeout() const;

                    /**
                     * 设置<p>SSE persistent connection timeout period, in seconds</p>
                     * @param _sSEReadTimeout <p>SSE persistent connection timeout period, in seconds</p>
                     * 
                     */
                    void SetSSEReadTimeout(const int64_t& _sSEReadTimeout);

                    /**
                     * 判断参数 SSEReadTimeout 是否已赋值
                     * @return SSEReadTimeout 是否已赋值
                     * 
                     */
                    bool SSEReadTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Request timeout period, in seconds</p>
                     * @return Timeout <p>Request timeout period, in seconds</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>Request timeout period, in seconds</p>
                     * @param _timeout <p>Request timeout period, in seconds</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Authorization information.</p>
                     * @return AuthConfig <p>Authorization information.</p>
                     * 
                     */
                    AuthConfig GetAuthConfig() const;

                    /**
                     * 设置<p>Authorization information.</p>
                     * @param _authConfig <p>Authorization information.</p>
                     * 
                     */
                    void SetAuthConfig(const AuthConfig& _authConfig);

                    /**
                     * 判断参数 AuthConfig 是否已赋值
                     * @return AuthConfig 是否已赋值
                     * 
                     */
                    bool AuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>Whether the interactive interface (MCP Apps) and plug-in-level tags are supported. Default false</p>
                     * @return SupportsApps <p>Whether the interactive interface (MCP Apps) and plug-in-level tags are supported. Default false</p>
                     * 
                     */
                    bool GetSupportsApps() const;

                    /**
                     * 设置<p>Whether the interactive interface (MCP Apps) and plug-in-level tags are supported. Default false</p>
                     * @param _supportsApps <p>Whether the interactive interface (MCP Apps) and plug-in-level tags are supported. Default false</p>
                     * 
                     */
                    void SetSupportsApps(const bool& _supportsApps);

                    /**
                     * 判断参数 SupportsApps 是否已赋值
                     * @return SupportsApps 是否已赋值
                     * 
                     */
                    bool SupportsAppsHasBeenSet() const;

                private:

                    /**
                     * <p>MCP plug-in public access address</p>
                     */
                    std::string m_externalMCPServerUrl;
                    bool m_externalMCPServerUrlHasBeenSet;

                    /**
                     * <p>MCP server address</p>
                     */
                    std::string m_mCPServerUrl;
                    bool m_mCPServerUrlHasBeenSet;

                    /**
                     * <p>MCP transmission type: SSE/Streamable<br>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | SSE + HTTP mode |<br>| 1 | Streamable HTTP mode |</p>
                     */
                    int64_t m_mCPTransport;
                    bool m_mCPTransportHasBeenSet;

                    /**
                     * <p>header parameters of the MCP plug-in</p>
                     */
                    std::vector<PluginParam> m_pluginHeader;
                    bool m_pluginHeaderHasBeenSet;

                    /**
                     * <p>query parameter of the MCP plug-in</p>
                     */
                    std::vector<PluginParam> m_pluginQuery;
                    bool m_pluginQueryHasBeenSet;

                    /**
                     * <p>SSE persistent connection timeout period, in seconds</p>
                     */
                    int64_t m_sSEReadTimeout;
                    bool m_sSEReadTimeoutHasBeenSet;

                    /**
                     * <p>Request timeout period, in seconds</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Authorization information.</p>
                     */
                    AuthConfig m_authConfig;
                    bool m_authConfigHasBeenSet;

                    /**
                     * <p>Whether the interactive interface (MCP Apps) and plug-in-level tags are supported. Default false</p>
                     */
                    bool m_supportsApps;
                    bool m_supportsAppsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPPLUGINCONFIG_H_
