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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_CREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/InternetAccessible.h>
#include <tencentcloud/clb/v20230417/model/TagInfo.h>
#include <tencentcloud/clb/v20230417/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20230417/model/SnatIp.h>
#include <tencentcloud/clb/v20230417/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20230417/model/AvailableZoneAffinityInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * CreateLoadBalancer request structure.
                */
                class CreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerRequest();
                    ~CreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Network type of the Cloud Load Balancer instance:<br>OPEN: public network attribute, INTERNAL: private network attribute.</p>
                     * @return LoadBalancerType <p>Network type of the Cloud Load Balancer instance:<br>OPEN: public network attribute, INTERNAL: private network attribute.</p>
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置<p>Network type of the Cloud Load Balancer instance:<br>OPEN: public network attribute, INTERNAL: private network attribute.</p>
                     * @param _loadBalancerType <p>Network type of the Cloud Load Balancer instance:<br>OPEN: public network attribute, INTERNAL: private network attribute.</p>
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Type of the Cloud Load Balancer instance. 1: Common Cloud Load Balancer instance. Currently only support input 1.</p>
                     * @return Forward <p>Type of the Cloud Load Balancer instance. 1: Common Cloud Load Balancer instance. Currently only support input 1.</p>
                     * 
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置<p>Type of the Cloud Load Balancer instance. 1: Common Cloud Load Balancer instance. Currently only support input 1.</p>
                     * @param _forward <p>Type of the Cloud Load Balancer instance. 1: Common Cloud Load Balancer instance. Currently only support input 1.</p>
                     * 
                     */
                    void SetForward(const int64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     * 
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取<p>The name of a Cloud Load Balancer instance takes effect only when creating an instance. Rule: 1-80 characters in internationally compatible languages, including English letters, Chinese characters, digits, hyphens "-", underscores "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden). Note: If the name is identical to that of an existing Cloud Load Balancer instance in the system, the system will automatically generate a name for the newly created CLB instance.</p>
                     * @return LoadBalancerName <p>The name of a Cloud Load Balancer instance takes effect only when creating an instance. Rule: 1-80 characters in internationally compatible languages, including English letters, Chinese characters, digits, hyphens "-", underscores "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden). Note: If the name is identical to that of an existing Cloud Load Balancer instance in the system, the system will automatically generate a name for the newly created CLB instance.</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>The name of a Cloud Load Balancer instance takes effect only when creating an instance. Rule: 1-80 characters in internationally compatible languages, including English letters, Chinese characters, digits, hyphens "-", underscores "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden). Note: If the name is identical to that of an existing Cloud Load Balancer instance in the system, the system will automatically generate a name for the newly created CLB instance.</p>
                     * @param _loadBalancerName <p>The name of a Cloud Load Balancer instance takes effect only when creating an instance. Rule: 1-80 characters in internationally compatible languages, including English letters, Chinese characters, digits, hyphens "-", underscores "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden). Note: If the name is identical to that of an existing Cloud Load Balancer instance in the system, the system will automatically generate a name for the newly created CLB instance.</p>
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取<p>The network ID of the backend target device belonging to the Cloud Load Balancer, such as vpc-12345678, can be obtained through the <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> API. It defaults to DefaultVPC if this parameter is not specified. This parameter is required when creating a private network CLB instance.</p>
                     * @return VpcId <p>The network ID of the backend target device belonging to the Cloud Load Balancer, such as vpc-12345678, can be obtained through the <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> API. It defaults to DefaultVPC if this parameter is not specified. This parameter is required when creating a private network CLB instance.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>The network ID of the backend target device belonging to the Cloud Load Balancer, such as vpc-12345678, can be obtained through the <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> API. It defaults to DefaultVPC if this parameter is not specified. This parameter is required when creating a private network CLB instance.</p>
                     * @param _vpcId <p>The network ID of the backend target device belonging to the Cloud Load Balancer, such as vpc-12345678, can be obtained through the <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> API. It defaults to DefaultVPC if this parameter is not specified. This parameter is required when creating a private network CLB instance.</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>A subnet ID must be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is generated in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.</p>
                     * @return SubnetId <p>A subnet ID must be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is generated in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>A subnet ID must be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is generated in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.</p>
                     * @param _subnetId <p>A subnet ID must be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is generated in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>The project ID associated with the Cloud Load Balancer instance can be obtained through the <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> API. If this parameter is left blank, it will be used as the default project.</p>
                     * @return ProjectId <p>The project ID associated with the Cloud Load Balancer instance can be obtained through the <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> API. If this parameter is left blank, it will be used as the default project.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>The project ID associated with the Cloud Load Balancer instance can be obtained through the <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> API. If this parameter is left blank, it will be used as the default project.</p>
                     * @param _projectId <p>The project ID associated with the Cloud Load Balancer instance can be obtained through the <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> API. If this parameter is left blank, it will be used as the default project.</p>
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
                     * 获取<p>Applicable only to public network CLB. IP version, valid values: IPV4, IPV6, IPv6FullChain, case-insensitive, default value IPV4. Description: A value of IPV6 means IPV6 NAT64 version; a value of IPv6FullChain means IPv6 version.</p>
                     * @return AddressIPVersion <p>Applicable only to public network CLB. IP version, valid values: IPV4, IPV6, IPv6FullChain, case-insensitive, default value IPV4. Description: A value of IPV6 means IPV6 NAT64 version; a value of IPv6FullChain means IPv6 version.</p>
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置<p>Applicable only to public network CLB. IP version, valid values: IPV4, IPV6, IPv6FullChain, case-insensitive, default value IPV4. Description: A value of IPV6 means IPV6 NAT64 version; a value of IPv6FullChain means IPv6 version.</p>
                     * @param _addressIPVersion <p>Applicable only to public network CLB. IP version, valid values: IPV4, IPV6, IPv6FullChain, case-insensitive, default value IPV4. Description: A value of IPV6 means IPV6 NAT64 version; a value of IPv6FullChain means IPv6 version.</p>
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取<p>Count of Cloud Load Balancers to create. Default value: 1.</p>
                     * @return Number <p>Count of Cloud Load Balancers to create. Default value: 1.</p>
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置<p>Count of Cloud Load Balancers to create. Default value: 1.</p>
                     * @param _number <p>Count of Cloud Load Balancers to create. Default value: 1.</p>
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>Applicable only to public network IPv4 Cloud Load Balancer. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. Currently, primary and secondary AZs are supported only for IPv4 CLB instances in Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance, Hong Kong (China), Seoul, Frankfurt, and Singapore regions. You can call the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API to query the primary AZ list of a region. [If you need to experience this feature, submit a ticket](https://console.cloud.tencent.com/workorder/category).</p>
                     * @return MasterZoneId <p>Applicable only to public network IPv4 Cloud Load Balancer. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. Currently, primary and secondary AZs are supported only for IPv4 CLB instances in Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance, Hong Kong (China), Seoul, Frankfurt, and Singapore regions. You can call the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API to query the primary AZ list of a region. [If you need to experience this feature, submit a ticket](https://console.cloud.tencent.com/workorder/category).</p>
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置<p>Applicable only to public network IPv4 Cloud Load Balancer. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. Currently, primary and secondary AZs are supported only for IPv4 CLB instances in Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance, Hong Kong (China), Seoul, Frankfurt, and Singapore regions. You can call the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API to query the primary AZ list of a region. [If you need to experience this feature, submit a ticket](https://console.cloud.tencent.com/workorder/category).</p>
                     * @param _masterZoneId <p>Applicable only to public network IPv4 Cloud Load Balancer. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. Currently, primary and secondary AZs are supported only for IPv4 CLB instances in Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance, Hong Kong (China), Seoul, Frankfurt, and Singapore regions. You can call the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API to query the primary AZ list of a region. [If you need to experience this feature, submit a ticket](https://console.cloud.tencent.com/workorder/category).</p>
                     * 
                     */
                    void SetMasterZoneId(const std::string& _masterZoneId);

                    /**
                     * 判断参数 MasterZoneId 是否已赋值
                     * @return MasterZoneId 是否已赋值
                     * 
                     */
                    bool MasterZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Applicable only to public network load balancing with IPv4 version. Availability zone ID. Designated availability zone to create a CLB instance, for example: ap-guangzhou-1.</p>
                     * @return ZoneId <p>Applicable only to public network load balancing with IPv4 version. Availability zone ID. Designated availability zone to create a CLB instance, for example: ap-guangzhou-1.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Applicable only to public network load balancing with IPv4 version. Availability zone ID. Designated availability zone to create a CLB instance, for example: ap-guangzhou-1.</p>
                     * @param _zoneId <p>Applicable only to public network load balancing with IPv4 version. Availability zone ID. Designated availability zone to create a CLB instance, for example: ap-guangzhou-1.</p>
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
                     * 获取<p>Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.</p>
                     * @return InternetAccessible <p>Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.</p>
                     * @param _internetAccessible <p>Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.</p>
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>Applicable only to public network CLB. Currently, static single-line IP type is supported in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions. If you need to experience it, contact business manager to submit a request. After approval, just select CMCC, CUCC, or CTCC as the operator type. Only can be used BANDWIDTH_PACKAGE for network billing mode. If this parameter is not specified, use BGP by default. You can check ISPs supported in a region via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api query.</p>
                     * @return VipIsp <p>Applicable only to public network CLB. Currently, static single-line IP type is supported in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions. If you need to experience it, contact business manager to submit a request. After approval, just select CMCC, CUCC, or CTCC as the operator type. Only can be used BANDWIDTH_PACKAGE for network billing mode. If this parameter is not specified, use BGP by default. You can check ISPs supported in a region via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api query.</p>
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置<p>Applicable only to public network CLB. Currently, static single-line IP type is supported in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions. If you need to experience it, contact business manager to submit a request. After approval, just select CMCC, CUCC, or CTCC as the operator type. Only can be used BANDWIDTH_PACKAGE for network billing mode. If this parameter is not specified, use BGP by default. You can check ISPs supported in a region via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api query.</p>
                     * @param _vipIsp <p>Applicable only to public network CLB. Currently, static single-line IP type is supported in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions. If you need to experience it, contact business manager to submit a request. After approval, just select CMCC, CUCC, or CTCC as the operator type. Only can be used BANDWIDTH_PACKAGE for network billing mode. If this parameter is not specified, use BGP by default. You can check ISPs supported in a region via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api query.</p>
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取<p>When you purchase Cloud Load Balancer (CLB), you can tag it with up to 20 tag key-value pairs.</p>
                     * @return Tags <p>When you purchase Cloud Load Balancer (CLB), you can tag it with up to 20 tag key-value pairs.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>When you purchase Cloud Load Balancer (CLB), you can tag it with up to 20 tag key-value pairs.</p>
                     * @param _tags <p>When you purchase Cloud Load Balancer (CLB), you can tag it with up to 20 tag key-value pairs.</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Apply for a Cloud Load Balancer with a designated VIP. This parameter is optional. If this parameter is not specified, the VIP is assigned by system. This parameter is supported for IPv4 and IPv6 types but unsupported for IPv6 NAT64 type.<br>Note: When specifying a VIP to create a private network instance or a public IPv6 BGP instance, creation fails if the VIP is not within the specified VPC subnet or if the VIP is already occupied.</p>
                     * @return Vip <p>Apply for a Cloud Load Balancer with a designated VIP. This parameter is optional. If this parameter is not specified, the VIP is assigned by system. This parameter is supported for IPv4 and IPv6 types but unsupported for IPv6 NAT64 type.<br>Note: When specifying a VIP to create a private network instance or a public IPv6 BGP instance, creation fails if the VIP is not within the specified VPC subnet or if the VIP is already occupied.</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Apply for a Cloud Load Balancer with a designated VIP. This parameter is optional. If this parameter is not specified, the VIP is assigned by system. This parameter is supported for IPv4 and IPv6 types but unsupported for IPv6 NAT64 type.<br>Note: When specifying a VIP to create a private network instance or a public IPv6 BGP instance, creation fails if the VIP is not within the specified VPC subnet or if the VIP is already occupied.</p>
                     * @param _vip <p>Apply for a Cloud Load Balancer with a designated VIP. This parameter is optional. If this parameter is not specified, the VIP is assigned by system. This parameter is supported for IPv4 and IPv6 types but unsupported for IPv6 NAT64 type.<br>Note: When specifying a VIP to create a private network instance or a public IPv6 BGP instance, creation fails if the VIP is not within the specified VPC subnet or if the VIP is already occupied.</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by non-promoted users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.</p>
                     * @return BandwidthPackageId <p>Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by non-promoted users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.</p>
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置<p>Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by non-promoted users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.</p>
                     * @param _bandwidthPackageId <p>Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by non-promoted users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.</p>
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
                     * 获取<p>Dedicated instance info. This parameter is required when creating a private network CLB instance of exclusive type.</p>
                     * @return ExclusiveCluster <p>Dedicated instance info. This parameter is required when creating a private network CLB instance of exclusive type.</p>
                     * 
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置<p>Dedicated instance info. This parameter is required when creating a private network CLB instance of exclusive type.</p>
                     * @param _exclusiveCluster <p>Dedicated instance info. This parameter is required when creating a private network CLB instance of exclusive type.</p>
                     * 
                     */
                    void SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster);

                    /**
                     * 判断参数 ExclusiveCluster 是否已赋值
                     * @return ExclusiveCluster 是否已赋值
                     * 
                     */
                    bool ExclusiveClusterHasBeenSet() const;

                    /**
                     * 获取<p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For domestic site users, this parameter is not required when creating a shared instance. For international site users, the default purchased instance is standard if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     * @return SlaType <p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For domestic site users, this parameter is not required when creating a shared instance. For international site users, the default purchased instance is standard if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置<p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For domestic site users, this parameter is not required when creating a shared instance. For international site users, the default purchased instance is standard if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     * @param _slaType <p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For domestic site users, this parameter is not required when creating a shared instance. For international site users, the default purchased instance is standard if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取<p>A string used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of no more than 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * @return ClientToken <p>A string used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of no more than 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>A string used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of no more than 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * @param _clientToken <p>A string used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of no more than 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>Whether the cross-regional or cross-Vpc IP binding feature is supported.</p>
                     * @return SnatPro <p>Whether the cross-regional or cross-Vpc IP binding feature is supported.</p>
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置<p>Whether the cross-regional or cross-Vpc IP binding feature is supported.</p>
                     * @param _snatPro <p>Whether the cross-regional or cross-Vpc IP binding feature is supported.</p>
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取<p>After enabling the cross-regional/cross-Vpc IP binding feature, create a SnatIp.</p>
                     * @return SnatIps <p>After enabling the cross-regional/cross-Vpc IP binding feature, create a SnatIp.</p>
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置<p>After enabling the cross-regional/cross-Vpc IP binding feature, create a SnatIp.</p>
                     * @param _snatIps <p>After enabling the cross-regional/cross-Vpc IP binding feature, create a SnatIp.</p>
                     * 
                     */
                    void SetSnatIps(const std::vector<SnatIp>& _snatIps);

                    /**
                     * 判断参数 SnatIps 是否已赋值
                     * @return SnatIps 是否已赋值
                     * 
                     */
                    bool SnatIpsHasBeenSet() const;

                    /**
                     * 获取<p>Tag of the Stgw exclusive cluster.</p>
                     * @return ClusterTag <p>Tag of the Stgw exclusive cluster.</p>
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置<p>Tag of the Stgw exclusive cluster.</p>
                     * @param _clusterTag <p>Tag of the Stgw exclusive cluster.</p>
                     * 
                     */
                    void SetClusterTag(const std::string& _clusterTag);

                    /**
                     * 判断参数 ClusterTag 是否已赋值
                     * @return ClusterTag 是否已赋值
                     * 
                     */
                    bool ClusterTagHasBeenSet() const;

                    /**
                     * 获取<p>Applicable only to public network load balancing with IPv4 version. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. You can query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a <a href="https://console.cloud.tencent.com/workorder/category">ticket application</a>]</p>
                     * @return SlaveZoneId <p>Applicable only to public network load balancing with IPv4 version. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. You can query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a <a href="https://console.cloud.tencent.com/workorder/category">ticket application</a>]</p>
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置<p>Applicable only to public network load balancing with IPv4 version. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. You can query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a <a href="https://console.cloud.tencent.com/workorder/category">ticket application</a>]</p>
                     * @param _slaveZoneId <p>Applicable only to public network load balancing with IPv4 version. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. You can query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a <a href="https://console.cloud.tencent.com/workorder/category">ticket application</a>]</p>
                     * 
                     */
                    void SetSlaveZoneId(const std::string& _slaveZoneId);

                    /**
                     * 判断参数 SlaveZoneId 是否已赋值
                     * @return SlaveZoneId 是否已赋值
                     * 
                     */
                    bool SlaveZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Unique ID of EIP, such as eip-11112222, applicable only to private network CLB to bind EIP.</p>
                     * @return EipAddressId <p>Unique ID of EIP, such as eip-11112222, applicable only to private network CLB to bind EIP.</p>
                     * 
                     */
                    std::string GetEipAddressId() const;

                    /**
                     * 设置<p>Unique ID of EIP, such as eip-11112222, applicable only to private network CLB to bind EIP.</p>
                     * @param _eipAddressId <p>Unique ID of EIP, such as eip-11112222, applicable only to private network CLB to bind EIP.</p>
                     * 
                     */
                    void SetEipAddressId(const std::string& _eipAddressId);

                    /**
                     * 判断参数 EipAddressId 是否已赋值
                     * @return EipAddressId 是否已赋值
                     * 
                     */
                    bool EipAddressIdHasBeenSet() const;

                    /**
                     * 获取<p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.</p>
                     * @return LoadBalancerPassToTarget <p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.</p>
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置<p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.</p>
                     * @param _loadBalancerPassToTarget <p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.</p>
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取<p>Network outbound</p>
                     * @return Egress <p>Network outbound</p>
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置<p>Network outbound</p>
                     * @param _egress <p>Network outbound</p>
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
                     * 获取<p>Prepaid billing attributes of the Cloud Load Balancer instance</p>
                     * @return LBChargePrepaid <p>Prepaid billing attributes of the Cloud Load Balancer instance</p>
                     * 
                     */
                    LBChargePrepaid GetLBChargePrepaid() const;

                    /**
                     * 设置<p>Prepaid billing attributes of the Cloud Load Balancer instance</p>
                     * @param _lBChargePrepaid <p>Prepaid billing attributes of the Cloud Load Balancer instance</p>
                     * 
                     */
                    void SetLBChargePrepaid(const LBChargePrepaid& _lBChargePrepaid);

                    /**
                     * 判断参数 LBChargePrepaid 是否已赋值
                     * @return LBChargePrepaid 是否已赋值
                     * 
                     */
                    bool LBChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p>
                     * @return LBChargeType <p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p>
                     * 
                     */
                    std::string GetLBChargeType() const;

                    /**
                     * 设置<p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p>
                     * @param _lBChargeType <p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p>
                     * 
                     */
                    void SetLBChargeType(const std::string& _lBChargeType);

                    /**
                     * 判断参数 LBChargeType 是否已赋值
                     * @return LBChargeType 是否已赋值
                     * 
                     */
                    bool LBChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>L7 access log topic ID</p>
                     * @return AccessLogTopicId <p>L7 access log topic ID</p>
                     * 
                     */
                    std::string GetAccessLogTopicId() const;

                    /**
                     * 设置<p>L7 access log topic ID</p>
                     * @param _accessLogTopicId <p>L7 access log topic ID</p>
                     * 
                     */
                    void SetAccessLogTopicId(const std::string& _accessLogTopicId);

                    /**
                     * 判断参数 AccessLogTopicId 是否已赋值
                     * @return AccessLogTopicId 是否已赋值
                     * 
                     */
                    bool AccessLogTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether layer-7 advanced routing is enabled</p>
                     * @return AdvancedRoute <p>Whether layer-7 advanced routing is enabled</p>
                     * 
                     */
                    bool GetAdvancedRoute() const;

                    /**
                     * 设置<p>Whether layer-7 advanced routing is enabled</p>
                     * @param _advancedRoute <p>Whether layer-7 advanced routing is enabled</p>
                     * 
                     */
                    void SetAdvancedRoute(const bool& _advancedRoute);

                    /**
                     * 判断参数 AdvancedRoute 是否已赋值
                     * @return AdvancedRoute 是否已赋值
                     * 
                     */
                    bool AdvancedRouteHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone affinity info</p>
                     * @return AvailableZoneAffinityInfo <p>Availability zone affinity info</p>
                     * 
                     */
                    AvailableZoneAffinityInfo GetAvailableZoneAffinityInfo() const;

                    /**
                     * 设置<p>Availability zone affinity info</p>
                     * @param _availableZoneAffinityInfo <p>Availability zone affinity info</p>
                     * 
                     */
                    void SetAvailableZoneAffinityInfo(const AvailableZoneAffinityInfo& _availableZoneAffinityInfo);

                    /**
                     * 判断参数 AvailableZoneAffinityInfo 是否已赋值
                     * @return AvailableZoneAffinityInfo 是否已赋值
                     * 
                     */
                    bool AvailableZoneAffinityInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Network type of the Cloud Load Balancer instance:<br>OPEN: public network attribute, INTERNAL: private network attribute.</p>
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * <p>Type of the Cloud Load Balancer instance. 1: Common Cloud Load Balancer instance. Currently only support input 1.</p>
                     */
                    int64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * <p>The name of a Cloud Load Balancer instance takes effect only when creating an instance. Rule: 1-80 characters in internationally compatible languages, including English letters, Chinese characters, digits, hyphens "-", underscores "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden). Note: If the name is identical to that of an existing Cloud Load Balancer instance in the system, the system will automatically generate a name for the newly created CLB instance.</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>The network ID of the backend target device belonging to the Cloud Load Balancer, such as vpc-12345678, can be obtained through the <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> API. It defaults to DefaultVPC if this parameter is not specified. This parameter is required when creating a private network CLB instance.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>A subnet ID must be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is generated in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>The project ID associated with the Cloud Load Balancer instance can be obtained through the <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> API. If this parameter is left blank, it will be used as the default project.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Applicable only to public network CLB. IP version, valid values: IPV4, IPV6, IPv6FullChain, case-insensitive, default value IPV4. Description: A value of IPV6 means IPV6 NAT64 version; a value of IPv6FullChain means IPv6 version.</p>
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * <p>Count of Cloud Load Balancers to create. Default value: 1.</p>
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>Applicable only to public network IPv4 Cloud Load Balancer. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. Currently, primary and secondary AZs are supported only for IPv4 CLB instances in Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance, Hong Kong (China), Seoul, Frankfurt, and Singapore regions. You can call the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API to query the primary AZ list of a region. [If you need to experience this feature, submit a ticket](https://console.cloud.tencent.com/workorder/category).</p>
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * <p>Applicable only to public network load balancing with IPv4 version. Availability zone ID. Designated availability zone to create a CLB instance, for example: ap-guangzhou-1.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>Applicable only to public network CLB. Currently, static single-line IP type is supported in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions. If you need to experience it, contact business manager to submit a request. After approval, just select CMCC, CUCC, or CTCC as the operator type. Only can be used BANDWIDTH_PACKAGE for network billing mode. If this parameter is not specified, use BGP by default. You can check ISPs supported in a region via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api query.</p>
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * <p>When you purchase Cloud Load Balancer (CLB), you can tag it with up to 20 tag key-value pairs.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Apply for a Cloud Load Balancer with a designated VIP. This parameter is optional. If this parameter is not specified, the VIP is assigned by system. This parameter is supported for IPv4 and IPv6 types but unsupported for IPv6 NAT64 type.<br>Note: When specifying a VIP to create a private network instance or a public IPv6 BGP instance, creation fails if the VIP is not within the specified VPC subnet or if the VIP is already occupied.</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by non-promoted users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.</p>
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * <p>Dedicated instance info. This parameter is required when creating a private network CLB instance of exclusive type.</p>
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * <p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For domestic site users, this parameter is not required when creating a shared instance. For international site users, the default purchased instance is standard if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * <p>A string used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of no more than 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Whether the cross-regional or cross-Vpc IP binding feature is supported.</p>
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * <p>After enabling the cross-regional/cross-Vpc IP binding feature, create a SnatIp.</p>
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * <p>Tag of the Stgw exclusive cluster.</p>
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * <p>Applicable only to public network load balancing with IPv4 version. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. You can query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a <a href="https://console.cloud.tencent.com/workorder/category">ticket application</a>]</p>
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * <p>Unique ID of EIP, such as eip-11112222, applicable only to private network CLB to bind EIP.</p>
                     */
                    std::string m_eipAddressId;
                    bool m_eipAddressIdHasBeenSet;

                    /**
                     * <p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.</p>
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * <p>Network outbound</p>
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * <p>Prepaid billing attributes of the Cloud Load Balancer instance</p>
                     */
                    LBChargePrepaid m_lBChargePrepaid;
                    bool m_lBChargePrepaidHasBeenSet;

                    /**
                     * <p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p>
                     */
                    std::string m_lBChargeType;
                    bool m_lBChargeTypeHasBeenSet;

                    /**
                     * <p>L7 access log topic ID</p>
                     */
                    std::string m_accessLogTopicId;
                    bool m_accessLogTopicIdHasBeenSet;

                    /**
                     * <p>Whether layer-7 advanced routing is enabled</p>
                     */
                    bool m_advancedRoute;
                    bool m_advancedRouteHasBeenSet;

                    /**
                     * <p>Availability zone affinity info</p>
                     */
                    AvailableZoneAffinityInfo m_availableZoneAffinityInfo;
                    bool m_availableZoneAffinityInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_CREATELOADBALANCERREQUEST_H_
