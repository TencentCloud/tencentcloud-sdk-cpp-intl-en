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
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT gateway ID.
                     * @param NatGatewayId NAT gateway ID.
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取NAT gateway name.
                     * @return NatGatewayName NAT gateway name.
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT gateway name.
                     * @param NatGatewayName NAT gateway name.
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     */
                    bool NatGatewayNameHasBeenSet() const;

                    /**
                     * 获取NAT gateway creation time.
                     * @return CreatedTime NAT gateway creation time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置NAT gateway creation time.
                     * @param CreatedTime NAT gateway creation time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取The status of the NAT gateway.
 'PENDING': Creating, 'DELETING': Deleting, 'AVAILABLE': Operating, 'UPDATING': Upgrading,
'FAILED': Failed.
                     * @return State The status of the NAT gateway.
 'PENDING': Creating, 'DELETING': Deleting, 'AVAILABLE': Operating, 'UPDATING': Upgrading,
'FAILED': Failed.
                     */
                    std::string GetState() const;

                    /**
                     * 设置The status of the NAT gateway.
 'PENDING': Creating, 'DELETING': Deleting, 'AVAILABLE': Operating, 'UPDATING': Upgrading,
'FAILED': Failed.
                     * @param State The status of the NAT gateway.
 'PENDING': Creating, 'DELETING': Deleting, 'AVAILABLE': Operating, 'UPDATING': Upgrading,
'FAILED': Failed.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     * @return InternetMaxBandwidthOut The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     * @param InternetMaxBandwidthOut The maximum outbound bandwidth of the gateway. Unit: Mbps.
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取The concurrent connections cap of the gateway.
                     * @return MaxConcurrentConnection The concurrent connections cap of the gateway.
                     */
                    uint64_t GetMaxConcurrentConnection() const;

                    /**
                     * 设置The concurrent connections cap of the gateway.
                     * @param MaxConcurrentConnection The concurrent connections cap of the gateway.
                     */
                    void SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection);

                    /**
                     * 判断参数 MaxConcurrentConnection 是否已赋值
                     * @return MaxConcurrentConnection 是否已赋值
                     */
                    bool MaxConcurrentConnectionHasBeenSet() const;

                    /**
                     * 获取The public IP object array of the bound NAT gateway.
                     * @return PublicIpAddressSet The public IP object array of the bound NAT gateway.
                     */
                    std::vector<NatGatewayAddress> GetPublicIpAddressSet() const;

                    /**
                     * 设置The public IP object array of the bound NAT gateway.
                     * @param PublicIpAddressSet The public IP object array of the bound NAT gateway.
                     */
                    void SetPublicIpAddressSet(const std::vector<NatGatewayAddress>& _publicIpAddressSet);

                    /**
                     * 判断参数 PublicIpAddressSet 是否已赋值
                     * @return PublicIpAddressSet 是否已赋值
                     */
                    bool PublicIpAddressSetHasBeenSet() const;

                    /**
                     * 获取The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Account is in arrears and the service is suspended.
                     * @return NetworkState The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Account is in arrears and the service is suspended.
                     */
                    std::string GetNetworkState() const;

                    /**
                     * 设置The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Account is in arrears and the service is suspended.
                     * @param NetworkState The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Account is in arrears and the service is suspended.
                     */
                    void SetNetworkState(const std::string& _networkState);

                    /**
                     * 判断参数 NetworkState 是否已赋值
                     * @return NetworkState 是否已赋值
                     */
                    bool NetworkStateHasBeenSet() const;

                    /**
                     * 获取The port forwarding rules of the NAT gateway.
                     * @return DestinationIpPortTranslationNatRuleSet The port forwarding rules of the NAT gateway.
                     */
                    std::vector<DestinationIpPortTranslationNatRule> GetDestinationIpPortTranslationNatRuleSet() const;

                    /**
                     * 设置The port forwarding rules of the NAT gateway.
                     * @param DestinationIpPortTranslationNatRuleSet The port forwarding rules of the NAT gateway.
                     */
                    void SetDestinationIpPortTranslationNatRuleSet(const std::vector<DestinationIpPortTranslationNatRule>& _destinationIpPortTranslationNatRuleSet);

                    /**
                     * 判断参数 DestinationIpPortTranslationNatRuleSet 是否已赋值
                     * @return DestinationIpPortTranslationNatRuleSet 是否已赋值
                     */
                    bool DestinationIpPortTranslationNatRuleSetHasBeenSet() const;

                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param VpcId VPC instance ID.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The availability zone in which the NAT gateway is located.
                     * @return Zone The availability zone in which the NAT gateway is located.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone in which the NAT gateway is located.
                     * @param Zone The availability zone in which the NAT gateway is located.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

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
 'PENDING': Creating, 'DELETING': Deleting, 'AVAILABLE': Operating, 'UPDATING': Upgrading,
'FAILED': Failed.
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
                     * The NAT gateway status. `AVAILABLE`: Operating, `UNAVAILABLE`: Unavailable, `INSUFFICIENT`: Account is in arrears and the service is suspended.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAY_H_
