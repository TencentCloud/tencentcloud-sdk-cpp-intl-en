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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIGFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIGFORUPDATE_H_

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
                * CDN domain config for update
                */
                class CDNDomainConfigForUpdate : public AbstractModel
                {
                public:
                    CDNDomainConfigForUpdate();
                    ~CDNDomainConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Acceleration region:<li>mainland:Acceleration inside the Chinese mainland;</li> <li>overseas: Acceleration outside the Chinese mainland;</li> <li>Acceleration over the globe.</li>
                     * @return Area Acceleration region:<li>mainland:Acceleration inside the Chinese mainland;</li> <li>overseas: Acceleration outside the Chinese mainland;</li> <li>Acceleration over the globe.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region:<li>mainland:Acceleration inside the Chinese mainland;</li> <li>overseas: Acceleration outside the Chinese mainland;</li> <li>Acceleration over the globe.</li>
                     * @param _area Acceleration region:<li>mainland:Acceleration inside the Chinese mainland;</li> <li>overseas: Acceleration outside the Chinese mainland;</li> <li>Acceleration over the globe.</li>
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
                     * 获取Origin Server Configuration.
                     * @return Origin Origin Server Configuration.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin Server Configuration.
                     * @param _origin Origin Server Configuration.
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
                     * 获取IP blocklist/allowlist configuration. This is disabled by default.
                     * @return IpFilter IP blocklist/allowlist configuration. This is disabled by default.
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP blocklist/allowlist configuration. This is disabled by default.
                     * @param _ipFilter IP blocklist/allowlist configuration. This is disabled by default.
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
                     * 获取UserAgent:blacklist/whitelist configuration.
                     * @return UserAgentFilter UserAgent:blacklist/whitelist configuration.
                     * 
                     */
                    UserAgentFilter GetUserAgentFilter() const;

                    /**
                     * 设置UserAgent:blacklist/whitelist configuration.
                     * @param _userAgentFilter UserAgent:blacklist/whitelist configuration.
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
                     * 获取Back to the source 301/302 status code automatically follows the configuration, the default is off
                     * @return FollowRedirect Back to the source 301/302 status code automatically follows the configuration, the default is off
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置Back to the source 301/302 status code automatically follows the configuration, the default is off
                     * @param _followRedirect Back to the source 301/302 status code automatically follows the configuration, the default is off
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
                     * 获取Custom request header configuration. This is disabled by default.
                     * @return RequestHeader Custom request header configuration. This is disabled by default.
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置Custom request header configuration. This is disabled by default.
                     * @param _requestHeader Custom request header configuration. This is disabled by default.
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
                     * 获取Custom response header configuration. This is disabled by default.
                     * @return ResponseHeader Custom response header configuration. This is disabled by default.
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Custom response header configuration. This is disabled by default.
                     * @param _responseHeader Custom response header configuration. This is disabled by default.
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
                     * 获取Node cache expiration time configuration.
                     * @return Cache Node cache expiration time configuration.
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Node cache expiration time configuration.
                     * @param _cache Node cache expiration time configuration.
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
                     * 获取Domain name HTTPS acceleration configuration. This is disabled by default.
                     * @return Https Domain name HTTPS acceleration configuration. This is disabled by default.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Domain name HTTPS acceleration configuration. This is disabled by default.
                     * @param _https Domain name HTTPS acceleration configuration. This is disabled by default.
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
                     * 获取Access protocol forced redirect configuration. This is disabled by default.
                     * @return ForceRedirect Access protocol forced redirect configuration. This is disabled by default.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Access protocol forced redirect configuration. This is disabled by default.
                     * @param _forceRedirect Access protocol forced redirect configuration. This is disabled by default.
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
                     * 获取Referer blacklist/whitelist configuration. This is disabled by default.
                     * @return Referer Referer blacklist/whitelist configuration. This is disabled by default.
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer blacklist/whitelist configuration. This is disabled by default.
                     * @param _referer Referer blacklist/whitelist configuration. This is disabled by default.
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
                     * 获取Browser cache rule configuration, which is used to set the default value of MaxAge and is disabled by default.
                     * @return MaxAge Browser cache rule configuration, which is used to set the default value of MaxAge and is disabled by default.
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置Browser cache rule configuration, which is used to set the default value of MaxAge and is disabled by default.
                     * @param _maxAge Browser cache rule configuration, which is used to set the default value of MaxAge and is disabled by default.
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
                     * 获取IPv6 access configuration.
                     * @return Ipv6Access IPv6 access configuration.
                     * 
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置IPv6 access configuration.
                     * @param _ipv6Access IPv6 access configuration.
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
                     * 获取QUIC configuration item.
                     * @return Quic QUIC configuration item.
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置QUIC configuration item.
                     * @param _quic QUIC configuration item.
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
                     * 获取Origin access authentication for S3 bucket.
                     * @return AwsPrivateAccess Origin access authentication for S3 bucket.
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置Origin access authentication for S3 bucket.
                     * @param _awsPrivateAccess Origin access authentication for S3 bucket.
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
                     * 获取Access authentication configuration for OSS origin.
                     * @return OssPrivateAccess Access authentication configuration for OSS origin.
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置Access authentication configuration for OSS origin.
                     * @param _ossPrivateAccess Access authentication configuration for OSS origin.
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
                     * 获取Access authentication for Huawei Cloud OBS origin
                     * @return HwPrivateAccess Access authentication for Huawei Cloud OBS origin
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置Access authentication for Huawei Cloud OBS origin
                     * @param _hwPrivateAccess Access authentication for Huawei Cloud OBS origin
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
                     * 获取Origin-pull authentication for other origins.
                     * @return OthersPrivateAccess Origin-pull authentication for other origins.
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置Origin-pull authentication for other origins.
                     * @param _othersPrivateAccess Origin-pull authentication for other origins.
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
                     * Acceleration region:<li>mainland:Acceleration inside the Chinese mainland;</li> <li>overseas: Acceleration outside the Chinese mainland;</li> <li>Acceleration over the globe.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Origin Server Configuration.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP blocklist/allowlist configuration. This is disabled by default.
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * UserAgent:blacklist/whitelist configuration.
                     */
                    UserAgentFilter m_userAgentFilter;
                    bool m_userAgentFilterHasBeenSet;

                    /**
                     * Back to the source 301/302 status code automatically follows the configuration, the default is off
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * Custom request header configuration. This is disabled by default.
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * Custom response header configuration. This is disabled by default.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Node cache expiration time configuration.
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Domain name HTTPS acceleration configuration. This is disabled by default.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Timestamp hotlink protection configuration.
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * Access protocol forced redirect configuration. This is disabled by default.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer blacklist/whitelist configuration. This is disabled by default.
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * Browser cache rule configuration, which is used to set the default value of MaxAge and is disabled by default.
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * IPv6 access configuration.
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * QUIC configuration item.
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Origin access authentication for S3 bucket.
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * Access authentication configuration for OSS origin.
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * Access authentication for Huawei Cloud OBS origin
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * Origin-pull authentication for other origins.
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIGFORUPDATE_H_
