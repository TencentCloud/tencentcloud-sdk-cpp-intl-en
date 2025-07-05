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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the accessibility of an instance in the public network, including its network billing method, maximum bandwidth, etc.
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network connection billing plan. Valid value: <br><li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour.
                     * @return InternetChargeType Network connection billing plan. Valid value: <br><li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour.
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network connection billing plan. Valid value: <br><li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour.
                     * @param _internetChargeType Network connection billing plan. Valid value: <br><li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour.
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取The maximum outbound bandwidth of the public network, in Mbps. The default value is 0 Mbps. The upper limit of bandwidth varies for different models. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/12523?from_cn_redirect=1).
                     * @return InternetMaxBandwidthOut The maximum outbound bandwidth of the public network, in Mbps. The default value is 0 Mbps. The upper limit of bandwidth varies for different models. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/12523?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The maximum outbound bandwidth of the public network, in Mbps. The default value is 0 Mbps. The upper limit of bandwidth varies for different models. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/12523?from_cn_redirect=1).
                     * @param _internetMaxBandwidthOut The maximum outbound bandwidth of the public network, in Mbps. The default value is 0 Mbps. The upper limit of bandwidth varies for different models. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/12523?from_cn_redirect=1).
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Whether to allocate a public IP address. Valid values:<br><li>true: Allocate a public IP address.</li><li>false: Do not allocate a public IP address.</li><br>When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable the public IP address. The public IP address is enabled by default. When the public network bandwidth is 0, allocating the public IP address is not supported. This parameter is only used as an input parameter in the RunInstances API.
                     * @return PublicIpAssigned Whether to allocate a public IP address. Valid values:<br><li>true: Allocate a public IP address.</li><li>false: Do not allocate a public IP address.</li><br>When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable the public IP address. The public IP address is enabled by default. When the public network bandwidth is 0, allocating the public IP address is not supported. This parameter is only used as an input parameter in the RunInstances API.
                     * 
                     */
                    bool GetPublicIpAssigned() const;

                    /**
                     * 设置Whether to allocate a public IP address. Valid values:<br><li>true: Allocate a public IP address.</li><li>false: Do not allocate a public IP address.</li><br>When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable the public IP address. The public IP address is enabled by default. When the public network bandwidth is 0, allocating the public IP address is not supported. This parameter is only used as an input parameter in the RunInstances API.
                     * @param _publicIpAssigned Whether to allocate a public IP address. Valid values:<br><li>true: Allocate a public IP address.</li><li>false: Do not allocate a public IP address.</li><br>When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable the public IP address. The public IP address is enabled by default. When the public network bandwidth is 0, allocating the public IP address is not supported. This parameter is only used as an input parameter in the RunInstances API.
                     * 
                     */
                    void SetPublicIpAssigned(const bool& _publicIpAssigned);

                    /**
                     * 判断参数 PublicIpAssigned 是否已赋值
                     * @return PublicIpAssigned 是否已赋值
                     * 
                     */
                    bool PublicIpAssignedHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID. it can be obtained through the `BandwidthPackageId` in the return value from the DescribeBandwidthPackages api. this parameter is used as an input parameter only in the RunInstances api.
                     * @return BandwidthPackageId Bandwidth package ID. it can be obtained through the `BandwidthPackageId` in the return value from the DescribeBandwidthPackages api. this parameter is used as an input parameter only in the RunInstances api.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID. it can be obtained through the `BandwidthPackageId` in the return value from the DescribeBandwidthPackages api. this parameter is used as an input parameter only in the RunInstances api.
                     * @param _bandwidthPackageId Bandwidth package ID. it can be obtained through the `BandwidthPackageId` in the return value from the DescribeBandwidthPackages api. this parameter is used as an input parameter only in the RunInstances api.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取The EIP line type. 
 <li>BGP Default: BGP</li>

For a user who has activated the static single-line IP allowlist, possible values are:

 <li>CMCC: China Mobile</li>
 <li>CTCC: China Telecom</li>
 <li>CUCC: China Unicom</li>

