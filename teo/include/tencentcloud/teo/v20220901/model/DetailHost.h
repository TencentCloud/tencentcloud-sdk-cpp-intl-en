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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DETAILHOST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DETAILHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AccelerateType.h>
#include <tencentcloud/teo/v20220901/model/Https.h>
#include <tencentcloud/teo/v20220901/model/CacheConfig.h>
#include <tencentcloud/teo/v20220901/model/Origin.h>
#include <tencentcloud/teo/v20220901/model/SecurityType.h>
#include <tencentcloud/teo/v20220901/model/CacheKey.h>
#include <tencentcloud/teo/v20220901/model/Compression.h>
#include <tencentcloud/teo/v20220901/model/Waf.h>
#include <tencentcloud/teo/v20220901/model/CC.h>
#include <tencentcloud/teo/v20220901/model/DDoS.h>
#include <tencentcloud/teo/v20220901/model/SmartRouting.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>
#include <tencentcloud/teo/v20220901/model/ClientIpCountry.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Domain name configuration information
                */
                class DetailHost : public AbstractModel
                {
                public:
                    DetailHost();
                    ~DetailHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The acceleration status. Values:
<li>`process`: In progress</li>
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * @return Status The acceleration status. Values:
<li>`process`: In progress</li>
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The acceleration status. Values:
<li>`process`: In progress</li>
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * @param Status The acceleration status. Values:
<li>`process`: In progress</li>
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The domain name.
                     * @return Host The domain name.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置The domain name.
                     * @param Host The domain name.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Name of the site
                     * @return ZoneName Name of the site
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the site
                     * @param ZoneName Name of the site
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取The assigned CNAME
                     * @return Cname The assigned CNAME
                     */
                    std::string GetCname() const;

                    /**
                     * 设置The assigned CNAME
                     * @param Cname The assigned CNAME
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取The resource ID.
                     * @return Id The resource ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置The resource ID.
                     * @param Id The resource ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The instance ID.
                     * @return InstanceId The instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The instance ID.
                     * @param InstanceId The instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The lock status.
                     * @return Lock The lock status.
                     */
                    int64_t GetLock() const;

                    /**
                     * 设置The lock status.
                     * @param Lock The lock status.
                     */
                    void SetLock(const int64_t& _lock);

                    /**
                     * 判断参数 Lock 是否已赋值
                     * @return Lock 是否已赋值
                     */
                    bool LockHasBeenSet() const;

                    /**
                     * 获取The domain name status.
                     * @return Mode The domain name status.
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置The domain name status.
                     * @param Mode The domain name status.
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取The acceleration area of the domain name. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     * @return Area The acceleration area of the domain name. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The acceleration area of the domain name. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     * @param Area The acceleration area of the domain name. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取The acceleration type configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccelerateType The acceleration type configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AccelerateType GetAccelerateType() const;

                    /**
                     * 设置The acceleration type configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AccelerateType The acceleration type configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccelerateType(const AccelerateType& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取The HTTPS configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Https The HTTPS configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Https GetHttps() const;

                    /**
                     * 设置The HTTPS configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Https The HTTPS configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取The cache configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheConfig The cache configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置The cache configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CacheConfig The cache configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCacheConfig(const CacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     */
                    bool CacheConfigHasBeenSet() const;

                    /**
                     * 获取The origin configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Origin The origin configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置The origin configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Origin The origin configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取The security type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecurityType The security type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SecurityType GetSecurityType() const;

                    /**
                     * 设置The security type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SecurityType The security type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSecurityType(const SecurityType& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取The cache key configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheKey The cache key configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置The cache key configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CacheKey The cache key configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取The smart compression configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Compression The smart compression configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置The smart compression configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Compression The smart compression configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取The WAF protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Waf The WAF protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Waf GetWaf() const;

                    /**
                     * 设置The WAF protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Waf The WAF protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWaf(const Waf& _waf);

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取The CC protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CC The CC protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CC GetCC() const;

                    /**
                     * 设置The CC protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CC The CC protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCC(const CC& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取DDoS mitigation configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoS DDoS mitigation configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoS GetDDoS() const;

                    /**
                     * 设置DDoS mitigation configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoS DDoS mitigation configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoS(const DDoS& _dDoS);

                    /**
                     * 判断参数 DDoS 是否已赋值
                     * @return DDoS 是否已赋值
                     */
                    bool DDoSHasBeenSet() const;

                    /**
                     * 获取The smart routing configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SmartRouting The smart routing configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置The smart routing configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SmartRouting The smart routing configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSmartRouting(const SmartRouting& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取The IPv6 access configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ipv6 The IPv6 access configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置The IPv6 access configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Ipv6 The IPv6 access configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取
                     * @return ClientIpCountry 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置
                     * @param ClientIpCountry 
                     */
                    void SetClientIpCountry(const ClientIpCountry& _clientIpCountry);

                    /**
                     * 判断参数 ClientIpCountry 是否已赋值
                     * @return ClientIpCountry 是否已赋值
                     */
                    bool ClientIpCountryHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The acceleration status. Values:
<li>`process`: In progress</li>
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The domain name.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Name of the site
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The assigned CNAME
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * The resource ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The lock status.
                     */
                    int64_t m_lock;
                    bool m_lockHasBeenSet;

                    /**
                     * The domain name status.
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The acceleration area of the domain name. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The acceleration type configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AccelerateType m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * The HTTPS configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * The cache configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * The origin configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * The security type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SecurityType m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * The cache key configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * The smart compression configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * The WAF protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Waf m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * The CC protection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CC m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * DDoS mitigation configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoS m_dDoS;
                    bool m_dDoSHasBeenSet;

                    /**
                     * The smart routing configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * The IPv6 access configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETAILHOST_H_
