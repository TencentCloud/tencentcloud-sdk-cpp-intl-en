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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/VpnGatewayQuota.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN gateway object.
                */
                class VpnGateway : public AbstractModel
                {
                public:
                    VpnGateway();
                    ~VpnGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway instance ID.
                     * @return VpnGatewayId Gateway instance ID.
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置Gateway instance ID.
                     * @param VpnGatewayId Gateway instance ID.
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     */
                    bool VpnGatewayIdHasBeenSet() const;

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
                     * 获取Gateway instance name.
                     * @return VpnGatewayName Gateway instance name.
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置Gateway instance name.
                     * @param VpnGatewayName Gateway instance name.
                     */
                    void SetVpnGatewayName(const std::string& _vpnGatewayName);

                    /**
                     * 判断参数 VpnGatewayName 是否已赋值
                     * @return VpnGatewayName 是否已赋值
                     */
                    bool VpnGatewayNameHasBeenSet() const;

                    /**
                     * 获取Gateway instance type. Valid values: 'IPSEC', 'SSL', and 'CCN'.
                     * @return Type Gateway instance type. Valid values: 'IPSEC', 'SSL', and 'CCN'.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Gateway instance type. Valid values: 'IPSEC', 'SSL', and 'CCN'.
                     * @param Type Gateway instance type. Valid values: 'IPSEC', 'SSL', and 'CCN'.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Gateway instance status. 'PENDING': Creating; 'DELETING': Deleting; 'AVAILABLE': Running.
                     * @return State Gateway instance status. 'PENDING': Creating; 'DELETING': Deleting; 'AVAILABLE': Running.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Gateway instance status. 'PENDING': Creating; 'DELETING': Deleting; 'AVAILABLE': Running.
                     * @param State Gateway instance status. 'PENDING': Creating; 'DELETING': Deleting; 'AVAILABLE': Running.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Gateway public IP.
                     * @return PublicIpAddress Gateway public IP.
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置Gateway public IP.
                     * @param PublicIpAddress Gateway public IP.
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取Gateway renewal type: 'NOTIFY_AND_MANUAL_RENEW': Manual renewal. 'NOTIFY_AND_AUTO_RENEW': Automatic renewal. 'NOT_NOTIFY_AND_NOT_RENEW': No renewal after expiration.
                     * @return RenewFlag Gateway renewal type: 'NOTIFY_AND_MANUAL_RENEW': Manual renewal. 'NOTIFY_AND_AUTO_RENEW': Automatic renewal. 'NOT_NOTIFY_AND_NOT_RENEW': No renewal after expiration.
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Gateway renewal type: 'NOTIFY_AND_MANUAL_RENEW': Manual renewal. 'NOTIFY_AND_AUTO_RENEW': Automatic renewal. 'NOT_NOTIFY_AND_NOT_RENEW': No renewal after expiration.
                     * @param RenewFlag Gateway renewal type: 'NOTIFY_AND_MANUAL_RENEW': Manual renewal. 'NOTIFY_AND_AUTO_RENEW': Automatic renewal. 'NOT_NOTIFY_AND_NOT_RENEW': No renewal after expiration.
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Gateway billing type: POSTPAID_BY_HOUR: Postpaid by hour; PREPAID: Prepaid.
                     * @return InstanceChargeType Gateway billing type: POSTPAID_BY_HOUR: Postpaid by hour; PREPAID: Prepaid.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Gateway billing type: POSTPAID_BY_HOUR: Postpaid by hour; PREPAID: Prepaid.
                     * @param InstanceChargeType Gateway billing type: POSTPAID_BY_HOUR: Postpaid by hour; PREPAID: Prepaid.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Outbound bandwidth of gateway.
                     * @return InternetMaxBandwidthOut Outbound bandwidth of gateway.
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Outbound bandwidth of gateway.
                     * @param InternetMaxBandwidthOut Outbound bandwidth of gateway.
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

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
                     * 获取Expiration time of the prepaid gateway.
                     * @return ExpiredTime Expiration time of the prepaid gateway.
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time of the prepaid gateway.
                     * @param ExpiredTime Expiration time of the prepaid gateway.
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Whether the public IP is blocked.
                     * @return IsAddressBlocked Whether the public IP is blocked.
                     */
                    bool GetIsAddressBlocked() const;

                    /**
                     * 设置Whether the public IP is blocked.
                     * @param IsAddressBlocked Whether the public IP is blocked.
                     */
                    void SetIsAddressBlocked(const bool& _isAddressBlocked);

                    /**
                     * 判断参数 IsAddressBlocked 是否已赋值
                     * @return IsAddressBlocked 是否已赋值
                     */
                    bool IsAddressBlockedHasBeenSet() const;

                    /**
                     * 获取Change of billing method. PREPAID_TO_POSTPAID: Monthly subscription prepaid to postpaid by hour.
                     * @return NewPurchasePlan Change of billing method. PREPAID_TO_POSTPAID: Monthly subscription prepaid to postpaid by hour.
                     */
                    std::string GetNewPurchasePlan() const;

                    /**
                     * 设置Change of billing method. PREPAID_TO_POSTPAID: Monthly subscription prepaid to postpaid by hour.
                     * @param NewPurchasePlan Change of billing method. PREPAID_TO_POSTPAID: Monthly subscription prepaid to postpaid by hour.
                     */
                    void SetNewPurchasePlan(const std::string& _newPurchasePlan);

                    /**
                     * 判断参数 NewPurchasePlan 是否已赋值
                     * @return NewPurchasePlan 是否已赋值
                     */
                    bool NewPurchasePlanHasBeenSet() const;

                    /**
                     * 获取Gateway billing status. PROTECTIVELY_ISOLATED: Instance is isolated; NORMAL: Normal.
                     * @return RestrictState Gateway billing status. PROTECTIVELY_ISOLATED: Instance is isolated; NORMAL: Normal.
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置Gateway billing status. PROTECTIVELY_ISOLATED: Instance is isolated; NORMAL: Normal.
                     * @param RestrictState Gateway billing status. PROTECTIVELY_ISOLATED: Instance is isolated; NORMAL: Normal.
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     */
                    bool RestrictStateHasBeenSet() const;

                    /**
                     * 获取The availability zone, such as `ap-guangzhou-2`
                     * @return Zone The availability zone, such as `ap-guangzhou-2`
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone, such as `ap-guangzhou-2`
                     * @param Zone The availability zone, such as `ap-guangzhou-2`
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Gateway bandwidth quota information.
                     * @return VpnGatewayQuotaSet Gateway bandwidth quota information.
                     */
                    std::vector<VpnGatewayQuota> GetVpnGatewayQuotaSet() const;

                    /**
                     * 设置Gateway bandwidth quota information.
                     * @param VpnGatewayQuotaSet Gateway bandwidth quota information.
                     */
                    void SetVpnGatewayQuotaSet(const std::vector<VpnGatewayQuota>& _vpnGatewayQuotaSet);

                    /**
                     * 判断参数 VpnGatewayQuotaSet 是否已赋值
                     * @return VpnGatewayQuotaSet 是否已赋值
                     */
                    bool VpnGatewayQuotaSetHasBeenSet() const;

                    /**
                     * 获取Gateway instance version.
                     * @return Version Gateway instance version.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Gateway instance version.
                     * @param Version Gateway instance version.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取CCN instance ID when the value of Type is CCN.
                     * @return NetworkInstanceId CCN instance ID when the value of Type is CCN.
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置CCN instance ID when the value of Type is CCN.
                     * @param NetworkInstanceId CCN instance ID when the value of Type is CCN.
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取CDC instance ID
                     * @return CdcId CDC instance ID
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC instance ID
                     * @param CdcId CDC instance ID
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Maximum number of connected clients allowed for the SSL VPN gateway.
                     * @return MaxConnection Maximum number of connected clients allowed for the SSL VPN gateway.
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置Maximum number of connected clients allowed for the SSL VPN gateway.
                     * @param MaxConnection Maximum number of connected clients allowed for the SSL VPN gateway.
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     */
                    bool MaxConnectionHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID.
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Gateway instance name.
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * Gateway instance type. Valid values: 'IPSEC', 'SSL', and 'CCN'.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Gateway instance status. 'PENDING': Creating; 'DELETING': Deleting; 'AVAILABLE': Running.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Gateway public IP.
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * Gateway renewal type: 'NOTIFY_AND_MANUAL_RENEW': Manual renewal. 'NOTIFY_AND_AUTO_RENEW': Automatic renewal. 'NOT_NOTIFY_AND_NOT_RENEW': No renewal after expiration.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Gateway billing type: POSTPAID_BY_HOUR: Postpaid by hour; PREPAID: Prepaid.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Outbound bandwidth of gateway.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Expiration time of the prepaid gateway.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Whether the public IP is blocked.
                     */
                    bool m_isAddressBlocked;
                    bool m_isAddressBlockedHasBeenSet;

                    /**
                     * Change of billing method. PREPAID_TO_POSTPAID: Monthly subscription prepaid to postpaid by hour.
                     */
                    std::string m_newPurchasePlan;
                    bool m_newPurchasePlanHasBeenSet;

                    /**
                     * Gateway billing status. PROTECTIVELY_ISOLATED: Instance is isolated; NORMAL: Normal.
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * The availability zone, such as `ap-guangzhou-2`
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Gateway bandwidth quota information.
                     */
                    std::vector<VpnGatewayQuota> m_vpnGatewayQuotaSet;
                    bool m_vpnGatewayQuotaSetHasBeenSet;

                    /**
                     * Gateway instance version.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * CCN instance ID when the value of Type is CCN.
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * CDC instance ID
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Maximum number of connected clients allowed for the SSL VPN gateway.
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAY_H_
