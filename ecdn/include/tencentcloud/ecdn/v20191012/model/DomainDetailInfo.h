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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINDETAILINFO_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Detailed configuration information of ECDN domain name.
                */
                class DomainDetailInfo : public AbstractModel
                {
                public:
                    DomainDetailInfo();
                    ~DomainDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name ID.
                     * @return ResourceId Domain name ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Domain name ID.
                     * @param _resourceId Domain name ID.
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
                     * 获取Tencent Cloud account ID.
                     * @return AppId Tencent Cloud account ID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tencent Cloud account ID.
                     * @param _appId Tencent Cloud account ID.
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
                     * 获取Acceleration domain name.
                     * @return Domain Acceleration domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Acceleration domain name.
                     * @param _domain Acceleration domain name.
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
                     * 获取Domain name CNAME.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cname Domain name CNAME.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Domain name CNAME.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cname Domain name CNAME.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     * @return Status Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     * @param _status Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Domain name creation time.
                     * @return CreateTime Domain name creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Domain name creation time.
                     * @param _createTime Domain name creation time.
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
                     * 获取Domain name update time.
                     * @return UpdateTime Domain name update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Domain name update time.
                     * @param _updateTime Domain name update time.
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
                     * 获取IP blocklist/allowlist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpFilter IP blocklist/allowlist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP blocklist/allowlist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ipFilter IP blocklist/allowlist configuration.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpFreqLimit IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ipFreqLimit IP access limit configuration.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseHeader Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _responseHeader Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CacheKey Node caching configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Node caching configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cacheKey Node caching configuration.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cache Caching rule configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置Caching rule configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cache Caching rule configuration.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Https HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _https HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Disable Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _disable Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only).
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Forced access protocol redirection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ForceRedirect Forced access protocol redirection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置Forced access protocol redirection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _forceRedirect Forced access protocol redirection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Acceleration region. Valid values: mainland, overseas, global.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Area Acceleration region. Valid values: mainland, overseas, global.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Valid values: mainland, overseas, global.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _area Acceleration region. Valid values: mainland, overseas, global.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain name lock status. normal: not locked; global: globally locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Readonly Domain name lock status. normal: not locked; global: globally locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置Domain name lock status. normal: not locked; global: globally locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _readonly Domain name lock status. normal: not locked; global: globally locked.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain name tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Tag Domain name tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Domain name tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _tag Domain name tag
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
                     * 获取WebSocket configuration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return WebSocket WebSocket configuration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket configuration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _webSocket WebSocket configuration.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * Domain name ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Tencent Cloud account ID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Acceleration domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain name CNAME.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Domain name creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Domain name update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin server configuration.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP blocklist/allowlist configuration.
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
                     * Origin server response header configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * Node caching configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Caching rule configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * HTTPS configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * Forced access protocol redirection configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Acceleration region. Valid values: mainland, overseas, global.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Domain name lock status. normal: not locked; global: globally locked.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * Domain name tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * WebSocket configuration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINDETAILINFO_H_
