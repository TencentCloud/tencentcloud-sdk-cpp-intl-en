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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERROUTETABLEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERROUTETABLEREQUEST_H_

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
                * CreateClusterRouteTable request structure.
                */
                class CreateClusterRouteTableRequest : public AbstractModel
                {
                public:
                    CreateClusterRouteTableRequest();
                    ~CreateClusterRouteTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Route table name, usually the cluster ID
                     * @return RouteTableName Route table name, usually the cluster ID
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置Route table name, usually the cluster ID
                     * @param _routeTableName Route table name, usually the cluster ID
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取Route table CIDR
                     * @return RouteTableCidrBlock Route table CIDR
                     * 
                     */
                    std::string GetRouteTableCidrBlock() const;

                    /**
                     * 设置Route table CIDR
                     * @param _routeTableCidrBlock Route table CIDR
                     * 
                     */
                    void SetRouteTableCidrBlock(const std::string& _routeTableCidrBlock);

                    /**
                     * 判断参数 RouteTableCidrBlock 是否已赋值
                     * @return RouteTableCidrBlock 是否已赋值
                     * 
                     */
                    bool RouteTableCidrBlockHasBeenSet() const;

                    /**
                     * 获取VPC bound to the route table
                     * @return VpcId VPC bound to the route table
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC bound to the route table
                     * @param _vpcId VPC bound to the route table
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Whether to ignore CIDR and VPC route table conflicts, 0 means not to ignore, 1 means to ignore. The default is not to ignore.
                     * @return IgnoreClusterCidrConflict Whether to ignore CIDR and VPC route table conflicts, 0 means not to ignore, 1 means to ignore. The default is not to ignore.
                     * 
                     */
                    int64_t GetIgnoreClusterCidrConflict() const;

                    /**
                     * 设置Whether to ignore CIDR and VPC route table conflicts, 0 means not to ignore, 1 means to ignore. The default is not to ignore.
                     * @param _ignoreClusterCidrConflict Whether to ignore CIDR and VPC route table conflicts, 0 means not to ignore, 1 means to ignore. The default is not to ignore.
                     * 
                     */
                    void SetIgnoreClusterCidrConflict(const int64_t& _ignoreClusterCidrConflict);

                    /**
                     * 判断参数 IgnoreClusterCidrConflict 是否已赋值
                     * @return IgnoreClusterCidrConflict 是否已赋值
                     * 
                     */
                    bool IgnoreClusterCidrConflictHasBeenSet() const;

                private:

                    /**
                     * Route table name, usually the cluster ID
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

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

                    /**
                     * Whether to ignore CIDR and VPC route table conflicts, 0 means not to ignore, 1 means to ignore. The default is not to ignore.
                     */
                    int64_t m_ignoreClusterCidrConflict;
                    bool m_ignoreClusterCidrConflictHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERROUTETABLEREQUEST_H_
