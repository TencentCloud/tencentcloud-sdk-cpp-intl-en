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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTE_H_

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
                * Routing policy object
                */
                class Route : public AbstractModel
                {
                public:
                    Route();
                    ~Route() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination IP range, such as 112.20.51.0/24. Values cannot be in the VPC IP range.
                     * @return DestinationCidrBlock Destination IP range, such as 112.20.51.0/24. Values cannot be in the VPC IP range.
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置Destination IP range, such as 112.20.51.0/24. Values cannot be in the VPC IP range.
                     * @param DestinationCidrBlock Destination IP range, such as 112.20.51.0/24. Values cannot be in the VPC IP range.
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取Type of the next hop. Valid values:
`CVM`: public gateway CVM;
`VPN`: VPN gateway;
`DIRECTCONNECT`: direct connect gateway;
`PEERCONNECTION`: peering connection;
`HAVIP`: HAVIP;
`NAT`: NAT Gateway; 
`NORMAL_CVM`: normal CVM;
`EIP`: public IP address of the CVM;
`LOCAL_GATEWAY`: local gateway.
                     * @return GatewayType Type of the next hop. Valid values:
`CVM`: public gateway CVM;
`VPN`: VPN gateway;
`DIRECTCONNECT`: direct connect gateway;
`PEERCONNECTION`: peering connection;
`HAVIP`: HAVIP;
`NAT`: NAT Gateway; 
`NORMAL_CVM`: normal CVM;
`EIP`: public IP address of the CVM;
`LOCAL_GATEWAY`: local gateway.
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Type of the next hop. Valid values:
`CVM`: public gateway CVM;
`VPN`: VPN gateway;
`DIRECTCONNECT`: direct connect gateway;
`PEERCONNECTION`: peering connection;
`HAVIP`: HAVIP;
`NAT`: NAT Gateway; 
`NORMAL_CVM`: normal CVM;
`EIP`: public IP address of the CVM;
`LOCAL_GATEWAY`: local gateway.
                     * @param GatewayType Type of the next hop. Valid values:
`CVM`: public gateway CVM;
`VPN`: VPN gateway;
`DIRECTCONNECT`: direct connect gateway;
`PEERCONNECTION`: peering connection;
`HAVIP`: HAVIP;
`NAT`: NAT Gateway; 
`NORMAL_CVM`: normal CVM;
`EIP`: public IP address of the CVM;
`LOCAL_GATEWAY`: local gateway.
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取Next hop address. You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address. 
Note: If `GatewayType` is set to `NORMAL_CVM`, `GatewayId` should be the private IP of the instance.
                     * @return GatewayId Next hop address. You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address. 
Note: If `GatewayType` is set to `NORMAL_CVM`, `GatewayId` should be the private IP of the instance.
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Next hop address. You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address. 
Note: If `GatewayType` is set to `NORMAL_CVM`, `GatewayId` should be the private IP of the instance.
                     * @param GatewayId Next hop address. You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address. 
Note: If `GatewayType` is set to `NORMAL_CVM`, `GatewayId` should be the private IP of the instance.
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend using the unique ID `RouteItemId` for the routing policy.
This field is required when you want to delete a routing policy.
                     * @return RouteId Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend using the unique ID `RouteItemId` for the routing policy.
This field is required when you want to delete a routing policy.
                     */
                    uint64_t GetRouteId() const;

                    /**
                     * 设置Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend using the unique ID `RouteItemId` for the routing policy.
This field is required when you want to delete a routing policy.
                     * @param RouteId Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend using the unique ID `RouteItemId` for the routing policy.
This field is required when you want to delete a routing policy.
                     */
                    void SetRouteId(const uint64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取The description of the routing policy.
                     * @return RouteDescription The description of the routing policy.
                     */
                    std::string GetRouteDescription() const;

                    /**
                     * 设置The description of the routing policy.
                     * @param RouteDescription The description of the routing policy.
                     */
                    void SetRouteDescription(const std::string& _routeDescription);

                    /**
                     * 判断参数 RouteDescription 是否已赋值
                     * @return RouteDescription 是否已赋值
                     */
                    bool RouteDescriptionHasBeenSet() const;

                    /**
                     * 获取Whether it is enabled
                     * @return Enabled Whether it is enabled
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether it is enabled
                     * @param Enabled Whether it is enabled
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取The route type. Currently, the following types are supported:
USER: User route;
NETD: Network probe route. When creating a network probe route, the system delivers by default. It cannot be edited or deleted;
CCN: CCN route. The system delivers by default. It cannot be edited or deleted.
Users can only add and operate USER-type routes.
                     * @return RouteType The route type. Currently, the following types are supported:
USER: User route;
NETD: Network probe route. When creating a network probe route, the system delivers by default. It cannot be edited or deleted;
CCN: CCN route. The system delivers by default. It cannot be edited or deleted.
Users can only add and operate USER-type routes.
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置The route type. Currently, the following types are supported:
USER: User route;
NETD: Network probe route. When creating a network probe route, the system delivers by default. It cannot be edited or deleted;
CCN: CCN route. The system delivers by default. It cannot be edited or deleted.
Users can only add and operate USER-type routes.
                     * @param RouteType The route type. Currently, the following types are supported:
USER: User route;
NETD: Network probe route. When creating a network probe route, the system delivers by default. It cannot be edited or deleted;
CCN: CCN route. The system delivers by default. It cannot be edited or deleted.
Users can only add and operate USER-type routes.
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取Route table instance ID, such as rtb-azd4dt1c.
                     * @return RouteTableId Route table instance ID, such as rtb-azd4dt1c.
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table instance ID, such as rtb-azd4dt1c.
                     * @param RouteTableId Route table instance ID, such as rtb-azd4dt1c.
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取Destination IPv6 IP range, which cannot be included in VPC IP range, such as 2402:4e00:1000:810b::/64.
                     * @return DestinationIpv6CidrBlock Destination IPv6 IP range, which cannot be included in VPC IP range, such as 2402:4e00:1000:810b::/64.
                     */
                    std::string GetDestinationIpv6CidrBlock() const;

                    /**
                     * 设置Destination IPv6 IP range, which cannot be included in VPC IP range, such as 2402:4e00:1000:810b::/64.
                     * @param DestinationIpv6CidrBlock Destination IPv6 IP range, which cannot be included in VPC IP range, such as 2402:4e00:1000:810b::/64.
                     */
                    void SetDestinationIpv6CidrBlock(const std::string& _destinationIpv6CidrBlock);

                    /**
                     * 判断参数 DestinationIpv6CidrBlock 是否已赋值
                     * @return DestinationIpv6CidrBlock 是否已赋值
                     */
                    bool DestinationIpv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取Unique routing policy ID.
                     * @return RouteItemId Unique routing policy ID.
                     */
                    std::string GetRouteItemId() const;

                    /**
                     * 设置Unique routing policy ID.
                     * @param RouteItemId Unique routing policy ID.
                     */
                    void SetRouteItemId(const std::string& _routeItemId);

                    /**
                     * 判断参数 RouteItemId 是否已赋值
                     * @return RouteItemId 是否已赋值
                     */
                    bool RouteItemIdHasBeenSet() const;

                    /**
                     * 获取Whether the routing policy is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PublishedToVbc Whether the routing policy is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetPublishedToVbc() const;

                    /**
                     * 设置Whether the routing policy is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PublishedToVbc Whether the routing policy is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPublishedToVbc(const bool& _publishedToVbc);

                    /**
                     * 判断参数 PublishedToVbc 是否已赋值
                     * @return PublishedToVbc 是否已赋值
                     */
                    bool PublishedToVbcHasBeenSet() const;

                    /**
                     * 获取Creation time of the routing policy
                     * @return CreatedTime Creation time of the routing policy
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the routing policy
                     * @param CreatedTime Creation time of the routing policy
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Destination IP range, such as 112.20.51.0/24. Values cannot be in the VPC IP range.
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * Type of the next hop. Valid values:
`CVM`: public gateway CVM;
`VPN`: VPN gateway;
`DIRECTCONNECT`: direct connect gateway;
`PEERCONNECTION`: peering connection;
`HAVIP`: HAVIP;
`NAT`: NAT Gateway; 
`NORMAL_CVM`: normal CVM;
`EIP`: public IP address of the CVM;
`LOCAL_GATEWAY`: local gateway.
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Next hop address. You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address. 
Note: If `GatewayType` is set to `NORMAL_CVM`, `GatewayId` should be the private IP of the instance.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend using the unique ID `RouteItemId` for the routing policy.
This field is required when you want to delete a routing policy.
                     */
                    uint64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * The description of the routing policy.
                     */
                    std::string m_routeDescription;
                    bool m_routeDescriptionHasBeenSet;

                    /**
                     * Whether it is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * The route type. Currently, the following types are supported:
USER: User route;
NETD: Network probe route. When creating a network probe route, the system delivers by default. It cannot be edited or deleted;
CCN: CCN route. The system delivers by default. It cannot be edited or deleted.
Users can only add and operate USER-type routes.
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * Route table instance ID, such as rtb-azd4dt1c.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Destination IPv6 IP range, which cannot be included in VPC IP range, such as 2402:4e00:1000:810b::/64.
                     */
                    std::string m_destinationIpv6CidrBlock;
                    bool m_destinationIpv6CidrBlockHasBeenSet;

                    /**
                     * Unique routing policy ID.
                     */
                    std::string m_routeItemId;
                    bool m_routeItemIdHasBeenSet;

                    /**
                     * Whether the routing policy is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_publishedToVbc;
                    bool m_publishedToVbcHasBeenSet;

                    /**
                     * Creation time of the routing policy
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTE_H_
