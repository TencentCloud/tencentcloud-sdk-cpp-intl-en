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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNEL_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/BgpPeer.h>
#include <tencentcloud/dc/v20180410/model/RouteFilterPrefix.h>
#include <tencentcloud/dc/v20180410/model/Tag.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * Dedicated tunnel information list.
                */
                class DirectConnectTunnel : public AbstractModel
                {
                public:
                    DirectConnectTunnel();
                    ~DirectConnectTunnel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dedicated tunnel ID.
                     * @return DirectConnectTunnelId Dedicated tunnel ID.
                     * 
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置Dedicated tunnel ID.
                     * @param _directConnectTunnelId Dedicated tunnel ID.
                     * 
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                    /**
                     * 获取Connection ID.
                     * @return DirectConnectId Connection ID.
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置Connection ID.
                     * @param _directConnectId Connection ID.
                     * 
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     * 
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取Dedicated tunnel status.
AVAILABLE: Ready or connected.
PENDING: Applying.
ALLOCATING: Configuring.
ALLOCATED: Configured.
ALTERING: Modifying.
DELETING: Deleting.
DELETED: Deleted.
COMFIRMING: To be accepted.
REJECTED: Rejected.
                     * @return State Dedicated tunnel status.
AVAILABLE: Ready or connected.
PENDING: Applying.
ALLOCATING: Configuring.
ALLOCATED: Configured.
ALTERING: Modifying.
DELETING: Deleting.
DELETED: Deleted.
COMFIRMING: To be accepted.
REJECTED: Rejected.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Dedicated tunnel status.
AVAILABLE: Ready or connected.
PENDING: Applying.
ALLOCATING: Configuring.
ALLOCATED: Configured.
ALTERING: Modifying.
DELETING: Deleting.
DELETED: Deleted.
COMFIRMING: To be accepted.
REJECTED: Rejected.
                     * @param _state Dedicated tunnel status.
AVAILABLE: Ready or connected.
PENDING: Applying.
ALLOCATING: Configuring.
ALLOCATED: Configured.
ALTERING: Modifying.
DELETING: Deleting.
DELETED: Deleted.
COMFIRMING: To be accepted.
REJECTED: Rejected.
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
                     * 获取Connection owner, i.e., developer account ID.
                     * @return DirectConnectOwnerAccount Connection owner, i.e., developer account ID.
                     * 
                     */
                    std::string GetDirectConnectOwnerAccount() const;

                    /**
                     * 设置Connection owner, i.e., developer account ID.
                     * @param _directConnectOwnerAccount Connection owner, i.e., developer account ID.
                     * 
                     */
                    void SetDirectConnectOwnerAccount(const std::string& _directConnectOwnerAccount);

                    /**
                     * 判断参数 DirectConnectOwnerAccount 是否已赋值
                     * @return DirectConnectOwnerAccount 是否已赋值
                     * 
                     */
                    bool DirectConnectOwnerAccountHasBeenSet() const;

                    /**
                     * 获取Dedicated tunnel owner, i.e., developer account ID.
                     * @return OwnerAccount Dedicated tunnel owner, i.e., developer account ID.
                     * 
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置Dedicated tunnel owner, i.e., developer account ID.
                     * @param _ownerAccount Dedicated tunnel owner, i.e., developer account ID.
                     * 
                     */
                    void SetOwnerAccount(const std::string& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: VPC, BMVPC, CCN.
 VPC: Virtual Private Cloud; BMVPC: BM VPC; CCN: Cloud Connect Network.
                     * @return NetworkType Network type. Valid values: VPC, BMVPC, CCN.
 VPC: Virtual Private Cloud; BMVPC: BM VPC; CCN: Cloud Connect Network.
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type. Valid values: VPC, BMVPC, CCN.
 VPC: Virtual Private Cloud; BMVPC: BM VPC; CCN: Cloud Connect Network.
                     * @param _networkType Network type. Valid values: VPC, BMVPC, CCN.
 VPC: Virtual Private Cloud; BMVPC: BM VPC; CCN: Cloud Connect Network.
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Network of the VPC region, such as `ap-guangzhou`.
                     * @return NetworkRegion Network of the VPC region, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetNetworkRegion() const;

                    /**
                     * 设置Network of the VPC region, such as `ap-guangzhou`.
                     * @param _networkRegion Network of the VPC region, such as `ap-guangzhou`.
                     * 
                     */
                    void SetNetworkRegion(const std::string& _networkRegion);

                    /**
                     * 判断参数 NetworkRegion 是否已赋值
                     * @return NetworkRegion 是否已赋值
                     * 
                     */
                    bool NetworkRegionHasBeenSet() const;

                    /**
                     * 获取Unified VPC ID or BMVPC ID.
                     * @return VpcId Unified VPC ID or BMVPC ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unified VPC ID or BMVPC ID.
                     * @param _vpcId Unified VPC ID or BMVPC ID.
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
                     * 获取Direct connect gateway ID.
                     * @return DirectConnectGatewayId Direct connect gateway ID.
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置Direct connect gateway ID.
                     * @param _directConnectGatewayId Direct connect gateway ID.
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取BGP: BGP routing; STATIC: Static routing. Default value: BGP routing.
                     * @return RouteType BGP: BGP routing; STATIC: Static routing. Default value: BGP routing.
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置BGP: BGP routing; STATIC: Static routing. Default value: BGP routing.
                     * @param _routeType BGP: BGP routing; STATIC: Static routing. Default value: BGP routing.
                     * 
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     * 
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取User-side BGP, including Asn and AuthKey.
                     * @return BgpPeer User-side BGP, including Asn and AuthKey.
                     * 
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置User-side BGP, including Asn and AuthKey.
                     * @param _bgpPeer User-side BGP, including Asn and AuthKey.
                     * 
                     */
                    void SetBgpPeer(const BgpPeer& _bgpPeer);

                    /**
                     * 判断参数 BgpPeer 是否已赋值
                     * @return BgpPeer 是否已赋值
                     * 
                     */
                    bool BgpPeerHasBeenSet() const;

                    /**
                     * 获取User-side IP range.
                     * @return RouteFilterPrefixes User-side IP range.
                     * 
                     */
                    std::vector<RouteFilterPrefix> GetRouteFilterPrefixes() const;

                    /**
                     * 设置User-side IP range.
                     * @param _routeFilterPrefixes User-side IP range.
                     * 
                     */
                    void SetRouteFilterPrefixes(const std::vector<RouteFilterPrefix>& _routeFilterPrefixes);

                    /**
                     * 判断参数 RouteFilterPrefixes 是否已赋值
                     * @return RouteFilterPrefixes 是否已赋值
                     * 
                     */
                    bool RouteFilterPrefixesHasBeenSet() const;

                    /**
                     * 获取VLAN of a dedicated tunnel.
                     * @return Vlan VLAN of a dedicated tunnel.
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置VLAN of a dedicated tunnel.
                     * @param _vlan VLAN of a dedicated tunnel.
                     * 
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     * 
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取TencentAddress: Tencent-side IP address.
                     * @return TencentAddress TencentAddress: Tencent-side IP address.
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置TencentAddress: Tencent-side IP address.
                     * @param _tencentAddress TencentAddress: Tencent-side IP address.
                     * 
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     * 
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取CustomerAddress: User-side IP address.
                     * @return CustomerAddress CustomerAddress: User-side IP address.
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置CustomerAddress: User-side IP address.
                     * @param _customerAddress CustomerAddress: User-side IP address.
                     * 
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     * 
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取Dedicated tunnel name.
                     * @return DirectConnectTunnelName Dedicated tunnel name.
                     * 
                     */
                    std::string GetDirectConnectTunnelName() const;

                    /**
                     * 设置Dedicated tunnel name.
                     * @param _directConnectTunnelName Dedicated tunnel name.
                     * 
                     */
                    void SetDirectConnectTunnelName(const std::string& _directConnectTunnelName);

                    /**
                     * 判断参数 DirectConnectTunnelName 是否已赋值
                     * @return DirectConnectTunnelName 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelNameHasBeenSet() const;

                    /**
                     * 获取Creation time of a dedicated tunnel.
                     * @return CreatedTime Creation time of a dedicated tunnel.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of a dedicated tunnel.
                     * @param _createdTime Creation time of a dedicated tunnel.
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
                     * 获取Bandwidth value of a dedicated tunnel.
                     * @return Bandwidth Bandwidth value of a dedicated tunnel.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth value of a dedicated tunnel.
                     * @param _bandwidth Bandwidth value of a dedicated tunnel.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Tag value of a dedicated tunnel.
                     * @return TagSet Tag value of a dedicated tunnel.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag value of a dedicated tunnel.
                     * @param _tagSet Tag value of a dedicated tunnel.
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
                     * 获取Associated custom network probe ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NetDetectId Associated custom network probe ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置Associated custom network probe ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _netDetectId Associated custom network probe ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetDetectId(const std::string& _netDetectId);

                    /**
                     * 判断参数 NetDetectId 是否已赋值
                     * @return NetDetectId 是否已赋值
                     * 
                     */
                    bool NetDetectIdHasBeenSet() const;

                    /**
                     * 获取BGP community switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnableBGPCommunity BGP community switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableBGPCommunity() const;

                    /**
                     * 设置BGP community switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _enableBGPCommunity BGP community switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableBGPCommunity(const bool& _enableBGPCommunity);

                    /**
                     * 判断参数 EnableBGPCommunity 是否已赋值
                     * @return EnableBGPCommunity 是否已赋值
                     * 
                     */
                    bool EnableBGPCommunityHasBeenSet() const;

                    /**
                     * 获取Whether it is a NAT tunnel
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NatType Whether it is a NAT tunnel
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNatType() const;

                    /**
                     * 设置Whether it is a NAT tunnel
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _natType Whether it is a NAT tunnel
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNatType(const int64_t& _natType);

                    /**
                     * 判断参数 NatType 是否已赋值
                     * @return NatType 是否已赋值
                     * 
                     */
                    bool NatTypeHasBeenSet() const;

                    /**
                     * 获取VPC region abbreviation, such as `gz`, `cd`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcRegion VPC region abbreviation, such as `gz`, `cd`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcRegion() const;

                    /**
                     * 设置VPC region abbreviation, such as `gz`, `cd`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vpcRegion VPC region abbreviation, such as `gz`, `cd`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcRegion(const std::string& _vpcRegion);

                    /**
                     * 判断参数 VpcRegion 是否已赋值
                     * @return VpcRegion 是否已赋值
                     * 
                     */
                    bool VpcRegionHasBeenSet() const;

                    /**
                     * 获取Whether to enable BFD
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BfdEnable Whether to enable BFD
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBfdEnable() const;

                    /**
                     * 设置Whether to enable BFD
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bfdEnable Whether to enable BFD
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBfdEnable(const int64_t& _bfdEnable);

                    /**
                     * 判断参数 BfdEnable 是否已赋值
                     * @return BfdEnable 是否已赋值
                     * 
                     */
                    bool BfdEnableHasBeenSet() const;

                    /**
                     * 获取Access point type of a dedicated tunnel.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccessPointType Access point type of a dedicated tunnel.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessPointType() const;

                    /**
                     * 设置Access point type of a dedicated tunnel.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _accessPointType Access point type of a dedicated tunnel.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessPointType(const std::string& _accessPointType);

                    /**
                     * 判断参数 AccessPointType 是否已赋值
                     * @return AccessPointType 是否已赋值
                     * 
                     */
                    bool AccessPointTypeHasBeenSet() const;

                    /**
                     * 获取Direct connect gateway name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DirectConnectGatewayName Direct connect gateway name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置Direct connect gateway name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _directConnectGatewayName Direct connect gateway name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取VPC name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcName VPC name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vpcName VPC name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Backup IP address on the Tencent side.
                     * @return TencentBackupAddress Backup IP address on the Tencent side.
                     * 
                     */
                    std::string GetTencentBackupAddress() const;

                    /**
                     * 设置Backup IP address on the Tencent side.
                     * @param _tencentBackupAddress Backup IP address on the Tencent side.
                     * 
                     */
                    void SetTencentBackupAddress(const std::string& _tencentBackupAddress);

                    /**
                     * 判断参数 TencentBackupAddress 是否已赋值
                     * @return TencentBackupAddress 是否已赋值
                     * 
                     */
                    bool TencentBackupAddressHasBeenSet() const;

                    /**
                     * 获取Whether the connection associated with the dedicated tunnel has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return SignLaw Whether the connection associated with the dedicated tunnel has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置Whether the connection associated with the dedicated tunnel has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _signLaw Whether the connection associated with the dedicated tunnel has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetSignLaw(const bool& _signLaw);

                    /**
                     * 判断参数 SignLaw 是否已赋值
                     * @return SignLaw 是否已赋值
                     * 
                     */
                    bool SignLawHasBeenSet() const;

                    /**
                     * 获取Cloud Attached Connection Service ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CloudAttachId Cloud Attached Connection Service ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloudAttachId() const;

                    /**
                     * 设置Cloud Attached Connection Service ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cloudAttachId Cloud Attached Connection Service ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloudAttachId(const std::string& _cloudAttachId);

                    /**
                     * 判断参数 CloudAttachId 是否已赋值
                     * @return CloudAttachId 是否已赋值
                     * 
                     */
                    bool CloudAttachIdHasBeenSet() const;

                private:

                    /**
                     * Dedicated tunnel ID.
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * Connection ID.
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * Dedicated tunnel status.
AVAILABLE: Ready or connected.
PENDING: Applying.
ALLOCATING: Configuring.
ALLOCATED: Configured.
ALTERING: Modifying.
DELETING: Deleting.
DELETED: Deleted.
COMFIRMING: To be accepted.
REJECTED: Rejected.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Connection owner, i.e., developer account ID.
                     */
                    std::string m_directConnectOwnerAccount;
                    bool m_directConnectOwnerAccountHasBeenSet;

                    /**
                     * Dedicated tunnel owner, i.e., developer account ID.
                     */
                    std::string m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * Network type. Valid values: VPC, BMVPC, CCN.
 VPC: Virtual Private Cloud; BMVPC: BM VPC; CCN: Cloud Connect Network.
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Network of the VPC region, such as `ap-guangzhou`.
                     */
                    std::string m_networkRegion;
                    bool m_networkRegionHasBeenSet;

                    /**
                     * Unified VPC ID or BMVPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Direct connect gateway ID.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * BGP: BGP routing; STATIC: Static routing. Default value: BGP routing.
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * User-side BGP, including Asn and AuthKey.
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * User-side IP range.
                     */
                    std::vector<RouteFilterPrefix> m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * VLAN of a dedicated tunnel.
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
                     * Dedicated tunnel name.
                     */
                    std::string m_directConnectTunnelName;
                    bool m_directConnectTunnelNameHasBeenSet;

                    /**
                     * Creation time of a dedicated tunnel.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Bandwidth value of a dedicated tunnel.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Tag value of a dedicated tunnel.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Associated custom network probe ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_netDetectId;
                    bool m_netDetectIdHasBeenSet;

                    /**
                     * BGP community switch
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableBGPCommunity;
                    bool m_enableBGPCommunityHasBeenSet;

                    /**
                     * Whether it is a NAT tunnel
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_natType;
                    bool m_natTypeHasBeenSet;

                    /**
                     * VPC region abbreviation, such as `gz`, `cd`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcRegion;
                    bool m_vpcRegionHasBeenSet;

                    /**
                     * Whether to enable BFD
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bfdEnable;
                    bool m_bfdEnableHasBeenSet;

                    /**
                     * Access point type of a dedicated tunnel.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessPointType;
                    bool m_accessPointTypeHasBeenSet;

                    /**
                     * Direct connect gateway name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * VPC name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Backup IP address on the Tencent side.
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                    /**
                     * Whether the connection associated with the dedicated tunnel has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * Cloud Attached Connection Service ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cloudAttachId;
                    bool m_cloudAttachIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNEL_H_
