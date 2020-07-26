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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAINLANDCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAINLANDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Authentication.h>
#include <tencentcloud/cdn/v20180606/model/BandwidthAlert.h>
#include <tencentcloud/cdn/v20180606/model/Cache.h>
#include <tencentcloud/cdn/v20180606/model/CacheKey.h>
#include <tencentcloud/cdn/v20180606/model/Compression.h>
#include <tencentcloud/cdn/v20180606/model/DownstreamCapping.h>
#include <tencentcloud/cdn/v20180606/model/ErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/FollowRedirect.h>
#include <tencentcloud/cdn/v20180606/model/ForceRedirect.h>
#include <tencentcloud/cdn/v20180606/model/Https.h>
#include <tencentcloud/cdn/v20180606/model/IpFilter.h>
#include <tencentcloud/cdn/v20180606/model/IpFreqLimit.h>
#include <tencentcloud/cdn/v20180606/model/MaxAge.h>
#include <tencentcloud/cdn/v20180606/model/Origin.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullOptimization.h>
#include <tencentcloud/cdn/v20180606/model/RangeOriginPull.h>
#include <tencentcloud/cdn/v20180606/model/Referer.h>
#include <tencentcloud/cdn/v20180606/model/RequestHeader.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeader.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeaderCache.h>
#include <tencentcloud/cdn/v20180606/model/Seo.h>
#include <tencentcloud/cdn/v20180606/model/StatusCodeCache.h>
#include <tencentcloud/cdn/v20180606/model/VideoSeek.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Specific configuration for domain names in the mainland China by region. UpdateDomainConfig API only supports modification of certain region configurations. A list of differences that may exist for older configurations will be provided for a compatibility check. The supported configuration list is as follows:
+ Authentication
+ BandwidthAlert
+ ErrorPage
+ IpFilter
+ Origin
+ Referer
                */
                class MainlandConfig : public AbstractModel
                {
                public:
                    MainlandConfig();
                    ~MainlandConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Authentication Timestamp hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置Timestamp hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Authentication Timestamp hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthentication(const Authentication& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取Bandwidth cap configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthAlert Bandwidth cap configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置Bandwidth cap configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param BandwidthAlert Bandwidth cap configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert);

                    /**
                     * 判断参数 BandwidthAlert 是否已赋值
                     * @return BandwidthAlert 是否已赋值
                     */
                    bool BandwidthAlertHasBeenSet() const;

                    /**
                     * 获取Cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cache Cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Cache Cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Cache configurations.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CacheKey Cache configurations.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Cache configurations.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CacheKey Cache configurations.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取Smart compression configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Compression Smart compression configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Smart compression configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Compression Smart compression configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Download speed limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DownstreamCapping Download speed limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置Download speed limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DownstreamCapping Download speed limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDownstreamCapping(const DownstreamCapping& _downstreamCapping);

                    /**
                     * 判断参数 DownstreamCapping 是否已赋值
                     * @return DownstreamCapping 是否已赋值
                     */
                    bool DownstreamCappingHasBeenSet() const;

                    /**
                     * 获取Error code redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrorPage Error code redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置Error code redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ErrorPage Error code redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrorPage(const ErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取301 and 302 automatic origin-pull follow-redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FollowRedirect 301 and 302 automatic origin-pull follow-redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301 and 302 automatic origin-pull follow-redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FollowRedirect 301 and 302 automatic origin-pull follow-redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFollowRedirect(const FollowRedirect& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取Access protocol forced redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ForceRedirect Access protocol forced redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Access protocol forced redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ForceRedirect Access protocol forced redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Https HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Https HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取IP blacklist/whitelist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpFilter IP blacklist/whitelist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP blacklist/whitelist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IpFilter IP blacklist/whitelist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpFreqLimit IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IpFreqLimit IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取Browser cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxAge Browser cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxAge Browser cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Origin server configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Origin Origin server configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Origin Origin server configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Cross-border optimization configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginPullOptimization Cross-border optimization configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置Cross-border optimization configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OriginPullOptimization Cross-border optimization configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization);

                    /**
                     * 判断参数 OriginPullOptimization 是否已赋值
                     * @return OriginPullOptimization 是否已赋值
                     */
                    bool OriginPullOptimizationHasBeenSet() const;

                    /**
                     * 获取Range GETs configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RangeOriginPull Range GETs configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range GETs configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RangeOriginPull Range GETs configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull);

                    /**
                     * 判断参数 RangeOriginPull 是否已赋值
                     * @return RangeOriginPull 是否已赋值
                     */
                    bool RangeOriginPullHasBeenSet() const;

                    /**
                     * 获取Hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Referer Hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Referer Hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReferer(const Referer& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取Origin-pull request header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RequestHeader Origin-pull request header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置Origin-pull request header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RequestHeader Origin-pull request header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRequestHeader(const RequestHeader& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseHeader Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseHeader Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取Follows origin server cache header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseHeaderCache Follows origin server cache header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置Follows origin server cache header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseHeaderCache Follows origin server cache header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache);

                    /**
                     * 判断参数 ResponseHeaderCache 是否已赋值
                     * @return ResponseHeaderCache 是否已赋值
                     */
                    bool ResponseHeaderCacheHasBeenSet() const;

                    /**
                     * 获取SEO configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Seo SEO configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Seo SEO configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSeo(const Seo& _seo);

                    /**
                     * 判断参数 Seo 是否已赋值
                     * @return Seo 是否已赋值
                     */
                    bool SeoHasBeenSet() const;

                    /**
                     * 获取Domain name service type. `web`: static acceleration; `download`: download acceleration; `media`: streaming media acceleration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceType Domain name service type. `web`: static acceleration; `download`: download acceleration; `media`: streaming media acceleration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Domain name service type. `web`: static acceleration; `download`: download acceleration; `media`: streaming media acceleration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceType Domain name service type. `web`: static acceleration; `download`: download acceleration; `media`: streaming media acceleration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Status code cache configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusCodeCache Status code cache configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置Status code cache configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StatusCodeCache Status code cache configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatusCodeCache(const StatusCodeCache& _statusCodeCache);

                    /**
                     * 判断参数 StatusCodeCache 是否已赋值
                     * @return StatusCodeCache 是否已赋值
                     */
                    bool StatusCodeCacheHasBeenSet() const;

                    /**
                     * 获取Video dragging configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoSeek Video dragging configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置Video dragging configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VideoSeek Video dragging configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVideoSeek(const VideoSeek& _videoSeek);

                    /**
                     * 判断参数 VideoSeek 是否已赋值
                     * @return VideoSeek 是否已赋值
                     */
                    bool VideoSeekHasBeenSet() const;

                private:

                    /**
                     * Timestamp hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * Bandwidth cap configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Cache configurations.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Smart compression configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Download speed limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * Error code redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * 301 and 302 automatic origin-pull follow-redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * Access protocol forced redirect configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * IP blacklist/whitelist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * Browser cache rules configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Origin server configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Cross-border optimization configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * Range GETs configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * Hotlink protection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * Origin-pull request header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Follows origin server cache header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * SEO configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * Domain name service type. `web`: static acceleration; `download`: download acceleration; `media`: streaming media acceleration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Status code cache configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * Video dragging configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAINLANDCONFIG_H_
