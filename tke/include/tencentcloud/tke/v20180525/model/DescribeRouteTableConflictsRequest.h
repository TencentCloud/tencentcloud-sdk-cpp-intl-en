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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeRouteTableConflicts request structure.
                */
                class DescribeRouteTableConflictsRequest : public AbstractModel
                {
                public:
                    DescribeRouteTableConflictsRequest();
                    ~DescribeRouteTableConflictsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Route table CIDR
                     * @return RouteTableCidrBlock Route table CIDR
                     */
                    std::string GetRouteTableCidrBlock() const;

                    /**
                     * 设置Route table CIDR
                     * @param RouteTableCidrBlock Route table CIDR
                     */
                    void SetRouteTableCidrBlock(const std::string& _routeTableCidrBlock);

                    /**
                     * 判断参数 RouteTableCidrBlock 是否已赋值
                     * @return RouteTableCidrBlock 是否已赋值
                     */
                    bool RouteTableCidrBlockHasBeenSet() const;

                    /**
                     * 获取VPC bound to the route table
                     * @return VpcId VPC bound to the route table
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC bound to the route table
                     * @param VpcId VPC bound to the route table
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * Route table CIDR
                     */
                    std::string m_routeTableCidrBlock;
                    bool m_routeTableCidrBlockHasBeenSet;

                    /**
                     * VPC bound to the route table
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSREQUEST_H_
