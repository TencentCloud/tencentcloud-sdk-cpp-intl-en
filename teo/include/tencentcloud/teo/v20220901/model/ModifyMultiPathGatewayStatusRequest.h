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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyMultiPathGatewayStatus request structure.
                */
                class ModifyMultiPathGatewayStatusRequest : public AbstractModel
                {
                public:
                    ModifyMultiPathGatewayStatusRequest();
                    ~ModifyMultiPathGatewayStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID.
                     * @return GatewayId Gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID.
                     * @param _gatewayId Gateway ID.
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
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Modifies the enabled/disabled status of the gateway. valid values: <li> offline: disabled;</li> <li> online: enabled.</li>.
                     * @return GatewayStatus Modifies the enabled/disabled status of the gateway. valid values: <li> offline: disabled;</li> <li> online: enabled.</li>.
                     * 
                     */
                    std::string GetGatewayStatus() const;

                    /**
                     * 设置Modifies the enabled/disabled status of the gateway. valid values: <li> offline: disabled;</li> <li> online: enabled.</li>.
                     * @param _gatewayStatus Modifies the enabled/disabled status of the gateway. valid values: <li> offline: disabled;</li> <li> online: enabled.</li>.
                     * 
                     */
                    void SetGatewayStatus(const std::string& _gatewayStatus);

                    /**
                     * 判断参数 GatewayStatus 是否已赋值
                     * @return GatewayStatus 是否已赋值
                     * 
                     */
                    bool GatewayStatusHasBeenSet() const;

                private:

                    /**
                     * Gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Modifies the enabled/disabled status of the gateway. valid values: <li> offline: disabled;</li> <li> online: enabled.</li>.
                     */
                    std::string m_gatewayStatus;
                    bool m_gatewayStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYSTATUSREQUEST_H_
