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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateL4Proxy request structure.
                */
                class CreateL4ProxyRequest : public AbstractModel
                {
                public:
                    CreateL4ProxyRequest();
                    ~CreateL4ProxyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Layer 4 proxy instance name. You can enter 1-50 characters. Valid characters are a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modifications are not allowed after creation.
                     * @return ProxyName Layer 4 proxy instance name. You can enter 1-50 characters. Valid characters are a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modifications are not allowed after creation.
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Layer 4 proxy instance name. You can enter 1-50 characters. Valid characters are a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modifications are not allowed after creation.
                     * @param _proxyName Layer 4 proxy instance name. You can enter 1-50 characters. Valid characters are a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modifications are not allowed after creation.
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
                     * 获取Specifies whether to enable IPv6 access. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @return Ipv6 Specifies whether to enable IPv6 access. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置Specifies whether to enable IPv6 access. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @param _ipv6 Specifies whether to enable IPv6 access. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

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
                     * 获取Specifies whether to enable the fixed IP address. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @return StaticIp Specifies whether to enable the fixed IP address. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * 
                     */
                    std::string GetStaticIp() const;

                    /**
                     * 设置Specifies whether to enable the fixed IP address. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @param _staticIp Specifies whether to enable the fixed IP address. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

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
                     * 获取Specifies whether to enable network optimization in the Chinese mainland. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @return AccelerateMainland Specifies whether to enable network optimization in the Chinese mainland. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * 
                     */
                    std::string GetAccelerateMainland() const;

                    /**
                     * 设置Specifies whether to enable network optimization in the Chinese mainland. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @param _accelerateMainland Specifies whether to enable network optimization in the Chinese mainland. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

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
                     * 获取Layer 3/Layer 4 DDoS protection. The default protection option of the platform will be used if it is left empty. For details, see [Exclusive DDoS Protection Usage](https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     * @return DDosProtectionConfig Layer 3/Layer 4 DDoS protection. The default protection option of the platform will be used if it is left empty. For details, see [Exclusive DDoS Protection Usage](https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     * 
                     */
                    DDosProtectionConfig GetDDosProtectionConfig() const;

                    /**
                     * 设置Layer 3/Layer 4 DDoS protection. The default protection option of the platform will be used if it is left empty. For details, see [Exclusive DDoS Protection Usage](https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     * @param _dDosProtectionConfig Layer 3/Layer 4 DDoS protection. The default protection option of the platform will be used if it is left empty. For details, see [Exclusive DDoS Protection Usage](https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     * 
                     */
                    void SetDDosProtectionConfig(const DDosProtectionConfig& _dDosProtectionConfig);

                    /**
                     * 判断参数 DDosProtectionConfig 是否已赋值
                     * @return DDosProtectionConfig 是否已赋值
                     * 
                     */
                    bool DDosProtectionConfigHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Layer 4 proxy instance name. You can enter 1-50 characters. Valid characters are a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modifications are not allowed after creation.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Acceleration zone of the Layer 4 proxy instance.<li>mainland: Availability zone in the Chinese mainland;</li><li>overseas: Global availability zone (excluding the Chinese mainland);</li><li>global: Global availability zone.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specifies whether to enable IPv6 access. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Specifies whether to enable the fixed IP address. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     */
                    std::string m_staticIp;
                    bool m_staticIpHasBeenSet;

                    /**
                     * Specifies whether to enable network optimization in the Chinese mainland. The default value off is used if left empty. This configuration can only be enabled in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance](https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:<li>on: Enable;</li>
<li>off: Disable.</li>

                     */
                    std::string m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * Layer 3/Layer 4 DDoS protection. The default protection option of the platform will be used if it is left empty. For details, see [Exclusive DDoS Protection Usage](https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     */
                    DDosProtectionConfig m_dDosProtectionConfig;
                    bool m_dDosProtectionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYREQUEST_H_