Note: Only certain regions support static single-line IP addresses.
                     * @return InternetServiceProvider The EIP line type. 
 <li>BGP Default: BGP</li>

For a user who has activated the static single-line IP allowlist, possible values are:

 <li>CMCC: China Mobile</li>
 <li>CTCC: China Telecom</li>
 <li>CUCC: China Unicom</li>

Note: Only certain regions support static single-line IP addresses.
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置The EIP line type. 
 <li>BGP Default: BGP</li>

For a user who has activated the static single-line IP allowlist, possible values are:

 <li>CMCC: China Mobile</li>
 <li>CTCC: China Telecom</li>
 <li>CUCC: China Unicom</li>

Note: Only certain regions support static single-line IP addresses.
                     * @param _internetServiceProvider The EIP line type. 
 <li>BGP Default: BGP</li>

For a user who has activated the static single-line IP allowlist, possible values are:

 <li>CMCC: China Mobile</li>
 <li>CTCC: China Telecom</li>
 <li>CUCC: China Unicom</li>

Note: Only certain regions support static single-line IP addresses.
                     * 
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取AddressType. Default value: `WanIP`.

For beta users of dedicated IP, the value can be:
<li>HighQualityEIP: Dedicated IP</li>
Note that dedicated IPs are only available in partial regions.

For beta users of Anti-DDoS IP, the value can be:
<li>AntiDDoSEIP: Anti-DDoS EIP</li>
Note that Anti-DDoS IPs are only available in partial regions.

This feature is currently in gradually released phase. To access it, please contact us.
                     * @return IPv4AddressType AddressType. Default value: `WanIP`.

For beta users of dedicated IP, the value can be:
<li>HighQualityEIP: Dedicated IP</li>
Note that dedicated IPs are only available in partial regions.

For beta users of Anti-DDoS IP, the value can be:
<li>AntiDDoSEIP: Anti-DDoS EIP</li>
Note that Anti-DDoS IPs are only available in partial regions.

