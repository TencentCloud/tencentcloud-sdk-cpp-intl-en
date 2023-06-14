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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESETTINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESETTINGREQUEST_H_

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
                * ModifyZoneSetting request structure.
                */
                class ModifyZoneSettingRequest : public AbstractModel
                {
                public:
                    ModifyZoneSettingRequest();
                    ~ModifyZoneSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site to be modified
                     * @return ZoneId ID of the site to be modified
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site to be modified
                     * @param _zoneId ID of the site to be modified
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
                     * 获取Cache expiration time
                     * @return Cache Cache expiration time
                     * 
                     */
                    CacheConfig GetCache() const;

                    /**
                     * 设置Cache expiration time
                     * @param _cache Cache expiration time
                     * 
                     */
                    void SetCache(const CacheConfig& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Node cache key
                     * @return CacheKey Node cache key
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Node cache key
                     * @param _cacheKey Node cache key
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
                     * 获取Browser cache configuration
                     * @return MaxAge Browser cache configuration
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache configuration
                     * @param _maxAge Browser cache configuration
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
                     * 获取Offline cache
                     * @return OfflineCache Offline cache
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置Offline cache
                     * @param _offlineCache Offline cache
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
                     * 获取QUIC access
                     * @return Quic QUIC access
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置QUIC access
                     * @param _quic QUIC access
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
                     * 获取Maximum size of files transferred over POST request
                     * @return PostMaxSize Maximum size of files transferred over POST request
                     * 
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 设置Maximum size of files transferred over POST request
                     * @param _postMaxSize Maximum size of files transferred over POST request
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
                     * 获取Smart compression configuration
                     * @return Compression Smart compression configuration
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Smart compression configuration
                     * @param _compression Smart compression configuration
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
                     * @return UpstreamHttp2 HTTP2 origin-pull configuration
                     * 
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 设置HTTP2 origin-pull configuration
                     * @param _upstreamHttp2 HTTP2 origin-pull configuration
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
                     * @return ForceRedirect Force HTTPS redirect configuration
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Force HTTPS redirect configuration
                     * @param _forceRedirect Force HTTPS redirect configuration
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
                     * 获取HTTPS acceleration configuration
                     * @return Https HTTPS acceleration configuration
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS acceleration configuration
                     * @param _https HTTPS acceleration configuration
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
                     * 获取Origin server configuration
                     * @return Origin Origin server configuration
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration
                     * @param _origin Origin server configuration
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
                     * @return SmartRouting Smart acceleration configuration
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置Smart acceleration configuration
                     * @param _smartRouting Smart acceleration configuration
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
                     * 获取WebSocket configuration
                     * @return WebSocket WebSocket configuration
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration
                     * @param _webSocket WebSocket configuration
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
                     * @return ClientIpHeader Origin-pull client IP header configuration
                     * 
                     */
                    ClientIp GetClientIpHeader() const;

                    /**
                     * 设置Origin-pull client IP header configuration
                     * @param _clientIpHeader Origin-pull client IP header configuration
                     * 
                     */
                    void SetClientIpHeader(const ClientIp& _clientIpHeader);

                    /**
                     * 判断参数 ClientIpHeader 是否已赋值
                     * @return ClientIpHeader 是否已赋值
                     * 
                     */
                    bool ClientIpHeaderHasBeenSet() const;

                    /**
                     * 获取Cache prefresh configuration
                     * @return CachePrefresh Cache prefresh configuration
                     * 
                     */
                    CachePrefresh GetCachePrefresh() const;

                    /**
                     * 设置Cache prefresh configuration
                     * @param _cachePrefresh Cache prefresh configuration
                     * 
                     */
                    void SetCachePrefresh(const CachePrefresh& _cachePrefresh);

                    /**
                     * 判断参数 CachePrefresh 是否已赋值
                     * @return CachePrefresh 是否已赋值
                     * 
                     */
                    bool CachePrefreshHasBeenSet() const;

                private:

                    /**
                     * ID of the site to be modified
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Cache expiration time
                     */
                    CacheConfig m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Node cache key
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Browser cache configuration
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Offline cache
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * QUIC access
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Maximum size of files transferred over POST request
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Smart compression configuration
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * HTTP2 origin-pull configuration
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * Force HTTPS redirect configuration
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * HTTPS acceleration configuration
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Origin server configuration
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Smart acceleration configuration
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * WebSocket configuration
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Origin-pull client IP header configuration
                     */
                    ClientIp m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                    /**
                     * Cache prefresh configuration
                     */
                    CachePrefresh m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESETTINGREQUEST_H_
