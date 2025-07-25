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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEDIRECTCONNECTGATEWAYNATGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEDIRECTCONNECTGATEWAYNATGATEWAYREQUEST_H_

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
                * DisassociateDirectConnectGatewayNatGateway request structure.
                */
                class DisassociateDirectConnectGatewayNatGatewayRequest : public AbstractModel
                {
                public:
                    DisassociateDirectConnectGatewayNatGatewayRequest();
                    ~DisassociateDirectConnectGatewayNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The direct connect gateway ID.
                     * @return VpcId The direct connect gateway ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The direct connect gateway ID.
                     * @param _vpcId The direct connect gateway ID.
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
                     * 获取The NAT Gateway ID.
                     * @return NatGatewayId The NAT Gateway ID.
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The NAT Gateway ID.
                     * @param _natGatewayId The NAT Gateway ID.
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
                     * 获取The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     * @return DirectConnectGatewayId The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     * @param _directConnectGatewayId The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                private:

                    /**
                     * The direct connect gateway ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The NAT Gateway ID.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * The ID of the VPC instance, which can be obtained from the `VpcId` field in response of the `DescribeVpcs` API.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEDIRECTCONNECTGATEWAYNATGATEWAYREQUEST_H_
