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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/TagInfo.h>
#include <tencentcloud/clb/v20230417/model/TargetRegionInfo.h>
#include <tencentcloud/clb/v20230417/model/ZoneInfo.h>
#include <tencentcloud/clb/v20230417/model/InternetAccessible.h>
#include <tencentcloud/clb/v20230417/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20230417/model/ExtraInfo.h>
#include <tencentcloud/clb/v20230417/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20230417/model/SnatIp.h>
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
                * CLB instance information
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
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
OPEN: Public network attribute. INTERNAL: Intranet attribute. For a CLB with intranet attribute, you can bind EIP for public network access. For details, see the EIP document.
                     * @return LoadBalancerType Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Intranet attribute. For a CLB with intranet attribute, you can bind EIP for public network access. For details, see the EIP document.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Intranet attribute. For a CLB with intranet attribute, you can bind EIP for public network access. For details, see the EIP document.
                     * @param _loadBalancerType Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Intranet attribute. For a CLB with intranet attribute, you can bind EIP for public network access. For details, see the EIP document.
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
                     * 获取Load balancer type identifier. 1: CLB; 0: Classic CLB.
                     * @return Forward Load balancer type identifier. 1: CLB; 0: Classic CLB.
                     * 
                     */
                    uint64_t GetForward() const;

                    /**
                     * 设置Load balancer type identifier. 1: CLB; 0: Classic CLB.
                     * @param _forward Load balancer type identifier. 1: CLB; 0: Classic CLB.
                     * 
                     */
                    void SetForward(const uint64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     * 
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取The domain name of the Cloud Load Balancer instance. This field is only provided by public network-based and domain name-based CLB instances. It is being gradually phased out. We recommend using LoadBalancerDomain instead.
                     * @return Domain The domain name of the Cloud Load Balancer instance. This field is only provided by public network-based and domain name-based CLB instances. It is being gradually phased out. We recommend using LoadBalancerDomain instead.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name of the Cloud Load Balancer instance. This field is only provided by public network-based and domain name-based CLB instances. It is being gradually phased out. We recommend using LoadBalancerDomain instead.
                     * @param _domain The domain name of the Cloud Load Balancer instance. This field is only provided by public network-based and domain name-based CLB instances. It is being gradually phased out. We recommend using LoadBalancerDomain instead.
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
                     * 获取List of VIPs of a CLB instance.
                     * @return LoadBalancerVips List of VIPs of a CLB instance.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置List of VIPs of a CLB instance.
                     * @param _loadBalancerVips List of VIPs of a CLB instance.
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取CLB instance state, including
0: creating, 1: normal operation.
                     * @return Status CLB instance state, including
0: creating, 1: normal operation.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置CLB instance state, including
0: creating, 1: normal operation.
                     * @param _status CLB instance state, including
0: creating, 1: normal operation.
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
                     * 获取CLB instance creation time
                     * @return CreateTime CLB instance creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CLB instance creation time
                     * @param _createTime CLB instance creation time
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
                     * 获取Last status transition time of the CLB instance.
                     * @return StatusTime Last status transition time of the CLB instance.
                     * 
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置Last status transition time of the CLB instance.
                     * @param _statusTime Last status transition time of the CLB instance.
                     * 
                     */
                    void SetStatusTime(const std::string& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     * 
                     */
                    bool StatusTimeHasBeenSet() const;

                    /**
                     * 获取The ID of the project to which the CLB instance belongs. 0: Default project.
                     * @return ProjectId The ID of the project to which the CLB instance belongs. 0: Default project.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置The ID of the project to which the CLB instance belongs. 0: Default project.
                     * @param _projectId The ID of the project to which the CLB instance belongs. 0: Default project.
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
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取Anti-DDoS Pro identifier for CLB. 1: CLB with Anti-DDoS Pro; 0: CLB without Anti-DDoS Pro.
                     * @return OpenBgp Anti-DDoS Pro identifier for CLB. 1: CLB with Anti-DDoS Pro; 0: CLB without Anti-DDoS Pro.
                     * 
                     */
                    uint64_t GetOpenBgp() const;

                    /**
                     * 设置Anti-DDoS Pro identifier for CLB. 1: CLB with Anti-DDoS Pro; 0: CLB without Anti-DDoS Pro.
                     * @param _openBgp Anti-DDoS Pro identifier for CLB. 1: CLB with Anti-DDoS Pro; 0: CLB without Anti-DDoS Pro.
                     * 
                     */
                    void SetOpenBgp(const uint64_t& _openBgp);

                    /**
                     * 判断参数 OpenBgp 是否已赋值
                     * @return OpenBgp 是否已赋值
                     * 
                     */
                    bool OpenBgpHasBeenSet() const;

                    /**
                     * 获取Private network Classic CLB instances before December 2016 had SNAT enabled.
                     * @return Snat Private network Classic CLB instances before December 2016 had SNAT enabled.
                     * 
                     */
                    bool GetSnat() const;

                    /**
                     * 设置Private network Classic CLB instances before December 2016 had SNAT enabled.
                     * @param _snat Private network Classic CLB instances before December 2016 had SNAT enabled.
                     * 
                     */
                    void SetSnat(const bool& _snat);

                    /**
                     * 判断参数 Snat 是否已赋值
                     * @return Snat 是否已赋值
                     * 
                     */
                    bool SnatHasBeenSet() const;

                    /**
                     * 获取0: Not isolated; 1: Isolated.
                     * @return Isolation 0: Not isolated; 1: Isolated.
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0: Not isolated; 1: Isolated.
                     * @param _isolation 0: Not isolated; 1: Isolated.
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
                     * 获取User-enabled log information. Only public network CLB instances that have an HTTP or HTTPS listener can generate logs.
                     * @return Log User-enabled log information. Only public network CLB instances that have an HTTP or HTTPS listener can generate logs.
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置User-enabled log information. Only public network CLB instances that have an HTTP or HTTPS listener can generate logs.
                     * @param _log User-enabled log information. Only public network CLB instances that have an HTTP or HTTPS listener can generate logs.
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取Subnet of the CLB instance (applicable only to VPC-type CLB instances on private networks)
                     * @return SubnetId Subnet of the CLB instance (applicable only to VPC-type CLB instances on private networks)
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet of the CLB instance (applicable only to VPC-type CLB instances on private networks)
                     * @param _subnetId Subnet of the CLB instance (applicable only to VPC-type CLB instances on private networks)
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
                     * 获取CLB instance tag information
                     * @return Tags CLB instance tag information
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置CLB instance tag information
                     * @param _tags CLB instance tag information
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
                     * 获取Security group of the CLB instance
                     * @return SecureGroups Security group of the CLB instance
                     * 
                     */
                    std::vector<std::string> GetSecureGroups() const;

                    /**
                     * 设置Security group of the CLB instance
                     * @param _secureGroups Security group of the CLB instance
                     * 
                     */
                    void SetSecureGroups(const std::vector<std::string>& _secureGroups);

                    /**
                     * 判断参数 SecureGroups 是否已赋值
                     * @return SecureGroups 是否已赋值
                     * 
                     */
                    bool SecureGroupsHasBeenSet() const;

                    /**
                     * 获取Basic information of real servers bound to the CLB instance
                     * @return TargetRegionInfo Basic information of real servers bound to the CLB instance
                     * 
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置Basic information of real servers bound to the CLB instance
                     * @param _targetRegionInfo Basic information of real servers bound to the CLB instance
                     * 
                     */
                    void SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo);

                    /**
                     * 判断参数 TargetRegionInfo 是否已赋值
                     * @return TargetRegionInfo 是否已赋值
                     * 
                     */
                    bool TargetRegionInfoHasBeenSet() const;

                    /**
                     * 获取Anycast CLB release domain. For non-anycast CLB, this field returns an empty string.
                     * @return AnycastZone Anycast CLB release domain. For non-anycast CLB, this field returns an empty string.
                     * 
                     */
                    std::string GetAnycastZone() const;

                    /**
                     * 设置Anycast CLB release domain. For non-anycast CLB, this field returns an empty string.
                     * @param _anycastZone Anycast CLB release domain. For non-anycast CLB, this field returns an empty string.
                     * 
                     */
                    void SetAnycastZone(const std::string& _anycastZone);

                    /**
                     * 判断参数 AnycastZone 是否已赋值
                     * @return AnycastZone 是否已赋值
                     * 
                     */
                    bool AnycastZoneHasBeenSet() const;

                    /**
                     * 获取IP Version, ipv4 | ipv6
                     * @return AddressIPVersion IP Version, ipv4 | ipv6
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP Version, ipv4 | ipv6
                     * @param _addressIPVersion IP Version, ipv4 | ipv6
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
                     * 获取VPC ID in numerical format
                     * @return NumericalVpcId VPC ID in numerical format
                     * 
                     */
                    uint64_t GetNumericalVpcId() const;

                    /**
                     * 设置VPC ID in numerical format
                     * @param _numericalVpcId VPC ID in numerical format
                     * 
                     */
                    void SetNumericalVpcId(const uint64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取ISP of the load balancer IP. Value ranges from BGP to CUCC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VipIsp ISP of the load balancer IP. Value ranges from BGP to CUCC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置ISP of the load balancer IP. Value ranges from BGP to CUCC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vipIsp ISP of the load balancer IP. Value ranges from BGP to CUCC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取Primary AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterZone Primary AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ZoneInfo GetMasterZone() const;

                    /**
                     * 设置Primary AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterZone Primary AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMasterZone(const ZoneInfo& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取standby availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupZoneSet standby availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ZoneInfo> GetBackupZoneSet() const;

                    /**
                     * 设置standby availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupZoneSet standby availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupZoneSet(const std::vector<ZoneInfo>& _backupZoneSet);

                    /**
                     * 判断参数 BackupZoneSet 是否已赋值
                     * @return BackupZoneSet 是否已赋值
                     * 
                     */
                    bool BackupZoneSetHasBeenSet() const;

                    /**
                     * 获取CLB instance isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolatedTime CLB instance isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置CLB instance isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolatedTime CLB instance isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Expiration Time of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration Time of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration Time of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration Time of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Billing type of the Cloud Load Balancer instance, PREPAID: Monthly Subscription, POSTPAID_BY_HOUR: Pay-As-You-Go
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Billing type of the Cloud Load Balancer instance, PREPAID: Monthly Subscription, POSTPAID_BY_HOUR: Pay-As-You-Go
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type of the Cloud Load Balancer instance, PREPAID: Monthly Subscription, POSTPAID_BY_HOUR: Pay-As-You-Go
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType Billing type of the Cloud Load Balancer instance, PREPAID: Monthly Subscription, POSTPAID_BY_HOUR: Pay-As-You-Go
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
                     * 获取CLB instance network attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkAttributes CLB instance network attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置CLB instance network attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkAttributes CLB instance network attributes
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
                     * 获取Reserved field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrepaidAttributes Reserved field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LBChargePrepaid GetPrepaidAttributes() const;

                    /**
                     * 设置Reserved field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _prepaidAttributes Reserved field.
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
                     * 获取Log set ID of Cloud Log Service (CLS) for CLB
                     * @return LogSetId Log set ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Log set ID of Cloud Log Service (CLS) for CLB
                     * @param _logSetId Log set ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID of Cloud Log Service (CLS) for CLB
                     * @return LogTopicId Log topic ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Log topic ID of Cloud Log Service (CLS) for CLB
                     * @param _logTopicId Log topic ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取IPv6 address of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddressIPv6 IPv6 address of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置IPv6 address of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addressIPv6 IPv6 address of the CLB instance
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
                     * 获取Whether an Anti-DDoS Pro instance can be bound
                     * @return IsDDos Whether an Anti-DDoS Pro instance can be bound
                     * 
                     */
                    bool GetIsDDos() const;

                    /**
                     * 设置Whether an Anti-DDoS Pro instance can be bound
                     * @param _isDDos Whether an Anti-DDoS Pro instance can be bound
                     * 
                     */
                    void SetIsDDos(const bool& _isDDos);

                    /**
                     * 判断参数 IsDDos 是否已赋值
                     * @return IsDDos 是否已赋值
                     * 
                     */
                    bool IsDDosHasBeenSet() const;

                    /**
                     * 获取Custom configuration IDs of CLB instances
                     * @return ConfigId Custom configuration IDs of CLB instances
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Custom configuration IDs of CLB instances
                     * @param _configId Custom configuration IDs of CLB instances
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
                     * 获取Whether the real server allows traffic from CLB
                     * @return LoadBalancerPassToTarget Whether the real server allows traffic from CLB
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Whether the real server allows traffic from CLB
                     * @param _loadBalancerPassToTarget Whether the real server allows traffic from CLB
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster on the private network
                     * @return ExclusiveCluster Exclusive cluster on the private network
                     * 
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置Exclusive cluster on the private network
                     * @param _exclusiveCluster Exclusive cluster on the private network
                     * 
                     */
                    void SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster);

                    /**
                     * 判断参数 ExclusiveCluster 是否已赋值
                     * @return ExclusiveCluster 是否已赋值
                     * 
                     */
                    bool ExclusiveClusterHasBeenSet() const;

                    /**
                     * 获取This field is meaningful when the IP address version is IPv6. IPv6Nat64 | IPv6FullChain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IPv6Mode This field is meaningful when the IP address version is IPv6. IPv6Nat64 | IPv6FullChain
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIPv6Mode() const;

                    /**
                     * 设置This field is meaningful when the IP address version is IPv6. IPv6Nat64 | IPv6FullChain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iPv6Mode This field is meaningful when the IP address version is IPv6. IPv6Nat64 | IPv6FullChain
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
                     * 获取Is SnatPro enabled?
                     * @return SnatPro Is SnatPro enabled?
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Is SnatPro enabled?
                     * @param _snatPro Is SnatPro enabled?
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取After enabling SnatPro load balancing, the SnatIp list.
                     * @return SnatIps After enabling SnatPro load balancing, the SnatIp list.
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置After enabling SnatPro load balancing, the SnatIp list.
                     * @param _snatIps After enabling SnatPro load balancing, the SnatIp list.
                     * 
                     */
                    void SetSnatIps(const std::vector<SnatIp>& _snatIps);

                    /**
                     * 判断参数 SnatIps 是否已赋值
                     * @return SnatIps 是否已赋值
                     * 
                     */
                    bool SnatIpsHasBeenSet() const;

                    /**
                     * 获取Performance capacity specification.<ul><li> clb.c1.small: Minimalist specification </li><li> clb.c2.medium: Standard specification </li><li> clb.c3.small: High-tier 1 specification </li><li> clb.c3.medium: High-tier 2 specification </li><li> clb.c4.small: Super-tier 1 specification </li><li> clb.c4.medium: Super-tier 2 specification </li><li> clb.c4.large: Super-tier 3 specification </li><li> clb.c4.xlarge: Super-tier 4 specification </li><li>"": Non-LCU-supported instance</li></ul>
                     * @return SlaType Performance capacity specification.<ul><li> clb.c1.small: Minimalist specification </li><li> clb.c2.medium: Standard specification </li><li> clb.c3.small: High-tier 1 specification </li><li> clb.c3.medium: High-tier 2 specification </li><li> clb.c4.small: Super-tier 1 specification </li><li> clb.c4.medium: Super-tier 2 specification </li><li> clb.c4.large: Super-tier 3 specification </li><li> clb.c4.xlarge: Super-tier 4 specification </li><li>"": Non-LCU-supported instance</li></ul>
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Performance capacity specification.<ul><li> clb.c1.small: Minimalist specification </li><li> clb.c2.medium: Standard specification </li><li> clb.c3.small: High-tier 1 specification </li><li> clb.c3.medium: High-tier 2 specification </li><li> clb.c4.small: Super-tier 1 specification </li><li> clb.c4.medium: Super-tier 2 specification </li><li> clb.c4.large: Super-tier 3 specification </li><li> clb.c4.xlarge: Super-tier 4 specification </li><li>"": Non-LCU-supported instance</li></ul>
                     * @param _slaType Performance capacity specification.<ul><li> clb.c1.small: Minimalist specification </li><li> clb.c2.medium: Standard specification </li><li> clb.c3.small: High-tier 1 specification </li><li> clb.c3.medium: High-tier 2 specification </li><li> clb.c4.small: Super-tier 1 specification </li><li> clb.c4.medium: Super-tier 2 specification </li><li> clb.c4.large: Super-tier 3 specification </li><li> clb.c4.xlarge: Super-tier 4 specification </li><li>"": Non-LCU-supported instance</li></ul>
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
                     * 获取Whether VIP is blocked
                     * @return IsBlock Whether VIP is blocked
                     * 
                     */
                    bool GetIsBlock() const;

                    /**
                     * 设置Whether VIP is blocked
                     * @param _isBlock Whether VIP is blocked
                     * 
                     */
                    void SetIsBlock(const bool& _isBlock);

                    /**
                     * 判断参数 IsBlock 是否已赋值
                     * @return IsBlock 是否已赋值
                     * 
                     */
                    bool IsBlockHasBeenSet() const;

                    /**
                     * 获取Blocking or unblocking time
                     * @return IsBlockTime Blocking or unblocking time
                     * 
                     */
                    std::string GetIsBlockTime() const;

                    /**
                     * 设置Blocking or unblocking time
                     * @param _isBlockTime Blocking or unblocking time
                     * 
                     */
                    void SetIsBlockTime(const std::string& _isBlockTime);

                    /**
                     * 判断参数 IsBlockTime 是否已赋值
                     * @return IsBlockTime 是否已赋值
                     * 
                     */
                    bool IsBlockTimeHasBeenSet() const;

                    /**
                     * 获取Whether the IP type is Local BGP
                     * @return LocalBgp Whether the IP type is Local BGP
                     * 
                     */
                    bool GetLocalBgp() const;

                    /**
                     * 设置Whether the IP type is Local BGP
                     * @param _localBgp Whether the IP type is Local BGP
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
                     * 获取Layer-7 exclusive tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterTag Layer-7 exclusive tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置Layer-7 exclusive tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterTag Layer-7 exclusive tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterTag(const std::string& _clusterTag);

                    /**
                     * 判断参数 ClusterTag 是否已赋值
                     * @return ClusterTag 是否已赋值
                     * 
                     */
                    bool ClusterTagHasBeenSet() const;

                    /**
                     * 获取If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with IPv4 and IPv6 CVM instances simultaneously.
                     * @return MixIpTarget If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with IPv4 and IPv6 CVM instances simultaneously.
                     * 
                     */
                    bool GetMixIpTarget() const;

                    /**
                     * 设置If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with IPv4 and IPv6 CVM instances simultaneously.
                     * @param _mixIpTarget If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with IPv4 and IPv6 CVM instances simultaneously.
                     * 
                     */
                    void SetMixIpTarget(const bool& _mixIpTarget);

                    /**
                     * 判断参数 MixIpTarget 是否已赋值
                     * @return MixIpTarget 是否已赋值
                     * 
                     */
                    bool MixIpTargetHasBeenSet() const;

                    /**
                     * 获取VPC-based private network CLB. AZ where the rule is in proximity access mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zones VPC-based private network CLB. AZ where the rule is in proximity access mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置VPC-based private network CLB. AZ where the rule is in proximity access mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zones VPC-based private network CLB. AZ where the rule is in proximity access mode
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
                     * 获取Whether CLB is NFV. Empty: No; l7nfv: NFV for layer 7.
                     * @return NfvInfo Whether CLB is NFV. Empty: No; l7nfv: NFV for layer 7.
                     * 
                     */
                    std::string GetNfvInfo() const;

                    /**
                     * 设置Whether CLB is NFV. Empty: No; l7nfv: NFV for layer 7.
                     * @param _nfvInfo Whether CLB is NFV. Empty: No; l7nfv: NFV for layer 7.
                     * 
                     */
                    void SetNfvInfo(const std::string& _nfvInfo);

                    /**
                     * 判断参数 NfvInfo 是否已赋值
                     * @return NfvInfo 是否已赋值
                     * 
                     */
                    bool NfvInfoHasBeenSet() const;

                    /**
                     * 获取Health check log set ID of Cloud Log Service (CLS) for CLB
                     * @return HealthLogSetId Health check log set ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    std::string GetHealthLogSetId() const;

                    /**
                     * 设置Health check log set ID of Cloud Log Service (CLS) for CLB
                     * @param _healthLogSetId Health check log set ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    void SetHealthLogSetId(const std::string& _healthLogSetId);

                    /**
                     * 判断参数 HealthLogSetId 是否已赋值
                     * @return HealthLogSetId 是否已赋值
                     * 
                     */
                    bool HealthLogSetIdHasBeenSet() const;

                    /**
                     * 获取Health check log topic ID of Cloud Log Service (CLS) for CLB
                     * @return HealthLogTopicId Health check log topic ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    std::string GetHealthLogTopicId() const;

                    /**
                     * 设置Health check log topic ID of Cloud Log Service (CLS) for CLB
                     * @param _healthLogTopicId Health check log topic ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    void SetHealthLogTopicId(const std::string& _healthLogTopicId);

                    /**
                     * 判断参数 HealthLogTopicId 是否已赋值
                     * @return HealthLogTopicId 是否已赋值
                     * 
                     */
                    bool HealthLogTopicIdHasBeenSet() const;

                    /**
                     * 获取Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterIds Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterIds Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

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
                     * 获取Whether the instance type is exclusive type. 1: Dedicated instance. 0: Non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Exclusive Whether the instance type is exclusive type. 1: Dedicated instance. 0: Non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置Whether the instance type is exclusive type. 1: Dedicated instance. 0: Non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exclusive Whether the instance type is exclusive type. 1: Dedicated instance. 0: Non-dedicated instance.
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
                     * 获取Number of bound backend services.
                     * @return TargetCount Number of bound backend services.
                     * 
                     */
                    uint64_t GetTargetCount() const;

                    /**
                     * 设置Number of bound backend services.
                     * @param _targetCount Number of bound backend services.
                     * 
                     */
                    void SetTargetCount(const uint64_t& _targetCount);

                    /**
                     * 判断参数 TargetCount 是否已赋值
                     * @return TargetCount 是否已赋值
                     * 
                     */
                    bool TargetCountHasBeenSet() const;

                    /**
                     * 获取Endpoint Id associated with the CLB instance.
                     * @return AssociateEndpoint Endpoint Id associated with the CLB instance.
                     * 
                     */
                    std::string GetAssociateEndpoint() const;

                    /**
                     * 设置Endpoint Id associated with the CLB instance.
                     * @param _associateEndpoint Endpoint Id associated with the CLB instance.
                     * 
                     */
                    void SetAssociateEndpoint(const std::string& _associateEndpoint);

                    /**
                     * 判断参数 AssociateEndpoint 是否已赋值
                     * @return AssociateEndpoint 是否已赋值
                     * 
                     */
                    bool AssociateEndpointHasBeenSet() const;

                    /**
                     * 获取Availability zone forward affinity info
                     * @return AvailableZoneAffinityInfo Availability zone forward affinity info
                     * 
                     */
                    AvailableZoneAffinityInfo GetAvailableZoneAffinityInfo() const;

                    /**
                     * 设置Availability zone forward affinity info
                     * @param _availableZoneAffinityInfo Availability zone forward affinity info
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
OPEN: Public network attribute. INTERNAL: Intranet attribute. For a CLB with intranet attribute, you can bind EIP for public network access. For details, see the EIP document.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * Load balancer type identifier. 1: CLB; 0: Classic CLB.
                     */
                    uint64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * The domain name of the Cloud Load Balancer instance. This field is only provided by public network-based and domain name-based CLB instances. It is being gradually phased out. We recommend using LoadBalancerDomain instead.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * List of VIPs of a CLB instance.
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * CLB instance state, including
0: creating, 1: normal operation.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLB instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last status transition time of the CLB instance.
                     */
                    std::string m_statusTime;
                    bool m_statusTimeHasBeenSet;

                    /**
                     * The ID of the project to which the CLB instance belongs. 0: Default project.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Anti-DDoS Pro identifier for CLB. 1: CLB with Anti-DDoS Pro; 0: CLB without Anti-DDoS Pro.
                     */
                    uint64_t m_openBgp;
                    bool m_openBgpHasBeenSet;

                    /**
                     * Private network Classic CLB instances before December 2016 had SNAT enabled.
                     */
                    bool m_snat;
                    bool m_snatHasBeenSet;

                    /**
                     * 0: Not isolated; 1: Isolated.
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * User-enabled log information. Only public network CLB instances that have an HTTP or HTTPS listener can generate logs.
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * Subnet of the CLB instance (applicable only to VPC-type CLB instances on private networks)
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * CLB instance tag information
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Security group of the CLB instance
                     */
                    std::vector<std::string> m_secureGroups;
                    bool m_secureGroupsHasBeenSet;

                    /**
                     * Basic information of real servers bound to the CLB instance
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * Anycast CLB release domain. For non-anycast CLB, this field returns an empty string.
                     */
                    std::string m_anycastZone;
                    bool m_anycastZoneHasBeenSet;

                    /**
                     * IP Version, ipv4 | ipv6
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * VPC ID in numerical format
                     */
                    uint64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * ISP of the load balancer IP. Value ranges from BGP to CUCC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * Primary AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ZoneInfo m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * standby availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneInfo> m_backupZoneSet;
                    bool m_backupZoneSetHasBeenSet;

                    /**
                     * CLB instance isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Expiration Time of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Billing type of the Cloud Load Balancer instance, PREPAID: Monthly Subscription, POSTPAID_BY_HOUR: Pay-As-You-Go
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * CLB instance network attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InternetAccessible m_networkAttributes;
                    bool m_networkAttributesHasBeenSet;

                    /**
                     * Reserved field.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LBChargePrepaid m_prepaidAttributes;
                    bool m_prepaidAttributesHasBeenSet;

                    /**
                     * Log set ID of Cloud Log Service (CLS) for CLB
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Log topic ID of Cloud Log Service (CLS) for CLB
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * IPv6 address of the CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPv6;
                    bool m_addressIPv6HasBeenSet;

                    /**
                     * Reserved. Generally unnecessary for users to concern.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Whether an Anti-DDoS Pro instance can be bound
                     */
                    bool m_isDDos;
                    bool m_isDDosHasBeenSet;

                    /**
                     * Custom configuration IDs of CLB instances
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Whether the real server allows traffic from CLB
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * Exclusive cluster on the private network
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * This field is meaningful when the IP address version is IPv6. IPv6Nat64 | IPv6FullChain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPv6Mode;
                    bool m_iPv6ModeHasBeenSet;

                    /**
                     * Is SnatPro enabled?
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * After enabling SnatPro load balancing, the SnatIp list.
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * Performance capacity specification.<ul><li> clb.c1.small: Minimalist specification </li><li> clb.c2.medium: Standard specification </li><li> clb.c3.small: High-tier 1 specification </li><li> clb.c3.medium: High-tier 2 specification </li><li> clb.c4.small: Super-tier 1 specification </li><li> clb.c4.medium: Super-tier 2 specification </li><li> clb.c4.large: Super-tier 3 specification </li><li> clb.c4.xlarge: Super-tier 4 specification </li><li>"": Non-LCU-supported instance</li></ul>
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Whether VIP is blocked
                     */
                    bool m_isBlock;
                    bool m_isBlockHasBeenSet;

                    /**
                     * Blocking or unblocking time
                     */
                    std::string m_isBlockTime;
                    bool m_isBlockTimeHasBeenSet;

                    /**
                     * Whether the IP type is Local BGP
                     */
                    bool m_localBgp;
                    bool m_localBgpHasBeenSet;

                    /**
                     * Layer-7 exclusive tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with IPv4 and IPv6 CVM instances simultaneously.
                     */
                    bool m_mixIpTarget;
                    bool m_mixIpTargetHasBeenSet;

                    /**
                     * VPC-based private network CLB. AZ where the rule is in proximity access mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Whether CLB is NFV. Empty: No; l7nfv: NFV for layer 7.
                     */
                    std::string m_nfvInfo;
                    bool m_nfvInfoHasBeenSet;

                    /**
                     * Health check log set ID of Cloud Log Service (CLS) for CLB
                     */
                    std::string m_healthLogSetId;
                    bool m_healthLogSetIdHasBeenSet;

                    /**
                     * Health check log topic ID of Cloud Log Service (CLS) for CLB
                     */
                    std::string m_healthLogTopicId;
                    bool m_healthLogTopicIdHasBeenSet;

                    /**
                     * Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Attributes of Cloud Load Balancer
                     */
                    std::vector<std::string> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

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
                     * Whether the instance type is exclusive type. 1: Dedicated instance. 0: Non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * Number of bound backend services.
                     */
                    uint64_t m_targetCount;
                    bool m_targetCountHasBeenSet;

                    /**
                     * Endpoint Id associated with the CLB instance.
                     */
                    std::string m_associateEndpoint;
                    bool m_associateEndpointHasBeenSet;

                    /**
                     * Availability zone forward affinity info
                     */
                    AvailableZoneAffinityInfo m_availableZoneAffinityInfo;
                    bool m_availableZoneAffinityInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_LOADBALANCER_H_
