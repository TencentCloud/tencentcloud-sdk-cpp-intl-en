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
#include <tencentcloud/cdn/v20180606/model/HwPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/QnPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/HttpsBilling.h>
#include <tencentcloud/cdn/v20180606/model/OthersPrivateAccess.h>


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
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Domain name ID
                     * @param _resourceId Domain name ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud account ID
                     * @return AppId Tencent Cloud account ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tencent Cloud account ID
                     * @param _appId Tencent Cloud account ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Accelerated domain name.
                     * @return Domain Accelerated domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Accelerated domain name.
                     * @param _domain Accelerated domain name.
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
                     * 获取CNAME address of domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Cname CNAME address of domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME address of domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cname CNAME address of domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * @return Status Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * @param _status Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Project ID, which can be viewed on the Tencent Cloud project management page
                     * @return ProjectId Project ID, which can be viewed on the Tencent Cloud project management page
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID, which can be viewed on the Tencent Cloud project management page
                     * @param _projectId Project ID, which can be viewed on the Tencent Cloud project management page
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
                     * 获取Domain name creation time
                     * @return CreateTime Domain name creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Domain name creation time
                     * @param _createTime Domain name creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Domain name update time
                     * @return UpdateTime Domain name update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Domain name update time
                     * @param _updateTime Domain name update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取IP blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IpFilter IP blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ipFilter IP blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取IP access limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IpFreqLimit IP access limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP access limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ipFreqLimit IP access limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Status code cache configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return StatusCodeCache Status code cache configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置Status code cache configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _statusCodeCache Status code cache configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Smart compression configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Compression Smart compression configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Smart compression configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _compression Smart compression configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BandwidthAlert Bandwidth cap configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置Bandwidth cap configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _bandwidthAlert Bandwidth cap configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RangeOriginPull Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rangeOriginPull Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FollowRedirect 301/302 origin-pull follow-redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 origin-pull follow-redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _followRedirect 301/302 origin-pull follow-redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Custom error page configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ErrorPage Custom error page configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置Custom error page configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _errorPage Custom error page configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Custom request header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RequestHeader Custom request header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置Custom request header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _requestHeader Custom request header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Custom response header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ResponseHeader Custom response header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Custom response header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _responseHeader Custom response header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Single-link downstream speed limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DownstreamCapping Single-link downstream speed limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置Single-link downstream speed limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _downstreamCapping Single-link downstream speed limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Configuration of cache with/without parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CacheKey Configuration of cache with/without parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Configuration of cache with/without parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _cacheKey Configuration of cache with/without parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Origin server header cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ResponseHeaderCache Origin server header cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置Origin server header cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _responseHeaderCache Origin server header cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Video dragging configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return VideoSeek Video dragging configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置Video dragging configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _videoSeek Video dragging configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Node cache expiration rule configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Cache Node cache expiration rule configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Node cache expiration rule configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _cache Node cache expiration rule configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Cross-border linkage optimization configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginPullOptimization Cross-border linkage optimization configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置Cross-border linkage optimization configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _originPullOptimization Cross-border linkage optimization configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取HTTPS Acceleration Configuration Guide
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Https HTTPS Acceleration Configuration Guide
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS Acceleration Configuration Guide
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _https HTTPS Acceleration Configuration Guide
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Timestamp hotlink protection configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Authentication Timestamp hotlink protection configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置Timestamp hotlink protection configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _authentication Timestamp hotlink protection configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取SEO configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Seo SEO configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _seo SEO configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Disable Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _disable Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取Access protocol forced redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ForceRedirect Access protocol forced redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Access protocol forced redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _forceRedirect Access protocol forced redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Referer configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Referer Referer configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _referer Referer configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Browser cache expiration rule configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MaxAge Browser cache expiration rule configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache expiration rule configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _maxAge Browser cache expiration rule configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取IPv6 origin-pull configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Ipv6 IPv6 origin-pull configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置IPv6 origin-pull configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ipv6 IPv6 origin-pull configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Backwards compatibility configuration (compatibility field for internal use)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Compatibility Backwards compatibility configuration (compatibility field for internal use)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Compatibility GetCompatibility() const;

                    /**
                     * 设置Backwards compatibility configuration (compatibility field for internal use)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _compatibility Backwards compatibility configuration (compatibility field for internal use)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompatibility(const Compatibility& _compatibility);

                    /**
                     * 判断参数 Compatibility 是否已赋值
                     * @return Compatibility 是否已赋值
                     * 
                     */
                    bool CompatibilityHasBeenSet() const;

                    /**
                     * 获取Region-specific configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SpecificConfig Region-specific configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置Region-specific configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _specificConfig Region-specific configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Area Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _area Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
`overseas`: Locked outside the Chinese mainland
global: Locked globally
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Readonly Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
`overseas`: Locked outside the Chinese mainland
global: Locked globally
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
`overseas`: Locked outside the Chinese mainland
global: Locked globally
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _readonly Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
`overseas`: Locked outside the Chinese mainland
global: Locked globally
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReadonly(const std::string& _readonly);

                    /**
                     * 判断参数 Readonly 是否已赋值
                     * @return Readonly 是否已赋值
                     * 
                     */
                    bool ReadonlyHasBeenSet() const;

                    /**
                     * 获取Origin-pull timeout configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginPullTimeout Origin-pull timeout configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    OriginPullTimeout GetOriginPullTimeout() const;

                    /**
                     * 设置Origin-pull timeout configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _originPullTimeout Origin-pull timeout configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取S3 bucket origin access authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AwsPrivateAccess S3 bucket origin access authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置S3 bucket origin access authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _awsPrivateAccess S3 bucket origin access authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取SCDN configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SecurityConfig SCDN configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    SecurityConfig GetSecurityConfig() const;

                    /**
                     * 设置SCDN configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _securityConfig SCDN configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSecurityConfig(const SecurityConfig& _securityConfig);

                    /**
                     * 判断参数 SecurityConfig 是否已赋值
                     * @return SecurityConfig 是否已赋值
                     * 
                     */
                    bool SecurityConfigHasBeenSet() const;

                    /**
                     * 获取Image optimization configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ImageOptimization Image optimization configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    ImageOptimization GetImageOptimization() const;

                    /**
                     * 设置Image optimization configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _imageOptimization Image optimization configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetImageOptimization(const ImageOptimization& _imageOptimization);

                    /**
                     * 判断参数 ImageOptimization 是否已赋值
                     * @return ImageOptimization 是否已赋值
                     * 
                     */
                    bool ImageOptimizationHasBeenSet() const;

                    /**
                     * 获取UA blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UserAgentFilter UA blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    UserAgentFilter GetUserAgentFilter() const;

                    /**
                     * 设置UA blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _userAgentFilter UA blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserAgentFilter(const UserAgentFilter& _userAgentFilter);

                    /**
                     * 判断参数 UserAgentFilter 是否已赋值
                     * @return UserAgentFilter 是否已赋值
                     * 
                     */
                    bool UserAgentFilterHasBeenSet() const;

                    /**
                     * 获取Access control
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AccessControl Access control
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AccessControl GetAccessControl() const;

                    /**
                     * 设置Access control
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _accessControl Access control
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAccessControl(const AccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取Whether to support advanced configuration items
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Advance Whether to support advanced configuration items
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAdvance() const;

                    /**
                     * 设置Whether to support advanced configuration items
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _advance Whether to support advanced configuration items
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAdvance(const std::string& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     * 
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取URL redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UrlRedirect URL redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    UrlRedirect GetUrlRedirect() const;

                    /**
                     * 设置URL redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _urlRedirect URL redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUrlRedirect(const UrlRedirect& _urlRedirect);

                    /**
                     * 判断参数 UrlRedirect 是否已赋值
                     * @return UrlRedirect 是否已赋值
                     * 
                     */
                    bool UrlRedirectHasBeenSet() const;

                    /**
                     * 获取Access port configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AccessPort Access port configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAccessPort() const;

                    /**
                     * 设置Access port configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _accessPort Access port configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAccessPort(const std::vector<int64_t>& _accessPort);

                    /**
                     * 判断参数 AccessPort 是否已赋值
                     * @return AccessPort 是否已赋值
                     * 
                     */
                    bool AccessPortHasBeenSet() const;

                    /**
                     * 获取Tag configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Tag Tag configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _tag Tag configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Timestamp hotlink protection advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AdvancedAuthentication Timestamp hotlink protection advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AdvancedAuthentication GetAdvancedAuthentication() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _advancedAuthentication Timestamp hotlink protection advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAdvancedAuthentication(const AdvancedAuthentication& _advancedAuthentication);

                    /**
                     * 判断参数 AdvancedAuthentication 是否已赋值
                     * @return AdvancedAuthentication 是否已赋值
                     * 
                     */
                    bool AdvancedAuthenticationHasBeenSet() const;

                    /**
                     * 获取Origin-pull authentication advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginAuthentication Origin-pull authentication advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    OriginAuthentication GetOriginAuthentication() const;

                    /**
                     * 设置Origin-pull authentication advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _originAuthentication Origin-pull authentication advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginAuthentication(const OriginAuthentication& _originAuthentication);

                    /**
                     * 判断参数 OriginAuthentication 是否已赋值
                     * @return OriginAuthentication 是否已赋值
                     * 
                     */
                    bool OriginAuthenticationHasBeenSet() const;

                    /**
                     * 获取IPv6 access configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Ipv6Access IPv6 access configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置IPv6 access configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ipv6Access IPv6 access configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Advanced configuration settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AdvanceSet Advanced configuration settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<AdvanceConfig> GetAdvanceSet() const;

                    /**
                     * 设置Advanced configuration settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _advanceSet Advanced configuration settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAdvanceSet(const std::vector<AdvanceConfig>& _advanceSet);

                    /**
                     * 判断参数 AdvanceSet 是否已赋值
                     * @return AdvanceSet 是否已赋值
                     * 
                     */
                    bool AdvanceSetHasBeenSet() const;

                    /**
                     * 获取Offline cache (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OfflineCache Offline cache (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置Offline cache (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _offlineCache Offline cache (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Merging origin-pull requests (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginCombine Merging origin-pull requests (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    OriginCombine GetOriginCombine() const;

                    /**
                     * 设置Merging origin-pull requests (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _originCombine Merging origin-pull requests (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginCombine(const OriginCombine& _originCombine);

                    /**
                     * 判断参数 OriginCombine 是否已赋值
                     * @return OriginCombine 是否已赋值
                     * 
                     */
                    bool OriginCombineHasBeenSet() const;

                    /**
                     * 获取POST request configuration item
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PostMaxSize POST request configuration item
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    PostSize GetPostMaxSize() const;

                    /**
                     * 设置POST request configuration item
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _postMaxSize POST request configuration item
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPostMaxSize(const PostSize& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     * 
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取QUIC configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Quic QUIC configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置QUIC configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _quic QUIC configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Access authentication for OSS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OssPrivateAccess Access authentication for OSS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置Access authentication for OSS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ossPrivateAccess Access authentication for OSS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return WebSocket WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _webSocket WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Remote authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RemoteAuthentication Remote authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    RemoteAuthentication GetRemoteAuthentication() const;

                    /**
                     * 设置Remote authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _remoteAuthentication Remote authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRemoteAuthentication(const RemoteAuthentication& _remoteAuthentication);

                    /**
                     * 判断参数 RemoteAuthentication 是否已赋值
                     * @return RemoteAuthentication 是否已赋值
                     * 
                     */
                    bool RemoteAuthenticationHasBeenSet() const;

                    /**
                     * 获取Shared CNAME configuration (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ShareCname Shared CNAME configuration (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    ShareCname GetShareCname() const;

                    /**
                     * 设置Shared CNAME configuration (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _shareCname Shared CNAME configuration (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetShareCname(const ShareCname& _shareCname);

                    /**
                     * 判断参数 ShareCname 是否已赋值
                     * @return ShareCname 是否已赋值
                     * 
                     */
                    bool ShareCnameHasBeenSet() const;

                    /**
                     * 获取Rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleEngine Rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleEngine GetRuleEngine() const;

                    /**
                     * 设置Rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleEngine Rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleEngine(const RuleEngine& _ruleEngine);

                    /**
                     * 判断参数 RuleEngine 是否已赋值
                     * @return RuleEngine 是否已赋值
                     * 
                     */
                    bool RuleEngineHasBeenSet() const;

                    /**
                     * 获取Primary domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ParentHost Primary domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentHost() const;

                    /**
                     * 设置Primary domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _parentHost Primary domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParentHost(const std::string& _parentHost);

                    /**
                     * 判断参数 ParentHost 是否已赋值
                     * @return ParentHost 是否已赋值
                     * 
                     */
                    bool ParentHostHasBeenSet() const;

                    /**
                     * 获取Access authentication for Huawei Cloud OBS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return HwPrivateAccess Access authentication for Huawei Cloud OBS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置Access authentication for Huawei Cloud OBS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _hwPrivateAccess Access authentication for Huawei Cloud OBS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Access authentication for QiNiu Cloud Kodo origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return QnPrivateAccess Access authentication for QiNiu Cloud Kodo origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    QnPrivateAccess GetQnPrivateAccess() const;

                    /**
                     * 设置Access authentication for QiNiu Cloud Kodo origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _qnPrivateAccess Access authentication for QiNiu Cloud Kodo origin
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取HTTPS (enabled by default)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HttpsBilling HTTPS (enabled by default)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    HttpsBilling GetHttpsBilling() const;

                    /**
                     * 设置HTTPS (enabled by default)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _httpsBilling HTTPS (enabled by default)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpsBilling(const HttpsBilling& _httpsBilling);

                    /**
                     * 判断参数 HttpsBilling 是否已赋值
                     * @return HttpsBilling 是否已赋值
                     * 
                     */
                    bool HttpsBillingHasBeenSet() const;

                    /**
                     * 获取Origin-pull authentication for other origins
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OthersPrivateAccess Origin-pull authentication for other origins
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置Origin-pull authentication for other origins
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _othersPrivateAccess Origin-pull authentication for other origins
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOthersPrivateAccess(const OthersPrivateAccess& _othersPrivateAccess);

                    /**
                     * 判断参数 OthersPrivateAccess 是否已赋值
                     * @return OthersPrivateAccess 是否已赋值
                     * 
                     */
                    bool OthersPrivateAccessHasBeenSet() const;

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
                     * Accelerated domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * CNAME address of domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
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
                     * Domain name update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin server configuration.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP access limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * Status code cache configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * Smart compression configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Bandwidth cap configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 301/302 origin-pull follow-redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * Custom error page configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * Custom request header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * Custom response header configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Single-link downstream speed limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * Configuration of cache with/without parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Origin server header cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * Video dragging configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * Node cache expiration rule configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Cross-border linkage optimization configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * HTTPS Acceleration Configuration Guide
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Timestamp hotlink protection configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * SEO configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * Access protocol forced redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * Browser cache expiration rule configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * IPv6 origin-pull configuration (in beta)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Backwards compatibility configuration (compatibility field for internal use)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Compatibility m_compatibility;
                    bool m_compatibilityHasBeenSet;

                    /**
                     * Region-specific configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    SpecificConfig m_specificConfig;
                    bool m_specificConfigHasBeenSet;

                    /**
                     * Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
`overseas`: Locked outside the Chinese mainland
global: Locked globally
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * Origin-pull timeout configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OriginPullTimeout m_originPullTimeout;
                    bool m_originPullTimeoutHasBeenSet;

                    /**
                     * S3 bucket origin access authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * SCDN configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    SecurityConfig m_securityConfig;
                    bool m_securityConfigHasBeenSet;

                    /**
                     * Image optimization configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ImageOptimization m_imageOptimization;
                    bool m_imageOptimizationHasBeenSet;

                    /**
                     * UA blocklist/allowlist configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    UserAgentFilter m_userAgentFilter;
                    bool m_userAgentFilterHasBeenSet;

                    /**
                     * Access control
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * Whether to support advanced configuration items
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * URL redirect configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    UrlRedirect m_urlRedirect;
                    bool m_urlRedirectHasBeenSet;

                    /**
                     * Access port configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_accessPort;
                    bool m_accessPortHasBeenSet;

                    /**
                     * Tag configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AdvancedAuthentication m_advancedAuthentication;
                    bool m_advancedAuthenticationHasBeenSet;

                    /**
                     * Origin-pull authentication advanced configuration (allowlist feature)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OriginAuthentication m_originAuthentication;
                    bool m_originAuthenticationHasBeenSet;

                    /**
                     * IPv6 access configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * Advanced configuration settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<AdvanceConfig> m_advanceSet;
                    bool m_advanceSetHasBeenSet;

                    /**
                     * Offline cache (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * Merging origin-pull requests (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OriginCombine m_originCombine;
                    bool m_originCombineHasBeenSet;

                    /**
                     * POST request configuration item
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    PostSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * QUIC configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Access authentication for OSS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * WebSocket configuration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * Remote authentication configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    RemoteAuthentication m_remoteAuthentication;
                    bool m_remoteAuthenticationHasBeenSet;

                    /**
                     * Shared CNAME configuration (only available to beta users)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ShareCname m_shareCname;
                    bool m_shareCnameHasBeenSet;

                    /**
                     * Rule engine
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    RuleEngine m_ruleEngine;
                    bool m_ruleEngineHasBeenSet;

                    /**
                     * Primary domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_parentHost;
                    bool m_parentHostHasBeenSet;

                    /**
                     * Access authentication for Huawei Cloud OBS origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * Access authentication for QiNiu Cloud Kodo origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    QnPrivateAccess m_qnPrivateAccess;
                    bool m_qnPrivateAccessHasBeenSet;

                    /**
                     * HTTPS (enabled by default)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    HttpsBilling m_httpsBilling;
                    bool m_httpsBillingHasBeenSet;

                    /**
                     * Origin-pull authentication for other origins
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_
