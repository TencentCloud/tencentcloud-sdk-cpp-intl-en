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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGATEWAYFLOWQOSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGATEWAYFLOWQOSREQUEST_H_

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
                * ModifyGatewayFlowQos request structure.
                */
                class ModifyGatewayFlowQosRequest : public AbstractModel
                {
                public:
                    ModifyGatewayFlowQosRequest();
                    ~ModifyGatewayFlowQosRequest() = default;
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
                     * 获取Bandwidth limit value in Mbps. Valid values: >0: Set the limit to the specified value. 0: Block all traffic. -1: No bandwidth limit.
                     * @return Bandwidth Bandwidth limit value in Mbps. Valid values: >0: Set the limit to the specified value. 0: Block all traffic. -1: No bandwidth limit.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth limit value in Mbps. Valid values: >0: Set the limit to the specified value. 0: Block all traffic. -1: No bandwidth limit.
                     * @param _bandwidth Bandwidth limit value in Mbps. Valid values: >0: Set the limit to the specified value. 0: Block all traffic. -1: No bandwidth limit.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

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
                     * Bandwidth limit value in Mbps. Valid values: >0: Set the limit to the specified value. 0: Block all traffic. -1: No bandwidth limit.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * CVM private IP addresses with limited bandwidth.
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGATEWAYFLOWQOSREQUEST_H_
