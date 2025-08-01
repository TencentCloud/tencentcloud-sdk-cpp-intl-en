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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTEMODIFY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTEMODIFY_H_

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
                * Modify route status of the VPN gateway
                */
                class VpnGatewayRouteModify : public AbstractModel
                {
                public:
                    VpnGatewayRouteModify();
                    ~VpnGatewayRouteModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Route ID of the VPN gateway
                     * @return RouteId Route ID of the VPN gateway
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置Route ID of the VPN gateway
                     * @param _routeId Route ID of the VPN gateway
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
                     * 获取Route status of the VPN gateway. Valid values: `ENABLE`, and `DISABLE`.
                     * @return Status Route status of the VPN gateway. Valid values: `ENABLE`, and `DISABLE`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Route status of the VPN gateway. Valid values: `ENABLE`, and `DISABLE`.
                     * @param _status Route status of the VPN gateway. Valid values: `ENABLE`, and `DISABLE`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Route ID of the VPN gateway
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * Route status of the VPN gateway. Valid values: `ENABLE`, and `DISABLE`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTEMODIFY_H_
