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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYREQUEST_H_

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
                * ModifyMultiPathGateway request structure.
                */
                class ModifyMultiPathGatewayRequest : public AbstractModel
                {
                public:
                    ModifyMultiPathGatewayRequest();
                    ~ModifyMultiPathGatewayRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Specifies the gateway ID.
                     * @return GatewayId Specifies the gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Specifies the gateway ID.
                     * @param _gatewayId Specifies the gateway ID.
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
                     * 获取Gateway name, up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     * @return GatewayName Gateway name, up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置Gateway name, up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     * @param _gatewayName Gateway name, up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取Gateway address, if GatewayType value is private (private gateway), you can fill in and modify it. When using this address, please ensure it has been entered into the Tencent cloud multi-channel security acceleration gateway system. if not entered, you need to submit a ticket or contact the architect to enter the gateway IP address into the Tencent cloud multi-channel security acceleration gateway system in advance before making API calls.
                     * @return GatewayIP Gateway address, if GatewayType value is private (private gateway), you can fill in and modify it. When using this address, please ensure it has been entered into the Tencent cloud multi-channel security acceleration gateway system. if not entered, you need to submit a ticket or contact the architect to enter the gateway IP address into the Tencent cloud multi-channel security acceleration gateway system in advance before making API calls.
                     * 
                     */
                    std::string GetGatewayIP() const;

                    /**
                     * 设置Gateway address, if GatewayType value is private (private gateway), you can fill in and modify it. When using this address, please ensure it has been entered into the Tencent cloud multi-channel security acceleration gateway system. if not entered, you need to submit a ticket or contact the architect to enter the gateway IP address into the Tencent cloud multi-channel security acceleration gateway system in advance before making API calls.
                     * @param _gatewayIP Gateway address, if GatewayType value is private (private gateway), you can fill in and modify it. When using this address, please ensure it has been entered into the Tencent cloud multi-channel security acceleration gateway system. if not entered, you need to submit a ticket or contact the architect to enter the gateway IP address into the Tencent cloud multi-channel security acceleration gateway system in advance before making API calls.
                     * 
                     */
                    void SetGatewayIP(const std::string& _gatewayIP);

                    /**
                     * 判断参数 GatewayIP 是否已赋值
                     * @return GatewayIP 是否已赋值
                     * 
                     */
                    bool GatewayIPHasBeenSet() const;

                    /**
                     * 获取Gateway port, range 1-65535 (excluding 8888), supports modifying GatewayType with a value of private gateway.
                     * @return GatewayPort Gateway port, range 1-65535 (excluding 8888), supports modifying GatewayType with a value of private gateway.
                     * 
                     */
                    int64_t GetGatewayPort() const;

                    /**
                     * 设置Gateway port, range 1-65535 (excluding 8888), supports modifying GatewayType with a value of private gateway.
                     * @param _gatewayPort Gateway port, range 1-65535 (excluding 8888), supports modifying GatewayType with a value of private gateway.
                     * 
                     */
                    void SetGatewayPort(const int64_t& _gatewayPort);

                    /**
                     * 判断参数 GatewayPort 是否已赋值
                     * @return GatewayPort 是否已赋值
                     * 
                     */
                    bool GatewayPortHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Specifies the gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway name, up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * Gateway address, if GatewayType value is private (private gateway), you can fill in and modify it. When using this address, please ensure it has been entered into the Tencent cloud multi-channel security acceleration gateway system. if not entered, you need to submit a ticket or contact the architect to enter the gateway IP address into the Tencent cloud multi-channel security acceleration gateway system in advance before making API calls.
                     */
                    std::string m_gatewayIP;
                    bool m_gatewayIPHasBeenSet;

                    /**
                     * Gateway port, range 1-65535 (excluding 8888), supports modifying GatewayType with a value of private gateway.
                     */
                    int64_t m_gatewayPort;
                    bool m_gatewayPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYREQUEST_H_
