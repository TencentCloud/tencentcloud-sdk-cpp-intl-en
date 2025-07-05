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
                     * 获取Name of the L4 proxy instance, which can contain 1-50 characters, including a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modification is not allowed after creation.

                     * @return ProxyName Name of the L4 proxy instance, which can contain 1-50 characters, including a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modification is not allowed after creation.

                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Name of the L4 proxy instance, which can contain 1-50 characters, including a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modification is not allowed after creation.

                     * @param _proxyName Name of the L4 proxy instance, which can contain 1-50 characters, including a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modification is not allowed after creation.

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
                     * 获取Acceleration zone of the L4 proxy instance.
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland);</li>
<li>global: global availability zone.</li>
                     * @return Area Acceleration zone of the L4 proxy instance.
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland);</li>
<li>global: global availability zone.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration zone of the L4 proxy instance.
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland);</li>
<li>global: global availability zone.</li>
                     * @param _area Acceleration zone of the L4 proxy instance.
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland);</li>
<li>global: global availability zone.</li>
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
                     * 获取Whether to enable IPv6 access. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>


                     * @return Ipv6 Whether to enable IPv6 access. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>


                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置Whether to enable IPv6 access. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>


                     * @param _ipv6 Whether to enable IPv6 access. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
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
                     * 获取Whether to enable static IP. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @return StaticIp Whether to enable static IP. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     * 
                     */
                    std::string GetStaticIp() const;

                    /**
                     * 设置Whether to enable static IP. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @param _staticIp Whether to enable static IP. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
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
                     * 获取Whether to enable network optimization for the Chinese mainland. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @return AccelerateMainland Whether to enable network optimization for the Chinese mainland. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     * 
                     */
                    std::string GetAccelerateMainland() const;

                    /**
                     * 设置Whether to enable network optimization for the Chinese mainland. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     * @param _accelerateMainland Whether to enable network optimization for the Chinese mainland. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
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
                     * 获取Configuration of L3/L4 DDoS protection. If this parameter is not input, the default platform protection option is used. For details, see [Exclusive DDoS Protection Usage] (https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     * @return DDosProtectionConfig Configuration of L3/L4 DDoS protection. If this parameter is not input, the default platform protection option is used. For details, see [Exclusive DDoS Protection Usage] (https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     * 
                     */
                    DDosProtectionConfig GetDDosProtectionConfig() const;

                    /**
                     * 设置Configuration of L3/L4 DDoS protection. If this parameter is not input, the default platform protection option is used. For details, see [Exclusive DDoS Protection Usage] (https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     * @param _dDosProtectionConfig Configuration of L3/L4 DDoS protection. If this parameter is not input, the default platform protection option is used. For details, see [Exclusive DDoS Protection Usage] (https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
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
                     * Name of the L4 proxy instance, which can contain 1-50 characters, including a-z, 0-9, and hyphens (-). However, hyphens (-) cannot be used individually or consecutively and should not be placed at the beginning or end of the name. Modification is not allowed after creation.

                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Acceleration zone of the L4 proxy instance.
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland);</li>
<li>global: global availability zone.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether to enable IPv6 access. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>


                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Whether to enable static IP. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     */
                    std::string m_staticIp;
                    bool m_staticIpHasBeenSet;

                    /**
                     * Whether to enable network optimization for the Chinese mainland. If this parameter is not input, the default value `off` is used. This configuration can be enabled only in certain acceleration zones and security protection configurations. For details, see [Creating an L4 Proxy Instance] (https://intl.cloud.tencent.com/document/product/1552/90025?from_cn_redirect=1). Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>

                     */
                    std::string m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * Configuration of L3/L4 DDoS protection. If this parameter is not input, the default platform protection option is used. For details, see [Exclusive DDoS Protection Usage] (https://intl.cloud.tencent.com/document/product/1552/95994?from_cn_redirect=1).
                     */
                    DDosProtectionConfig m_dDosProtectionConfig;
                    bool m_dDosProtectionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYREQUEST_H_
