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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWMONITORDETAILREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWMONITORDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeGatewayFlowMonitorDetail request structure.
                */
                class DescribeGatewayFlowMonitorDetailRequest : public AbstractModel
                {
                public:
                    DescribeGatewayFlowMonitorDetailRequest();
                    ~DescribeGatewayFlowMonitorDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The point in time. This indicates details of this minute will be queried. For example, in `2019-02-28 18:15:20`, details at `18:15` will be queried.
                     * @return TimePoint The point in time. This indicates details of this minute will be queried. For example, in `2019-02-28 18:15:20`, details at `18:15` will be queried.
                     * 
                     */
                    std::string GetTimePoint() const;

                    /**
                     * 设置The point in time. This indicates details of this minute will be queried. For example, in `2019-02-28 18:15:20`, details at `18:15` will be queried.
                     * @param _timePoint The point in time. This indicates details of this minute will be queried. For example, in `2019-02-28 18:15:20`, details at `18:15` will be queried.
                     * 
                     */
                    void SetTimePoint(const std::string& _timePoint);

                    /**
                     * 判断参数 TimePoint 是否已赋值
                     * @return TimePoint 是否已赋值
                     * 
                     */
                    bool TimePointHasBeenSet() const;

                    /**
                     * 获取The instance ID of the VPN gateway, such as `vpn-ltjahce6`.
                     * @return VpnId The instance ID of the VPN gateway, such as `vpn-ltjahce6`.
                     * 
                     */
                    std::string GetVpnId() const;

                    /**
                     * 设置The instance ID of the VPN gateway, such as `vpn-ltjahce6`.
                     * @param _vpnId The instance ID of the VPN gateway, such as `vpn-ltjahce6`.
                     * 
                     */
                    void SetVpnId(const std::string& _vpnId);

                    /**
                     * 判断参数 VpnId 是否已赋值
                     * @return VpnId 是否已赋值
                     * 
                     */
                    bool VpnIdHasBeenSet() const;

                    /**
                     * 获取The instance ID of the Direct Connect gateway, such as `dcg-ltjahce6`.
                     * @return DirectConnectGatewayId The instance ID of the Direct Connect gateway, such as `dcg-ltjahce6`.
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置The instance ID of the Direct Connect gateway, such as `dcg-ltjahce6`.
                     * @param _directConnectGatewayId The instance ID of the Direct Connect gateway, such as `dcg-ltjahce6`.
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
                     * 获取The instance ID of the peering connection, such as `pcx-ltjahce6`.
                     * @return PeeringConnectionId The instance ID of the peering connection, such as `pcx-ltjahce6`.
                     * 
                     */
                    std::string GetPeeringConnectionId() const;

                    /**
                     * 设置The instance ID of the peering connection, such as `pcx-ltjahce6`.
                     * @param _peeringConnectionId The instance ID of the peering connection, such as `pcx-ltjahce6`.
                     * 
                     */
                    void SetPeeringConnectionId(const std::string& _peeringConnectionId);

                    /**
                     * 判断参数 PeeringConnectionId 是否已赋值
                     * @return PeeringConnectionId 是否已赋值
                     * 
                     */
                    bool PeeringConnectionIdHasBeenSet() const;

                    /**
                     * 获取The instance ID of the NAT gateway, such as `nat-ltjahce6`.
                     * @return NatId The instance ID of the NAT gateway, such as `nat-ltjahce6`.
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置The instance ID of the NAT gateway, such as `nat-ltjahce6`.
                     * @param _natId The instance ID of the NAT gateway, such as `nat-ltjahce6`.
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The returned quantity.
                     * @return Limit The returned quantity.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity.
                     * @param _limit The returned quantity.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The order field supports `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`.
                     * @return OrderField The order field supports `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置The order field supports `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`.
                     * @param _orderField The order field supports `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Order methods. Ascending: `ASC`, Descending: `DESC`.
                     * @return OrderDirection Order methods. Ascending: `ASC`, Descending: `DESC`.
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Order methods. Ascending: `ASC`, Descending: `DESC`.
                     * @param _orderDirection Order methods. Ascending: `ASC`, Descending: `DESC`.
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * The point in time. This indicates details of this minute will be queried. For example, in `2019-02-28 18:15:20`, details at `18:15` will be queried.
                     */
                    std::string m_timePoint;
                    bool m_timePointHasBeenSet;

                    /**
                     * The instance ID of the VPN gateway, such as `vpn-ltjahce6`.
                     */
                    std::string m_vpnId;
                    bool m_vpnIdHasBeenSet;

                    /**
                     * The instance ID of the Direct Connect gateway, such as `dcg-ltjahce6`.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * The instance ID of the peering connection, such as `pcx-ltjahce6`.
                     */
                    std::string m_peeringConnectionId;
                    bool m_peeringConnectionIdHasBeenSet;

                    /**
                     * The instance ID of the NAT gateway, such as `nat-ltjahce6`.
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The order field supports `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Order methods. Ascending: `ASC`, Descending: `DESC`.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWMONITORDETAILREQUEST_H_
