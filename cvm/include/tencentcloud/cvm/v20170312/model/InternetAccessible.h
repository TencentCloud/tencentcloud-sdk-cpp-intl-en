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
                     * 获取Network connection billing plan. Valid value:

<li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour. </li>
<li>BANDWIDTH_PACKAGE: Bandwidth package user. </li>
                     * @return InternetChargeType Network connection billing plan. Valid value:

<li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour. </li>
<li>BANDWIDTH_PACKAGE: Bandwidth package user. </li>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network connection billing plan. Valid value:

<li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour. </li>
<li>BANDWIDTH_PACKAGE: Bandwidth package user. </li>
                     * @param _internetChargeType Network connection billing plan. Valid value:

<li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour. </li>
<li>BANDWIDTH_PACKAGE: Bandwidth package user. </li>
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
                     * 获取Line type. for details on various types of lines and supported regions, refer to [EIP IP address types](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1). default value: BGP.
<Li>BGP: specifies the general bgp line.</li>.
For a user with static single-line IP allowlist enabled, valid values include:.
<Li>CMCC: china mobile.</li>.
<Li>CTCC: china telecom</li>.
<Li>CUCC: china unicom</li>.
Note: The static single-line IP is only supported in some regions.


                     * @return InternetServiceProvider Line type. for details on various types of lines and supported regions, refer to [EIP IP address types](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1). default value: BGP.
<Li>BGP: specifies the general bgp line.</li>.
For a user with static single-line IP allowlist enabled, valid values include:.
<Li>CMCC: china mobile.</li>.
<Li>CTCC: china telecom</li>.
<Li>CUCC: china unicom</li>.
Note: The static single-line IP is only supported in some regions.


                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置Line type. for details on various types of lines and supported regions, refer to [EIP IP address types](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1). default value: BGP.
<Li>BGP: specifies the general bgp line.</li>.
For a user with static single-line IP allowlist enabled, valid values include:.
<Li>CMCC: china mobile.</li>.
<Li>CTCC: china telecom</li>.
<Li>CUCC: china unicom</li>.
Note: The static single-line IP is only supported in some regions.


                     * @param _internetServiceProvider Line type. for details on various types of lines and supported regions, refer to [EIP IP address types](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1). default value: BGP.
<Li>BGP: specifies the general bgp line.</li>.
For a user with static single-line IP allowlist enabled, valid values include:.
<Li>CMCC: china mobile.</li>.
<Li>CTCC: china telecom</li>.
<Li>CUCC: china unicom</li>.
Note: The static single-line IP is only supported in some regions.


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
                     * 获取Specifies the public IP type.

<Li>WanIP: specifies the public ip address.</li>.
<Li>HighQualityEIP: specifies a high quality ip. high quality ip is only supported in Singapore and hong kong (china).</li>.
<li> AntiDDoSEIP: specifies the anti-ddos eip. only partial regions support anti-ddos eip. details visible in the [elastic IP product overview](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1).</li>.
If needed, assign a public IPv4 address to the resource by specifying the IPv4 address type.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     * @return IPv4AddressType Specifies the public IP type.

