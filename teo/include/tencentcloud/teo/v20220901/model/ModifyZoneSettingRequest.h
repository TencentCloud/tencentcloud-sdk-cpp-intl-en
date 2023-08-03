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
#include <tencentcloud/teo/v20220901/model/ImageOptimize.h>
#include <tencentcloud/teo/v20220901/model/StandardDebug.h>


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
                     * 获取Site ID to modify.
                     * @return ZoneId Site ID to modify.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID to modify.
                     * @param _zoneId Site ID to modify.
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
                     * 获取Cache expiration time configuration
The original configuration will apply if this field is not specified.
                     * @return CacheConfig Cache expiration time configuration
The original configuration will apply if this field is not specified.
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置Cache expiration time configuration
The original configuration will apply if this field is not specified.
                     * @param _cacheConfig Cache expiration time configuration
The original configuration will apply if this field is not specified.
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
                     * 获取The node cache key configuration.
The original configuration will apply if this field is not specified.
                     * @return CacheKey The node cache key configuration.
The original configuration will apply if this field is not specified.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置The node cache key configuration.
The original configuration will apply if this field is not specified.
                     * @param _cacheKey The node cache key configuration.
The original configuration will apply if this field is not specified.
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
                     * 获取The browser cache configuration.
The original configuration will apply if this field is not specified.
                     * @return MaxAge The browser cache configuration.
The original configuration will apply if this field is not specified.
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置The browser cache configuration.
The original configuration will apply if this field is not specified.
                     * @param _maxAge The browser cache configuration.
The original configuration will apply if this field is not specified.
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
                     * 获取The offline cache configuration.
The original configuration will apply if this field is not specified.
                     * @return OfflineCache The offline cache configuration.
The original configuration will apply if this field is not specified.
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置The offline cache configuration.
The original configuration will apply if this field is not specified.
                     * @param _offlineCache The offline cache configuration.
The original configuration will apply if this field is not specified.
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
                     * 获取QUIC access configuration. 
The original configuration will apply if it is not specified.
                     * @return Quic QUIC access configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置QUIC access configuration. 
The original configuration will apply if it is not specified.
                     * @param _quic QUIC access configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取POST transport configuration. 
The original configuration will apply if it is not specified.
                     * @return PostMaxSize POST transport configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 设置POST transport configuration. 
The original configuration will apply if it is not specified.
                     * @param _postMaxSize POST transport configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取The smart compression configuration.
The original configuration will apply if this field is not specified.
                     * @return Compression The smart compression configuration.
The original configuration will apply if this field is not specified.
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置The smart compression configuration.
The original configuration will apply if this field is not specified.
                     * @param _compression The smart compression configuration.
The original configuration will apply if this field is not specified.
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
                     * 获取HTTP2 origin-pull configuration. 
The original configuration will apply if it is not specified.
                     * @return UpstreamHttp2 HTTP2 origin-pull configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 设置HTTP2 origin-pull configuration. 
The original configuration will apply if it is not specified.
                     * @param _upstreamHttp2 HTTP2 origin-pull configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取Force HTTPS redirect configuration. 
The original configuration will apply if it is not specified.
                     * @return ForceRedirect Force HTTPS redirect configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Force HTTPS redirect configuration. 
The original configuration will apply if it is not specified.
                     * @param _forceRedirect Force HTTPS redirect configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取HTTPS acceleration configuration. 
The original configuration will apply if it is not specified.
                     * @return Https HTTPS acceleration configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS acceleration configuration. 
The original configuration will apply if it is not specified.
                     * @param _https HTTPS acceleration configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取The origin server configuration.
The original configuration will apply if this field is not specified.
                     * @return Origin The origin server configuration.
The original configuration will apply if this field is not specified.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置The origin server configuration.
The original configuration will apply if this field is not specified.
                     * @param _origin The origin server configuration.
The original configuration will apply if this field is not specified.
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
                     * 获取The smart acceleration configuration.
The original configuration will apply if this field is not specified.
                     * @return SmartRouting The smart acceleration configuration.
The original configuration will apply if this field is not specified.
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置The smart acceleration configuration.
The original configuration will apply if this field is not specified.
                     * @param _smartRouting The smart acceleration configuration.
The original configuration will apply if this field is not specified.
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
The original configuration will apply if it is not specified.
                     * @return WebSocket WebSocket configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration. 
The original configuration will apply if it is not specified.
                     * @param _webSocket WebSocket configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取Origin-pull client IP header configuration. 
