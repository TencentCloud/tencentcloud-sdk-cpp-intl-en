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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTETABLE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RouteTableAssociation.h>
#include <tencentcloud/vpc/v20170312/model/Route.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/CidrForCcn.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Route table object
                */
                class RouteTable : public AbstractModel
                {
                public:
                    RouteTable();
                    ~RouteTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param VpcId VPC instance ID.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The route table instance ID, such as `rtb-azd4dt1c`.
                     * @return RouteTableId The route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置The route table instance ID, such as `rtb-azd4dt1c`.
                     * @param RouteTableId The route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取Route table name.
                     * @return RouteTableName Route table name.
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置Route table name.
                     * @param RouteTableName Route table name.
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取The association relationships of the route table.
                     * @return AssociationSet The association relationships of the route table.
                     */
                    std::vector<RouteTableAssociation> GetAssociationSet() const;

                    /**
                     * 设置The association relationships of the route table.
                     * @param AssociationSet The association relationships of the route table.
                     */
                    void SetAssociationSet(const std::vector<RouteTableAssociation>& _associationSet);

                    /**
                     * 判断参数 AssociationSet 是否已赋值
                     * @return AssociationSet 是否已赋值
                     */
                    bool AssociationSetHasBeenSet() const;

                    /**
                     * 获取IPv4 routing policy set.
                     * @return RouteSet IPv4 routing policy set.
                     */
                    std::vector<Route> GetRouteSet() const;

                    /**
                     * 设置IPv4 routing policy set.
                     * @param RouteSet IPv4 routing policy set.
                     */
                    void SetRouteSet(const std::vector<Route>& _routeSet);

                    /**
                     * 判断参数 RouteSet 是否已赋值
                     * @return RouteSet 是否已赋值
                     */
                    bool RouteSetHasBeenSet() const;

                    /**
                     * 获取Whether it is the default route table.
                     * @return Main Whether it is the default route table.
                     */
                    bool GetMain() const;

                    /**
                     * 设置Whether it is the default route table.
                     * @param Main Whether it is the default route table.
                     */
                    void SetMain(const bool& _main);

                    /**
                     * 判断参数 Main 是否已赋值
                     * @return Main 是否已赋值
                     */
                    bool MainHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param CreatedTime Creation Time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Tag key-value pairs.
                     * @return TagSet Tag key-value pairs.
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs.
                     * @param TagSet Tag key-value pairs.
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Whether the local route is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LocalCidrForCcn Whether the local route is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CidrForCcn> GetLocalCidrForCcn() const;

                    /**
                     * 设置Whether the local route is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LocalCidrForCcn Whether the local route is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLocalCidrForCcn(const std::vector<CidrForCcn>& _localCidrForCcn);

                    /**
                     * 判断参数 LocalCidrForCcn 是否已赋值
                     * @return LocalCidrForCcn 是否已赋值
                     */
                    bool LocalCidrForCcnHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Route table name.
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * The association relationships of the route table.
                     */
                    std::vector<RouteTableAssociation> m_associationSet;
                    bool m_associationSetHasBeenSet;

                    /**
                     * IPv4 routing policy set.
                     */
                    std::vector<Route> m_routeSet;
                    bool m_routeSetHasBeenSet;

                    /**
                     * Whether it is the default route table.
                     */
                    bool m_main;
                    bool m_mainHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Tag key-value pairs.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Whether the local route is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CidrForCcn> m_localCidrForCcn;
                    bool m_localCidrForCcnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTETABLE_H_
