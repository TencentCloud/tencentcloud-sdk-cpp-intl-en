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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/NormalAction.h>
#include <tencentcloud/teo/v20220901/model/RewriteAction.h>
#include <tencentcloud/teo/v20220901/model/CodeAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule engine feature item operations. For a feature, it corresponds to only one of the following three types. Each item in the RuleAction array can only be one of these types. For more feature item completion specifications, call the API to query the rule engine parameter settings (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1).
                */
                class Action : public AbstractModel
                {
                public:
                    Action();
                    ~Action() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Normal feature operation. Feature items of this type:
<li> Access URL rewrite (AccessUrlRedirect);</li>
<li> Origin-pull URL rewrite (UpstreamUrlRedirect);</li>
<li> QUIC(QUIC);</li>
<li> WebSocket (WebSocket);</li>
<li> Video dragging (VideoSeek);</li>
<li> Token authentication (Authentication);</li>
<li> Custom CacheKey (CacheKey);</li>
<li> Node cache TTL (Cache);</li>
<li> Browser caching TTL (MaxAge);</li>
<li> Offline caching (OfflineCache);</li>
<li> Smart acceleration (SmartRouting);</li>
<li> Range-based origin pull (RangeOriginPull);</li>
<li> HTTP/2 origin pull (UpstreamHttp2);</li>
<li> Host header overriding (HostHeader);</li>
<li> Force HTTPS (ForceRedirect);</li>
<li> HTTPS origin pull (OriginPullProtocol);</li>
<li> Single connection download speed limit (ResponseSpeedLimit);</li>
<li> Cache pre-refresh (CachePrefresh);</li>
<li> Intelligent compression (Compression);</li>
<li> Hsts;</li>
<li> ClientIpHeader;</li>
<li> SslTlsSecureConf;</li>
<li> OcspStapling;</li>
<li> HTTP/2 access (Http2);</li>
<li> Redirection during origin pull (UpstreamFollowRedirect);</li>
<li> Modifying origin server (Origin);</li>
<li> Layer 7 origin pull timeout (HTTPUpstreamTimeout).</li>
<li> HTTP response (HttpResponse).</li>
                     * @return NormalAction Normal feature operation. Feature items of this type:
<li> Access URL rewrite (AccessUrlRedirect);</li>
<li> Origin-pull URL rewrite (UpstreamUrlRedirect);</li>
<li> QUIC(QUIC);</li>
<li> WebSocket (WebSocket);</li>
<li> Video dragging (VideoSeek);</li>
<li> Token authentication (Authentication);</li>
<li> Custom CacheKey (CacheKey);</li>
<li> Node cache TTL (Cache);</li>
<li> Browser caching TTL (MaxAge);</li>
<li> Offline caching (OfflineCache);</li>
<li> Smart acceleration (SmartRouting);</li>
<li> Range-based origin pull (RangeOriginPull);</li>
<li> HTTP/2 origin pull (UpstreamHttp2);</li>
<li> Host header overriding (HostHeader);</li>
<li> Force HTTPS (ForceRedirect);</li>
<li> HTTPS origin pull (OriginPullProtocol);</li>
<li> Single connection download speed limit (ResponseSpeedLimit);</li>
<li> Cache pre-refresh (CachePrefresh);</li>
<li> Intelligent compression (Compression);</li>
<li> Hsts;</li>
<li> ClientIpHeader;</li>
<li> SslTlsSecureConf;</li>
<li> OcspStapling;</li>
<li> HTTP/2 access (Http2);</li>
<li> Redirection during origin pull (UpstreamFollowRedirect);</li>
<li> Modifying origin server (Origin);</li>
<li> Layer 7 origin pull timeout (HTTPUpstreamTimeout).</li>
<li> HTTP response (HttpResponse).</li>
                     * 
                     */
                    NormalAction GetNormalAction() const;

                    /**
                     * 设置Normal feature operation. Feature items of this type:
<li> Access URL rewrite (AccessUrlRedirect);</li>
<li> Origin-pull URL rewrite (UpstreamUrlRedirect);</li>
<li> QUIC(QUIC);</li>
<li> WebSocket (WebSocket);</li>
<li> Video dragging (VideoSeek);</li>
<li> Token authentication (Authentication);</li>
<li> Custom CacheKey (CacheKey);</li>
<li> Node cache TTL (Cache);</li>
<li> Browser caching TTL (MaxAge);</li>
<li> Offline caching (OfflineCache);</li>
<li> Smart acceleration (SmartRouting);</li>
<li> Range-based origin pull (RangeOriginPull);</li>
<li> HTTP/2 origin pull (UpstreamHttp2);</li>
<li> Host header overriding (HostHeader);</li>
<li> Force HTTPS (ForceRedirect);</li>
<li> HTTPS origin pull (OriginPullProtocol);</li>
<li> Single connection download speed limit (ResponseSpeedLimit);</li>
<li> Cache pre-refresh (CachePrefresh);</li>
<li> Intelligent compression (Compression);</li>
<li> Hsts;</li>
<li> ClientIpHeader;</li>
<li> SslTlsSecureConf;</li>
<li> OcspStapling;</li>
<li> HTTP/2 access (Http2);</li>
<li> Redirection during origin pull (UpstreamFollowRedirect);</li>
<li> Modifying origin server (Origin);</li>
<li> Layer 7 origin pull timeout (HTTPUpstreamTimeout).</li>
<li> HTTP response (HttpResponse).</li>
                     * @param _normalAction Normal feature operation. Feature items of this type:
<li> Access URL rewrite (AccessUrlRedirect);</li>
<li> Origin-pull URL rewrite (UpstreamUrlRedirect);</li>
<li> QUIC(QUIC);</li>
<li> WebSocket (WebSocket);</li>
<li> Video dragging (VideoSeek);</li>
<li> Token authentication (Authentication);</li>
<li> Custom CacheKey (CacheKey);</li>
<li> Node cache TTL (Cache);</li>
<li> Browser caching TTL (MaxAge);</li>
<li> Offline caching (OfflineCache);</li>
<li> Smart acceleration (SmartRouting);</li>
<li> Range-based origin pull (RangeOriginPull);</li>
<li> HTTP/2 origin pull (UpstreamHttp2);</li>
<li> Host header overriding (HostHeader);</li>
<li> Force HTTPS (ForceRedirect);</li>
<li> HTTPS origin pull (OriginPullProtocol);</li>
<li> Single connection download speed limit (ResponseSpeedLimit);</li>
<li> Cache pre-refresh (CachePrefresh);</li>
<li> Intelligent compression (Compression);</li>
<li> Hsts;</li>
<li> ClientIpHeader;</li>
<li> SslTlsSecureConf;</li>
<li> OcspStapling;</li>
<li> HTTP/2 access (Http2);</li>
<li> Redirection during origin pull (UpstreamFollowRedirect);</li>
<li> Modifying origin server (Origin);</li>
<li> Layer 7 origin pull timeout (HTTPUpstreamTimeout).</li>
<li> HTTP response (HttpResponse).</li>
                     * 
                     */
                    void SetNormalAction(const NormalAction& _normalAction);

                    /**
                     * 判断参数 NormalAction 是否已赋值
                     * @return NormalAction 是否已赋值
                     * 
                     */
                    bool NormalActionHasBeenSet() const;

                    /**
                     * 获取Feature operations with request/response headers. Feature items of this type include:
<li>HTTP request header modification (RequestHeader).</li>
<li> HTTP response header modification (ResponseHeader).</li>
                     * @return RewriteAction Feature operations with request/response headers. Feature items of this type include:
<li>HTTP request header modification (RequestHeader).</li>
<li> HTTP response header modification (ResponseHeader).</li>
                     * 
                     */
                    RewriteAction GetRewriteAction() const;

                    /**
                     * 设置Feature operations with request/response headers. Feature items of this type include:
<li>HTTP request header modification (RequestHeader).</li>
<li> HTTP response header modification (ResponseHeader).</li>
                     * @param _rewriteAction Feature operations with request/response headers. Feature items of this type include:
<li>HTTP request header modification (RequestHeader).</li>
<li> HTTP response header modification (ResponseHeader).</li>
                     * 
                     */
                    void SetRewriteAction(const RewriteAction& _rewriteAction);

                    /**
                     * 判断参数 RewriteAction 是否已赋值
                     * @return RewriteAction 是否已赋值
                     * 
                     */
                    bool RewriteActionHasBeenSet() const;

                    /**
                     * 获取Feature operation with a status code. Feature items of this type:
<li> Custom error page (ErrorPage);</li>
<li> Status code cache TTL (StatusCodeCache).</li>
                     * @return CodeAction Feature operation with a status code. Feature items of this type:
<li> Custom error page (ErrorPage);</li>
<li> Status code cache TTL (StatusCodeCache).</li>
                     * 
                     */
                    CodeAction GetCodeAction() const;

                    /**
                     * 设置Feature operation with a status code. Feature items of this type:
<li> Custom error page (ErrorPage);</li>
<li> Status code cache TTL (StatusCodeCache).</li>
                     * @param _codeAction Feature operation with a status code. Feature items of this type:
<li> Custom error page (ErrorPage);</li>
<li> Status code cache TTL (StatusCodeCache).</li>
                     * 
                     */
                    void SetCodeAction(const CodeAction& _codeAction);

                    /**
                     * 判断参数 CodeAction 是否已赋值
                     * @return CodeAction 是否已赋值
                     * 
                     */
                    bool CodeActionHasBeenSet() const;

                private:

                    /**
                     * Normal feature operation. Feature items of this type:
<li> Access URL rewrite (AccessUrlRedirect);</li>
<li> Origin-pull URL rewrite (UpstreamUrlRedirect);</li>
<li> QUIC(QUIC);</li>
<li> WebSocket (WebSocket);</li>
<li> Video dragging (VideoSeek);</li>
<li> Token authentication (Authentication);</li>
<li> Custom CacheKey (CacheKey);</li>
<li> Node cache TTL (Cache);</li>
<li> Browser caching TTL (MaxAge);</li>
<li> Offline caching (OfflineCache);</li>
<li> Smart acceleration (SmartRouting);</li>
<li> Range-based origin pull (RangeOriginPull);</li>
<li> HTTP/2 origin pull (UpstreamHttp2);</li>
<li> Host header overriding (HostHeader);</li>
<li> Force HTTPS (ForceRedirect);</li>
<li> HTTPS origin pull (OriginPullProtocol);</li>
<li> Single connection download speed limit (ResponseSpeedLimit);</li>
<li> Cache pre-refresh (CachePrefresh);</li>
<li> Intelligent compression (Compression);</li>
<li> Hsts;</li>
<li> ClientIpHeader;</li>
<li> SslTlsSecureConf;</li>
<li> OcspStapling;</li>
<li> HTTP/2 access (Http2);</li>
<li> Redirection during origin pull (UpstreamFollowRedirect);</li>
<li> Modifying origin server (Origin);</li>
<li> Layer 7 origin pull timeout (HTTPUpstreamTimeout).</li>
<li> HTTP response (HttpResponse).</li>
                     */
                    NormalAction m_normalAction;
                    bool m_normalActionHasBeenSet;

                    /**
                     * Feature operations with request/response headers. Feature items of this type include:
<li>HTTP request header modification (RequestHeader).</li>
<li> HTTP response header modification (ResponseHeader).</li>
                     */
                    RewriteAction m_rewriteAction;
                    bool m_rewriteActionHasBeenSet;

                    /**
                     * Feature operation with a status code. Feature items of this type:
<li> Custom error page (ErrorPage);</li>
<li> Status code cache TTL (StatusCodeCache).</li>
                     */
                    CodeAction m_codeAction;
                    bool m_codeActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACTION_H_
