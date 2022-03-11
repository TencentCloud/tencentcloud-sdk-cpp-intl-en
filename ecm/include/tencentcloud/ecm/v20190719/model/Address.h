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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESS_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * EIP information
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique EIP ID.
                     * @return AddressId Unique EIP ID.
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置Unique EIP ID.
                     * @param AddressId Unique EIP ID.
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取EIP name.
                     * @return AddressName EIP name.
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置EIP name.
                     * @param AddressName EIP name.
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取EIP status, including 'CREATING' (creating), 'BINDING' (binding), 'BIND' (bound), 'UNBINDING' (unbinding), 'UNBIND' (unbound), 'OFFLINING' (releasing), and 'BIND_ENI' (binding dangling ENI)
                     * @return AddressStatus EIP status, including 'CREATING' (creating), 'BINDING' (binding), 'BIND' (bound), 'UNBINDING' (unbinding), 'UNBIND' (unbound), 'OFFLINING' (releasing), and 'BIND_ENI' (binding dangling ENI)
                     */
                    std::string GetAddressStatus() const;

                    /**
                     * 设置EIP status, including 'CREATING' (creating), 'BINDING' (binding), 'BIND' (bound), 'UNBINDING' (unbinding), 'UNBIND' (unbound), 'OFFLINING' (releasing), and 'BIND_ENI' (binding dangling ENI)
                     * @param AddressStatus EIP status, including 'CREATING' (creating), 'BINDING' (binding), 'BIND' (bound), 'UNBINDING' (unbinding), 'UNBIND' (unbound), 'OFFLINING' (releasing), and 'BIND_ENI' (binding dangling ENI)
                     */
                    void SetAddressStatus(const std::string& _addressStatus);

                    /**
                     * 判断参数 AddressStatus 是否已赋值
                     * @return AddressStatus 是否已赋值
                     */
                    bool AddressStatusHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return AddressIp Public IP address
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置Public IP address
                     * @param AddressIp Public IP address
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取ID of the bound resource instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId ID of the bound resource instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the bound resource instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId ID of the bound resource instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Creation time in ISO 8601 format (YYYY-MM-DDTHH:mm:ss.sssZ)
                     * @return CreatedTime Creation time in ISO 8601 format (YYYY-MM-DDTHH:mm:ss.sssZ)
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in ISO 8601 format (YYYY-MM-DDTHH:mm:ss.sssZ)
                     * @param CreatedTime Creation time in ISO 8601 format (YYYY-MM-DDTHH:mm:ss.sssZ)
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取ID of the bound ENI
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NetworkInterfaceId ID of the bound ENI
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ID of the bound ENI
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NetworkInterfaceId ID of the bound ENI
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取Private IP of the bound resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrivateAddressIp Private IP of the bound resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPrivateAddressIp() const;

                    /**
                     * 设置Private IP of the bound resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PrivateAddressIp Private IP of the bound resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrivateAddressIp(const std::string& _privateAddressIp);

                    /**
                     * 判断参数 PrivateAddressIp 是否已赋值
                     * @return PrivateAddressIp 是否已赋值
                     */
                    bool PrivateAddressIpHasBeenSet() const;

                    /**
                     * 获取Isolation status of the resource. true: isolated; false: not isolated.
                     * @return IsArrears Isolation status of the resource. true: isolated; false: not isolated.
                     */
                    bool GetIsArrears() const;

                    /**
                     * 设置Isolation status of the resource. true: isolated; false: not isolated.
                     * @param IsArrears Isolation status of the resource. true: isolated; false: not isolated.
                     */
                    void SetIsArrears(const bool& _isArrears);

                    /**
                     * 判断参数 IsArrears 是否已赋值
                     * @return IsArrears 是否已赋值
                     */
                    bool IsArrearsHasBeenSet() const;

                    /**
                     * 获取Blockage status of the EIP resource. true: blocked; false: not blocked
                     * @return IsBlocked Blockage status of the EIP resource. true: blocked; false: not blocked
                     */
                    bool GetIsBlocked() const;

                    /**
                     * 设置Blockage status of the EIP resource. true: blocked; false: not blocked
                     * @param IsBlocked Blockage status of the EIP resource. true: blocked; false: not blocked
                     */
                    void SetIsBlocked(const bool& _isBlocked);

                    /**
                     * 判断参数 IsBlocked 是否已赋值
                     * @return IsBlocked 是否已赋值
                     */
                    bool IsBlockedHasBeenSet() const;

                    /**
                     * 获取Whether the EIP supports direct access mode. true: yes; false: no.
                     * @return IsEipDirectConnection Whether the EIP supports direct access mode. true: yes; false: no.
                     */
                    bool GetIsEipDirectConnection() const;

                    /**
                     * 设置Whether the EIP supports direct access mode. true: yes; false: no.
                     * @param IsEipDirectConnection Whether the EIP supports direct access mode. true: yes; false: no.
                     */
                    void SetIsEipDirectConnection(const bool& _isEipDirectConnection);

                    /**
                     * 判断参数 IsEipDirectConnection 是否已赋值
                     * @return IsEipDirectConnection 是否已赋值
                     */
                    bool IsEipDirectConnectionHasBeenSet() const;

                    /**
                     * 获取Resource type of the EIP, including `CalcIP` (device IP), `WanIP` (general public IP), `EIP` (elastic IP), and `AnycastEip` (accelerated EIP).
                     * @return AddressType Resource type of the EIP, including `CalcIP` (device IP), `WanIP` (general public IP), `EIP` (elastic IP), and `AnycastEip` (accelerated EIP).
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置Resource type of the EIP, including `CalcIP` (device IP), `WanIP` (general public IP), `EIP` (elastic IP), and `AnycastEip` (accelerated EIP).
                     * @param AddressType Resource type of the EIP, including `CalcIP` (device IP), `WanIP` (general public IP), `EIP` (elastic IP), and `AnycastEip` (accelerated EIP).
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取Whether the EIP is automatically released after being unbound. true: yes; false: no
                     * @return CascadeRelease Whether the EIP is automatically released after being unbound. true: yes; false: no
                     */
                    bool GetCascadeRelease() const;

                    /**
                     * 设置Whether the EIP is automatically released after being unbound. true: yes; false: no
                     * @param CascadeRelease Whether the EIP is automatically released after being unbound. true: yes; false: no
                     */
                    void SetCascadeRelease(const bool& _cascadeRelease);

                    /**
                     * 判断参数 CascadeRelease 是否已赋值
                     * @return CascadeRelease 是否已赋值
                     */
                    bool CascadeReleaseHasBeenSet() const;

                    /**
                     * 获取ISP. CTCC: China Telecom; CUCC: China Unicom; CMCC: China Mobile
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InternetServiceProvider ISP. CTCC: China Telecom; CUCC: China Unicom; CMCC: China Mobile
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置ISP. CTCC: China Telecom; CUCC: China Unicom; CMCC: China Mobile
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InternetServiceProvider ISP. CTCC: China Telecom; CUCC: China Unicom; CMCC: China Mobile
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取Bandwidth cap
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bandwidth Bandwidth cap
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth cap
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Bandwidth Bandwidth cap
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PayMode Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * Unique EIP ID.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * EIP name.
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * EIP status, including 'CREATING' (creating), 'BINDING' (binding), 'BIND' (bound), 'UNBINDING' (unbinding), 'UNBIND' (unbound), 'OFFLINING' (releasing), and 'BIND_ENI' (binding dangling ENI)
                     */
                    std::string m_addressStatus;
                    bool m_addressStatusHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * ID of the bound resource instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Creation time in ISO 8601 format (YYYY-MM-DDTHH:mm:ss.sssZ)
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * ID of the bound ENI
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * Private IP of the bound resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateAddressIp;
                    bool m_privateAddressIpHasBeenSet;

                    /**
                     * Isolation status of the resource. true: isolated; false: not isolated.
                     */
                    bool m_isArrears;
                    bool m_isArrearsHasBeenSet;

                    /**
                     * Blockage status of the EIP resource. true: blocked; false: not blocked
                     */
                    bool m_isBlocked;
                    bool m_isBlockedHasBeenSet;

                    /**
                     * Whether the EIP supports direct access mode. true: yes; false: no.
                     */
                    bool m_isEipDirectConnection;
                    bool m_isEipDirectConnectionHasBeenSet;

                    /**
                     * Resource type of the EIP, including `CalcIP` (device IP), `WanIP` (general public IP), `EIP` (elastic IP), and `AnycastEip` (accelerated EIP).
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * Whether the EIP is automatically released after being unbound. true: yes; false: no
                     */
                    bool m_cascadeRelease;
                    bool m_cascadeReleaseHasBeenSet;

                    /**
                     * ISP. CTCC: China Telecom; CUCC: China Unicom; CMCC: China Mobile
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * Bandwidth cap
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESS_H_
