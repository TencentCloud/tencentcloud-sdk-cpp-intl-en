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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Direct Connect gateway object.
                */
                class DirectConnectGateway : public AbstractModel
                {
                public:
                    DirectConnectGateway();
                    ~DirectConnectGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Direct Connect `ID`.
                     * @return DirectConnectGatewayId Direct Connect `ID`.
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置Direct Connect `ID`.
                     * @param DirectConnectGatewayId Direct Connect `ID`.
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取Direct Connect gateway name.
                     * @return DirectConnectGatewayName Direct Connect gateway name.
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置Direct Connect gateway name.
                     * @param DirectConnectGatewayName Direct Connect gateway name.
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取The `ID` of the `VPC` instance associated with the Direct Connect gateway.
                     * @return VpcId The `ID` of the `VPC` instance associated with the Direct Connect gateway.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the `VPC` instance associated with the Direct Connect gateway.
                     * @param VpcId The `ID` of the `VPC` instance associated with the Direct Connect gateway.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     * @return NetworkType The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     * @param NetworkType The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取The `ID` of the associated network instance:
<li>When the NetworkType is `VPC`, this value is the VPC instance `ID`</li>
<li>When the NetworkType is `CCN`, this value is the CCN instance `ID`</li>
                     * @return NetworkInstanceId The `ID` of the associated network instance:
<li>When the NetworkType is `VPC`, this value is the VPC instance `ID`</li>
<li>When the NetworkType is `CCN`, this value is the CCN instance `ID`</li>
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置The `ID` of the associated network instance:
<li>When the NetworkType is `VPC`, this value is the VPC instance `ID`</li>
<li>When the NetworkType is `CCN`, this value is the CCN instance `ID`</li>
                     * @param NetworkInstanceId The `ID` of the associated network instance:
<li>When the NetworkType is `VPC`, this value is the VPC instance `ID`</li>
<li>When the NetworkType is `CCN`, this value is the CCN instance `ID`</li>
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取Gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>
NAT type supports network address switch configuration. After the type is confirmed, it cannot be modified. A VPC can create one NAT-type Direct Connect gateway and one non-NAT-type Direct Connect gateway
                     * @return GatewayType Gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>
NAT type supports network address switch configuration. After the type is confirmed, it cannot be modified. A VPC can create one NAT-type Direct Connect gateway and one non-NAT-type Direct Connect gateway
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>
NAT type supports network address switch configuration. After the type is confirmed, it cannot be modified. A VPC can create one NAT-type Direct Connect gateway and one non-NAT-type Direct Connect gateway
                     * @param GatewayType Gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>
NAT type supports network address switch configuration. After the type is confirmed, it cannot be modified. A VPC can create one NAT-type Direct Connect gateway and one non-NAT-type Direct Connect gateway
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreateTime Creation Time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Time.
                     * @param CreateTime Creation Time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Direct Connect gateway IP.
                     * @return DirectConnectGatewayIp Direct Connect gateway IP.
                     */
                    std::string GetDirectConnectGatewayIp() const;

                    /**
                     * 设置Direct Connect gateway IP.
                     * @param DirectConnectGatewayIp Direct Connect gateway IP.
                     */
                    void SetDirectConnectGatewayIp(const std::string& _directConnectGatewayIp);

                    /**
                     * 判断参数 DirectConnectGatewayIp 是否已赋值
                     * @return DirectConnectGatewayIp 是否已赋值
                     */
                    bool DirectConnectGatewayIpHasBeenSet() const;

                    /**
                     * 获取The `ID` of the `CCN` instance associated with the Direct Connect gateway.
                     * @return CcnId The `ID` of the `CCN` instance associated with the Direct Connect gateway.
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The `ID` of the `CCN` instance associated with the Direct Connect gateway.
                     * @param CcnId The `ID` of the `CCN` instance associated with the Direct Connect gateway.
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     * @return CcnRouteType The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     */
                    std::string GetCcnRouteType() const;

                    /**
                     * 设置The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     * @param CcnRouteType The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     */
                    void SetCcnRouteType(const std::string& _ccnRouteType);

                    /**
                     * 判断参数 CcnRouteType 是否已赋值
                     * @return CcnRouteType 是否已赋值
                     */
                    bool CcnRouteTypeHasBeenSet() const;

                    /**
                     * 获取Whether BGP is enabled.
                     * @return EnableBGP Whether BGP is enabled.
                     */
                    bool GetEnableBGP() const;

                    /**
                     * 设置Whether BGP is enabled.
                     * @param EnableBGP Whether BGP is enabled.
                     */
                    void SetEnableBGP(const bool& _enableBGP);

                    /**
                     * 判断参数 EnableBGP 是否已赋值
                     * @return EnableBGP 是否已赋值
                     */
                    bool EnableBGPHasBeenSet() const;

                    /**
                     * 获取Whether to enable BGP's `community` attribute. Valid values: enable, disable
                     * @return EnableBGPCommunity Whether to enable BGP's `community` attribute. Valid values: enable, disable
                     */
                    bool GetEnableBGPCommunity() const;

                    /**
                     * 设置Whether to enable BGP's `community` attribute. Valid values: enable, disable
                     * @param EnableBGPCommunity Whether to enable BGP's `community` attribute. Valid values: enable, disable
                     */
                    void SetEnableBGPCommunity(const bool& _enableBGPCommunity);

                    /**
                     * 判断参数 EnableBGPCommunity 是否已赋值
                     * @return EnableBGPCommunity 是否已赋值
                     */
                    bool EnableBGPCommunityHasBeenSet() const;

                    /**
                     * 获取ID of the NAT gateway bound.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return NatGatewayId ID of the NAT gateway bound.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置ID of the NAT gateway bound.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param NatGatewayId ID of the NAT gateway bound.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取Whether the direct connect gateway supports the VXLAN architecture.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VXLANSupport Whether the direct connect gateway supports the VXLAN architecture.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<bool> GetVXLANSupport() const;

                    /**
                     * 设置Whether the direct connect gateway supports the VXLAN architecture.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param VXLANSupport Whether the direct connect gateway supports the VXLAN architecture.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVXLANSupport(const std::vector<bool>& _vXLANSupport);

                    /**
                     * 判断参数 VXLANSupport 是否已赋值
                     * @return VXLANSupport 是否已赋值
                     */
                    bool VXLANSupportHasBeenSet() const;

                    /**
                     * 获取CCN route publishing mode. Valid values: `standard` and `exquisite`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ModeType CCN route publishing mode. Valid values: `standard` and `exquisite`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetModeType() const;

                    /**
                     * 设置CCN route publishing mode. Valid values: `standard` and `exquisite`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ModeType CCN route publishing mode. Valid values: `standard` and `exquisite`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetModeType(const std::string& _modeType);

                    /**
                     * 判断参数 ModeType 是否已赋值
                     * @return ModeType 是否已赋值
                     */
                    bool ModeTypeHasBeenSet() const;

                    /**
                     * 获取Whether the direct connect gateway is for an edge zone.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LocalZone Whether the direct connect gateway is for an edge zone.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置Whether the direct connect gateway is for an edge zone.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LocalZone Whether the direct connect gateway is for an edge zone.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取Availability zone where the direct connect gateway resides.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Zone Availability zone where the direct connect gateway resides.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone where the direct connect gateway resides.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Zone Availability zone where the direct connect gateway resides.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The status of gateway traffic monitoring
0: disable
1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EnableFlowDetails The status of gateway traffic monitoring
0: disable
1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEnableFlowDetails() const;

                    /**
                     * 设置The status of gateway traffic monitoring
0: disable
1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EnableFlowDetails The status of gateway traffic monitoring
0: disable
1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnableFlowDetails(const uint64_t& _enableFlowDetails);

                    /**
                     * 判断参数 EnableFlowDetails 是否已赋值
                     * @return EnableFlowDetails 是否已赋值
                     */
                    bool EnableFlowDetailsHasBeenSet() const;

                    /**
                     * 获取The last time when the gateway traffic monitoring is enabled/disabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FlowDetailsUpdateTime The last time when the gateway traffic monitoring is enabled/disabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetFlowDetailsUpdateTime() const;

                    /**
                     * 设置The last time when the gateway traffic monitoring is enabled/disabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FlowDetailsUpdateTime The last time when the gateway traffic monitoring is enabled/disabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFlowDetailsUpdateTime(const std::string& _flowDetailsUpdateTime);

                    /**
                     * 判断参数 FlowDetailsUpdateTime 是否已赋值
                     * @return FlowDetailsUpdateTime 是否已赋值
                     */
                    bool FlowDetailsUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether gateway traffic monitoring is supported
0: No
1: Yes
Note: this field may return `null`, indicating that no valid values can be found.
                     * @return NewAfc Whether gateway traffic monitoring is supported
0: No
1: Yes
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    uint64_t GetNewAfc() const;

                    /**
                     * 设置Whether gateway traffic monitoring is supported
0: No
1: Yes
Note: this field may return `null`, indicating that no valid values can be found.
                     * @param NewAfc Whether gateway traffic monitoring is supported
0: No
1: Yes
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    void SetNewAfc(const uint64_t& _newAfc);

                    /**
                     * 判断参数 NewAfc 是否已赋值
                     * @return NewAfc 是否已赋值
                     */
                    bool NewAfcHasBeenSet() const;

                    /**
                     * 获取Direct connect gateway access network types:
<li>`VXLAN` - VXLAN type.</li>
<li>`MPLS` - MPLS type.</li>
<li>`Hybrid` - Hybrid type.</li>
Note: this field may return `null`, indicating that no valid values can be found.
                     * @return AccessNetworkType Direct connect gateway access network types:
<li>`VXLAN` - VXLAN type.</li>
<li>`MPLS` - MPLS type.</li>
<li>`Hybrid` - Hybrid type.</li>
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    std::string GetAccessNetworkType() const;

                    /**
                     * 设置Direct connect gateway access network types:
<li>`VXLAN` - VXLAN type.</li>
<li>`MPLS` - MPLS type.</li>
<li>`Hybrid` - Hybrid type.</li>
Note: this field may return `null`, indicating that no valid values can be found.
                     * @param AccessNetworkType Direct connect gateway access network types:
<li>`VXLAN` - VXLAN type.</li>
<li>`MPLS` - MPLS type.</li>
<li>`Hybrid` - Hybrid type.</li>
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    void SetAccessNetworkType(const std::string& _accessNetworkType);

                    /**
                     * 判断参数 AccessNetworkType 是否已赋值
                     * @return AccessNetworkType 是否已赋值
                     */
                    bool AccessNetworkTypeHasBeenSet() const;

                    /**
                     * 获取AZ list of direct connect gateway with cross-AZ placement groups
Note: this field may return `null`, indicating that no valid values can be found.
                     * @return HaZoneList AZ list of direct connect gateway with cross-AZ placement groups
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    std::vector<std::string> GetHaZoneList() const;

                    /**
                     * 设置AZ list of direct connect gateway with cross-AZ placement groups
Note: this field may return `null`, indicating that no valid values can be found.
                     * @param HaZoneList AZ list of direct connect gateway with cross-AZ placement groups
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    void SetHaZoneList(const std::vector<std::string>& _haZoneList);

                    /**
                     * 判断参数 HaZoneList 是否已赋值
                     * @return HaZoneList 是否已赋值
                     */
                    bool HaZoneListHasBeenSet() const;

                private:

                    /**
                     * Direct Connect `ID`.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * Direct Connect gateway name.
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * The `ID` of the `VPC` instance associated with the Direct Connect gateway.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * The `ID` of the associated network instance:
<li>When the NetworkType is `VPC`, this value is the VPC instance `ID`</li>
<li>When the NetworkType is `CCN`, this value is the CCN instance `ID`</li>
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * Gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>
NAT type supports network address switch configuration. After the type is confirmed, it cannot be modified. A VPC can create one NAT-type Direct Connect gateway and one non-NAT-type Direct Connect gateway
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Direct Connect gateway IP.
                     */
                    std::string m_directConnectGatewayIp;
                    bool m_directConnectGatewayIpHasBeenSet;

                    /**
                     * The `ID` of the `CCN` instance associated with the Direct Connect gateway.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     */
                    std::string m_ccnRouteType;
                    bool m_ccnRouteTypeHasBeenSet;

                    /**
                     * Whether BGP is enabled.
                     */
                    bool m_enableBGP;
                    bool m_enableBGPHasBeenSet;

                    /**
                     * Whether to enable BGP's `community` attribute. Valid values: enable, disable
                     */
                    bool m_enableBGPCommunity;
                    bool m_enableBGPCommunityHasBeenSet;

                    /**
                     * ID of the NAT gateway bound.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * Whether the direct connect gateway supports the VXLAN architecture.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<bool> m_vXLANSupport;
                    bool m_vXLANSupportHasBeenSet;

                    /**
                     * CCN route publishing mode. Valid values: `standard` and `exquisite`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_modeType;
                    bool m_modeTypeHasBeenSet;

                    /**
                     * Whether the direct connect gateway is for an edge zone.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * Availability zone where the direct connect gateway resides.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The status of gateway traffic monitoring
0: disable
1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enableFlowDetails;
                    bool m_enableFlowDetailsHasBeenSet;

                    /**
                     * The last time when the gateway traffic monitoring is enabled/disabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_flowDetailsUpdateTime;
                    bool m_flowDetailsUpdateTimeHasBeenSet;

                    /**
                     * Whether gateway traffic monitoring is supported
0: No
1: Yes
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    uint64_t m_newAfc;
                    bool m_newAfcHasBeenSet;

                    /**
                     * Direct connect gateway access network types:
<li>`VXLAN` - VXLAN type.</li>
<li>`MPLS` - MPLS type.</li>
<li>`Hybrid` - Hybrid type.</li>
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    std::string m_accessNetworkType;
                    bool m_accessNetworkTypeHasBeenSet;

                    /**
                     * AZ list of direct connect gateway with cross-AZ placement groups
Note: this field may return `null`, indicating that no valid values can be found.
                     */
                    std::vector<std::string> m_haZoneList;
                    bool m_haZoneListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_
