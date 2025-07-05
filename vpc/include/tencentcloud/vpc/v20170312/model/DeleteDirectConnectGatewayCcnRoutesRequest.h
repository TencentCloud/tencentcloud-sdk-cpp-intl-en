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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_

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
                * DeleteDirectConnectGatewayCcnRoutes request structure.
                */
                class DeleteDirectConnectGatewayCcnRoutesRequest : public AbstractModel
                {
                public:
                    DeleteDirectConnectGatewayCcnRoutesRequest();
                    ~DeleteDirectConnectGatewayCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`
                     * @return DirectConnectGatewayId The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`
                     * @param _directConnectGatewayId The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取The route ID, such as `ccnr-f49l6u0z`.
                     * @return RouteIds The route ID, such as `ccnr-f49l6u0z`.
                     * 
                     */
                    std::vector<std::string> GetRouteIds() const;

                    /**
                     * 设置The route ID, such as `ccnr-f49l6u0z`.
                     * @param _routeIds The route ID, such as `ccnr-f49l6u0z`.
                     * 
                     */
                    void SetRouteIds(const std::vector<std::string>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                private:

                    /**
                     * The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * The route ID, such as `ccnr-f49l6u0z`.
                     */
                    std::vector<std::string> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
