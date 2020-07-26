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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityPolicyDatabase.h>
#include <tencentcloud/vpc/v20170312/model/IKEOptionsSpecification.h>
#include <tencentcloud/vpc/v20170312/model/IPSECOptionsSpecification.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN tunnel object.
                */
                class VpnConnection : public AbstractModel
                {
                public:
                    VpnConnection();
                    ~VpnConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tunnel instance ID.
                     * @return VpnConnectionId Tunnel instance ID.
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置Tunnel instance ID.
                     * @param VpnConnectionId Tunnel instance ID.
                     */
                    void SetVpnConnectionId(const std::string& _vpnConnectionId);

                    /**
                     * 判断参数 VpnConnectionId 是否已赋值
                     * @return VpnConnectionId 是否已赋值
                     */
                    bool VpnConnectionIdHasBeenSet() const;

                    /**
                     * 获取Tunnel name.
                     * @return VpnConnectionName Tunnel name.
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置Tunnel name.
                     * @param VpnConnectionName Tunnel name.
                     */
                    void SetVpnConnectionName(const std::string& _vpnConnectionName);

                    /**
                     * 判断参数 VpnConnectionName 是否已赋值
                     * @return VpnConnectionName 是否已赋值
                     */
                    bool VpnConnectionNameHasBeenSet() const;

                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param VpcId VPC instance ID.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The ID of the VPN gateway instance.
                     * @return VpnGatewayId The ID of the VPN gateway instance.
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置The ID of the VPN gateway instance.
                     * @param VpnGatewayId The ID of the VPN gateway instance.
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取Customer gateway instance ID.
                     * @return CustomerGatewayId Customer gateway instance ID.
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置Customer gateway instance ID.
                     * @param CustomerGatewayId Customer gateway instance ID.
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                    /**
                     * 获取The pre-shared key.
                     * @return PreShareKey The pre-shared key.
                     */
                    std::string GetPreShareKey() const;

                    /**
                     * 设置The pre-shared key.
                     * @param PreShareKey The pre-shared key.
                     */
                    void SetPreShareKey(const std::string& _preShareKey);

                    /**
                     * 判断参数 PreShareKey 是否已赋值
                     * @return PreShareKey 是否已赋值
                     */
                    bool PreShareKeyHasBeenSet() const;

                    /**
                     * 获取Tunnel transmission protocol.
                     * @return VpnProto Tunnel transmission protocol.
                     */
                    std::string GetVpnProto() const;

                    /**
                     * 设置Tunnel transmission protocol.
                     * @param VpnProto Tunnel transmission protocol.
                     */
                    void SetVpnProto(const std::string& _vpnProto);

                    /**
                     * 判断参数 VpnProto 是否已赋值
                     * @return VpnProto 是否已赋值
                     */
                    bool VpnProtoHasBeenSet() const;

                    /**
                     * 获取Tunnel encryption protocol.
                     * @return EncryptProto Tunnel encryption protocol.
                     */
                    std::string GetEncryptProto() const;

                    /**
                     * 设置Tunnel encryption protocol.
                     * @param EncryptProto Tunnel encryption protocol.
                     */
                    void SetEncryptProto(const std::string& _encryptProto);

                    /**
                     * 判断参数 EncryptProto 是否已赋值
                     * @return EncryptProto 是否已赋值
                     */
                    bool EncryptProtoHasBeenSet() const;

                    /**
                     * 获取Route Type.
                     * @return RouteType Route Type.
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置Route Type.
                     * @param RouteType Route Type.
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param CreatedTime Creation Time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     * @return State Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     * @param State Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Connection status of the tunnel. AVAILABLE: Connected.
                     * @return NetStatus Connection status of the tunnel. AVAILABLE: Connected.
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置Connection status of the tunnel. AVAILABLE: Connected.
                     * @param NetStatus Connection status of the tunnel. AVAILABLE: Connected.
                     */
                    void SetNetStatus(const std::string& _netStatus);

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取SPD.
                     * @return SecurityPolicyDatabaseSet SPD.
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabaseSet() const;

                    /**
                     * 设置SPD.
                     * @param SecurityPolicyDatabaseSet SPD.
                     */
                    void SetSecurityPolicyDatabaseSet(const std::vector<SecurityPolicyDatabase>& _securityPolicyDatabaseSet);

                    /**
                     * 判断参数 SecurityPolicyDatabaseSet 是否已赋值
                     * @return SecurityPolicyDatabaseSet 是否已赋值
                     */
                    bool SecurityPolicyDatabaseSetHasBeenSet() const;

                    /**
                     * 获取IKE options.
                     * @return IKEOptionsSpecification IKE options.
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置IKE options.
                     * @param IKEOptionsSpecification IKE options.
                     */
                    void SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification);

                    /**
                     * 判断参数 IKEOptionsSpecification 是否已赋值
                     * @return IKEOptionsSpecification 是否已赋值
                     */
                    bool IKEOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取IPSEC options.
                     * @return IPSECOptionsSpecification IPSEC options.
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置IPSEC options.
                     * @param IPSECOptionsSpecification IPSEC options.
                     */
                    void SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification);

                    /**
                     * 判断参数 IPSECOptionsSpecification 是否已赋值
                     * @return IPSECOptionsSpecification 是否已赋值
                     */
                    bool IPSECOptionsSpecificationHasBeenSet() const;

                private:

                    /**
                     * Tunnel instance ID.
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * Tunnel name.
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The ID of the VPN gateway instance.
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * Customer gateway instance ID.
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * The pre-shared key.
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * Tunnel transmission protocol.
                     */
                    std::string m_vpnProto;
                    bool m_vpnProtoHasBeenSet;

                    /**
                     * Tunnel encryption protocol.
                     */
                    std::string m_encryptProto;
                    bool m_encryptProtoHasBeenSet;

                    /**
                     * Route Type.
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Connection status of the tunnel. AVAILABLE: Connected.
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                    /**
                     * SPD.
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabaseSet;
                    bool m_securityPolicyDatabaseSetHasBeenSet;

                    /**
                     * IKE options.
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * IPSEC options.
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_
