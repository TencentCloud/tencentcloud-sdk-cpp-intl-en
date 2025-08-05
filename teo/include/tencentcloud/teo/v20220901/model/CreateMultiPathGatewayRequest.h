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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYREQUEST_H_

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
                * CreateMultiPathGateway request structure.
                */
                class CreateMultiPathGatewayRequest : public AbstractModel
                {
                public:
                    CreateMultiPathGatewayRequest();
                    ~CreateMultiPathGatewayRequest() = default;
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
                     * 获取Gateway type. valid values:
<Li> Cloud: cloud gateway, a gateway created and managed by Tencent cloud;</li>
<Li>Private: private gateway, a user-deployed private gateway.</li>
                     * @return GatewayType Gateway type. valid values:
<Li> Cloud: cloud gateway, a gateway created and managed by Tencent cloud;</li>
<Li>Private: private gateway, a user-deployed private gateway.</li>
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Gateway type. valid values:
<Li> Cloud: cloud gateway, a gateway created and managed by Tencent cloud;</li>
<Li>Private: private gateway, a user-deployed private gateway.</li>
                     * @param _gatewayType Gateway type. valid values:
<Li> Cloud: cloud gateway, a gateway created and managed by Tencent cloud;</li>
<Li>Private: private gateway, a user-deployed private gateway.</li>
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
                     * 获取Gateway name: up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     * @return GatewayName Gateway name: up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置Gateway name: up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     * @param _gatewayName Gateway name: up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
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
                     * 获取Gateway port: value range: 1-65535 (excluding 8888).
                     * @return GatewayPort Gateway port: value range: 1-65535 (excluding 8888).
                     * 
                     */
                    int64_t GetGatewayPort() const;

                    /**
                     * 设置Gateway port: value range: 1-65535 (excluding 8888).
                     * @param _gatewayPort Gateway port: value range: 1-65535 (excluding 8888).
                     * 
                     */
                    void SetGatewayPort(const int64_t& _gatewayPort);

                    /**
                     * 判断参数 GatewayPort 是否已赋值
                     * @return GatewayPort 是否已赋值
                     * 
                     */
                    bool GatewayPortHasBeenSet() const;

                    /**
                     * 获取Gateway region: GatewayType value is cloud (cloud gateway). required. RegionId list can be obtained from the DescribeMultiPathGatewayRegions API.
                     * @return RegionId Gateway region: GatewayType value is cloud (cloud gateway). required. RegionId list can be obtained from the DescribeMultiPathGatewayRegions API.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Gateway region: GatewayType value is cloud (cloud gateway). required. RegionId list can be obtained from the DescribeMultiPathGatewayRegions API.
                     * @param _regionId Gateway region: GatewayType value is cloud (cloud gateway). required. RegionId list can be obtained from the DescribeMultiPathGatewayRegions API.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Gateway address (required when GatewayType=private):
Before using this address, ensure it has been registered in the Tencent Cloud Multi-Path Security Acceleration Gateway system. 
If not registered, submit a support ticket or contact your architect to pre-register the gateway IP address in the system before API invocation.
                     * @return GatewayIP Gateway address (required when GatewayType=private):
Before using this address, ensure it has been registered in the Tencent Cloud Multi-Path Security Acceleration Gateway system. 
If not registered, submit a support ticket or contact your architect to pre-register the gateway IP address in the system before API invocation.
                     * 
                     */
                    std::string GetGatewayIP() const;

                    /**
                     * 设置Gateway address (required when GatewayType=private):
Before using this address, ensure it has been registered in the Tencent Cloud Multi-Path Security Acceleration Gateway system. 
If not registered, submit a support ticket or contact your architect to pre-register the gateway IP address in the system before API invocation.
                     * @param _gatewayIP Gateway address (required when GatewayType=private):
Before using this address, ensure it has been registered in the Tencent Cloud Multi-Path Security Acceleration Gateway system. 
If not registered, submit a support ticket or contact your architect to pre-register the gateway IP address in the system before API invocation.
                     * 
                     */
                    void SetGatewayIP(const std::string& _gatewayIP);

                    /**
                     * 判断参数 GatewayIP 是否已赋值
                     * @return GatewayIP 是否已赋值
                     * 
                     */
                    bool GatewayIPHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Gateway type. valid values:
<Li> Cloud: cloud gateway, a gateway created and managed by Tencent cloud;</li>
<Li>Private: private gateway, a user-deployed private gateway.</li>
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Gateway name: up to 16 characters, allowed characters (a-z, A-Z, 0-9, -, _).
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * Gateway port: value range: 1-65535 (excluding 8888).
                     */
                    int64_t m_gatewayPort;
                    bool m_gatewayPortHasBeenSet;

                    /**
                     * Gateway region: GatewayType value is cloud (cloud gateway). required. RegionId list can be obtained from the DescribeMultiPathGatewayRegions API.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Gateway address (required when GatewayType=private):
Before using this address, ensure it has been registered in the Tencent Cloud Multi-Path Security Acceleration Gateway system. 
If not registered, submit a support ticket or contact your architect to pre-register the gateway IP address in the system before API invocation.
                     */
                    std::string m_gatewayIP;
                    bool m_gatewayIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYREQUEST_H_
