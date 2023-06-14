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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AlgType.h>
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
                * Detailed EIP information
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`EIP` `ID`, the unique ID of the `EIP`.
                     * @return AddressId `EIP` `ID`, the unique ID of the `EIP`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置`EIP` `ID`, the unique ID of the `EIP`.
                     * @param _addressId `EIP` `ID`, the unique ID of the `EIP`.
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取The `EIP` name.
                     * @return AddressName The `EIP` name.
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置The `EIP` name.
                     * @param _addressName The `EIP` name.
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取Possible `EIP` states are 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.
                     * @return AddressStatus Possible `EIP` states are 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.
                     * 
                     */
                    std::string GetAddressStatus() const;

                    /**
                     * 设置Possible `EIP` states are 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.
                     * @param _addressStatus Possible `EIP` states are 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.
                     * 
                     */
                    void SetAddressStatus(const std::string& _addressStatus);

                    /**
                     * 判断参数 AddressStatus 是否已赋值
                     * @return AddressStatus 是否已赋值
                     * 
                     */
                    bool AddressStatusHasBeenSet() const;

                    /**
                     * 获取The public IP address
                     * @return AddressIp The public IP address
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置The public IP address
                     * @param _addressIp The public IP address
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取The ID of the bound resource instance. This can be a `CVM` or `NAT`.
                     * @return InstanceId The ID of the bound resource instance. This can be a `CVM` or `NAT`.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ID of the bound resource instance. This can be a `CVM` or `NAT`.
                     * @param _instanceId The ID of the bound resource instance. This can be a `CVM` or `NAT`.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @return CreatedTime The creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @param _createdTime The creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
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
                     * 获取The ID of the bound ENI
                     * @return NetworkInterfaceId The ID of the bound ENI
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The ID of the bound ENI
                     * @param _networkInterfaceId The ID of the bound ENI
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取The private IP of the bound resources
                     * @return PrivateAddressIp The private IP of the bound resources
                     * 
                     */
                    std::string GetPrivateAddressIp() const;

                    /**
                     * 设置The private IP of the bound resources
                     * @param _privateAddressIp The private IP of the bound resources
                     * 
                     */
                    void SetPrivateAddressIp(const std::string& _privateAddressIp);

                    /**
                     * 判断参数 PrivateAddressIp 是否已赋值
                     * @return PrivateAddressIp 是否已赋值
                     * 
                     */
                    bool PrivateAddressIpHasBeenSet() const;

                    /**
                     * 获取The isolation status of the resource. `True` indicates the EIP is isolated. `False` indicates that the resource is not isolated.
                     * @return IsArrears The isolation status of the resource. `True` indicates the EIP is isolated. `False` indicates that the resource is not isolated.
                     * 
                     */
                    bool GetIsArrears() const;

                    /**
                     * 设置The isolation status of the resource. `True` indicates the EIP is isolated. `False` indicates that the resource is not isolated.
                     * @param _isArrears The isolation status of the resource. `True` indicates the EIP is isolated. `False` indicates that the resource is not isolated.
                     * 
                     */
                    void SetIsArrears(const bool& _isArrears);

                    /**
                     * 判断参数 IsArrears 是否已赋值
                     * @return IsArrears 是否已赋值
                     * 
                     */
                    bool IsArrearsHasBeenSet() const;

                    /**
                     * 获取The block status of the resource. `True` indicates the EIP is blocked. `False` indicates that the EIP is not blocked.
                     * @return IsBlocked The block status of the resource. `True` indicates the EIP is blocked. `False` indicates that the EIP is not blocked.
                     * 
                     */
                    bool GetIsBlocked() const;

                    /**
                     * 设置The block status of the resource. `True` indicates the EIP is blocked. `False` indicates that the EIP is not blocked.
                     * @param _isBlocked The block status of the resource. `True` indicates the EIP is blocked. `False` indicates that the EIP is not blocked.
                     * 
                     */
                    void SetIsBlocked(const bool& _isBlocked);

                    /**
                     * 判断参数 IsBlocked 是否已赋值
                     * @return IsBlocked 是否已赋值
                     * 
                     */
                    bool IsBlockedHasBeenSet() const;

                    /**
                     * 获取Whether the EIP supports direct connection mode. `True` indicates the EIP supports direct connection. `False` indicates that the resource does not support direct connection.
                     * @return IsEipDirectConnection Whether the EIP supports direct connection mode. `True` indicates the EIP supports direct connection. `False` indicates that the resource does not support direct connection.
                     * 
                     */
                    bool GetIsEipDirectConnection() const;

                    /**
                     * 设置Whether the EIP supports direct connection mode. `True` indicates the EIP supports direct connection. `False` indicates that the resource does not support direct connection.
                     * @param _isEipDirectConnection Whether the EIP supports direct connection mode. `True` indicates the EIP supports direct connection. `False` indicates that the resource does not support direct connection.
                     * 
                     */
                    void SetIsEipDirectConnection(const bool& _isEipDirectConnection);

                    /**
                     * 判断参数 IsEipDirectConnection 是否已赋值
                     * @return IsEipDirectConnection 是否已赋值
                     * 
                     */
                    bool IsEipDirectConnectionHasBeenSet() const;

                    /**
                     * 获取IP type. Valid values: `CalcIP` (device IP), `WanIP` (public network IP), `EIP` (general elastic IP), `AnycastEIP` (accelerated EIP), and `AntiDDoSEIP` (Anti DDoS EIP).
                     * @return AddressType IP type. Valid values: `CalcIP` (device IP), `WanIP` (public network IP), `EIP` (general elastic IP), `AnycastEIP` (accelerated EIP), and `AntiDDoSEIP` (Anti DDoS EIP).
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置IP type. Valid values: `CalcIP` (device IP), `WanIP` (public network IP), `EIP` (general elastic IP), `AnycastEIP` (accelerated EIP), and `AntiDDoSEIP` (Anti DDoS EIP).
                     * @param _addressType IP type. Valid values: `CalcIP` (device IP), `WanIP` (public network IP), `EIP` (general elastic IP), `AnycastEIP` (accelerated EIP), and `AntiDDoSEIP` (Anti DDoS EIP).
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取Whether the EIP is automatically released after being unbound. `True` indicates the EIP will be automatically released after being unbound. `False` indicates the EIP will not be automatically released after being unbound.
                     * @return CascadeRelease Whether the EIP is automatically released after being unbound. `True` indicates the EIP will be automatically released after being unbound. `False` indicates the EIP will not be automatically released after being unbound.
                     * 
                     */
                    bool GetCascadeRelease() const;

                    /**
                     * 设置Whether the EIP is automatically released after being unbound. `True` indicates the EIP will be automatically released after being unbound. `False` indicates the EIP will not be automatically released after being unbound.
                     * @param _cascadeRelease Whether the EIP is automatically released after being unbound. `True` indicates the EIP will be automatically released after being unbound. `False` indicates the EIP will not be automatically released after being unbound.
                     * 
                     */
                    void SetCascadeRelease(const bool& _cascadeRelease);

                    /**
                     * 判断参数 CascadeRelease 是否已赋值
                     * @return CascadeRelease 是否已赋值
                     * 
                     */
                    bool CascadeReleaseHasBeenSet() const;

                    /**
                     * 获取Type of the protocol used in EIP ALG
                     * @return EipAlgType Type of the protocol used in EIP ALG
                     * 
                     */
                    AlgType GetEipAlgType() const;

                    /**
                     * 设置Type of the protocol used in EIP ALG
                     * @param _eipAlgType Type of the protocol used in EIP ALG
                     * 
                     */
                    void SetEipAlgType(const AlgType& _eipAlgType);

                    /**
                     * 判断参数 EipAlgType 是否已赋值
                     * @return EipAlgType 是否已赋值
                     * 
                     */
                    bool EipAlgTypeHasBeenSet() const;

                    /**
                     * 获取The ISP of an EIP/Elastic IP, with possible return values currently including "CMCC", "CTCC", "CUCC" and "BGP"
                     * @return InternetServiceProvider The ISP of an EIP/Elastic IP, with possible return values currently including "CMCC", "CTCC", "CUCC" and "BGP"
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置The ISP of an EIP/Elastic IP, with possible return values currently including "CMCC", "CTCC", "CUCC" and "BGP"
                     * @param _internetServiceProvider The ISP of an EIP/Elastic IP, with possible return values currently including "CMCC", "CTCC", "CUCC" and "BGP"
                     * 
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取Whether the EIP is in a local BGP.
                     * @return LocalBgp Whether the EIP is in a local BGP.
                     * 
                     */
                    bool GetLocalBgp() const;

                    /**
                     * 设置Whether the EIP is in a local BGP.
                     * @param _localBgp Whether the EIP is in a local BGP.
                     * 
                     */
                    void SetLocalBgp(const bool& _localBgp);

                    /**
                     * 判断参数 LocalBgp 是否已赋值
                     * @return LocalBgp 是否已赋值
                     * 
                     */
                    bool LocalBgpHasBeenSet() const;

                    /**
                     * 获取Bandwidth value of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return Bandwidth Bandwidth value of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth value of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _bandwidth Bandwidth value of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Network billing mode of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
Including:
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">Prepaid by monthly-subscribed bandwidth.</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly traffic.</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly bandwidth.</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">Bandwidth package.</p>
Note: this field may return `null`, indicating that no valid value was found.
                     * @return InternetChargeType Network billing mode of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
Including:
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">Prepaid by monthly-subscribed bandwidth.</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly traffic.</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly bandwidth.</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">Bandwidth package.</p>
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network billing mode of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
Including:
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">Prepaid by monthly-subscribed bandwidth.</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly traffic.</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly bandwidth.</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">Bandwidth package.</p>
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _internetChargeType Network billing mode of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
Including:
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">Prepaid by monthly-subscribed bandwidth.</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly traffic.</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly bandwidth.</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">Bandwidth package.</p>
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取List of tags associated with the EIP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TagSet List of tags associated with the EIP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置List of tags associated with the EIP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tagSet List of tags associated with the EIP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * `EIP` `ID`, the unique ID of the `EIP`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * The `EIP` name.
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * Possible `EIP` states are 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.
                     */
                    std::string m_addressStatus;
                    bool m_addressStatusHasBeenSet;

                    /**
                     * The public IP address
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * The ID of the bound resource instance. This can be a `CVM` or `NAT`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * The ID of the bound ENI
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The private IP of the bound resources
                     */
                    std::string m_privateAddressIp;
                    bool m_privateAddressIpHasBeenSet;

                    /**
                     * The isolation status of the resource. `True` indicates the EIP is isolated. `False` indicates that the resource is not isolated.
                     */
                    bool m_isArrears;
                    bool m_isArrearsHasBeenSet;

                    /**
                     * The block status of the resource. `True` indicates the EIP is blocked. `False` indicates that the EIP is not blocked.
                     */
                    bool m_isBlocked;
                    bool m_isBlockedHasBeenSet;

                    /**
                     * Whether the EIP supports direct connection mode. `True` indicates the EIP supports direct connection. `False` indicates that the resource does not support direct connection.
                     */
                    bool m_isEipDirectConnection;
                    bool m_isEipDirectConnectionHasBeenSet;

                    /**
                     * IP type. Valid values: `CalcIP` (device IP), `WanIP` (public network IP), `EIP` (general elastic IP), `AnycastEIP` (accelerated EIP), and `AntiDDoSEIP` (Anti DDoS EIP).
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * Whether the EIP is automatically released after being unbound. `True` indicates the EIP will be automatically released after being unbound. `False` indicates the EIP will not be automatically released after being unbound.
                     */
                    bool m_cascadeRelease;
                    bool m_cascadeReleaseHasBeenSet;

                    /**
                     * Type of the protocol used in EIP ALG
                     */
                    AlgType m_eipAlgType;
                    bool m_eipAlgTypeHasBeenSet;

                    /**
                     * The ISP of an EIP/Elastic IP, with possible return values currently including "CMCC", "CTCC", "CUCC" and "BGP"
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * Whether the EIP is in a local BGP.
                     */
                    bool m_localBgp;
                    bool m_localBgpHasBeenSet;

                    /**
                     * Bandwidth value of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Network billing mode of EIP. The EIP for the bill-by-CVM account will return `null`.
Note: this field may return `null`, indicating that no valid value was found.
Including:
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">Prepaid by monthly-subscribed bandwidth.</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly traffic.</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">Pay-as-you-go billing by hourly bandwidth.</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">Bandwidth package.</p>
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * List of tags associated with the EIP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_
