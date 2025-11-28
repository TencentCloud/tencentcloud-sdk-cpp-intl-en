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
                     * 获取A subnet ID should be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.
                     * @return SubnetId A subnet ID should be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置A subnet ID should be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.
                     * @param _subnetId A subnet ID should be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.
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
                     * 获取Specifies the count of cloud load balancers to create, with a default value of 1. the count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.
                     * @return Number Specifies the count of cloud load balancers to create, with a default value of 1. the count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置Specifies the count of cloud load balancers to create, with a default value of 1. the count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.
                     * @param _number Specifies the count of cloud load balancers to create, with a default value of 1. the count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.
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
                     * 获取Applicable only to public network IPv4 cloud load balancer instances. specifies the primary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: the primary AZ loads traffic. the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.
                     * @return MasterZoneId Applicable only to public network IPv4 cloud load balancer instances. specifies the primary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: the primary AZ loads traffic. the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置Applicable only to public network IPv4 cloud load balancer instances. specifies the primary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: the primary AZ loads traffic. the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.
                     * @param _masterZoneId Applicable only to public network IPv4 cloud load balancer instances. specifies the primary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: the primary AZ loads traffic. the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.
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
                     * 获取Applicable only to public network IPv4 clb instances. specifies the AZ ID or availability zone name for creating a clb instance. for example, 100001 or ap-guangzhou-1.
                     * @return ZoneId Applicable only to public network IPv4 clb instances. specifies the AZ ID or availability zone name for creating a clb instance. for example, 100001 or ap-guangzhou-1.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Applicable only to public network IPv4 clb instances. specifies the AZ ID or availability zone name for creating a clb instance. for example, 100001 or ap-guangzhou-1.
                     * @param _zoneId Applicable only to public network IPv4 clb instances. specifies the AZ ID or availability zone name for creating a clb instance. for example, 100001 or ap-guangzhou-1.
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
                     * 获取Network billing mode by the maximum outbound bandwidth. It applies only to private network LCU-supported instances and all public network instances. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @return InternetAccessible Network billing mode by the maximum outbound bandwidth. It applies only to private network LCU-supported instances and all public network instances. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Network billing mode by the maximum outbound bandwidth. It applies only to private network LCU-supported instances and all public network instances. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @param _internetAccessible Network billing mode by the maximum outbound bandwidth. It applies only to private network LCU-supported instances and all public network instances. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
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
                     * 获取BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies the BANDWIDTH PACKAGE ID. when this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE). the attributes of the BANDWIDTH PACKAGE determine the settlement method. for IPv6 clb instances purchased by non-promoted users, if the operator type is not BGP, the BANDWIDTH PACKAGE ID cannot be specified.
                     * @return BandwidthPackageId BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies the BANDWIDTH PACKAGE ID. when this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE). the attributes of the BANDWIDTH PACKAGE determine the settlement method. for IPv6 clb instances purchased by non-promoted users, if the operator type is not BGP, the BANDWIDTH PACKAGE ID cannot be specified.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies the BANDWIDTH PACKAGE ID. when this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE). the attributes of the BANDWIDTH PACKAGE determine the settlement method. for IPv6 clb instances purchased by non-promoted users, if the operator type is not BGP, the BANDWIDTH PACKAGE ID cannot be specified.
                     * @param _bandwidthPackageId BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies the BANDWIDTH PACKAGE ID. when this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE). the attributes of the BANDWIDTH PACKAGE determine the settlement method. for IPv6 clb instances purchased by non-promoted users, if the operator type is not BGP, the BANDWIDTH PACKAGE ID cannot be specified.
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
                     * 获取Applicable only to public network IPv4 clb instances. specifies the secondary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.comom/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @return SlaveZoneId Applicable only to public network IPv4 clb instances. specifies the secondary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.comom/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置Applicable only to public network IPv4 clb instances. specifies the secondary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.comom/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @param _slaveZoneId Applicable only to public network IPv4 clb instances. specifies the secondary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.comom/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
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
                     * 获取The unique ID of EIP, which can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1). format: EIP-qhx8udkc. applicable only to private network clb binding EIP.
                     * @return EipAddressId The unique ID of EIP, which can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1). format: EIP-qhx8udkc. applicable only to private network clb binding EIP.
                     * 
                     */
                    std::string GetEipAddressId() const;

                    /**
                     * 设置The unique ID of EIP, which can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1). format: EIP-qhx8udkc. applicable only to private network clb binding EIP.
                     * @param _eipAddressId The unique ID of EIP, which can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1). format: EIP-qhx8udkc. applicable only to private network clb binding EIP.
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
                     * 获取Specifies whether to allow CLB traffic to the Target. enable (true): verify security groups on CLB. disable (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.
                     * @return LoadBalancerPassToTarget Specifies whether to allow CLB traffic to the Target. enable (true): verify security groups on CLB. disable (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Specifies whether to allow CLB traffic to the Target. enable (true): verify security groups on CLB. disable (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.
                     * @param _loadBalancerPassToTarget Specifies whether to allow CLB traffic to the Target. enable (true): verify security groups on CLB. disable (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.
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
                     * 获取Prepayment-related attributes of a CLB instance. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @return LBChargePrepaid Prepayment-related attributes of a CLB instance. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    LBChargePrepaid GetLBChargePrepaid() const;

                    /**
                     * 设置Prepayment-related attributes of a CLB instance. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @param _lBChargePrepaid Prepayment-related attributes of a CLB instance. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
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
                     * 获取Billing type of a CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @return LBChargeType Billing type of a CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    std::string GetLBChargeType() const;

                    /**
                     * 设置Billing type of a CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @param _lBChargeType Billing type of a CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
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
                     * 获取Topic ID of logs of traffic access over layer-7 protocols.
                     * @return AccessLogTopicId Topic ID of logs of traffic access over layer-7 protocols.
                     * 
                     */
                    std::string GetAccessLogTopicId() const;

                    /**
                     * 设置Topic ID of logs of traffic access over layer-7 protocols.
                     * @param _accessLogTopicId Topic ID of logs of traffic access over layer-7 protocols.
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
                     * 获取Whether layer-7 advanced routing is enabled.
                     * @return AdvancedRoute Whether layer-7 advanced routing is enabled.
                     * 
                     */
                    bool GetAdvancedRoute() const;

                    /**
                     * 设置Whether layer-7 advanced routing is enabled.
                     * @param _advancedRoute Whether layer-7 advanced routing is enabled.
                     * 
                     */
                    void SetAdvancedRoute(const bool& _advancedRoute);

                    /**
                     * 判断参数 AdvancedRoute 是否已赋值
                     * @return AdvancedRoute 是否已赋值
                     * 
                     */
                    bool AdvancedRouteHasBeenSet() const;

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
                     * A subnet ID should be specified when you purchase a private network CLB instance under a VPC. The VIP of the private network CLB instance is in this subnet. This parameter is required when you create a private network CLB instance but not supported when you create a public network IPv4 CLB instance.
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
                     * Specifies the count of cloud load balancers to create, with a default value of 1. the count must not exceed the maximum value allowed for the account, with a default creation maximum value of 20.
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Applicable only to public network IPv4 cloud load balancer instances. specifies the primary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: the primary AZ loads traffic. the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable.
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * Applicable only to public network IPv4 clb instances. specifies the AZ ID or availability zone name for creating a clb instance. for example, 100001 or ap-guangzhou-1.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Network billing mode by the maximum outbound bandwidth. It applies only to private network LCU-supported instances and all public network instances. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
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
                     * BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies the BANDWIDTH PACKAGE ID. when this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE). the attributes of the BANDWIDTH PACKAGE determine the settlement method. for IPv6 clb instances purchased by non-promoted users, if the operator type is not BGP, the BANDWIDTH PACKAGE ID cannot be specified.
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
                     * Applicable only to public network IPv4 clb instances. specifies the secondary AZ ID for cross-az disaster recovery. both AZ ID and name are supported, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.comom/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * The unique ID of EIP, which can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1). format: EIP-qhx8udkc. applicable only to private network clb binding EIP.
                     */
                    std::string m_eipAddressId;
                    bool m_eipAddressIdHasBeenSet;

                    /**
                     * Specifies whether to allow CLB traffic to the Target. enable (true): verify security groups on CLB. disable (false): verify security groups on both CLB and backend instances. IPv6 CLB security group default permit, this parameter is not required.
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
                     * Prepayment-related attributes of a CLB instance. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     */
                    LBChargePrepaid m_lBChargePrepaid;
                    bool m_lBChargePrepaidHasBeenSet;

                    /**
                     * Billing type of a CLB instance. Valid values: POSTPAID_BY_HOUR and PREPAID. Default value: POSTPAID_BY_HOUR. The feature of purchasing monthly subscription instances via an API is under grayscale release. If you want to experience this feature, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     */
                    std::string m_lBChargeType;
                    bool m_lBChargeTypeHasBeenSet;

                    /**
                     * Topic ID of logs of traffic access over layer-7 protocols.
                     */
                    std::string m_accessLogTopicId;
                    bool m_accessLogTopicIdHasBeenSet;

                    /**
                     * Whether layer-7 advanced routing is enabled.
                     */
                    bool m_advancedRoute;
                    bool m_advancedRouteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERREQUEST_H_
