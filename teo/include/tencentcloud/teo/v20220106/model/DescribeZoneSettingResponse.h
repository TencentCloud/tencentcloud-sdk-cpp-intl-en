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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESETTINGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/CacheConfig.h>
#include <tencentcloud/teo/v20220106/model/CacheKey.h>
#include <tencentcloud/teo/v20220106/model/MaxAge.h>
#include <tencentcloud/teo/v20220106/model/OfflineCache.h>
#include <tencentcloud/teo/v20220106/model/Quic.h>
#include <tencentcloud/teo/v20220106/model/PostMaxSize.h>
#include <tencentcloud/teo/v20220106/model/Compression.h>
#include <tencentcloud/teo/v20220106/model/UpstreamHttp2.h>
#include <tencentcloud/teo/v20220106/model/ForceRedirect.h>
#include <tencentcloud/teo/v20220106/model/Https.h>
#include <tencentcloud/teo/v20220106/model/Origin.h>
#include <tencentcloud/teo/v20220106/model/SmartRouting.h>
#include <tencentcloud/teo/v20220106/model/WebSocket.h>
#include <tencentcloud/teo/v20220106/model/ClientIp.h>
#include <tencentcloud/teo/v20220106/model/CachePrefresh.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeZoneSetting response structure.
                */
                class DescribeZoneSettingResponse : public AbstractModel
                {
                public:
                    DescribeZoneSettingResponse();
                    ~DescribeZoneSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cache expiration time configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Cache Cache expiration time configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfig GetCache() const;

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Node cache key configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CacheKey Node cache key configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取Browser cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MaxAge Browser cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Offline cache
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OfflineCache Offline cache
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取QUIC access
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Quic QUIC access
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Quic GetQuic() const;

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取POST transport configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PostMaxSize POST transport configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取Smart compression configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Compression Smart compression configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Compression GetCompression() const;

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取HTTP2 origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UpstreamHttp2 HTTP2 origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 判断参数 UpstreamHttp2 是否已赋值
                     * @return UpstreamHttp2 是否已赋值
                     */
                    bool UpstreamHttp2HasBeenSet() const;

                    /**
                     * 获取Force HTTPS redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ForceRedirect Force HTTPS redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取HTTPS acceleration configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Https HTTPS acceleration configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Https GetHttps() const;

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取Origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Origin Origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Origin GetOrigin() const;

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Dynamic acceleration configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SmartRouting Dynamic acceleration configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Domain name of the site
                     * @return Zone Domain name of the site
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return WebSocket WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取Origin-pull client IP header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClientIpHeader Origin-pull client IP header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ClientIp GetClientIpHeader() const;

                    /**
                     * 判断参数 ClientIpHeader 是否已赋值
                     * @return ClientIpHeader 是否已赋值
                     */
                    bool ClientIpHeaderHasBeenSet() const;

                    /**
                     * 获取
                     * @return CachePrefresh 
                     */
                    CachePrefresh GetCachePrefresh() const;

                    /**
                     * 判断参数 CachePrefresh 是否已赋值
                     * @return CachePrefresh 是否已赋值
                     */
                    bool CachePrefreshHasBeenSet() const;

                private:

                    /**
                     * Cache expiration time configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfig m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Node cache key configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Browser cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Offline cache
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * QUIC access
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * POST transport configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Smart compression configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * HTTP2 origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * Force HTTPS redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * HTTPS acceleration configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Dynamic acceleration configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain name of the site
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Origin-pull client IP header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ClientIp m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                    /**
                     * 
                     */
                    CachePrefresh m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESETTINGRESPONSE_H_
