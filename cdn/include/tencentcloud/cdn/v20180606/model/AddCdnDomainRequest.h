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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADDCDNDOMAINREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADDCDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Origin.h>
#include <tencentcloud/cdn/v20180606/model/IpFilter.h>
#include <tencentcloud/cdn/v20180606/model/IpFreqLimit.h>
#include <tencentcloud/cdn/v20180606/model/StatusCodeCache.h>
#include <tencentcloud/cdn/v20180606/model/Compression.h>
#include <tencentcloud/cdn/v20180606/model/BandwidthAlert.h>
#include <tencentcloud/cdn/v20180606/model/RangeOriginPull.h>
#include <tencentcloud/cdn/v20180606/model/FollowRedirect.h>
#include <tencentcloud/cdn/v20180606/model/ErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/RequestHeader.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeader.h>
#include <tencentcloud/cdn/v20180606/model/DownstreamCapping.h>
#include <tencentcloud/cdn/v20180606/model/CacheKey.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeaderCache.h>
#include <tencentcloud/cdn/v20180606/model/VideoSeek.h>
#include <tencentcloud/cdn/v20180606/model/Cache.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullOptimization.h>
#include <tencentcloud/cdn/v20180606/model/Https.h>
#include <tencentcloud/cdn/v20180606/model/Authentication.h>
#include <tencentcloud/cdn/v20180606/model/Seo.h>
#include <tencentcloud/cdn/v20180606/model/ForceRedirect.h>
#include <tencentcloud/cdn/v20180606/model/Referer.h>
#include <tencentcloud/cdn/v20180606/model/MaxAge.h>
#include <tencentcloud/cdn/v20180606/model/Ipv6.h>
#include <tencentcloud/cdn/v20180606/model/SpecificConfig.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullTimeout.h>
#include <tencentcloud/cdn/v20180606/model/Tag.h>
#include <tencentcloud/cdn/v20180606/model/Ipv6Access.h>
#include <tencentcloud/cdn/v20180606/model/OfflineCache.h>
#include <tencentcloud/cdn/v20180606/model/Quic.h>
#include <tencentcloud/cdn/v20180606/model/AwsPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/OssPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/HwPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/QnPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/OthersPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/HttpsBilling.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * AddCdnDomain request structure.
                */
                class AddCdnDomainRequest : public AbstractModel
                {
                public:
                    AddCdnDomainRequest();
                    ~AddCdnDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Acceleration domain name service type
`web`: Webpage file downloads
`download`: Large file downloads
`media`: Audio and video on demand acceleration
`hybrid`: Dynamic and static content acceleration
`dynamic`: Dynamic content acceleration
                     * @return ServiceType Acceleration domain name service type
`web`: Webpage file downloads
`download`: Large file downloads
`media`: Audio and video on demand acceleration
`hybrid`: Dynamic and static content acceleration
`dynamic`: Dynamic content acceleration
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Acceleration domain name service type
`web`: Webpage file downloads
`download`: Large file downloads
`media`: Audio and video on demand acceleration
`hybrid`: Dynamic and static content acceleration
`dynamic`: Dynamic content acceleration
                     * @param _serviceType Acceleration domain name service type
`web`: Webpage file downloads
`download`: Large file downloads
`media`: Audio and video on demand acceleration
`hybrid`: Dynamic and static content acceleration
`dynamic`: Dynamic content acceleration
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

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
                     * 获取Project ID. Default value: 0, indicating `Default Project`
                     * @return ProjectId Project ID. Default value: 0, indicating `Default Project`
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Default value: 0, indicating `Default Project`
                     * @param _projectId Project ID. Default value: 0, indicating `Default Project`
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取IP blocklist/allowlist
                     * @return IpFilter IP blocklist/allowlist
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP blocklist/allowlist
                     * @param _ipFilter IP blocklist/allowlist
                     * 
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     * 
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP rate limiting
                     * @return IpFreqLimit IP rate limiting
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP rate limiting
                     * @param _ipFreqLimit IP rate limiting
                     * 
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     * 
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取Status code cache
                     * @return StatusCodeCache Status code cache
                     * 
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置Status code cache
                     * @param _statusCodeCache Status code cache
                     * 
                     */
                    void SetStatusCodeCache(const StatusCodeCache& _statusCodeCache);

                    /**
                     * 判断参数 StatusCodeCache 是否已赋值
                     * @return StatusCodeCache 是否已赋值
                     * 
                     */
                    bool StatusCodeCacheHasBeenSet() const;

                    /**
                     * 获取Smart compression
                     * @return Compression Smart compression
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Smart compression
                     * @param _compression Smart compression
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
                     * 获取Bandwidth cap configuration
                     * @return BandwidthAlert Bandwidth cap configuration
                     * 
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置Bandwidth cap configuration
                     * @param _bandwidthAlert Bandwidth cap configuration
                     * 
                     */
                    void SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert);

                    /**
                     * 判断参数 BandwidthAlert 是否已赋值
                     * @return BandwidthAlert 是否已赋值
                     * 
                     */
                    bool BandwidthAlertHasBeenSet() const;

                    /**
                     * 获取Range GETs configuration
                     * @return RangeOriginPull Range GETs configuration
                     * 
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range GETs configuration
                     * @param _rangeOriginPull Range GETs configuration
                     * 
                     */
                    void SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull);

                    /**
                     * 判断参数 RangeOriginPull 是否已赋值
                     * @return RangeOriginPull 是否已赋值
                     * 
                     */
                    bool RangeOriginPullHasBeenSet() const;

                    /**
                     * 获取301/302 origin-pull follow-redirect configuration
                     * @return FollowRedirect 301/302 origin-pull follow-redirect configuration
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 origin-pull follow-redirect configuration
                     * @param _followRedirect 301/302 origin-pull follow-redirect configuration
                     * 
                     */
                    void SetFollowRedirect(const FollowRedirect& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     * 
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取Error code redirection (in beta)
                     * @return ErrorPage Error code redirection (in beta)
                     * 
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置Error code redirection (in beta)
                     * @param _errorPage Error code redirection (in beta)
                     * 
                     */
                    void SetErrorPage(const ErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     * 
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取Request header configuration
                     * @return RequestHeader Request header configuration
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置Request header configuration
                     * @param _requestHeader Request header configuration
                     * 
                     */
                    void SetRequestHeader(const RequestHeader& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取Response header configuration
                     * @return ResponseHeader Response header configuration
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Response header configuration
                     * @param _responseHeader Response header configuration
                     * 
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     * 
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取Download speed configuration
                     * @return DownstreamCapping Download speed configuration
                     * 
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置Download speed configuration
                     * @param _downstreamCapping Download speed configuration
                     * 
                     */
                    void SetDownstreamCapping(const DownstreamCapping& _downstreamCapping);

                    /**
                     * 判断参数 DownstreamCapping 是否已赋值
                     * @return DownstreamCapping 是否已赋值
                     * 
                     */
                    bool DownstreamCappingHasBeenSet() const;

                    /**
                     * 获取Node cache key configuration
                     * @return CacheKey Node cache key configuration
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Node cache key configuration
                     * @param _cacheKey Node cache key configuration
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
                     * 获取Header cache configuration
                     * @return ResponseHeaderCache Header cache configuration
                     * 
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置Header cache configuration
                     * @param _responseHeaderCache Header cache configuration
                     * 
                     */
                    void SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache);

                    /**
                     * 判断参数 ResponseHeaderCache 是否已赋值
                     * @return ResponseHeaderCache 是否已赋值
                     * 
                     */
                    bool ResponseHeaderCacheHasBeenSet() const;

                    /**
                     * 获取Video dragging configuration
                     * @return VideoSeek Video dragging configuration
                     * 
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置Video dragging configuration
                     * @param _videoSeek Video dragging configuration
                     * 
                     */
                    void SetVideoSeek(const VideoSeek& _videoSeek);

                    /**
                     * 判断参数 VideoSeek 是否已赋值
                     * @return VideoSeek 是否已赋值
                     * 
                     */
                    bool VideoSeekHasBeenSet() const;

                    /**
                     * 获取Cache validity configuration
                     * @return Cache Cache validity configuration
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Cache validity configuration
                     * @param _cache Cache validity configuration
                     * 
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Cross-MLC-border origin-pull optimization
                     * @return OriginPullOptimization Cross-MLC-border origin-pull optimization
                     * 
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置Cross-MLC-border origin-pull optimization
                     * @param _originPullOptimization Cross-MLC-border origin-pull optimization
                     * 
                     */
                    void SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization);

                    /**
                     * 判断参数 OriginPullOptimization 是否已赋值
                     * @return OriginPullOptimization 是否已赋值
                     * 
                     */
                    bool OriginPullOptimizationHasBeenSet() const;

                    /**
                     * 获取HTTPS acceleration
                     * @return Https HTTPS acceleration
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS acceleration
                     * @param _https HTTPS acceleration
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
                     * 获取Timestamp hotlink protection
                     * @return Authentication Timestamp hotlink protection
                     * 
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置Timestamp hotlink protection
                     * @param _authentication Timestamp hotlink protection
                     * 
                     */
                    void SetAuthentication(const Authentication& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     * 
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取SEO optimization
                     * @return Seo SEO optimization
                     * 
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO optimization
                     * @param _seo SEO optimization
                     * 
                     */
                    void SetSeo(const Seo& _seo);

                    /**
                     * 判断参数 Seo 是否已赋值
                     * @return Seo 是否已赋值
                     * 
                     */
                    bool SeoHasBeenSet() const;

                    /**
                     * 获取Force redirect by access protocol
                     * @return ForceRedirect Force redirect by access protocol
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Force redirect by access protocol
                     * @param _forceRedirect Force redirect by access protocol
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
                     * 获取Referer hotlink protection
                     * @return Referer Referer hotlink protection
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer hotlink protection
                     * @param _referer Referer hotlink protection
                     * 
                     */
                    void SetReferer(const Referer& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取Browser caching (in beta)
                     * @return MaxAge Browser caching (in beta)
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser caching (in beta)
                     * @param _maxAge Browser caching (in beta)
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
                     * 获取IPv6 configuration (This feature is in beta and not generally available yet.)
                     * @return Ipv6 IPv6 configuration (This feature is in beta and not generally available yet.)
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置IPv6 configuration (This feature is in beta and not generally available yet.)
                     * @param _ipv6 IPv6 configuration (This feature is in beta and not generally available yet.)
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
                     * 获取Specific region configuration
Applicable to cases where the acceleration domain name configuration differs for regions in and outside mainland China.
                     * @return SpecificConfig Specific region configuration
Applicable to cases where the acceleration domain name configuration differs for regions in and outside mainland China.
                     * 
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置Specific region configuration
Applicable to cases where the acceleration domain name configuration differs for regions in and outside mainland China.
                     * @param _specificConfig Specific region configuration
Applicable to cases where the acceleration domain name configuration differs for regions in and outside mainland China.
                     * 
                     */
                    void SetSpecificConfig(const SpecificConfig& _specificConfig);

                    /**
                     * 判断参数 SpecificConfig 是否已赋值
                     * @return SpecificConfig 是否已赋值
                     * 
                     */
                    bool SpecificConfigHasBeenSet() const;

                    /**
                     * 获取Domain name acceleration region
mainland: acceleration inside mainland China
overseas: acceleration outside mainland China
global: global acceleration
Overseas acceleration service must be enabled to use overseas acceleration and global acceleration.
                     * @return Area Domain name acceleration region
mainland: acceleration inside mainland China
overseas: acceleration outside mainland China
global: global acceleration
Overseas acceleration service must be enabled to use overseas acceleration and global acceleration.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Domain name acceleration region
mainland: acceleration inside mainland China
overseas: acceleration outside mainland China
global: global acceleration
Overseas acceleration service must be enabled to use overseas acceleration and global acceleration.
                     * @param _area Domain name acceleration region
mainland: acceleration inside mainland China
overseas: acceleration outside mainland China
global: global acceleration
Overseas acceleration service must be enabled to use overseas acceleration and global acceleration.
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
                     * 获取Origin-pull timeout configuration
                     * @return OriginPullTimeout Origin-pull timeout configuration
                     * 
                     */
                    OriginPullTimeout GetOriginPullTimeout() const;

                    /**
                     * 设置Origin-pull timeout configuration
                     * @param _originPullTimeout Origin-pull timeout configuration
                     * 
                     */
                    void SetOriginPullTimeout(const OriginPullTimeout& _originPullTimeout);

                    /**
                     * 判断参数 OriginPullTimeout 是否已赋值
                     * @return OriginPullTimeout 是否已赋值
                     * 
                     */
                    bool OriginPullTimeoutHasBeenSet() const;

                    /**
                     * 获取Tag configuration
                     * @return Tag Tag configuration
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag configuration
                     * @param _tag Tag configuration
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Ipv6 access configuration
                     * @return Ipv6Access Ipv6 access configuration
                     * 
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置Ipv6 access configuration
                     * @param _ipv6Access Ipv6 access configuration
                     * 
                     */
                    void SetIpv6Access(const Ipv6Access& _ipv6Access);

                    /**
                     * 判断参数 Ipv6Access 是否已赋值
                     * @return Ipv6Access 是否已赋值
                     * 
                     */
                    bool Ipv6AccessHasBeenSet() const;

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
                     * 获取QUIC access, which is a paid service. You can check the product document and Billing Overview for more information.
                     * @return Quic QUIC access, which is a paid service. You can check the product document and Billing Overview for more information.
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置QUIC access, which is a paid service. You can check the product document and Billing Overview for more information.
                     * @param _quic QUIC access, which is a paid service. You can check the product document and Billing Overview for more information.
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
                     * 获取Access authentication for S3 origin
                     * @return AwsPrivateAccess Access authentication for S3 origin
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置Access authentication for S3 origin
                     * @param _awsPrivateAccess Access authentication for S3 origin
                     * 
                     */
                    void SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess);

                    /**
                     * 判断参数 AwsPrivateAccess 是否已赋值
                     * @return AwsPrivateAccess 是否已赋值
                     * 
                     */
                    bool AwsPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Access authentication for OSS origin
                     * @return OssPrivateAccess Access authentication for OSS origin
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置Access authentication for OSS origin
                     * @param _ossPrivateAccess Access authentication for OSS origin
                     * 
                     */
                    void SetOssPrivateAccess(const OssPrivateAccess& _ossPrivateAccess);

                    /**
                     * 判断参数 OssPrivateAccess 是否已赋值
                     * @return OssPrivateAccess 是否已赋值
                     * 
                     */
                    bool OssPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Origin-pull authentication for Huawei Cloud OBS origin
                     * @return HwPrivateAccess Origin-pull authentication for Huawei Cloud OBS origin
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置Origin-pull authentication for Huawei Cloud OBS origin
                     * @param _hwPrivateAccess Origin-pull authentication for Huawei Cloud OBS origin
                     * 
                     */
                    void SetHwPrivateAccess(const HwPrivateAccess& _hwPrivateAccess);

                    /**
                     * 判断参数 HwPrivateAccess 是否已赋值
                     * @return HwPrivateAccess 是否已赋值
                     * 
                     */
                    bool HwPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Origin-pull authentication for Qiniu Cloud Kodo origin
                     * @return QnPrivateAccess Origin-pull authentication for Qiniu Cloud Kodo origin
                     * 
                     */
                    QnPrivateAccess GetQnPrivateAccess() const;

                    /**
                     * 设置Origin-pull authentication for Qiniu Cloud Kodo origin
                     * @param _qnPrivateAccess Origin-pull authentication for Qiniu Cloud Kodo origin
                     * 
                     */
                    void SetQnPrivateAccess(const QnPrivateAccess& _qnPrivateAccess);

                    /**
                     * 判断参数 QnPrivateAccess 是否已赋值
                     * @return QnPrivateAccess 是否已赋值
                     * 
                     */
                    bool QnPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Origin-pull authentication for other origins
                     * @return OthersPrivateAccess Origin-pull authentication for other origins
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置Origin-pull authentication for other origins
                     * @param _othersPrivateAccess Origin-pull authentication for other origins
                     * 
                     */
                    void SetOthersPrivateAccess(const OthersPrivateAccess& _othersPrivateAccess);

                    /**
                     * 判断参数 OthersPrivateAccess 是否已赋值
                     * @return OthersPrivateAccess 是否已赋值
                     * 
                     */
                    bool OthersPrivateAccessHasBeenSet() const;

                    /**
                     * 获取HTTPS (enabled by default), which is a paid service. You can check the product document and Billing Overview for more information.
                     * @return HttpsBilling HTTPS (enabled by default), which is a paid service. You can check the product document and Billing Overview for more information.
                     * 
                     */
                    HttpsBilling GetHttpsBilling() const;

                    /**
                     * 设置HTTPS (enabled by default), which is a paid service. You can check the product document and Billing Overview for more information.
                     * @param _httpsBilling HTTPS (enabled by default), which is a paid service. You can check the product document and Billing Overview for more information.
                     * 
                     */
                    void SetHttpsBilling(const HttpsBilling& _httpsBilling);

                    /**
                     * 判断参数 HttpsBilling 是否已赋值
                     * @return HttpsBilling 是否已赋值
                     * 
                     */
                    bool HttpsBillingHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Acceleration domain name service type
`web`: Webpage file downloads
`download`: Large file downloads
`media`: Audio and video on demand acceleration
`hybrid`: Dynamic and static content acceleration
`dynamic`: Dynamic content acceleration
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Origin server configuration
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Project ID. Default value: 0, indicating `Default Project`
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * IP blocklist/allowlist
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP rate limiting
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * Status code cache
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * Smart compression
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Bandwidth cap configuration
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Range GETs configuration
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 301/302 origin-pull follow-redirect configuration
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * Error code redirection (in beta)
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * Request header configuration
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * Response header configuration
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Download speed configuration
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * Node cache key configuration
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Header cache configuration
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * Video dragging configuration
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * Cache validity configuration
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Cross-MLC-border origin-pull optimization
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * HTTPS acceleration
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Timestamp hotlink protection
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * SEO optimization
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * Force redirect by access protocol
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer hotlink protection
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * Browser caching (in beta)
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * IPv6 configuration (This feature is in beta and not generally available yet.)
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Specific region configuration
Applicable to cases where the acceleration domain name configuration differs for regions in and outside mainland China.
                     */
                    SpecificConfig m_specificConfig;
                    bool m_specificConfigHasBeenSet;

                    /**
                     * Domain name acceleration region
mainland: acceleration inside mainland China
overseas: acceleration outside mainland China
global: global acceleration
Overseas acceleration service must be enabled to use overseas acceleration and global acceleration.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Origin-pull timeout configuration
                     */
                    OriginPullTimeout m_originPullTimeout;
                    bool m_originPullTimeoutHasBeenSet;

                    /**
                     * Tag configuration
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Ipv6 access configuration
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * Offline cache
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * QUIC access, which is a paid service. You can check the product document and Billing Overview for more information.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Access authentication for S3 origin
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * Access authentication for OSS origin
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * Origin-pull authentication for Huawei Cloud OBS origin
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * Origin-pull authentication for Qiniu Cloud Kodo origin
                     */
                    QnPrivateAccess m_qnPrivateAccess;
                    bool m_qnPrivateAccessHasBeenSet;

                    /**
                     * Origin-pull authentication for other origins
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                    /**
                     * HTTPS (enabled by default), which is a paid service. You can check the product document and Billing Overview for more information.
                     */
                    HttpsBilling m_httpsBilling;
                    bool m_httpsBillingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADDCDNDOMAINREQUEST_H_
