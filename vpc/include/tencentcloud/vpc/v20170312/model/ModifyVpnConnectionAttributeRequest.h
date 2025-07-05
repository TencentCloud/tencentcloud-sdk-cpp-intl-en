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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyVpnConnectionAttribute request structure.
                */
                class ModifyVpnConnectionAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpnConnectionAttributeRequest();
                    ~ModifyVpnConnectionAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     * @return VpnConnectionId The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     * @param _vpnConnectionId The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
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
                     * 获取VPN tunnel can be named freely, but the maximum length is 60 characters.
                     * @return VpnConnectionName VPN tunnel can be named freely, but the maximum length is 60 characters.
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置VPN tunnel can be named freely, but the maximum length is 60 characters.
                     * @param _vpnConnectionName VPN tunnel can be named freely, but the maximum length is 60 characters.
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
                     * 获取SPD policy group. Taking {"10.0.0.5/24":["172.123.10.5/16"]} as an example, 10.0.0.5/24 is the VPC private IP range, and 172.123.10.5/16 is the IDC IP range. The user specifies the IP range in the VPC that can communicate with the IP range in the IDC.
                     * @return SecurityPolicyDatabases SPD policy group. Taking {"10.0.0.5/24":["172.123.10.5/16"]} as an example, 10.0.0.5/24 is the VPC private IP range, and 172.123.10.5/16 is the IDC IP range. The user specifies the IP range in the VPC that can communicate with the IP range in the IDC.
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabases() const;

                    /**
                     * 设置SPD policy group. Taking {"10.0.0.5/24":["172.123.10.5/16"]} as an example, 10.0.0.5/24 is the VPC private IP range, and 172.123.10.5/16 is the IDC IP range. The user specifies the IP range in the VPC that can communicate with the IP range in the IDC.
                     * @param _securityPolicyDatabases SPD policy group. Taking {"10.0.0.5/24":["172.123.10.5/16"]} as an example, 10.0.0.5/24 is the VPC private IP range, and 172.123.10.5/16 is the IDC IP range. The user specifies the IP range in the VPC that can communicate with the IP range in the IDC.
                     * 
                     */
                    void SetSecurityPolicyDatabases(const std::vector<SecurityPolicyDatabase>& _securityPolicyDatabases);

                    /**
                     * 判断参数 SecurityPolicyDatabases 是否已赋值
                     * @return SecurityPolicyDatabases 是否已赋值
                     * 
                     */
                    bool SecurityPolicyDatabasesHasBeenSet() const;

                    /**
                     * 获取IKE (Internet Key Exchange) configuration. IKE comes with a self-protection mechanism. The network security protocol is configured by the user.
                     * @return IKEOptionsSpecification IKE (Internet Key Exchange) configuration. IKE comes with a self-protection mechanism. The network security protocol is configured by the user.
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置IKE (Internet Key Exchange) configuration. IKE comes with a self-protection mechanism. The network security protocol is configured by the user.
                     * @param _iKEOptionsSpecification IKE (Internet Key Exchange) configuration. IKE comes with a self-protection mechanism. The network security protocol is configured by the user.
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
                     * 获取IPSec configuration. The IPSec secure session configuration is provided by Tencent Cloud.
                     * @return IPSECOptionsSpecification IPSec configuration. The IPSec secure session configuration is provided by Tencent Cloud.
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置IPSec configuration. The IPSec secure session configuration is provided by Tencent Cloud.
                     * @param _iPSECOptionsSpecification IPSec configuration. The IPSec secure session configuration is provided by Tencent Cloud.
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
                     * 获取Whether to enable the tunnel health check. The default value is `False`.
                     * @return EnableHealthCheck Whether to enable the tunnel health check. The default value is `False`.
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置Whether to enable the tunnel health check. The default value is `False`.
                     * @param _enableHealthCheck Whether to enable the tunnel health check. The default value is `False`.
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
                     * 获取Local IP address for the tunnel health check
                     * @return HealthCheckLocalIp Local IP address for the tunnel health check
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 设置Local IP address for the tunnel health check
                     * @param _healthCheckLocalIp Local IP address for the tunnel health check
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
                     * 获取Peer IP address for the tunnel health check
                     * @return HealthCheckRemoteIp Peer IP address for the tunnel health check
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 设置Peer IP address for the tunnel health check
                     * @param _healthCheckRemoteIp Peer IP address for the tunnel health check
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
                     * 获取Negotiation type. Valid values: `active` (default value), `passive` and `flowTrigger`.
                     * @return NegotiationType Negotiation type. Valid values: `active` (default value), `passive` and `flowTrigger`.
                     * 
                     */
                    std::string GetNegotiationType() const;

                    /**
                     * 设置Negotiation type. Valid values: `active` (default value), `passive` and `flowTrigger`.
                     * @param _negotiationType Negotiation type. Valid values: `active` (default value), `passive` and `flowTrigger`.
                     * 
                     */
                    void SetNegotiationType(const std::string& _negotiationType);

                    /**
                     * 判断参数 NegotiationType 是否已赋值
                     * @return NegotiationType 是否已赋值
                     * 
                     */
                    bool NegotiationTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable DPD. Valid values: `0` (disable) and `1` (enable)
                     * @return DpdEnable Specifies whether to enable DPD. Valid values: `0` (disable) and `1` (enable)
                     * 
                     */
                    int64_t GetDpdEnable() const;

                    /**
                     * 设置Specifies whether to enable DPD. Valid values: `0` (disable) and `1` (enable)
                     * @param _dpdEnable Specifies whether to enable DPD. Valid values: `0` (disable) and `1` (enable)
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
                     * 获取DPD timeout period. Default: 30; unit: second. If the request is not responded within this period, the peer end is considered not exists. This parameter is valid when the value of `DpdEnable` is 1. 
                     * @return DpdTimeout DPD timeout period. Default: 30; unit: second. If the request is not responded within this period, the peer end is considered not exists. This parameter is valid when the value of `DpdEnable` is 1. 
                     * 
                     */
                    std::string GetDpdTimeout() const;

                    /**
                     * 设置DPD timeout period. Default: 30; unit: second. If the request is not responded within this period, the peer end is considered not exists. This parameter is valid when the value of `DpdEnable` is 1. 
                     * @param _dpdTimeout DPD timeout period. Default: 30; unit: second. If the request is not responded within this period, the peer end is considered not exists. This parameter is valid when the value of `DpdEnable` is 1. 
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
                     * 获取The action after DPD timeout. Valid values: `clear` (disconnect) and `restart` (try again). It’s valid when `DpdEnable` is `1`. 
                     * @return DpdAction The action after DPD timeout. Valid values: `clear` (disconnect) and `restart` (try again). It’s valid when `DpdEnable` is `1`. 
                     * 
                     */
                    std::string GetDpdAction() const;

                    /**
                     * 设置The action after DPD timeout. Valid values: `clear` (disconnect) and `restart` (try again). It’s valid when `DpdEnable` is `1`. 
                     * @param _dpdAction The action after DPD timeout. Valid values: `clear` (disconnect) and `restart` (try again). It’s valid when `DpdEnable` is `1`. 
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
                     * 获取Peer gateway ID. You can update tunnels of V4.0 and later gateways.
                     * @return CustomerGatewayId Peer gateway ID. You can update tunnels of V4.0 and later gateways.
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置Peer gateway ID. You can update tunnels of V4.0 and later gateways.
                     * @param _customerGatewayId Peer gateway ID. You can update tunnels of V4.0 and later gateways.
                     * 
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * VPN tunnel can be named freely, but the maximum length is 60 characters.
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * The pre-shared key.
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * SPD policy group. Taking {"10.0.0.5/24":["172.123.10.5/16"]} as an example, 10.0.0.5/24 is the VPC private IP range, and 172.123.10.5/16 is the IDC IP range. The user specifies the IP range in the VPC that can communicate with the IP range in the IDC.
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabases;
                    bool m_securityPolicyDatabasesHasBeenSet;

                    /**
                     * IKE (Internet Key Exchange) configuration. IKE comes with a self-protection mechanism. The network security protocol is configured by the user.
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * IPSec configuration. The IPSec secure session configuration is provided by Tencent Cloud.
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                    /**
                     * Whether to enable the tunnel health check. The default value is `False`.
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * Local IP address for the tunnel health check
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * Peer IP address for the tunnel health check
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                    /**
                     * Negotiation type. Valid values: `active` (default value), `passive` and `flowTrigger`.
                     */
                    std::string m_negotiationType;
                    bool m_negotiationTypeHasBeenSet;

                    /**
                     * Specifies whether to enable DPD. Valid values: `0` (disable) and `1` (enable)
                     */
                    int64_t m_dpdEnable;
                    bool m_dpdEnableHasBeenSet;

                    /**
                     * DPD timeout period. Default: 30; unit: second. If the request is not responded within this period, the peer end is considered not exists. This parameter is valid when the value of `DpdEnable` is 1. 
                     */
                    std::string m_dpdTimeout;
                    bool m_dpdTimeoutHasBeenSet;

                    /**
                     * The action after DPD timeout. Valid values: `clear` (disconnect) and `restart` (try again). It’s valid when `DpdEnable` is `1`. 
                     */
                    std::string m_dpdAction;
                    bool m_dpdActionHasBeenSet;

                    /**
                     * Peer gateway ID. You can update tunnels of V4.0 and later gateways.
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_
