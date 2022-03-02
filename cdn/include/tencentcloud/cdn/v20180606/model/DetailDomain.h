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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
#include <tencentcloud/cdn/v20180606/model/Compatibility.h>
#include <tencentcloud/cdn/v20180606/model/SpecificConfig.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullTimeout.h>
#include <tencentcloud/cdn/v20180606/model/AwsPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/SecurityConfig.h>
#include <tencentcloud/cdn/v20180606/model/ImageOptimization.h>
#include <tencentcloud/cdn/v20180606/model/UserAgentFilter.h>
#include <tencentcloud/cdn/v20180606/model/AccessControl.h>
#include <tencentcloud/cdn/v20180606/model/UrlRedirect.h>
#include <tencentcloud/cdn/v20180606/model/Tag.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/OriginAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/Ipv6Access.h>
#include <tencentcloud/cdn/v20180606/model/AdvanceConfig.h>
#include <tencentcloud/cdn/v20180606/model/OfflineCache.h>
#include <tencentcloud/cdn/v20180606/model/OriginCombine.h>
#include <tencentcloud/cdn/v20180606/model/PostSize.h>
#include <tencentcloud/cdn/v20180606/model/Quic.h>
#include <tencentcloud/cdn/v20180606/model/OssPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/WebSocket.h>
#include <tencentcloud/cdn/v20180606/model/RemoteAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/ShareCname.h>
#include <tencentcloud/cdn/v20180606/model/RuleEngine.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Complete acceleration domain configuration information
                */
                class DetailDomain : public AbstractModel
                {
                public:
                    DetailDomain();
                    ~DetailDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name ID
                     * @return ResourceId Domain name ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Domain name ID
                     * @param ResourceId Domain name ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud account ID
                     * @return AppId Tencent Cloud account ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tencent Cloud account ID
                     * @param AppId Tencent Cloud account ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Acceleration domain name
                     * @return Domain Acceleration domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Acceleration domain name
                     * @param Domain Acceleration domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取CNAME address of domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cname CNAME address of domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME address of domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Cname CNAME address of domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Acceleration service status
rejected: the domain name is rejected due to expiration/deregistration of its ICP filing
processing: deploying
online: activated
offline: disabled
                     * @return Status Acceleration service status
rejected: the domain name is rejected due to expiration/deregistration of its ICP filing
processing: deploying
online: activated
offline: disabled
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Acceleration service status
rejected: the domain name is rejected due to expiration/deregistration of its ICP filing
processing: deploying
online: activated
offline: disabled
                     * @param Status Acceleration service status
rejected: the domain name is rejected due to expiration/deregistration of its ICP filing
processing: deploying
online: activated
offline: disabled
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Project ID, which can be viewed on the Tencent Cloud project management page
                     * @return ProjectId Project ID, which can be viewed on the Tencent Cloud project management page
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID, which can be viewed on the Tencent Cloud project management page
                     * @param ProjectId Project ID, which can be viewed on the Tencent Cloud project management page
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

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
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Acceleration domain name service type
`web`: Webpage file downloads
`download`: Large file downloads
`media`: Audio and video on demand acceleration
`hybrid`: Dynamic and static content acceleration
`dynamic`: Dynamic content acceleration
                     * @param ServiceType Acceleration domain name service type
`web`: Webpage file downloads
`download`: Large file downloads
`media`: Audio and video on demand acceleration
`hybrid`: Dynamic and static content acceleration
`dynamic`: Dynamic content acceleration
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Domain name creation time
                     * @return CreateTime Domain name creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Domain name creation time
                     * @param CreateTime Domain name creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of domain name
                     * @return UpdateTime Last modified time of domain name
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of domain name
                     * @param UpdateTime Last modified time of domain name
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Origin server configuration
                     * @return Origin Origin server configuration
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration
                     * @param Origin Origin server configuration
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取IP blacklist/whitelist configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpFilter IP blacklist/whitelist configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP blacklist/whitelist configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IpFilter IP blacklist/whitelist configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP access frequency limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpFreqLimit IP access frequency limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP access frequency limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IpFreqLimit IP access frequency limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取Status code cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusCodeCache Status code cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置Status code cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StatusCodeCache Status code cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatusCodeCache(const StatusCodeCache& _statusCodeCache);

                    /**
                     * 判断参数 StatusCodeCache 是否已赋值
                     * @return StatusCodeCache 是否已赋值
                     */
                    bool StatusCodeCacheHasBeenSet() const;

                    /**
                     * 获取Smart compression configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Compression Smart compression configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Smart compression configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Compression Smart compression configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Bandwidth cap configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthAlert Bandwidth cap configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置Bandwidth cap configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param BandwidthAlert Bandwidth cap configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert);

                    /**
                     * 判断参数 BandwidthAlert 是否已赋值
                     * @return BandwidthAlert 是否已赋值
                     */
                    bool BandwidthAlertHasBeenSet() const;

                    /**
                     * 获取Range GETs configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RangeOriginPull Range GETs configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range GETs configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RangeOriginPull Range GETs configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull);

                    /**
                     * 判断参数 RangeOriginPull 是否已赋值
                     * @return RangeOriginPull 是否已赋值
                     */
                    bool RangeOriginPullHasBeenSet() const;

                    /**
                     * 获取301/302 origin-pull follow-redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FollowRedirect 301/302 origin-pull follow-redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 origin-pull follow-redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FollowRedirect 301/302 origin-pull follow-redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFollowRedirect(const FollowRedirect& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取Configuration of custom error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ErrorPage Configuration of custom error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置Configuration of custom error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ErrorPage Configuration of custom error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetErrorPage(const ErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取Custom request header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RequestHeader Custom request header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置Custom request header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RequestHeader Custom request header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRequestHeader(const RequestHeader& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取Custom response header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseHeader Custom response header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Custom response header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseHeader Custom response header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取Single-link downstream speed limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DownstreamCapping Single-link downstream speed limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置Single-link downstream speed limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DownstreamCapping Single-link downstream speed limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDownstreamCapping(const DownstreamCapping& _downstreamCapping);

                    /**
                     * 判断参数 DownstreamCapping 是否已赋值
                     * @return DownstreamCapping 是否已赋值
                     */
                    bool DownstreamCappingHasBeenSet() const;

                    /**
                     * 获取Configuration of cache with/without parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CacheKey Configuration of cache with/without parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Configuration of cache with/without parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CacheKey Configuration of cache with/without parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取Origin server header cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseHeaderCache Origin server header cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置Origin server header cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseHeaderCache Origin server header cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache);

                    /**
                     * 判断参数 ResponseHeaderCache 是否已赋值
                     * @return ResponseHeaderCache 是否已赋值
                     */
                    bool ResponseHeaderCacheHasBeenSet() const;

                    /**
                     * 获取Video dragging configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoSeek Video dragging configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置Video dragging configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VideoSeek Video dragging configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVideoSeek(const VideoSeek& _videoSeek);

                    /**
                     * 判断参数 VideoSeek 是否已赋值
                     * @return VideoSeek 是否已赋值
                     */
                    bool VideoSeekHasBeenSet() const;

                    /**
                     * 获取Node cache expiration rule configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cache Node cache expiration rule configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Node cache expiration rule configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Cache Node cache expiration rule configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Cross-border linkage optimization configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginPullOptimization Cross-border linkage optimization configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置Cross-border linkage optimization configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OriginPullOptimization Cross-border linkage optimization configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization);

                    /**
                     * 判断参数 OriginPullOptimization 是否已赋值
                     * @return OriginPullOptimization 是否已赋值
                     */
                    bool OriginPullOptimizationHasBeenSet() const;

                    /**
                     * 获取HTTPS acceleration configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Https HTTPS acceleration configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS acceleration configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Https HTTPS acceleration configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Authentication Timestamp hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置Timestamp hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Authentication Timestamp hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthentication(const Authentication& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取SEO configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Seo SEO configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Seo SEO configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSeo(const Seo& _seo);

                    /**
                     * 判断参数 Seo 是否已赋值
                     * @return Seo 是否已赋值
                     */
                    bool SeoHasBeenSet() const;

                    /**
                     * 获取Domain name block status
normal: normal
overdue: the domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
malicious: the acceleration service has been forcibly disabled due to detection of malicious behavior.
ddos: the acceleration service has been disabled due to large-scale DDoS attacks to the domain name
idle: no operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
unlicensed: the acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
capping: the configured upper limit for bandwidth has been reached.
readonly: the domain name has a special configuration and has been locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Disable Domain name block status
normal: normal
overdue: the domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
malicious: the acceleration service has been forcibly disabled due to detection of malicious behavior.
ddos: the acceleration service has been disabled due to large-scale DDoS attacks to the domain name
idle: no operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
unlicensed: the acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
capping: the configured upper limit for bandwidth has been reached.
readonly: the domain name has a special configuration and has been locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置Domain name block status
normal: normal
overdue: the domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
malicious: the acceleration service has been forcibly disabled due to detection of malicious behavior.
ddos: the acceleration service has been disabled due to large-scale DDoS attacks to the domain name
idle: no operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
unlicensed: the acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
capping: the configured upper limit for bandwidth has been reached.
readonly: the domain name has a special configuration and has been locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Disable Domain name block status
normal: normal
overdue: the domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
malicious: the acceleration service has been forcibly disabled due to detection of malicious behavior.
ddos: the acceleration service has been disabled due to large-scale DDoS attacks to the domain name
idle: no operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
unlicensed: the acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
capping: the configured upper limit for bandwidth has been reached.
readonly: the domain name has a special configuration and has been locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取Access protocol forced redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ForceRedirect Access protocol forced redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Access protocol forced redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ForceRedirect Access protocol forced redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取Referer hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Referer Referer hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Referer Referer hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReferer(const Referer& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取Browser cache expiration rule configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxAge Browser cache expiration rule configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache expiration rule configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxAge Browser cache expiration rule configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取IPv6 origin-pull configuration (in beta)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ipv6 IPv6 origin-pull configuration (in beta)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置IPv6 origin-pull configuration (in beta)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Ipv6 IPv6 origin-pull configuration (in beta)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取Backwards compatibility configuration (compatibility field for internal use)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Compatibility Backwards compatibility configuration (compatibility field for internal use)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Compatibility GetCompatibility() const;

                    /**
                     * 设置Backwards compatibility configuration (compatibility field for internal use)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Compatibility Backwards compatibility configuration (compatibility field for internal use)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompatibility(const Compatibility& _compatibility);

                    /**
                     * 判断参数 Compatibility 是否已赋值
                     * @return Compatibility 是否已赋值
                     */
                    bool CompatibilityHasBeenSet() const;

                    /**
                     * 获取Region-specific configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SpecificConfig Region-specific configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置Region-specific configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SpecificConfig Region-specific configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSpecificConfig(const SpecificConfig& _specificConfig);

                    /**
                     * 判断参数 SpecificConfig 是否已赋值
                     * @return SpecificConfig 是否已赋值
                     */
                    bool SpecificConfigHasBeenSet() const;

                    /**
                     * 获取Acceleration region
mainland: acceleration in Mainland China
overseas: acceleration outside Mainland China
global: global acceleration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Area Acceleration region
mainland: acceleration in Mainland China
overseas: acceleration outside Mainland China
global: global acceleration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region
mainland: acceleration in Mainland China
overseas: acceleration outside Mainland China
global: global acceleration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Area Acceleration region
mainland: acceleration in Mainland China
overseas: acceleration outside Mainland China
global: global acceleration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Domain name lock status
normal: not locked
mainland: locked in Mainland China
overseas: locked outside Mainland China
global: locked globally
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Readonly Domain name lock status
normal: not locked
mainland: locked in Mainland China
overseas: locked outside Mainland China
global: locked globally
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置Domain name lock status
normal: not locked
mainland: locked in Mainland China
overseas: locked outside Mainland China
global: locked globally
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Readonly Domain name lock status
normal: not locked
mainland: locked in Mainland China
overseas: locked outside Mainland China
global: locked globally
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReadonly(const std::string& _readonly);

                    /**
                     * 判断参数 Readonly 是否已赋值
                     * @return Readonly 是否已赋值
                     */
                    bool ReadonlyHasBeenSet() const;

                    /**
                     * 获取Origin-pull timeout configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginPullTimeout Origin-pull timeout configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OriginPullTimeout GetOriginPullTimeout() const;

                    /**
                     * 设置Origin-pull timeout configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OriginPullTimeout Origin-pull timeout configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginPullTimeout(const OriginPullTimeout& _originPullTimeout);

                    /**
                     * 判断参数 OriginPullTimeout 是否已赋值
                     * @return OriginPullTimeout 是否已赋值
                     */
                    bool OriginPullTimeoutHasBeenSet() const;

                    /**
                     * 获取S3 bucket origin access authentication configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AwsPrivateAccess S3 bucket origin access authentication configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置S3 bucket origin access authentication configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AwsPrivateAccess S3 bucket origin access authentication configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess);

                    /**
                     * 判断参数 AwsPrivateAccess 是否已赋值
                     * @return AwsPrivateAccess 是否已赋值
                     */
                    bool AwsPrivateAccessHasBeenSet() const;

                    /**
                     * 获取SCDN configuration
                     * @return SecurityConfig SCDN configuration
                     */
                    SecurityConfig GetSecurityConfig() const;

                    /**
                     * 设置SCDN configuration
                     * @param SecurityConfig SCDN configuration
                     */
                    void SetSecurityConfig(const SecurityConfig& _securityConfig);

                    /**
                     * 判断参数 SecurityConfig 是否已赋值
                     * @return SecurityConfig 是否已赋值
                     */
                    bool SecurityConfigHasBeenSet() const;

                    /**
                     * 获取Image Optimization configuration
                     * @return ImageOptimization Image Optimization configuration
                     */
                    ImageOptimization GetImageOptimization() const;

                    /**
                     * 设置Image Optimization configuration
                     * @param ImageOptimization Image Optimization configuration
                     */
                    void SetImageOptimization(const ImageOptimization& _imageOptimization);

                    /**
                     * 判断参数 ImageOptimization 是否已赋值
                     * @return ImageOptimization 是否已赋值
                     */
                    bool ImageOptimizationHasBeenSet() const;

                    /**
                     * 获取`UA` blocklist/allowlist configuration
                     * @return UserAgentFilter `UA` blocklist/allowlist configuration
                     */
                    UserAgentFilter GetUserAgentFilter() const;

                    /**
                     * 设置`UA` blocklist/allowlist configuration
                     * @param UserAgentFilter `UA` blocklist/allowlist configuration
                     */
                    void SetUserAgentFilter(const UserAgentFilter& _userAgentFilter);

                    /**
                     * 判断参数 UserAgentFilter 是否已赋值
                     * @return UserAgentFilter 是否已赋值
                     */
                    bool UserAgentFilterHasBeenSet() const;

                    /**
                     * 获取Access control
                     * @return AccessControl Access control
                     */
                    AccessControl GetAccessControl() const;

                    /**
                     * 设置Access control
                     * @param AccessControl Access control
                     */
                    void SetAccessControl(const AccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取Whether to support advanced configuration items
on: supported
off: not supported
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Advance Whether to support advanced configuration items
on: supported
off: not supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAdvance() const;

                    /**
                     * 设置Whether to support advanced configuration items
on: supported
off: not supported
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Advance Whether to support advanced configuration items
on: supported
off: not supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdvance(const std::string& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取URL redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UrlRedirect URL redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    UrlRedirect GetUrlRedirect() const;

                    /**
                     * 设置URL redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UrlRedirect URL redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUrlRedirect(const UrlRedirect& _urlRedirect);

                    /**
                     * 判断参数 UrlRedirect 是否已赋值
                     * @return UrlRedirect 是否已赋值
                     */
                    bool UrlRedirectHasBeenSet() const;

                    /**
                     * 获取Access port configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccessPort Access port configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetAccessPort() const;

                    /**
                     * 设置Access port configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AccessPort Access port configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccessPort(const std::vector<int64_t>& _accessPort);

                    /**
                     * 判断参数 AccessPort 是否已赋值
                     * @return AccessPort 是否已赋值
                     */
                    bool AccessPortHasBeenSet() const;

                    /**
                     * 获取Tag configuration
Note: this field may return null, indicating that no valid value is obtained.
                     * @return Tag Tag configuration
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag configuration
Note: this field may return null, indicating that no valid value is obtained.
                     * @param Tag Tag configuration
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AdvancedAuthentication Timestamp hotlink protection advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthentication GetAdvancedAuthentication() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AdvancedAuthentication Timestamp hotlink protection advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAdvancedAuthentication(const AdvancedAuthentication& _advancedAuthentication);

                    /**
                     * 判断参数 AdvancedAuthentication 是否已赋值
                     * @return AdvancedAuthentication 是否已赋值
                     */
                    bool AdvancedAuthenticationHasBeenSet() const;

                    /**
                     * 获取Origin-pull authentication advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginAuthentication Origin-pull authentication advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OriginAuthentication GetOriginAuthentication() const;

                    /**
                     * 设置Origin-pull authentication advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param OriginAuthentication Origin-pull authentication advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOriginAuthentication(const OriginAuthentication& _originAuthentication);

                    /**
                     * 判断参数 OriginAuthentication 是否已赋值
                     * @return OriginAuthentication 是否已赋值
                     */
                    bool OriginAuthenticationHasBeenSet() const;

                    /**
                     * 获取IPv6 access configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ipv6Access IPv6 access configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置IPv6 access configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Ipv6Access IPv6 access configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetIpv6Access(const Ipv6Access& _ipv6Access);

                    /**
                     * 判断参数 Ipv6Access 是否已赋值
                     * @return Ipv6Access 是否已赋值
                     */
                    bool Ipv6AccessHasBeenSet() const;

                    /**
                     * 获取Advanced configuration settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AdvanceSet Advanced configuration settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvanceConfig> GetAdvanceSet() const;

                    /**
                     * 设置Advanced configuration settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AdvanceSet Advanced configuration settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAdvanceSet(const std::vector<AdvanceConfig>& _advanceSet);

                    /**
                     * 判断参数 AdvanceSet 是否已赋值
                     * @return AdvanceSet 是否已赋值
                     */
                    bool AdvanceSetHasBeenSet() const;

                    /**
                     * 获取Offline cache (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OfflineCache Offline cache (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置Offline cache (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param OfflineCache Offline cache (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOfflineCache(const OfflineCache& _offlineCache);

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取Merging origin-pull requests (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginCombine Merging origin-pull requests (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OriginCombine GetOriginCombine() const;

                    /**
                     * 设置Merging origin-pull requests (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param OriginCombine Merging origin-pull requests (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOriginCombine(const OriginCombine& _originCombine);

                    /**
                     * 判断参数 OriginCombine 是否已赋值
                     * @return OriginCombine 是否已赋值
                     */
                    bool OriginCombineHasBeenSet() const;

                    /**
                     * 获取POST request configuration item
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PostMaxSize POST request configuration item
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    PostSize GetPostMaxSize() const;

                    /**
                     * 设置POST request configuration item
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PostMaxSize POST request configuration item
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPostMaxSize(const PostSize& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取QUIC configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Quic QUIC configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置QUIC configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Quic QUIC configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetQuic(const Quic& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取Access authentication for OSS origin
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OssPrivateAccess Access authentication for OSS origin
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置Access authentication for OSS origin
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param OssPrivateAccess Access authentication for OSS origin
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOssPrivateAccess(const OssPrivateAccess& _ossPrivateAccess);

                    /**
                     * 判断参数 OssPrivateAccess 是否已赋值
                     * @return OssPrivateAccess 是否已赋值
                     */
                    bool OssPrivateAccessHasBeenSet() const;

                    /**
                     * 获取WebSocket configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WebSocket WebSocket configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param WebSocket WebSocket configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetWebSocket(const WebSocket& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取Remote authentication configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RemoteAuthentication Remote authentication configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RemoteAuthentication GetRemoteAuthentication() const;

                    /**
                     * 设置Remote authentication configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RemoteAuthentication Remote authentication configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRemoteAuthentication(const RemoteAuthentication& _remoteAuthentication);

                    /**
                     * 判断参数 RemoteAuthentication 是否已赋值
                     * @return RemoteAuthentication 是否已赋值
                     */
                    bool RemoteAuthenticationHasBeenSet() const;

                    /**
                     * 获取Shared CNAME configuration (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ShareCname Shared CNAME configuration (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ShareCname GetShareCname() const;

                    /**
                     * 设置Shared CNAME configuration (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ShareCname Shared CNAME configuration (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetShareCname(const ShareCname& _shareCname);

                    /**
                     * 判断参数 ShareCname 是否已赋值
                     * @return ShareCname 是否已赋值
                     */
                    bool ShareCnameHasBeenSet() const;

                    /**
                     * 获取Rule engine
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RuleEngine Rule engine
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleEngine GetRuleEngine() const;

                    /**
                     * 设置Rule engine
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RuleEngine Rule engine
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRuleEngine(const RuleEngine& _ruleEngine);

                    /**
                     * 判断参数 RuleEngine 是否已赋值
                     * @return RuleEngine 是否已赋值
                     */
                    bool RuleEngineHasBeenSet() const;

                private:

                    /**
                     * Domain name ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Tencent Cloud account ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Acceleration domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * CNAME address of domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Acceleration service status
rejected: the domain name is rejected due to expiration/deregistration of its ICP filing
processing: deploying
online: activated
offline: disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project ID, which can be viewed on the Tencent Cloud project management page
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * Domain name creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of domain name
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin server configuration
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP blacklist/whitelist configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP access frequency limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * Status code cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * Smart compression configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Bandwidth cap configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Range GETs configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 301/302 origin-pull follow-redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * Configuration of custom error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * Custom request header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * Custom response header configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Single-link downstream speed limit configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * Configuration of cache with/without parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Origin server header cache configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * Video dragging configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * Node cache expiration rule configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Cross-border linkage optimization configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * HTTPS acceleration configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Timestamp hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * SEO configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * Domain name block status
normal: normal
overdue: the domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
malicious: the acceleration service has been forcibly disabled due to detection of malicious behavior.
ddos: the acceleration service has been disabled due to large-scale DDoS attacks to the domain name
idle: no operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
unlicensed: the acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
capping: the configured upper limit for bandwidth has been reached.
readonly: the domain name has a special configuration and has been locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * Access protocol forced redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer hotlink protection configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * Browser cache expiration rule configuration (in beta)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * IPv6 origin-pull configuration (in beta)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Backwards compatibility configuration (compatibility field for internal use)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Compatibility m_compatibility;
                    bool m_compatibilityHasBeenSet;

                    /**
                     * Region-specific configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SpecificConfig m_specificConfig;
                    bool m_specificConfigHasBeenSet;

                    /**
                     * Acceleration region
mainland: acceleration in Mainland China
overseas: acceleration outside Mainland China
global: global acceleration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Domain name lock status
normal: not locked
mainland: locked in Mainland China
overseas: locked outside Mainland China
global: locked globally
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * Origin-pull timeout configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OriginPullTimeout m_originPullTimeout;
                    bool m_originPullTimeoutHasBeenSet;

                    /**
                     * S3 bucket origin access authentication configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * SCDN configuration
                     */
                    SecurityConfig m_securityConfig;
                    bool m_securityConfigHasBeenSet;

                    /**
                     * Image Optimization configuration
                     */
                    ImageOptimization m_imageOptimization;
                    bool m_imageOptimizationHasBeenSet;

                    /**
                     * `UA` blocklist/allowlist configuration
                     */
                    UserAgentFilter m_userAgentFilter;
                    bool m_userAgentFilterHasBeenSet;

                    /**
                     * Access control
                     */
                    AccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * Whether to support advanced configuration items
on: supported
off: not supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * URL redirect configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    UrlRedirect m_urlRedirect;
                    bool m_urlRedirectHasBeenSet;

                    /**
                     * Access port configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_accessPort;
                    bool m_accessPortHasBeenSet;

                    /**
                     * Tag configuration
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthentication m_advancedAuthentication;
                    bool m_advancedAuthenticationHasBeenSet;

                    /**
                     * Origin-pull authentication advanced configuration (allowlist feature)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OriginAuthentication m_originAuthentication;
                    bool m_originAuthenticationHasBeenSet;

                    /**
                     * IPv6 access configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * Advanced configuration settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvanceConfig> m_advanceSet;
                    bool m_advanceSetHasBeenSet;

                    /**
                     * Offline cache (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * Merging origin-pull requests (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OriginCombine m_originCombine;
                    bool m_originCombineHasBeenSet;

                    /**
                     * POST request configuration item
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    PostSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * QUIC configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Access authentication for OSS origin
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * WebSocket configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Remote authentication configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RemoteAuthentication m_remoteAuthentication;
                    bool m_remoteAuthenticationHasBeenSet;

                    /**
                     * Shared CNAME configuration (only available to beta users)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ShareCname m_shareCname;
                    bool m_shareCnameHasBeenSet;

                    /**
                     * Rule engine
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleEngine m_ruleEngine;
                    bool m_ruleEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_
