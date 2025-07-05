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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_ADDECDNDOMAINREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_ADDECDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/Origin.h>
#include <tencentcloud/ecdn/v20191012/model/IpFilter.h>
#include <tencentcloud/ecdn/v20191012/model/IpFreqLimit.h>
#include <tencentcloud/ecdn/v20191012/model/ResponseHeader.h>
#include <tencentcloud/ecdn/v20191012/model/CacheKey.h>
#include <tencentcloud/ecdn/v20191012/model/Cache.h>
#include <tencentcloud/ecdn/v20191012/model/Https.h>
#include <tencentcloud/ecdn/v20191012/model/ForceRedirect.h>
#include <tencentcloud/ecdn/v20191012/model/Tag.h>
#include <tencentcloud/ecdn/v20191012/model/WebSocket.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * AddEcdnDomain request structure.
                */
                class AddEcdnDomainRequest : public AbstractModel
                {
                public:
                    AddEcdnDomainRequest();
                    ~AddEcdnDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name.
                     * @return Domain Domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param _domain Domain name.
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
                     * 获取Domain name acceleration region. Valid values: mainland (acceleration in Mainland China), overseas (acceleration outside Mainland China), global (global acceleration).
                     * @return Area Domain name acceleration region. Valid values: mainland (acceleration in Mainland China), overseas (acceleration outside Mainland China), global (global acceleration).
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Domain name acceleration region. Valid values: mainland (acceleration in Mainland China), overseas (acceleration outside Mainland China), global (global acceleration).
                     * @param _area Domain name acceleration region. Valid values: mainland (acceleration in Mainland China), overseas (acceleration outside Mainland China), global (global acceleration).
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
                     * 获取Project ID. Default value: 0.
                     * @return ProjectId Project ID. Default value: 0.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Default value: 0.
                     * @param _projectId Project ID. Default value: 0.
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
                     * 获取IP block/allowlist configuration.
                     * @return IpFilter IP block/allowlist configuration.
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP block/allowlist configuration.
                     * @param _ipFilter IP block/allowlist configuration.
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
                     * 获取IP access limit configuration.
                     * @return IpFreqLimit IP access limit configuration.
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP access limit configuration.
                     * @param _ipFreqLimit IP access limit configuration.
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
                     * 获取Origin server response header configuration.
                     * @return ResponseHeader Origin server response header configuration.
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Origin server response header configuration.
                     * @param _responseHeader Origin server response header configuration.
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
                     * 获取Node caching configuration.
                     * @return CacheKey Node caching configuration.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Node caching configuration.
                     * @param _cacheKey Node caching configuration.
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
                     * 获取Caching rule configuration.
                     * @return Cache Caching rule configuration.
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Caching rule configuration.
                     * @param _cache Caching rule configuration.
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
                     * 获取HTTPS configuration.
                     * @return Https HTTPS configuration.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS configuration.
                     * @param _https HTTPS configuration.
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
                     * 获取Forced access protocol redirection configuration.
                     * @return ForceRedirect Forced access protocol redirection configuration.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Forced access protocol redirection configuration.
                     * @param _forceRedirect Forced access protocol redirection configuration.
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
                     * 获取Tag bound to a domain name.
                     * @return Tag Tag bound to a domain name.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag bound to a domain name.
                     * @param _tag Tag bound to a domain name.
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
                     * 获取WebSocket configuration.
                     * @return WebSocket WebSocket configuration.
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
                     * @param _webSocket WebSocket configuration.
                     * 
                     */
                    void SetWebSocket(const WebSocket& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     * 
                     */
                    bool WebSocketHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Origin server configuration.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Domain name acceleration region. Valid values: mainland (acceleration in Mainland China), overseas (acceleration outside Mainland China), global (global acceleration).
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Project ID. Default value: 0.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * IP block/allowlist configuration.
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP access limit configuration.
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * Origin server response header configuration.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Node caching configuration.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Caching rule configuration.
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * HTTPS configuration.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Forced access protocol redirection configuration.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Tag bound to a domain name.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * WebSocket configuration.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_ADDECDNDOMAINREQUEST_H_
