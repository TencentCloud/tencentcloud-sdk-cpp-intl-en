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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_REPLACEROUTESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_REPLACEROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Route.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取Route table instance ID.
                     * @return RouteTableId Route table instance ID.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table instance ID.
                     * @param _routeTableId Route table instance ID.
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
                     * 获取Routing policy object.
                     * @return Routes Routing policy object.
                     * 
                     */
                    std::vector<Route> GetRoutes() const;

                    /**
                     * 设置Routing policy object.
                     * @param _routes Routing policy object.
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
                     * Route table instance ID.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Routing policy object.
                     */
                    std::vector<Route> m_routes;
                    bool m_routesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_REPLACEROUTESREQUEST_H_
