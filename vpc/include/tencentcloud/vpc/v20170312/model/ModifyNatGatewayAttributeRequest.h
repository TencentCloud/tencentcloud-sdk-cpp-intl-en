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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_

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
                * ModifyNatGatewayAttribute request structure.
                */
                class ModifyNatGatewayAttributeRequest : public AbstractModel
                {
                public:
                    ModifyNatGatewayAttributeRequest();
                    ~ModifyNatGatewayAttributeRequest() = default;
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
                     * 获取The NAT gateway name, such as `test_nat`.
                     * @return NatGatewayName The NAT gateway name, such as `test_nat`.
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置The NAT gateway name, such as `test_nat`.
                     * @param NatGatewayName The NAT gateway name, such as `test_nat`.
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     */
                    bool NatGatewayNameHasBeenSet() const;

                    /**
                     * 获取The maximum outbound bandwidth of the NAT gateway. Unit: Mbps.
                     * @return InternetMaxBandwidthOut The maximum outbound bandwidth of the NAT gateway. Unit: Mbps.
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The maximum outbound bandwidth of the NAT gateway. Unit: Mbps.
                     * @param InternetMaxBandwidthOut The maximum outbound bandwidth of the NAT gateway. Unit: Mbps.
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Whether to modify the security group bound to the NAT Gateway
                     * @return ModifySecurityGroup Whether to modify the security group bound to the NAT Gateway
                     */
                    bool GetModifySecurityGroup() const;

                    /**
                     * 设置Whether to modify the security group bound to the NAT Gateway
                     * @param ModifySecurityGroup Whether to modify the security group bound to the NAT Gateway
                     */
                    void SetModifySecurityGroup(const bool& _modifySecurityGroup);

                    /**
                     * 判断参数 ModifySecurityGroup 是否已赋值
                     * @return ModifySecurityGroup 是否已赋值
                     */
                    bool ModifySecurityGroupHasBeenSet() const;

                    /**
                     * 获取The final security groups bound to the NAT Gateway, such as `['sg-1n232323', 'sg-o4242424']`. An empty list indicates that all the security groups have been deleted.
                     * @return SecurityGroupIds The final security groups bound to the NAT Gateway, such as `['sg-1n232323', 'sg-o4242424']`. An empty list indicates that all the security groups have been deleted.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置The final security groups bound to the NAT Gateway, such as `['sg-1n232323', 'sg-o4242424']`. An empty list indicates that all the security groups have been deleted.
                     * @param SecurityGroupIds The final security groups bound to the NAT Gateway, such as `['sg-1n232323', 'sg-o4242424']`. An empty list indicates that all the security groups have been deleted.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * The NAT gateway name, such as `test_nat`.
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * The maximum outbound bandwidth of the NAT gateway. Unit: Mbps.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Whether to modify the security group bound to the NAT Gateway
                     */
                    bool m_modifySecurityGroup;
                    bool m_modifySecurityGroupHasBeenSet;

                    /**
                     * The final security groups bound to the NAT Gateway, such as `['sg-1n232323', 'sg-o4242424']`. An empty list indicates that all the security groups have been deleted.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_
