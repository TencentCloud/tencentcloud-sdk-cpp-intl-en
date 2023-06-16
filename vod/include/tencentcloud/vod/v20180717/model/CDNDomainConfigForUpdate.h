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
                * 
                */
                class CDNDomainConfigForUpdate : public AbstractModel
                {
                public:
                    CDNDomainConfigForUpdate();
                    ~CDNDomainConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Area 
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置
                     * @param _area 
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
                     * 获取
                     * @return Origin 
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置
                     * @param _origin 
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
                     * 获取
                     * @return IpFilter 
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置
                     * @param _ipFilter 
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
                     * 获取
                     * @return UserAgentFilter 
                     * 
                     */
                    UserAgentFilter GetUserAgentFilter() const;

                    /**
                     * 设置
                     * @param _userAgentFilter 
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
                     * 获取
                     * @return FollowRedirect 
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置
                     * @param _followRedirect 
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
                     * 获取
                     * @return RequestHeader 
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置
                     * @param _requestHeader 
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
                     * 获取
                     * @return ResponseHeader 
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置
                     * @param _responseHeader 
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
                     * 获取
                     * @return Cache 
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置
                     * @param _cache 
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
                     * 获取
                     * @return Https 
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置
                     * @param _https 
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
                     * 获取
                     * @return Authentication 
                     * 
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置
                     * @param _authentication 
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
                     * 获取
                     * @return ForceRedirect 
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置
                     * @param _forceRedirect 
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
                     * 获取
                     * @return Referer 
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置
                     * @param _referer 
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
                     * 获取
                     * @return MaxAge 
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置
                     * @param _maxAge 
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
                     * 获取
                     * @return Ipv6Access 
                     * 
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置
                     * @param _ipv6Access 
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
                     * 获取
                     * @return Quic 
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置
                     * @param _quic 
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
                     * 获取
                     * @return AwsPrivateAccess 
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置
                     * @param _awsPrivateAccess 
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
                     * 获取
                     * @return OssPrivateAccess 
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置
                     * @param _ossPrivateAccess 
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
                     * 获取
                     * @return HwPrivateAccess 
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置
                     * @param _hwPrivateAccess 
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
                     * 获取
                     * @return OthersPrivateAccess 
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置
                     * @param _othersPrivateAccess 
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
                     * 
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * 
                     */
                    UserAgentFilter m_userAgentFilter;
                    bool m_userAgentFilterHasBeenSet;

                    /**
                     * 
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * 
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * 
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * 
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * 
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * 
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * 
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * 
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * 
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * 
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * 
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAINCONFIGFORUPDATE_H_
