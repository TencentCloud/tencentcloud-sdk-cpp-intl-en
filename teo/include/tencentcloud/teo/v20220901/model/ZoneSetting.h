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
                * The site configuration.
                */
                class ZoneSetting : public AbstractModel
                {
                public:
                    ZoneSetting();
                    ~ZoneSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the site
                     * @return ZoneName Name of the site
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the site
                     * @param _zoneName Name of the site
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
                     * 获取Site acceleration region. Values:
<li>`mainland`: Acceleration in the Chinese mainland.</li>
<li>`overseas`: Acceleration outside the Chinese mainland.</li>
                     * @return Area Site acceleration region. Values:
<li>`mainland`: Acceleration in the Chinese mainland.</li>
<li>`overseas`: Acceleration outside the Chinese mainland.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Site acceleration region. Values:
<li>`mainland`: Acceleration in the Chinese mainland.</li>
<li>`overseas`: Acceleration outside the Chinese mainland.</li>
                     * @param _area Site acceleration region. Values:
<li>`mainland`: Acceleration in the Chinese mainland.</li>
<li>`overseas`: Acceleration outside the Chinese mainland.</li>
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
                     * 获取Node cache key configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheKey Node cache key configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Node cache key configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cacheKey Node cache key configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The QUIC access configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quic The QUIC access configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置The QUIC access configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quic The QUIC access configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The POST transport configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PostMaxSize The POST transport configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 设置The POST transport configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _postMaxSize The POST transport configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Smart compression configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Compression Smart compression configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Smart compression configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compression Smart compression configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取HTTP2 origin-pull configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamHttp2 HTTP2 origin-pull configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 设置HTTP2 origin-pull configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamHttp2 HTTP2 origin-pull configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Force HTTPS redirect configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForceRedirect Force HTTPS redirect configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Force HTTPS redirect configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forceRedirect Force HTTPS redirect configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cache expiration time configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheConfig Cache expiration time configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置Cache expiration time configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cacheConfig Cache expiration time configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Origin Origin server configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _origin Origin server configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Smart acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SmartRouting Smart acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置Smart acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _smartRouting Smart acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Browser cache configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxAge Browser cache configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxAge Browser cache configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfflineCache The offline cache configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置The offline cache configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _offlineCache The offline cache configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebSocket WebSocket configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _webSocket WebSocket configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Origin-pull client IP header configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIpHeader Origin-pull client IP header configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ClientIpHeader GetClientIpHeader() const;

                    /**
                     * 设置Origin-pull client IP header configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientIpHeader Origin-pull client IP header configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cache prefresh configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CachePrefresh Cache prefresh configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CachePrefresh GetCachePrefresh() const;

                    /**
                     * 设置Cache prefresh configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cachePrefresh Cache prefresh configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取IPv6 access configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ipv6 IPv6 access configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置IPv6 access configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipv6 IPv6 access configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取HTTPS acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Https HTTPS acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _https HTTPS acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to carry the location information of the client IP during origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClientIpCountry Whether to carry the location information of the client IP during origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置Whether to carry the location information of the client IP during origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _clientIpCountry Whether to carry the location information of the client IP during origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Configuration of gRPC support
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Grpc Configuration of gRPC support
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Grpc GetGrpc() const;

                    /**
                     * 设置Configuration of gRPC support
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _grpc Configuration of gRPC support
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Image optimization configuration. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ImageOptimize Image optimization configuration. 
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ImageOptimize GetImageOptimize() const;

                    /**
                     * 设置Image optimization configuration. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _imageOptimize Image optimization configuration. 
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Cross-MLC-border acceleration. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AccelerateMainland Cross-MLC-border acceleration. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置Cross-MLC-border acceleration. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _accelerateMainland Cross-MLC-border acceleration. 
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Standard debugging configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StandardDebug Standard debugging configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    StandardDebug GetStandardDebug() const;

                    /**
                     * 设置Standard debugging configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _standardDebug Standard debugging configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return JITVideoProcess Just-in-time media processing configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    JITVideoProcess GetJITVideoProcess() const;

                    /**
                     * 设置Just-in-time media processing configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _jITVideoProcess Just-in-time media processing configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * Name of the site
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Site acceleration region. Values:
<li>`mainland`: Acceleration in the Chinese mainland.</li>
<li>`overseas`: Acceleration outside the Chinese mainland.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Node cache key configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * The QUIC access configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * The POST transport configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Smart compression configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * HTTP2 origin-pull configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * Force HTTPS redirect configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Cache expiration time configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * Origin server configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Smart acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * Browser cache configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * The offline cache configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * WebSocket configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Origin-pull client IP header configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ClientIpHeader m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                    /**
                     * Cache prefresh configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CachePrefresh m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * IPv6 access configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * HTTPS acceleration configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Whether to carry the location information of the client IP during origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                    /**
                     * Configuration of gRPC support
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Grpc m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * Image optimization configuration. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ImageOptimize m_imageOptimize;
                    bool m_imageOptimizeHasBeenSet;

                    /**
                     * Cross-MLC-border acceleration. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * Standard debugging configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    StandardDebug m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                    /**
                     * Just-in-time media processing configuration.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    JITVideoProcess m_jITVideoProcess;
                    bool m_jITVideoProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONESETTING_H_
