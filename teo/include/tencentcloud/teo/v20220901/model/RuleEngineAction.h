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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheParameters.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyParameters.h>
#include <tencentcloud/teo/v20220901/model/CachePrefreshParameters.h>
#include <tencentcloud/teo/v20220901/model/AccessURLRedirectParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamURLRewriteParameters.h>
#include <tencentcloud/teo/v20220901/model/QUICParameters.h>
#include <tencentcloud/teo/v20220901/model/WebSocketParameters.h>
#include <tencentcloud/teo/v20220901/model/AuthenticationParameters.h>
#include <tencentcloud/teo/v20220901/model/MaxAgeParameters.h>
#include <tencentcloud/teo/v20220901/model/StatusCodeCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/OfflineCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/SmartRoutingParameters.h>
#include <tencentcloud/teo/v20220901/model/AdvancedOriginRoutingParameters.h>
#include <tencentcloud/teo/v20220901/model/RangeOriginPullParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/HostHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirectHTTPSParameters.h>
#include <tencentcloud/teo/v20220901/model/OriginPullProtocolParameters.h>
#include <tencentcloud/teo/v20220901/model/CompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/HSTSParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/OCSPStaplingParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSizeParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPCountryParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamFollowRedirectParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestParameters.h>
#include <tencentcloud/teo/v20220901/model/ShieldParameters.h>
#include <tencentcloud/teo/v20220901/model/TLSConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginParameters.h>
#include <tencentcloud/teo/v20220901/model/SiteFailoverParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPUpstreamTimeoutParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPResponseParameters.h>
#include <tencentcloud/teo/v20220901/model/ErrorPageParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyResponseHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyRequestHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ResponseSpeedLimitParameters.h>
#include <tencentcloud/teo/v20220901/model/SetContentIdentifierParameters.h>
#include <tencentcloud/teo/v20220901/model/VaryParameters.h>
#include <tencentcloud/teo/v20220901/model/ContentCompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/OriginAuthenticationParameters.h>
#include <tencentcloud/teo/v20220901/model/CustomActionParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule engine operation.
                */
                class RuleEngineAction : public AbstractModel
                {
                public:
                    RuleEngineAction();
                    ~RuleEngineAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Operation Name. The Name must correspond to the parameter structure. For example, if Name=Cache, CacheParameters is required.<li>Cache: node Cache TTL;</li><li>CacheKey: custom Cache Key;</li><li>CachePrefresh: Cache pre-refresh;</li><li>AccessURLRedirect: access URL redirection;</li><li>UpstreamURLRewrite: origin-pull URL rewrite;</li><li>QUIC: QUIC;</li><li>WebSocket: WebSocket;</li><li>Authentication: Token Authentication;</li><li>MaxAge: browser Cache TTL;</li><li>StatusCodeCache: status code Cache TTL;</li><li>OfflineCache: offline Cache;</li><li>SmartRouting: smart acceleration;</li><li>AdvancedOriginRouting: advanced origin optimization;</li><li>RangeOriginPull: range-based origin pull;</li><li>UpstreamHTTP2: HTTP2 origin pull;</li><li>HostHeader: Host Header rewrite;</li><li>ForceRedirectHTTPS: forced HTTPS redirect configuration for access protocol;</li><li>OriginPullProtocol: origin-pull HTTPS;</li><li>Compression: intelligent Compression configuration;</li><li>HSTS: HSTS;</li><li>ClientIPHeader: Header information configuration for storing client request IP;</li><li>OCSPStapling: OCSP stapling;</li><li>HTTP2: HTTP2 integration;</li><li>PostMaxSize: maximum limit configuration for streaming transmission of POST request upload files;</li><li>ClientIPCountry: carry the regional information of the client IP during origin-pull;</li><li>UpstreamFollowRedirect: origin-pull follow redirect parameter configuration;</li><li>UpstreamRequest: origin-pull request parameters;</li><li>Shield: origin server uninstallation configuration;</li><li>TLSConfig: SSL/TLS security;</li><li>ModifyOrigin: modify origin server;</li><li>SiteFailover: origin server fault migration;</li><li>HTTPUpstreamTimeout: Layer 7 origin pull timeout configuration;</li><li>HttpResponse: HTTP response;</li><li>ErrorPage: custom error page;</li><li>ModifyResponseHeader: modify HTTP node response Header;</li><li>ModifyRequestHeader: modify HTTP node request Header;</li><li>ResponseSpeedLimit: single connection download speed limit;</li><li>SetContentIdentifier: set content identifier;</li><li>Vary: Vary feature configuration;</li><li>ContentCompression: content Compression configuration;</li><li>OriginAuthentication: origin-pull Authentication configuration;</li><li>CustomAction: custom configuration.</li></p>
                     * @return Name <p>Operation Name. The Name must correspond to the parameter structure. For example, if Name=Cache, CacheParameters is required.<li>Cache: node Cache TTL;</li><li>CacheKey: custom Cache Key;</li><li>CachePrefresh: Cache pre-refresh;</li><li>AccessURLRedirect: access URL redirection;</li><li>UpstreamURLRewrite: origin-pull URL rewrite;</li><li>QUIC: QUIC;</li><li>WebSocket: WebSocket;</li><li>Authentication: Token Authentication;</li><li>MaxAge: browser Cache TTL;</li><li>StatusCodeCache: status code Cache TTL;</li><li>OfflineCache: offline Cache;</li><li>SmartRouting: smart acceleration;</li><li>AdvancedOriginRouting: advanced origin optimization;</li><li>RangeOriginPull: range-based origin pull;</li><li>UpstreamHTTP2: HTTP2 origin pull;</li><li>HostHeader: Host Header rewrite;</li><li>ForceRedirectHTTPS: forced HTTPS redirect configuration for access protocol;</li><li>OriginPullProtocol: origin-pull HTTPS;</li><li>Compression: intelligent Compression configuration;</li><li>HSTS: HSTS;</li><li>ClientIPHeader: Header information configuration for storing client request IP;</li><li>OCSPStapling: OCSP stapling;</li><li>HTTP2: HTTP2 integration;</li><li>PostMaxSize: maximum limit configuration for streaming transmission of POST request upload files;</li><li>ClientIPCountry: carry the regional information of the client IP during origin-pull;</li><li>UpstreamFollowRedirect: origin-pull follow redirect parameter configuration;</li><li>UpstreamRequest: origin-pull request parameters;</li><li>Shield: origin server uninstallation configuration;</li><li>TLSConfig: SSL/TLS security;</li><li>ModifyOrigin: modify origin server;</li><li>SiteFailover: origin server fault migration;</li><li>HTTPUpstreamTimeout: Layer 7 origin pull timeout configuration;</li><li>HttpResponse: HTTP response;</li><li>ErrorPage: custom error page;</li><li>ModifyResponseHeader: modify HTTP node response Header;</li><li>ModifyRequestHeader: modify HTTP node request Header;</li><li>ResponseSpeedLimit: single connection download speed limit;</li><li>SetContentIdentifier: set content identifier;</li><li>Vary: Vary feature configuration;</li><li>ContentCompression: content Compression configuration;</li><li>OriginAuthentication: origin-pull Authentication configuration;</li><li>CustomAction: custom configuration.</li></p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Operation Name. The Name must correspond to the parameter structure. For example, if Name=Cache, CacheParameters is required.<li>Cache: node Cache TTL;</li><li>CacheKey: custom Cache Key;</li><li>CachePrefresh: Cache pre-refresh;</li><li>AccessURLRedirect: access URL redirection;</li><li>UpstreamURLRewrite: origin-pull URL rewrite;</li><li>QUIC: QUIC;</li><li>WebSocket: WebSocket;</li><li>Authentication: Token Authentication;</li><li>MaxAge: browser Cache TTL;</li><li>StatusCodeCache: status code Cache TTL;</li><li>OfflineCache: offline Cache;</li><li>SmartRouting: smart acceleration;</li><li>AdvancedOriginRouting: advanced origin optimization;</li><li>RangeOriginPull: range-based origin pull;</li><li>UpstreamHTTP2: HTTP2 origin pull;</li><li>HostHeader: Host Header rewrite;</li><li>ForceRedirectHTTPS: forced HTTPS redirect configuration for access protocol;</li><li>OriginPullProtocol: origin-pull HTTPS;</li><li>Compression: intelligent Compression configuration;</li><li>HSTS: HSTS;</li><li>ClientIPHeader: Header information configuration for storing client request IP;</li><li>OCSPStapling: OCSP stapling;</li><li>HTTP2: HTTP2 integration;</li><li>PostMaxSize: maximum limit configuration for streaming transmission of POST request upload files;</li><li>ClientIPCountry: carry the regional information of the client IP during origin-pull;</li><li>UpstreamFollowRedirect: origin-pull follow redirect parameter configuration;</li><li>UpstreamRequest: origin-pull request parameters;</li><li>Shield: origin server uninstallation configuration;</li><li>TLSConfig: SSL/TLS security;</li><li>ModifyOrigin: modify origin server;</li><li>SiteFailover: origin server fault migration;</li><li>HTTPUpstreamTimeout: Layer 7 origin pull timeout configuration;</li><li>HttpResponse: HTTP response;</li><li>ErrorPage: custom error page;</li><li>ModifyResponseHeader: modify HTTP node response Header;</li><li>ModifyRequestHeader: modify HTTP node request Header;</li><li>ResponseSpeedLimit: single connection download speed limit;</li><li>SetContentIdentifier: set content identifier;</li><li>Vary: Vary feature configuration;</li><li>ContentCompression: content Compression configuration;</li><li>OriginAuthentication: origin-pull Authentication configuration;</li><li>CustomAction: custom configuration.</li></p>
                     * @param _name <p>Operation Name. The Name must correspond to the parameter structure. For example, if Name=Cache, CacheParameters is required.<li>Cache: node Cache TTL;</li><li>CacheKey: custom Cache Key;</li><li>CachePrefresh: Cache pre-refresh;</li><li>AccessURLRedirect: access URL redirection;</li><li>UpstreamURLRewrite: origin-pull URL rewrite;</li><li>QUIC: QUIC;</li><li>WebSocket: WebSocket;</li><li>Authentication: Token Authentication;</li><li>MaxAge: browser Cache TTL;</li><li>StatusCodeCache: status code Cache TTL;</li><li>OfflineCache: offline Cache;</li><li>SmartRouting: smart acceleration;</li><li>AdvancedOriginRouting: advanced origin optimization;</li><li>RangeOriginPull: range-based origin pull;</li><li>UpstreamHTTP2: HTTP2 origin pull;</li><li>HostHeader: Host Header rewrite;</li><li>ForceRedirectHTTPS: forced HTTPS redirect configuration for access protocol;</li><li>OriginPullProtocol: origin-pull HTTPS;</li><li>Compression: intelligent Compression configuration;</li><li>HSTS: HSTS;</li><li>ClientIPHeader: Header information configuration for storing client request IP;</li><li>OCSPStapling: OCSP stapling;</li><li>HTTP2: HTTP2 integration;</li><li>PostMaxSize: maximum limit configuration for streaming transmission of POST request upload files;</li><li>ClientIPCountry: carry the regional information of the client IP during origin-pull;</li><li>UpstreamFollowRedirect: origin-pull follow redirect parameter configuration;</li><li>UpstreamRequest: origin-pull request parameters;</li><li>Shield: origin server uninstallation configuration;</li><li>TLSConfig: SSL/TLS security;</li><li>ModifyOrigin: modify origin server;</li><li>SiteFailover: origin server fault migration;</li><li>HTTPUpstreamTimeout: Layer 7 origin pull timeout configuration;</li><li>HttpResponse: HTTP response;</li><li>ErrorPage: custom error page;</li><li>ModifyResponseHeader: modify HTTP node response Header;</li><li>ModifyRequestHeader: modify HTTP node request Header;</li><li>ResponseSpeedLimit: single connection download speed limit;</li><li>SetContentIdentifier: set content identifier;</li><li>Vary: Vary feature configuration;</li><li>ContentCompression: content Compression configuration;</li><li>OriginAuthentication: origin-pull Authentication configuration;</li><li>CustomAction: custom configuration.</li></p>
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
                     * 获取<p>Node cache TTL configuration parameter. This parameter is required when Name is Cache.</p>
                     * @return CacheParameters <p>Node cache TTL configuration parameter. This parameter is required when Name is Cache.</p>
                     * 
                     */
                    CacheParameters GetCacheParameters() const;

                    /**
                     * 设置<p>Node cache TTL configuration parameter. This parameter is required when Name is Cache.</p>
                     * @param _cacheParameters <p>Node cache TTL configuration parameter. This parameter is required when Name is Cache.</p>
                     * 
                     */
                    void SetCacheParameters(const CacheParameters& _cacheParameters);

                    /**
                     * 判断参数 CacheParameters 是否已赋值
                     * @return CacheParameters 是否已赋值
                     * 
                     */
                    bool CacheParametersHasBeenSet() const;

                    /**
                     * 获取<p>Custom Cache Key configuration parameter. When Name is CacheKey, this parameter is required.</p>
                     * @return CacheKeyParameters <p>Custom Cache Key configuration parameter. When Name is CacheKey, this parameter is required.</p>
                     * 
                     */
                    CacheKeyParameters GetCacheKeyParameters() const;

                    /**
                     * 设置<p>Custom Cache Key configuration parameter. When Name is CacheKey, this parameter is required.</p>
                     * @param _cacheKeyParameters <p>Custom Cache Key configuration parameter. When Name is CacheKey, this parameter is required.</p>
                     * 
                     */
                    void SetCacheKeyParameters(const CacheKeyParameters& _cacheKeyParameters);

                    /**
                     * 判断参数 CacheKeyParameters 是否已赋值
                     * @return CacheKeyParameters 是否已赋值
                     * 
                     */
                    bool CacheKeyParametersHasBeenSet() const;

                    /**
                     * 获取<p>Cache pre-refresh configuration parameter. This parameter is required when Name value is CachePrefresh.</p>
                     * @return CachePrefreshParameters <p>Cache pre-refresh configuration parameter. This parameter is required when Name value is CachePrefresh.</p>
                     * 
                     */
                    CachePrefreshParameters GetCachePrefreshParameters() const;

                    /**
                     * 设置<p>Cache pre-refresh configuration parameter. This parameter is required when Name value is CachePrefresh.</p>
                     * @param _cachePrefreshParameters <p>Cache pre-refresh configuration parameter. This parameter is required when Name value is CachePrefresh.</p>
                     * 
                     */
                    void SetCachePrefreshParameters(const CachePrefreshParameters& _cachePrefreshParameters);

                    /**
                     * 判断参数 CachePrefreshParameters 是否已赋值
                     * @return CachePrefreshParameters 是否已赋值
                     * 
                     */
                    bool CachePrefreshParametersHasBeenSet() const;

                    /**
                     * 获取<p>Access URL redirection configuration parameter. This parameter is required when Name is AccessURLRedirect.</p>
                     * @return AccessURLRedirectParameters <p>Access URL redirection configuration parameter. This parameter is required when Name is AccessURLRedirect.</p>
                     * 
                     */
                    AccessURLRedirectParameters GetAccessURLRedirectParameters() const;

                    /**
                     * 设置<p>Access URL redirection configuration parameter. This parameter is required when Name is AccessURLRedirect.</p>
                     * @param _accessURLRedirectParameters <p>Access URL redirection configuration parameter. This parameter is required when Name is AccessURLRedirect.</p>
                     * 
                     */
                    void SetAccessURLRedirectParameters(const AccessURLRedirectParameters& _accessURLRedirectParameters);

                    /**
                     * 判断参数 AccessURLRedirectParameters 是否已赋值
                     * @return AccessURLRedirectParameters 是否已赋值
                     * 
                     */
                    bool AccessURLRedirectParametersHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull URL rewrite configuration parameter. This parameter is required if Name is UpstreamURLRewrite.</p>
                     * @return UpstreamURLRewriteParameters <p>Origin-pull URL rewrite configuration parameter. This parameter is required if Name is UpstreamURLRewrite.</p>
                     * 
                     */
                    UpstreamURLRewriteParameters GetUpstreamURLRewriteParameters() const;

                    /**
                     * 设置<p>Origin-pull URL rewrite configuration parameter. This parameter is required if Name is UpstreamURLRewrite.</p>
                     * @param _upstreamURLRewriteParameters <p>Origin-pull URL rewrite configuration parameter. This parameter is required if Name is UpstreamURLRewrite.</p>
                     * 
                     */
                    void SetUpstreamURLRewriteParameters(const UpstreamURLRewriteParameters& _upstreamURLRewriteParameters);

                    /**
                     * 判断参数 UpstreamURLRewriteParameters 是否已赋值
                     * @return UpstreamURLRewriteParameters 是否已赋值
                     * 
                     */
                    bool UpstreamURLRewriteParametersHasBeenSet() const;

                    /**
                     * 获取<p>QUIC configuration parameter. This parameter is required when the value of Name is QUIC.</p>
                     * @return QUICParameters <p>QUIC configuration parameter. This parameter is required when the value of Name is QUIC.</p>
                     * 
                     */
                    QUICParameters GetQUICParameters() const;

                    /**
                     * 设置<p>QUIC configuration parameter. This parameter is required when the value of Name is QUIC.</p>
                     * @param _qUICParameters <p>QUIC configuration parameter. This parameter is required when the value of Name is QUIC.</p>
                     * 
                     */
                    void SetQUICParameters(const QUICParameters& _qUICParameters);

                    /**
                     * 判断参数 QUICParameters 是否已赋值
                     * @return QUICParameters 是否已赋值
                     * 
                     */
                    bool QUICParametersHasBeenSet() const;

                    /**
                     * 获取<p>WebSocket configuration parameter. This parameter is required when Name is WebSocket.</p>
                     * @return WebSocketParameters <p>WebSocket configuration parameter. This parameter is required when Name is WebSocket.</p>
                     * 
                     */
                    WebSocketParameters GetWebSocketParameters() const;

                    /**
                     * 设置<p>WebSocket configuration parameter. This parameter is required when Name is WebSocket.</p>
                     * @param _webSocketParameters <p>WebSocket configuration parameter. This parameter is required when Name is WebSocket.</p>
                     * 
                     */
                    void SetWebSocketParameters(const WebSocketParameters& _webSocketParameters);

                    /**
                     * 判断参数 WebSocketParameters 是否已赋值
                     * @return WebSocketParameters 是否已赋值
                     * 
                     */
                    bool WebSocketParametersHasBeenSet() const;

                    /**
                     * 获取<p>Token authentication configuration parameter. When the value of Name is Authentication, this parameter is required.</p>
                     * @return AuthenticationParameters <p>Token authentication configuration parameter. When the value of Name is Authentication, this parameter is required.</p>
                     * 
                     */
                    AuthenticationParameters GetAuthenticationParameters() const;

                    /**
                     * 设置<p>Token authentication configuration parameter. When the value of Name is Authentication, this parameter is required.</p>
                     * @param _authenticationParameters <p>Token authentication configuration parameter. When the value of Name is Authentication, this parameter is required.</p>
                     * 
                     */
                    void SetAuthenticationParameters(const AuthenticationParameters& _authenticationParameters);

                    /**
                     * 判断参数 AuthenticationParameters 是否已赋值
                     * @return AuthenticationParameters 是否已赋值
                     * 
                     */
                    bool AuthenticationParametersHasBeenSet() const;

                    /**
                     * 获取<p>Browser cache TTL configuration parameter. This parameter is required when Name is MaxAge.</p>
                     * @return MaxAgeParameters <p>Browser cache TTL configuration parameter. This parameter is required when Name is MaxAge.</p>
                     * 
                     */
                    MaxAgeParameters GetMaxAgeParameters() const;

                    /**
                     * 设置<p>Browser cache TTL configuration parameter. This parameter is required when Name is MaxAge.</p>
                     * @param _maxAgeParameters <p>Browser cache TTL configuration parameter. This parameter is required when Name is MaxAge.</p>
                     * 
                     */
                    void SetMaxAgeParameters(const MaxAgeParameters& _maxAgeParameters);

                    /**
                     * 判断参数 MaxAgeParameters 是否已赋值
                     * @return MaxAgeParameters 是否已赋值
                     * 
                     */
                    bool MaxAgeParametersHasBeenSet() const;

                    /**
                     * 获取<p>Status code cache TTL configuration parameter. This parameter is required when Name is StatusCodeCache.</p>
                     * @return StatusCodeCacheParameters <p>Status code cache TTL configuration parameter. This parameter is required when Name is StatusCodeCache.</p>
                     * 
                     */
                    StatusCodeCacheParameters GetStatusCodeCacheParameters() const;

                    /**
                     * 设置<p>Status code cache TTL configuration parameter. This parameter is required when Name is StatusCodeCache.</p>
                     * @param _statusCodeCacheParameters <p>Status code cache TTL configuration parameter. This parameter is required when Name is StatusCodeCache.</p>
                     * 
                     */
                    void SetStatusCodeCacheParameters(const StatusCodeCacheParameters& _statusCodeCacheParameters);

                    /**
                     * 判断参数 StatusCodeCacheParameters 是否已赋值
                     * @return StatusCodeCacheParameters 是否已赋值
                     * 
                     */
                    bool StatusCodeCacheParametersHasBeenSet() const;

                    /**
                     * 获取<p>Offline cache configuration parameter. This parameter is required when Name value is OfflineCache.</p>
                     * @return OfflineCacheParameters <p>Offline cache configuration parameter. This parameter is required when Name value is OfflineCache.</p>
                     * 
                     */
                    OfflineCacheParameters GetOfflineCacheParameters() const;

                    /**
                     * 设置<p>Offline cache configuration parameter. This parameter is required when Name value is OfflineCache.</p>
                     * @param _offlineCacheParameters <p>Offline cache configuration parameter. This parameter is required when Name value is OfflineCache.</p>
                     * 
                     */
                    void SetOfflineCacheParameters(const OfflineCacheParameters& _offlineCacheParameters);

                    /**
                     * 判断参数 OfflineCacheParameters 是否已赋值
                     * @return OfflineCacheParameters 是否已赋值
                     * 
                     */
                    bool OfflineCacheParametersHasBeenSet() const;

                    /**
                     * 获取<p>Smart acceleration configuration parameter. This parameter is required when the value of Name is SmartRouting.</p>
                     * @return SmartRoutingParameters <p>Smart acceleration configuration parameter. This parameter is required when the value of Name is SmartRouting.</p>
                     * 
                     */
                    SmartRoutingParameters GetSmartRoutingParameters() const;

                    /**
                     * 设置<p>Smart acceleration configuration parameter. This parameter is required when the value of Name is SmartRouting.</p>
                     * @param _smartRoutingParameters <p>Smart acceleration configuration parameter. This parameter is required when the value of Name is SmartRouting.</p>
                     * 
                     */
                    void SetSmartRoutingParameters(const SmartRoutingParameters& _smartRoutingParameters);

                    /**
                     * 判断参数 SmartRoutingParameters 是否已赋值
                     * @return SmartRoutingParameters 是否已赋值
                     * 
                     */
                    bool SmartRoutingParametersHasBeenSet() const;

                    /**
                     * 获取<p>Advanced origin-pull optimization configuration parameters. When the value of Name is AdvancedOriginRouting, this parameter is required.</p>
                     * @return AdvancedOriginRoutingParameters <p>Advanced origin-pull optimization configuration parameters. When the value of Name is AdvancedOriginRouting, this parameter is required.</p>
                     * 
                     */
                    AdvancedOriginRoutingParameters GetAdvancedOriginRoutingParameters() const;

                    /**
                     * 设置<p>Advanced origin-pull optimization configuration parameters. When the value of Name is AdvancedOriginRouting, this parameter is required.</p>
                     * @param _advancedOriginRoutingParameters <p>Advanced origin-pull optimization configuration parameters. When the value of Name is AdvancedOriginRouting, this parameter is required.</p>
                     * 
                     */
                    void SetAdvancedOriginRoutingParameters(const AdvancedOriginRoutingParameters& _advancedOriginRoutingParameters);

                    /**
                     * 判断参数 AdvancedOriginRoutingParameters 是否已赋值
                     * @return AdvancedOriginRoutingParameters 是否已赋值
                     * 
                     */
                    bool AdvancedOriginRoutingParametersHasBeenSet() const;

                    /**
                     * 获取<p>Range-based origin pull configuration parameter. This parameter is required when Name is RangeOriginPull.</p>
                     * @return RangeOriginPullParameters <p>Range-based origin pull configuration parameter. This parameter is required when Name is RangeOriginPull.</p>
                     * 
                     */
                    RangeOriginPullParameters GetRangeOriginPullParameters() const;

                    /**
                     * 设置<p>Range-based origin pull configuration parameter. This parameter is required when Name is RangeOriginPull.</p>
                     * @param _rangeOriginPullParameters <p>Range-based origin pull configuration parameter. This parameter is required when Name is RangeOriginPull.</p>
                     * 
                     */
                    void SetRangeOriginPullParameters(const RangeOriginPullParameters& _rangeOriginPullParameters);

                    /**
                     * 判断参数 RangeOriginPullParameters 是否已赋值
                     * @return RangeOriginPullParameters 是否已赋值
                     * 
                     */
                    bool RangeOriginPullParametersHasBeenSet() const;

                    /**
                     * 获取<p>HTTP2 origin-pull configuration parameter. This parameter is required if Name is UpstreamHTTP2.</p>
                     * @return UpstreamHTTP2Parameters <p>HTTP2 origin-pull configuration parameter. This parameter is required if Name is UpstreamHTTP2.</p>
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2Parameters() const;

                    /**
                     * 设置<p>HTTP2 origin-pull configuration parameter. This parameter is required if Name is UpstreamHTTP2.</p>
                     * @param _upstreamHTTP2Parameters <p>HTTP2 origin-pull configuration parameter. This parameter is required if Name is UpstreamHTTP2.</p>
                     * 
                     */
                    void SetUpstreamHTTP2Parameters(const UpstreamHTTP2Parameters& _upstreamHTTP2Parameters);

                    /**
                     * 判断参数 UpstreamHTTP2Parameters 是否已赋值
                     * @return UpstreamHTTP2Parameters 是否已赋值
                     * 
                     */
                    bool UpstreamHTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取<p>Host Header rewrite configuration parameters. When the value of Name is HostHeader, this parameter is required.</p>
                     * @return HostHeaderParameters <p>Host Header rewrite configuration parameters. When the value of Name is HostHeader, this parameter is required.</p>
                     * 
                     */
                    HostHeaderParameters GetHostHeaderParameters() const;

                    /**
                     * 设置<p>Host Header rewrite configuration parameters. When the value of Name is HostHeader, this parameter is required.</p>
                     * @param _hostHeaderParameters <p>Host Header rewrite configuration parameters. When the value of Name is HostHeader, this parameter is required.</p>
                     * 
                     */
                    void SetHostHeaderParameters(const HostHeaderParameters& _hostHeaderParameters);

                    /**
                     * 判断参数 HostHeaderParameters 是否已赋值
                     * @return HostHeaderParameters 是否已赋值
                     * 
                     */
                    bool HostHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>Access protocol forced HTTPS redirect configuration. This parameter is required when Name is ForceRedirectHTTPS.</p>
                     * @return ForceRedirectHTTPSParameters <p>Access protocol forced HTTPS redirect configuration. This parameter is required when Name is ForceRedirectHTTPS.</p>
                     * 
                     */
                    ForceRedirectHTTPSParameters GetForceRedirectHTTPSParameters() const;

                    /**
                     * 设置<p>Access protocol forced HTTPS redirect configuration. This parameter is required when Name is ForceRedirectHTTPS.</p>
                     * @param _forceRedirectHTTPSParameters <p>Access protocol forced HTTPS redirect configuration. This parameter is required when Name is ForceRedirectHTTPS.</p>
                     * 
                     */
                    void SetForceRedirectHTTPSParameters(const ForceRedirectHTTPSParameters& _forceRedirectHTTPSParameters);

                    /**
                     * 判断参数 ForceRedirectHTTPSParameters 是否已赋值
                     * @return ForceRedirectHTTPSParameters 是否已赋值
                     * 
                     */
                    bool ForceRedirectHTTPSParametersHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull HTTPS configuration parameter. This is required if Name is OriginPullProtocol.</p>
                     * @return OriginPullProtocolParameters <p>Origin-pull HTTPS configuration parameter. This is required if Name is OriginPullProtocol.</p>
                     * 
                     */
                    OriginPullProtocolParameters GetOriginPullProtocolParameters() const;

                    /**
                     * 设置<p>Origin-pull HTTPS configuration parameter. This is required if Name is OriginPullProtocol.</p>
                     * @param _originPullProtocolParameters <p>Origin-pull HTTPS configuration parameter. This is required if Name is OriginPullProtocol.</p>
                     * 
                     */
                    void SetOriginPullProtocolParameters(const OriginPullProtocolParameters& _originPullProtocolParameters);

                    /**
                     * 判断参数 OriginPullProtocolParameters 是否已赋值
                     * @return OriginPullProtocolParameters 是否已赋值
                     * 
                     */
                    bool OriginPullProtocolParametersHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent compression configuration. This parameter is required when the value of Name is Compression.</p>
                     * @return CompressionParameters <p>Intelligent compression configuration. This parameter is required when the value of Name is Compression.</p>
                     * 
                     */
                    CompressionParameters GetCompressionParameters() const;

                    /**
                     * 设置<p>Intelligent compression configuration. This parameter is required when the value of Name is Compression.</p>
                     * @param _compressionParameters <p>Intelligent compression configuration. This parameter is required when the value of Name is Compression.</p>
                     * 
                     */
                    void SetCompressionParameters(const CompressionParameters& _compressionParameters);

                    /**
                     * 判断参数 CompressionParameters 是否已赋值
                     * @return CompressionParameters 是否已赋值
                     * 
                     */
                    bool CompressionParametersHasBeenSet() const;

                    /**
                     * 获取<p>HSTS configuration parameter. This parameter is required when the value of Name is HSTS.</p>
                     * @return HSTSParameters <p>HSTS configuration parameter. This parameter is required when the value of Name is HSTS.</p>
                     * 
                     */
                    HSTSParameters GetHSTSParameters() const;

                    /**
                     * 设置<p>HSTS configuration parameter. This parameter is required when the value of Name is HSTS.</p>
                     * @param _hSTSParameters <p>HSTS configuration parameter. This parameter is required when the value of Name is HSTS.</p>
                     * 
                     */
                    void SetHSTSParameters(const HSTSParameters& _hSTSParameters);

                    /**
                     * 判断参数 HSTSParameters 是否已赋值
                     * @return HSTSParameters 是否已赋值
                     * 
                     */
                    bool HSTSParametersHasBeenSet() const;

                    /**
                     * 获取<p>Header information configuration for storing client request IPs. This parameter is required when Name is ClientIPHeader.</p>
                     * @return ClientIPHeaderParameters <p>Header information configuration for storing client request IPs. This parameter is required when Name is ClientIPHeader.</p>
                     * 
                     */
                    ClientIPHeaderParameters GetClientIPHeaderParameters() const;

                    /**
                     * 设置<p>Header information configuration for storing client request IPs. This parameter is required when Name is ClientIPHeader.</p>
                     * @param _clientIPHeaderParameters <p>Header information configuration for storing client request IPs. This parameter is required when Name is ClientIPHeader.</p>
                     * 
                     */
                    void SetClientIPHeaderParameters(const ClientIPHeaderParameters& _clientIPHeaderParameters);

                    /**
                     * 判断参数 ClientIPHeaderParameters 是否已赋值
                     * @return ClientIPHeaderParameters 是否已赋值
                     * 
                     */
                    bool ClientIPHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>OCSP stapling configuration parameter. This parameter is required when Name is OCSPStapling.</p>
                     * @return OCSPStaplingParameters <p>OCSP stapling configuration parameter. This parameter is required when Name is OCSPStapling.</p>
                     * 
                     */
                    OCSPStaplingParameters GetOCSPStaplingParameters() const;

                    /**
                     * 设置<p>OCSP stapling configuration parameter. This parameter is required when Name is OCSPStapling.</p>
                     * @param _oCSPStaplingParameters <p>OCSP stapling configuration parameter. This parameter is required when Name is OCSPStapling.</p>
                     * 
                     */
                    void SetOCSPStaplingParameters(const OCSPStaplingParameters& _oCSPStaplingParameters);

                    /**
                     * 判断参数 OCSPStaplingParameters 是否已赋值
                     * @return OCSPStaplingParameters 是否已赋值
                     * 
                     */
                    bool OCSPStaplingParametersHasBeenSet() const;

                    /**
                     * 获取<p>HTTP2 integration configuration parameter. This parameter is required when Name is HTTP2.</p>
                     * @return HTTP2Parameters <p>HTTP2 integration configuration parameter. This parameter is required when Name is HTTP2.</p>
                     * 
                     */
                    HTTP2Parameters GetHTTP2Parameters() const;

                    /**
                     * 设置<p>HTTP2 integration configuration parameter. This parameter is required when Name is HTTP2.</p>
                     * @param _hTTP2Parameters <p>HTTP2 integration configuration parameter. This parameter is required when Name is HTTP2.</p>
                     * 
                     */
                    void SetHTTP2Parameters(const HTTP2Parameters& _hTTP2Parameters);

                    /**
                     * 判断参数 HTTP2Parameters 是否已赋值
                     * @return HTTP2Parameters 是否已赋值
                     * 
                     */
                    bool HTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取<p>POST request upload file streaming transmission maximum limit configuration. When the value of Name is PostMaxSize, this parameter is required.</p>
                     * @return PostMaxSizeParameters <p>POST request upload file streaming transmission maximum limit configuration. When the value of Name is PostMaxSize, this parameter is required.</p>
                     * 
                     */
                    PostMaxSizeParameters GetPostMaxSizeParameters() const;

                    /**
                     * 设置<p>POST request upload file streaming transmission maximum limit configuration. When the value of Name is PostMaxSize, this parameter is required.</p>
                     * @param _postMaxSizeParameters <p>POST request upload file streaming transmission maximum limit configuration. When the value of Name is PostMaxSize, this parameter is required.</p>
                     * 
                     */
                    void SetPostMaxSizeParameters(const PostMaxSizeParameters& _postMaxSizeParameters);

                    /**
                     * 判断参数 PostMaxSizeParameters 是否已赋值
                     * @return PostMaxSizeParameters 是否已赋值
                     * 
                     */
                    bool PostMaxSizeParametersHasBeenSet() const;

                    /**
                     * 获取<p>Configuration parameter for carrying the client IP region information during origin-pull. This parameter is required when the value of Name is ClientIPCountry.</p>
                     * @return ClientIPCountryParameters <p>Configuration parameter for carrying the client IP region information during origin-pull. This parameter is required when the value of Name is ClientIPCountry.</p>
                     * 
                     */
                    ClientIPCountryParameters GetClientIPCountryParameters() const;

                    /**
                     * 设置<p>Configuration parameter for carrying the client IP region information during origin-pull. This parameter is required when the value of Name is ClientIPCountry.</p>
                     * @param _clientIPCountryParameters <p>Configuration parameter for carrying the client IP region information during origin-pull. This parameter is required when the value of Name is ClientIPCountry.</p>
                     * 
                     */
                    void SetClientIPCountryParameters(const ClientIPCountryParameters& _clientIPCountryParameters);

                    /**
                     * 判断参数 ClientIPCountryParameters 是否已赋值
                     * @return ClientIPCountryParameters 是否已赋值
                     * 
                     */
                    bool ClientIPCountryParametersHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull follow redirect parameter configuration. When the value of Name is UpstreamFollowRedirect, this parameter is required.</p>
                     * @return UpstreamFollowRedirectParameters <p>Origin-pull follow redirect parameter configuration. When the value of Name is UpstreamFollowRedirect, this parameter is required.</p>
                     * 
                     */
                    UpstreamFollowRedirectParameters GetUpstreamFollowRedirectParameters() const;

                    /**
                     * 设置<p>Origin-pull follow redirect parameter configuration. When the value of Name is UpstreamFollowRedirect, this parameter is required.</p>
                     * @param _upstreamFollowRedirectParameters <p>Origin-pull follow redirect parameter configuration. When the value of Name is UpstreamFollowRedirect, this parameter is required.</p>
                     * 
                     */
                    void SetUpstreamFollowRedirectParameters(const UpstreamFollowRedirectParameters& _upstreamFollowRedirectParameters);

                    /**
                     * 判断参数 UpstreamFollowRedirectParameters 是否已赋值
                     * @return UpstreamFollowRedirectParameters 是否已赋值
                     * 
                     */
                    bool UpstreamFollowRedirectParametersHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull request parameter configuration parameter. This parameter is required when Name is UpstreamRequest.</p>
                     * @return UpstreamRequestParameters <p>Origin-pull request parameter configuration parameter. This parameter is required when Name is UpstreamRequest.</p>
                     * 
                     */
                    UpstreamRequestParameters GetUpstreamRequestParameters() const;

                    /**
                     * 设置<p>Origin-pull request parameter configuration parameter. This parameter is required when Name is UpstreamRequest.</p>
                     * @param _upstreamRequestParameters <p>Origin-pull request parameter configuration parameter. This parameter is required when Name is UpstreamRequest.</p>
                     * 
                     */
                    void SetUpstreamRequestParameters(const UpstreamRequestParameters& _upstreamRequestParameters);

                    /**
                     * 判断参数 UpstreamRequestParameters 是否已赋值
                     * @return UpstreamRequestParameters 是否已赋值
                     * 
                     */
                    bool UpstreamRequestParametersHasBeenSet() const;

                    /**
                     * 获取<p>Origin server uninstallation configuration parameter. This parameter is required when the value of Name is Shield.</p>
                     * @return ShieldParameters <p>Origin server uninstallation configuration parameter. This parameter is required when the value of Name is Shield.</p>
                     * 
                     */
                    ShieldParameters GetShieldParameters() const;

                    /**
                     * 设置<p>Origin server uninstallation configuration parameter. This parameter is required when the value of Name is Shield.</p>
                     * @param _shieldParameters <p>Origin server uninstallation configuration parameter. This parameter is required when the value of Name is Shield.</p>
                     * 
                     */
                    void SetShieldParameters(const ShieldParameters& _shieldParameters);

                    /**
                     * 判断参数 ShieldParameters 是否已赋值
                     * @return ShieldParameters 是否已赋值
                     * 
                     */
                    bool ShieldParametersHasBeenSet() const;

                    /**
                     * 获取<p>SSL/TLS security configuration parameter. This parameter is required when Name is TLSConfig.</p>
                     * @return TLSConfigParameters <p>SSL/TLS security configuration parameter. This parameter is required when Name is TLSConfig.</p>
                     * 
                     */
                    TLSConfigParameters GetTLSConfigParameters() const;

                    /**
                     * 设置<p>SSL/TLS security configuration parameter. This parameter is required when Name is TLSConfig.</p>
                     * @param _tLSConfigParameters <p>SSL/TLS security configuration parameter. This parameter is required when Name is TLSConfig.</p>
                     * 
                     */
                    void SetTLSConfigParameters(const TLSConfigParameters& _tLSConfigParameters);

                    /**
                     * 判断参数 TLSConfigParameters 是否已赋值
                     * @return TLSConfigParameters 是否已赋值
                     * 
                     */
                    bool TLSConfigParametersHasBeenSet() const;

                    /**
                     * 获取<p>Modify origin configuration parameters. When the value of Name is ModifyOrigin, this parameter is required.</p>
                     * @return ModifyOriginParameters <p>Modify origin configuration parameters. When the value of Name is ModifyOrigin, this parameter is required.</p>
                     * 
                     */
                    ModifyOriginParameters GetModifyOriginParameters() const;

                    /**
                     * 设置<p>Modify origin configuration parameters. When the value of Name is ModifyOrigin, this parameter is required.</p>
                     * @param _modifyOriginParameters <p>Modify origin configuration parameters. When the value of Name is ModifyOrigin, this parameter is required.</p>
                     * 
                     */
                    void SetModifyOriginParameters(const ModifyOriginParameters& _modifyOriginParameters);

                    /**
                     * 判断参数 ModifyOriginParameters 是否已赋值
                     * @return ModifyOriginParameters 是否已赋值
                     * 
                     */
                    bool ModifyOriginParametersHasBeenSet() const;

                    /**
                     * 获取<p>Origin server failover configuration parameter. This parameter is required when Name is SiteFailover.</p>
                     * @return SiteFailoverParameters <p>Origin server failover configuration parameter. This parameter is required when Name is SiteFailover.</p>
                     * 
                     */
                    SiteFailoverParameters GetSiteFailoverParameters() const;

                    /**
                     * 设置<p>Origin server failover configuration parameter. This parameter is required when Name is SiteFailover.</p>
                     * @param _siteFailoverParameters <p>Origin server failover configuration parameter. This parameter is required when Name is SiteFailover.</p>
                     * 
                     */
                    void SetSiteFailoverParameters(const SiteFailoverParameters& _siteFailoverParameters);

                    /**
                     * 判断参数 SiteFailoverParameters 是否已赋值
                     * @return SiteFailoverParameters 是否已赋值
                     * 
                     */
                    bool SiteFailoverParametersHasBeenSet() const;

                    /**
                     * 获取<p>Layer 7 origin pull timeout configuration. This parameter is required when Name is HTTPUpstreamTimeout.</p>
                     * @return HTTPUpstreamTimeoutParameters <p>Layer 7 origin pull timeout configuration. This parameter is required when Name is HTTPUpstreamTimeout.</p>
                     * 
                     */
                    HTTPUpstreamTimeoutParameters GetHTTPUpstreamTimeoutParameters() const;

                    /**
                     * 设置<p>Layer 7 origin pull timeout configuration. This parameter is required when Name is HTTPUpstreamTimeout.</p>
                     * @param _hTTPUpstreamTimeoutParameters <p>Layer 7 origin pull timeout configuration. This parameter is required when Name is HTTPUpstreamTimeout.</p>
                     * 
                     */
                    void SetHTTPUpstreamTimeoutParameters(const HTTPUpstreamTimeoutParameters& _hTTPUpstreamTimeoutParameters);

                    /**
                     * 判断参数 HTTPUpstreamTimeoutParameters 是否已赋值
                     * @return HTTPUpstreamTimeoutParameters 是否已赋值
                     * 
                     */
                    bool HTTPUpstreamTimeoutParametersHasBeenSet() const;

                    /**
                     * 获取<p>HTTP response configuration parameter. This parameter is required when Name is HttpResponse.</p>
                     * @return HttpResponseParameters <p>HTTP response configuration parameter. This parameter is required when Name is HttpResponse.</p>
                     * 
                     */
                    HTTPResponseParameters GetHttpResponseParameters() const;

                    /**
                     * 设置<p>HTTP response configuration parameter. This parameter is required when Name is HttpResponse.</p>
                     * @param _httpResponseParameters <p>HTTP response configuration parameter. This parameter is required when Name is HttpResponse.</p>
                     * 
                     */
                    void SetHttpResponseParameters(const HTTPResponseParameters& _httpResponseParameters);

                    /**
                     * 判断参数 HttpResponseParameters 是否已赋值
                     * @return HttpResponseParameters 是否已赋值
                     * 
                     */
                    bool HttpResponseParametersHasBeenSet() const;

                    /**
                     * 获取<p>Custom error page configuration parameter. This parameter is required when Name is ErrorPage.</p>
                     * @return ErrorPageParameters <p>Custom error page configuration parameter. This parameter is required when Name is ErrorPage.</p>
                     * 
                     */
                    ErrorPageParameters GetErrorPageParameters() const;

                    /**
                     * 设置<p>Custom error page configuration parameter. This parameter is required when Name is ErrorPage.</p>
                     * @param _errorPageParameters <p>Custom error page configuration parameter. This parameter is required when Name is ErrorPage.</p>
                     * 
                     */
                    void SetErrorPageParameters(const ErrorPageParameters& _errorPageParameters);

                    /**
                     * 判断参数 ErrorPageParameters 是否已赋值
                     * @return ErrorPageParameters 是否已赋值
                     * 
                     */
                    bool ErrorPageParametersHasBeenSet() const;

                    /**
                     * 获取<p>Modify HTTP node response header configuration parameters. This parameter is required when Name is ModifyResponseHeader.</p>
                     * @return ModifyResponseHeaderParameters <p>Modify HTTP node response header configuration parameters. This parameter is required when Name is ModifyResponseHeader.</p>
                     * 
                     */
                    ModifyResponseHeaderParameters GetModifyResponseHeaderParameters() const;

                    /**
                     * 设置<p>Modify HTTP node response header configuration parameters. This parameter is required when Name is ModifyResponseHeader.</p>
                     * @param _modifyResponseHeaderParameters <p>Modify HTTP node response header configuration parameters. This parameter is required when Name is ModifyResponseHeader.</p>
                     * 
                     */
                    void SetModifyResponseHeaderParameters(const ModifyResponseHeaderParameters& _modifyResponseHeaderParameters);

                    /**
                     * 判断参数 ModifyResponseHeaderParameters 是否已赋值
                     * @return ModifyResponseHeaderParameters 是否已赋值
                     * 
                     */
                    bool ModifyResponseHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>Modify the HTTP node request header configuration parameter. This parameter is required if Name is ModifyRequestHeader.</p>
                     * @return ModifyRequestHeaderParameters <p>Modify the HTTP node request header configuration parameter. This parameter is required if Name is ModifyRequestHeader.</p>
                     * 
                     */
                    ModifyRequestHeaderParameters GetModifyRequestHeaderParameters() const;

                    /**
                     * 设置<p>Modify the HTTP node request header configuration parameter. This parameter is required if Name is ModifyRequestHeader.</p>
                     * @param _modifyRequestHeaderParameters <p>Modify the HTTP node request header configuration parameter. This parameter is required if Name is ModifyRequestHeader.</p>
                     * 
                     */
                    void SetModifyRequestHeaderParameters(const ModifyRequestHeaderParameters& _modifyRequestHeaderParameters);

                    /**
                     * 判断参数 ModifyRequestHeaderParameters 是否已赋值
                     * @return ModifyRequestHeaderParameters 是否已赋值
                     * 
                     */
                    bool ModifyRequestHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>Single connection download speed limit configuration parameter. This parameter is required when Name is ResponseSpeedLimit.</p>
                     * @return ResponseSpeedLimitParameters <p>Single connection download speed limit configuration parameter. This parameter is required when Name is ResponseSpeedLimit.</p>
                     * 
                     */
                    ResponseSpeedLimitParameters GetResponseSpeedLimitParameters() const;

                    /**
                     * 设置<p>Single connection download speed limit configuration parameter. This parameter is required when Name is ResponseSpeedLimit.</p>
                     * @param _responseSpeedLimitParameters <p>Single connection download speed limit configuration parameter. This parameter is required when Name is ResponseSpeedLimit.</p>
                     * 
                     */
                    void SetResponseSpeedLimitParameters(const ResponseSpeedLimitParameters& _responseSpeedLimitParameters);

                    /**
                     * 判断参数 ResponseSpeedLimitParameters 是否已赋值
                     * @return ResponseSpeedLimitParameters 是否已赋值
                     * 
                     */
                    bool ResponseSpeedLimitParametersHasBeenSet() const;

                    /**
                     * 获取<p>Content identification configuration parameter. This parameter is required when the value of Name is SetContentIdentifier.</p>
                     * @return SetContentIdentifierParameters <p>Content identification configuration parameter. This parameter is required when the value of Name is SetContentIdentifier.</p>
                     * 
                     */
                    SetContentIdentifierParameters GetSetContentIdentifierParameters() const;

                    /**
                     * 设置<p>Content identification configuration parameter. This parameter is required when the value of Name is SetContentIdentifier.</p>
                     * @param _setContentIdentifierParameters <p>Content identification configuration parameter. This parameter is required when the value of Name is SetContentIdentifier.</p>
                     * 
                     */
                    void SetSetContentIdentifierParameters(const SetContentIdentifierParameters& _setContentIdentifierParameters);

                    /**
                     * 判断参数 SetContentIdentifierParameters 是否已赋值
                     * @return SetContentIdentifierParameters 是否已赋值
                     * 
                     */
                    bool SetContentIdentifierParametersHasBeenSet() const;

                    /**
                     * 获取<p>Vary feature configuration parameter. When the value of Name is Vary, this parameter is required.</p>
                     * @return VaryParameters <p>Vary feature configuration parameter. When the value of Name is Vary, this parameter is required.</p>
                     * 
                     */
                    VaryParameters GetVaryParameters() const;

                    /**
                     * 设置<p>Vary feature configuration parameter. When the value of Name is Vary, this parameter is required.</p>
                     * @param _varyParameters <p>Vary feature configuration parameter. When the value of Name is Vary, this parameter is required.</p>
                     * 
                     */
                    void SetVaryParameters(const VaryParameters& _varyParameters);

                    /**
                     * 判断参数 VaryParameters 是否已赋值
                     * @return VaryParameters 是否已赋值
                     * 
                     */
                    bool VaryParametersHasBeenSet() const;

                    /**
                     * 获取<p>Content compression configuration parameter. When the value of Name is ContentCompression, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * @return ContentCompressionParameters <p>Content compression configuration parameter. When the value of Name is ContentCompression, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * 
                     */
                    ContentCompressionParameters GetContentCompressionParameters() const;

                    /**
                     * 设置<p>Content compression configuration parameter. When the value of Name is ContentCompression, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * @param _contentCompressionParameters <p>Content compression configuration parameter. When the value of Name is ContentCompression, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * 
                     */
                    void SetContentCompressionParameters(const ContentCompressionParameters& _contentCompressionParameters);

                    /**
                     * 判断参数 ContentCompressionParameters 是否已赋值
                     * @return ContentCompressionParameters 是否已赋值
                     * 
                     */
                    bool ContentCompressionParametersHasBeenSet() const;

                    /**
                     * 获取<p>Origin authentication configuration parameter. When the value of Name is OriginAuthentication, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * @return OriginAuthenticationParameters <p>Origin authentication configuration parameter. When the value of Name is OriginAuthentication, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * 
                     */
                    OriginAuthenticationParameters GetOriginAuthenticationParameters() const;

                    /**
                     * 设置<p>Origin authentication configuration parameter. When the value of Name is OriginAuthentication, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * @param _originAuthenticationParameters <p>Origin authentication configuration parameter. When the value of Name is OriginAuthentication, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     * 
                     */
                    void SetOriginAuthenticationParameters(const OriginAuthenticationParameters& _originAuthenticationParameters);

                    /**
                     * 判断参数 OriginAuthenticationParameters 是否已赋值
                     * @return OriginAuthenticationParameters 是否已赋值
                     * 
                     */
                    bool OriginAuthenticationParametersHasBeenSet() const;

                    /**
                     * 获取<p>Custom configuration operation parameter. This parameter is required when the value of Name is CustomAction.</p><p>You can get the list of currently supported custom configuration items through the returned value CustomActionSet of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @return CustomActionParameters <p>Custom configuration operation parameter. This parameter is required when the value of Name is CustomAction.</p><p>You can get the list of currently supported custom configuration items through the returned value CustomActionSet of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    CustomActionParameters GetCustomActionParameters() const;

                    /**
                     * 设置<p>Custom configuration operation parameter. This parameter is required when the value of Name is CustomAction.</p><p>You can get the list of currently supported custom configuration items through the returned value CustomActionSet of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @param _customActionParameters <p>Custom configuration operation parameter. This parameter is required when the value of Name is CustomAction.</p><p>You can get the list of currently supported custom configuration items through the returned value CustomActionSet of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    void SetCustomActionParameters(const CustomActionParameters& _customActionParameters);

                    /**
                     * 判断参数 CustomActionParameters 是否已赋值
                     * @return CustomActionParameters 是否已赋值
                     * 
                     */
                    bool CustomActionParametersHasBeenSet() const;

                private:

                    /**
                     * <p>Operation Name. The Name must correspond to the parameter structure. For example, if Name=Cache, CacheParameters is required.<li>Cache: node Cache TTL;</li><li>CacheKey: custom Cache Key;</li><li>CachePrefresh: Cache pre-refresh;</li><li>AccessURLRedirect: access URL redirection;</li><li>UpstreamURLRewrite: origin-pull URL rewrite;</li><li>QUIC: QUIC;</li><li>WebSocket: WebSocket;</li><li>Authentication: Token Authentication;</li><li>MaxAge: browser Cache TTL;</li><li>StatusCodeCache: status code Cache TTL;</li><li>OfflineCache: offline Cache;</li><li>SmartRouting: smart acceleration;</li><li>AdvancedOriginRouting: advanced origin optimization;</li><li>RangeOriginPull: range-based origin pull;</li><li>UpstreamHTTP2: HTTP2 origin pull;</li><li>HostHeader: Host Header rewrite;</li><li>ForceRedirectHTTPS: forced HTTPS redirect configuration for access protocol;</li><li>OriginPullProtocol: origin-pull HTTPS;</li><li>Compression: intelligent Compression configuration;</li><li>HSTS: HSTS;</li><li>ClientIPHeader: Header information configuration for storing client request IP;</li><li>OCSPStapling: OCSP stapling;</li><li>HTTP2: HTTP2 integration;</li><li>PostMaxSize: maximum limit configuration for streaming transmission of POST request upload files;</li><li>ClientIPCountry: carry the regional information of the client IP during origin-pull;</li><li>UpstreamFollowRedirect: origin-pull follow redirect parameter configuration;</li><li>UpstreamRequest: origin-pull request parameters;</li><li>Shield: origin server uninstallation configuration;</li><li>TLSConfig: SSL/TLS security;</li><li>ModifyOrigin: modify origin server;</li><li>SiteFailover: origin server fault migration;</li><li>HTTPUpstreamTimeout: Layer 7 origin pull timeout configuration;</li><li>HttpResponse: HTTP response;</li><li>ErrorPage: custom error page;</li><li>ModifyResponseHeader: modify HTTP node response Header;</li><li>ModifyRequestHeader: modify HTTP node request Header;</li><li>ResponseSpeedLimit: single connection download speed limit;</li><li>SetContentIdentifier: set content identifier;</li><li>Vary: Vary feature configuration;</li><li>ContentCompression: content Compression configuration;</li><li>OriginAuthentication: origin-pull Authentication configuration;</li><li>CustomAction: custom configuration.</li></p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Node cache TTL configuration parameter. This parameter is required when Name is Cache.</p>
                     */
                    CacheParameters m_cacheParameters;
                    bool m_cacheParametersHasBeenSet;

                    /**
                     * <p>Custom Cache Key configuration parameter. When Name is CacheKey, this parameter is required.</p>
                     */
                    CacheKeyParameters m_cacheKeyParameters;
                    bool m_cacheKeyParametersHasBeenSet;

                    /**
                     * <p>Cache pre-refresh configuration parameter. This parameter is required when Name value is CachePrefresh.</p>
                     */
                    CachePrefreshParameters m_cachePrefreshParameters;
                    bool m_cachePrefreshParametersHasBeenSet;

                    /**
                     * <p>Access URL redirection configuration parameter. This parameter is required when Name is AccessURLRedirect.</p>
                     */
                    AccessURLRedirectParameters m_accessURLRedirectParameters;
                    bool m_accessURLRedirectParametersHasBeenSet;

                    /**
                     * <p>Origin-pull URL rewrite configuration parameter. This parameter is required if Name is UpstreamURLRewrite.</p>
                     */
                    UpstreamURLRewriteParameters m_upstreamURLRewriteParameters;
                    bool m_upstreamURLRewriteParametersHasBeenSet;

                    /**
                     * <p>QUIC configuration parameter. This parameter is required when the value of Name is QUIC.</p>
                     */
                    QUICParameters m_qUICParameters;
                    bool m_qUICParametersHasBeenSet;

                    /**
                     * <p>WebSocket configuration parameter. This parameter is required when Name is WebSocket.</p>
                     */
                    WebSocketParameters m_webSocketParameters;
                    bool m_webSocketParametersHasBeenSet;

                    /**
                     * <p>Token authentication configuration parameter. When the value of Name is Authentication, this parameter is required.</p>
                     */
                    AuthenticationParameters m_authenticationParameters;
                    bool m_authenticationParametersHasBeenSet;

                    /**
                     * <p>Browser cache TTL configuration parameter. This parameter is required when Name is MaxAge.</p>
                     */
                    MaxAgeParameters m_maxAgeParameters;
                    bool m_maxAgeParametersHasBeenSet;

                    /**
                     * <p>Status code cache TTL configuration parameter. This parameter is required when Name is StatusCodeCache.</p>
                     */
                    StatusCodeCacheParameters m_statusCodeCacheParameters;
                    bool m_statusCodeCacheParametersHasBeenSet;

                    /**
                     * <p>Offline cache configuration parameter. This parameter is required when Name value is OfflineCache.</p>
                     */
                    OfflineCacheParameters m_offlineCacheParameters;
                    bool m_offlineCacheParametersHasBeenSet;

                    /**
                     * <p>Smart acceleration configuration parameter. This parameter is required when the value of Name is SmartRouting.</p>
                     */
                    SmartRoutingParameters m_smartRoutingParameters;
                    bool m_smartRoutingParametersHasBeenSet;

                    /**
                     * <p>Advanced origin-pull optimization configuration parameters. When the value of Name is AdvancedOriginRouting, this parameter is required.</p>
                     */
                    AdvancedOriginRoutingParameters m_advancedOriginRoutingParameters;
                    bool m_advancedOriginRoutingParametersHasBeenSet;

                    /**
                     * <p>Range-based origin pull configuration parameter. This parameter is required when Name is RangeOriginPull.</p>
                     */
                    RangeOriginPullParameters m_rangeOriginPullParameters;
                    bool m_rangeOriginPullParametersHasBeenSet;

                    /**
                     * <p>HTTP2 origin-pull configuration parameter. This parameter is required if Name is UpstreamHTTP2.</p>
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2Parameters;
                    bool m_upstreamHTTP2ParametersHasBeenSet;

                    /**
                     * <p>Host Header rewrite configuration parameters. When the value of Name is HostHeader, this parameter is required.</p>
                     */
                    HostHeaderParameters m_hostHeaderParameters;
                    bool m_hostHeaderParametersHasBeenSet;

                    /**
                     * <p>Access protocol forced HTTPS redirect configuration. This parameter is required when Name is ForceRedirectHTTPS.</p>
                     */
                    ForceRedirectHTTPSParameters m_forceRedirectHTTPSParameters;
                    bool m_forceRedirectHTTPSParametersHasBeenSet;

                    /**
                     * <p>Origin-pull HTTPS configuration parameter. This is required if Name is OriginPullProtocol.</p>
                     */
                    OriginPullProtocolParameters m_originPullProtocolParameters;
                    bool m_originPullProtocolParametersHasBeenSet;

                    /**
                     * <p>Intelligent compression configuration. This parameter is required when the value of Name is Compression.</p>
                     */
                    CompressionParameters m_compressionParameters;
                    bool m_compressionParametersHasBeenSet;

                    /**
                     * <p>HSTS configuration parameter. This parameter is required when the value of Name is HSTS.</p>
                     */
                    HSTSParameters m_hSTSParameters;
                    bool m_hSTSParametersHasBeenSet;

                    /**
                     * <p>Header information configuration for storing client request IPs. This parameter is required when Name is ClientIPHeader.</p>
                     */
                    ClientIPHeaderParameters m_clientIPHeaderParameters;
                    bool m_clientIPHeaderParametersHasBeenSet;

                    /**
                     * <p>OCSP stapling configuration parameter. This parameter is required when Name is OCSPStapling.</p>
                     */
                    OCSPStaplingParameters m_oCSPStaplingParameters;
                    bool m_oCSPStaplingParametersHasBeenSet;

                    /**
                     * <p>HTTP2 integration configuration parameter. This parameter is required when Name is HTTP2.</p>
                     */
                    HTTP2Parameters m_hTTP2Parameters;
                    bool m_hTTP2ParametersHasBeenSet;

                    /**
                     * <p>POST request upload file streaming transmission maximum limit configuration. When the value of Name is PostMaxSize, this parameter is required.</p>
                     */
                    PostMaxSizeParameters m_postMaxSizeParameters;
                    bool m_postMaxSizeParametersHasBeenSet;

                    /**
                     * <p>Configuration parameter for carrying the client IP region information during origin-pull. This parameter is required when the value of Name is ClientIPCountry.</p>
                     */
                    ClientIPCountryParameters m_clientIPCountryParameters;
                    bool m_clientIPCountryParametersHasBeenSet;

                    /**
                     * <p>Origin-pull follow redirect parameter configuration. When the value of Name is UpstreamFollowRedirect, this parameter is required.</p>
                     */
                    UpstreamFollowRedirectParameters m_upstreamFollowRedirectParameters;
                    bool m_upstreamFollowRedirectParametersHasBeenSet;

                    /**
                     * <p>Origin-pull request parameter configuration parameter. This parameter is required when Name is UpstreamRequest.</p>
                     */
                    UpstreamRequestParameters m_upstreamRequestParameters;
                    bool m_upstreamRequestParametersHasBeenSet;

                    /**
                     * <p>Origin server uninstallation configuration parameter. This parameter is required when the value of Name is Shield.</p>
                     */
                    ShieldParameters m_shieldParameters;
                    bool m_shieldParametersHasBeenSet;

                    /**
                     * <p>SSL/TLS security configuration parameter. This parameter is required when Name is TLSConfig.</p>
                     */
                    TLSConfigParameters m_tLSConfigParameters;
                    bool m_tLSConfigParametersHasBeenSet;

                    /**
                     * <p>Modify origin configuration parameters. When the value of Name is ModifyOrigin, this parameter is required.</p>
                     */
                    ModifyOriginParameters m_modifyOriginParameters;
                    bool m_modifyOriginParametersHasBeenSet;

                    /**
                     * <p>Origin server failover configuration parameter. This parameter is required when Name is SiteFailover.</p>
                     */
                    SiteFailoverParameters m_siteFailoverParameters;
                    bool m_siteFailoverParametersHasBeenSet;

                    /**
                     * <p>Layer 7 origin pull timeout configuration. This parameter is required when Name is HTTPUpstreamTimeout.</p>
                     */
                    HTTPUpstreamTimeoutParameters m_hTTPUpstreamTimeoutParameters;
                    bool m_hTTPUpstreamTimeoutParametersHasBeenSet;

                    /**
                     * <p>HTTP response configuration parameter. This parameter is required when Name is HttpResponse.</p>
                     */
                    HTTPResponseParameters m_httpResponseParameters;
                    bool m_httpResponseParametersHasBeenSet;

                    /**
                     * <p>Custom error page configuration parameter. This parameter is required when Name is ErrorPage.</p>
                     */
                    ErrorPageParameters m_errorPageParameters;
                    bool m_errorPageParametersHasBeenSet;

                    /**
                     * <p>Modify HTTP node response header configuration parameters. This parameter is required when Name is ModifyResponseHeader.</p>
                     */
                    ModifyResponseHeaderParameters m_modifyResponseHeaderParameters;
                    bool m_modifyResponseHeaderParametersHasBeenSet;

                    /**
                     * <p>Modify the HTTP node request header configuration parameter. This parameter is required if Name is ModifyRequestHeader.</p>
                     */
                    ModifyRequestHeaderParameters m_modifyRequestHeaderParameters;
                    bool m_modifyRequestHeaderParametersHasBeenSet;

                    /**
                     * <p>Single connection download speed limit configuration parameter. This parameter is required when Name is ResponseSpeedLimit.</p>
                     */
                    ResponseSpeedLimitParameters m_responseSpeedLimitParameters;
                    bool m_responseSpeedLimitParametersHasBeenSet;

                    /**
                     * <p>Content identification configuration parameter. This parameter is required when the value of Name is SetContentIdentifier.</p>
                     */
                    SetContentIdentifierParameters m_setContentIdentifierParameters;
                    bool m_setContentIdentifierParametersHasBeenSet;

                    /**
                     * <p>Vary feature configuration parameter. When the value of Name is Vary, this parameter is required.</p>
                     */
                    VaryParameters m_varyParameters;
                    bool m_varyParametersHasBeenSet;

                    /**
                     * <p>Content compression configuration parameter. When the value of Name is ContentCompression, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     */
                    ContentCompressionParameters m_contentCompressionParameters;
                    bool m_contentCompressionParametersHasBeenSet;

                    /**
                     * <p>Origin authentication configuration parameter. When the value of Name is OriginAuthentication, this parameter is required. This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.</p>
                     */
                    OriginAuthenticationParameters m_originAuthenticationParameters;
                    bool m_originAuthenticationParametersHasBeenSet;

                    /**
                     * <p>Custom configuration operation parameter. This parameter is required when the value of Name is CustomAction.</p><p>You can get the list of currently supported custom configuration items through the returned value CustomActionSet of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     */
                    CustomActionParameters m_customActionParameters;
                    bool m_customActionParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_