This feature is currently in gradually released phase. To access it, please contact us.
                     * 
                     */
                    std::string GetIPv4AddressType() const;

                    /**
                     * 设置AddressType. Default value: `WanIP`.

For beta users of dedicated IP, the value can be:
<li>HighQualityEIP: Dedicated IP</li>
Note that dedicated IPs are only available in partial regions.

For beta users of Anti-DDoS IP, the value can be:
<li>AntiDDoSEIP: Anti-DDoS EIP</li>
Note that Anti-DDoS IPs are only available in partial regions.

This feature is currently in gradually released phase. To access it, please contact us.
                     * @param _iPv4AddressType AddressType. Default value: `WanIP`.

For beta users of dedicated IP, the value can be:
<li>HighQualityEIP: Dedicated IP</li>
Note that dedicated IPs are only available in partial regions.

For beta users of Anti-DDoS IP, the value can be:
<li>AntiDDoSEIP: Anti-DDoS EIP</li>
Note that Anti-DDoS IPs are only available in partial regions.

This feature is currently in gradually released phase. To access it, please contact us.
                     * 
                     */
                    void SetIPv4AddressType(const std::string& _iPv4AddressType);

                    /**
                     * 判断参数 IPv4AddressType 是否已赋值
                     * @return IPv4AddressType 是否已赋值
                     * 
                     */
                    bool IPv4AddressTypeHasBeenSet() const;

                    /**
                     * 获取Indicates the type of EIPv6. Valid values:

<li>EIPv6: common IPv6</li>
<li>HighQualityEIPv6: dedicated IPv6</li>
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions. 

Default: `EIPv6`

This feature is currently in gradually released phase. To access it, please contact us.
                     * @return IPv6AddressType Indicates the type of EIPv6. Valid values:

<li>EIPv6: common IPv6</li>
<li>HighQualityEIPv6: dedicated IPv6</li>
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions. 

Default: `EIPv6`

This feature is currently in gradually released phase. To access it, please contact us.
                     * 
                     */
                    std::string GetIPv6AddressType() const;

                    /**
                     * 设置Indicates the type of EIPv6. Valid values:

<li>EIPv6: common IPv6</li>
<li>HighQualityEIPv6: dedicated IPv6</li>
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions. 

Default: `EIPv6`

This feature is currently in gradually released phase. To access it, please contact us.
                     * @param _iPv6AddressType Indicates the type of EIPv6. Valid values:

<li>EIPv6: common IPv6</li>
<li>HighQualityEIPv6: dedicated IPv6</li>
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions. 

Default: `EIPv6`

This feature is currently in gradually released phase. To access it, please contact us.
                     * 
                     */
                    void SetIPv6AddressType(const std::string& _iPv6AddressType);

                    /**
                     * 判断参数 IPv6AddressType 是否已赋值
                     * @return IPv6AddressType 是否已赋值
                     * 
                     */
                    bool IPv6AddressTypeHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS service package ID. This is required when you want to request an Anti-DDoS IP.
                     * @return AntiDDoSPackageId Anti-DDoS service package ID. This is required when you want to request an Anti-DDoS IP.
                     * 
                     */
                    std::string GetAntiDDoSPackageId() const;

                    /**
                     * 设置Anti-DDoS service package ID. This is required when you want to request an Anti-DDoS IP.
                     * @param _antiDDoSPackageId Anti-DDoS service package ID. This is required when you want to request an Anti-DDoS IP.
                     * 
                     */
                    void SetAntiDDoSPackageId(const std::string& _antiDDoSPackageId);

                    /**
                     * 判断参数 AntiDDoSPackageId 是否已赋值
                     * @return AntiDDoSPackageId 是否已赋值
                     * 
                     */
                    bool AntiDDoSPackageIdHasBeenSet() const;

                private:

                    /**
                     * Network connection billing plan. Valid value: <br><li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour.
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * The maximum outbound bandwidth of the public network, in Mbps. The default value is 0 Mbps. The upper limit of bandwidth varies for different models. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/12523?from_cn_redirect=1).
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Whether to allocate a public IP address. Valid values:<br><li>true: Allocate a public IP address.</li><li>false: Do not allocate a public IP address.</li><br>When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable the public IP address. The public IP address is enabled by default. When the public network bandwidth is 0, allocating the public IP address is not supported. This parameter is only used as an input parameter in the RunInstances API.
                     */
                    bool m_publicIpAssigned;
                    bool m_publicIpAssignedHasBeenSet;

                    /**
                     * Bandwidth package ID. it can be obtained through the `BandwidthPackageId` in the return value from the DescribeBandwidthPackages api. this parameter is used as an input parameter only in the RunInstances api.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * The EIP line type. 
 <li>BGP Default: BGP</li>

For a user who has activated the static single-line IP allowlist, possible values are:

 <li>CMCC: China Mobile</li>
 <li>CTCC: China Telecom</li>
 <li>CUCC: China Unicom</li>

Note: Only certain regions support static single-line IP addresses.
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * AddressType. Default value: `WanIP`.

For beta users of dedicated IP, the value can be:
<li>HighQualityEIP: Dedicated IP</li>
Note that dedicated IPs are only available in partial regions.

For beta users of Anti-DDoS IP, the value can be:
<li>AntiDDoSEIP: Anti-DDoS EIP</li>
Note that Anti-DDoS IPs are only available in partial regions.

This feature is currently in gradually released phase. To access it, please contact us.
                     */
                    std::string m_iPv4AddressType;
                    bool m_iPv4AddressTypeHasBeenSet;

                    /**
                     * Indicates the type of EIPv6. Valid values:

<li>EIPv6: common IPv6</li>
<li>HighQualityEIPv6: dedicated IPv6</li>
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions. 

Default: `EIPv6`

This feature is currently in gradually released phase. To access it, please contact us.
                     */
                    std::string m_iPv6AddressType;
                    bool m_iPv6AddressTypeHasBeenSet;

                    /**
                     * Anti-DDoS service package ID. This is required when you want to request an Anti-DDoS IP.
                     */
                    std::string m_antiDDoSPackageId;
                    bool m_antiDDoSPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INTERNETACCESSIBLE_H_
