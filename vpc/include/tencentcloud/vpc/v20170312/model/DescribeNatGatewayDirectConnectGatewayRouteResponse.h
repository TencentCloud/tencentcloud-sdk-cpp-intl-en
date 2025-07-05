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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NatDirectConnectGatewayRoute.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNatGatewayDirectConnectGatewayRoute response structure.
                */
                class DescribeNatGatewayDirectConnectGatewayRouteResponse : public AbstractModel
                {
                public:
                    DescribeNatGatewayDirectConnectGatewayRouteResponse();
                    ~DescribeNatGatewayDirectConnectGatewayRouteResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Route data
                     * @return NatDirectConnectGatewayRouteSet Route data
                     * 
                     */
                    std::vector<NatDirectConnectGatewayRoute> GetNatDirectConnectGatewayRouteSet() const;

                    /**
                     * 判断参数 NatDirectConnectGatewayRouteSet 是否已赋值
                     * @return NatDirectConnectGatewayRouteSet 是否已赋值
                     * 
                     */
                    bool NatDirectConnectGatewayRouteSetHasBeenSet() const;

                    /**
                     * 获取Total number of routes
                     * @return Total Total number of routes
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Route data
                     */
                    std::vector<NatDirectConnectGatewayRoute> m_natDirectConnectGatewayRouteSet;
                    bool m_natDirectConnectGatewayRouteSetHasBeenSet;

                    /**
                     * Total number of routes
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTERESPONSE_H_
