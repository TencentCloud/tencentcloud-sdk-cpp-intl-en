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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HostName.h>
#include <tencentcloud/teo/v20220901/model/URLPath.h>
#include <tencentcloud/teo/v20220901/model/AccessURLRedirectQueryString.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Access URL redirect configuration parameters.
                */
                class AccessURLRedirectParameters : public AbstractModel
                {
                public:
                    AccessURLRedirectParameters();
                    ~AccessURLRedirectParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Status code, value is one of 301, 302, 303, 307, 308.</p>
                     * @return StatusCode <p>Status code, value is one of 301, 302, 303, 307, 308.</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置<p>Status code, value is one of 301, 302, 303, 307, 308.</p>
                     * @param _statusCode <p>Status code, value is one of 301, 302, 303, 307, 308.</p>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>Target request protocol.</p><p>Enumeration values:</p><ul><li>http: The target request protocol is HTTP.</li><li>https: The target request protocol is HTTPS.</li><li>follow: Follow request.</li></ul>
                     * @return Protocol <p>Target request protocol.</p><p>Enumeration values:</p><ul><li>http: The target request protocol is HTTP.</li><li>https: The target request protocol is HTTPS.</li><li>follow: Follow request.</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Target request protocol.</p><p>Enumeration values:</p><ul><li>http: The target request protocol is HTTP.</li><li>https: The target request protocol is HTTPS.</li><li>follow: Follow request.</li></ul>
                     * @param _protocol <p>Target request protocol.</p><p>Enumeration values:</p><ul><li>http: The target request protocol is HTTP.</li><li>https: The target request protocol is HTTPS.</li><li>follow: Follow request.</li></ul>
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
                     * 获取<p>Target HostName.</p>
                     * @return HostName <p>Target HostName.</p>
                     * 
                     */
                    HostName GetHostName() const;

                    /**
                     * 设置<p>Target HostName.</p>
                     * @param _hostName <p>Target HostName.</p>
                     * 
                     */
                    void SetHostName(const HostName& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>Target path.</p>
                     * @return URLPath <p>Target path.</p>
                     * 
                     */
                    URLPath GetURLPath() const;

                    /**
                     * 设置<p>Target path.</p>
                     * @param _uRLPath <p>Target path.</p>
                     * 
                     */
                    void SetURLPath(const URLPath& _uRLPath);

                    /**
                     * 判断参数 URLPath 是否已赋值
                     * @return URLPath 是否已赋值
                     * 
                     */
                    bool URLPathHasBeenSet() const;

                    /**
                     * 获取<p>Query string.</p>
                     * @return QueryString <p>Query string.</p>
                     * 
                     */
                    AccessURLRedirectQueryString GetQueryString() const;

                    /**
                     * 设置<p>Query string.</p>
                     * @param _queryString <p>Query string.</p>
                     * 
                     */
                    void SetQueryString(const AccessURLRedirectQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * <p>Status code, value is one of 301, 302, 303, 307, 308.</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>Target request protocol.</p><p>Enumeration values:</p><ul><li>http: The target request protocol is HTTP.</li><li>https: The target request protocol is HTTPS.</li><li>follow: Follow request.</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Target HostName.</p>
                     */
                    HostName m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>Target path.</p>
                     */
                    URLPath m_uRLPath;
                    bool m_uRLPathHasBeenSet;

                    /**
                     * <p>Query string.</p>
                     */
                    AccessURLRedirectQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_
