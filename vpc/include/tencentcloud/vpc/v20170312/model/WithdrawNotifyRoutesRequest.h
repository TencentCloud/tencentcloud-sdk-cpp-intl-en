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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_WITHDRAWNOTIFYROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_WITHDRAWNOTIFYROUTESREQUEST_H_

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
                * WithdrawNotifyRoutes request structure.
                */
                class WithdrawNotifyRoutesRequest : public AbstractModel
                {
                public:
                    WithdrawNotifyRoutesRequest();
                    ~WithdrawNotifyRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the route table
                     * @return RouteTableId The unique ID of the route table
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置The unique ID of the route table
                     * @param _routeTableId The unique ID of the route table
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
                     * 获取The unique ID of the routing policy
                     * @return RouteItemIds The unique ID of the routing policy
                     * 
                     */
                    std::vector<std::string> GetRouteItemIds() const;

                    /**
                     * 设置The unique ID of the routing policy
                     * @param _routeItemIds The unique ID of the routing policy
                     * 
                     */
                    void SetRouteItemIds(const std::vector<std::string>& _routeItemIds);

                    /**
                     * 判断参数 RouteItemIds 是否已赋值
                     * @return RouteItemIds 是否已赋值
                     * 
                     */
                    bool RouteItemIdsHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the route table
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * The unique ID of the routing policy
                     */
                    std::vector<std::string> m_routeItemIds;
                    bool m_routeItemIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_WITHDRAWNOTIFYROUTESREQUEST_H_
