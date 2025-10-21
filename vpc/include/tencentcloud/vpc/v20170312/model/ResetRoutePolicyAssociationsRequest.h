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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYASSOCIATIONSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYASSOCIATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyAssociation.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ResetRoutePolicyAssociations request structure.
                */
                class ResetRoutePolicyAssociationsRequest : public AbstractModel
                {
                public:
                    ResetRoutePolicyAssociationsRequest();
                    ~ResetRoutePolicyAssociationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Routing table instance ID, e.g., rtb-azd4dt1c.
                     * @return RouteTableId Routing table instance ID, e.g., rtb-azd4dt1c.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Routing table instance ID, e.g., rtb-azd4dt1c.
                     * @param _routeTableId Routing table instance ID, e.g., rtb-azd4dt1c.
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
                     * 获取The list of routing policy binding objects (RoutePolicyAssociation). note: the route table instance ID (RouteTableId) in the binding must match the RouteTableId parameter of this API (that is, this API only supports modifying the strategy binding relationship and priority within the same route table instance).
                     * @return RoutePolicyAssociationSet The list of routing policy binding objects (RoutePolicyAssociation). note: the route table instance ID (RouteTableId) in the binding must match the RouteTableId parameter of this API (that is, this API only supports modifying the strategy binding relationship and priority within the same route table instance).
                     * 
                     */
                    std::vector<RoutePolicyAssociation> GetRoutePolicyAssociationSet() const;

                    /**
                     * 设置The list of routing policy binding objects (RoutePolicyAssociation). note: the route table instance ID (RouteTableId) in the binding must match the RouteTableId parameter of this API (that is, this API only supports modifying the strategy binding relationship and priority within the same route table instance).
                     * @param _routePolicyAssociationSet The list of routing policy binding objects (RoutePolicyAssociation). note: the route table instance ID (RouteTableId) in the binding must match the RouteTableId parameter of this API (that is, this API only supports modifying the strategy binding relationship and priority within the same route table instance).
                     * 
                     */
                    void SetRoutePolicyAssociationSet(const std::vector<RoutePolicyAssociation>& _routePolicyAssociationSet);

                    /**
                     * 判断参数 RoutePolicyAssociationSet 是否已赋值
                     * @return RoutePolicyAssociationSet 是否已赋值
                     * 
                     */
                    bool RoutePolicyAssociationSetHasBeenSet() const;

                private:

                    /**
                     * Routing table instance ID, e.g., rtb-azd4dt1c.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * The list of routing policy binding objects (RoutePolicyAssociation). note: the route table instance ID (RouteTableId) in the binding must match the RouteTableId parameter of this API (that is, this API only supports modifying the strategy binding relationship and priority within the same route table instance).
                     */
                    std::vector<RoutePolicyAssociation> m_routePolicyAssociationSet;
                    bool m_routePolicyAssociationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYASSOCIATIONSREQUEST_H_
