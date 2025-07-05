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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATDIRECTCONNECTGATEWAYROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATDIRECTCONNECTGATEWAYROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Query the returned object of a NAT route
                */
                class NatDirectConnectGatewayRoute : public AbstractModel
                {
                public:
                    NatDirectConnectGatewayRoute();
                    ~NatDirectConnectGatewayRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The `IPv4` `CIDR` of the subnet.
                     * @return DestinationCidrBlock The `IPv4` `CIDR` of the subnet.
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置The `IPv4` `CIDR` of the subnet.
                     * @param _destinationCidrBlock The `IPv4` `CIDR` of the subnet.
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取The type of the next-hop gateway. Supported types:
`DIRECTCONNECT`: Direct connect gateway
                     * @return GatewayType The type of the next-hop gateway. Supported types:
`DIRECTCONNECT`: Direct connect gateway
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置The type of the next-hop gateway. Supported types:
`DIRECTCONNECT`: Direct connect gateway
                     * @param _gatewayType The type of the next-hop gateway. Supported types:
`DIRECTCONNECT`: Direct connect gateway
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取ID of the next-hop gateway
                     * @return GatewayId ID of the next-hop gateway
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置ID of the next-hop gateway
                     * @param _gatewayId ID of the next-hop gateway
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取The creation time of the route
                     * @return CreateTime The creation time of the route
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time of the route
                     * @param _createTime The creation time of the route
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The update time of the route
                     * @return UpdateTime The update time of the route
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time of the route
                     * @param _updateTime The update time of the route
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * The `IPv4` `CIDR` of the subnet.
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * The type of the next-hop gateway. Supported types:
`DIRECTCONNECT`: Direct connect gateway
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * ID of the next-hop gateway
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * The creation time of the route
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The update time of the route
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATDIRECTCONNECTGATEWAYROUTE_H_
