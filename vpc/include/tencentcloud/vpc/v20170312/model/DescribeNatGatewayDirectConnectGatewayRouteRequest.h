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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTEREQUEST_H_

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
                * DescribeNatGatewayDirectConnectGatewayRoute request structure.
                */
                class DescribeNatGatewayDirectConnectGatewayRouteRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewayDirectConnectGatewayRouteRequest();
                    ~DescribeNatGatewayDirectConnectGatewayRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the NAT gateway
                     * @return NatGatewayId Unique ID of the NAT gateway
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置Unique ID of the NAT gateway
                     * @param _natGatewayId Unique ID of the NAT gateway
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
                     * 获取Unique ID of VPC
                     * @return VpcId Unique ID of VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of VPC
                     * @param _vpcId Unique ID of VPC
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
                     * 获取Valid range: 0-200
                     * @return Limit Valid range: 0-200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Valid range: 0-200
                     * @param _limit Valid range: 0-200
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Greater than 0
                     * @return Offset Greater than 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Greater than 0
                     * @param _offset Greater than 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the NAT gateway
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * Unique ID of VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Valid range: 0-200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Greater than 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTEREQUEST_H_
