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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressChargePrepaid.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AllocateAddresses request structure.
                */
                class AllocateAddressesRequest : public AbstractModel
                {
                public:
                    AllocateAddressesRequest();
                    ~AllocateAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of EIPs. Default: 1.
                     * @return AddressCount The number of EIPs. Default: 1.
                     * 
                     */
                    int64_t GetAddressCount() const;

                    /**
                     * 设置The number of EIPs. Default: 1.
                     * @param _addressCount The number of EIPs. Default: 1.
                     * 
                     */
                    void SetAddressCount(const int64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     * 
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取The EIP line type. Default: BGP.
<ul style="margin:0"><li>For a user who has activated the static single-line IP allowlist, possible values are:<ul><li>CMCC: China Mobile</li>
<li>CTCC: China Telecom</li>
<li>CUCC: China Unicom</li></ul>Note: Only certain regions support static single-line IP addresses.</li></ul>
                     * @return InternetServiceProvider The EIP line type. Default: BGP.
<ul style="margin:0"><li>For a user who has activated the static single-line IP allowlist, possible values are:<ul><li>CMCC: China Mobile</li>
<li>CTCC: China Telecom</li>
<li>CUCC: China Unicom</li></ul>Note: Only certain regions support static single-line IP addresses.</li></ul>
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置The EIP line type. Default: BGP.
<ul style="margin:0"><li>For a user who has activated the static single-line IP allowlist, possible values are:<ul><li>CMCC: China Mobile</li>
<li>CTCC: China Telecom</li>
<li>CUCC: China Unicom</li></ul>Note: Only certain regions support static single-line IP addresses.</li></ul>
                     * @param _internetServiceProvider The EIP line type. Default: BGP.
<ul style="margin:0"><li>For a user who has activated the static single-line IP allowlist, possible values are:<ul><li>CMCC: China Mobile</li>
<li>CTCC: China Telecom</li>
<li>CUCC: China Unicom</li></ul>Note: Only certain regions support static single-line IP addresses.</li></ul>
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
                     * 获取The EIP billing method.
<ul style="margin:0"><li>For bill-by-IP account beta users, valid values: <ul><li>BANDWIDTH_PACKAGE: paid by the [bandwidth package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)(who must also be bandwidth package beta users)</li>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>If you are not a bill-by-IP account beta user, the EIP billing is the same as that for the instance bound to the EIP. Therefore, you do not need to pass in this parameter.</li></ul>
                     * @return InternetChargeType The EIP billing method.
<ul style="margin:0"><li>For bill-by-IP account beta users, valid values: <ul><li>BANDWIDTH_PACKAGE: paid by the [bandwidth package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)(who must also be bandwidth package beta users)</li>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>If you are not a bill-by-IP account beta user, the EIP billing is the same as that for the instance bound to the EIP. Therefore, you do not need to pass in this parameter.</li></ul>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置The EIP billing method.
<ul style="margin:0"><li>For bill-by-IP account beta users, valid values: <ul><li>BANDWIDTH_PACKAGE: paid by the [bandwidth package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)(who must also be bandwidth package beta users)</li>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>If you are not a bill-by-IP account beta user, the EIP billing is the same as that for the instance bound to the EIP. Therefore, you do not need to pass in this parameter.</li></ul>
                     * @param _internetChargeType The EIP billing method.
<ul style="margin:0"><li>For bill-by-IP account beta users, valid values: <ul><li>BANDWIDTH_PACKAGE: paid by the [bandwidth package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)(who must also be bandwidth package beta users)</li>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>If you are not a bill-by-IP account beta user, the EIP billing is the same as that for the instance bound to the EIP. Therefore, you do not need to pass in this parameter.</li></ul>
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
                     * 获取The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For bill-by-IP account beta users, the bandwidth cap range is determined by the EIP billing mode. <ul><li>`BANDWIDTH_PACKAGE`: 1 Mbps to 2000 Mbps</li>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li></ul>Default value: 1 Mbps </li>
<li>If you are not a bill-by-IP account beta user, the EIP outbound bandwidth cap is subject to the bandwidth cap of the instance bound to the EIP. Therefore, you do not need to pass in this parameter. </li></ul>
                     * @return InternetMaxBandwidthOut The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For bill-by-IP account beta users, the bandwidth cap range is determined by the EIP billing mode. <ul><li>`BANDWIDTH_PACKAGE`: 1 Mbps to 2000 Mbps</li>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li></ul>Default value: 1 Mbps </li>
<li>If you are not a bill-by-IP account beta user, the EIP outbound bandwidth cap is subject to the bandwidth cap of the instance bound to the EIP. Therefore, you do not need to pass in this parameter. </li></ul>
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For bill-by-IP account beta users, the bandwidth cap range is determined by the EIP billing mode. <ul><li>`BANDWIDTH_PACKAGE`: 1 Mbps to 2000 Mbps</li>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li></ul>Default value: 1 Mbps </li>
<li>If you are not a bill-by-IP account beta user, the EIP outbound bandwidth cap is subject to the bandwidth cap of the instance bound to the EIP. Therefore, you do not need to pass in this parameter. </li></ul>
                     * @param _internetMaxBandwidthOut The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For bill-by-IP account beta users, the bandwidth cap range is determined by the EIP billing mode. <ul><li>`BANDWIDTH_PACKAGE`: 1 Mbps to 2000 Mbps</li>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li></ul>Default value: 1 Mbps </li>
<li>If you are not a bill-by-IP account beta user, the EIP outbound bandwidth cap is subject to the bandwidth cap of the instance bound to the EIP. Therefore, you do not need to pass in this parameter. </li></ul>
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
                     * 获取A required billing parameter for an EIP billed by monthly bandwidth subscription. For EIPs using other billing modes, it can be ignored.
                     * @return AddressChargePrepaid A required billing parameter for an EIP billed by monthly bandwidth subscription. For EIPs using other billing modes, it can be ignored.
                     * 
                     */
                    AddressChargePrepaid GetAddressChargePrepaid() const;

                    /**
                     * 设置A required billing parameter for an EIP billed by monthly bandwidth subscription. For EIPs using other billing modes, it can be ignored.
                     * @param _addressChargePrepaid A required billing parameter for an EIP billed by monthly bandwidth subscription. For EIPs using other billing modes, it can be ignored.
                     * 
                     */
                    void SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid);

                    /**
                     * 判断参数 AddressChargePrepaid 是否已赋值
                     * @return AddressChargePrepaid 是否已赋值
                     * 
                     */
                    bool AddressChargePrepaidHasBeenSet() const;

                    /**
                     * 获取EIP type. Default value: EIP.
<ul style="margin:0"><li>For beta users of AIA, the value can be:</li></ul>`AnycastEIP`: an AIA IP address. For more information, see [Anycast Internet Acceleration](https://intl.cloud.tencent.com/document/product/644?from_cn_redirect=1).</li></ul>Note: Anycast EIPs are supported only in partial regions. </li></ul>
<ul style="margin:0"><li>For beta users of dedicated IP, the value can be: <ul><li>`HighQualityEIP`: Dedicated IP</li></ul>Note that dedicated IPs are only available in partial regions. </li></ul>
</ul>
<ul style="margin:0"><li>For beta users of Anti-DDoS IP, the value can be: <ul><li>`AntiDDoSEIP`: Anti-DDoS EIP</li></ul>Note that Anti-DDoS IPs are only available in partial regions. </li></ul>
                     * @return AddressType EIP type. Default value: EIP.
<ul style="margin:0"><li>For beta users of AIA, the value can be:</li></ul>`AnycastEIP`: an AIA IP address. For more information, see [Anycast Internet Acceleration](https://intl.cloud.tencent.com/document/product/644?from_cn_redirect=1).</li></ul>Note: Anycast EIPs are supported only in partial regions. </li></ul>
<ul style="margin:0"><li>For beta users of dedicated IP, the value can be: <ul><li>`HighQualityEIP`: Dedicated IP</li></ul>Note that dedicated IPs are only available in partial regions. </li></ul>
</ul>
<ul style="margin:0"><li>For beta users of Anti-DDoS IP, the value can be: <ul><li>`AntiDDoSEIP`: Anti-DDoS EIP</li></ul>Note that Anti-DDoS IPs are only available in partial regions. </li></ul>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置EIP type. Default value: EIP.
<ul style="margin:0"><li>For beta users of AIA, the value can be:</li></ul>`AnycastEIP`: an AIA IP address. For more information, see [Anycast Internet Acceleration](https://intl.cloud.tencent.com/document/product/644?from_cn_redirect=1).</li></ul>Note: Anycast EIPs are supported only in partial regions. </li></ul>
<ul style="margin:0"><li>For beta users of dedicated IP, the value can be: <ul><li>`HighQualityEIP`: Dedicated IP</li></ul>Note that dedicated IPs are only available in partial regions. </li></ul>
</ul>
<ul style="margin:0"><li>For beta users of Anti-DDoS IP, the value can be: <ul><li>`AntiDDoSEIP`: Anti-DDoS EIP</li></ul>Note that Anti-DDoS IPs are only available in partial regions. </li></ul>
                     * @param _addressType EIP type. Default value: EIP.
<ul style="margin:0"><li>For beta users of AIA, the value can be:</li></ul>`AnycastEIP`: an AIA IP address. For more information, see [Anycast Internet Acceleration](https://intl.cloud.tencent.com/document/product/644?from_cn_redirect=1).</li></ul>Note: Anycast EIPs are supported only in partial regions. </li></ul>
<ul style="margin:0"><li>For beta users of dedicated IP, the value can be: <ul><li>`HighQualityEIP`: Dedicated IP</li></ul>Note that dedicated IPs are only available in partial regions. </li></ul>
</ul>
<ul style="margin:0"><li>For beta users of Anti-DDoS IP, the value can be: <ul><li>`AntiDDoSEIP`: Anti-DDoS EIP</li></ul>Note that Anti-DDoS IPs are only available in partial regions. </li></ul>
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取Anycast publishing region
<ul style="margin:0"><li>Valid for users who have activated AIA. Values:<ul><li>ANYCAST_ZONE_GLOBAL: global publishing region </li><li>ANYCAST_ZONE_OVERSEAS: overseas publishing region</li><li><b>**[Disused]**</b> ANYCAST_ZONE_A: publishing region A (updated to ANYCAST_ZONE_GLOBAL)</li><li><b>**[Disused]**</b> ANYCAST_ZONE_B: publishing region B (updated to ANYCAST_ZONE_GLOBAL)</li></ul>Default: ANYCAST_ZONE_OVERSEAS.</li></ul>
                     * @return AnycastZone Anycast publishing region
<ul style="margin:0"><li>Valid for users who have activated AIA. Values:<ul><li>ANYCAST_ZONE_GLOBAL: global publishing region </li><li>ANYCAST_ZONE_OVERSEAS: overseas publishing region</li><li><b>**[Disused]**</b> ANYCAST_ZONE_A: publishing region A (updated to ANYCAST_ZONE_GLOBAL)</li><li><b>**[Disused]**</b> ANYCAST_ZONE_B: publishing region B (updated to ANYCAST_ZONE_GLOBAL)</li></ul>Default: ANYCAST_ZONE_OVERSEAS.</li></ul>
                     * 
                     */
                    std::string GetAnycastZone() const;

                    /**
                     * 设置Anycast publishing region
<ul style="margin:0"><li>Valid for users who have activated AIA. Values:<ul><li>ANYCAST_ZONE_GLOBAL: global publishing region </li><li>ANYCAST_ZONE_OVERSEAS: overseas publishing region</li><li><b>**[Disused]**</b> ANYCAST_ZONE_A: publishing region A (updated to ANYCAST_ZONE_GLOBAL)</li><li><b>**[Disused]**</b> ANYCAST_ZONE_B: publishing region B (updated to ANYCAST_ZONE_GLOBAL)</li></ul>Default: ANYCAST_ZONE_OVERSEAS.</li></ul>
                     * @param _anycastZone Anycast publishing region
<ul style="margin:0"><li>Valid for users who have activated AIA. Values:<ul><li>ANYCAST_ZONE_GLOBAL: global publishing region </li><li>ANYCAST_ZONE_OVERSEAS: overseas publishing region</li><li><b>**[Disused]**</b> ANYCAST_ZONE_A: publishing region A (updated to ANYCAST_ZONE_GLOBAL)</li><li><b>**[Disused]**</b> ANYCAST_ZONE_B: publishing region B (updated to ANYCAST_ZONE_GLOBAL)</li></ul>Default: ANYCAST_ZONE_OVERSEAS.</li></ul>
                     * 
                     */
                    void SetAnycastZone(const std::string& _anycastZone);

                    /**
                     * 判断参数 AnycastZone 是否已赋值
                     * @return AnycastZone 是否已赋值
                     * 
                     */
                    bool AnycastZoneHasBeenSet() const;

                    /**
                     * 获取
                     * @return VipCluster 
                     * 
                     */
                    std::vector<std::string> GetVipCluster() const;

                    /**
                     * 设置
                     * @param _vipCluster 
                     * 
                     */
                    void SetVipCluster(const std::vector<std::string>& _vipCluster);

                    /**
                     * 判断参数 VipCluster 是否已赋值
                     * @return VipCluster 是否已赋值
                     * 
                     */
                    bool VipClusterHasBeenSet() const;

                    /**
                     * 获取<b>**[Disused]**</b>
Whether the Anycast EIP can be bound to CLB instances.
<ul style="margin:0"><li>Valid for users who have activated the AIA. Values:<ul><li>TRUE: the Anycast EIP can be bound to CLB instances.</li>
<li>FALSE: the Anycast EIP can be bound to CVMs, NAT gateways, and HAVIPs.</li></ul>Default: FALSE.</li></ul>
                     * @return ApplicableForCLB <b>**[Disused]**</b>
Whether the Anycast EIP can be bound to CLB instances.
<ul style="margin:0"><li>Valid for users who have activated the AIA. Values:<ul><li>TRUE: the Anycast EIP can be bound to CLB instances.</li>
<li>FALSE: the Anycast EIP can be bound to CVMs, NAT gateways, and HAVIPs.</li></ul>Default: FALSE.</li></ul>
                     * 
                     */
                    bool GetApplicableForCLB() const;

                    /**
                     * 设置<b>**[Disused]**</b>
Whether the Anycast EIP can be bound to CLB instances.
<ul style="margin:0"><li>Valid for users who have activated the AIA. Values:<ul><li>TRUE: the Anycast EIP can be bound to CLB instances.</li>
<li>FALSE: the Anycast EIP can be bound to CVMs, NAT gateways, and HAVIPs.</li></ul>Default: FALSE.</li></ul>
                     * @param _applicableForCLB <b>**[Disused]**</b>
Whether the Anycast EIP can be bound to CLB instances.
<ul style="margin:0"><li>Valid for users who have activated the AIA. Values:<ul><li>TRUE: the Anycast EIP can be bound to CLB instances.</li>
<li>FALSE: the Anycast EIP can be bound to CVMs, NAT gateways, and HAVIPs.</li></ul>Default: FALSE.</li></ul>
                     * 
                     */
                    void SetApplicableForCLB(const bool& _applicableForCLB);

                    /**
                     * 判断参数 ApplicableForCLB 是否已赋值
                     * @return ApplicableForCLB 是否已赋值
                     * 
                     */
                    bool ApplicableForCLBHasBeenSet() const;

                    /**
                     * 获取List of tags to be bound.
                     * @return Tags List of tags to be bound.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be bound.
                     * @param _tags List of tags to be bound.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The unique ID of a BGP bandwidth package. If you configure this parameter and set InternetChargeType as BANDWIDTH_PACKAGE, the new EIP is added to this package and billed by the bandwidth package mode.
                     * @return BandwidthPackageId The unique ID of a BGP bandwidth package. If you configure this parameter and set InternetChargeType as BANDWIDTH_PACKAGE, the new EIP is added to this package and billed by the bandwidth package mode.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置The unique ID of a BGP bandwidth package. If you configure this parameter and set InternetChargeType as BANDWIDTH_PACKAGE, the new EIP is added to this package and billed by the bandwidth package mode.
                     * @param _bandwidthPackageId The unique ID of a BGP bandwidth package. If you configure this parameter and set InternetChargeType as BANDWIDTH_PACKAGE, the new EIP is added to this package and billed by the bandwidth package mode.
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
                     * 获取EIP name, which is the custom EIP name given by the user when applying for the EIP. Default: not named
                     * @return AddressName EIP name, which is the custom EIP name given by the user when applying for the EIP. Default: not named
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置EIP name, which is the custom EIP name given by the user when applying for the EIP. Default: not named
                     * @param _addressName EIP name, which is the custom EIP name given by the user when applying for the EIP. Default: not named
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return DedicatedClusterId 
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置
                     * @param _dedicatedClusterId 
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsDedicatedAddressPool 
                     * 
                     */
                    bool GetIsDedicatedAddressPool() const;

                    /**
                     * 设置
                     * @param _isDedicatedAddressPool 
                     * 
                     */
                    void SetIsDedicatedAddressPool(const bool& _isDedicatedAddressPool);

                    /**
                     * 判断参数 IsDedicatedAddressPool 是否已赋值
                     * @return IsDedicatedAddressPool 是否已赋值
                     * 
                     */
                    bool IsDedicatedAddressPoolHasBeenSet() const;

                    /**
                     * 获取Network egress. It defaults to `center_egress1`.
                     * @return Egress Network egress. It defaults to `center_egress1`.
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置Network egress. It defaults to `center_egress1`.
                     * @param _egress Network egress. It defaults to `center_egress1`.
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

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

                    /**
                     * 获取A string used to ensure the idempotency of the request. Generate a value based on your client. This can ensure that the value is unique for different requests. It only supports ASCII characters and can contain up to 64 characters. 
                     * @return ClientToken A string used to ensure the idempotency of the request. Generate a value based on your client. This can ensure that the value is unique for different requests. It only supports ASCII characters and can contain up to 64 characters. 
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotency of the request. Generate a value based on your client. This can ensure that the value is unique for different requests. It only supports ASCII characters and can contain up to 64 characters. 
                     * @param _clientToken A string used to ensure the idempotency of the request. Generate a value based on your client. This can ensure that the value is unique for different requests. It only supports ASCII characters and can contain up to 64 characters. 
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * The number of EIPs. Default: 1.
                     */
                    int64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * The EIP line type. Default: BGP.
<ul style="margin:0"><li>For a user who has activated the static single-line IP allowlist, possible values are:<ul><li>CMCC: China Mobile</li>
<li>CTCC: China Telecom</li>
<li>CUCC: China Unicom</li></ul>Note: Only certain regions support static single-line IP addresses.</li></ul>
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * The EIP billing method.
<ul style="margin:0"><li>For bill-by-IP account beta users, valid values: <ul><li>BANDWIDTH_PACKAGE: paid by the [bandwidth package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)(who must also be bandwidth package beta users)</li>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>If you are not a bill-by-IP account beta user, the EIP billing is the same as that for the instance bound to the EIP. Therefore, you do not need to pass in this parameter.</li></ul>
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For bill-by-IP account beta users, the bandwidth cap range is determined by the EIP billing mode. <ul><li>`BANDWIDTH_PACKAGE`: 1 Mbps to 2000 Mbps</li>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps</li></ul>Default value: 1 Mbps </li>
<li>If you are not a bill-by-IP account beta user, the EIP outbound bandwidth cap is subject to the bandwidth cap of the instance bound to the EIP. Therefore, you do not need to pass in this parameter. </li></ul>
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * A required billing parameter for an EIP billed by monthly bandwidth subscription. For EIPs using other billing modes, it can be ignored.
                     */
                    AddressChargePrepaid m_addressChargePrepaid;
                    bool m_addressChargePrepaidHasBeenSet;

                    /**
                     * EIP type. Default value: EIP.
<ul style="margin:0"><li>For beta users of AIA, the value can be:</li></ul>`AnycastEIP`: an AIA IP address. For more information, see [Anycast Internet Acceleration](https://intl.cloud.tencent.com/document/product/644?from_cn_redirect=1).</li></ul>Note: Anycast EIPs are supported only in partial regions. </li></ul>
<ul style="margin:0"><li>For beta users of dedicated IP, the value can be: <ul><li>`HighQualityEIP`: Dedicated IP</li></ul>Note that dedicated IPs are only available in partial regions. </li></ul>
</ul>
<ul style="margin:0"><li>For beta users of Anti-DDoS IP, the value can be: <ul><li>`AntiDDoSEIP`: Anti-DDoS EIP</li></ul>Note that Anti-DDoS IPs are only available in partial regions. </li></ul>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * Anycast publishing region
<ul style="margin:0"><li>Valid for users who have activated AIA. Values:<ul><li>ANYCAST_ZONE_GLOBAL: global publishing region </li><li>ANYCAST_ZONE_OVERSEAS: overseas publishing region</li><li><b>**[Disused]**</b> ANYCAST_ZONE_A: publishing region A (updated to ANYCAST_ZONE_GLOBAL)</li><li><b>**[Disused]**</b> ANYCAST_ZONE_B: publishing region B (updated to ANYCAST_ZONE_GLOBAL)</li></ul>Default: ANYCAST_ZONE_OVERSEAS.</li></ul>
                     */
                    std::string m_anycastZone;
                    bool m_anycastZoneHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_vipCluster;
                    bool m_vipClusterHasBeenSet;

                    /**
                     * <b>**[Disused]**</b>
Whether the Anycast EIP can be bound to CLB instances.
<ul style="margin:0"><li>Valid for users who have activated the AIA. Values:<ul><li>TRUE: the Anycast EIP can be bound to CLB instances.</li>
<li>FALSE: the Anycast EIP can be bound to CVMs, NAT gateways, and HAVIPs.</li></ul>Default: FALSE.</li></ul>
                     */
                    bool m_applicableForCLB;
                    bool m_applicableForCLBHasBeenSet;

                    /**
                     * List of tags to be bound.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The unique ID of a BGP bandwidth package. If you configure this parameter and set InternetChargeType as BANDWIDTH_PACKAGE, the new EIP is added to this package and billed by the bandwidth package mode.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * EIP name, which is the custom EIP name given by the user when applying for the EIP. Default: not named
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isDedicatedAddressPool;
                    bool m_isDedicatedAddressPoolHasBeenSet;

                    /**
                     * Network egress. It defaults to `center_egress1`.
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * Anti-DDoS service package ID. This is required when you want to request an Anti-DDoS IP.
                     */
                    std::string m_antiDDoSPackageId;
                    bool m_antiDDoSPackageIdHasBeenSet;

                    /**
                     * A string used to ensure the idempotency of the request. Generate a value based on your client. This can ensure that the value is unique for different requests. It only supports ASCII characters and can contain up to 64 characters. 
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_
