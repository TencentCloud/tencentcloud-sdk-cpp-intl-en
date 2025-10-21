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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICYENTRY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICYENTRY_H_

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
                * Route reception policy entry.
                */
                class RoutePolicyEntry : public AbstractModel
                {
                public:
                    RoutePolicyEntry();
                    ~RoutePolicyEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the unique ID of the IPv4 routing strategy entry.
Note: This field may return null, indicating that no valid value was found.
                     * @return RoutePolicyEntryId Specifies the unique ID of the IPv4 routing strategy entry.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRoutePolicyEntryId() const;

                    /**
                     * 设置Specifies the unique ID of the IPv4 routing strategy entry.
Note: This field may return null, indicating that no valid value was found.
                     * @param _routePolicyEntryId Specifies the unique ID of the IPv4 routing strategy entry.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRoutePolicyEntryId(const std::string& _routePolicyEntryId);

                    /**
                     * 判断参数 RoutePolicyEntryId 是否已赋值
                     * @return RoutePolicyEntryId 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntryIdHasBeenSet() const;

                    /**
                     * 获取Destination ip range.
Note: This field may return null, indicating that no valid value was found.
                     * @return CidrBlock Destination ip range.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置Destination ip range.
Note: This field may return null, indicating that no valid value was found.
                     * @param _cidrBlock Destination ip range.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取Describes the routing strategy rule.
Note: This field may return null, indicating that no valid value was found.
                     * @return Description Describes the routing strategy rule.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Describes the routing strategy rule.
Note: This field may return null, indicating that no valid value was found.
                     * @param _description Describes the routing strategy rule.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Routing Type

Specifies the USER-customized data type.
NETD: specifies the route for network detection.
CCN: CCN route.
Note: This field may return null, indicating that no valid value was found.
                     * @return RouteType Routing Type

Specifies the USER-customized data type.
NETD: specifies the route for network detection.
CCN: CCN route.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置Routing Type

Specifies the USER-customized data type.
NETD: specifies the route for network detection.
CCN: CCN route.
Note: This field may return null, indicating that no valid value was found.
                     * @param _routeType Routing Type

Specifies the USER-customized data type.
NETD: specifies the route for network detection.
CCN: CCN route.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Next hop type. types currently supported:.
CVM: cloud virtual machine with public network gateway type.
VPN: vpn gateway.
DIRECTCONNECT: direct connect gateway.
PEERCONNECTION: peering connection.
HAVIP: high availability virtual ip.
NAT: specifies the nat gateway. 
EIP: specifies the public ip address of the cloud virtual machine.
LOCAL_GATEWAY: specifies the local gateway.
PVGW: pvgw gateway.
Note: This field may return null, indicating that no valid value was found.
                     * @return GatewayType Next hop type. types currently supported:.
CVM: cloud virtual machine with public network gateway type.
VPN: vpn gateway.
DIRECTCONNECT: direct connect gateway.
PEERCONNECTION: peering connection.
HAVIP: high availability virtual ip.
NAT: specifies the nat gateway. 
EIP: specifies the public ip address of the cloud virtual machine.
LOCAL_GATEWAY: specifies the local gateway.
PVGW: pvgw gateway.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Next hop type. types currently supported:.
CVM: cloud virtual machine with public network gateway type.
VPN: vpn gateway.
DIRECTCONNECT: direct connect gateway.
PEERCONNECTION: peering connection.
HAVIP: high availability virtual ip.
NAT: specifies the nat gateway. 
EIP: specifies the public ip address of the cloud virtual machine.
LOCAL_GATEWAY: specifies the local gateway.
PVGW: pvgw gateway.
Note: This field may return null, indicating that no valid value was found.
                     * @param _gatewayType Next hop type. types currently supported:.
CVM: cloud virtual machine with public network gateway type.
VPN: vpn gateway.
DIRECTCONNECT: direct connect gateway.
PEERCONNECTION: peering connection.
HAVIP: high availability virtual ip.
NAT: specifies the nat gateway. 
EIP: specifies the public ip address of the cloud virtual machine.
LOCAL_GATEWAY: specifies the local gateway.
PVGW: pvgw gateway.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Gateway unique ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return GatewayId Gateway unique ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway unique ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param _gatewayId Gateway unique ID.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Priority. a smaller value indicates a higher priority.
Note: This field may return null, indicating that no valid value was found.
                     * @return Priority Priority. a smaller value indicates a higher priority.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置Priority. a smaller value indicates a higher priority.
Note: This field may return null, indicating that no valid value was found.
                     * @param _priority Priority. a smaller value indicates a higher priority.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Action.
DROP: drop.
DISABLE: receive and disable.
ACCEPT: receive and enable.
Note: This field may return null, indicating that no valid value was found.
                     * @return Action Action.
DROP: drop.
DISABLE: receive and disable.
ACCEPT: receive and enable.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action.
DROP: drop.
DISABLE: receive and disable.
ACCEPT: receive and enable.
Note: This field may return null, indicating that no valid value was found.
                     * @param _action Action.
DROP: drop.
DISABLE: receive and disable.
ACCEPT: receive and enable.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Creation time.

Note: This field may return null, indicating that no valid value was found.
                     * @return CreatedTime Creation time.

Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid value was found.
                     * @param _createdTime Creation time.

Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Specifies the region.
Note: This field may return null, indicating that no valid value was found.
                     * @return Region Specifies the region.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Specifies the region.
Note: This field may return null, indicating that no valid value was found.
                     * @param _region Specifies the region.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique ID of the IPv4 routing strategy entry.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_routePolicyEntryId;
                    bool m_routePolicyEntryIdHasBeenSet;

                    /**
                     * Destination ip range.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Describes the routing strategy rule.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Routing Type

Specifies the USER-customized data type.
NETD: specifies the route for network detection.
CCN: CCN route.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * Next hop type. types currently supported:.
CVM: cloud virtual machine with public network gateway type.
VPN: vpn gateway.
DIRECTCONNECT: direct connect gateway.
PEERCONNECTION: peering connection.
HAVIP: high availability virtual ip.
NAT: specifies the nat gateway. 
EIP: specifies the public ip address of the cloud virtual machine.
LOCAL_GATEWAY: specifies the local gateway.
PVGW: pvgw gateway.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Gateway unique ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Priority. a smaller value indicates a higher priority.
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Action.
DROP: drop.
DISABLE: receive and disable.
ACCEPT: receive and enable.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Specifies the region.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICYENTRY_H_
