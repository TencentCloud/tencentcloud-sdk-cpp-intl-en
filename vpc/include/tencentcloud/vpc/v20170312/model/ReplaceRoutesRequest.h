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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Route.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ReplaceRoutes request structure.
                */
                class ReplaceRoutesRequest : public AbstractModel
                {
                public:
                    ReplaceRoutesRequest();
                    ~ReplaceRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The route table instance ID, such as `rtb-azd4dt1c`.
                     * @return RouteTableId The route table instance ID, such as `rtb-azd4dt1c`.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置The route table instance ID, such as `rtb-azd4dt1c`.
                     * @param _routeTableId The route table instance ID, such as `rtb-azd4dt1c`.
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取Routing policy object. The routing policy ID (RouteId) must be specified.
                     * @return Routes Routing policy object. The routing policy ID (RouteId) must be specified.
                     * 
                     */
                    std::vector<Route> GetRoutes() const;

                    /**
                     * 设置Routing policy object. The routing policy ID (RouteId) must be specified.
                     * @param _routes Routing policy object. The routing policy ID (RouteId) must be specified.
                     * 
                     */
                    void SetRoutes(const std::vector<Route>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                private:

                    /**
                     * The route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Routing policy object. The routing policy ID (RouteId) must be specified.
                     */
                    std::vector<Route> m_routes;
                    bool m_routesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESREQUEST_H_
