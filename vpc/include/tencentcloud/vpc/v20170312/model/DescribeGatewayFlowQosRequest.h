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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWQOSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWQOSREQUEST_H_

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
                * DescribeGatewayFlowQos request structure.
                */
                class DescribeGatewayFlowQosRequest : public AbstractModel
                {
                public:
                    DescribeGatewayFlowQosRequest();
                    ~DescribeGatewayFlowQosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance ID. Supported types:
Direct connect gateway instance, such as `dcg-ltjahce6`;
NAT gateway instance, such as `nat-ltjahce6`;
VPN gateway instance, such as `vpn-ltjahce6`.
                     * @return GatewayId Gateway instance ID. Supported types:
Direct connect gateway instance, such as `dcg-ltjahce6`;
NAT gateway instance, such as `nat-ltjahce6`;
VPN gateway instance, such as `vpn-ltjahce6`.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance ID. Supported types:
Direct connect gateway instance, such as `dcg-ltjahce6`;
NAT gateway instance, such as `nat-ltjahce6`;
VPN gateway instance, such as `vpn-ltjahce6`.
                     * @param _gatewayId Gateway instance ID. Supported types:
Direct connect gateway instance, such as `dcg-ltjahce6`;
NAT gateway instance, such as `nat-ltjahce6`;
VPN gateway instance, such as `vpn-ltjahce6`.
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
                     * 获取CVM private IP addresses with limited bandwidth.
                     * @return IpAddresses CVM private IP addresses with limited bandwidth.
                     * 
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置CVM private IP addresses with limited bandwidth.
                     * @param _ipAddresses CVM private IP addresses with limited bandwidth.
                     * 
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     * 
                     */
                    bool IpAddressesHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID. Supported types:
Direct connect gateway instance, such as `dcg-ltjahce6`;
NAT gateway instance, such as `nat-ltjahce6`;
VPN gateway instance, such as `vpn-ltjahce6`.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * CVM private IP addresses with limited bandwidth.
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWQOSREQUEST_H_
