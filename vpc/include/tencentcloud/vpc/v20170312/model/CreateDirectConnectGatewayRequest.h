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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYREQUEST_H_

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
                * CreateDirectConnectGateway request structure.
                */
                class CreateDirectConnectGatewayRequest : public AbstractModel
                {
                public:
                    CreateDirectConnectGatewayRequest();
                    ~CreateDirectConnectGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The name of the direct connect gateway.
                     * @return DirectConnectGatewayName The name of the direct connect gateway.
                     * 
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置The name of the direct connect gateway.
                     * @param _directConnectGatewayName The name of the direct connect gateway.
                     * 
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取The type of the associated network. Valid values:
<li>VPC</li>
<li>CCN</li>
                     * @return NetworkType The type of the associated network. Valid values:
<li>VPC</li>
<li>CCN</li>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置The type of the associated network. Valid values:
<li>VPC</li>
<li>CCN</li>
                     * @param _networkType The type of the associated network. Valid values:
<li>VPC</li>
<li>CCN</li>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<li>When the NetworkType is VPC, this value is the VPC instance ID</li>
<li>When the NetworkType is CCN, this value is the CCN instance ID</li>
                     * @return NetworkInstanceId <li>When the NetworkType is VPC, this value is the VPC instance ID</li>
<li>When the NetworkType is CCN, this value is the CCN instance ID</li>
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置<li>When the NetworkType is VPC, this value is the VPC instance ID</li>
<li>When the NetworkType is CCN, this value is the CCN instance ID</li>
                     * @param _networkInstanceId <li>When the NetworkType is VPC, this value is the VPC instance ID</li>
<li>When the NetworkType is CCN, this value is the CCN instance ID</li>
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取The type of the gateway. Valid values:
<li>NORMAL - (Default) Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>NAT gateway supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     * @return GatewayType The type of the gateway. Valid values:
<li>NORMAL - (Default) Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>NAT gateway supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置The type of the gateway. Valid values:
<li>NORMAL - (Default) Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>NAT gateway supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     * @param _gatewayType The type of the gateway. Valid values:
<li>NORMAL - (Default) Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>NAT gateway supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
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
                     * 获取CCN route publishing method. Valid values: `standard` and `exquisite`. This parameter is only valid for the CCN direct connect gateway.
                     * @return ModeType CCN route publishing method. Valid values: `standard` and `exquisite`. This parameter is only valid for the CCN direct connect gateway.
                     * 
                     */
                    std::string GetModeType() const;

                    /**
                     * 设置CCN route publishing method. Valid values: `standard` and `exquisite`. This parameter is only valid for the CCN direct connect gateway.
                     * @param _modeType CCN route publishing method. Valid values: `standard` and `exquisite`. This parameter is only valid for the CCN direct connect gateway.
                     * 
                     */
                    void SetModeType(const std::string& _modeType);

                    /**
                     * 判断参数 ModeType 是否已赋值
                     * @return ModeType 是否已赋值
                     * 
                     */
                    bool ModeTypeHasBeenSet() const;

                    /**
                     * 获取Availability zone where the direct connect gateway resides.
                     * @return Zone Availability zone where the direct connect gateway resides.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone where the direct connect gateway resides.
                     * @param _zone Availability zone where the direct connect gateway resides.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取ID of DC highly available placement group
                     * @return HaZoneGroupId ID of DC highly available placement group
                     * 
                     */
                    std::string GetHaZoneGroupId() const;

                    /**
                     * 设置ID of DC highly available placement group
                     * @param _haZoneGroupId ID of DC highly available placement group
                     * 
                     */
                    void SetHaZoneGroupId(const std::string& _haZoneGroupId);

                    /**
                     * 判断参数 HaZoneGroupId 是否已赋值
                     * @return HaZoneGroupId 是否已赋值
                     * 
                     */
                    bool HaZoneGroupIdHasBeenSet() const;

                private:

                    /**
                     * The name of the direct connect gateway.
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * The type of the associated network. Valid values:
<li>VPC</li>
<li>CCN</li>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <li>When the NetworkType is VPC, this value is the VPC instance ID</li>
<li>When the NetworkType is CCN, this value is the CCN instance ID</li>
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * The type of the gateway. Valid values:
<li>NORMAL - (Default) Standard type. Note: CCN only supports the standard type</li>
<li>NAT - NAT type</li>NAT gateway supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * CCN route publishing method. Valid values: `standard` and `exquisite`. This parameter is only valid for the CCN direct connect gateway.
                     */
                    std::string m_modeType;
                    bool m_modeTypeHasBeenSet;

                    /**
                     * Availability zone where the direct connect gateway resides.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * ID of DC highly available placement group
                     */
                    std::string m_haZoneGroupId;
                    bool m_haZoneGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYREQUEST_H_
