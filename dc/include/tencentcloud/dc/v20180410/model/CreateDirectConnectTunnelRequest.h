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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/BgpPeer.h>
#include <tencentcloud/dc/v20180410/model/RouteFilterPrefix.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * CreateDirectConnectTunnel request structure.
                */
                class CreateDirectConnectTunnelRequest : public AbstractModel
                {
                public:
                    CreateDirectConnectTunnelRequest();
                    ~CreateDirectConnectTunnelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Direct Connect ID, such as `dc-kd7d06of`.
                     * @return DirectConnectId Direct Connect ID, such as `dc-kd7d06of`.
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置Direct Connect ID, such as `dc-kd7d06of`.
                     * @param DirectConnectId Direct Connect ID, such as `dc-kd7d06of`.
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取Dedicated tunnel name.
                     * @return DirectConnectTunnelName Dedicated tunnel name.
                     */
                    std::string GetDirectConnectTunnelName() const;

                    /**
                     * 设置Dedicated tunnel name.
                     * @param DirectConnectTunnelName Dedicated tunnel name.
                     */
                    void SetDirectConnectTunnelName(const std::string& _directConnectTunnelName);

                    /**
                     * 判断参数 DirectConnectTunnelName 是否已赋值
                     * @return DirectConnectTunnelName 是否已赋值
                     */
                    bool DirectConnectTunnelNameHasBeenSet() const;

                    /**
                     * 获取Connection owner, who is the current customer by default.
The developer account ID should be entered for shared connections.
                     * @return DirectConnectOwnerAccount Connection owner, who is the current customer by default.
The developer account ID should be entered for shared connections.
                     */
                    std::string GetDirectConnectOwnerAccount() const;

                    /**
                     * 设置Connection owner, who is the current customer by default.
The developer account ID should be entered for shared connections.
                     * @param DirectConnectOwnerAccount Connection owner, who is the current customer by default.
The developer account ID should be entered for shared connections.
                     */
                    void SetDirectConnectOwnerAccount(const std::string& _directConnectOwnerAccount);

                    /**
                     * 判断参数 DirectConnectOwnerAccount 是否已赋值
                     * @return DirectConnectOwnerAccount 是否已赋值
                     */
                    bool DirectConnectOwnerAccountHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: VPC, BMVPC, CCN. Default value: VPC.
VPC: Virtual Private Cloud.
BMVPC: BM VPC.
CCN: Cloud Connect Network.
                     * @return NetworkType Network type. Valid values: VPC, BMVPC, CCN. Default value: VPC.
VPC: Virtual Private Cloud.
BMVPC: BM VPC.
CCN: Cloud Connect Network.
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type. Valid values: VPC, BMVPC, CCN. Default value: VPC.
VPC: Virtual Private Cloud.
BMVPC: BM VPC.
CCN: Cloud Connect Network.
                     * @param NetworkType Network type. Valid values: VPC, BMVPC, CCN. Default value: VPC.
VPC: Virtual Private Cloud.
BMVPC: BM VPC.
CCN: Cloud Connect Network.
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Network region.
                     * @return NetworkRegion Network region.
                     */
                    std::string GetNetworkRegion() const;

                    /**
                     * 设置Network region.
                     * @param NetworkRegion Network region.
                     */
                    void SetNetworkRegion(const std::string& _networkRegion);

                    /**
                     * 判断参数 NetworkRegion 是否已赋值
                     * @return NetworkRegion 是否已赋值
                     */
                    bool NetworkRegionHasBeenSet() const;

                    /**
                     * 获取Unified VPC ID or BMVPC ID.
                     * @return VpcId Unified VPC ID or BMVPC ID.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unified VPC ID or BMVPC ID.
                     * @param VpcId Unified VPC ID or BMVPC ID.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Direct connect gateway ID, such as `dcg-d545ddf`.
                     * @return DirectConnectGatewayId Direct connect gateway ID, such as `dcg-d545ddf`.
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置Direct connect gateway ID, such as `dcg-d545ddf`.
                     * @param DirectConnectGatewayId Direct connect gateway ID, such as `dcg-d545ddf`.
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取Direct Connect bandwidth in Mbps.
Default value: connection bandwidth value.
                     * @return Bandwidth Direct Connect bandwidth in Mbps.
Default value: connection bandwidth value.
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Direct Connect bandwidth in Mbps.
Default value: connection bandwidth value.
                     * @param Bandwidth Direct Connect bandwidth in Mbps.
Default value: connection bandwidth value.
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取BGP: BGP routing.
STATIC: Static routing.
Default value: BGP routing.
                     * @return RouteType BGP: BGP routing.
STATIC: Static routing.
Default value: BGP routing.
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置BGP: BGP routing.
STATIC: Static routing.
Default value: BGP routing.
                     * @param RouteType BGP: BGP routing.
STATIC: Static routing.
Default value: BGP routing.
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取BgpPeer, which is BGP information on the user side and includes Asn and AuthKey.
                     * @return BgpPeer BgpPeer, which is BGP information on the user side and includes Asn and AuthKey.
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置BgpPeer, which is BGP information on the user side and includes Asn and AuthKey.
                     * @param BgpPeer BgpPeer, which is BGP information on the user side and includes Asn and AuthKey.
                     */
                    void SetBgpPeer(const BgpPeer& _bgpPeer);

                    /**
                     * 判断参数 BgpPeer 是否已赋值
                     * @return BgpPeer 是否已赋值
                     */
                    bool BgpPeerHasBeenSet() const;

                    /**
                     * 获取Static routing, i.e., IP range of the user's IDC.
                     * @return RouteFilterPrefixes Static routing, i.e., IP range of the user's IDC.
                     */
                    std::vector<RouteFilterPrefix> GetRouteFilterPrefixes() const;

                    /**
                     * 设置Static routing, i.e., IP range of the user's IDC.
                     * @param RouteFilterPrefixes Static routing, i.e., IP range of the user's IDC.
                     */
                    void SetRouteFilterPrefixes(const std::vector<RouteFilterPrefix>& _routeFilterPrefixes);

                    /**
                     * 判断参数 RouteFilterPrefixes 是否已赋值
                     * @return RouteFilterPrefixes 是否已赋值
                     */
                    bool RouteFilterPrefixesHasBeenSet() const;

                    /**
                     * 获取VLAN. Value range: 0-3,000.
0: sub-interface not enabled.
Default value: Non-zero.
                     * @return Vlan VLAN. Value range: 0-3,000.
0: sub-interface not enabled.
Default value: Non-zero.
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置VLAN. Value range: 0-3,000.
0: sub-interface not enabled.
Default value: Non-zero.
                     * @param Vlan VLAN. Value range: 0-3,000.
0: sub-interface not enabled.
Default value: Non-zero.
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取TencentAddress: Tencent-side IP address.
                     * @return TencentAddress TencentAddress: Tencent-side IP address.
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置TencentAddress: Tencent-side IP address.
                     * @param TencentAddress TencentAddress: Tencent-side IP address.
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取CustomerAddress: User-side IP address.
                     * @return CustomerAddress CustomerAddress: User-side IP address.
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置CustomerAddress: User-side IP address.
                     * @param CustomerAddress CustomerAddress: User-side IP address.
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取TencentBackupAddress, i.e., Tencent-side standby IP address
                     * @return TencentBackupAddress TencentBackupAddress, i.e., Tencent-side standby IP address
                     */
                    std::string GetTencentBackupAddress() const;

                    /**
                     * 设置TencentBackupAddress, i.e., Tencent-side standby IP address
                     * @param TencentBackupAddress TencentBackupAddress, i.e., Tencent-side standby IP address
                     */
                    void SetTencentBackupAddress(const std::string& _tencentBackupAddress);

                    /**
                     * 判断参数 TencentBackupAddress 是否已赋值
                     * @return TencentBackupAddress 是否已赋值
                     */
                    bool TencentBackupAddressHasBeenSet() const;

                private:

                    /**
                     * Direct Connect ID, such as `dc-kd7d06of`.
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * Dedicated tunnel name.
                     */
                    std::string m_directConnectTunnelName;
                    bool m_directConnectTunnelNameHasBeenSet;

                    /**
                     * Connection owner, who is the current customer by default.
The developer account ID should be entered for shared connections.
                     */
                    std::string m_directConnectOwnerAccount;
                    bool m_directConnectOwnerAccountHasBeenSet;

                    /**
                     * Network type. Valid values: VPC, BMVPC, CCN. Default value: VPC.
VPC: Virtual Private Cloud.
BMVPC: BM VPC.
CCN: Cloud Connect Network.
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Network region.
                     */
                    std::string m_networkRegion;
                    bool m_networkRegionHasBeenSet;

                    /**
                     * Unified VPC ID or BMVPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Direct connect gateway ID, such as `dcg-d545ddf`.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * Direct Connect bandwidth in Mbps.
Default value: connection bandwidth value.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * BGP: BGP routing.
STATIC: Static routing.
Default value: BGP routing.
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * BgpPeer, which is BGP information on the user side and includes Asn and AuthKey.
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * Static routing, i.e., IP range of the user's IDC.
                     */
                    std::vector<RouteFilterPrefix> m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * VLAN. Value range: 0-3,000.
0: sub-interface not enabled.
Default value: Non-zero.
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * TencentAddress: Tencent-side IP address.
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * CustomerAddress: User-side IP address.
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * TencentBackupAddress, i.e., Tencent-side standby IP address
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELREQUEST_H_
