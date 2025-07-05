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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIpAddressSpecification.h>
#include <tencentcloud/ecm/v20190719/model/NetworkInterfaceAttachment.h>
#include <tencentcloud/ecm/v20190719/model/Ipv6Address.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ENI
                */
                class NetworkInterface : public AbstractModel
                {
                public:
                    NetworkInterface();
                    ~NetworkInterface() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ENI instance ID, such as `eni-f1xjkw1b`.
                     * @return NetworkInterfaceId ENI instance ID, such as `eni-f1xjkw1b`.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ENI instance ID, such as `eni-f1xjkw1b`.
                     * @param _networkInterfaceId ENI instance ID, such as `eni-f1xjkw1b`.
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
                     * 获取ENI name.
                     * @return NetworkInterfaceName ENI name.
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置ENI name.
                     * @param _networkInterfaceName ENI name.
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取ENI description.
                     * @return NetworkInterfaceDescription ENI description.
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置ENI description.
                     * @param _networkInterfaceDescription ENI description.
                     * 
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取Subnet instance ID.
                     * @return SubnetId Subnet instance ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID.
                     * @param _subnetId Subnet instance ID.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

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
                     * 获取Bound security groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GroupSet Bound security groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetGroupSet() const;

                    /**
                     * 设置Bound security groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _groupSet Bound security groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupSet(const std::vector<std::string>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     * 
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取Whether it is the primary ENI.
                     * @return Primary Whether it is the primary ENI.
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置Whether it is the primary ENI.
                     * @param _primary Whether it is the primary ENI.
                     * 
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     * 
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取MAC address.
                     * @return MacAddress MAC address.
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC address.
                     * @param _macAddress MAC address.
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取ENI status:
PENDING: creating
AVAILABLE: available
ATTACHING: binding
DETACHING: unbinding
DELETING: deleting
                     * @return State ENI status:
PENDING: creating
AVAILABLE: available
ATTACHING: binding
DETACHING: unbinding
DELETING: deleting
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置ENI status:
PENDING: creating
AVAILABLE: available
ATTACHING: binding
DETACHING: unbinding
DELETING: deleting
                     * @param _state ENI status:
PENDING: creating
AVAILABLE: available
ATTACHING: binding
DETACHING: unbinding
DELETING: deleting
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
                     * 获取Private IP information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIpAddressSet Private IP information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddressSet() const;

                    /**
                     * 设置Private IP information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _privateIpAddressSet Private IP information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateIpAddressSet(const std::vector<PrivateIpAddressSpecification>& _privateIpAddressSet);

                    /**
                     * 判断参数 PrivateIpAddressSet 是否已赋值
                     * @return PrivateIpAddressSet 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressSetHasBeenSet() const;

                    /**
                     * 获取Bound CVM object.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Attachment Bound CVM object.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NetworkInterfaceAttachment GetAttachment() const;

                    /**
                     * 设置Bound CVM object.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _attachment Bound CVM object.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttachment(const NetworkInterfaceAttachment& _attachment);

                    /**
                     * 判断参数 Attachment 是否已赋值
                     * @return Attachment 是否已赋值
                     * 
                     */
                    bool AttachmentHasBeenSet() const;

                    /**
                     * 获取AZ.
                     * @return Zone AZ.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ.
                     * @param _zone AZ.
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
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
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
                     * 获取List of IPv6 addresses.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Ipv6AddressSet List of IPv6 addresses.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6AddressSet() const;

                    /**
                     * 设置List of IPv6 addresses.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ipv6AddressSet List of IPv6 addresses.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpv6AddressSet(const std::vector<Ipv6Address>& _ipv6AddressSet);

                    /**
                     * 判断参数 Ipv6AddressSet 是否已赋值
                     * @return Ipv6AddressSet 是否已赋值
                     * 
                     */
                    bool Ipv6AddressSetHasBeenSet() const;

                    /**
                     * 获取Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tagSet Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ENI type. Valid values: 0: ENI; 1: EVM ENI.
                     * @return EniType ENI type. Valid values: 0: ENI; 1: EVM ENI.
                     * 
                     */
                    uint64_t GetEniType() const;

                    /**
                     * 设置ENI type. Valid values: 0: ENI; 1: EVM ENI.
                     * @param _eniType ENI type. Valid values: 0: ENI; 1: EVM ENI.
                     * 
                     */
                    void SetEniType(const uint64_t& _eniType);

                    /**
                     * 判断参数 EniType 是否已赋值
                     * @return EniType 是否已赋值
                     * 
                     */
                    bool EniTypeHasBeenSet() const;

                    /**
                     * 获取ECM region (EcmRegion)
                     * @return EcmRegion ECM region (EcmRegion)
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region (EcmRegion)
                     * @param _ecmRegion ECM region (EcmRegion)
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取Type of the resource bound with an ENI. Valid values: `cvm` and `eks`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Business Type of the resource bound with an ENI. Valid values: `cvm` and `eks`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Type of the resource bound with an ENI. Valid values: `cvm` and `eks`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _business Type of the resource bound with an ENI. Valid values: `cvm` and `eks`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * ENI instance ID, such as `eni-f1xjkw1b`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * ENI name.
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * ENI description.
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * Subnet instance ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Bound security groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * Whether it is the primary ENI.
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * MAC address.
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * ENI status:
PENDING: creating
AVAILABLE: available
ATTACHING: binding
DETACHING: unbinding
DELETING: deleting
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Private IP information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddressSet;
                    bool m_privateIpAddressSetHasBeenSet;

                    /**
                     * Bound CVM object.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    NetworkInterfaceAttachment m_attachment;
                    bool m_attachmentHasBeenSet;

                    /**
                     * AZ.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * List of IPv6 addresses.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Ipv6Address> m_ipv6AddressSet;
                    bool m_ipv6AddressSetHasBeenSet;

                    /**
                     * Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * ENI type. Valid values: 0: ENI; 1: EVM ENI.
                     */
                    uint64_t m_eniType;
                    bool m_eniTypeHasBeenSet;

                    /**
                     * ECM region (EcmRegion)
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Type of the resource bound with an ENI. Valid values: `cvm` and `eks`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACE_H_
