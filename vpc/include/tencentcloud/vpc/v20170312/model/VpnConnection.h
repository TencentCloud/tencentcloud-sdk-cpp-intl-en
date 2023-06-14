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
#include <tencentcloud/vpc/v20170312/model/Tag.h>


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
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置Tunnel instance ID.
                     * @param _vpnConnectionId Tunnel instance ID.
                     * 
                     */
                    void SetVpnConnectionId(const std::string& _vpnConnectionId);

                    /**
                     * 判断参数 VpnConnectionId 是否已赋值
                     * @return VpnConnectionId 是否已赋值
                     * 
                     */
                    bool VpnConnectionIdHasBeenSet() const;

                    /**
                     * 获取Tunnel name.
                     * @return VpnConnectionName Tunnel name.
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置Tunnel name.
                     * @param _vpnConnectionName Tunnel name.
                     * 
                     */
                    void SetVpnConnectionName(const std::string& _vpnConnectionName);

                    /**
                     * 判断参数 VpnConnectionName 是否已赋值
                     * @return VpnConnectionName 是否已赋值
                     * 
                     */
                    bool VpnConnectionNameHasBeenSet() const;

                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param _vpcId VPC instance ID.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The ID of the VPN gateway instance.
                     * @return VpnGatewayId The ID of the VPN gateway instance.
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置The ID of the VPN gateway instance.
                     * @param _vpnGatewayId The ID of the VPN gateway instance.
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取Customer gateway instance ID.
                     * @return CustomerGatewayId Customer gateway instance ID.
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置Customer gateway instance ID.
                     * @param _customerGatewayId Customer gateway instance ID.
                     * 
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                    /**
                     * 获取The pre-shared key.
                     * @return PreShareKey The pre-shared key.
                     * 
                     */
                    std::string GetPreShareKey() const;

                    /**
                     * 设置The pre-shared key.
                     * @param _preShareKey The pre-shared key.
                     * 
                     */
                    void SetPreShareKey(const std::string& _preShareKey);

                    /**
                     * 判断参数 PreShareKey 是否已赋值
                     * @return PreShareKey 是否已赋值
                     * 
                     */
                    bool PreShareKeyHasBeenSet() const;

                    /**
                     * 获取Tunnel transmission protocol.
                     * @return VpnProto Tunnel transmission protocol.
                     * 
                     */
                    std::string GetVpnProto() const;

                    /**
                     * 设置Tunnel transmission protocol.
                     * @param _vpnProto Tunnel transmission protocol.
                     * 
                     */
                    void SetVpnProto(const std::string& _vpnProto);

                    /**
                     * 判断参数 VpnProto 是否已赋值
                     * @return VpnProto 是否已赋值
                     * 
                     */
                    bool VpnProtoHasBeenSet() const;

                    /**
                     * 获取Tunnel encryption protocol.
                     * @return EncryptProto Tunnel encryption protocol.
                     * 
                     */
                    std::string GetEncryptProto() const;

                    /**
                     * 设置Tunnel encryption protocol.
                     * @param _encryptProto Tunnel encryption protocol.
                     * 
                     */
                    void SetEncryptProto(const std::string& _encryptProto);

                    /**
                     * 判断参数 EncryptProto 是否已赋值
                     * @return EncryptProto 是否已赋值
                     * 
                     */
                    bool EncryptProtoHasBeenSet() const;

                    /**
                     * 获取Route Type.
                     * @return RouteType Route Type.
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置Route Type.
                     * @param _routeType Route Type.
                     * 
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     * 
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param _createdTime Creation Time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     * @return State Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     * @param _state Production status of the tunnel. PENDING: Creating; AVAILABLE: Running; DELETING: Deleting.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Connection status of the tunnel. AVAILABLE: Connected.
                     * @return NetStatus Connection status of the tunnel. AVAILABLE: Connected.
                     * 
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置Connection status of the tunnel. AVAILABLE: Connected.
                     * @param _netStatus Connection status of the tunnel. AVAILABLE: Connected.
                     * 
                     */
                    void SetNetStatus(const std::string& _netStatus);

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     * 
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取SPD.
                     * @return SecurityPolicyDatabaseSet SPD.
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabaseSet() const;

                    /**
                     * 设置SPD.
                     * @param _securityPolicyDatabaseSet SPD.
                     * 
                     */
                    void SetSecurityPolicyDatabaseSet(const std::vector<SecurityPolicyDatabase>& _securityPolicyDatabaseSet);

                    /**
                     * 判断参数 SecurityPolicyDatabaseSet 是否已赋值
                     * @return SecurityPolicyDatabaseSet 是否已赋值
                     * 
                     */
                    bool SecurityPolicyDatabaseSetHasBeenSet() const;

                    /**
                     * 获取IKE options.
                     * @return IKEOptionsSpecification IKE options.
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置IKE options.
                     * @param _iKEOptionsSpecification IKE options.
                     * 
                     */
                    void SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification);

                    /**
                     * 判断参数 IKEOptionsSpecification 是否已赋值
                     * @return IKEOptionsSpecification 是否已赋值
                     * 
                     */
                    bool IKEOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取IPSEC options.
                     * @return IPSECOptionsSpecification IPSEC options.
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置IPSEC options.
                     * @param _iPSECOptionsSpecification IPSEC options.
                     * 
                     */
                    void SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification);

                    /**
                     * 判断参数 IPSECOptionsSpecification 是否已赋值
                     * @return IPSECOptionsSpecification 是否已赋值
                     * 
                     */
                    bool IPSECOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取Whether the health check is supported.
                     * @return EnableHealthCheck Whether the health check is supported.
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置Whether the health check is supported.
                     * @param _enableHealthCheck Whether the health check is supported.
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取Local IP address for the health check
                     * @return HealthCheckLocalIp Local IP address for the health check
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 设置Local IP address for the health check
                     * @param _healthCheckLocalIp Local IP address for the health check
                     * 
                     */
                    void SetHealthCheckLocalIp(const std::string& _healthCheckLocalIp);

                    /**
                     * 判断参数 HealthCheckLocalIp 是否已赋值
                     * @return HealthCheckLocalIp 是否已赋值
                     * 
                     */
                    bool HealthCheckLocalIpHasBeenSet() const;

                    /**
                     * 获取Peer IP address for the health check
                     * @return HealthCheckRemoteIp Peer IP address for the health check
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 设置Peer IP address for the health check
                     * @param _healthCheckRemoteIp Peer IP address for the health check
                     * 
                     */
                    void SetHealthCheckRemoteIp(const std::string& _healthCheckRemoteIp);

                    /**
                     * 判断参数 HealthCheckRemoteIp 是否已赋值
                     * @return HealthCheckRemoteIp 是否已赋值
                     * 
                     */
                    bool HealthCheckRemoteIpHasBeenSet() const;

                    /**
                     * 获取Tunnel health check status. Valid values: AVAILABLE: healthy; UNAVAILABLE: unhealthy. This parameter will be returned only after health check is enabled.
                     * @return HealthCheckStatus Tunnel health check status. Valid values: AVAILABLE: healthy; UNAVAILABLE: unhealthy. This parameter will be returned only after health check is enabled.
                     * 
                     */
                    std::string GetHealthCheckStatus() const;

                    /**
                     * 设置Tunnel health check status. Valid values: AVAILABLE: healthy; UNAVAILABLE: unhealthy. This parameter will be returned only after health check is enabled.
                     * @param _healthCheckStatus Tunnel health check status. Valid values: AVAILABLE: healthy; UNAVAILABLE: unhealthy. This parameter will be returned only after health check is enabled.
                     * 
                     */
                    void SetHealthCheckStatus(const std::string& _healthCheckStatus);

                    /**
                     * 判断参数 HealthCheckStatus 是否已赋值
                     * @return HealthCheckStatus 是否已赋值
                     * 
                     */
                    bool HealthCheckStatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable DPD. Values: `0` (Disable) and `1` (Enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DpdEnable Whether to enable DPD. Values: `0` (Disable) and `1` (Enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDpdEnable() const;

                    /**
                     * 设置Whether to enable DPD. Values: `0` (Disable) and `1` (Enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dpdEnable Whether to enable DPD. Values: `0` (Disable) and `1` (Enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDpdEnable(const int64_t& _dpdEnable);

                    /**
                     * 判断参数 DpdEnable 是否已赋值
                     * @return DpdEnable 是否已赋值
                     * 
                     */
                    bool DpdEnableHasBeenSet() const;

                    /**
                     * 获取DPD timeout period. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DpdTimeout DPD timeout period. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDpdTimeout() const;

                    /**
                     * 设置DPD timeout period. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dpdTimeout DPD timeout period. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDpdTimeout(const std::string& _dpdTimeout);

                    /**
                     * 判断参数 DpdTimeout 是否已赋值
                     * @return DpdTimeout 是否已赋值
                     * 
                     */
                    bool DpdTimeoutHasBeenSet() const;

                    /**
                     * 获取The action to take in case of DPD timeout. Values: `clear` (Disconnect) and `restart` (retry). This parameter only takes effect when `DpdEnable` is set to `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DpdAction The action to take in case of DPD timeout. Values: `clear` (Disconnect) and `restart` (retry). This parameter only takes effect when `DpdEnable` is set to `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDpdAction() const;

                    /**
                     * 设置The action to take in case of DPD timeout. Values: `clear` (Disconnect) and `restart` (retry). This parameter only takes effect when `DpdEnable` is set to `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dpdAction The action to take in case of DPD timeout. Values: `clear` (Disconnect) and `restart` (retry). This parameter only takes effect when `DpdEnable` is set to `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDpdAction(const std::string& _dpdAction);

                    /**
                     * 判断参数 DpdAction 是否已赋值
                     * @return DpdAction 是否已赋值
                     * 
                     */
                    bool DpdActionHasBeenSet() const;

                    /**
                     * 获取Array of tag key-value pairs
                     * @return TagSet Array of tag key-value pairs
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Array of tag key-value pairs
                     * @param _tagSet Array of tag key-value pairs
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Negotiation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NegotiationType Negotiation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNegotiationType() const;

                    /**
                     * 设置Negotiation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _negotiationType Negotiation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNegotiationType(const std::string& _negotiationType);

                    /**
                     * 判断参数 NegotiationType 是否已赋值
                     * @return NegotiationType 是否已赋值
                     * 
                     */
                    bool NegotiationTypeHasBeenSet() const;

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

                    /**
                     * Whether the health check is supported.
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * Local IP address for the health check
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * Peer IP address for the health check
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                    /**
                     * Tunnel health check status. Valid values: AVAILABLE: healthy; UNAVAILABLE: unhealthy. This parameter will be returned only after health check is enabled.
                     */
                    std::string m_healthCheckStatus;
                    bool m_healthCheckStatusHasBeenSet;

                    /**
                     * Whether to enable DPD. Values: `0` (Disable) and `1` (Enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dpdEnable;
                    bool m_dpdEnableHasBeenSet;

                    /**
                     * DPD timeout period. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dpdTimeout;
                    bool m_dpdTimeoutHasBeenSet;

                    /**
                     * The action to take in case of DPD timeout. Values: `clear` (Disconnect) and `restart` (retry). This parameter only takes effect when `DpdEnable` is set to `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dpdAction;
                    bool m_dpdActionHasBeenSet;

                    /**
                     * Array of tag key-value pairs
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Negotiation type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_negotiationType;
                    bool m_negotiationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_
