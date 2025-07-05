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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ROUTE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Routing policy
                */
                class Route : public AbstractModel
                {
                public:
                    Route();
                    ~Route() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination IPv4 IP range
                     * @return DestinationCidrBlock Destination IPv4 IP range
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置Destination IPv4 IP range
                     * @param _destinationCidrBlock Destination IPv4 IP range
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取Next hop type
NORMAL_CVM: general CVM;
                     * @return GatewayType Next hop type
NORMAL_CVM: general CVM;
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Next hop type
NORMAL_CVM: general CVM;
                     * @param _gatewayType Next hop type
NORMAL_CVM: general CVM;
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取Next hop address
You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address
When `GatewayType` is `EIP`, the value of `GatewayId` will be fixed at `0`
                     * @return GatewayId Next hop address
You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address
When `GatewayType` is `EIP`, the value of `GatewayId` will be fixed at `0`
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Next hop address
You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address
When `GatewayType` is `EIP`, the value of `GatewayId` will be fixed at `0`
                     * @param _gatewayId Next hop address
You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address
When `GatewayType` is `EIP`, the value of `GatewayId` will be fixed at `0`
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Unique routing policy ID
                     * @return RouteItemId Unique routing policy ID
                     * 
                     */
                    std::string GetRouteItemId() const;

                    /**
                     * 设置Unique routing policy ID
                     * @param _routeItemId Unique routing policy ID
                     * 
                     */
                    void SetRouteItemId(const std::string& _routeItemId);

                    /**
                     * 判断参数 RouteItemId 是否已赋值
                     * @return RouteItemId 是否已赋值
                     * 
                     */
                    bool RouteItemIdHasBeenSet() const;

                    /**
                     * 获取Routing policy description
                     * @return RouteDescription Routing policy description
                     * 
                     */
                    std::string GetRouteDescription() const;

                    /**
                     * 设置Routing policy description
                     * @param _routeDescription Routing policy description
                     * 
                     */
                    void SetRouteDescription(const std::string& _routeDescription);

                    /**
                     * 判断参数 RouteDescription 是否已赋值
                     * @return RouteDescription 是否已赋值
                     * 
                     */
                    bool RouteDescriptionHasBeenSet() const;

                    /**
                     * 获取Whether to enable
                     * @return Enabled Whether to enable
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable
                     * @param _enabled Whether to enable
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Route type. Valid values:
USER: user route;
NETD: network probe route, which will be delivered by the system by default when you create a network probe instance and cannot be edited or deleted;
CCN: CCN route, which will be delivered by the system by default and cannot be edited or deleted.
You can only add and manipulate routes of `USER` type.
                     * @return RouteType Route type. Valid values:
USER: user route;
NETD: network probe route, which will be delivered by the system by default when you create a network probe instance and cannot be edited or deleted;
CCN: CCN route, which will be delivered by the system by default and cannot be edited or deleted.
You can only add and manipulate routes of `USER` type.
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置Route type. Valid values:
USER: user route;
NETD: network probe route, which will be delivered by the system by default when you create a network probe instance and cannot be edited or deleted;
CCN: CCN route, which will be delivered by the system by default and cannot be edited or deleted.
You can only add and manipulate routes of `USER` type.
                     * @param _routeType Route type. Valid values:
USER: user route;
NETD: network probe route, which will be delivered by the system by default when you create a network probe instance and cannot be edited or deleted;
CCN: CCN route, which will be delivered by the system by default and cannot be edited or deleted.
You can only add and manipulate routes of `USER` type.
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
                     * 获取Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend you use the unique ID `RouteItemId` for the routing policy
                     * @return RouteId Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend you use the unique ID `RouteItemId` for the routing policy
                     * 
                     */
                    uint64_t GetRouteId() const;

                    /**
                     * 设置Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend you use the unique ID `RouteItemId` for the routing policy
                     * @param _routeId Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend you use the unique ID `RouteItemId` for the routing policy
                     * 
                     */
                    void SetRouteId(const uint64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                private:

                    /**
                     * Destination IPv4 IP range
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * Next hop type
NORMAL_CVM: general CVM;
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Next hop address
You simply need to specify the gateway ID of a different next hop type, and the system will automatically match the next hop address
When `GatewayType` is `EIP`, the value of `GatewayId` will be fixed at `0`
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Unique routing policy ID
                     */
                    std::string m_routeItemId;
                    bool m_routeItemIdHasBeenSet;

                    /**
                     * Routing policy description
                     */
                    std::string m_routeDescription;
                    bool m_routeDescriptionHasBeenSet;

                    /**
                     * Whether to enable
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Route type. Valid values:
USER: user route;
NETD: network probe route, which will be delivered by the system by default when you create a network probe instance and cannot be edited or deleted;
CCN: CCN route, which will be delivered by the system by default and cannot be edited or deleted.
You can only add and manipulate routes of `USER` type.
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * Routing policy ID. The IPv4 routing policy will have a meaningful value, while the IPv6 routing policy is always 0. We recommend you use the unique ID `RouteItemId` for the routing policy
                     */
                    uint64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ROUTE_H_
