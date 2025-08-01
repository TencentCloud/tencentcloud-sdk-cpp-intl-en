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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYCCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYCCNROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/VpngwCcnRoutes.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyVpnGatewayCcnRoutes request structure.
                */
                class ModifyVpnGatewayCcnRoutesRequest : public AbstractModel
                {
                public:
                    ModifyVpnGatewayCcnRoutesRequest();
                    ~ModifyVpnGatewayCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID of the VPN gateway
                     * @return VpnGatewayId Instance ID of the VPN gateway
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置Instance ID of the VPN gateway
                     * @param _vpnGatewayId Instance ID of the VPN gateway
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取The CCN route (IDC IP range) list.
                     * @return Routes The CCN route (IDC IP range) list.
                     * 
                     */
                    std::vector<VpngwCcnRoutes> GetRoutes() const;

                    /**
                     * 设置The CCN route (IDC IP range) list.
                     * @param _routes The CCN route (IDC IP range) list.
                     * 
                     */
                    void SetRoutes(const std::vector<VpngwCcnRoutes>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                private:

                    /**
                     * Instance ID of the VPN gateway
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * The CCN route (IDC IP range) list.
                     */
                    std::vector<VpngwCcnRoutes> m_routes;
                    bool m_routesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYCCNROUTESREQUEST_H_
