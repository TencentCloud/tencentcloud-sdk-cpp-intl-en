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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ROUTEINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ROUTEINFO_H_

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
                * Object of cluster route
                */
                class RouteInfo : public AbstractModel
                {
                public:
                    RouteInfo();
                    ~RouteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Destination CIDR.
                     * @return DestinationCidrBlock Destination CIDR.
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置Destination CIDR.
                     * @param DestinationCidrBlock Destination CIDR.
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取Next hop address.
                     * @return GatewayIp Next hop address.
                     */
                    std::string GetGatewayIp() const;

                    /**
                     * 设置Next hop address.
                     * @param GatewayIp Next hop address.
                     */
                    void SetGatewayIp(const std::string& _gatewayIp);

                    /**
                     * 判断参数 GatewayIp 是否已赋值
                     * @return GatewayIp 是否已赋值
                     */
                    bool GatewayIpHasBeenSet() const;

                private:

                    /**
                     * Route table name.
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * Destination CIDR.
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * Next hop address.
                     */
                    std::string m_gatewayIp;
                    bool m_gatewayIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ROUTEINFO_H_
