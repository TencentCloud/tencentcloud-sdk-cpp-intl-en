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
                     * 获取CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * @return LoadBalancerType CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * @param _loadBalancerType CLB instance network type:
OPEN: public network; INTERNAL: private network.
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
                     * 获取CLB instance type. Valid value: 1 (generic CLB instance).
                     * @return Forward CLB instance type. Valid value: 1 (generic CLB instance).
                     * 
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置CLB instance type. Valid value: 1 (generic CLB instance).
                     * @param _forward CLB instance type. Valid value: 1 (generic CLB instance).
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
                     * 获取CLB instance name, which takes effect only when only one instance is to be created in the request. It can consist 1 to 60 letters, digits, hyphens (-), or underscores (_).
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     * @return LoadBalancerName CLB instance name, which takes effect only when only one instance is to be created in the request. It can consist 1 to 60 letters, digits, hyphens (-), or underscores (_).
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name, which takes effect only when only one instance is to be created in the request. It can consist 1 to 60 letters, digits, hyphens (-), or underscores (_).
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     * @param _loadBalancerName CLB instance name, which takes effect only when only one instance is to be created in the request. It can consist 1 to 60 letters, digits, hyphens (-), or underscores (_).
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
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
                     * 获取A subnet ID must be specified when you purchase a private network CLB instance in a VPC, and the VIP of this instance will be generated in this subnet. This parameter is required for creating a CLB instance.
                     * @return SubnetId A subnet ID must be specified when you purchase a private network CLB instance in a VPC, and the VIP of this instance will be generated in this subnet. This parameter is required for creating a CLB instance.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置A subnet ID must be specified when you purchase a private network CLB instance in a VPC, and the VIP of this instance will be generated in this subnet. This parameter is required for creating a CLB instance.
                     * @param _subnetId A subnet ID must be specified when you purchase a private network CLB instance in a VPC, and the VIP of this instance will be generated in this subnet. This parameter is required for creating a CLB instance.
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
                     * 获取It's only applicable to public network CLB instances. IP version. Values: `IPV4`, `IPV6` and `IPv6FullChain` (case-insensitive). Default: `IPV4`. Note: `IPV6` indicates IPv6 NAT64, while `IPv6FullChain` indicates IPv6. 
                     * @return AddressIPVersion It's only applicable to public network CLB instances. IP version. Values: `IPV4`, `IPV6` and `IPv6FullChain` (case-insensitive). Default: `IPV4`. Note: `IPV6` indicates IPv6 NAT64, while `IPv6FullChain` indicates IPv6. 
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置It's only applicable to public network CLB instances. IP version. Values: `IPV4`, `IPV6` and `IPv6FullChain` (case-insensitive). Default: `IPV4`. Note: `IPV6` indicates IPv6 NAT64, while `IPv6FullChain` indicates IPv6. 
                     * @param _addressIPVersion It's only applicable to public network CLB instances. IP version. Values: `IPV4`, `IPV6` and `IPv6FullChain` (case-insensitive). Default: `IPV4`. Note: `IPV6` indicates IPv6 NAT64, while `IPv6FullChain` indicates IPv6. 
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
                     * 获取Number of CLBs to be created. Default value: 1.
                     * @return Number Number of CLBs to be created. Default value: 1.
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置Number of CLBs to be created. Default value: 1.
                     * @param _number Number of CLBs to be created. Default value: 1.
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
                     * 获取ID of the primary availability zone configured for cross-availability zone disaster recovery, such as 100001 or ap-guangzhou-1. It applies only to public network CLB.Note: The primary availability zone is the one that carries traffic. The replica availability zone does not carry traffic by default and is only used when the primary availability zone is unavailable. Currently, primary and replica availability zones are supported only for the IPv4 CLB instances in the regions of Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance Zone, Hong Kong (China), Seoul, Frankfurt, and Singapore. You can query the list of primary availability zones in a region through the [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1) API.
                     * @return MasterZoneId ID of the primary availability zone configured for cross-availability zone disaster recovery, such as 100001 or ap-guangzhou-1. It applies only to public network CLB.Note: The primary availability zone is the one that carries traffic. The replica availability zone does not carry traffic by default and is only used when the primary availability zone is unavailable. Currently, primary and replica availability zones are supported only for the IPv4 CLB instances in the regions of Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance Zone, Hong Kong (China), Seoul, Frankfurt, and Singapore. You can query the list of primary availability zones in a region through the [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置ID of the primary availability zone configured for cross-availability zone disaster recovery, such as 100001 or ap-guangzhou-1. It applies only to public network CLB.Note: The primary availability zone is the one that carries traffic. The replica availability zone does not carry traffic by default and is only used when the primary availability zone is unavailable. Currently, primary and replica availability zones are supported only for the IPv4 CLB instances in the regions of Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance Zone, Hong Kong (China), Seoul, Frankfurt, and Singapore. You can query the list of primary availability zones in a region through the [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1) API.
                     * @param _masterZoneId ID of the primary availability zone configured for cross-availability zone disaster recovery, such as 100001 or ap-guangzhou-1. It applies only to public network CLB.Note: The primary availability zone is the one that carries traffic. The replica availability zone does not carry traffic by default and is only used when the primary availability zone is unavailable. Currently, primary and replica availability zones are supported only for the IPv4 CLB instances in the regions of Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance Zone, Hong Kong (China), Seoul, Frankfurt, and Singapore. You can query the list of primary availability zones in a region through the [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1) API.
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
                     * 获取Specifies an AZ ID for creating a CLB instance, such as `ap-guangzhou-1`, which is applicable only to public network CLB instances.
                     * @return ZoneId Specifies an AZ ID for creating a CLB instance, such as `ap-guangzhou-1`, which is applicable only to public network CLB instances.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies an AZ ID for creating a CLB instance, such as `ap-guangzhou-1`, which is applicable only to public network CLB instances.
                     * @param _zoneId Specifies an AZ ID for creating a CLB instance, such as `ap-guangzhou-1`, which is applicable only to public network CLB instances.
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
                     * 获取Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.
                     * @return InternetAccessible Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.
                     * @param _internetAccessible Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.
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
                     * 获取ISP of VIP. Values: `CMCC` (China Mobile), `CUCC` (China Unicom) and `CTCC` (China Telecom). You need to activate static single-line IPs. This feature is in beta and is only available in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu and Chongqing regions. To try it out, please contact your sales rep. If it's specified, the network billing mode must be `BANDWIDTH_PACKAGE`. If it's not specified, BGP is used by default. To query ISPs supported in a region, please use [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1). 
                     * @return VipIsp ISP of VIP. Values: `CMCC` (China Mobile), `CUCC` (China Unicom) and `CTCC` (China Telecom). You need to activate static single-line IPs. This feature is in beta and is only available in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu and Chongqing regions. To try it out, please contact your sales rep. If it's specified, the network billing mode must be `BANDWIDTH_PACKAGE`. If it's not specified, BGP is used by default. To query ISPs supported in a region, please use [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1). 
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置ISP of VIP. Values: `CMCC` (China Mobile), `CUCC` (China Unicom) and `CTCC` (China Telecom). You need to activate static single-line IPs. This feature is in beta and is only available in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu and Chongqing regions. To try it out, please contact your sales rep. If it's specified, the network billing mode must be `BANDWIDTH_PACKAGE`. If it's not specified, BGP is used by default. To query ISPs supported in a region, please use [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1). 
                     * @param _vipIsp ISP of VIP. Values: `CMCC` (China Mobile), `CUCC` (China Unicom) and `CTCC` (China Telecom). You need to activate static single-line IPs. This feature is in beta and is only available in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu and Chongqing regions. To try it out, please contact your sales rep. If it's specified, the network billing mode must be `BANDWIDTH_PACKAGE`. If it's not specified, BGP is used by default. To query ISPs supported in a region, please use [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1). 
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
                     * 获取Tags the CLB instance when purchasing it. Up to 20 tag key value pairs are supported.
                     * @return Tags Tags the CLB instance when purchasing it. Up to 20 tag key value pairs are supported.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tags the CLB instance when purchasing it. Up to 20 tag key value pairs are supported.
                     * @param _tags Tags the CLB instance when purchasing it. Up to 20 tag key value pairs are supported.
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
                     * 获取Specifies the VIP for the application of a CLB instance. This parameter is optional. If you do not specify this parameter, the system automatically assigns a value for the parameter. IPv4 and IPv6 CLB instances support this parameter, but IPv6 NAT64 CLB instances do not.
Note: If the specified VIP is occupied or is not within the IP range of the specified VPC subnet, you cannot use the VIP to create a CLB instance in a private network or an IPv6 BGP CLB instance in a public network.
                     * @return Vip Specifies the VIP for the application of a CLB instance. This parameter is optional. If you do not specify this parameter, the system automatically assigns a value for the parameter. IPv4 and IPv6 CLB instances support this parameter, but IPv6 NAT64 CLB instances do not.
Note: If the specified VIP is occupied or is not within the IP range of the specified VPC subnet, you cannot use the VIP to create a CLB instance in a private network or an IPv6 BGP CLB instance in a public network.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Specifies the VIP for the application of a CLB instance. This parameter is optional. If you do not specify this parameter, the system automatically assigns a value for the parameter. IPv4 and IPv6 CLB instances support this parameter, but IPv6 NAT64 CLB instances do not.
Note: If the specified VIP is occupied or is not within the IP range of the specified VPC subnet, you cannot use the VIP to create a CLB instance in a private network or an IPv6 BGP CLB instance in a public network.
                     * @param _vip Specifies the VIP for the application of a CLB instance. This parameter is optional. If you do not specify this parameter, the system automatically assigns a value for the parameter. IPv4 and IPv6 CLB instances support this parameter, but IPv6 NAT64 CLB instances do not.
Note: If the specified VIP is occupied or is not within the IP range of the specified VPC subnet, you cannot use the VIP to create a CLB instance in a private network or an IPv6 BGP CLB instance in a public network.
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
                     * 获取Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by bill-by-CVM users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.
                     * @return BandwidthPackageId Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by bill-by-CVM users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by bill-by-CVM users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.
                     * @param _bandwidthPackageId Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by bill-by-CVM users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.
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
                     * 获取Information about the dedicated CLB instance. You must specify this parameter when you create a dedicated CLB instance in a private network.
                     * @return ExclusiveCluster Information about the dedicated CLB instance. You must specify this parameter when you create a dedicated CLB instance in a private network.
                     * 
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置Information about the dedicated CLB instance. You must specify this parameter when you create a dedicated CLB instance in a private network.
                     * @param _exclusiveCluster Information about the dedicated CLB instance. You must specify this parameter when you create a dedicated CLB instance in a private network.
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
                     * 获取Specification of the LCU-supported instance.<ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>If you need to create a shared instance, this parameter is not required.</li></ul> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     * @return SlaType Specification of the LCU-supported instance.<ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>If you need to create a shared instance, this parameter is not required.</li></ul> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Specification of the LCU-supported instance.<ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>If you need to create a shared instance, this parameter is not required.</li></ul> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     * @param _slaType Specification of the LCU-supported instance.<ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>If you need to create a shared instance, this parameter is not required.</li></ul> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
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
                     * 获取Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a cloud dedicated cluster. To apply for a public cloud exclusive cluster, [submit a ticket](https://console.cloud.tencent.com/workorder/category). For cloud dedicated clusters, see the descriptions in [Cloud Dedicated Cluster](https://intl.cloud.tencent.com/document/product/1346?from_cn_redirect=1).
                     * @return ClusterIds Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a cloud dedicated cluster. To apply for a public cloud exclusive cluster, [submit a ticket](https://console.cloud.tencent.com/workorder/category). For cloud dedicated clusters, see the descriptions in [Cloud Dedicated Cluster](https://intl.cloud.tencent.com/document/product/1346?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a cloud dedicated cluster. To apply for a public cloud exclusive cluster, [submit a ticket](https://console.cloud.tencent.com/workorder/category). For cloud dedicated clusters, see the descriptions in [Cloud Dedicated Cluster](https://intl.cloud.tencent.com/document/product/1346?from_cn_redirect=1).
                     * @param _clusterIds Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a cloud dedicated cluster. To apply for a public cloud exclusive cluster, [submit a ticket](https://console.cloud.tencent.com/workorder/category). For cloud dedicated clusters, see the descriptions in [Cloud Dedicated Cluster](https://intl.cloud.tencent.com/document/product/1346?from_cn_redirect=1).
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
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
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
                     * 获取Whether Binding IPs of other VPCs feature switch
                     * @return SnatPro Whether Binding IPs of other VPCs feature switch
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Whether Binding IPs of other VPCs feature switch
                     * @param _snatPro Whether Binding IPs of other VPCs feature switch
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
                     * 获取Creates `SnatIp` when the binding IPs of other VPCs feature is enabled
                     * @return SnatIps Creates `SnatIp` when the binding IPs of other VPCs feature is enabled
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置Creates `SnatIp` when the binding IPs of other VPCs feature is enabled
                     * @param _snatIps Creates `SnatIp` when the binding IPs of other VPCs feature is enabled
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
                     * 获取Tag for the STGW exclusive cluster.
                     * @return ClusterTag Tag for the STGW exclusive cluster.
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置Tag for the STGW exclusive cluster.
                     * @param _clusterTag Tag for the STGW exclusive cluster.
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
                     * 获取Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: The traffic only goes to the secondary AZ when the primary AZ is unavailable. You can query the list of primary and secondary AZ of a region by calling [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1).
                     * @return SlaveZoneId Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: The traffic only goes to the secondary AZ when the primary AZ is unavailable. You can query the list of primary and secondary AZ of a region by calling [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: The traffic only goes to the secondary AZ when the primary AZ is unavailable. You can query the list of primary and secondary AZ of a region by calling [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1).
                     * @param _slaveZoneId Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: The traffic only goes to the secondary AZ when the primary AZ is unavailable. You can query the list of primary and secondary AZ of a region by calling [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1).
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
                     * 获取Unique ID of an EIP, which can only be used when binding the EIP of a private network CLB instance. E.g., `eip-11112222`.
                     * @return EipAddressId Unique ID of an EIP, which can only be used when binding the EIP of a private network CLB instance. E.g., `eip-11112222`.
                     * 
                     */
                    std::string GetEipAddressId() const;

                    /**
                     * 设置Unique ID of an EIP, which can only be used when binding the EIP of a private network CLB instance. E.g., `eip-11112222`.
                     * @param _eipAddressId Unique ID of an EIP, which can only be used when binding the EIP of a private network CLB instance. E.g., `eip-11112222`.
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
                     * 获取Whether to allow CLB traffic to the target group. `true`: allows CLB traffic to the target group and verifies security groups only on CLB; `false`: denies CLB traffic to the target group and verifies security groups on both CLB and backend instances.
                     * @return LoadBalancerPassToTarget Whether to allow CLB traffic to the target group. `true`: allows CLB traffic to the target group and verifies security groups only on CLB; `false`: denies CLB traffic to the target group and verifies security groups on both CLB and backend instances.
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Whether to allow CLB traffic to the target group. `true`: allows CLB traffic to the target group and verifies security groups only on CLB; `false`: denies CLB traffic to the target group and verifies security groups on both CLB and backend instances.
                     * @param _loadBalancerPassToTarget Whether to allow CLB traffic to the target group. `true`: allows CLB traffic to the target group and verifies security groups only on CLB; `false`: denies CLB traffic to the target group and verifies security groups on both CLB and backend instances.
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
                     * 获取Upgrades to domain name-based CLB
                     * @return DynamicVip Upgrades to domain name-based CLB
                     * 
                     */
                    bool GetDynamicVip() const;

                    /**
                     * 设置Upgrades to domain name-based CLB
                     * @param _dynamicVip Upgrades to domain name-based CLB
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
                     * 获取Network egress point
                     * @return Egress Network egress point
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置Network egress point
                     * @param _egress Network egress point
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
                     * 获取Prepaid billing attributes of a CLB instance
                     * @return LBChargePrepaid Prepaid billing attributes of a CLB instance
                     * 
                     */
                    LBChargePrepaid GetLBChargePrepaid() const;

                    /**
                     * 设置Prepaid billing attributes of a CLB instance
                     * @param _lBChargePrepaid Prepaid billing attributes of a CLB instance
                     * 
                     */
                    void SetLBChargePrepaid(const LBChargePrepaid& _lBChargePrepaid);

                    /**
                     * 判断参数 LBChargePrepaid 是否已赋值
                     * @return LBChargePrepaid 是否已赋值
                     * 
                     */
                    bool LBChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB instance type. Valid value: 1 (generic CLB instance).
                     */
                    int64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * CLB instance name, which takes effect only when only one instance is to be created in the request. It can consist 1 to 60 letters, digits, hyphens (-), or underscores (_).
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Network ID of the target device on the CLB backend, such as `vpc-12345678`, which can be obtained through the `DescribeVpcEx` API. If this parameter is not entered, `DefaultVPC` is used by default. This parameter is required when creating a private network instance.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * A subnet ID must be specified when you purchase a private network CLB instance in a VPC, and the VIP of this instance will be generated in this subnet. This parameter is required for creating a CLB instance.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not entered, the default project will be used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * It's only applicable to public network CLB instances. IP version. Values: `IPV4`, `IPV6` and `IPv6FullChain` (case-insensitive). Default: `IPV4`. Note: `IPV6` indicates IPv6 NAT64, while `IPv6FullChain` indicates IPv6. 
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * Number of CLBs to be created. Default value: 1.
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * ID of the primary availability zone configured for cross-availability zone disaster recovery, such as 100001 or ap-guangzhou-1. It applies only to public network CLB.Note: The primary availability zone is the one that carries traffic. The replica availability zone does not carry traffic by default and is only used when the primary availability zone is unavailable. Currently, primary and replica availability zones are supported only for the IPv4 CLB instances in the regions of Guangzhou, Shanghai, Nanjing, Beijing, Chengdu, Shenzhen Finance Zone, Hong Kong (China), Seoul, Frankfurt, and Singapore. You can query the list of primary availability zones in a region through the [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1) API.
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * Specifies an AZ ID for creating a CLB instance, such as `ap-guangzhou-1`, which is applicable only to public network CLB instances.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Maximum outbound bandwidth under the network billing mode. It applies only to LCU-supported instances of the private network type and all instances of the public network type.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * ISP of VIP. Values: `CMCC` (China Mobile), `CUCC` (China Unicom) and `CTCC` (China Telecom). You need to activate static single-line IPs. This feature is in beta and is only available in Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu and Chongqing regions. To try it out, please contact your sales rep. If it's specified, the network billing mode must be `BANDWIDTH_PACKAGE`. If it's not specified, BGP is used by default. To query ISPs supported in a region, please use [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1). 
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * Tags the CLB instance when purchasing it. Up to 20 tag key value pairs are supported.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Specifies the VIP for the application of a CLB instance. This parameter is optional. If you do not specify this parameter, the system automatically assigns a value for the parameter. IPv4 and IPv6 CLB instances support this parameter, but IPv6 NAT64 CLB instances do not.
Note: If the specified VIP is occupied or is not within the IP range of the specified VPC subnet, you cannot use the VIP to create a CLB instance in a private network or an IPv6 BGP CLB instance in a public network.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) will only support billing by bandwidth package (BANDWIDTH_PACKAGE). The attributes of the bandwidth package determine the settlement method. For IPv6 CLB instances purchased by bill-by-CVM users, if the ISP type is not BGP, the bandwidth package ID cannot be specified.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * Information about the dedicated CLB instance. You must specify this parameter when you create a dedicated CLB instance in a private network.
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * Specification of the LCU-supported instance.<ul><li>If you need to create an LCU-supported instance, this parameter is required. Valid values:<ul><li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li></ul></li><li>If you need to create a shared instance, this parameter is not required.</li></ul> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Cluster ID. This cluster identifier is used for configuring a public cloud exclusive cluster or a cloud dedicated cluster. To apply for a public cloud exclusive cluster, [submit a ticket](https://console.cloud.tencent.com/workorder/category). For cloud dedicated clusters, see the descriptions in [Cloud Dedicated Cluster](https://intl.cloud.tencent.com/document/product/1346?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Whether Binding IPs of other VPCs feature switch
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * Creates `SnatIp` when the binding IPs of other VPCs feature is enabled
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * Tag for the STGW exclusive cluster.
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: The traffic only goes to the secondary AZ when the primary AZ is unavailable. You can query the list of primary and secondary AZ of a region by calling [DescribeResources](https://intl.cloud.tencent.com/document/api/214/70213?from_cn_redirect=1).
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * Unique ID of an EIP, which can only be used when binding the EIP of a private network CLB instance. E.g., `eip-11112222`.
                     */
                    std::string m_eipAddressId;
                    bool m_eipAddressIdHasBeenSet;

                    /**
                     * Whether to allow CLB traffic to the target group. `true`: allows CLB traffic to the target group and verifies security groups only on CLB; `false`: denies CLB traffic to the target group and verifies security groups on both CLB and backend instances.
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * Upgrades to domain name-based CLB
                     */
                    bool m_dynamicVip;
                    bool m_dynamicVipHasBeenSet;

                    /**
                     * Network egress point
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * Prepaid billing attributes of a CLB instance
                     */
                    LBChargePrepaid m_lBChargePrepaid;
                    bool m_lBChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERREQUEST_H_
