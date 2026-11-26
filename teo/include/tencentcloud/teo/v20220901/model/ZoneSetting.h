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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONESETTING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheKey.h>
#include <tencentcloud/teo/v20220901/model/Quic.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSize.h>
#include <tencentcloud/teo/v20220901/model/Compression.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHttp2.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirect.h>
#include <tencentcloud/teo/v20220901/model/CacheConfig.h>
#include <tencentcloud/teo/v20220901/model/Origin.h>
#include <tencentcloud/teo/v20220901/model/SmartRouting.h>
#include <tencentcloud/teo/v20220901/model/MaxAge.h>
#include <tencentcloud/teo/v20220901/model/OfflineCache.h>
#include <tencentcloud/teo/v20220901/model/WebSocket.h>
#include <tencentcloud/teo/v20220901/model/ClientIpHeader.h>
#include <tencentcloud/teo/v20220901/model/CachePrefresh.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>
#include <tencentcloud/teo/v20220901/model/Https.h>
#include <tencentcloud/teo/v20220901/model/ClientIpCountry.h>
#include <tencentcloud/teo/v20220901/model/Grpc.h>
#include <tencentcloud/teo/v20220901/model/NetworkErrorLogging.h>
#include <tencentcloud/teo/v20220901/model/ImageOptimize.h>
#include <tencentcloud/teo/v20220901/model/AccelerateMainland.h>
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
                * Site configuration.
                */
                class ZoneSetting : public AbstractModel
                {
                public:
                    ZoneSetting();
                    ~ZoneSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site name.
                     * @return ZoneName Site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name.
                     * @param _zoneName Site name.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Site acceleration region info. Valid values:
<li>mainland: domestic acceleration in China;</li>
<li> overseas: acceleration outside the Chinese mainland.</li>
                     * @return Area Site acceleration region info. Valid values:
<li>mainland: domestic acceleration in China;</li>
<li> overseas: acceleration outside the Chinese mainland.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Site acceleration region info. Valid values:
<li>mainland: domestic acceleration in China;</li>
<li> overseas: acceleration outside the Chinese mainland.</li>
                     * @param _area Site acceleration region info. Valid values:
<li>mainland: domestic acceleration in China;</li>
<li> overseas: acceleration outside the Chinese mainland.</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Node cache key configuration.
                     * @return CacheKey Node cache key configuration.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Node cache key configuration.
                     * @param _cacheKey Node cache key configuration.
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
                     * 获取Quic access configuration.
                     * @return Quic Quic access configuration.
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置Quic access configuration.
                     * @param _quic Quic access configuration.
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
                     * 获取HTTP POST request transmission configuration.
                     * @return PostMaxSize HTTP POST request transmission configuration.
                     * 
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 设置HTTP POST request transmission configuration.
                     * @param _postMaxSize HTTP POST request transmission configuration.
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
                     * @return Compression Intelligent compression configuration.
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Intelligent compression configuration.
                     * @param _compression Intelligent compression configuration.
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
                     * 获取Http/2 origin-pull configuration.
                     * @return UpstreamHttp2 Http/2 origin-pull configuration.
                     * 
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 设置Http/2 origin-pull configuration.
                     * @param _upstreamHttp2 Http/2 origin-pull configuration.
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
                     * 获取Access protocol mandatory Https redirection configuration.
                     * @return ForceRedirect Access protocol mandatory Https redirection configuration.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Access protocol mandatory Https redirection configuration.
                     * @param _forceRedirect Access protocol mandatory Https redirection configuration.
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
                     * 获取Cache expiration time configuration.
                     * @return CacheConfig Cache expiration time configuration.
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置Cache expiration time configuration.
                     * @param _cacheConfig Cache expiration time configuration.
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
                     * 获取Origin server configuration.
                     * @return Origin Origin server configuration.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration.
                     * @param _origin Origin server configuration.
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
                     * 获取Smart acceleration configuration.
                     * @return SmartRouting Smart acceleration configuration.
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置Smart acceleration configuration.
                     * @param _smartRouting Smart acceleration configuration.
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
                     * 获取Browser cache configuration.
                     * @return MaxAge Browser cache configuration.
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache configuration.
                     * @param _maxAge Browser cache configuration.
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
                     * @return OfflineCache Offline cache configuration.
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置Offline cache configuration.
                     * @param _offlineCache Offline cache configuration.
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
                     * 获取WebSocket configuration.
                     * @return WebSocket WebSocket configuration.
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
                     * @param _webSocket WebSocket configuration.
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
                     * 获取Client IP HTTP Request Headers configuration.
                     * @return ClientIpHeader Client IP HTTP Request Headers configuration.
                     * 
                     */
                    ClientIpHeader GetClientIpHeader() const;

                    /**
                     * 设置Client IP HTTP Request Headers configuration.
                     * @param _clientIpHeader Client IP HTTP Request Headers configuration.
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
                     * @return CachePrefresh Cache pre-refresh configuration.
                     * 
                     */
                    CachePrefresh GetCachePrefresh() const;

                    /**
                     * 设置Cache pre-refresh configuration.
                     * @param _cachePrefresh Cache pre-refresh configuration.
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
                     * @return Ipv6 Ipv6 access configuration.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 access configuration.
                     * @param _ipv6 Ipv6 access configuration.
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
                     * 获取Https acceleration configuration.
                     * @return Https Https acceleration configuration.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https acceleration configuration.
                     * @param _https Https acceleration configuration.
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
                     * 获取Configuration of whether to carry the regional information of the client IP during origin-pull.
                     * @return ClientIpCountry Configuration of whether to carry the regional information of the client IP during origin-pull.
                     * 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置Configuration of whether to carry the regional information of the client IP during origin-pull.
                     * @param _clientIpCountry Configuration of whether to carry the regional information of the client IP during origin-pull.
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
                     * 获取Grpc protocol supports configuration.
                     * @return Grpc Grpc protocol supports configuration.
                     * 
                     */
                    Grpc GetGrpc() const;

                    /**
                     * 设置Grpc protocol supports configuration.
                     * @param _grpc Grpc protocol supports configuration.
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
                     * 获取Network error log configuration.
                     * @return NetworkErrorLogging Network error log configuration.
                     * 
                     */
                    NetworkErrorLogging GetNetworkErrorLogging() const;

                    /**
                     * 设置Network error log configuration.
                     * @param _networkErrorLogging Network error log configuration.
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
                     * @return ImageOptimize Image optimization configuration.
                     * 
                     */
                    ImageOptimize GetImageOptimize() const;

                    /**
                     * 设置Image optimization configuration.
                     * @param _imageOptimize Image optimization configuration.
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
                     * 获取Acceleration optimization configuration for the Chinese mainland.
                     * @return AccelerateMainland Acceleration optimization configuration for the Chinese mainland.
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置Acceleration optimization configuration for the Chinese mainland.
                     * @param _accelerateMainland Acceleration optimization configuration for the Chinese mainland.
                     * 
                     */
                    void SetAccelerateMainland(const AccelerateMainland& _accelerateMainland);

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
                     * 获取Just-in-time media processing configuration.
                     * @return JITVideoProcess Just-in-time media processing configuration.
                     * 
                     */
                    JITVideoProcess GetJITVideoProcess() const;

                    /**
                     * 设置Just-in-time media processing configuration.
                     * @param _jITVideoProcess Just-in-time media processing configuration.
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
                     * Site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Site acceleration region info. Valid values:
<li>mainland: domestic acceleration in China;</li>
<li> overseas: acceleration outside the Chinese mainland.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Node cache key configuration.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Quic access configuration.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * HTTP POST request transmission configuration.
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Intelligent compression configuration.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Http/2 origin-pull configuration.
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * Access protocol mandatory Https redirection configuration.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Cache expiration time configuration.
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * Origin server configuration.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Smart acceleration configuration.
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * Browser cache configuration.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Offline cache configuration.
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * WebSocket configuration.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Client IP HTTP Request Headers configuration.
                     */
                    ClientIpHeader m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                    /**
                     * Cache pre-refresh configuration.
                     */
                    CachePrefresh m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * Ipv6 access configuration.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Https acceleration configuration.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Configuration of whether to carry the regional information of the client IP during origin-pull.
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                    /**
                     * Grpc protocol supports configuration.
                     */
                    Grpc m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * Network error log configuration.
                     */
                    NetworkErrorLogging m_networkErrorLogging;
                    bool m_networkErrorLoggingHasBeenSet;

                    /**
                     * Image optimization configuration.
                     */
                    ImageOptimize m_imageOptimize;
                    bool m_imageOptimizeHasBeenSet;

                    /**
                     * Acceleration optimization configuration for the Chinese mainland.
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * Standard Debug configuration.
                     */
                    StandardDebug m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                    /**
                     * Just-in-time media processing configuration.
                     */
                    JITVideoProcess m_jITVideoProcess;
                    bool m_jITVideoProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONESETTING_H_
