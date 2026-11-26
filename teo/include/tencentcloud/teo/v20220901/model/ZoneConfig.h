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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SmartRoutingParameters.h>
#include <tencentcloud/teo/v20220901/model/CacheConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/MaxAgeParameters.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/CachePrefreshParameters.h>
#include <tencentcloud/teo/v20220901/model/OfflineCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/CompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirectHTTPSParameters.h>
#include <tencentcloud/teo/v20220901/model/HSTSParameters.h>
#include <tencentcloud/teo/v20220901/model/TLSConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/OCSPStaplingParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/QUICParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/IPv6Parameters.h>
#include <tencentcloud/teo/v20220901/model/WebSocketParameters.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSizeParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPCountryParameters.h>
#include <tencentcloud/teo/v20220901/model/GrpcParameters.h>
#include <tencentcloud/teo/v20220901/model/NetworkErrorLoggingParameters.h>
#include <tencentcloud/teo/v20220901/model/AccelerateMainlandParameters.h>
#include <tencentcloud/teo/v20220901/model/StandardDebugParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Site acceleration configuration.
                */
                class ZoneConfig : public AbstractModel
                {
                public:
                    ZoneConfig();
                    ~ZoneConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent acceleration configuration.
                     * @return SmartRouting Intelligent acceleration configuration.
                     * 
                     */
                    SmartRoutingParameters GetSmartRouting() const;

                    /**
                     * 设置Intelligent acceleration configuration.
                     * @param _smartRouting Intelligent acceleration configuration.
                     * 
                     */
                    void SetSmartRouting(const SmartRoutingParameters& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     * 
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取Cache expiration time configuration.
                     * @return Cache Cache expiration time configuration.
                     * 
                     */
                    CacheConfigParameters GetCache() const;

                    /**
                     * 设置Cache expiration time configuration.
                     * @param _cache Cache expiration time configuration.
                     * 
                     */
                    void SetCache(const CacheConfigParameters& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Browser cache configuration.
                     * @return MaxAge Browser cache configuration.
                     * 
                     */
                    MaxAgeParameters GetMaxAge() const;

                    /**
                     * 设置Browser cache configuration.
                     * @param _maxAge Browser cache configuration.
                     * 
                     */
                    void SetMaxAge(const MaxAgeParameters& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Node cache key configuration.
                     * @return CacheKey Node cache key configuration.
                     * 
                     */
                    CacheKeyConfigParameters GetCacheKey() const;

                    /**
                     * 设置Node cache key configuration.
                     * @param _cacheKey Node cache key configuration.
                     * 
                     */
                    void SetCacheKey(const CacheKeyConfigParameters& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取Cache pre-refresh configuration.
                     * @return CachePrefresh Cache pre-refresh configuration.
                     * 
                     */
                    CachePrefreshParameters GetCachePrefresh() const;

                    /**
                     * 设置Cache pre-refresh configuration.
                     * @param _cachePrefresh Cache pre-refresh configuration.
                     * 
                     */
                    void SetCachePrefresh(const CachePrefreshParameters& _cachePrefresh);

                    /**
                     * 判断参数 CachePrefresh 是否已赋值
                     * @return CachePrefresh 是否已赋值
                     * 
                     */
                    bool CachePrefreshHasBeenSet() const;

                    /**
                     * 获取Offline cache configuration.
                     * @return OfflineCache Offline cache configuration.
                     * 
                     */
                    OfflineCacheParameters GetOfflineCache() const;

                    /**
                     * 设置Offline cache configuration.
                     * @param _offlineCache Offline cache configuration.
                     * 
                     */
                    void SetOfflineCache(const OfflineCacheParameters& _offlineCache);

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     * 
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取Intelligent compression configuration.
                     * @return Compression Intelligent compression configuration.
                     * 
                     */
                    CompressionParameters GetCompression() const;

                    /**
                     * 设置Intelligent compression configuration.
                     * @param _compression Intelligent compression configuration.
                     * 
                     */
                    void SetCompression(const CompressionParameters& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Forced HTTPS redirect configuration for access protocols.
                     * @return ForceRedirectHTTPS Forced HTTPS redirect configuration for access protocols.
                     * 
                     */
                    ForceRedirectHTTPSParameters GetForceRedirectHTTPS() const;

                    /**
                     * 设置Forced HTTPS redirect configuration for access protocols.
                     * @param _forceRedirectHTTPS Forced HTTPS redirect configuration for access protocols.
                     * 
                     */
                    void SetForceRedirectHTTPS(const ForceRedirectHTTPSParameters& _forceRedirectHTTPS);

                    /**
                     * 判断参数 ForceRedirectHTTPS 是否已赋值
                     * @return ForceRedirectHTTPS 是否已赋值
                     * 
                     */
                    bool ForceRedirectHTTPSHasBeenSet() const;

                    /**
                     * 获取HSTS configuration.
                     * @return HSTS HSTS configuration.
                     * 
                     */
                    HSTSParameters GetHSTS() const;

                    /**
                     * 设置HSTS configuration.
                     * @param _hSTS HSTS configuration.
                     * 
                     */
                    void SetHSTS(const HSTSParameters& _hSTS);

                    /**
                     * 判断参数 HSTS 是否已赋值
                     * @return HSTS 是否已赋值
                     * 
                     */
                    bool HSTSHasBeenSet() const;

                    /**
                     * 获取TLS configuration.
                     * @return TLSConfig TLS configuration.
                     * 
                     */
                    TLSConfigParameters GetTLSConfig() const;

                    /**
                     * 设置TLS configuration.
                     * @param _tLSConfig TLS configuration.
                     * 
                     */
                    void SetTLSConfig(const TLSConfigParameters& _tLSConfig);

                    /**
                     * 判断参数 TLSConfig 是否已赋值
                     * @return TLSConfig 是否已赋值
                     * 
                     */
                    bool TLSConfigHasBeenSet() const;

                    /**
                     * 获取OCSP stapling configuration.
                     * @return OCSPStapling OCSP stapling configuration.
                     * 
                     */
                    OCSPStaplingParameters GetOCSPStapling() const;

                    /**
                     * 设置OCSP stapling configuration.
                     * @param _oCSPStapling OCSP stapling configuration.
                     * 
                     */
                    void SetOCSPStapling(const OCSPStaplingParameters& _oCSPStapling);

                    /**
                     * 判断参数 OCSPStapling 是否已赋值
                     * @return OCSPStapling 是否已赋值
                     * 
                     */
                    bool OCSPStaplingHasBeenSet() const;

                    /**
                     * 获取HTTP/2 configuration.
                     * @return HTTP2 HTTP/2 configuration.
                     * 
                     */
                    HTTP2Parameters GetHTTP2() const;

                    /**
                     * 设置HTTP/2 configuration.
                     * @param _hTTP2 HTTP/2 configuration.
                     * 
                     */
                    void SetHTTP2(const HTTP2Parameters& _hTTP2);

                    /**
                     * 判断参数 HTTP2 是否已赋值
                     * @return HTTP2 是否已赋值
                     * 
                     */
                    bool HTTP2HasBeenSet() const;

                    /**
                     * 获取QUIC access configuration.
                     * @return QUIC QUIC access configuration.
                     * 
                     */
                    QUICParameters GetQUIC() const;

                    /**
                     * 设置QUIC access configuration.
                     * @param _qUIC QUIC access configuration.
                     * 
                     */
                    void SetQUIC(const QUICParameters& _qUIC);

                    /**
                     * 判断参数 QUIC 是否已赋值
                     * @return QUIC 是否已赋值
                     * 
                     */
                    bool QUICHasBeenSet() const;

                    /**
                     * 获取HTTP/2 origin-pull configuration.
                     * @return UpstreamHTTP2 HTTP/2 origin-pull configuration.
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2() const;

                    /**
                     * 设置HTTP/2 origin-pull configuration.
                     * @param _upstreamHTTP2 HTTP/2 origin-pull configuration.
                     * 
                     */
                    void SetUpstreamHTTP2(const UpstreamHTTP2Parameters& _upstreamHTTP2);

                    /**
                     * 判断参数 UpstreamHTTP2 是否已赋值
                     * @return UpstreamHTTP2 是否已赋值
                     * 
                     */
                    bool UpstreamHTTP2HasBeenSet() const;

                    /**
                     * 获取IPv6 access configuration.
                     * @return IPv6 IPv6 access configuration.
                     * 
                     */
                    IPv6Parameters GetIPv6() const;

                    /**
                     * 设置IPv6 access configuration.
                     * @param _iPv6 IPv6 access configuration.
                     * 
                     */
                    void SetIPv6(const IPv6Parameters& _iPv6);

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                    /**
                     * 获取WebSocket configuration.
                     * @return WebSocket WebSocket configuration.
                     * 
                     */
                    WebSocketParameters GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
                     * @param _webSocket WebSocket configuration.
                     * 
                     */
                    void SetWebSocket(const WebSocketParameters& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     * 
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取Configuration for POST request transmission.
                     * @return PostMaxSize Configuration for POST request transmission.
                     * 
                     */
                    PostMaxSizeParameters GetPostMaxSize() const;

                    /**
                     * 设置Configuration for POST request transmission.
                     * @param _postMaxSize Configuration for POST request transmission.
                     * 
                     */
                    void SetPostMaxSize(const PostMaxSizeParameters& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     * 
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取Client IP origin-pull request header configuration.
                     * @return ClientIPHeader Client IP origin-pull request header configuration.
                     * 
                     */
                    ClientIPHeaderParameters GetClientIPHeader() const;

                    /**
                     * 设置Client IP origin-pull request header configuration.
                     * @param _clientIPHeader Client IP origin-pull request header configuration.
                     * 
                     */
                    void SetClientIPHeader(const ClientIPHeaderParameters& _clientIPHeader);

                    /**
                     * 判断参数 ClientIPHeader 是否已赋值
                     * @return ClientIPHeader 是否已赋值
                     * 
                     */
                    bool ClientIPHeaderHasBeenSet() const;

                    /**
                     * 获取Configuration of whether to carry the regional information of the client IP during origin-pull.
                     * @return ClientIPCountry Configuration of whether to carry the regional information of the client IP during origin-pull.
                     * 
                     */
                    ClientIPCountryParameters GetClientIPCountry() const;

                    /**
                     * 设置Configuration of whether to carry the regional information of the client IP during origin-pull.
                     * @param _clientIPCountry Configuration of whether to carry the regional information of the client IP during origin-pull.
                     * 
                     */
                    void SetClientIPCountry(const ClientIPCountryParameters& _clientIPCountry);

                    /**
                     * 判断参数 ClientIPCountry 是否已赋值
                     * @return ClientIPCountry 是否已赋值
                     * 
                     */
                    bool ClientIPCountryHasBeenSet() const;

                    /**
                     * 获取The gRPC protocol supports configuration.
                     * @return Grpc The gRPC protocol supports configuration.
                     * 
                     */
                    GrpcParameters GetGrpc() const;

                    /**
                     * 设置The gRPC protocol supports configuration.
                     * @param _grpc The gRPC protocol supports configuration.
                     * 
                     */
                    void SetGrpc(const GrpcParameters& _grpc);

                    /**
                     * 判断参数 Grpc 是否已赋值
                     * @return Grpc 是否已赋值
                     * 
                     */
                    bool GrpcHasBeenSet() const;

                    /**
                     * 获取Network error log configuration.
                     * @return NetworkErrorLogging Network error log configuration.
                     * 
                     */
                    NetworkErrorLoggingParameters GetNetworkErrorLogging() const;

                    /**
                     * 设置Network error log configuration.
                     * @param _networkErrorLogging Network error log configuration.
                     * 
                     */
                    void SetNetworkErrorLogging(const NetworkErrorLoggingParameters& _networkErrorLogging);

                    /**
                     * 判断参数 NetworkErrorLogging 是否已赋值
                     * @return NetworkErrorLogging 是否已赋值
                     * 
                     */
                    bool NetworkErrorLoggingHasBeenSet() const;

                    /**
                     * 获取Acceleration optimization configuration in the Chinese mainland.
                     * @return AccelerateMainland Acceleration optimization configuration in the Chinese mainland.
                     * 
                     */
                    AccelerateMainlandParameters GetAccelerateMainland() const;

                    /**
                     * 设置Acceleration optimization configuration in the Chinese mainland.
                     * @param _accelerateMainland Acceleration optimization configuration in the Chinese mainland.
                     * 
                     */
                    void SetAccelerateMainland(const AccelerateMainlandParameters& _accelerateMainland);

                    /**
                     * 判断参数 AccelerateMainland 是否已赋值
                     * @return AccelerateMainland 是否已赋值
                     * 
                     */
                    bool AccelerateMainlandHasBeenSet() const;

                    /**
                     * 获取Standard Debug configuration.
                     * @return StandardDebug Standard Debug configuration.
                     * 
                     */
                    StandardDebugParameters GetStandardDebug() const;

                    /**
                     * 设置Standard Debug configuration.
                     * @param _standardDebug Standard Debug configuration.
                     * 
                     */
                    void SetStandardDebug(const StandardDebugParameters& _standardDebug);

                    /**
                     * 判断参数 StandardDebug 是否已赋值
                     * @return StandardDebug 是否已赋值
                     * 
                     */
                    bool StandardDebugHasBeenSet() const;

                private:

                    /**
                     * Intelligent acceleration configuration.
                     */
                    SmartRoutingParameters m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * Cache expiration time configuration.
                     */
                    CacheConfigParameters m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Browser cache configuration.
                     */
                    MaxAgeParameters m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Node cache key configuration.
                     */
                    CacheKeyConfigParameters m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Cache pre-refresh configuration.
                     */
                    CachePrefreshParameters m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * Offline cache configuration.
                     */
                    OfflineCacheParameters m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * Intelligent compression configuration.
                     */
                    CompressionParameters m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Forced HTTPS redirect configuration for access protocols.
                     */
                    ForceRedirectHTTPSParameters m_forceRedirectHTTPS;
                    bool m_forceRedirectHTTPSHasBeenSet;

                    /**
                     * HSTS configuration.
                     */
                    HSTSParameters m_hSTS;
                    bool m_hSTSHasBeenSet;

                    /**
                     * TLS configuration.
                     */
                    TLSConfigParameters m_tLSConfig;
                    bool m_tLSConfigHasBeenSet;

                    /**
                     * OCSP stapling configuration.
                     */
                    OCSPStaplingParameters m_oCSPStapling;
                    bool m_oCSPStaplingHasBeenSet;

                    /**
                     * HTTP/2 configuration.
                     */
                    HTTP2Parameters m_hTTP2;
                    bool m_hTTP2HasBeenSet;

                    /**
                     * QUIC access configuration.
                     */
                    QUICParameters m_qUIC;
                    bool m_qUICHasBeenSet;

                    /**
                     * HTTP/2 origin-pull configuration.
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2;
                    bool m_upstreamHTTP2HasBeenSet;

                    /**
                     * IPv6 access configuration.
                     */
                    IPv6Parameters m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * WebSocket configuration.
                     */
                    WebSocketParameters m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Configuration for POST request transmission.
                     */
                    PostMaxSizeParameters m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Client IP origin-pull request header configuration.
                     */
                    ClientIPHeaderParameters m_clientIPHeader;
                    bool m_clientIPHeaderHasBeenSet;

                    /**
                     * Configuration of whether to carry the regional information of the client IP during origin-pull.
                     */
                    ClientIPCountryParameters m_clientIPCountry;
                    bool m_clientIPCountryHasBeenSet;

                    /**
                     * The gRPC protocol supports configuration.
                     */
                    GrpcParameters m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * Network error log configuration.
                     */
                    NetworkErrorLoggingParameters m_networkErrorLogging;
                    bool m_networkErrorLoggingHasBeenSet;

                    /**
                     * Acceleration optimization configuration in the Chinese mainland.
                     */
                    AccelerateMainlandParameters m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * Standard Debug configuration.
                     */
                    StandardDebugParameters m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIG_H_