The original configuration will apply if it is not specified.
                     * @return ClientIpHeader Origin-pull client IP header configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    ClientIpHeader GetClientIpHeader() const;

                    /**
                     * 设置Origin-pull client IP header configuration. 
The original configuration will apply if it is not specified.
                     * @param _clientIpHeader Origin-pull client IP header configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取The cache prefresh configuration.
The original configuration will apply if this field is not specified.
                     * @return CachePrefresh The cache prefresh configuration.
The original configuration will apply if this field is not specified.
                     * 
                     */
                    CachePrefresh GetCachePrefresh() const;

                    /**
                     * 设置The cache prefresh configuration.
The original configuration will apply if this field is not specified.
                     * @param _cachePrefresh The cache prefresh configuration.
The original configuration will apply if this field is not specified.
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
The original configuration will apply if it is not specified.
                     * @return Ipv6 Ipv6 access configuration. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 access configuration. 
The original configuration will apply if it is not specified.
                     * @param _ipv6 Ipv6 access configuration. 
The original configuration will apply if it is not specified.
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
                     * 获取Whether to carry the location information of the client IP during origin-pull. 
The original configuration will apply if it is not specified.
                     * @return ClientIpCountry Whether to carry the location information of the client IP during origin-pull. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置Whether to carry the location information of the client IP during origin-pull. 
The original configuration will apply if it is not specified.
                     * @param _clientIpCountry Whether to carry the location information of the client IP during origin-pull. 
The original configuration will apply if it is not specified.
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
                     * 获取Configuration of gRPC support. 
The original configuration will apply if it is not specified.
                     * @return Grpc Configuration of gRPC support. 
The original configuration will apply if it is not specified.
                     * 
                     */
                    Grpc GetGrpc() const;

                    /**
                     * 设置Configuration of gRPC support. 
The original configuration will apply if it is not specified.
                     * @param _grpc Configuration of gRPC support. 
The original configuration will apply if it is not specified.
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
                     * 获取Image optimization. 
It is disabled if this parameter is not specified.
                     * @return ImageOptimize Image optimization. 
It is disabled if this parameter is not specified.
                     * 
                     */
                    ImageOptimize GetImageOptimize() const;

                    /**
                     * 设置Image optimization. 
It is disabled if this parameter is not specified.
                     * @param _imageOptimize Image optimization. 
It is disabled if this parameter is not specified.
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
                     * 获取
                     * @return StandardDebug 
                     * 
                     */
                    StandardDebug GetStandardDebug() const;

                    /**
                     * 设置
                     * @param _standardDebug 
                     * 
                     */
                    void SetStandardDebug(const StandardDebug& _standardDebug);

                    /**
                     * 判断参数 StandardDebug 是否已赋值
                     * @return StandardDebug 是否已赋值
                     * 
                     */
                    bool StandardDebugHasBeenSet() const;

                private:

                    /**
                     * Site ID to modify.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Cache expiration time configuration
The original configuration will apply if this field is not specified.
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * The node cache key configuration.
The original configuration will apply if this field is not specified.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * The browser cache configuration.
The original configuration will apply if this field is not specified.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * The offline cache configuration.
The original configuration will apply if this field is not specified.
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * QUIC access configuration. 
The original configuration will apply if it is not specified.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * POST transport configuration. 
The original configuration will apply if it is not specified.
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * The smart compression configuration.
The original configuration will apply if this field is not specified.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * HTTP2 origin-pull configuration. 
The original configuration will apply if it is not specified.
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * Force HTTPS redirect configuration. 
The original configuration will apply if it is not specified.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * HTTPS acceleration configuration. 
The original configuration will apply if it is not specified.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * The origin server configuration.
The original configuration will apply if this field is not specified.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * The smart acceleration configuration.
The original configuration will apply if this field is not specified.
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * WebSocket configuration. 
The original configuration will apply if it is not specified.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Origin-pull client IP header configuration. 
The original configuration will apply if it is not specified.
                     */
                    ClientIpHeader m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                    /**
                     * The cache prefresh configuration.
The original configuration will apply if this field is not specified.
                     */
                    CachePrefresh m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * Ipv6 access configuration. 
The original configuration will apply if it is not specified.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Whether to carry the location information of the client IP during origin-pull. 
The original configuration will apply if it is not specified.
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                    /**
                     * Configuration of gRPC support. 
The original configuration will apply if it is not specified.
                     */
                    Grpc m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * Image optimization. 
It is disabled if this parameter is not specified.
                     */
                    ImageOptimize m_imageOptimize;
                    bool m_imageOptimizeHasBeenSet;

                    /**
                     * 
                     */
                    StandardDebug m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONESETTINGREQUEST_H_
