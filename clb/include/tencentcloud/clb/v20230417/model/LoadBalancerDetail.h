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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_LOADBALANCERDETAIL_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_LOADBALANCERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/InternetAccessible.h>
#include <tencentcloud/clb/v20230417/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20230417/model/ExtraInfo.h>
#include <tencentcloud/clb/v20230417/model/TagInfo.h>
#include <tencentcloud/clb/v20230417/model/AvailableZoneAffinityInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * CLB detailed information
                */
                class LoadBalancerDetail : public AbstractModel
                {
                public:
                    LoadBalancerDetail();
                    ~LoadBalancerDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB instance ID.
                     * @return LoadBalancerId CLB instance ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID.
                     * @param _loadBalancerId CLB instance ID.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB instance name.
                     * @return LoadBalancerName CLB instance name.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name.
                     * @param _loadBalancerName CLB instance name.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Network type of the CLB instance:
OPEN: public network attribute, INTERNAL: private network attribute. For a Cloud Load Balancer with private network attribute, you can bind EIP for outbound public network access. For details, see the EIP document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerType Network type of the CLB instance:
OPEN: public network attribute, INTERNAL: private network attribute. For a Cloud Load Balancer with private network attribute, you can bind EIP for outbound public network access. For details, see the EIP document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Network type of the CLB instance:
OPEN: public network attribute, INTERNAL: private network attribute. For a Cloud Load Balancer with private network attribute, you can bind EIP for outbound public network access. For details, see the EIP document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerType Network type of the CLB instance:
OPEN: public network attribute, INTERNAL: private network attribute. For a Cloud Load Balancer with private network attribute, you can bind EIP for outbound public network access. For details, see the EIP document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取CLB instance state, including
0: creating, 1: normal operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status CLB instance state, including
0: creating, 1: normal operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置CLB instance state, including
0: creating, 1: normal operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status CLB instance state, including
0: creating, 1: normal operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取VIP of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address VIP of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置VIP of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address VIP of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取IPv6 address of the VIP in the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddressIPv6 IPv6 address of the VIP in the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置IPv6 address of the VIP in the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addressIPv6 IPv6 address of the VIP in the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddressIPv6(const std::string& _addressIPv6);

                    /**
                     * 判断参数 AddressIPv6 是否已赋值
                     * @return AddressIPv6 是否已赋值
                     * 
                     */
                    bool AddressIPv6HasBeenSet() const;

                    /**
                     * 获取IP version of the Cloud Load Balancer instance, IPv4 | IPv6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddressIPVersion IP version of the Cloud Load Balancer instance, IPv4 | IPv6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP version of the Cloud Load Balancer instance, IPv4 | IPv6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addressIPVersion IP version of the Cloud Load Balancer instance, IPv4 | IPv6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取IPv6 address type of the Cloud Load Balancer instance: IPv6Nat64 | IPv6FullChain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IPv6Mode IPv6 address type of the Cloud Load Balancer instance: IPv6Nat64 | IPv6FullChain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIPv6Mode() const;

                    /**
                     * 设置IPv6 address type of the Cloud Load Balancer instance: IPv6Nat64 | IPv6FullChain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iPv6Mode IPv6 address type of the Cloud Load Balancer instance: IPv6Nat64 | IPv6FullChain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIPv6Mode(const std::string& _iPv6Mode);

                    /**
                     * 判断参数 IPv6Mode 是否已赋值
                     * @return IPv6Mode 是否已赋值
                     * 
                     */
                    bool IPv6ModeHasBeenSet() const;

                    /**
                     * 获取Availability Zone of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Availability Zone of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability Zone of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Availability Zone of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The ISP to which the IP address of the CLB instance belongs. Value ranges from BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom) to INTERNAL (private network).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddressIsp The ISP to which the IP address of the CLB instance belongs. Value ranges from BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom) to INTERNAL (private network).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIsp() const;

                    /**
                     * 设置The ISP to which the IP address of the CLB instance belongs. Value ranges from BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom) to INTERNAL (private network).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addressIsp The ISP to which the IP address of the CLB instance belongs. Value ranges from BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom) to INTERNAL (private network).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddressIsp(const std::string& _addressIsp);

                    /**
                     * 判断参数 AddressIsp 是否已赋值
                     * @return AddressIsp 是否已赋值
                     * 
                     */
                    bool AddressIspHasBeenSet() const;

                    /**
                     * 获取ID of the VPC that the CLB instance belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId ID of the VPC that the CLB instance belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC that the CLB instance belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId ID of the VPC that the CLB instance belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The ID of the project to which the CLB instance belongs. 0: Default project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId The ID of the project to which the CLB instance belongs. 0: Default project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置The ID of the project to which the CLB instance belongs. 0: Default project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId The ID of the project to which the CLB instance belongs. 0: Default project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取CLB instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CLB instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CLB instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime CLB instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Billing type of the CLB instance. Valid values: PREPAID and POSTPAID_BY_HOUR (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Billing type of the CLB instance. Valid values: PREPAID and POSTPAID_BY_HOUR (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type of the CLB instance. Valid values: PREPAID and POSTPAID_BY_HOUR (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType Billing type of the CLB instance. Valid values: PREPAID and POSTPAID_BY_HOUR (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Network properties of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkAttributes Network properties of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置Network properties of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkAttributes Network properties of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkAttributes(const InternetAccessible& _networkAttributes);

                    /**
                     * 判断参数 NetworkAttributes 是否已赋值
                     * @return NetworkAttributes 是否已赋值
                     * 
                     */
                    bool NetworkAttributesHasBeenSet() const;

                    /**
                     * 获取Prepaid billing attributes of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrepaidAttributes Prepaid billing attributes of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LBChargePrepaid GetPrepaidAttributes() const;

                    /**
                     * 设置Prepaid billing attributes of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _prepaidAttributes Prepaid billing attributes of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrepaidAttributes(const LBChargePrepaid& _prepaidAttributes);

                    /**
                     * 判断参数 PrepaidAttributes 是否已赋值
                     * @return PrepaidAttributes 是否已赋值
                     * 
                     */
                    bool PrepaidAttributesHasBeenSet() const;

                    /**
                     * 获取Reserved. Generally unnecessary for users to concern.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraInfo Reserved. Generally unnecessary for users to concern.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置Reserved. Generally unnecessary for users to concern.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraInfo Reserved. Generally unnecessary for users to concern.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtraInfo(const ExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Personalized configuration ID of the Cloud Load Balancer (CLB) dimension. Multiple configurations are separated by commas.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigId Personalized configuration ID of the Cloud Load Balancer (CLB) dimension. Multiple configurations are separated by commas.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Personalized configuration ID of the Cloud Load Balancer (CLB) dimension. Multiple configurations are separated by commas.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configId Personalized configuration ID of the Cloud Load Balancer (CLB) dimension. Multiple configurations are separated by commas.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Tag information of the GWLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information of the GWLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag information of the GWLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information of the GWLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取CLB listener ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ListenerId CLB listener ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _listenerId CLB listener ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Listener protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Listener protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Listener protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listener port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Listener port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listener port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Listener port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Forwarding rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocationId Forwarding rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _locationId Forwarding rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Path of forwarding rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Path of forwarding rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Path of forwarding rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Path of forwarding rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Backend target ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetId Backend target ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Backend target ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetId Backend target ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Backend target IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetAddress Backend target IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置Backend target IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetAddress Backend target IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     * 
                     */
                    bool TargetAddressHasBeenSet() const;

                    /**
                     * 获取Backend target listening port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetPort Backend target listening port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTargetPort() const;

                    /**
                     * 设置Backend target listening port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetPort Backend target listening port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetPort(const uint64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     * 
                     */
                    bool TargetPortHasBeenSet() const;

                    /**
                     * 获取Backend target forwarding weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetWeight Backend target forwarding weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTargetWeight() const;

                    /**
                     * 设置Backend target forwarding weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetWeight Backend target forwarding weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetWeight(const uint64_t& _targetWeight);

                    /**
                     * 判断参数 TargetWeight 是否已赋值
                     * @return TargetWeight 是否已赋值
                     * 
                     */
                    bool TargetWeightHasBeenSet() const;

                    /**
                     * 获取0: Not isolated; 1: Isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Isolation 0: Not isolated; 1: Isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0: Not isolated; 1: Isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolation 0: Not isolated; 1: Isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolation(const uint64_t& _isolation);

                    /**
                     * 判断参数 Isolation 是否已赋值
                     * @return Isolation 是否已赋值
                     * 
                     */
                    bool IsolationHasBeenSet() const;

                    /**
                     * 获取List of security groups bound to Cloud Load Balancer (CLB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecurityGroup List of security groups bound to Cloud Load Balancer (CLB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置List of security groups bound to Cloud Load Balancer (CLB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _securityGroup List of security groups bound to Cloud Load Balancer (CLB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Valid values: 1 (enabled), 0 (not enabled). Value ranges from 1 to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerPassToTarget Valid values: 1 (enabled), 0 (not enabled). Value ranges from 1 to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Valid values: 1 (enabled), 0 (not enabled). Value ranges from 1 to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerPassToTarget Valid values: 1 (enabled), 0 (not enabled). Value ranges from 1 to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const uint64_t& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取Backend target health status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetHealth Backend target health status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetHealth() const;

                    /**
                     * 设置Backend target health status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetHealth Backend target health status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetHealth(const std::string& _targetHealth);

                    /**
                     * 判断参数 TargetHealth 是否已赋值
                     * @return TargetHealth 是否已赋值
                     * 
                     */
                    bool TargetHealthHasBeenSet() const;

                    /**
                     * 获取Domain name list of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domains Domain name list of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomains() const;

                    /**
                     * 设置Domain name list of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domains Domain name list of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomains(const std::string& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Multi-availability zone Cloud Load Balancer instance selected backup availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaveZone Multi-availability zone Cloud Load Balancer instance selected backup availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSlaveZone() const;

                    /**
                     * 设置Multi-availability zone Cloud Load Balancer instance selected backup availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _slaveZone Multi-availability zone Cloud Load Balancer instance selected backup availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSlaveZone(const std::vector<std::string>& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取The availability zone of the private network CLB instance is controlled by the allowlist CLB_Internal_Zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zones The availability zone of the private network CLB instance is controlled by the allowlist CLB_Internal_Zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置The availability zone of the private network CLB instance is controlled by the allowlist CLB_Internal_Zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zones The availability zone of the private network CLB instance is controlled by the allowlist CLB_Internal_Zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Whether to enable the SNI feature. 1: enable; 0: disable (this parameter is applicable only to HTTPS listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SniSwitch Whether to enable the SNI feature. 1: enable; 0: disable (this parameter is applicable only to HTTPS listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable the SNI feature. 1: enable; 0: disable (this parameter is applicable only to HTTPS listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sniSwitch Whether to enable the SNI feature. 1: enable; 0: disable (this parameter is applicable only to HTTPS listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     * 
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取Domain name of the CLB instance.
                     * @return LoadBalancerDomain Domain name of the CLB instance.
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置Domain name of the CLB instance.
                     * @param _loadBalancerDomain Domain name of the CLB instance.
                     * 
                     */
                    void SetLoadBalancerDomain(const std::string& _loadBalancerDomain);

                    /**
                     * 判断参数 LoadBalancerDomain 是否已赋值
                     * @return LoadBalancerDomain 是否已赋值
                     * 
                     */
                    bool LoadBalancerDomainHasBeenSet() const;

                    /**
                     * 获取Network outbound
                     * @return Egress Network outbound
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置Network outbound
                     * @param _egress Network outbound
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取Attributes of Cloud Load Balancer
                     * @return AttributeFlags Attributes of Cloud Load Balancer
                     * 
                     */
                    std::vector<std::string> GetAttributeFlags() const;

                    /**
                     * 设置Attributes of Cloud Load Balancer
                     * @param _attributeFlags Attributes of Cloud Load Balancer
                     * 
                     */
                    void SetAttributeFlags(const std::vector<std::string>& _attributeFlags);

                    /**
                     * 判断参数 AttributeFlags 是否已赋值
                     * @return AttributeFlags 是否已赋值
                     * 
                     */
                    bool AttributeFlagsHasBeenSet() const;

                    /**
                     * 获取Specification type information of Cloud Load Balancer instance<ul><li> clb.c1.small: Minimalist specification </li><li>clb.c2.medium: Standard specification </li><li> clb.c3.small: Advanced type 1 specification </li><li> clb.c3.medium: Advanced type 2 specification </li><li> clb.c4.small: Super type 1 specification </li><li> clb.c4.medium: Super type 2 specification </li><li> clb.c4.large: Super type 3 specification </li><li> clb.c4.xlarge: Super type 4 specification </li><li>\"\": Non-LCU-supported instance</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaType Specification type information of Cloud Load Balancer instance<ul><li> clb.c1.small: Minimalist specification </li><li>clb.c2.medium: Standard specification </li><li> clb.c3.small: Advanced type 1 specification </li><li> clb.c3.medium: Advanced type 2 specification </li><li> clb.c4.small: Super type 1 specification </li><li> clb.c4.medium: Super type 2 specification </li><li> clb.c4.large: Super type 3 specification </li><li> clb.c4.xlarge: Super type 4 specification </li><li>\"\": Non-LCU-supported instance</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Specification type information of Cloud Load Balancer instance<ul><li> clb.c1.small: Minimalist specification </li><li>clb.c2.medium: Standard specification </li><li> clb.c3.small: Advanced type 1 specification </li><li> clb.c3.medium: Advanced type 2 specification </li><li> clb.c4.small: Super type 1 specification </li><li> clb.c4.medium: Super type 2 specification </li><li> clb.c4.large: Super type 3 specification </li><li> clb.c4.xlarge: Super type 4 specification </li><li>\"\": Non-LCU-supported instance</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _slaType Specification type information of Cloud Load Balancer instance<ul><li> clb.c1.small: Minimalist specification </li><li>clb.c2.medium: Standard specification </li><li> clb.c3.small: Advanced type 1 specification </li><li> clb.c3.medium: Advanced type 2 specification </li><li> clb.c4.small: Super type 1 specification </li><li> clb.c4.medium: Super type 2 specification </li><li> clb.c4.large: Super type 3 specification </li><li> clb.c4.xlarge: Super type 4 specification </li><li>\"\": Non-LCU-supported instance</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取0: Non-exclusive type instance; 1: Exclusive type instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Exclusive 0: Non-exclusive type instance; 1: Exclusive type instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置0: Non-exclusive type instance; 1: Exclusive type instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exclusive 0: Non-exclusive type instance; 1: Exclusive type instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取Availability zone forward affinity info
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailableZoneAffinityInfo Availability zone forward affinity info
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AvailableZoneAffinityInfo GetAvailableZoneAffinityInfo() const;

                    /**
                     * 设置Availability zone forward affinity info
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availableZoneAffinityInfo Availability zone forward affinity info
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableZoneAffinityInfo(const AvailableZoneAffinityInfo& _availableZoneAffinityInfo);

                    /**
                     * 判断参数 AvailableZoneAffinityInfo 是否已赋值
                     * @return AvailableZoneAffinityInfo 是否已赋值
                     * 
                     */
                    bool AvailableZoneAffinityInfoHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB instance name.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Network type of the CLB instance:
OPEN: public network attribute, INTERNAL: private network attribute. For a Cloud Load Balancer with private network attribute, you can bind EIP for outbound public network access. For details, see the EIP document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB instance state, including
0: creating, 1: normal operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VIP of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * IPv6 address of the VIP in the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPv6;
                    bool m_addressIPv6HasBeenSet;

                    /**
                     * IP version of the Cloud Load Balancer instance, IPv4 | IPv6.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * IPv6 address type of the Cloud Load Balancer instance: IPv6Nat64 | IPv6FullChain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPv6Mode;
                    bool m_iPv6ModeHasBeenSet;

                    /**
                     * Availability Zone of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The ISP to which the IP address of the CLB instance belongs. Value ranges from BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom) to INTERNAL (private network).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIsp;
                    bool m_addressIspHasBeenSet;

                    /**
                     * ID of the VPC that the CLB instance belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The ID of the project to which the CLB instance belongs. 0: Default project.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * CLB instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Billing type of the CLB instance. Valid values: PREPAID and POSTPAID_BY_HOUR (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Network properties of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InternetAccessible m_networkAttributes;
                    bool m_networkAttributesHasBeenSet;

                    /**
                     * Prepaid billing attributes of the Cloud Load Balancer instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LBChargePrepaid m_prepaidAttributes;
                    bool m_prepaidAttributesHasBeenSet;

                    /**
                     * Reserved. Generally unnecessary for users to concern.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Personalized configuration ID of the Cloud Load Balancer (CLB) dimension. Multiple configurations are separated by commas.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Tag information of the GWLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CLB listener ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Forwarding rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Path of forwarding rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Backend target ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Backend target IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * Backend target listening port.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                    /**
                     * Backend target forwarding weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetWeight;
                    bool m_targetWeightHasBeenSet;

                    /**
                     * 0: Not isolated; 1: Isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * List of security groups bound to Cloud Load Balancer (CLB).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Valid values: 1 (enabled), 0 (not enabled). Value ranges from 1 to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * Backend target health status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetHealth;
                    bool m_targetHealthHasBeenSet;

                    /**
                     * Domain name list of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Multi-availability zone Cloud Load Balancer instance selected backup availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * The availability zone of the private network CLB instance is controlled by the allowlist CLB_Internal_Zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Whether to enable the SNI feature. 1: enable; 0: disable (this parameter is applicable only to HTTPS listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * Domain name of the CLB instance.
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                    /**
                     * Network outbound
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * Attributes of Cloud Load Balancer
                     */
                    std::vector<std::string> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

                    /**
                     * Specification type information of Cloud Load Balancer instance<ul><li> clb.c1.small: Minimalist specification </li><li>clb.c2.medium: Standard specification </li><li> clb.c3.small: Advanced type 1 specification </li><li> clb.c3.medium: Advanced type 2 specification </li><li> clb.c4.small: Super type 1 specification </li><li> clb.c4.medium: Super type 2 specification </li><li> clb.c4.large: Super type 3 specification </li><li> clb.c4.xlarge: Super type 4 specification </li><li>\"\": Non-LCU-supported instance</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * 0: Non-exclusive type instance; 1: Exclusive type instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * Availability zone forward affinity info
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AvailableZoneAffinityInfo m_availableZoneAffinityInfo;
                    bool m_availableZoneAffinityInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_LOADBALANCERDETAIL_H_
