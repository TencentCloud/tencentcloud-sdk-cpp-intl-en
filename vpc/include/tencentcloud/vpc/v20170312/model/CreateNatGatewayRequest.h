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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateNatGateway request structure.
                */
                class CreateNatGatewayRequest : public AbstractModel
                {
                public:
                    CreateNatGatewayRequest();
                    ~CreateNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT gateway name
                     * @return NatGatewayName NAT gateway name
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT gateway name
                     * @param _natGatewayName NAT gateway name
                     * 
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     * 
                     */
                    bool NatGatewayNameHasBeenSet() const;

                    /**
                     * 获取The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     * @return VpcId The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     * @param _vpcId The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
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
                     * 获取The maximum outbound bandwidth of the NAT gateway (unit: Mbps). Supported parameter values: `20, 50, 100, 200, 500, 1000, 2000, 5000`. Default: `100`.
                     * @return InternetMaxBandwidthOut The maximum outbound bandwidth of the NAT gateway (unit: Mbps). Supported parameter values: `20, 50, 100, 200, 500, 1000, 2000, 5000`. Default: `100`.
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The maximum outbound bandwidth of the NAT gateway (unit: Mbps). Supported parameter values: `20, 50, 100, 200, 500, 1000, 2000, 5000`. Default: `100`.
                     * @param _internetMaxBandwidthOut The maximum outbound bandwidth of the NAT gateway (unit: Mbps). Supported parameter values: `20, 50, 100, 200, 500, 1000, 2000, 5000`. Default: `100`.
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取The concurrent connection cap of the NAT gateway. Values: `1000000, 3000000, 10000000`. The default value is `1000000`.
                     * @return MaxConcurrentConnection The concurrent connection cap of the NAT gateway. Values: `1000000, 3000000, 10000000`. The default value is `1000000`.
                     * 
                     */
                    uint64_t GetMaxConcurrentConnection() const;

                    /**
                     * 设置The concurrent connection cap of the NAT gateway. Values: `1000000, 3000000, 10000000`. The default value is `1000000`.
                     * @param _maxConcurrentConnection The concurrent connection cap of the NAT gateway. Values: `1000000, 3000000, 10000000`. The default value is `1000000`.
                     * 
                     */
                    void SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection);

                    /**
                     * 判断参数 MaxConcurrentConnection 是否已赋值
                     * @return MaxConcurrentConnection 是否已赋值
                     * 
                     */
                    bool MaxConcurrentConnectionHasBeenSet() const;

                    /**
                     * 获取The number of EIPs that you want to apply for. Either `AddressCount` or `PublicIpAddresses` must be passed in.
                     * @return AddressCount The number of EIPs that you want to apply for. Either `AddressCount` or `PublicIpAddresses` must be passed in.
                     * 
                     */
                    uint64_t GetAddressCount() const;

                    /**
                     * 设置The number of EIPs that you want to apply for. Either `AddressCount` or `PublicIpAddresses` must be passed in.
                     * @param _addressCount The number of EIPs that you want to apply for. Either `AddressCount` or `PublicIpAddresses` must be passed in.
                     * 
                     */
                    void SetAddressCount(const uint64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     * 
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取The EIP array bound to the NAT gateway. Either AddressCount or PublicIpAddresses must be passed in.
                     * @return PublicIpAddresses The EIP array bound to the NAT gateway. Either AddressCount or PublicIpAddresses must be passed in.
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置The EIP array bound to the NAT gateway. Either AddressCount or PublicIpAddresses must be passed in.
                     * @param _publicIpAddresses The EIP array bound to the NAT gateway. Either AddressCount or PublicIpAddresses must be passed in.
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取The availability zone, such as `ap-guangzhou-1`.
                     * @return Zone The availability zone, such as `ap-guangzhou-1`.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone, such as `ap-guangzhou-1`.
                     * @param _zone The availability zone, such as `ap-guangzhou-1`.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}]
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}]
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}]
                     * @param _tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}]
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
                     * 获取Subnet of the NAT gateway
                     * @return SubnetId Subnet of the NAT gateway
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet of the NAT gateway
                     * @param _subnetId Subnet of the NAT gateway
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
                     * 获取The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     * @return StockPublicIpAddressesBandwidthOut The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     * 
                     */
                    uint64_t GetStockPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     * @param _stockPublicIpAddressesBandwidthOut The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     * 
                     */
                    void SetStockPublicIpAddressesBandwidthOut(const uint64_t& _stockPublicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 StockPublicIpAddressesBandwidthOut 是否已赋值
                     * @return StockPublicIpAddressesBandwidthOut 是否已赋值
                     * 
                     */
                    bool StockPublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取The size of the public network IP bandwidth to be applied for (in Mbps), which defaults to the maximum value applicable for the current user type.
                     * @return PublicIpAddressesBandwidthOut The size of the public network IP bandwidth to be applied for (in Mbps), which defaults to the maximum value applicable for the current user type.
                     * 
                     */
                    uint64_t GetPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置The size of the public network IP bandwidth to be applied for (in Mbps), which defaults to the maximum value applicable for the current user type.
                     * @param _publicIpAddressesBandwidthOut The size of the public network IP bandwidth to be applied for (in Mbps), which defaults to the maximum value applicable for the current user type.
                     * 
                     */
                    void SetPublicIpAddressesBandwidthOut(const uint64_t& _publicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 PublicIpAddressesBandwidthOut 是否已赋值
                     * @return PublicIpAddressesBandwidthOut 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Whether the public IP and the NAT gateway must be in the same availability zone. Valid values: `true` and `false`. This parameter is valid only when `Zone` is specified.
                     * @return PublicIpFromSameZone Whether the public IP and the NAT gateway must be in the same availability zone. Valid values: `true` and `false`. This parameter is valid only when `Zone` is specified.
                     * 
                     */
                    bool GetPublicIpFromSameZone() const;

                    /**
                     * 设置Whether the public IP and the NAT gateway must be in the same availability zone. Valid values: `true` and `false`. This parameter is valid only when `Zone` is specified.
                     * @param _publicIpFromSameZone Whether the public IP and the NAT gateway must be in the same availability zone. Valid values: `true` and `false`. This parameter is valid only when `Zone` is specified.
                     * 
                     */
                    void SetPublicIpFromSameZone(const bool& _publicIpFromSameZone);

                    /**
                     * 判断参数 PublicIpFromSameZone 是否已赋值
                     * @return PublicIpFromSameZone 是否已赋值
                     * 
                     */
                    bool PublicIpFromSameZoneHasBeenSet() const;

                private:

                    /**
                     * NAT gateway name
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The maximum outbound bandwidth of the NAT gateway (unit: Mbps). Supported parameter values: `20, 50, 100, 200, 500, 1000, 2000, 5000`. Default: `100`.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * The concurrent connection cap of the NAT gateway. Values: `1000000, 3000000, 10000000`. The default value is `1000000`.
                     */
                    uint64_t m_maxConcurrentConnection;
                    bool m_maxConcurrentConnectionHasBeenSet;

                    /**
                     * The number of EIPs that you want to apply for. Either `AddressCount` or `PublicIpAddresses` must be passed in.
                     */
                    uint64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * The EIP array bound to the NAT gateway. Either AddressCount or PublicIpAddresses must be passed in.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * The availability zone, such as `ap-guangzhou-1`.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}]
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Subnet of the NAT gateway
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     */
                    uint64_t m_stockPublicIpAddressesBandwidthOut;
                    bool m_stockPublicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * The size of the public network IP bandwidth to be applied for (in Mbps), which defaults to the maximum value applicable for the current user type.
                     */
                    uint64_t m_publicIpAddressesBandwidthOut;
                    bool m_publicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * Whether the public IP and the NAT gateway must be in the same availability zone. Valid values: `true` and `false`. This parameter is valid only when `Zone` is specified.
                     */
                    bool m_publicIpFromSameZone;
                    bool m_publicIpFromSameZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYREQUEST_H_
