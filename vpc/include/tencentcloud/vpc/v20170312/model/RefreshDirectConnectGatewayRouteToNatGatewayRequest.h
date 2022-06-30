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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REFRESHDIRECTCONNECTGATEWAYROUTETONATGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REFRESHDIRECTCONNECTGATEWAYROUTETONATGATEWAYREQUEST_H_

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
                * RefreshDirectConnectGatewayRouteToNatGateway request structure.
                */
                class RefreshDirectConnectGatewayRouteToNatGatewayRequest : public AbstractModel
                {
                public:
                    RefreshDirectConnectGatewayRouteToNatGatewayRequest();
                    ~RefreshDirectConnectGatewayRouteToNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The NAT gateway ID.
                     * @return NatGatewayId The NAT gateway ID.
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The NAT gateway ID.
                     * @param NatGatewayId The NAT gateway ID.
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取Whether it is pre-refresh. Valid values: `True` (yes) and `False` (no)
                     * @return DryRun Whether it is pre-refresh. Valid values: `True` (yes) and `False` (no)
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether it is pre-refresh. Valid values: `True` (yes) and `False` (no)
                     * @param DryRun Whether it is pre-refresh. Valid values: `True` (yes) and `False` (no)
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The NAT gateway ID.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * Whether it is pre-refresh. Valid values: `True` (yes) and `False` (no)
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REFRESHDIRECTCONNECTGATEWAYROUTETONATGATEWAYREQUEST_H_
