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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ROUTETABLECONFLICT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ROUTETABLECONFLICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Object of route table conflict
                */
                class RouteTableConflict : public AbstractModel
                {
                public:
                    RouteTableConflict();
                    ~RouteTableConflict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Route table type.
                     * @return RouteTableType Route table type.
                     * 
                     */
                    std::string GetRouteTableType() const;

                    /**
                     * 设置Route table type.
                     * @param _routeTableType Route table type.
                     * 
                     */
                    void SetRouteTableType(const std::string& _routeTableType);

                    /**
                     * 判断参数 RouteTableType 是否已赋值
                     * @return RouteTableType 是否已赋值
                     * 
                     */
                    bool RouteTableTypeHasBeenSet() const;

                    /**
                     * 获取Route table CIDR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RouteTableCidrBlock Route table CIDR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRouteTableCidrBlock() const;

                    /**
                     * 设置Route table CIDR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _routeTableCidrBlock Route table CIDR.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Route table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RouteTableName Route table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置Route table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _routeTableName Route table name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Route table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RouteTableId Route table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _routeTableId Route table ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Route table type.
                     */
                    std::string m_routeTableType;
                    bool m_routeTableTypeHasBeenSet;

                    /**
                     * Route table CIDR.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_routeTableCidrBlock;
                    bool m_routeTableCidrBlockHasBeenSet;

                    /**
                     * Route table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * Route table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ROUTETABLECONFLICT_H_
