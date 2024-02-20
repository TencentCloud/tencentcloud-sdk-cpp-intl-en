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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDosProtectionConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Layer 4 proxy instance.
                */
                class L4Proxy : public AbstractModel
                {
                public:
                    L4Proxy();
                    ~L4Proxy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Layer 4 proxy instance ID.
                     * @return ProxyId Layer 4 proxy instance ID.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Layer 4 proxy instance ID.
                     * @param _proxyId Layer 4 proxy instance ID.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Layer 4 proxy instance name.
                     * @return ProxyName Layer 4 proxy instance name.
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Layer 4 proxy instance name.
                     * @param _proxyName Layer 4 proxy instance name.
                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取Acceleration zone of the Layer 4 proxy instance.<li>mainland: Availability zone in the Chinese mainland;</li><li>overseas: Global availability zone (excluding the Chinese mainland);</li><li>global: Global availability zone.</li>	
                     * @return Area Acceleration zone of the Layer 4 proxy instance.<li>mainland: Availability zone in the Chinese mainland;</li><li>overseas: Global availability zone (excluding the Chinese mainland);</li><li>global: Global availability zone.</li>	
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration zone of the Layer 4 proxy instance.<li>mainland: Availability zone in the Chinese mainland;</li><li>overseas: Global availability zone (excluding the Chinese mainland);</li><li>global: Global availability zone.</li>	
                     * @param _area Acceleration zone of the Layer 4 proxy instance.<li>mainland: Availability zone in the Chinese mainland;</li><li>overseas: Global availability zone (excluding the Chinese mainland);</li><li>global: Global availability zone.</li>	
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
                     * 获取Access via CNAME.
                     * @return Cname Access via CNAME.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Access via CNAME.
                     * @param _cname Access via CNAME.
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
                     * 获取After the fixed IP address is enabled, this value will return the corresponding access IP address; if it is not enabled, this value will be empty.
                     * @return Ips After the fixed IP address is enabled, this value will return the corresponding access IP address; if it is not enabled, this value will be empty.
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置After the fixed IP address is enabled, this value will return the corresponding access IP address; if it is not enabled, this value will be empty.
                     * @param _ips After the fixed IP address is enabled, this value will return the corresponding access IP address; if it is not enabled, this value will be empty.
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取Status of the Layer 4 proxy instance.<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>	
<li>stopping: Disabling;</li>
<li>banned: Blocked;</li>
<li>fail: Failed to deploy or disable.</li>	
                     * @return Status Status of the Layer 4 proxy instance.<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>	
<li>stopping: Disabling;</li>
<li>banned: Blocked;</li>
<li>fail: Failed to deploy or disable.</li>	
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the Layer 4 proxy instance.<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>	
<li>stopping: Disabling;</li>
<li>banned: Blocked;</li>
<li>fail: Failed to deploy or disable.</li>	
                     * @param _status Status of the Layer 4 proxy instance.<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>	
<li>stopping: Disabling;</li>
<li>banned: Blocked;</li>
<li>fail: Failed to deploy or disable.</li>	
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
                     * 获取Specifies whether to enable IPv6 access.<li>on: Enable;</li> <li>off: Disable.</li>
                     * @return Ipv6 Specifies whether to enable IPv6 access.<li>on: Enable;</li> <li>off: Disable.</li>
                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置Specifies whether to enable IPv6 access.<li>on: Enable;</li> <li>off: Disable.</li>
                     * @param _ipv6 Specifies whether to enable IPv6 access.<li>on: Enable;</li> <li>off: Disable.</li>
                     * 
                     */
                    void SetIpv6(const std::string& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable the fixed IP address.<li>on: Enable;</li> <li>off: Disable.</li>
                     * @return StaticIp Specifies whether to enable the fixed IP address.<li>on: Enable;</li> <li>off: Disable.</li>
                     * 
                     */
                    std::string GetStaticIp() const;

                    /**
                     * 设置Specifies whether to enable the fixed IP address.<li>on: Enable;</li> <li>off: Disable.</li>
                     * @param _staticIp Specifies whether to enable the fixed IP address.<li>on: Enable;</li> <li>off: Disable.</li>
                     * 
                     */
                    void SetStaticIp(const std::string& _staticIp);

                    /**
                     * 判断参数 StaticIp 是否已赋值
                     * @return StaticIp 是否已赋值
                     * 
                     */
                    bool StaticIpHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable network optimization in the Chinese mainland.<li>on: Enable</li> <li>off: Disable</li>
                     * @return AccelerateMainland Specifies whether to enable network optimization in the Chinese mainland.<li>on: Enable</li> <li>off: Disable</li>
                     * 
                     */
                    std::string GetAccelerateMainland() const;

                    /**
                     * 设置Specifies whether to enable network optimization in the Chinese mainland.<li>on: Enable</li> <li>off: Disable</li>
                     * @param _accelerateMainland Specifies whether to enable network optimization in the Chinese mainland.<li>on: Enable</li> <li>off: Disable</li>
                     * 
                     */
                    void SetAccelerateMainland(const std::string& _accelerateMainland);

                    /**
                     * 判断参数 AccelerateMainland 是否已赋值
                     * @return AccelerateMainland 是否已赋值
                     * 
                     */
                    bool AccelerateMainlandHasBeenSet() const;

                    /**
                     * 获取Security protection configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DDosProtectionConfig Security protection configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DDosProtectionConfig GetDDosProtectionConfig() const;

                    /**
                     * 设置Security protection configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dDosProtectionConfig Security protection configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDDosProtectionConfig(const DDosProtectionConfig& _dDosProtectionConfig);

                    /**
                     * 判断参数 DDosProtectionConfig 是否已赋值
                     * @return DDosProtectionConfig 是否已赋值
                     * 
                     */
                    bool DDosProtectionConfigHasBeenSet() const;

                    /**
                     * 获取Number of forwarding rules under the Layer 4 proxy instance.
                     * @return L4ProxyRuleCount Number of forwarding rules under the Layer 4 proxy instance.
                     * 
                     */
                    int64_t GetL4ProxyRuleCount() const;

                    /**
                     * 设置Number of forwarding rules under the Layer 4 proxy instance.
                     * @param _l4ProxyRuleCount Number of forwarding rules under the Layer 4 proxy instance.
                     * 
                     */
                    void SetL4ProxyRuleCount(const int64_t& _l4ProxyRuleCount);

                    /**
                     * 判断参数 L4ProxyRuleCount 是否已赋值
                     * @return L4ProxyRuleCount 是否已赋值
                     * 
                     */
                    bool L4ProxyRuleCountHasBeenSet() const;

                    /**
                     * 获取Latest modification time.
                     * @return UpdateTime Latest modification time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest modification time.
                     * @param _updateTime Latest modification time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Layer 4 proxy instance ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Layer 4 proxy instance name.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Acceleration zone of the Layer 4 proxy instance.<li>mainland: Availability zone in the Chinese mainland;</li><li>overseas: Global availability zone (excluding the Chinese mainland);</li><li>global: Global availability zone.</li>	
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Access via CNAME.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * After the fixed IP address is enabled, this value will return the corresponding access IP address; if it is not enabled, this value will be empty.
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * Status of the Layer 4 proxy instance.<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>	
<li>stopping: Disabling;</li>
<li>banned: Blocked;</li>
<li>fail: Failed to deploy or disable.</li>	
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies whether to enable IPv6 access.<li>on: Enable;</li> <li>off: Disable.</li>
                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Specifies whether to enable the fixed IP address.<li>on: Enable;</li> <li>off: Disable.</li>
                     */
                    std::string m_staticIp;
                    bool m_staticIpHasBeenSet;

                    /**
                     * Specifies whether to enable network optimization in the Chinese mainland.<li>on: Enable</li> <li>off: Disable</li>
                     */
                    std::string m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * Security protection configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DDosProtectionConfig m_dDosProtectionConfig;
                    bool m_dDosProtectionConfigHasBeenSet;

                    /**
                     * Number of forwarding rules under the Layer 4 proxy instance.
                     */
                    int64_t m_l4ProxyRuleCount;
                    bool m_l4ProxyRuleCountHasBeenSet;

                    /**
                     * Latest modification time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXY_H_
