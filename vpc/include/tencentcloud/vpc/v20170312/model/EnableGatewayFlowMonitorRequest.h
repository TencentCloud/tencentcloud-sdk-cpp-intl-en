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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEGATEWAYFLOWMONITORREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEGATEWAYFLOWMONITORREQUEST_H_

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
                * EnableGatewayFlowMonitor request structure.
                */
                class EnableGatewayFlowMonitorRequest : public AbstractModel
                {
                public:
                    EnableGatewayFlowMonitorRequest();
                    ~EnableGatewayFlowMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance ID, which currently supports these types:
ID of Direct Connect gateway instance, e.g. `dcg-ltjahce6`;
ID of NAT gateway instance, e.g. `nat-ltjahce6`;
ID of VPN gateway instance, e.g. `vpn-ltjahce6`.
                     * @return GatewayId Gateway instance ID, which currently supports these types:
ID of Direct Connect gateway instance, e.g. `dcg-ltjahce6`;
ID of NAT gateway instance, e.g. `nat-ltjahce6`;
ID of VPN gateway instance, e.g. `vpn-ltjahce6`.
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance ID, which currently supports these types:
ID of Direct Connect gateway instance, e.g. `dcg-ltjahce6`;
ID of NAT gateway instance, e.g. `nat-ltjahce6`;
ID of VPN gateway instance, e.g. `vpn-ltjahce6`.
                     * @param GatewayId Gateway instance ID, which currently supports these types:
ID of Direct Connect gateway instance, e.g. `dcg-ltjahce6`;
ID of NAT gateway instance, e.g. `nat-ltjahce6`;
ID of VPN gateway instance, e.g. `vpn-ltjahce6`.
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     */
                    bool GatewayIdHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID, which currently supports these types:
ID of Direct Connect gateway instance, e.g. `dcg-ltjahce6`;
ID of NAT gateway instance, e.g. `nat-ltjahce6`;
ID of VPN gateway instance, e.g. `vpn-ltjahce6`.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEGATEWAYFLOWMONITORREQUEST_H_
