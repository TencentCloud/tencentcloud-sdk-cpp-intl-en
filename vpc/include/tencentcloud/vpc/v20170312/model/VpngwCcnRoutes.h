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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGWCCNROUTES_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGWCCNROUTES_H_

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
                * Information on VPN gateway-based CCN routes.
                */
                class VpngwCcnRoutes : public AbstractModel
                {
                public:
                    VpngwCcnRoutes();
                    ~VpngwCcnRoutes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Route ID
                     * @return RouteId Route ID
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置Route ID
                     * @param _routeId Route ID
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取Enable the route or not
ENABLE: enable the route
DISABLE: do not enable the route
                     * @return Status Enable the route or not
ENABLE: enable the route
DISABLE: do not enable the route
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Enable the route or not
ENABLE: enable the route
DISABLE: do not enable the route
                     * @param _status Enable the route or not
ENABLE: enable the route
DISABLE: do not enable the route
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Route CIDR block
                     * @return DestinationCidrBlock Route CIDR block
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置Route CIDR block
                     * @param _destinationCidrBlock Route CIDR block
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                private:

                    /**
                     * Route ID
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * Enable the route or not
ENABLE: enable the route
DISABLE: do not enable the route
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Route CIDR block
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGWCCNROUTES_H_
