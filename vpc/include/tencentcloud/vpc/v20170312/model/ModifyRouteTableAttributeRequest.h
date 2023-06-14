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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEATTRIBUTEREQUEST_H_

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
                * ModifyRouteTableAttribute request structure.
                */
                class ModifyRouteTableAttributeRequest : public AbstractModel
                {
                public:
                    ModifyRouteTableAttributeRequest();
                    ~ModifyRouteTableAttributeRequest() = default;
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
                     * 获取Route table name.
                     * @return RouteTableName Route table name.
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置Route table name.
                     * @param _routeTableName Route table name.
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                private:

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEATTRIBUTEREQUEST_H_
