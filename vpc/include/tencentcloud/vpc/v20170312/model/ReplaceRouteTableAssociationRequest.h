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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTETABLEASSOCIATIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTETABLEASSOCIATIONREQUEST_H_

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
                * ReplaceRouteTableAssociation request structure.
                */
                class ReplaceRouteTableAssociationRequest : public AbstractModel
                {
                public:
                    ReplaceRouteTableAssociationRequest();
                    ~ReplaceRouteTableAssociationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subnet instance ID, such as `subnet-3x5lf5q0`. This can be queried using the DescribeSubnets API.
                     * @return SubnetId Subnet instance ID, such as `subnet-3x5lf5q0`. This can be queried using the DescribeSubnets API.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID, such as `subnet-3x5lf5q0`. This can be queried using the DescribeSubnets API.
                     * @param _subnetId Subnet instance ID, such as `subnet-3x5lf5q0`. This can be queried using the DescribeSubnets API.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

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

                private:

                    /**
                     * Subnet instance ID, such as `subnet-3x5lf5q0`. This can be queried using the DescribeSubnets API.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTETABLEASSOCIATIONREQUEST_H_
