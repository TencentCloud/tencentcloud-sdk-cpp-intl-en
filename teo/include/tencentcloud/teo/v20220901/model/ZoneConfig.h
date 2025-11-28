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
                     * 获取<Intelligent acceleration configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return SmartRouting <Intelligent acceleration configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    SmartRoutingParameters GetSmartRouting() const;

                    /**
                     * 设置<Intelligent acceleration configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _smartRouting <Intelligent acceleration configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Node cache expiration time configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return Cache Node cache expiration time configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CacheConfigParameters GetCache() const;

                    /**
                     * 设置Node cache expiration time configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _cache Node cache expiration time configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Browser cache rule configuration, which is used to set the default value of maxage and is disabled by default.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return MaxAge Browser cache rule configuration, which is used to set the default value of maxage and is disabled by default.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    MaxAgeParameters GetMaxAge() const;

                    /**
                     * 设置Browser cache rule configuration, which is used to set the default value of maxage and is disabled by default.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _maxAge Browser cache rule configuration, which is used to set the default value of maxage and is disabled by default.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取The node cache key configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return CacheKey The node cache key configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CacheKeyConfigParameters GetCacheKey() const;

                    /**
                     * 设置The node cache key configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _cacheKey The node cache key configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Cache prefresh configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return CachePrefresh Cache prefresh configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CachePrefreshParameters GetCachePrefresh() const;

                    /**
                     * 设置Cache prefresh configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _cachePrefresh Cache prefresh configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return OfflineCache Offline cache configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    OfflineCacheParameters GetOfflineCache() const;

                    /**
                     * 设置Offline cache configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _offlineCache Offline cache configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Smart compression configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return Compression Smart compression configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CompressionParameters GetCompression() const;

                    /**
                     * 设置Smart compression configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _compression Smart compression configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Forced https redirect configuration for access protocols.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ForceRedirectHTTPS Forced https redirect configuration for access protocols.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ForceRedirectHTTPSParameters GetForceRedirectHTTPS() const;

                    /**
                     * 设置Forced https redirect configuration for access protocols.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _forceRedirectHTTPS Forced https redirect configuration for access protocols.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HSTS HSTS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HSTSParameters GetHSTS() const;

                    /**
                     * 设置HSTS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _hSTS HSTS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return TLSConfig TLS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    TLSConfigParameters GetTLSConfig() const;

                    /**
                     * 设置TLS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _tLSConfig TLS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return OCSPStapling OCSP stapling configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    OCSPStaplingParameters GetOCSPStapling() const;

                    /**
                     * 设置OCSP stapling configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _oCSPStapling OCSP stapling configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HTTP2 HTTP/2 configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HTTP2Parameters GetHTTP2() const;

                    /**
                     * 设置HTTP/2 configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _hTTP2 HTTP/2 configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return QUIC QUIC access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    QUICParameters GetQUIC() const;

                    /**
                     * 设置QUIC access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _qUIC QUIC access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取HTTP2 origin-pull configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return UpstreamHTTP2 HTTP2 origin-pull configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2() const;

                    /**
                     * 设置HTTP2 origin-pull configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _upstreamHTTP2 HTTP2 origin-pull configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return IPv6 IPv6 access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    IPv6Parameters GetIPv6() const;

                    /**
                     * 设置IPv6 access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _iPv6 IPv6 access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return WebSocket WebSocket configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    WebSocketParameters GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _webSocket WebSocket configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取POST request transport configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return PostMaxSize POST request transport configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    PostMaxSizeParameters GetPostMaxSize() const;

                    /**
                     * 设置POST request transport configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _postMaxSize POST request transport configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Client ip origin-pull request header configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ClientIPHeader Client ip origin-pull request header configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ClientIPHeaderParameters GetClientIPHeader() const;

                    /**
                     * 设置Client ip origin-pull request header configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _clientIPHeader Client ip origin-pull request header configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Whether to carry the region information of the client ip during origin-pull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ClientIPCountry Whether to carry the region information of the client ip during origin-pull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ClientIPCountryParameters GetClientIPCountry() const;

                    /**
                     * 设置Whether to carry the region information of the client ip during origin-pull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _clientIPCountry Whether to carry the region information of the client ip during origin-pull.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Configuration of grpc support.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return Grpc Configuration of grpc support.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    GrpcParameters GetGrpc() const;

                    /**
                     * 设置Configuration of grpc support.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _grpc Configuration of grpc support.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Network Error Logging configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return NetworkErrorLogging Network Error Logging configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    NetworkErrorLoggingParameters GetNetworkErrorLogging() const;

                    /**
                     * 设置Network Error Logging configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _networkErrorLogging Network Error Logging configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Accelerate optimization and configuration in mainland china.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return AccelerateMainland Accelerate optimization and configuration in mainland china.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    AccelerateMainlandParameters GetAccelerateMainland() const;

                    /**
                     * 设置Accelerate optimization and configuration in mainland china.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _accelerateMainland Accelerate optimization and configuration in mainland china.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Standard debugging configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return StandardDebug Standard debugging configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    StandardDebugParameters GetStandardDebug() const;

                    /**
                     * 设置Standard debugging configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _standardDebug Standard debugging configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * <Intelligent acceleration configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    SmartRoutingParameters m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * Node cache expiration time configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CacheConfigParameters m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Browser cache rule configuration, which is used to set the default value of maxage and is disabled by default.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    MaxAgeParameters m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * The node cache key configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CacheKeyConfigParameters m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Cache prefresh configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CachePrefreshParameters m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * Offline cache configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    OfflineCacheParameters m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * Smart compression configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CompressionParameters m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Forced https redirect configuration for access protocols.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ForceRedirectHTTPSParameters m_forceRedirectHTTPS;
                    bool m_forceRedirectHTTPSHasBeenSet;

                    /**
                     * HSTS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HSTSParameters m_hSTS;
                    bool m_hSTSHasBeenSet;

                    /**
                     * TLS configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    TLSConfigParameters m_tLSConfig;
                    bool m_tLSConfigHasBeenSet;

                    /**
                     * OCSP stapling configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    OCSPStaplingParameters m_oCSPStapling;
                    bool m_oCSPStaplingHasBeenSet;

                    /**
                     * HTTP/2 configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HTTP2Parameters m_hTTP2;
                    bool m_hTTP2HasBeenSet;

                    /**
                     * QUIC access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    QUICParameters m_qUIC;
                    bool m_qUICHasBeenSet;

                    /**
                     * HTTP2 origin-pull configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2;
                    bool m_upstreamHTTP2HasBeenSet;

                    /**
                     * IPv6 access configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    IPv6Parameters m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * WebSocket configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    WebSocketParameters m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * POST request transport configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    PostMaxSizeParameters m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Client ip origin-pull request header configuration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ClientIPHeaderParameters m_clientIPHeader;
                    bool m_clientIPHeaderHasBeenSet;

                    /**
                     * Whether to carry the region information of the client ip during origin-pull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ClientIPCountryParameters m_clientIPCountry;
                    bool m_clientIPCountryHasBeenSet;

                    /**
                     * Configuration of grpc support.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    GrpcParameters m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * Network Error Logging configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    NetworkErrorLoggingParameters m_networkErrorLogging;
                    bool m_networkErrorLoggingHasBeenSet;

                    /**
                     * Accelerate optimization and configuration in mainland china.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    AccelerateMainlandParameters m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * Standard debugging configuration.
.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    StandardDebugParameters m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIG_H_
