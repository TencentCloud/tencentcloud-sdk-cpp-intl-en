/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINPARAMETER_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpHeaderInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Incremental migration back-to-source parameters.
                */
                class IncrementalMigrationHttpOriginParameter : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpOriginParameter();
                    ~IncrementalMigrationHttpOriginParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP header passthrough information.
                     * @return HttpHeaderInfo HTTP header passthrough information.
                     * 
                     */
                    IncrementalMigrationHttpHeaderInfo GetHttpHeaderInfo() const;

                    /**
                     * 设置HTTP header passthrough information.
                     * @param _httpHeaderInfo HTTP header passthrough information.
                     * 
                     */
                    void SetHttpHeaderInfo(const IncrementalMigrationHttpHeaderInfo& _httpHeaderInfo);

                    /**
                     * 判断参数 HttpHeaderInfo 是否已赋值
                     * @return HttpHeaderInfo 是否已赋值
                     * 
                     */
                    bool HttpHeaderInfoHasBeenSet() const;

                    /**
                     * 获取Back-to-source protocol. Valid values:
<li>HTTP: Force HTTP;</li>
<li>HTTPS: Force HTTPS;</li>
<li>FOLLOW: Follow the request protocol.</li>
                     * @return Protocol Back-to-source protocol. Valid values:
<li>HTTP: Force HTTP;</li>
<li>HTTPS: Force HTTPS;</li>
<li>FOLLOW: Follow the request protocol.</li>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Back-to-source protocol. Valid values:
<li>HTTP: Force HTTP;</li>
<li>HTTPS: Force HTTPS;</li>
<li>FOLLOW: Follow the request protocol.</li>
                     * @param _protocol Back-to-source protocol. Valid values:
<li>HTTP: Force HTTP;</li>
<li>HTTPS: Force HTTPS;</li>
<li>FOLLOW: Follow the request protocol.</li>
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
                     * 获取Query string passthrough mode. Valid values
<li>FOLLOW: Fully passthrough;</li>
<li>IGNORE: No passthrough at all.</li>
                     * @return QueryStringFollowMode Query string passthrough mode. Valid values
<li>FOLLOW: Fully passthrough;</li>
<li>IGNORE: No passthrough at all.</li>
                     * 
                     */
                    std::string GetQueryStringFollowMode() const;

                    /**
                     * 设置Query string passthrough mode. Valid values
<li>FOLLOW: Fully passthrough;</li>
<li>IGNORE: No passthrough at all.</li>
                     * @param _queryStringFollowMode Query string passthrough mode. Valid values
<li>FOLLOW: Fully passthrough;</li>
<li>IGNORE: No passthrough at all.</li>
                     * 
                     */
                    void SetQueryStringFollowMode(const std::string& _queryStringFollowMode);

                    /**
                     * 判断参数 QueryStringFollowMode 是否已赋值
                     * @return QueryStringFollowMode 是否已赋值
                     * 
                     */
                    bool QueryStringFollowModeHasBeenSet() const;

                    /**
                     * 获取HTTP Code for redirection. Currently, only `301`, `302`, and `307` are supported. The default value is `302`.
                     * @return HttpRedirectCode HTTP Code for redirection. Currently, only `301`, `302`, and `307` are supported. The default value is `302`.
                     * 
                     */
                    uint64_t GetHttpRedirectCode() const;

                    /**
                     * 设置HTTP Code for redirection. Currently, only `301`, `302`, and `307` are supported. The default value is `302`.
                     * @param _httpRedirectCode HTTP Code for redirection. Currently, only `301`, `302`, and `307` are supported. The default value is `302`.
                     * 
                     */
                    void SetHttpRedirectCode(const uint64_t& _httpRedirectCode);

                    /**
                     * 判断参数 HttpRedirectCode 是否已赋值
                     * @return HttpRedirectCode 是否已赋值
                     * 
                     */
                    bool HttpRedirectCodeHasBeenSet() const;

                    /**
                     * 获取Origin server redirection follow mode. Valid values:
<li>FOLLOW: Follow origin server redirection;</li>
<li>IGNORE: Ignore origin server redirection.</li>
                     * @return OriginRedirectionFollowMode Origin server redirection follow mode. Valid values:
<li>FOLLOW: Follow origin server redirection;</li>
<li>IGNORE: Ignore origin server redirection.</li>
                     * 
                     */
                    std::string GetOriginRedirectionFollowMode() const;

                    /**
                     * 设置Origin server redirection follow mode. Valid values:
<li>FOLLOW: Follow origin server redirection;</li>
<li>IGNORE: Ignore origin server redirection.</li>
                     * @param _originRedirectionFollowMode Origin server redirection follow mode. Valid values:
<li>FOLLOW: Follow origin server redirection;</li>
<li>IGNORE: Ignore origin server redirection.</li>
                     * 
                     */
                    void SetOriginRedirectionFollowMode(const std::string& _originRedirectionFollowMode);

                    /**
                     * 判断参数 OriginRedirectionFollowMode 是否已赋值
                     * @return OriginRedirectionFollowMode 是否已赋值
                     * 
                     */
                    bool OriginRedirectionFollowModeHasBeenSet() const;

                private:

                    /**
                     * HTTP header passthrough information.
                     */
                    IncrementalMigrationHttpHeaderInfo m_httpHeaderInfo;
                    bool m_httpHeaderInfoHasBeenSet;

                    /**
                     * Back-to-source protocol. Valid values:
<li>HTTP: Force HTTP;</li>
<li>HTTPS: Force HTTPS;</li>
<li>FOLLOW: Follow the request protocol.</li>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Query string passthrough mode. Valid values
<li>FOLLOW: Fully passthrough;</li>
<li>IGNORE: No passthrough at all.</li>
                     */
                    std::string m_queryStringFollowMode;
                    bool m_queryStringFollowModeHasBeenSet;

                    /**
                     * HTTP Code for redirection. Currently, only `301`, `302`, and `307` are supported. The default value is `302`.
                     */
                    uint64_t m_httpRedirectCode;
                    bool m_httpRedirectCodeHasBeenSet;

                    /**
                     * Origin server redirection follow mode. Valid values:
<li>FOLLOW: Follow origin server redirection;</li>
<li>IGNORE: Ignore origin server redirection.</li>
                     */
                    std::string m_originRedirectionFollowMode;
                    bool m_originRedirectionFollowModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINPARAMETER_H_
