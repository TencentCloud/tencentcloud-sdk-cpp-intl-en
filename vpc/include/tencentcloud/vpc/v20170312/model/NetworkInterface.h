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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateIpAddressSpecification.h>
#include <tencentcloud/vpc/v20170312/model/NetworkInterfaceAttachment.h>
#include <tencentcloud/vpc/v20170312/model/Ipv6Address.h>
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
                     * 获取The ID of the ENI instance, such as `eni-f1xjkw1b`.
                     * @return NetworkInterfaceId The ID of the ENI instance, such as `eni-f1xjkw1b`.
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The ID of the ENI instance, such as `eni-f1xjkw1b`.
                     * @param NetworkInterfaceId The ID of the ENI instance, such as `eni-f1xjkw1b`.
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取ENI Name
                     * @return NetworkInterfaceName ENI Name
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置ENI Name
                     * @param NetworkInterfaceName ENI Name
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取ENI description.
                     * @return NetworkInterfaceDescription ENI description.
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置ENI description.
                     * @param NetworkInterfaceDescription ENI description.
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取Subnet instance ID.
                     * @return SubnetId Subnet instance ID.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID.
                     * @param SubnetId Subnet instance ID.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

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
                     * 获取Bound security group.
                     * @return GroupSet Bound security group.
                     */
                    std::vector<std::string> GetGroupSet() const;

                    /**
                     * 设置Bound security group.
                     * @param GroupSet Bound security group.
                     */
                    void SetGroupSet(const std::vector<std::string>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取Whether it is the primary ENI.
                     * @return Primary Whether it is the primary ENI.
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置Whether it is the primary ENI.
                     * @param Primary Whether it is the primary ENI.
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取MAC address
                     * @return MacAddress MAC address
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC address
                     * @param MacAddress MAC address
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取ENI status:
<li>`PENDING`: Creating</li>
<li>`AVAILABLE`: Available</li>
<li>`ATTACHING`: Binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DELETING`: Deleting</li>
                     * @return State ENI status:
<li>`PENDING`: Creating</li>
<li>`AVAILABLE`: Available</li>
<li>`ATTACHING`: Binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DELETING`: Deleting</li>
                     */
                    std::string GetState() const;

                    /**
                     * 设置ENI status:
<li>`PENDING`: Creating</li>
<li>`AVAILABLE`: Available</li>
<li>`ATTACHING`: Binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DELETING`: Deleting</li>
                     * @param State ENI status:
<li>`PENDING`: Creating</li>
<li>`AVAILABLE`: Available</li>
<li>`ATTACHING`: Binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DELETING`: Deleting</li>
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Private IP information.
                     * @return PrivateIpAddressSet Private IP information.
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddressSet() const;

                    /**
                     * 设置Private IP information.
                     * @param PrivateIpAddressSet Private IP information.
                     */
                    void SetPrivateIpAddressSet(const std::vector<PrivateIpAddressSpecification>& _privateIpAddressSet);

                    /**
                     * 判断参数 PrivateIpAddressSet 是否已赋值
                     * @return PrivateIpAddressSet 是否已赋值
                     */
                    bool PrivateIpAddressSetHasBeenSet() const;

                    /**
                     * 获取Bound CVM object.
Note: This field may return null, indicating no valid value.
                     * @return Attachment Bound CVM object.
Note: This field may return null, indicating no valid value.
                     */
                    NetworkInterfaceAttachment GetAttachment() const;

                    /**
                     * 设置Bound CVM object.
Note: This field may return null, indicating no valid value.
                     * @param Attachment Bound CVM object.
Note: This field may return null, indicating no valid value.
                     */
                    void SetAttachment(const NetworkInterfaceAttachment& _attachment);

                    /**
                     * 判断参数 Attachment 是否已赋值
                     * @return Attachment 是否已赋值
                     */
                    bool AttachmentHasBeenSet() const;

                    /**
                     * 获取Availability Zone.
                     * @return Zone Availability Zone.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability Zone.
                     * @param Zone Availability Zone.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

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
                     * 获取The `IPv6` address list.
                     * @return Ipv6AddressSet The `IPv6` address list.
                     */
                    std::vector<Ipv6Address> GetIpv6AddressSet() const;

                    /**
                     * 设置The `IPv6` address list.
                     * @param Ipv6AddressSet The `IPv6` address list.
                     */
                    void SetIpv6AddressSet(const std::vector<Ipv6Address>& _ipv6AddressSet);

                    /**
                     * 判断参数 Ipv6AddressSet 是否已赋值
                     * @return Ipv6AddressSet 是否已赋值
                     */
                    bool Ipv6AddressSetHasBeenSet() const;

                    /**
                     * 获取Tag key-value pair.
                     * @return TagSet Tag key-value pair.
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pair.
                     * @param TagSet Tag key-value pair.
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取The ENI type. 0: ENI. 1: EVM ENI.
                     * @return EniType The ENI type. 0: ENI. 1: EVM ENI.
                     */
                    uint64_t GetEniType() const;

                    /**
                     * 设置The ENI type. 0: ENI. 1: EVM ENI.
                     * @param EniType The ENI type. 0: ENI. 1: EVM ENI.
                     */
                    void SetEniType(const uint64_t& _eniType);

                    /**
                     * 判断参数 EniType 是否已赋值
                     * @return EniType 是否已赋值
                     */
                    bool EniTypeHasBeenSet() const;

                private:

                    /**
                     * The ID of the ENI instance, such as `eni-f1xjkw1b`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * ENI Name
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
                     * Bound security group.
                     */
                    std::vector<std::string> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * Whether it is the primary ENI.
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * MAC address
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * ENI status:
<li>`PENDING`: Creating</li>
<li>`AVAILABLE`: Available</li>
<li>`ATTACHING`: Binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DELETING`: Deleting</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Private IP information.
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddressSet;
                    bool m_privateIpAddressSetHasBeenSet;

                    /**
                     * Bound CVM object.
Note: This field may return null, indicating no valid value.
                     */
                    NetworkInterfaceAttachment m_attachment;
                    bool m_attachmentHasBeenSet;

                    /**
                     * Availability Zone.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * The `IPv6` address list.
                     */
                    std::vector<Ipv6Address> m_ipv6AddressSet;
                    bool m_ipv6AddressSetHasBeenSet;

                    /**
                     * Tag key-value pair.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * The ENI type. 0: ENI. 1: EVM ENI.
                     */
                    uint64_t m_eniType;
                    bool m_eniTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACE_H_
