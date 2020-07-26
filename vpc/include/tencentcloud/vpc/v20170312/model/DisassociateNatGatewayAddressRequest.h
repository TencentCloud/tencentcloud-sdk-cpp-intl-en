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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATENATGATEWAYADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATENATGATEWAYADDRESSREQUEST_H_

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
                * DisassociateNatGatewayAddress request structure.
                */
                class DisassociateNatGatewayAddressRequest : public AbstractModel
                {
                public:
                    DisassociateNatGatewayAddressRequest();
                    ~DisassociateNatGatewayAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the NAT gateway, such as `nat-df45454`.
                     * @return NatGatewayId The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The ID of the NAT gateway, such as `nat-df45454`.
                     * @param NatGatewayId The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取The array of EIPs bound to the NAT gateway.
                     * @return PublicIpAddresses The array of EIPs bound to the NAT gateway.
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置The array of EIPs bound to the NAT gateway.
                     * @param PublicIpAddresses The array of EIPs bound to the NAT gateway.
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                private:

                    /**
                     * The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * The array of EIPs bound to the NAT gateway.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATENATGATEWAYADDRESSREQUEST_H_
