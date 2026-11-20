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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONMCPSERVER_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONMCPSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/KeyValueItem.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * MCP Sever parameters.
                */
                class VoiceConversationMcpServer : public AbstractModel
                {
                public:
                    VoiceConversationMcpServer();
                    ~VoiceConversationMcpServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The unique mcp identifier.</p>
                     * @return Name <p>The unique mcp identifier.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>The unique mcp identifier.</p>
                     * @param _name <p>The unique mcp identifier.</p>
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
                     * 获取<p>Endpoint URL.</p>
                     * @return Url <p>Endpoint URL.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Endpoint URL.</p>
                     * @param _url <p>Endpoint URL.</p>
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
                     * 获取<p>Request timeout in ms. Default: 5000. This value should not exceed 30000.</p>
                     * @return Timeout <p>Request timeout in ms. Default: 5000. This value should not exceed 30000.</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Request timeout in ms. Default: 5000. This value should not exceed 30000.</p>
                     * @param _timeout <p>Request timeout in ms. Default: 5000. This value should not exceed 30000.</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Custom request headers, such as authentication information.</p>
                     * @return Headers <p>Custom request headers, such as authentication information.</p>
                     * 
                     */
                    std::vector<KeyValueItem> GetHeaders() const;

                    /**
                     * 设置<p>Custom request headers, such as authentication information.</p>
                     * @param _headers <p>Custom request headers, such as authentication information.</p>
                     * 
                     */
                    void SetHeaders(const std::vector<KeyValueItem>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist of tools that can be used.</p>
                     * @return ToolList <p>Allowlist of tools that can be used.</p>
                     * 
                     */
                    std::vector<std::string> GetToolList() const;

                    /**
                     * 设置<p>Allowlist of tools that can be used.</p>
                     * @param _toolList <p>Allowlist of tools that can be used.</p>
                     * 
                     */
                    void SetToolList(const std::vector<std::string>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                private:

                    /**
                     * <p>The unique mcp identifier.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Endpoint URL.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Request timeout in ms. Default: 5000. This value should not exceed 30000.</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Custom request headers, such as authentication information.</p>
                     */
                    std::vector<KeyValueItem> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>Allowlist of tools that can be used.</p>
                     */
                    std::vector<std::string> m_toolList;
                    bool m_toolListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONMCPSERVER_H_
