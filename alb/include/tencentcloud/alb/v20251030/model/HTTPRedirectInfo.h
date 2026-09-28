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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_HTTPREDIRECTINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_HTTPREDIRECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * HTTP redirection information
                */
                class HTTPRedirectInfo : public AbstractModel
                {
                public:
                    HTTPRedirectInfo();
                    ~HTTPRedirectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTP code for redirection. Supports 301, 302, 303, 307, and 308.</p>
                     * @return HttpCode <p>HTTP code for redirection. Supports 301, 302, 303, 307, and 308.</p>
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置<p>HTTP code for redirection. Supports 301, 302, 303, 307, and 308.</p>
                     * @param _httpCode <p>HTTP code for redirection. Supports 301, 302, 303, 307, and 308.</p>
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取<p>Redirected host address. Default value: ${host}. Length: 3-128 characters. Supported character sets: a-z 0-9 _ . -.</p>
                     * @return Host <p>Redirected host address. Default value: ${host}. Length: 3-128 characters. Supported character sets: a-z 0-9 _ . -.</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Redirected host address. Default value: ${host}. Length: 3-128 characters. Supported character sets: a-z 0-9 _ . -.</p>
                     * @param _host <p>Redirected host address. Default value: ${host}. Length: 3-128 characters. Supported character sets: a-z 0-9 _ . -.</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Redirect path. Default value: ${path}. Length: 1–128 characters. Supported character sets: a-z A-Z 0-9 ? = _ . - / : .</p>
                     * @return Path <p>Redirect path. Default value: ${path}. Length: 1–128 characters. Supported character sets: a-z A-Z 0-9 ? = _ . - / : .</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Redirect path. Default value: ${path}. Length: 1–128 characters. Supported character sets: a-z A-Z 0-9 ? = _ . - / : .</p>
                     * @param _path <p>Redirect path. Default value: ${path}. Length: 1–128 characters. Supported character sets: a-z A-Z 0-9 ? = _ . - / : .</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>The port for redirection. Default value: ${port}. Value range: 1-65535.</p>
                     * @return Port <p>The port for redirection. Default value: ${port}. Value range: 1-65535.</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>The port for redirection. Default value: ${port}. Value range: 1-65535.</p>
                     * @param _port <p>The port for redirection. Default value: ${port}. Value range: 1-65535.</p>
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Protocol for redirection. Valid values: HTTP and HTTPS. Default value: ${protocol}.</p>
                     * @return Protocol <p>Protocol for redirection. Valid values: HTTP and HTTPS. Default value: ${protocol}.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Protocol for redirection. Valid values: HTTP and HTTPS. Default value: ${protocol}.</p>
                     * @param _protocol <p>Protocol for redirection. Valid values: HTTP and HTTPS. Default value: ${protocol}.</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Query string for redirect. Default value: ${query}. Length: 1–128 characters. Supports printable characters. Does not support #[]{}&lt;&gt;&amp; and spaces.</p>
                     * @return Query <p>Query string for redirect. Default value: ${query}. Length: 1–128 characters. Supports printable characters. Does not support #[]{}&lt;&gt;&amp; and spaces.</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Query string for redirect. Default value: ${query}. Length: 1–128 characters. Supports printable characters. Does not support #[]{}&lt;&gt;&amp; and spaces.</p>
                     * @param _query <p>Query string for redirect. Default value: ${query}. Length: 1–128 characters. Supports printable characters. Does not support #[]{}&lt;&gt;&amp; and spaces.</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>HTTP code for redirection. Supports 301, 302, 303, 307, and 308.</p>
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * <p>Redirected host address. Default value: ${host}. Length: 3-128 characters. Supported character sets: a-z 0-9 _ . -.</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Redirect path. Default value: ${path}. Length: 1–128 characters. Supported character sets: a-z A-Z 0-9 ? = _ . - / : .</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>The port for redirection. Default value: ${port}. Value range: 1-65535.</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Protocol for redirection. Valid values: HTTP and HTTPS. Default value: ${protocol}.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Query string for redirect. Default value: ${query}. Length: 1–128 characters. Supports printable characters. Does not support #[]{}&lt;&gt;&amp; and spaces.</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_HTTPREDIRECTINFO_H_
