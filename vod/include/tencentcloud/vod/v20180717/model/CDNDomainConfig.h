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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/Origin.h>
#include <tencentcloud/vod/v20180717/model/IpFilter.h>
#include <tencentcloud/vod/v20180717/model/UserAgentFilter.h>
#include <tencentcloud/vod/v20180717/model/FollowRedirect.h>
#include <tencentcloud/vod/v20180717/model/RequestHeader.h>
#include <tencentcloud/vod/v20180717/model/ResponseHeader.h>
#include <tencentcloud/vod/v20180717/model/Cache.h>
#include <tencentcloud/vod/v20180717/model/Https.h>
#include <tencentcloud/vod/v20180717/model/Authentication.h>
#include <tencentcloud/vod/v20180717/model/ForceRedirect.h>
#include <tencentcloud/vod/v20180717/model/Referer.h>
#include <tencentcloud/vod/v20180717/model/MaxAge.h>
#include <tencentcloud/vod/v20180717/model/Ipv6Access.h>
#include <tencentcloud/vod/v20180717/model/Quic.h>
#include <tencentcloud/vod/v20180717/model/AwsPrivateAccess.h>
#include <tencentcloud/vod/v20180717/model/OssPrivateAccess.h>
#include <tencentcloud/vod/v20180717/model/HwPrivateAccess.h>
#include <tencentcloud/vod/v20180717/model/OthersPrivateAccess.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CDN Domain Config
                */
                class CDNDomainConfig : public AbstractModel
                {
                public:
                    CDNDomainConfig();
                    ~CDNDomainConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name acceleration areas: <li>mainland: acceleration within China; </li> <li>overseas: acceleration outside China; </li> <li>global: global acceleration. </li>
                     * @return Area Domain name acceleration areas: <li>mainland: acceleration within China; </li> <li>overseas: acceleration outside China; </li> <li>global: global acceleration. </li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Domain name acceleration areas: <li>mainland: acceleration within China; </li> <li>overseas: acceleration outside China; </li> <li>global: global acceleration. </li>
                     * @param _area Domain name acceleration areas: <li>mainland: acceleration within China; </li> <li>overseas: acceleration outside China; </li> <li>global: global acceleration. </li>
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
                     * 获取IP allowlist/blocklist configuration.
                     * @return IpFilter IP allowlist/blocklist configuration.
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP allowlist/blocklist configuration.
                     * @param _ipFilter IP allowlist/blocklist configuration.
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
                     * 获取UA Blocklist/Allowlist Configuration.
                     * @return UserAgentFilter UA Blocklist/Allowlist Configuration.
                     * 
                     */
                    UserAgentFilter GetUserAgentFilter() const;

                    /**
                     * 设置UA Blocklist/Allowlist Configuration.
                     * @param _userAgentFilter UA Blocklist/Allowlist Configuration.
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
                     * 获取301/302 origin follow configuration.
                     * @return FollowRedirect 301/302 origin follow configuration.
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 origin follow configuration.
                     * @param _followRedirect 301/302 origin follow configuration.
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
                     * 获取Request header configuration.
                     * @return RequestHeader Request header configuration.
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置Request header configuration.
                     * @param _requestHeader Request header configuration.
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
                     * 获取Response header configuration.
                     * @return ResponseHeader Response header configuration.
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Response header configuration.
                     * @param _responseHeader Response header configuration.
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
                     * 获取Cache expiration time settings.
                     * @return Cache Cache expiration time settings.
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Cache expiration time settings.
                     * @param _cache Cache expiration time settings.
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
                     * 获取Https configuration.
                     * @return Https Https configuration.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https configuration.
                     * @param _https Https configuration.
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
                     * @return Authentication Timestamp hotlink protection configuration.
                     * 
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置Timestamp hotlink protection configuration.
                     * @param _authentication Timestamp hotlink protection configuration.
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
                     * 获取Access protocol force redirection configuration.
                     * @return ForceRedirect Access protocol force redirection configuration.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Access protocol force redirection configuration.
                     * @param _forceRedirect Access protocol force redirection configuration.
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
                     * 获取Referer Anti-leech Configuration.
                     * @return Referer Referer Anti-leech Configuration.
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer Anti-leech Configuration.
                     * @param _referer Referer Anti-leech Configuration.
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
                     * 获取AWS S3 origin authentication configuration.
                     * @return AwsPrivateAccess AWS S3 origin authentication configuration.
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置AWS S3 origin authentication configuration.
                     * @param _awsPrivateAccess AWS S3 origin authentication configuration.
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
                     * 获取Alibaba Cloud OSS authentication configuration.
                     * @return OssPrivateAccess Alibaba Cloud OSS authentication configuration.
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置Alibaba Cloud OSS authentication configuration.
                     * @param _ossPrivateAccess Alibaba Cloud OSS authentication configuration.
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
                     * 获取Huawei cloud object storage back-to-origin authentication configuration.
                     * @return HwPrivateAccess Huawei cloud object storage back-to-origin authentication configuration.
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置Huawei cloud object storage back-to-origin authentication configuration.
                     * @param _hwPrivateAccess Huawei cloud object storage back-to-origin authentication configuration.
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
                     * 获取Authentication configuration for cross-origin access to object storage of other vendors.
                     * @return OthersPrivateAccess Authentication configuration for cross-origin access to object storage of other vendors.
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置Authentication configuration for cross-origin access to object storage of other vendors.
                     * @param _othersPrivateAccess Authentication configuration for cross-origin access to object storage of other vendors.
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
                     * Domain name acceleration areas: <li>mainland: acceleration within China; </li> <li>overseas: acceleration outside China; </li> <li>global: global acceleration. </li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Origin server configuration.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP allowlist/blocklist configuration.
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * UA Blocklist/Allowlist Configuration.
                     */
                    UserAgentFilter m_userAgentFilter;
                    bool m_userAgentFilterHasBeenSet;

                    /**
                     * 301/302 origin follow configuration.
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * Request header configuration.
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * Response header configuration.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Cache expiration time settings.
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Https configuration.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Timestamp hotlink protection configuration.
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * Access protocol force redirection configuration.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer Anti-leech Configuration.
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * Browser cache configuration.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Ipv6 access configuration
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * Quic access configuration.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * AWS S3 origin authentication configuration.
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * Alibaba Cloud OSS authentication configuration.
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * Huawei cloud object storage back-to-origin authentication configuration.
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * Authentication configuration for cross-origin access to object storage of other vendors.
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIG_H_