<Li>WanIP: specifies the public ip address.</li>.
<Li>HighQualityEIP: specifies a high quality ip. high quality ip is only supported in Singapore and hong kong (china).</li>.
<li> AntiDDoSEIP: specifies the anti-ddos eip. only partial regions support anti-ddos eip. details visible in the [elastic IP product overview](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1).</li>.
If needed, assign a public IPv4 address to the resource by specifying the IPv4 address type.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     * 
                     */
                    std::string GetIPv4AddressType() const;

                    /**
                     * 设置Specifies the public IP type.

<Li>WanIP: specifies the public ip address.</li>.
<Li>HighQualityEIP: specifies a high quality ip. high quality ip is only supported in Singapore and hong kong (china).</li>.
<li> AntiDDoSEIP: specifies the anti-ddos eip. only partial regions support anti-ddos eip. details visible in the [elastic IP product overview](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1).</li>.
If needed, assign a public IPv4 address to the resource by specifying the IPv4 address type.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     * @param _iPv4AddressType Specifies the public IP type.

<Li>WanIP: specifies the public ip address.</li>.
<Li>HighQualityEIP: specifies a high quality ip. high quality ip is only supported in Singapore and hong kong (china).</li>.
<li> AntiDDoSEIP: specifies the anti-ddos eip. only partial regions support anti-ddos eip. details visible in the [elastic IP product overview](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1).</li>.
If needed, assign a public IPv4 address to the resource by specifying the IPv4 address type.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
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
                     * 获取Indicates the type of elastic public IPv6.
<Li>EIPv6: elastic ip version 6.</li>.
<Li>HighQualityEIPv6: specifies the high quality ipv6. highqualityeipv6 is only supported in hong kong (china).</li>.
If needed, assign an elastic IPv6 address for resource allocation.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     * @return IPv6AddressType Indicates the type of elastic public IPv6.
<Li>EIPv6: elastic ip version 6.</li>.
<Li>HighQualityEIPv6: specifies the high quality ipv6. highqualityeipv6 is only supported in hong kong (china).</li>.
If needed, assign an elastic IPv6 address for resource allocation.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     * 
                     */
                    std::string GetIPv6AddressType() const;

                    /**
                     * 设置Indicates the type of elastic public IPv6.
<Li>EIPv6: elastic ip version 6.</li>.
<Li>HighQualityEIPv6: specifies the high quality ipv6. highqualityeipv6 is only supported in hong kong (china).</li>.
If needed, assign an elastic IPv6 address for resource allocation.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     * @param _iPv6AddressType Indicates the type of elastic public IPv6.
<Li>EIPv6: elastic ip version 6.</li>.
<Li>HighQualityEIPv6: specifies the high quality ipv6. highqualityeipv6 is only supported in hong kong (china).</li>.
If needed, assign an elastic IPv6 address for resource allocation.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
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
                     * 获取DDoS protection package unique ID. this field is required when applying for a ddos protection IP.

                     * @return AntiDDoSPackageId DDoS protection package unique ID. this field is required when applying for a ddos protection IP.

                     * 
                     */
                    std::string GetAntiDDoSPackageId() const;

                    /**
                     * 设置DDoS protection package unique ID. this field is required when applying for a ddos protection IP.

                     * @param _antiDDoSPackageId DDoS protection package unique ID. this field is required when applying for a ddos protection IP.

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
                     * Network connection billing plan. Valid value:

<li>TRAFFIC_POSTPAID_BY_HOUR: pay after use. You are billed for your traffic, by the hour. </li>
<li>BANDWIDTH_PACKAGE: Bandwidth package user. </li>
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
                     * Line type. for details on various types of lines and supported regions, refer to [EIP IP address types](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1). default value: BGP.
<Li>BGP: specifies the general bgp line.</li>.
For a user with static single-line IP allowlist enabled, valid values include:.
<Li>CMCC: china mobile.</li>.
<Li>CTCC: china telecom</li>.
<Li>CUCC: china unicom</li>.
Note: The static single-line IP is only supported in some regions.


                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * Specifies the public IP type.

<Li>WanIP: specifies the public ip address.</li>.
<Li>HighQualityEIP: specifies a high quality ip. high quality ip is only supported in Singapore and hong kong (china).</li>.
<li> AntiDDoSEIP: specifies the anti-ddos eip. only partial regions support anti-ddos eip. details visible in the [elastic IP product overview](https://www.tencentcloud.comom/document/product/1199/41646?from_cn_redirect=1).</li>.
If needed, assign a public IPv4 address to the resource by specifying the IPv4 address type.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     */
                    std::string m_iPv4AddressType;
                    bool m_iPv4AddressTypeHasBeenSet;

                    /**
                     * Indicates the type of elastic public IPv6.
<Li>EIPv6: elastic ip version 6.</li>.
<Li>HighQualityEIPv6: specifies the high quality ipv6. highqualityeipv6 is only supported in hong kong (china).</li>.
If needed, assign an elastic IPv6 address for resource allocation.

This feature is in beta test in selected regions. submit a ticket for consultation (https://console.cloud.tencent.com/workorder/category) if needed.
                     */
                    std::string m_iPv6AddressType;
                    bool m_iPv6AddressTypeHasBeenSet;

                    /**
                     * DDoS protection package unique ID. this field is required when applying for a ddos protection IP.

                     */
                    std::string m_antiDDoSPackageId;
                    bool m_antiDDoSPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INTERNETACCESSIBLE_H_
