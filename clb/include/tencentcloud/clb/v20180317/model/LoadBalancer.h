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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>
#include <tencentcloud/clb/v20180317/model/TargetRegionInfo.h>
#include <tencentcloud/clb/v20180317/model/ZoneInfo.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20180317/model/ExtraInfo.h>
#include <tencentcloud/clb/v20180317/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20180317/model/SnatIp.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取Network type of the load balancing instance.
OPEN: public network attribute. INTERNAL: private network attribute. for a cloud load balancer with private network attribute, you can bind an EIP for public network access. for details, see the EIP document on binding elastic IP (https://www.tencentcloud.comom/document/product/215/16700?from_cn_redirect=1).
                     * @return LoadBalancerType Network type of the load balancing instance.
OPEN: public network attribute. INTERNAL: private network attribute. for a cloud load balancer with private network attribute, you can bind an EIP for public network access. for details, see the EIP document on binding elastic IP (https://www.tencentcloud.comom/document/product/215/16700?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Network type of the load balancing instance.
OPEN: public network attribute. INTERNAL: private network attribute. for a cloud load balancer with private network attribute, you can bind an EIP for public network access. for details, see the EIP document on binding elastic IP (https://www.tencentcloud.comom/document/product/215/16700?from_cn_redirect=1).
                     * @param _loadBalancerType Network type of the load balancing instance.
OPEN: public network attribute. INTERNAL: private network attribute. for a cloud load balancer with private network attribute, you can bind an EIP for public network access. for details, see the EIP document on binding elastic IP (https://www.tencentcloud.comom/document/product/215/16700?from_cn_redirect=1).
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
                     * 获取CLB type identifier. Value range: 1 (CLB); 0 (classic CLB).
                     * @return Forward CLB type identifier. Value range: 1 (CLB); 0 (classic CLB).
                     * 
                     */
                    uint64_t GetForward() const;

                    /**
                     * 设置CLB type identifier. Value range: 1 (CLB); 0 (classic CLB).
                     * @param _forward CLB type identifier. Value range: 1 (CLB); 0 (classic CLB).
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
                     * 获取The domain name of the cloud load balancer instance. this field is only provided for public network classic and domain name-based load balancing instances. it is being gradually phased out. we recommend using LoadBalancerDomain instead.
                     * @return Domain The domain name of the cloud load balancer instance. this field is only provided for public network classic and domain name-based load balancing instances. it is being gradually phased out. we recommend using LoadBalancerDomain instead.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name of the cloud load balancer instance. this field is only provided for public network classic and domain name-based load balancing instances. it is being gradually phased out. we recommend using LoadBalancerDomain instead.
                     * @param _domain The domain name of the cloud load balancer instance. this field is only provided for public network classic and domain name-based load balancing instances. it is being gradually phased out. we recommend using LoadBalancerDomain instead.
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
                     * 获取Specifies the state of the load balancing instance, including.
0: creating. 1: normal operation.
                     * @return Status Specifies the state of the load balancing instance, including.
0: creating. 1: normal operation.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Specifies the state of the load balancing instance, including.
0: creating. 1: normal operation.
                     * @param _status Specifies the state of the load balancing instance, including.
0: creating. 1: normal operation.
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
Format: YYYY-MM-DD HH:MM:ss.
                     * @return CreateTime CLB instance creation time
Format: YYYY-MM-DD HH:MM:ss.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CLB instance creation time
Format: YYYY-MM-DD HH:MM:ss.
                     * @param _createTime CLB instance creation time
Format: YYYY-MM-DD HH:MM:ss.
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
Format: YYYY-MM-DD HH:MM:ss.
                     * @return StatusTime Last status transition time of the CLB instance.
Format: YYYY-MM-DD HH:MM:ss.
                     * 
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置Last status transition time of the CLB instance.
Format: YYYY-MM-DD HH:MM:ss.
                     * @param _statusTime Last status transition time of the CLB instance.
Format: YYYY-MM-DD HH:MM:ss.
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
                     * 获取ID of the project to which a CLB instance belongs. 0: default project.
                     * @return ProjectId ID of the project to which a CLB instance belongs. 0: default project.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which a CLB instance belongs. 0: default project.
                     * @param _projectId ID of the project to which a CLB instance belongs. 0: default project.
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
                     * 获取Whether SNAT is enabled. for traditional private network clbs before december 2016, SNAT was enabled.
                     * @return Snat Whether SNAT is enabled. for traditional private network clbs before december 2016, SNAT was enabled.
                     * 
                     */
                    bool GetSnat() const;

                    /**
                     * 设置Whether SNAT is enabled. for traditional private network clbs before december 2016, SNAT was enabled.
                     * @param _snat Whether SNAT is enabled. for traditional private network clbs before december 2016, SNAT was enabled.
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
                     * 获取Whether isolated. 0 means not isolated. 1 means isolated.
                     * @return Isolation Whether isolated. 0 means not isolated. 1 means isolated.
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置Whether isolated. 0 means not isolated. 1 means isolated.
                     * @param _isolation Whether isolated. 0 means not isolated. 1 means isolated.
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
                     * 获取Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Log Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _log Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * @deprecated
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
                     * 获取Specifies the VPC ID in numerical form, obtainable through the DescribeVpcs API (https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     * @return NumericalVpcId Specifies the VPC ID in numerical form, obtainable through the DescribeVpcs API (https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetNumericalVpcId() const;

                    /**
                     * 设置Specifies the VPC ID in numerical form, obtainable through the DescribeVpcs API (https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     * @param _numericalVpcId Specifies the VPC ID in numerical form, obtainable through the DescribeVpcs API (https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
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
                     * 获取Specifies the ISP of the load balancer IP address.

-BGP (multi-line).
- CMCC: CMCC single line network.
-CTCC: ctcc single-line.
- CUCC: china unicom single-line.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VipIsp Specifies the ISP of the load balancer IP address.

-BGP (multi-line).
- CMCC: CMCC single line network.
-CTCC: ctcc single-line.
- CUCC: china unicom single-line.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置Specifies the ISP of the load balancer IP address.

-BGP (multi-line).
- CMCC: CMCC single line network.
-CTCC: ctcc single-line.
- CUCC: china unicom single-line.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vipIsp Specifies the ISP of the load balancer IP address.

-BGP (multi-line).
- CMCC: CMCC single line network.
-CTCC: ctcc single-line.
- CUCC: china unicom single-line.
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
                     * 获取Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterZone Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ZoneInfo GetMasterZone() const;

                    /**
                     * 设置Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterZone Primary AZ
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
                     * 获取Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupZoneSet Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ZoneInfo> GetBackupZoneSet() const;

                    /**
                     * 设置Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupZoneSet Secondary AZ
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
                     * 获取Specifies the isolation time of the cloud load balancer instance.
Format: YYYY-MM-DD HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolatedTime Specifies the isolation time of the cloud load balancer instance.
Format: YYYY-MM-DD HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置Specifies the isolation time of the cloud load balancer instance.
Format: YYYY-MM-DD HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolatedTime Specifies the isolation time of the cloud load balancer instance.
Format: YYYY-MM-DD HH:MM:ss.
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
                     * 获取CLB instance expiration time, which takes effect only for prepaid instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime CLB instance expiration time, which takes effect only for prepaid instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置CLB instance expiration time, which takes effect only for prepaid instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime CLB instance expiration time, which takes effect only for prepaid instances
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
                     * 获取Billing mode of CLB instance. Valid values: PREPAID (monthly subscription), POSTPAID_BY_HOUR (pay as you go).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ChargeType Billing mode of CLB instance. Valid values: PREPAID (monthly subscription), POSTPAID_BY_HOUR (pay as you go).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing mode of CLB instance. Valid values: PREPAID (monthly subscription), POSTPAID_BY_HOUR (pay as you go).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _chargeType Billing mode of CLB instance. Valid values: PREPAID (monthly subscription), POSTPAID_BY_HOUR (pay as you go).
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Prepaid billing attributes of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrepaidAttributes Prepaid billing attributes of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LBChargePrepaid GetPrepaidAttributes() const;

                    /**
                     * 设置Prepaid billing attributes of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _prepaidAttributes Prepaid billing attributes of a CLB instance
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
                     * 获取IPv6 address of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddressIPv6 IPv6 address of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置IPv6 address of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addressIPv6 IPv6 address of a CLB instance
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
                     * 获取Reserved field which can be ignored generally.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraInfo Reserved field which can be ignored generally.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置Reserved field which can be ignored generally.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraInfo Reserved field which can be ignored generally.
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
                     * 获取Specifies the field is meaningful when the IP address version is ipv6. valid values: ipv6Nat64 | ipv6FullChain.
IPv6Nat64: specifies a load balancer based on Nat64 IPv6 transition technology.
IPv6FullChain: specifies a cloud load balancer implemented based on ipv6 single-stack technology.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IPv6Mode Specifies the field is meaningful when the IP address version is ipv6. valid values: ipv6Nat64 | ipv6FullChain.
IPv6Nat64: specifies a load balancer based on Nat64 IPv6 transition technology.
IPv6FullChain: specifies a cloud load balancer implemented based on ipv6 single-stack technology.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIPv6Mode() const;

                    /**
                     * 设置Specifies the field is meaningful when the IP address version is ipv6. valid values: ipv6Nat64 | ipv6FullChain.
IPv6Nat64: specifies a load balancer based on Nat64 IPv6 transition technology.
IPv6FullChain: specifies a cloud load balancer implemented based on ipv6 single-stack technology.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iPv6Mode Specifies the field is meaningful when the IP address version is ipv6. valid values: ipv6Nat64 | ipv6FullChain.
IPv6Nat64: specifies a load balancer based on Nat64 IPv6 transition technology.
IPv6FullChain: specifies a cloud load balancer implemented based on ipv6 single-stack technology.
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
                     * 获取Specifies whether SnatPro is enabled.
                     * @return SnatPro Specifies whether SnatPro is enabled.
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Specifies whether SnatPro is enabled.
                     * @param _snatPro Specifies whether SnatPro is enabled.
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
                     * 获取Enables the SnatIp list after turning on SnatPro load balancing.
                     * @return SnatIps Enables the SnatIp list after turning on SnatPro load balancing.
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置Enables the SnatIp list after turning on SnatPro load balancing.
                     * @param _snatIps Enables the SnatIp list after turning on SnatPro load balancing.
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
                     * 获取Performance capacity specification. <ul><li> clb.c1.small: minimalist specification </li> <li> clb.c2.medium: standard specification </li> <li> clb.c3.small: advanced type 1 specification </li> <li> clb.c3.medium: advanced type 2 specification </li> <li> clb.c4.small: super type 1 specification </li> <li> clb.c4.medium: super type 2 specification </li> <li> clb.c4.large: super type 3 specification </li> <li> clb.c4.xlarge: super type 4 specification </li> <li>"" : non-performance capacity instance</li></ul>.
                     * @return SlaType Performance capacity specification. <ul><li> clb.c1.small: minimalist specification </li> <li> clb.c2.medium: standard specification </li> <li> clb.c3.small: advanced type 1 specification </li> <li> clb.c3.medium: advanced type 2 specification </li> <li> clb.c4.small: super type 1 specification </li> <li> clb.c4.medium: super type 2 specification </li> <li> clb.c4.large: super type 3 specification </li> <li> clb.c4.xlarge: super type 4 specification </li> <li>"" : non-performance capacity instance</li></ul>.
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Performance capacity specification. <ul><li> clb.c1.small: minimalist specification </li> <li> clb.c2.medium: standard specification </li> <li> clb.c3.small: advanced type 1 specification </li> <li> clb.c3.medium: advanced type 2 specification </li> <li> clb.c4.small: super type 1 specification </li> <li> clb.c4.medium: super type 2 specification </li> <li> clb.c4.large: super type 3 specification </li> <li> clb.c4.xlarge: super type 4 specification </li> <li>"" : non-performance capacity instance</li></ul>.
                     * @param _slaType Performance capacity specification. <ul><li> clb.c1.small: minimalist specification </li> <li> clb.c2.medium: standard specification </li> <li> clb.c3.small: advanced type 1 specification </li> <li> clb.c3.medium: advanced type 2 specification </li> <li> clb.c4.small: super type 1 specification </li> <li> clb.c4.medium: super type 2 specification </li> <li> clb.c4.large: super type 3 specification </li> <li> clb.c4.xlarge: super type 4 specification </li> <li>"" : non-performance capacity instance</li></ul>.
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
                     * 获取Specifies the blocking or unblocking time.
Format: YYYY-MM-DD HH:MM:ss.
                     * @return IsBlockTime Specifies the blocking or unblocking time.
Format: YYYY-MM-DD HH:MM:ss.
                     * 
                     */
                    std::string GetIsBlockTime() const;

                    /**
                     * 设置Specifies the blocking or unblocking time.
Format: YYYY-MM-DD HH:MM:ss.
                     * @param _isBlockTime Specifies the blocking or unblocking time.
Format: YYYY-MM-DD HH:MM:ss.
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
                     * 获取Dedicated layer-7 tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterTag Dedicated layer-7 tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置Dedicated layer-7 tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _clusterTag Dedicated layer-7 tag.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Availability zone of a VPC-based private network CLB instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Zones Availability zone of a VPC-based private network CLB instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Availability zone of a VPC-based private network CLB instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _zones Availability zone of a VPC-based private network CLB instance
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether it is an NFV CLB instance. No returned information: no; l7nfv: yes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NfvInfo Whether it is an NFV CLB instance. No returned information: no; l7nfv: yes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNfvInfo() const;

                    /**
                     * 设置Whether it is an NFV CLB instance. No returned information: no; l7nfv: yes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _nfvInfo Whether it is an NFV CLB instance. No returned information: no; l7nfv: yes.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterIds Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterIds Cluster ID.
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
                     * 获取Attributes of cloud load balancer, input an array of strings to determine whether it is enabled.
DeleteProtect: specifies deletion protection. once enabled, it prevents the cloud load balancer from being accidentally deleted. 
UserInVisible: invisible to users, controls load balancing visibility to users. 
BlockStatus: specifies the blockage status, used to limit certain operations or traffic for cloud load balancer. 
NoLBNat: disables the NAT feature of cloud load balancer for direct forwarding of traffic in specific scenarios. 
BanStatus: specifies the blocking status for suspending the clb service or restricting access. 
ShiftupFlag: specifies the upgrade flag used to identify if the cloud load balancer requires a configuration upgrade or performance improvement. 
Specifies the stopped status. once enabled, the cloud load balancer suspends service. 
NoVpcGw: specifies not to use VPC gateway to bypass the gateway for direct traffic handling. 
SgInTgw: specifies the security group in TGW (Transit Gateway) involving network security policy configuration. 
SharedLimitFlag: specifies the shared limit flag used to control the resource constraints of cloud load balancer. 
WafFlag: specifies the Web application firewall (WAF) flag. enabled to enable WAF protection. 
IsDomainCLB: indicates whether the cloud load balancer is domain name-based for traffic distribution. 
IPv6Snat: IPv6 source address translation (Snat), used for source address processing in IPv6 networks. 
HideDomain. specifies whether to hide the domain name for privacy protection or to avoid exposing it in specific scenarios. 
JumboFrame: specifies giant frame support. once enabled, it supports larger data frames to improve network efficiency. 
NoLBNatL4IPdc: specifies layer 4 IP direct connection without NAT, used for direct forwarding of IP traffic in layer 4 load balancing. 
VpcGwL3Service: specifies the VPC gateway layer-3 Service, which involves the gateway feature of the layer-3 network. 
Ipv62Flag: specifies the Ipv6 expansion Flag for specific feature support. 
Ipv62ExclusiveFlag: specifies the Ipv6 exclusive flag used for exclusive Ipv6 traffic processing. 
BgpPro: specifies BGP Pro support. 
ToaClean: TOA (TCP Option Address) cleanup. clears Address information in TCP options. 

                     * @return AttributeFlags Attributes of cloud load balancer, input an array of strings to determine whether it is enabled.
DeleteProtect: specifies deletion protection. once enabled, it prevents the cloud load balancer from being accidentally deleted. 
UserInVisible: invisible to users, controls load balancing visibility to users. 
BlockStatus: specifies the blockage status, used to limit certain operations or traffic for cloud load balancer. 
NoLBNat: disables the NAT feature of cloud load balancer for direct forwarding of traffic in specific scenarios. 
BanStatus: specifies the blocking status for suspending the clb service or restricting access. 
ShiftupFlag: specifies the upgrade flag used to identify if the cloud load balancer requires a configuration upgrade or performance improvement. 
Specifies the stopped status. once enabled, the cloud load balancer suspends service. 
NoVpcGw: specifies not to use VPC gateway to bypass the gateway for direct traffic handling. 
SgInTgw: specifies the security group in TGW (Transit Gateway) involving network security policy configuration. 
SharedLimitFlag: specifies the shared limit flag used to control the resource constraints of cloud load balancer. 
WafFlag: specifies the Web application firewall (WAF) flag. enabled to enable WAF protection. 
IsDomainCLB: indicates whether the cloud load balancer is domain name-based for traffic distribution. 
IPv6Snat: IPv6 source address translation (Snat), used for source address processing in IPv6 networks. 
HideDomain. specifies whether to hide the domain name for privacy protection or to avoid exposing it in specific scenarios. 
JumboFrame: specifies giant frame support. once enabled, it supports larger data frames to improve network efficiency. 
NoLBNatL4IPdc: specifies layer 4 IP direct connection without NAT, used for direct forwarding of IP traffic in layer 4 load balancing. 
VpcGwL3Service: specifies the VPC gateway layer-3 Service, which involves the gateway feature of the layer-3 network. 
Ipv62Flag: specifies the Ipv6 expansion Flag for specific feature support. 
Ipv62ExclusiveFlag: specifies the Ipv6 exclusive flag used for exclusive Ipv6 traffic processing. 
BgpPro: specifies BGP Pro support. 
ToaClean: TOA (TCP Option Address) cleanup. clears Address information in TCP options. 

                     * 
                     */
                    std::vector<std::string> GetAttributeFlags() const;

                    /**
                     * 设置Attributes of cloud load balancer, input an array of strings to determine whether it is enabled.
DeleteProtect: specifies deletion protection. once enabled, it prevents the cloud load balancer from being accidentally deleted. 
UserInVisible: invisible to users, controls load balancing visibility to users. 
BlockStatus: specifies the blockage status, used to limit certain operations or traffic for cloud load balancer. 
NoLBNat: disables the NAT feature of cloud load balancer for direct forwarding of traffic in specific scenarios. 
BanStatus: specifies the blocking status for suspending the clb service or restricting access. 
ShiftupFlag: specifies the upgrade flag used to identify if the cloud load balancer requires a configuration upgrade or performance improvement. 
Specifies the stopped status. once enabled, the cloud load balancer suspends service. 
NoVpcGw: specifies not to use VPC gateway to bypass the gateway for direct traffic handling. 
SgInTgw: specifies the security group in TGW (Transit Gateway) involving network security policy configuration. 
SharedLimitFlag: specifies the shared limit flag used to control the resource constraints of cloud load balancer. 
WafFlag: specifies the Web application firewall (WAF) flag. enabled to enable WAF protection. 
IsDomainCLB: indicates whether the cloud load balancer is domain name-based for traffic distribution. 
IPv6Snat: IPv6 source address translation (Snat), used for source address processing in IPv6 networks. 
HideDomain. specifies whether to hide the domain name for privacy protection or to avoid exposing it in specific scenarios. 
JumboFrame: specifies giant frame support. once enabled, it supports larger data frames to improve network efficiency. 
NoLBNatL4IPdc: specifies layer 4 IP direct connection without NAT, used for direct forwarding of IP traffic in layer 4 load balancing. 
VpcGwL3Service: specifies the VPC gateway layer-3 Service, which involves the gateway feature of the layer-3 network. 
Ipv62Flag: specifies the Ipv6 expansion Flag for specific feature support. 
Ipv62ExclusiveFlag: specifies the Ipv6 exclusive flag used for exclusive Ipv6 traffic processing. 
BgpPro: specifies BGP Pro support. 
ToaClean: TOA (TCP Option Address) cleanup. clears Address information in TCP options. 

                     * @param _attributeFlags Attributes of cloud load balancer, input an array of strings to determine whether it is enabled.
DeleteProtect: specifies deletion protection. once enabled, it prevents the cloud load balancer from being accidentally deleted. 
UserInVisible: invisible to users, controls load balancing visibility to users. 
BlockStatus: specifies the blockage status, used to limit certain operations or traffic for cloud load balancer. 
NoLBNat: disables the NAT feature of cloud load balancer for direct forwarding of traffic in specific scenarios. 
BanStatus: specifies the blocking status for suspending the clb service or restricting access. 
ShiftupFlag: specifies the upgrade flag used to identify if the cloud load balancer requires a configuration upgrade or performance improvement. 
Specifies the stopped status. once enabled, the cloud load balancer suspends service. 
NoVpcGw: specifies not to use VPC gateway to bypass the gateway for direct traffic handling. 
SgInTgw: specifies the security group in TGW (Transit Gateway) involving network security policy configuration. 
SharedLimitFlag: specifies the shared limit flag used to control the resource constraints of cloud load balancer. 
WafFlag: specifies the Web application firewall (WAF) flag. enabled to enable WAF protection. 
IsDomainCLB: indicates whether the cloud load balancer is domain name-based for traffic distribution. 
IPv6Snat: IPv6 source address translation (Snat), used for source address processing in IPv6 networks. 
HideDomain. specifies whether to hide the domain name for privacy protection or to avoid exposing it in specific scenarios. 
JumboFrame: specifies giant frame support. once enabled, it supports larger data frames to improve network efficiency. 
NoLBNatL4IPdc: specifies layer 4 IP direct connection without NAT, used for direct forwarding of IP traffic in layer 4 load balancing. 
VpcGwL3Service: specifies the VPC gateway layer-3 Service, which involves the gateway feature of the layer-3 network. 
Ipv62Flag: specifies the Ipv6 expansion Flag for specific feature support. 
Ipv62ExclusiveFlag: specifies the Ipv6 exclusive flag used for exclusive Ipv6 traffic processing. 
BgpPro: specifies BGP Pro support. 
ToaClean: TOA (TCP Option Address) cleanup. clears Address information in TCP options. 

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
                     * 获取Specifies the domain name of the load balancing instance.
                     * @return LoadBalancerDomain Specifies the domain name of the load balancing instance.
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置Specifies the domain name of the load balancing instance.
                     * @param _loadBalancerDomain Specifies the domain name of the load balancing instance.
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
                     * 获取Specifies the network outbound.
                     * @return Egress Specifies the network outbound.
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置Specifies the network outbound.
                     * @param _egress Specifies the network outbound.
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
                     * 获取Indicates whether the instance type is dedicated. 1: dedicated instance. 0: non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Exclusive Indicates whether the instance type is dedicated. 1: dedicated instance. 0: non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置Indicates whether the instance type is dedicated. 1: dedicated instance. 0: non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exclusive Indicates whether the instance type is dedicated. 1: dedicated instance. 0: non-dedicated instance.
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
                     * 获取Specifies the number of bound backend services.
                     * @return TargetCount Specifies the number of bound backend services.
                     * 
                     */
                    uint64_t GetTargetCount() const;

                    /**
                     * 设置Specifies the number of bound backend services.
                     * @param _targetCount Specifies the number of bound backend services.
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
                     * 获取Specifies the Endpoint id associated with the clb instance.
                     * @return AssociateEndpoint Specifies the Endpoint id associated with the clb instance.
                     * 
                     */
                    std::string GetAssociateEndpoint() const;

                    /**
                     * 设置Specifies the Endpoint id associated with the clb instance.
                     * @param _associateEndpoint Specifies the Endpoint id associated with the clb instance.
                     * 
                     */
                    void SetAssociateEndpoint(const std::string& _associateEndpoint);

                    /**
                     * 判断参数 AssociateEndpoint 是否已赋值
                     * @return AssociateEndpoint 是否已赋值
                     * 
                     */
                    bool AssociateEndpointHasBeenSet() const;

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
                     * Network type of the load balancing instance.
OPEN: public network attribute. INTERNAL: private network attribute. for a cloud load balancer with private network attribute, you can bind an EIP for public network access. for details, see the EIP document on binding elastic IP (https://www.tencentcloud.comom/document/product/215/16700?from_cn_redirect=1).
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB type identifier. Value range: 1 (CLB); 0 (classic CLB).
                     */
                    uint64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * The domain name of the cloud load balancer instance. this field is only provided for public network classic and domain name-based load balancing instances. it is being gradually phased out. we recommend using LoadBalancerDomain instead.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * List of VIPs of a CLB instance.
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * Specifies the state of the load balancing instance, including.
0: creating. 1: normal operation.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLB instance creation time
Format: YYYY-MM-DD HH:MM:ss.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last status transition time of the CLB instance.
Format: YYYY-MM-DD HH:MM:ss.
                     */
                    std::string m_statusTime;
                    bool m_statusTimeHasBeenSet;

                    /**
                     * ID of the project to which a CLB instance belongs. 0: default project.
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
                     * Whether SNAT is enabled. for traditional private network clbs before december 2016, SNAT was enabled.
                     */
                    bool m_snat;
                    bool m_snatHasBeenSet;

                    /**
                     * Whether isolated. 0 means not isolated. 1 means isolated.
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Specifies the VPC ID in numerical form, obtainable through the DescribeVpcs API (https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     */
                    uint64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * Specifies the ISP of the load balancer IP address.

-BGP (multi-line).
- CMCC: CMCC single line network.
-CTCC: ctcc single-line.
- CUCC: china unicom single-line.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ZoneInfo m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneInfo> m_backupZoneSet;
                    bool m_backupZoneSetHasBeenSet;

                    /**
                     * Specifies the isolation time of the cloud load balancer instance.
Format: YYYY-MM-DD HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * CLB instance expiration time, which takes effect only for prepaid instances
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Billing mode of CLB instance. Valid values: PREPAID (monthly subscription), POSTPAID_BY_HOUR (pay as you go).
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Prepaid billing attributes of a CLB instance
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
                     * IPv6 address of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPv6;
                    bool m_addressIPv6HasBeenSet;

                    /**
                     * Reserved field which can be ignored generally.
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
                     * Specifies the field is meaningful when the IP address version is ipv6. valid values: ipv6Nat64 | ipv6FullChain.
IPv6Nat64: specifies a load balancer based on Nat64 IPv6 transition technology.
IPv6FullChain: specifies a cloud load balancer implemented based on ipv6 single-stack technology.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPv6Mode;
                    bool m_iPv6ModeHasBeenSet;

                    /**
                     * Specifies whether SnatPro is enabled.
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * Enables the SnatIp list after turning on SnatPro load balancing.
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * Performance capacity specification. <ul><li> clb.c1.small: minimalist specification </li> <li> clb.c2.medium: standard specification </li> <li> clb.c3.small: advanced type 1 specification </li> <li> clb.c3.medium: advanced type 2 specification </li> <li> clb.c4.small: super type 1 specification </li> <li> clb.c4.medium: super type 2 specification </li> <li> clb.c4.large: super type 3 specification </li> <li> clb.c4.xlarge: super type 4 specification </li> <li>"" : non-performance capacity instance</li></ul>.
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Whether VIP is blocked
                     */
                    bool m_isBlock;
                    bool m_isBlockHasBeenSet;

                    /**
                     * Specifies the blocking or unblocking time.
Format: YYYY-MM-DD HH:MM:ss.
                     */
                    std::string m_isBlockTime;
                    bool m_isBlockTimeHasBeenSet;

                    /**
                     * Whether the IP type is Local BGP
                     */
                    bool m_localBgp;
                    bool m_localBgpHasBeenSet;

                    /**
                     * Dedicated layer-7 tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with IPv4 and IPv6 CVM instances simultaneously.
                     */
                    bool m_mixIpTarget;
                    bool m_mixIpTargetHasBeenSet;

                    /**
                     * Availability zone of a VPC-based private network CLB instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Whether it is an NFV CLB instance. No returned information: no; l7nfv: yes.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Attributes of cloud load balancer, input an array of strings to determine whether it is enabled.
DeleteProtect: specifies deletion protection. once enabled, it prevents the cloud load balancer from being accidentally deleted. 
UserInVisible: invisible to users, controls load balancing visibility to users. 
BlockStatus: specifies the blockage status, used to limit certain operations or traffic for cloud load balancer. 
NoLBNat: disables the NAT feature of cloud load balancer for direct forwarding of traffic in specific scenarios. 
BanStatus: specifies the blocking status for suspending the clb service or restricting access. 
ShiftupFlag: specifies the upgrade flag used to identify if the cloud load balancer requires a configuration upgrade or performance improvement. 
Specifies the stopped status. once enabled, the cloud load balancer suspends service. 
NoVpcGw: specifies not to use VPC gateway to bypass the gateway for direct traffic handling. 
SgInTgw: specifies the security group in TGW (Transit Gateway) involving network security policy configuration. 
SharedLimitFlag: specifies the shared limit flag used to control the resource constraints of cloud load balancer. 
WafFlag: specifies the Web application firewall (WAF) flag. enabled to enable WAF protection. 
IsDomainCLB: indicates whether the cloud load balancer is domain name-based for traffic distribution. 
IPv6Snat: IPv6 source address translation (Snat), used for source address processing in IPv6 networks. 
HideDomain. specifies whether to hide the domain name for privacy protection or to avoid exposing it in specific scenarios. 
JumboFrame: specifies giant frame support. once enabled, it supports larger data frames to improve network efficiency. 
NoLBNatL4IPdc: specifies layer 4 IP direct connection without NAT, used for direct forwarding of IP traffic in layer 4 load balancing. 
VpcGwL3Service: specifies the VPC gateway layer-3 Service, which involves the gateway feature of the layer-3 network. 
Ipv62Flag: specifies the Ipv6 expansion Flag for specific feature support. 
Ipv62ExclusiveFlag: specifies the Ipv6 exclusive flag used for exclusive Ipv6 traffic processing. 
BgpPro: specifies BGP Pro support. 
ToaClean: TOA (TCP Option Address) cleanup. clears Address information in TCP options. 

                     */
                    std::vector<std::string> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

                    /**
                     * Specifies the domain name of the load balancing instance.
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                    /**
                     * Specifies the network outbound.
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * Indicates whether the instance type is dedicated. 1: dedicated instance. 0: non-dedicated instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * Specifies the number of bound backend services.
                     */
                    uint64_t m_targetCount;
                    bool m_targetCountHasBeenSet;

                    /**
                     * Specifies the Endpoint id associated with the clb instance.
                     */
                    std::string m_associateEndpoint;
                    bool m_associateEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_
