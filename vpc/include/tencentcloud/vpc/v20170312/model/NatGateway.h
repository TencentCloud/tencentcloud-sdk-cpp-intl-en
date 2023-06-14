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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NatGatewayAddress.h>
#include <tencentcloud/vpc/v20170312/model/DestinationIpPortTranslationNatRule.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/SourceIpTranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * NAT gateway object.
                */
                class NatGateway : public AbstractModel
                {
                public:
                    NatGateway();
                    ~NatGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NAT gateway ID.
                     * @return NatGatewayId NAT gateway ID.
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT gateway ID.
                     * @param _natGatewayId NAT gateway ID.
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取NAT gateway name.
                     * @return NatGatewayName NAT gateway name.
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT gateway name.
                     * @param _natGatewayName NAT gateway name.
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
                     * 获取NAT gateway creation time.
                     * @return CreatedTime NAT gateway creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置NAT gateway creation time.
                     * @param _createdTime NAT gateway creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取The status of the NAT gateway.
 `PENDING`: Being created, `DELETING`: Being deleted, `AVAILABLE`: Running, `UPDATING`: Being upgraded,
`FAILED`: Failed.
                     * @return State The status of the NAT gateway.
 `PENDING`: Being created, `DELETING`: Being deleted, `AVAILABLE`: Running, `UPDATING`: Being upgraded,
`FAILED`: Failed.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置The status of the NAT gateway.
 `PENDING`: Being created, `DELETING`: Being deleted, `AVAILABLE`: Running, `UPDATING`: Being upgraded,
`FAILED`: Failed.
                     * @param _state The status of the NAT gateway.
 `PENDING`: Being created, `DELETING`: Being deleted, `AVAILABLE`: Running, `UPDATING`: Being upgraded,
`FAILED`: Failed.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     * @return InternetMaxBandwidthOut The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     * @param _internetMaxBandwidthOut The maximum outbound bandwidth of the gateway. Unit: Mbps.
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
                     * 获取The concurrent connections cap of the gateway.
                     * @return MaxConcurrentConnection The concurrent connections cap of the gateway.
                     * 
                     */
                    uint64_t GetMaxConcurrentConnection() const;

                    /**
                     * 设置The concurrent connections cap of the gateway.
                     * @param _maxConcurrentConnection The concurrent connections cap of the gateway.
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
                     * 获取The public IP object array of the bound NAT gateway.
                     * @return PublicIpAddressSet The public IP object array of the bound NAT gateway.
                     * 
                     */
                    std::vector<NatGatewayAddress> GetPublicIpAddressSet() const;

                    /**
                     * 设置The public IP object array of the bound NAT gateway.
                     * @param _publicIpAddressSet The public IP object array of the bound NAT gateway.
                     * 
                     */
                    void SetPublicIpAddressSet(const std::vector<NatGatewayAddress>& _publicIpAddressSet);

                    /**
                     * 判断参数 PublicIpAddressSet 是否已赋值
                     * @return PublicIpAddressSet 是否已赋值
                     * 
                     */
                    bool PublicIpAddressSetHasBeenSet() const;

                    /**
                     * 获取The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Service suspended due to account overdue.
                     * @return NetworkState The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Service suspended due to account overdue.
                     * 
                     */
                    std::string GetNetworkState() const;

                    /**
                     * 设置The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Service suspended due to account overdue.
                     * @param _networkState The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Service suspended due to account overdue.
                     * 
                     */
                    void SetNetworkState(const std::string& _networkState);

                    /**
                     * 判断参数 NetworkState 是否已赋值
                     * @return NetworkState 是否已赋值
                     * 
                     */
                    bool NetworkStateHasBeenSet() const;

                    /**
                     * 获取The port forwarding rules of the NAT gateway.
                     * @return DestinationIpPortTranslationNatRuleSet The port forwarding rules of the NAT gateway.
                     * 
                     */
                    std::vector<DestinationIpPortTranslationNatRule> GetDestinationIpPortTranslationNatRuleSet() const;

                    /**
                     * 设置The port forwarding rules of the NAT gateway.
                     * @param _destinationIpPortTranslationNatRuleSet The port forwarding rules of the NAT gateway.
                     * 
                     */
                    void SetDestinationIpPortTranslationNatRuleSet(const std::vector<DestinationIpPortTranslationNatRule>& _destinationIpPortTranslationNatRuleSet);

                    /**
                     * 判断参数 DestinationIpPortTranslationNatRuleSet 是否已赋值
                     * @return DestinationIpPortTranslationNatRuleSet 是否已赋值
                     * 
                     */
                    bool DestinationIpPortTranslationNatRuleSetHasBeenSet() const;

                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param _vpcId VPC instance ID.
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
                     * 获取The availability zone in which the NAT gateway is located.
                     * @return Zone The availability zone in which the NAT gateway is located.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone in which the NAT gateway is located.
                     * @param _zone The availability zone in which the NAT gateway is located.
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
                     * 获取ID of the direct connect gateway bound.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DirectConnectGatewayIds ID of the direct connect gateway bound.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDirectConnectGatewayIds() const;

                    /**
                     * 设置ID of the direct connect gateway bound.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _directConnectGatewayIds ID of the direct connect gateway bound.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDirectConnectGatewayIds(const std::vector<std::string>& _directConnectGatewayIds);

                    /**
                     * 判断参数 DirectConnectGatewayIds 是否已赋值
                     * @return DirectConnectGatewayIds 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdsHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Tag key-value pairs.
                     * @return TagSet Tag key-value pairs.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs.
                     * @param _tagSet Tag key-value pairs.
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取The list of the security groups bound to the NAT Gateway
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SecurityGroupSet The list of the security groups bound to the NAT Gateway
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupSet() const;

                    /**
                     * 设置The list of the security groups bound to the NAT Gateway
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _securityGroupSet The list of the security groups bound to the NAT Gateway
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecurityGroupSet(const std::vector<std::string>& _securityGroupSet);

                    /**
                     * 判断参数 SecurityGroupSet 是否已赋值
                     * @return SecurityGroupSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupSetHasBeenSet() const;

                    /**
                     * 获取SNAT forwarding rule of the NAT gateway.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SourceIpTranslationNatRuleSet SNAT forwarding rule of the NAT gateway.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SourceIpTranslationNatRule> GetSourceIpTranslationNatRuleSet() const;

                    /**
                     * 设置SNAT forwarding rule of the NAT gateway.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _sourceIpTranslationNatRuleSet SNAT forwarding rule of the NAT gateway.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceIpTranslationNatRuleSet(const std::vector<SourceIpTranslationNatRule>& _sourceIpTranslationNatRuleSet);

                    /**
                     * 判断参数 SourceIpTranslationNatRuleSet 是否已赋值
                     * @return SourceIpTranslationNatRuleSet 是否已赋值
                     * 
                     */
                    bool SourceIpTranslationNatRuleSetHasBeenSet() const;

                    /**
                     * 获取Whether the NAT gateway is dedicated.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IsExclusive Whether the NAT gateway is dedicated.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsExclusive() const;

                    /**
                     * 设置Whether the NAT gateway is dedicated.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _isExclusive Whether the NAT gateway is dedicated.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsExclusive(const bool& _isExclusive);

                    /**
                     * 判断参数 IsExclusive 是否已赋值
                     * @return IsExclusive 是否已赋值
                     * 
                     */
                    bool IsExclusiveHasBeenSet() const;

                    /**
                     * 获取Bandwidth of the gateway cluster where the dedicated NAT Gateway resides. Unit: Mbps. This field does not exist when the `IsExclusive` field is set to `false`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ExclusiveGatewayBandwidth Bandwidth of the gateway cluster where the dedicated NAT Gateway resides. Unit: Mbps. This field does not exist when the `IsExclusive` field is set to `false`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExclusiveGatewayBandwidth() const;

                    /**
                     * 设置Bandwidth of the gateway cluster where the dedicated NAT Gateway resides. Unit: Mbps. This field does not exist when the `IsExclusive` field is set to `false`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _exclusiveGatewayBandwidth Bandwidth of the gateway cluster where the dedicated NAT Gateway resides. Unit: Mbps. This field does not exist when the `IsExclusive` field is set to `false`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExclusiveGatewayBandwidth(const uint64_t& _exclusiveGatewayBandwidth);

                    /**
                     * 判断参数 ExclusiveGatewayBandwidth 是否已赋值
                     * @return ExclusiveGatewayBandwidth 是否已赋值
                     * 
                     */
                    bool ExclusiveGatewayBandwidthHasBeenSet() const;

                    /**
                     * 获取Whether the NAT gateway is blocked. Values: `NORMAL`, `RESTRICTED`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RestrictState Whether the NAT gateway is blocked. Values: `NORMAL`, `RESTRICTED`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置Whether the NAT gateway is blocked. Values: `NORMAL`, `RESTRICTED`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restrictState Whether the NAT gateway is blocked. Values: `NORMAL`, `RESTRICTED`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     * 
                     */
                    bool RestrictStateHasBeenSet() const;

                private:

                    /**
                     * NAT gateway ID.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * NAT gateway name.
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * NAT gateway creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * The status of the NAT gateway.
 `PENDING`: Being created, `DELETING`: Being deleted, `AVAILABLE`: Running, `UPDATING`: Being upgraded,
`FAILED`: Failed.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * The concurrent connections cap of the gateway.
                     */
                    uint64_t m_maxConcurrentConnection;
                    bool m_maxConcurrentConnectionHasBeenSet;

                    /**
                     * The public IP object array of the bound NAT gateway.
                     */
                    std::vector<NatGatewayAddress> m_publicIpAddressSet;
                    bool m_publicIpAddressSetHasBeenSet;

                    /**
                     * The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Service suspended due to account overdue.
                     */
                    std::string m_networkState;
                    bool m_networkStateHasBeenSet;

                    /**
                     * The port forwarding rules of the NAT gateway.
                     */
                    std::vector<DestinationIpPortTranslationNatRule> m_destinationIpPortTranslationNatRuleSet;
                    bool m_destinationIpPortTranslationNatRuleSetHasBeenSet;

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The availability zone in which the NAT gateway is located.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * ID of the direct connect gateway bound.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_directConnectGatewayIds;
                    bool m_directConnectGatewayIdsHasBeenSet;

                    /**
                     * Subnet ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Tag key-value pairs.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * The list of the security groups bound to the NAT Gateway
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_securityGroupSet;
                    bool m_securityGroupSetHasBeenSet;

                    /**
                     * SNAT forwarding rule of the NAT gateway.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<SourceIpTranslationNatRule> m_sourceIpTranslationNatRuleSet;
                    bool m_sourceIpTranslationNatRuleSetHasBeenSet;

                    /**
                     * Whether the NAT gateway is dedicated.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_isExclusive;
                    bool m_isExclusiveHasBeenSet;

                    /**
                     * Bandwidth of the gateway cluster where the dedicated NAT Gateway resides. Unit: Mbps. This field does not exist when the `IsExclusive` field is set to `false`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_exclusiveGatewayBandwidth;
                    bool m_exclusiveGatewayBandwidthHasBeenSet;

                    /**
                     * Whether the NAT gateway is blocked. Values: `NORMAL`, `RESTRICTED`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAY_H_
