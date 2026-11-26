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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONESETTINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONESETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheConfig.h>
#include <tencentcloud/teo/v20220901/model/CacheKey.h>
#include <tencentcloud/teo/v20220901/model/MaxAge.h>
#include <tencentcloud/teo/v20220901/model/OfflineCache.h>
#include <tencentcloud/teo/v20220901/model/Quic.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSize.h>
#include <tencentcloud/teo/v20220901/model/Compression.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHttp2.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirect.h>
#include <tencentcloud/teo/v20220901/model/Https.h>
#include <tencentcloud/teo/v20220901/model/Origin.h>
#include <tencentcloud/teo/v20220901/model/SmartRouting.h>
#include <tencentcloud/teo/v20220901/model/WebSocket.h>
#include <tencentcloud/teo/v20220901/model/ClientIpHeader.h>
#include <tencentcloud/teo/v20220901/model/CachePrefresh.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>
#include <tencentcloud/teo/v20220901/model/ClientIpCountry.h>
#include <tencentcloud/teo/v20220901/model/Grpc.h>
#include <tencentcloud/teo/v20220901/model/NetworkErrorLogging.h>
#include <tencentcloud/teo/v20220901/model/ImageOptimize.h>
#include <tencentcloud/teo/v20220901/model/StandardDebug.h>
#include <tencentcloud/teo/v20220901/model/JITVideoProcess.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyZoneSetting request structure.
                */
                class ModifyZoneSettingRequest : public AbstractModel
                {
                public:
                    ModifyZoneSettingRequest();
                    ~ModifyZoneSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID to be changed.
                     * @return ZoneId Site ID to be changed.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID to be changed.
                     * @param _zoneId Site ID to be changed.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Cache expiration time configuration.
Leave blank to retain the original configuration.
                     * @return CacheConfig Cache expiration time configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置Cache expiration time configuration.
Leave blank to retain the original configuration.
                     * @param _cacheConfig Cache expiration time configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetCacheConfig(const CacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                    /**
                     * 获取Node cache key configuration.
Leave blank to retain the original configuration.
                     * @return CacheKey Node cache key configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Node cache key configuration.
Leave blank to retain the original configuration.
                     * @param _cacheKey Node cache key configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取Browser cache configuration.
Leave blank to retain the original configuration.
                     * @return MaxAge Browser cache configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache configuration.
Leave blank to retain the original configuration.
                     * @param _maxAge Browser cache configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Offline cache configuration.
Leave blank to retain the original configuration.
                     * @return OfflineCache Offline cache configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置Offline cache configuration.
Leave blank to retain the original configuration.
                     * @param _offlineCache Offline cache configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetOfflineCache(const OfflineCache& _offlineCache);

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     * 
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取Quic access configuration.
Leave blank to retain the original configuration.
                     * @return Quic Quic access configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置Quic access configuration.
Leave blank to retain the original configuration.
                     * @param _quic Quic access configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetQuic(const Quic& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     * 
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取Configuration for Post request transmission.
Leave blank to retain the original configuration.
                     * @return PostMaxSize Configuration for Post request transmission.
Leave blank to retain the original configuration.
                     * 
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 设置Configuration for Post request transmission.
Leave blank to retain the original configuration.
                     * @param _postMaxSize Configuration for Post request transmission.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetPostMaxSize(const PostMaxSize& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     * 
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取Intelligent compression configuration.
Leave blank to retain the original configuration.
                     * @return Compression Intelligent compression configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Intelligent compression configuration.
Leave blank to retain the original configuration.
                     * @param _compression Intelligent compression configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Http2 origin-pull configuration.
Leave blank to retain the original configuration.
                     * @return UpstreamHttp2 Http2 origin-pull configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 设置Http2 origin-pull configuration.
Leave blank to retain the original configuration.
                     * @param _upstreamHttp2 Http2 origin-pull configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetUpstreamHttp2(const UpstreamHttp2& _upstreamHttp2);

                    /**
                     * 判断参数 UpstreamHttp2 是否已赋值
                     * @return UpstreamHttp2 是否已赋值
                     * 
                     */
                    bool UpstreamHttp2HasBeenSet() const;

                    /**
                     * 获取Access protocol forcing Https redirection configuration.
Leave blank to retain the original configuration.
                     * @return ForceRedirect Access protocol forcing Https redirection configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Access protocol forcing Https redirection configuration.
Leave blank to retain the original configuration.
                     * @param _forceRedirect Access protocol forcing Https redirection configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     * 
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取Https acceleration configuration.
Leave blank to retain the original configuration.
                     * @return Https Https acceleration configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https acceleration configuration.
Leave blank to retain the original configuration.
                     * @param _https Https acceleration configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     * 
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取Origin server configuration.
Leave blank to retain the original configuration.
                     * @return Origin Origin server configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration.
Leave blank to retain the original configuration.
                     * @param _origin Origin server configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Intelligent acceleration configuration.
Leave blank to retain the original configuration.
                     * @return SmartRouting Intelligent acceleration configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置Intelligent acceleration configuration.
Leave blank to retain the original configuration.
                     * @param _smartRouting Intelligent acceleration configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetSmartRouting(const SmartRouting& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     * 
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取WebSocket configuration.
Leave blank to retain the original configuration.
                     * @return WebSocket WebSocket configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
Leave blank to retain the original configuration.
                     * @param _webSocket WebSocket configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetWebSocket(const WebSocket& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     * 
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取Client IP origin-pull request header configuration.
Leave blank to retain the original configuration.
                     * @return ClientIpHeader Client IP origin-pull request header configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    ClientIpHeader GetClientIpHeader() const;

                    /**
                     * 设置Client IP origin-pull request header configuration.
Leave blank to retain the original configuration.
                     * @param _clientIpHeader Client IP origin-pull request header configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetClientIpHeader(const ClientIpHeader& _clientIpHeader);

                    /**
                     * 判断参数 ClientIpHeader 是否已赋值
                     * @return ClientIpHeader 是否已赋值
                     * 
                     */
                    bool ClientIpHeaderHasBeenSet() const;

                    /**
                     * 获取Cache pre-refresh configuration.
Leave blank to retain the original configuration.
                     * @return CachePrefresh Cache pre-refresh configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    CachePrefresh GetCachePrefresh() const;

                    /**
                     * 设置Cache pre-refresh configuration.
Leave blank to retain the original configuration.
                     * @param _cachePrefresh Cache pre-refresh configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetCachePrefresh(const CachePrefresh& _cachePrefresh);

                    /**
                     * 判断参数 CachePrefresh 是否已赋值
                     * @return CachePrefresh 是否已赋值
                     * 
                     */
                    bool CachePrefreshHasBeenSet() const;

                    /**
                     * 获取Ipv6 access configuration.
Leave blank to retain the original configuration.
                     * @return Ipv6 Ipv6 access configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 access configuration.
Leave blank to retain the original configuration.
                     * @param _ipv6 Ipv6 access configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取Configuration of whether to carry the regional information of the client IP during origin-pull.
Leave blank to retain the original configuration.
                     * @return ClientIpCountry Configuration of whether to carry the regional information of the client IP during origin-pull.
Leave blank to retain the original configuration.
                     * 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置Configuration of whether to carry the regional information of the client IP during origin-pull.
Leave blank to retain the original configuration.
                     * @param _clientIpCountry Configuration of whether to carry the regional information of the client IP during origin-pull.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetClientIpCountry(const ClientIpCountry& _clientIpCountry);

                    /**
                     * 判断参数 ClientIpCountry 是否已赋值
                     * @return ClientIpCountry 是否已赋值
                     * 
                     */
                    bool ClientIpCountryHasBeenSet() const;

                    /**
                     * 获取Grpc protocol support configuration.
Leave blank to retain the original configuration.
                     * @return Grpc Grpc protocol support configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    Grpc GetGrpc() const;

                    /**
                     * 设置Grpc protocol support configuration.
Leave blank to retain the original configuration.
                     * @param _grpc Grpc protocol support configuration.
Leave blank to retain the original configuration.
                     * 
                     */
                    void SetGrpc(const Grpc& _grpc);

                    /**
                     * 判断参数 Grpc 是否已赋值
                     * @return Grpc 是否已赋值
                     * 
                     */
                    bool GrpcHasBeenSet() const;

                    /**
                     * 获取Network error log configuration. If this field is not specified, the original configuration will be retained.
                     * @return NetworkErrorLogging Network error log configuration. If this field is not specified, the original configuration will be retained.
                     * 
                     */
                    NetworkErrorLogging GetNetworkErrorLogging() const;

                    /**
                     * 设置Network error log configuration. If this field is not specified, the original configuration will be retained.
                     * @param _networkErrorLogging Network error log configuration. If this field is not specified, the original configuration will be retained.
                     * 
                     */
                    void SetNetworkErrorLogging(const NetworkErrorLogging& _networkErrorLogging);

                    /**
                     * 判断参数 NetworkErrorLogging 是否已赋值
                     * @return NetworkErrorLogging 是否已赋值
                     * 
                     */
                    bool NetworkErrorLoggingHasBeenSet() const;

                    /**
                     * 获取Image optimization configuration.
Not specified: disabled.
                     * @return ImageOptimize Image optimization configuration.
Not specified: disabled.
                     * 
                     */
                    ImageOptimize GetImageOptimize() const;

                    /**
                     * 设置Image optimization configuration.
Not specified: disabled.
                     * @param _imageOptimize Image optimization configuration.
Not specified: disabled.
                     * 
                     */
                    void SetImageOptimize(const ImageOptimize& _imageOptimize);

                    /**
                     * 判断参数 ImageOptimize 是否已赋值
                     * @return ImageOptimize 是否已赋值
                     * 
                     */
                    bool ImageOptimizeHasBeenSet() const;

                    /**
                     * 获取Standard Debug configuration.
                     * @return StandardDebug Standard Debug configuration.
                     * 
                     */
                    StandardDebug GetStandardDebug() const;

                    /**
                     * 设置Standard Debug configuration.
                     * @param _standardDebug Standard Debug configuration.
                     * 
                     */
                    void SetStandardDebug(const StandardDebug& _standardDebug);

                    /**
                     * 判断参数 StandardDebug 是否已赋值
                     * @return StandardDebug 是否已赋值
                     * 
                     */
                    bool StandardDebugHasBeenSet() const;

                    /**
                     * 获取Just-in-time media processing configuration. The original configuration applies if this field is not specified.
                     * @return JITVideoProcess Just-in-time media processing configuration. The original configuration applies if this field is not specified.
                     * 
                     */
                    JITVideoProcess GetJITVideoProcess() const;

                    /**
                     * 设置Just-in-time media processing configuration. The original configuration applies if this field is not specified.
                     * @param _jITVideoProcess Just-in-time media processing configuration. The original configuration applies if this field is not specified.
                     * 
                     */
                    void SetJITVideoProcess(const JITVideoProcess& _jITVideoProcess);

                    /**
                     * 判断参数 JITVideoProcess 是否已赋值
                     * @return JITVideoProcess 是否已赋值
                     * 
                     */
                    bool JITVideoProcessHasBeenSet() const;

                private:

                    /**
                     * Site ID to be changed.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Cache expiration time configuration.
Leave blank to retain the original configuration.
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * Node cache key configuration.
Leave blank to retain the original configuration.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Browser cache configuration.
Leave blank to retain the original configuration.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Offline cache configuration.
Leave blank to retain the original configuration.
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * Quic access configuration.
Leave blank to retain the original configuration.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Configuration for Post request transmission.
Leave blank to retain the original configuration.
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Intelligent compression configuration.
Leave blank to retain the original configuration.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Http2 origin-pull configuration.
Leave blank to retain the original configuration.
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * Access protocol forcing Https redirection configuration.
Leave blank to retain the original configuration.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Https acceleration configuration.
Leave blank to retain the original configuration.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Origin server configuration.
Leave blank to retain the original configuration.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Intelligent acceleration configuration.
Leave blank to retain the original configuration.
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * WebSocket configuration.
Leave blank to retain the original configuration.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Client IP origin-pull request header configuration.
Leave blank to retain the original configuration.
                     */
                    ClientIpHeader m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                    /**
                     * Cache pre-refresh configuration.
Leave blank to retain the original configuration.
                     */
                    CachePrefresh m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * Ipv6 access configuration.
Leave blank to retain the original configuration.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Configuration of whether to carry the regional information of the client IP during origin-pull.
Leave blank to retain the original configuration.
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                    /**
                     * Grpc protocol support configuration.
Leave blank to retain the original configuration.
                     */
                    Grpc m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * Network error log configuration. If this field is not specified, the original configuration will be retained.
                     */
                    NetworkErrorLogging m_networkErrorLogging;
                    bool m_networkErrorLoggingHasBeenSet;

                    /**
                     * Image optimization configuration.
Not specified: disabled.
                     */
                    ImageOptimize m_imageOptimize;
                    bool m_imageOptimizeHasBeenSet;

                    /**
                     * Standard Debug configuration.
                     */
                    StandardDebug m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                    /**
                     * Just-in-time media processing configuration. The original configuration applies if this field is not specified.
                     */
                    JITVideoProcess m_jITVideoProcess;
                    bool m_jITVideoProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONESETTINGREQUEST_H_
