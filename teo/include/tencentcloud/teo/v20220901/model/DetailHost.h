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
                * Domain configuration information
                */
                class DetailHost : public AbstractModel
                {
                public:
                    DetailHost();
                    ~DetailHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Acceleration service status. Valid values:
<li> process: deploying;</li>
<li> online: started;</li>
<li>offline: closed.</li>
                     * @return Status Acceleration service status. Valid values:
<li> process: deploying;</li>
<li> online: started;</li>
<li>offline: closed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Acceleration service status. Valid values:
<li> process: deploying;</li>
<li> online: started;</li>
<li>offline: closed.</li>
                     * @param _status Acceleration service status. Valid values:
<li> process: deploying;</li>
<li> online: started;</li>
<li>offline: closed.</li>
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
                     * 获取Domain name.
                     * @return Host Domain name.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name.
                     * @param _host Domain name.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Site name.
                     * @return ZoneName Site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name.
                     * @param _zoneName Site name.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Assigned Cname domain name
                     * @return Cname Assigned Cname domain name
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Assigned Cname domain name
                     * @param _cname Assigned Cname domain name
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
                     * 获取Resource ID.
                     * @return Id Resource ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource ID.
                     * @param _id Resource ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Lock status.
                     * @return Lock Lock status.
                     * 
                     */
                    int64_t GetLock() const;

                    /**
                     * 设置Lock status.
                     * @param _lock Lock status.
                     * 
                     */
                    void SetLock(const int64_t& _lock);

                    /**
                     * 判断参数 Lock 是否已赋值
                     * @return Lock 是否已赋值
                     * 
                     */
                    bool LockHasBeenSet() const;

                    /**
                     * 获取Domain name status type.
                     * @return Mode Domain name status type.
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置Domain name status type.
                     * @param _mode Domain name status type.
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Domain name acceleration area. Valid values:
<li> global: global;</li>
<li> mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>
                     * @return Area Domain name acceleration area. Valid values:
<li> global: global;</li>
<li> mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Domain name acceleration area. Valid values:
<li> global: global;</li>
<li> mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>
                     * @param _area Domain name acceleration area. Valid values:
<li> global: global;</li>
<li> mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>
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
                     * 获取Acceleration type configuration item.
                     * @return AccelerateType Acceleration type configuration item.
                     * 
                     */
                    AccelerateType GetAccelerateType() const;

                    /**
                     * 设置Acceleration type configuration item.
                     * @param _accelerateType Acceleration type configuration item.
                     * 
                     */
                    void SetAccelerateType(const AccelerateType& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     * 
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取Https configuration item.
                     * @return Https Https configuration item.
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https configuration item.
                     * @param _https Https configuration item.
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
                     * 获取Cache configuration item.
                     * @return CacheConfig Cache configuration item.
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置Cache configuration item.
                     * @param _cacheConfig Cache configuration item.
                     * 
                     */
                    void SetCacheConfig(const CacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                    /**
                     * 获取Origin server configuration item.
                     * @return Origin Origin server configuration item.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration item.
                     * @param _origin Origin server configuration item.
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
                     * 获取Security type.
                     * @return SecurityType Security type.
                     * 
                     */
                    SecurityType GetSecurityType() const;

                    /**
                     * 设置Security type.
                     * @param _securityType Security type.
                     * 
                     */
                    void SetSecurityType(const SecurityType& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取Cache key configuration item.
                     * @return CacheKey Cache key configuration item.
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置Cache key configuration item.
                     * @param _cacheKey Cache key configuration item.
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
                     * 获取Intelligent compression configuration item.
                     * @return Compression Intelligent compression configuration item.
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置Intelligent compression configuration item.
                     * @param _compression Intelligent compression configuration item.
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
                     * 获取Waf protection configuration item.
                     * @return Waf Waf protection configuration item.
                     * 
                     */
                    Waf GetWaf() const;

                    /**
                     * 设置Waf protection configuration item.
                     * @param _waf Waf protection configuration item.
                     * 
                     */
                    void SetWaf(const Waf& _waf);

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     * 
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取CC protection configuration item.
                     * @return CC CC protection configuration item.
                     * 
                     */
                    CC GetCC() const;

                    /**
                     * 设置CC protection configuration item.
                     * @param _cC CC protection configuration item.
                     * 
                     */
                    void SetCC(const CC& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取DDoS protection configuration.
                     * @return DDoS DDoS protection configuration.
                     * 
                     */
                    DDoS GetDDoS() const;

                    /**
                     * 设置DDoS protection configuration.
                     * @param _dDoS DDoS protection configuration.
                     * 
                     */
                    void SetDDoS(const DDoS& _dDoS);

                    /**
                     * 判断参数 DDoS 是否已赋值
                     * @return DDoS 是否已赋值
                     * 
                     */
                    bool DDoSHasBeenSet() const;

                    /**
                     * 获取Intelligent routing configuration item.
                     * @return SmartRouting Intelligent routing configuration item.
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置Intelligent routing configuration item.
                     * @param _smartRouting Intelligent routing configuration item.
                     * 
                     */
                    void SetSmartRouting(const SmartRouting& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     * 
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取Ipv6 access configuration item.
                     * @return Ipv6 Ipv6 access configuration item.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 access configuration item.
                     * @param _ipv6 Ipv6 access configuration item.
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
                     * 获取Configuration of whether to carry the region of the client IP during origin-pull.
                     * @return ClientIpCountry Configuration of whether to carry the region of the client IP during origin-pull.
                     * 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置Configuration of whether to carry the region of the client IP during origin-pull.
                     * @param _clientIpCountry Configuration of whether to carry the region of the client IP during origin-pull.
                     * 
                     */
                    void SetClientIpCountry(const ClientIpCountry& _clientIpCountry);

                    /**
                     * 判断参数 ClientIpCountry 是否已赋值
                     * @return ClientIpCountry 是否已赋值
                     * 
                     */
                    bool ClientIpCountryHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration service status. Valid values:
<li> process: deploying;</li>
<li> online: started;</li>
<li>offline: closed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Domain name.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Assigned Cname domain name
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Resource ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Lock status.
                     */
                    int64_t m_lock;
                    bool m_lockHasBeenSet;

                    /**
                     * Domain name status type.
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Domain name acceleration area. Valid values:
<li> global: global;</li>
<li> mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Acceleration type configuration item.
                     */
                    AccelerateType m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * Https configuration item.
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * Cache configuration item.
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * Origin server configuration item.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Security type.
                     */
                    SecurityType m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * Cache key configuration item.
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Intelligent compression configuration item.
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Waf protection configuration item.
                     */
                    Waf m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * CC protection configuration item.
                     */
                    CC m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * DDoS protection configuration.
                     */
                    DDoS m_dDoS;
                    bool m_dDoSHasBeenSet;

                    /**
                     * Intelligent routing configuration item.
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * Ipv6 access configuration item.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Configuration of whether to carry the region of the client IP during origin-pull.
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETAILHOST_H_
