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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERDETAIL_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20180317/model/ExtraInfo.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CLB instance details
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
                     * 获取CLB instance network type:
Public: public network; Private: private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerType CLB instance network type:
Public: public network; Private: private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB instance network type:
Public: public network; Private: private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerType CLB instance network type:
Public: public network; Private: private network.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance status, including:
0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status CLB instance status, including:
0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置CLB instance status, including:
0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _status CLB instance status, including:
0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance VIP.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Address CLB instance VIP.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置CLB instance VIP.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _address CLB instance VIP.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取IPv6 VIP address of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AddressIPv6 IPv6 VIP address of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置IPv6 VIP address of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _addressIPv6 IPv6 VIP address of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取IP version of the CLB instance. Valid values: IPv4, IPv6.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AddressIPVersion IP version of the CLB instance. Valid values: IPv4, IPv6.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP version of the CLB instance. Valid values: IPv4, IPv6.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _addressIPVersion IP version of the CLB instance. Valid values: IPv4, IPv6.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取IPv6 address type of the CLB instance. Valid values: IPv6Nat64, IPv6FullChain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IPv6Mode IPv6 address type of the CLB instance. Valid values: IPv6Nat64, IPv6FullChain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIPv6Mode() const;

                    /**
                     * 设置IPv6 address type of the CLB instance. Valid values: IPv6Nat64, IPv6FullChain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _iPv6Mode IPv6 address type of the CLB instance. Valid values: IPv6Nat64, IPv6FullChain.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Availability zone where the CLB instance resides.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Zone Availability zone where the CLB instance resides.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone where the CLB instance resides.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _zone Availability zone where the CLB instance resides.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ISP for the IP address of the CLB instance. Valid values: BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom), INTERNAL (private network).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddressIsp ISP for the IP address of the CLB instance. Valid values: BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom), INTERNAL (private network).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIsp() const;

                    /**
                     * 设置ISP for the IP address of the CLB instance. Valid values: BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom), INTERNAL (private network).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addressIsp ISP for the IP address of the CLB instance. Valid values: BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom), INTERNAL (private network).Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the VPC instance to which the CLB instance belongs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcId ID of the VPC instance to which the CLB instance belongs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance to which the CLB instance belongs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId ID of the VPC instance to which the CLB instance belongs.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the project to which the CLB instance belongs. 0: default project.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId ID of the project to which the CLB instance belongs. 0: default project.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the CLB instance belongs. 0: default project.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectId ID of the project to which the CLB instance belongs. 0: default project.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing type of a CLB instance. Valid values: PREPAID (prepaid), POSTPAID_BY_HOUR (pay-as-you-go).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Billing type of a CLB instance. Valid values: PREPAID (prepaid), POSTPAID_BY_HOUR (pay-as-you-go).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type of a CLB instance. Valid values: PREPAID (prepaid), POSTPAID_BY_HOUR (pay-as-you-go).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType Billing type of a CLB instance. Valid values: PREPAID (prepaid), POSTPAID_BY_HOUR (pay-as-you-go).Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance network attribute.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NetworkAttributes CLB instance network attribute.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置CLB instance network attribute.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _networkAttributes CLB instance network attribute.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Pay-as-you-go attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrepaidAttributes Pay-as-you-go attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LBChargePrepaid GetPrepaidAttributes() const;

                    /**
                     * 设置Pay-as-you-go attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _prepaidAttributes Pay-as-you-go attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Reserved field, which can be ignored generally.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExtraInfo Reserved field, which can be ignored generally.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置Reserved field, which can be ignored generally.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _extraInfo Reserved field, which can be ignored generally.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Custom configuration IDs of CLB instances. Multiple IDs must be separated by commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigId Custom configuration IDs of CLB instances. Multiple IDs must be separated by commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Custom configuration IDs of CLB instances. Multiple IDs must be separated by commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configId Custom configuration IDs of CLB instances. Multiple IDs must be separated by commas (,).
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
                     * 获取CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tags CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListenerId CLB listener ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _listenerId CLB listener ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Listener protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Listener protocol.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _port Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LocationId Forwarding rule ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _locationId Forwarding rule ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain name of the forwarding rule.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name of the forwarding rule.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name of the forwarding rule.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Forwarding rule path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url Forwarding rule path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Forwarding rule path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _url Forwarding rule path.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TargetId ID of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置ID of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _targetId ID of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TargetAddress Address of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置Address of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _targetAddress Address of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listening port of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TargetPort Listening port of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTargetPort() const;

                    /**
                     * 设置Listening port of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _targetPort Listening port of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Forwarding weight of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TargetWeight Forwarding weight of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTargetWeight() const;

                    /**
                     * 设置Forwarding weight of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _targetWeight Forwarding weight of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取0: not isolated; 1: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Isolation 0: not isolated; 1: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0: not isolated; 1: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isolation 0: not isolated; 1: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of the security groups bound to the CLB instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecurityGroup List of the security groups bound to the CLB instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置List of the security groups bound to the CLB instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _securityGroup List of the security groups bound to the CLB instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether to enable moving up CLB security groups. Valid values: 1 (enabled), 0 (not enabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerPassToTarget Whether to enable moving up CLB security groups. Valid values: 1 (enabled), 0 (not enabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Whether to enable moving up CLB security groups. Valid values: 1 (enabled), 0 (not enabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerPassToTarget Whether to enable moving up CLB security groups. Valid values: 1 (enabled), 0 (not enabled).Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Health status of the target real server.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetHealth Health status of the target real server.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetHealth() const;

                    /**
                     * 设置Health status of the target real server.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _targetHealth Health status of the target real server.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取List o domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Domains List o domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomains() const;

                    /**
                     * 设置List o domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _domains List o domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The secondary zone of multi-AZ CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SlaveZone The secondary zone of multi-AZ CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSlaveZone() const;

                    /**
                     * 设置The secondary zone of multi-AZ CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _slaveZone The secondary zone of multi-AZ CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The AZ of private CLB instance. This is only available for beta users.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Zones The AZ of private CLB instance. This is only available for beta users.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置The AZ of private CLB instance. This is only available for beta users.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _zones The AZ of private CLB instance. This is only available for beta users.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether to enable SNI. `1`: Enable; `0`: Do not enable. This parameter is only meaningful for HTTPS listeners.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SniSwitch Whether to enable SNI. `1`: Enable; `0`: Do not enable. This parameter is only meaningful for HTTPS listeners.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable SNI. `1`: Enable; `0`: Do not enable. This parameter is only meaningful for HTTPS listeners.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _sniSwitch Whether to enable SNI. `1`: Enable; `0`: Do not enable. This parameter is only meaningful for HTTPS listeners.
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerDomain Domain name of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置Domain name of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerDomain Domain name of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Network egress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Egress Network egress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置Network egress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _egress Network egress
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取
                     * @return AttributeFlags 
                     * 
                     */
                    std::vector<std::string> GetAttributeFlags() const;

                    /**
                     * 设置
                     * @param _attributeFlags 
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
                     * 获取
                     * @return SlaType 
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置
                     * @param _slaType 
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
                     * 获取
                     * @return Exclusive 
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置
                     * @param _exclusive 
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

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
                     * CLB instance network type:
Public: public network; Private: private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB instance status, including:
0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLB instance VIP.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * IPv6 VIP address of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPv6;
                    bool m_addressIPv6HasBeenSet;

                    /**
                     * IP version of the CLB instance. Valid values: IPv4, IPv6.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * IPv6 address type of the CLB instance. Valid values: IPv6Nat64, IPv6FullChain.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPv6Mode;
                    bool m_iPv6ModeHasBeenSet;

                    /**
                     * Availability zone where the CLB instance resides.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * ISP for the IP address of the CLB instance. Valid values: BGP (multi-line), CMCC (China Mobile), CUCC (China Unicom), CTCC (China Telecom), INTERNAL (private network).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIsp;
                    bool m_addressIspHasBeenSet;

                    /**
                     * ID of the VPC instance to which the CLB instance belongs.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the project to which the CLB instance belongs. 0: default project.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Billing type of a CLB instance. Valid values: PREPAID (prepaid), POSTPAID_BY_HOUR (pay-as-you-go).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * CLB instance network attribute.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    InternetAccessible m_networkAttributes;
                    bool m_networkAttributesHasBeenSet;

                    /**
                     * Pay-as-you-go attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    LBChargePrepaid m_prepaidAttributes;
                    bool m_prepaidAttributesHasBeenSet;

                    /**
                     * Reserved field, which can be ignored generally.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Custom configuration IDs of CLB instances. Multiple IDs must be separated by commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CLB listener ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Forwarding rule ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name of the forwarding rule.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding rule path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * ID of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Address of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * Listening port of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                    /**
                     * Forwarding weight of target real servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetWeight;
                    bool m_targetWeightHasBeenSet;

                    /**
                     * 0: not isolated; 1: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * List of the security groups bound to the CLB instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Whether to enable moving up CLB security groups. Valid values: 1 (enabled), 0 (not enabled).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * Health status of the target real server.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_targetHealth;
                    bool m_targetHealthHasBeenSet;

                    /**
                     * List o domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The secondary zone of multi-AZ CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * The AZ of private CLB instance. This is only available for beta users.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Whether to enable SNI. `1`: Enable; `0`: Do not enable. This parameter is only meaningful for HTTPS listeners.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * Domain name of the CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                    /**
                     * Network egress
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERDETAIL_H_
