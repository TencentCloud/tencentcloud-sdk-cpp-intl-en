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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_MCPINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_MCPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * MCP entity
                */
                class MCPInfo : public AbstractModel
                {
                public:
                    MCPInfo();
                    ~MCPInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>mcp ID</p>
                     * @return MCPId <p>mcp ID</p>
                     * 
                     */
                    std::string GetMCPId() const;

                    /**
                     * 设置<p>mcp ID</p>
                     * @param _mCPId <p>mcp ID</p>
                     * 
                     */
                    void SetMCPId(const std::string& _mCPId);

                    /**
                     * 判断参数 MCPId 是否已赋值
                     * @return MCPId 是否已赋值
                     * 
                     */
                    bool MCPIdHasBeenSet() const;

                    /**
                     * 获取<p>MCP name</p>
                     * @return Name <p>MCP name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>MCP name</p>
                     * @param _name <p>MCP name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>MCP description</p>
                     * @return Description <p>MCP description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>MCP description</p>
                     * @param _description <p>MCP description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>MCP URL</p>
                     * @return Url <p>MCP URL</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>MCP URL</p>
                     * @param _url <p>MCP URL</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Transport protocol: sse / streamable_http / stdio</p>
                     * @return Transport <p>Transport protocol: sse / streamable_http / stdio</p>
                     * 
                     */
                    std::string GetTransport() const;

                    /**
                     * 设置<p>Transport protocol: sse / streamable_http / stdio</p>
                     * @param _transport <p>Transport protocol: sse / streamable_http / stdio</p>
                     * 
                     */
                    void SetTransport(const std::string& _transport);

                    /**
                     * 判断参数 Transport 是否已赋值
                     * @return Transport 是否已赋值
                     * 
                     */
                    bool TransportHasBeenSet() const;

                    /**
                     * 获取<p>Authentication type: none / bearer / basic / api_key</p>
                     * @return AuthType <p>Authentication type: none / bearer / basic / api_key</p>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>Authentication type: none / bearer / basic / api_key</p>
                     * @param _authType <p>Authentication type: none / bearer / basic / api_key</p>
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>Authentication key (masked in the response)</p>
                     * @return AuthSecret <p>Authentication key (masked in the response)</p>
                     * 
                     */
                    std::string GetAuthSecret() const;

                    /**
                     * 设置<p>Authentication key (masked in the response)</p>
                     * @param _authSecret <p>Authentication key (masked in the response)</p>
                     * 
                     */
                    void SetAuthSecret(const std::string& _authSecret);

                    /**
                     * 判断参数 AuthSecret 是否已赋值
                     * @return AuthSecret 是否已赋值
                     * 
                     */
                    bool AuthSecretHasBeenSet() const;

                    /**
                     * 获取<p>Timeout (s)</p>
                     * @return Timeout <p>Timeout (s)</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>Timeout (s)</p>
                     * @param _timeout <p>Timeout (s)</p>
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
                     * 获取<p>Retry count</p>
                     * @return RetryCount <p>Retry count</p>
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置<p>Retry count</p>
                     * @param _retryCount <p>Retry count</p>
                     * 
                     */
                    void SetRetryCount(const int64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>Request header JSON</p>
                     * @return Headers <p>Request header JSON</p>
                     * 
                     */
                    std::string GetHeaders() const;

                    /**
                     * 设置<p>Request header JSON</p>
                     * @param _headers <p>Request header JSON</p>
                     * 
                     */
                    void SetHeaders(const std::string& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable</p>
                     * @return Enabled <p>Whether to enable</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable</p>
                     * @param _enabled <p>Whether to enable</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>mcp ID</p>
                     */
                    std::string m_mCPId;
                    bool m_mCPIdHasBeenSet;

                    /**
                     * <p>MCP name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>MCP description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>MCP URL</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Transport protocol: sse / streamable_http / stdio</p>
                     */
                    std::string m_transport;
                    bool m_transportHasBeenSet;

                    /**
                     * <p>Authentication type: none / bearer / basic / api_key</p>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>Authentication key (masked in the response)</p>
                     */
                    std::string m_authSecret;
                    bool m_authSecretHasBeenSet;

                    /**
                     * <p>Timeout (s)</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Retry count</p>
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>Request header JSON</p>
                     */
                    std::string m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>Whether to enable</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_MCPINFO_H_
