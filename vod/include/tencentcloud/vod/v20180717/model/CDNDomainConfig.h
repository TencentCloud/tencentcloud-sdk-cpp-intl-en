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
                * Cdn domain configuration information
                */
                class CDNDomainConfig : public AbstractModel
                {
                public:
                    CDNDomainConfig();
                    ~CDNDomainConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain acceleration region:
<li>mainland: domestic acceleration in China;</li>
<li>overseas: acceleration outside China;</li>
<li>global: global acceleration.</li>
                     * @return Area Domain acceleration region:
<li>mainland: domestic acceleration in China;</li>
<li>overseas: acceleration outside China;</li>
<li>global: global acceleration.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Domain acceleration region:
<li>mainland: domestic acceleration in China;</li>
<li>overseas: acceleration outside China;</li>
<li>global: global acceleration.</li>
                     * @param _area Domain acceleration region:
<li>mainland: domestic acceleration in China;</li>
<li>overseas: acceleration outside China;</li>
<li>global: global acceleration.</li>
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
                     * 获取301/302 origin-pull follow configuration.
                     * @return FollowRedirect 301/302 origin-pull follow configuration.
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 origin-pull follow configuration.
                     * @param _followRedirect 301/302 origin-pull follow configuration.
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
                     * 获取header configuration.
                     * @return ResponseHeader header configuration.
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置header configuration.
                     * @param _responseHeader header configuration.
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
                     * 获取Cache expiration time configuration.
                     * @return Cache Cache expiration time configuration.
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Cache expiration time configuration.
                     * @param _cache Cache expiration time configuration.
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
                     * 获取Forced redirect configuration for access protocols.
                     * @return ForceRedirect Forced redirect configuration for access protocols.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Forced redirect configuration for access protocols.
                     * @param _forceRedirect Forced redirect configuration for access protocols.
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
                     * 获取Referer anti-leech configuration.
                     * @return Referer Referer anti-leech configuration.
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer anti-leech configuration.
                     * @param _referer Referer anti-leech configuration.
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
                     * 获取Ipv6 access configuration.
                     * @return Ipv6Access Ipv6 access configuration.
                     * 
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置Ipv6 access configuration.
                     * @param _ipv6Access Ipv6 access configuration.
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
                     * 获取Authentication configuration for AWS S3 origin-pull.
                     * @return AwsPrivateAccess Authentication configuration for AWS S3 origin-pull.
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置Authentication configuration for AWS S3 origin-pull.
                     * @param _awsPrivateAccess Authentication configuration for AWS S3 origin-pull.
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
                     * 获取Authentication configuration for origin-pull from Alibaba Cloud OSS.
                     * @return OssPrivateAccess Authentication configuration for origin-pull from Alibaba Cloud OSS.
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置Authentication configuration for origin-pull from Alibaba Cloud OSS.
                     * @param _ossPrivateAccess Authentication configuration for origin-pull from Alibaba Cloud OSS.
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
                     * 获取Huawei Cloud object storage origin-pull authentication configuration.
                     * @return HwPrivateAccess Huawei Cloud object storage origin-pull authentication configuration.
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置Huawei Cloud object storage origin-pull authentication configuration.
                     * @param _hwPrivateAccess Huawei Cloud object storage origin-pull authentication configuration.
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
                     * 获取Authentication configuration for origin-pull from other vendors' object storage.
                     * @return OthersPrivateAccess Authentication configuration for origin-pull from other vendors' object storage.
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置Authentication configuration for origin-pull from other vendors' object storage.
                     * @param _othersPrivateAccess Authentication configuration for origin-pull from other vendors' object storage.
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
                     * Domain acceleration region:
<li>mainland: domestic acceleration in China;</li>
<li>overseas: acceleration outside China;</li>
<li>global: global acceleration.</li>
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
                     * 301/302 origin-pull follow configuration.
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * Request header configuration.
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * header configuration.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Cache expiration time configuration.
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
                     * Forced redirect configuration for access protocols.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer anti-leech configuration.
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * Browser cache configuration.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Ipv6 access configuration.
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * Quic access configuration.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Authentication configuration for AWS S3 origin-pull.
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * Authentication configuration for origin-pull from Alibaba Cloud OSS.
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * Huawei Cloud object storage origin-pull authentication configuration.
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * Authentication configuration for origin-pull from other vendors' object storage.
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIG_H_
