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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>
#include <tencentcloud/clb/v20180317/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20180317/model/SnatIp.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20180317/model/AvailableZoneAffinityInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取<p>Type of the Cloud Load Balancer instance. 1: Common CLB instance. Currently only support passing in 1.</p>
                     * @return Forward <p>Type of the Cloud Load Balancer instance. 1: Common CLB instance. Currently only support passing in 1.</p>
                     * 
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置<p>Type of the Cloud Load Balancer instance. 1: Common CLB instance. Currently only support passing in 1.</p>
                     * @param _forward <p>Type of the Cloud Load Balancer instance. 1: Common CLB instance. Currently only support passing in 1.</p>
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
                     * 获取<p>The name of the Cloud Load Balancer instance is effective only when creating an instance. Rule: 1-80 characters in internationally compatible languages such as English letters, Chinese characters, digits, connecting line "-", underscore "_", and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden). Note: If the name is identical to an existing Cloud Load Balancer instance name in the system, the system will automatically generate the name for the created CLB instance.</p>
                     * @return LoadBalancerName <p>The name of the Cloud Load Balancer instance is effective only when creating an instance. Rule: 1-80 characters in internationally compatible languages such as English letters, Chinese characters, digits, connecting line "-", underscore "_", and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden). Note: If the name is identical to an existing Cloud Load Balancer instance name in the system, the system will automatically generate the name for the created CLB instance.</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>The name of the Cloud Load Balancer instance is effective only when creating an instance. Rule: 1-80 characters in internationally compatible languages such as English letters, Chinese characters, digits, connecting line "-", underscore "_", and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden). Note: If the name is identical to an existing Cloud Load Balancer instance name in the system, the system will automatically generate the name for the created CLB instance.</p>
                     * @param _loadBalancerName <p>The name of the Cloud Load Balancer instance is effective only when creating an instance. Rule: 1-80 characters in internationally compatible languages such as English letters, Chinese characters, digits, connecting line "-", underscore "_", and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden). Note: If the name is identical to an existing Cloud Load Balancer instance name in the system, the system will automatically generate the name for the created CLB instance.</p>
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
                     * 获取Network ID of the target device on the CLB backend, such as `vpc-12345678`, which can be obtained through the `DescribeVpcEx` API. If this parameter is not entered, `DefaultVPC` is used by default. This parameter is required when creating a private network instance.
                     * @return VpcId Network ID of the target device on the CLB backend, such as `vpc-12345678`, which can be obtained through the `DescribeVpcEx` API. If this parameter is not entered, `DefaultVPC` is used by default. This parameter is required when creating a private network instance.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Network ID of the target device on the CLB backend, such as `vpc-12345678`, which can be obtained through the `DescribeVpcEx` API. If this parameter is not entered, `DefaultVPC` is used by default. This parameter is required when creating a private network instance.
                     * @param _vpcId Network ID of the target device on the CLB backend, such as `vpc-12345678`, which can be obtained through the `DescribeVpcEx` API. If this parameter is not entered, `DefaultVPC` is used by default. This parameter is required when creating a private network instance.
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
                     * 获取<p>When you purchase a private network CLB instance in a VPC, the subnet ID must be specified. The VIP of the private network CLB instance is generated in this subnet.<br>This parameter is required when you create a private network CLB instance or a CLB instance of the IPv6FullChain version.<br>It cannot be specified when you create a public network IPv4 CLB instance.</p>
                     * @return SubnetId <p>When you purchase a private network CLB instance in a VPC, the subnet ID must be specified. The VIP of the private network CLB instance is generated in this subnet.<br>This parameter is required when you create a private network CLB instance or a CLB instance of the IPv6FullChain version.<br>It cannot be specified when you create a public network IPv4 CLB instance.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>When you purchase a private network CLB instance in a VPC, the subnet ID must be specified. The VIP of the private network CLB instance is generated in this subnet.<br>This parameter is required when you create a private network CLB instance or a CLB instance of the IPv6FullChain version.<br>It cannot be specified when you create a public network IPv4 CLB instance.</p>
                     * @param _subnetId <p>When you purchase a private network CLB instance in a VPC, the subnet ID must be specified. The VIP of the private network CLB instance is generated in this subnet.<br>This parameter is required when you create a private network CLB instance or a CLB instance of the IPv6FullChain version.<br>It cannot be specified when you create a public network IPv4 CLB instance.</p>
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
                     * 获取ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not entered, the default project will be used.
                     * @return ProjectId ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not entered, the default project will be used.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not entered, the default project will be used.
                     * @param _projectId ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not entered, the default project will be used.
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
                     * 获取<p>Count of Cloud Load Balancers to create, default value is 1. The count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.</p>
                     * @return Number <p>Count of Cloud Load Balancers to create, default value is 1. The count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.</p>
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置<p>Count of Cloud Load Balancers to create, default value is 1. The count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.</p>
                     * @param _number <p>Count of Cloud Load Balancers to create, default value is 1. The count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.</p>
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
                     * 获取<p>Applicable only to public network load balancing with IP version IPv4. Sets the primary AZ ID for cross-AZ disaster recovery. Both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.</p>
                     * @return MasterZoneId <p>Applicable only to public network load balancing with IP version IPv4. Sets the primary AZ ID for cross-AZ disaster recovery. Both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.</p>
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置<p>Applicable only to public network load balancing with IP version IPv4. Sets the primary AZ ID for cross-AZ disaster recovery. Both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.</p>
                     * @param _masterZoneId <p>Applicable only to public network load balancing with IP version IPv4. Sets the primary AZ ID for cross-AZ disaster recovery. Both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.</p>
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
                     * 获取<p>Applicable only to public network load balancing with IP version IPv4. AZ ID, availability zone id and name are supported. Specify availability zone to create a CLB instance. For example: 100001 or ap-guangzhou-1.</p>
                     * @return ZoneId <p>Applicable only to public network load balancing with IP version IPv4. AZ ID, availability zone id and name are supported. Specify availability zone to create a CLB instance. For example: 100001 or ap-guangzhou-1.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Applicable only to public network load balancing with IP version IPv4. AZ ID, availability zone id and name are supported. Specify availability zone to create a CLB instance. For example: 100001 or ap-guangzhou-1.</p>
                     * @param _zoneId <p>Applicable only to public network load balancing with IP version IPv4. AZ ID, availability zone id and name are supported. Specify availability zone to create a CLB instance. For example: 100001 or ap-guangzhou-1.</p>
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
                     * 获取<p>Applicable only to public network CLB. Currently, only Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions support static single-line IP type. If you need to experience it, contact business manager to submit a request. After approval, you can select operator type of China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). Only can be used network billing mode BANDWIDTH_PACKAGE. If this parameter is not specified, use BGP by default. You can query ISPs supported in a region via <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api.</p>
                     * @return VipIsp <p>Applicable only to public network CLB. Currently, only Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions support static single-line IP type. If you need to experience it, contact business manager to submit a request. After approval, you can select operator type of China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). Only can be used network billing mode BANDWIDTH_PACKAGE. If this parameter is not specified, use BGP by default. You can query ISPs supported in a region via <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api.</p>
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置<p>Applicable only to public network CLB. Currently, only Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions support static single-line IP type. If you need to experience it, contact business manager to submit a request. After approval, you can select operator type of China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). Only can be used network billing mode BANDWIDTH_PACKAGE. If this parameter is not specified, use BGP by default. You can query ISPs supported in a region via <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api.</p>
                     * @param _vipIsp <p>Applicable only to public network CLB. Currently, only Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions support static single-line IP type. If you need to experience it, contact business manager to submit a request. After approval, you can select operator type of China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). Only can be used network billing mode BANDWIDTH_PACKAGE. If this parameter is not specified, use BGP by default. You can query ISPs supported in a region via <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api.</p>
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
                     * 获取<p>When purchasing a Cloud Load Balancer, you can tag it with up to 20 tag key-value pairs.</p>
                     * @return Tags <p>When purchasing a Cloud Load Balancer, you can tag it with up to 20 tag key-value pairs.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>When purchasing a Cloud Load Balancer, you can tag it with up to 20 tag key-value pairs.</p>
                     * @param _tags <p>When purchasing a Cloud Load Balancer, you can tag it with up to 20 tag key-value pairs.</p>
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
                     * 获取<p>Specify VIP to apply for Cloud Load Balancer. This parameter is optional. If this parameter is not specified, VIP is automatically assigned. This parameter is supported for IPv4 and IPv6 types but not for IPv6 NAT64 type.<br>Note: When creating a private network instance or a public IPv6 BGP instance with a designated VIP, creation fails if the VIP is not within the IP range of the specified VPC subnet or if the VIP is already occupied.</p>
                     * @return Vip <p>Specify VIP to apply for Cloud Load Balancer. This parameter is optional. If this parameter is not specified, VIP is automatically assigned. This parameter is supported for IPv4 and IPv6 types but not for IPv6 NAT64 type.<br>Note: When creating a private network instance or a public IPv6 BGP instance with a designated VIP, creation fails if the VIP is not within the IP range of the specified VPC subnet or if the VIP is already occupied.</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Specify VIP to apply for Cloud Load Balancer. This parameter is optional. If this parameter is not specified, VIP is automatically assigned. This parameter is supported for IPv4 and IPv6 types but not for IPv6 NAT64 type.<br>Note: When creating a private network instance or a public IPv6 BGP instance with a designated VIP, creation fails if the VIP is not within the IP range of the specified VPC subnet or if the VIP is already occupied.</p>
                     * @param _vip <p>Specify VIP to apply for Cloud Load Balancer. This parameter is optional. If this parameter is not specified, VIP is automatically assigned. This parameter is supported for IPv4 and IPv6 types but not for IPv6 NAT64 type.<br>Note: When creating a private network instance or a public IPv6 BGP instance with a designated VIP, creation fails if the VIP is not within the IP range of the specified VPC subnet or if the VIP is already occupied.</p>
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
                     * 获取<p>Bandwidth package ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1">DescribeBandwidthPackages</a> API. When this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE), and the bandwidth package attributes determine the settlement method. For IPv6 Cloud Load Balancer instances purchased by non-promoted users with a non-BGP operator type, specifying bandwidth package ID is unsupported.</p>
                     * @return BandwidthPackageId <p>Bandwidth package ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1">DescribeBandwidthPackages</a> API. When this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE), and the bandwidth package attributes determine the settlement method. For IPv6 Cloud Load Balancer instances purchased by non-promoted users with a non-BGP operator type, specifying bandwidth package ID is unsupported.</p>
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置<p>Bandwidth package ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1">DescribeBandwidthPackages</a> API. When this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE), and the bandwidth package attributes determine the settlement method. For IPv6 Cloud Load Balancer instances purchased by non-promoted users with a non-BGP operator type, specifying bandwidth package ID is unsupported.</p>
                     * @param _bandwidthPackageId <p>Bandwidth package ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1">DescribeBandwidthPackages</a> API. When this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE), and the bandwidth package attributes determine the settlement method. For IPv6 Cloud Load Balancer instances purchased by non-promoted users with a non-BGP operator type, specifying bandwidth package ID is unsupported.</p>
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
                     * 获取<p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For Chinese site users who need to create a shared instance, this parameter is not required. International site users will purchase a standard instance by default if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     * @return SlaType <p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For Chinese site users who need to create a shared instance, this parameter is not required. International site users will purchase a standard instance by default if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置<p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For Chinese site users who need to create a shared instance, this parameter is not required. International site users will purchase a standard instance by default if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     * @param _slaType <p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For Chinese site users who need to create a shared instance, this parameter is not required. International site users will purchase a standard instance by default if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
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
                     * 获取<p>Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a local dedicated cluster. To apply for a public cloud exclusive cluster, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a>. For local dedicated clusters, refer to the description in <a href="https://www.tencentcloud.com/document/product/1346?from_cn_redirect=1">Local Dedicated Cluster</a>.</p>
                     * @return ClusterIds <p>Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a local dedicated cluster. To apply for a public cloud exclusive cluster, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a>. For local dedicated clusters, refer to the description in <a href="https://www.tencentcloud.com/document/product/1346?from_cn_redirect=1">Local Dedicated Cluster</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置<p>Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a local dedicated cluster. To apply for a public cloud exclusive cluster, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a>. For local dedicated clusters, refer to the description in <a href="https://www.tencentcloud.com/document/product/1346?from_cn_redirect=1">Local Dedicated Cluster</a>.</p>
                     * @param _clusterIds <p>Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a local dedicated cluster. To apply for a public cloud exclusive cluster, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a>. For local dedicated clusters, refer to the description in <a href="https://www.tencentcloud.com/document/product/1346?from_cn_redirect=1">Local Dedicated Cluster</a>.</p>
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取<p>String used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * @return ClientToken <p>String used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>String used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     * @param _clientToken <p>String used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
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
                     * 获取<p>Whether binding cross-regional or cross-Vpc IP addresses is supported.</p>
                     * @return SnatPro <p>Whether binding cross-regional or cross-Vpc IP addresses is supported.</p>
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置<p>Whether binding cross-regional or cross-Vpc IP addresses is supported.</p>
                     * @param _snatPro <p>Whether binding cross-regional or cross-Vpc IP addresses is supported.</p>
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
                     * 获取<p>Enable the cross-regional or cross-Vpc IP binding feature to create a SnatIp.</p>
                     * @return SnatIps <p>Enable the cross-regional or cross-Vpc IP binding feature to create a SnatIp.</p>
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置<p>Enable the cross-regional or cross-Vpc IP binding feature to create a SnatIp.</p>
                     * @param _snatIps <p>Enable the cross-regional or cross-Vpc IP binding feature to create a SnatIp.</p>
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
                     * 获取<p>Applicable only to public network load balancing with IP version IPv4. Sets the secondary AZ ID for cross-AZ disaster recovery. AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. Query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a ticket application via <a href="https://console.cloud.tencent.com/workorder/category">Work Order</a>]</p>
                     * @return SlaveZoneId <p>Applicable only to public network load balancing with IP version IPv4. Sets the secondary AZ ID for cross-AZ disaster recovery. AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. Query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a ticket application via <a href="https://console.cloud.tencent.com/workorder/category">Work Order</a>]</p>
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置<p>Applicable only to public network load balancing with IP version IPv4. Sets the secondary AZ ID for cross-AZ disaster recovery. AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. Query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a ticket application via <a href="https://console.cloud.tencent.com/workorder/category">Work Order</a>]</p>
                     * @param _slaveZoneId <p>Applicable only to public network load balancing with IP version IPv4. Sets the secondary AZ ID for cross-AZ disaster recovery. AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. Query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a ticket application via <a href="https://console.cloud.tencent.com/workorder/category">Work Order</a>]</p>
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
                     * 获取<p>The unique ID of EIP can be accessed through the <a href="https://www.tencentcloud.com/document/product/215/16702?from_cn_redirect=1">DescribeAddresses</a> api for the query. Example: eip-qhx8udkc, applicable only to bind EIP for private network CLB.</p>
                     * @return EipAddressId <p>The unique ID of EIP can be accessed through the <a href="https://www.tencentcloud.com/document/product/215/16702?from_cn_redirect=1">DescribeAddresses</a> api for the query. Example: eip-qhx8udkc, applicable only to bind EIP for private network CLB.</p>
                     * 
                     */
                    std::string GetEipAddressId() const;

                    /**
                     * 设置<p>The unique ID of EIP can be accessed through the <a href="https://www.tencentcloud.com/document/product/215/16702?from_cn_redirect=1">DescribeAddresses</a> api for the query. Example: eip-qhx8udkc, applicable only to bind EIP for private network CLB.</p>
                     * @param _eipAddressId <p>The unique ID of EIP can be accessed through the <a href="https://www.tencentcloud.com/document/product/215/16702?from_cn_redirect=1">DescribeAddresses</a> api for the query. Example: eip-qhx8udkc, applicable only to bind EIP for private network CLB.</p>
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
                     * 获取<p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.</p>
                     * @return LoadBalancerPassToTarget <p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.</p>
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置<p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.</p>
                     * @param _loadBalancerPassToTarget <p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.</p>
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
                     * 获取<p>Create a domain-name based CLB.</p>
                     * @return DynamicVip <p>Create a domain-name based CLB.</p>
                     * 
                     */
                    bool GetDynamicVip() const;

                    /**
                     * 设置<p>Create a domain-name based CLB.</p>
                     * @param _dynamicVip <p>Create a domain-name based CLB.</p>
                     * 
                     */
                    void SetDynamicVip(const bool& _dynamicVip);

                    /**
                     * 判断参数 DynamicVip 是否已赋值
                     * @return DynamicVip 是否已赋值
                     * 
                     */
                    bool DynamicVipHasBeenSet() const;

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
                     * 获取<p>Prepaid billing attributes of the CLB instance</p>
                     * @return LBChargePrepaid <p>Prepaid billing attributes of the CLB instance</p>
                     * 
                     */
                    LBChargePrepaid GetLBChargePrepaid() const;

                    /**
                     * 设置<p>Prepaid billing attributes of the CLB instance</p>
                     * @param _lBChargePrepaid <p>Prepaid billing attributes of the CLB instance</p>
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
                     * 获取<p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p><p>Enumeration values:</p><ul><li>POSTPAID_BY_HOUR: Pay-As-You-Go</li><li>PREPAID: Monthly Subscription</li></ul>
                     * @return LBChargeType <p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p><p>Enumeration values:</p><ul><li>POSTPAID_BY_HOUR: Pay-As-You-Go</li><li>PREPAID: Monthly Subscription</li></ul>
                     * 
                     */
                    std::string GetLBChargeType() const;

                    /**
                     * 设置<p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p><p>Enumeration values:</p><ul><li>POSTPAID_BY_HOUR: Pay-As-You-Go</li><li>PREPAID: Monthly Subscription</li></ul>
                     * @param _lBChargeType <p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p><p>Enumeration values:</p><ul><li>POSTPAID_BY_HOUR: Pay-As-You-Go</li><li>PREPAID: Monthly Subscription</li></ul>
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
                     * <p>Type of the Cloud Load Balancer instance. 1: Common CLB instance. Currently only support passing in 1.</p>
                     */
                    int64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * <p>The name of the Cloud Load Balancer instance is effective only when creating an instance. Rule: 1-80 characters in internationally compatible languages such as English letters, Chinese characters, digits, connecting line "-", underscore "_", and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden). Note: If the name is identical to an existing Cloud Load Balancer instance name in the system, the system will automatically generate the name for the created CLB instance.</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Network ID of the target device on the CLB backend, such as `vpc-12345678`, which can be obtained through the `DescribeVpcEx` API. If this parameter is not entered, `DefaultVPC` is used by default. This parameter is required when creating a private network instance.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>When you purchase a private network CLB instance in a VPC, the subnet ID must be specified. The VIP of the private network CLB instance is generated in this subnet.<br>This parameter is required when you create a private network CLB instance or a CLB instance of the IPv6FullChain version.<br>It cannot be specified when you create a public network IPv4 CLB instance.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not entered, the default project will be used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Applicable only to public network CLB. IP version, valid values: IPV4, IPV6, IPv6FullChain, case-insensitive, default value IPV4. Description: A value of IPV6 means IPV6 NAT64 version; a value of IPv6FullChain means IPv6 version.</p>
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * <p>Count of Cloud Load Balancers to create, default value is 1. The count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.</p>
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>Applicable only to public network load balancing with IP version IPv4. Sets the primary AZ ID for cross-AZ disaster recovery. Both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The primary AZ loads traffic. The secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.</p>
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * <p>Applicable only to public network load balancing with IP version IPv4. AZ ID, availability zone id and name are supported. Specify availability zone to create a CLB instance. For example: 100001 or ap-guangzhou-1.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>Applicable only to public network CLB. Currently, only Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing regions support static single-line IP type. If you need to experience it, contact business manager to submit a request. After approval, you can select operator type of China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). Only can be used network billing mode BANDWIDTH_PACKAGE. If this parameter is not specified, use BGP by default. You can query ISPs supported in a region via <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> api.</p>
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * <p>When purchasing a Cloud Load Balancer, you can tag it with up to 20 tag key-value pairs.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Specify VIP to apply for Cloud Load Balancer. This parameter is optional. If this parameter is not specified, VIP is automatically assigned. This parameter is supported for IPv4 and IPv6 types but not for IPv6 NAT64 type.<br>Note: When creating a private network instance or a public IPv6 BGP instance with a designated VIP, creation fails if the VIP is not within the IP range of the specified VPC subnet or if the VIP is already occupied.</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Bandwidth package ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1">DescribeBandwidthPackages</a> API. When this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE), and the bandwidth package attributes determine the settlement method. For IPv6 Cloud Load Balancer instances purchased by non-promoted users with a non-BGP operator type, specifying bandwidth package ID is unsupported.</p>
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * <p>Dedicated instance info. This parameter is required when creating a private network CLB instance of exclusive type.</p>
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * <p>Performance capacity specification.</p><ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>For Chinese site users who need to create a shared instance, this parameter is not required. International site users will purchase a standard instance by default if this parameter is not passed.</li></ul> For specification details, see [Instance Specifications Comparison](https://www.tencentcloud.com/document/product/214/84689?from_cn_redirect=1).
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * <p>Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a local dedicated cluster. To apply for a public cloud exclusive cluster, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a>. For local dedicated clusters, refer to the description in <a href="https://www.tencentcloud.com/document/product/1346?from_cn_redirect=1">Local Dedicated Cluster</a>.</p>
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * <p>String used to ensure request idempotency. This string is generated by the customer and must be unique among different requests, with a maximum value of 64 ASCII characters. If not specified, request idempotency cannot be guaranteed.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Whether binding cross-regional or cross-Vpc IP addresses is supported.</p>
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * <p>Enable the cross-regional or cross-Vpc IP binding feature to create a SnatIp.</p>
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * <p>Tag of the Stgw exclusive cluster.</p>
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * <p>Applicable only to public network load balancing with IP version IPv4. Sets the secondary AZ ID for cross-AZ disaster recovery. AZ ID and name are supported, such as 100001 or ap-guangzhou-1.<br>Note: The secondary AZ is the availability zone that needs to carry traffic after primary availability zone failure. Query a region's list of primary/secondary AZs via the <a href="https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1">DescribeResources</a> API. [If you need to trial the feature, submit a ticket application via <a href="https://console.cloud.tencent.com/workorder/category">Work Order</a>]</p>
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * <p>The unique ID of EIP can be accessed through the <a href="https://www.tencentcloud.com/document/product/215/16702?from_cn_redirect=1">DescribeAddresses</a> api for the query. Example: eip-qhx8udkc, applicable only to bind EIP for private network CLB.</p>
                     */
                    std::string m_eipAddressId;
                    bool m_eipAddressIdHasBeenSet;

                    /**
                     * <p>Allow CLB traffic to the Target. Enable (true): verify security groups on CLB; deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.</p>
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * <p>Create a domain-name based CLB.</p>
                     */
                    bool m_dynamicVip;
                    bool m_dynamicVipHasBeenSet;

                    /**
                     * <p>Network outbound</p>
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * <p>Prepaid billing attributes of the CLB instance</p>
                     */
                    LBChargePrepaid m_lBChargePrepaid;
                    bool m_lBChargePrepaidHasBeenSet;

                    /**
                     * <p>Billing type of the CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR.</p><p>Enumeration values:</p><ul><li>POSTPAID_BY_HOUR: Pay-As-You-Go</li><li>PREPAID: Monthly Subscription</li></ul>
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

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERREQUEST_H_
