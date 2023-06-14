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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ROUTETABLE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ROUTETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/RouteTableAssociation.h>
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
                * Route table
                */
                class RouteTable : public AbstractModel
                {
                public:
                    RouteTable();
                    ~RouteTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC instance ID
                     * @return VpcId VPC instance ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID
                     * @param _vpcId VPC instance ID
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
                     * 获取Route table instance ID
                     * @return RouteTableId Route table instance ID
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table instance ID
                     * @param _routeTableId Route table instance ID
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
                     * 获取Route table name
                     * @return RouteTableName Route table name
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置Route table name
                     * @param _routeTableName Route table name
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
                     * 获取Association relationships of the route table
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AssociationSet Association relationships of the route table
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RouteTableAssociation> GetAssociationSet() const;

                    /**
                     * 设置Association relationships of the route table
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _associationSet Association relationships of the route table
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssociationSet(const std::vector<RouteTableAssociation>& _associationSet);

                    /**
                     * 判断参数 AssociationSet 是否已赋值
                     * @return AssociationSet 是否已赋值
                     * 
                     */
                    bool AssociationSetHasBeenSet() const;

                    /**
                     * 获取IPv4 routing policy set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RouteSet IPv4 routing policy set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Route> GetRouteSet() const;

                    /**
                     * 设置IPv4 routing policy set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _routeSet IPv4 routing policy set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRouteSet(const std::vector<Route>& _routeSet);

                    /**
                     * 判断参数 RouteSet 是否已赋值
                     * @return RouteSet 是否已赋值
                     * 
                     */
                    bool RouteSetHasBeenSet() const;

                    /**
                     * 获取Whether it is the default route table
                     * @return Main Whether it is the default route table
                     * 
                     */
                    bool GetMain() const;

                    /**
                     * 设置Whether it is the default route table
                     * @param _main Whether it is the default route table
                     * 
                     */
                    void SetMain(const bool& _main);

                    /**
                     * 判断参数 Main 是否已赋值
                     * @return Main 是否已赋值
                     * 
                     */
                    bool MainHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedTime Creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
                     * @param _createdTime Creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Route table instance ID
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Route table name
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * Association relationships of the route table
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RouteTableAssociation> m_associationSet;
                    bool m_associationSetHasBeenSet;

                    /**
                     * IPv4 routing policy set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Route> m_routeSet;
                    bool m_routeSetHasBeenSet;

                    /**
                     * Whether it is the default route table
                     */
                    bool m_main;
                    bool m_mainHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ROUTETABLE_H_
