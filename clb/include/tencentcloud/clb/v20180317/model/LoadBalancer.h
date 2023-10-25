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
                     * 获取CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * @return LoadBalancerType CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * @param _loadBalancerType CLB instance network type:
OPEN: public network; INTERNAL: private network.
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
                     * 获取Domain name of the CLB instance. It is only available for public classic CLBs. This parameter will be discontinued soon. Please use `LoadBalancerDomain` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name of the CLB instance. It is only available for public classic CLBs. This parameter will be discontinued soon. Please use `LoadBalancerDomain` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the CLB instance. It is only available for public classic CLBs. This parameter will be discontinued soon. Please use `LoadBalancerDomain` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name of the CLB instance. It is only available for public classic CLBs. This parameter will be discontinued soon. Please use `LoadBalancerDomain` instead.
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
                     * 获取List of VIPs of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerVips List of VIPs of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置List of VIPs of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerVips List of VIPs of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance status, including:
0: creating; 1: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status CLB instance status, including:
0: creating; 1: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置CLB instance status, including:
0: creating; 1: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status CLB instance status, including:
0: creating; 1: running.
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
                     * 获取CLB instance creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CLB instance creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CLB instance creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime CLB instance creation time.
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
                     * 获取Last status change time of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusTime Last status change time of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置Last status change time of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusTime Last status change time of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID
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
                     * 获取Protective CLB identifier. Value range: 1 (protective), 0 (non-protective).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OpenBgp Protective CLB identifier. Value range: 1 (protective), 0 (non-protective).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOpenBgp() const;

                    /**
                     * 设置Protective CLB identifier. Value range: 1 (protective), 0 (non-protective).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _openBgp Protective CLB identifier. Value range: 1 (protective), 0 (non-protective).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取SNAT is enabled for all private network classic CLB created before December 2016.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Snat SNAT is enabled for all private network classic CLB created before December 2016.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSnat() const;

                    /**
                     * 设置SNAT is enabled for all private network classic CLB created before December 2016.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snat SNAT is enabled for all private network classic CLB created before December 2016.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取0: not isolated; 1: isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Isolation 0: not isolated; 1: isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0: not isolated; 1: isolated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolation 0: not isolated; 1: isolated.
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
                     * 获取Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Log Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _log Log information. Only the public network CLB that have HTTP or HTTPS listeners can generate logs.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subnet where a CLB instance resides (meaningful only for private network VPC CLB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet where a CLB instance resides (meaningful only for private network VPC CLB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet where a CLB instance resides (meaningful only for private network VPC CLB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet where a CLB instance resides (meaningful only for private network VPC CLB)
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags CLB instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置CLB instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags CLB instance tag information
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
                     * 获取Security group of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecureGroups Security group of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecureGroups() const;

                    /**
                     * 设置Security group of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secureGroups Security group of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Basic information of a backend server bound to a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetRegionInfo Basic information of a backend server bound to a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置Basic information of a backend server bound to a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetRegionInfo Basic information of a backend server bound to a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Anycast CLB publishing region. For non-anycast CLB, this field returns an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnycastZone Anycast CLB publishing region. For non-anycast CLB, this field returns an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAnycastZone() const;

                    /**
                     * 设置Anycast CLB publishing region. For non-anycast CLB, this field returns an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _anycastZone Anycast CLB publishing region. For non-anycast CLB, this field returns an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取IP version. Valid values: ipv4, ipv6
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AddressIPVersion IP version. Valid values: ipv4, ipv6
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP version. Valid values: ipv4, ipv6
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _addressIPVersion IP version. Valid values: ipv4, ipv6
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
                     * 获取VPC ID in a numeric form
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumericalVpcId VPC ID in a numeric form
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNumericalVpcId() const;

                    /**
                     * 设置VPC ID in a numeric form
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _numericalVpcId VPC ID in a numeric form
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ISP to which a CLB IP address belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VipIsp ISP to which a CLB IP address belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置ISP to which a CLB IP address belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vipIsp ISP to which a CLB IP address belongs
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
                     * 获取Logset ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogSetId Logset ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Logset ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logSetId Logset ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Log topic ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogTopicId Log topic ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Log topic ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logTopicId Log topic ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDDos Whether an Anti-DDoS Pro instance can be bound
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDDos() const;

                    /**
                     * 设置Whether an Anti-DDoS Pro instance can be bound
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDDos Whether an Anti-DDoS Pro instance can be bound
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Custom configuration ID at the CLB instance level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigId Custom configuration ID at the CLB instance level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Custom configuration ID at the CLB instance level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configId Custom configuration ID at the CLB instance level
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
                     * 获取Whether a real server opens the traffic from a CLB instance to the internet
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerPassToTarget Whether a real server opens the traffic from a CLB instance to the internet
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Whether a real server opens the traffic from a CLB instance to the internet
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerPassToTarget Whether a real server opens the traffic from a CLB instance to the internet
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Private network dedicated cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExclusiveCluster Private network dedicated cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置Private network dedicated cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _exclusiveCluster Private network dedicated cluster
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is meaningful only when the IP address version is `ipv6`. Valid values: IPv6Nat64, IPv6FullChain
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IPv6Mode This field is meaningful only when the IP address version is `ipv6`. Valid values: IPv6Nat64, IPv6FullChain
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIPv6Mode() const;

                    /**
                     * 设置This field is meaningful only when the IP address version is `ipv6`. Valid values: IPv6Nat64, IPv6FullChain
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _iPv6Mode This field is meaningful only when the IP address version is `ipv6`. Valid values: IPv6Nat64, IPv6FullChain
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
                     * 获取Whether to enable SnatPro.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SnatPro Whether to enable SnatPro.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Whether to enable SnatPro.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _snatPro Whether to enable SnatPro.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取`SnatIp` list after SnatPro load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SnatIps `SnatIp` list after SnatPro load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置`SnatIp` list after SnatPro load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _snatIps `SnatIp` list after SnatPro load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specification of the LCU-supported instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaType Specification of the LCU-supported instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Specification of the LCU-supported instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _slaType Specification of the LCU-supported instance.
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
                     * 获取Whether VIP is blocked
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsBlock Whether VIP is blocked
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsBlock() const;

                    /**
                     * 设置Whether VIP is blocked
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isBlock Whether VIP is blocked
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time blocked or unblocked
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsBlockTime Time blocked or unblocked
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsBlockTime() const;

                    /**
                     * 设置Time blocked or unblocked
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isBlockTime Time blocked or unblocked
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the IP type is the local BGP
                     * @return LocalBgp Whether the IP type is the local BGP
                     * 
                     */
                    bool GetLocalBgp() const;

                    /**
                     * 设置Whether the IP type is the local BGP
                     * @param _localBgp Whether the IP type is the local BGP
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
                     * 获取If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with an IPv4 and an IPv6 CVM instance simultaneously.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MixIpTarget If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with an IPv4 and an IPv6 CVM instance simultaneously.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetMixIpTarget() const;

                    /**
                     * 设置If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with an IPv4 and an IPv6 CVM instance simultaneously.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _mixIpTarget If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with an IPv4 and an IPv6 CVM instance simultaneously.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Health check logset ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return HealthLogSetId Health check logset ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHealthLogSetId() const;

                    /**
                     * 设置Health check logset ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _healthLogSetId Health check logset ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Health check log topic ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return HealthLogTopicId Health check log topic ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHealthLogTopicId() const;

                    /**
                     * 设置Health check log topic ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _healthLogTopicId Health check log topic ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取CLB attribute
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AttributeFlags CLB attribute
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAttributeFlags() const;

                    /**
                     * 设置CLB attribute
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _attributeFlags CLB attribute
Note: this field may return `null`, indicating that no valid values can be obtained.
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
OPEN: public network; INTERNAL: private network.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB type identifier. Value range: 1 (CLB); 0 (classic CLB).
                     */
                    uint64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * Domain name of the CLB instance. It is only available for public classic CLBs. This parameter will be discontinued soon. Please use `LoadBalancerDomain` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * List of VIPs of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * CLB instance status, including:
0: creating; 1: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLB instance creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last status change time of a CLB instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Protective CLB identifier. Value range: 1 (protective), 0 (non-protective).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_openBgp;
                    bool m_openBgpHasBeenSet;

                    /**
                     * SNAT is enabled for all private network classic CLB created before December 2016.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_snat;
                    bool m_snatHasBeenSet;

                    /**
                     * 0: not isolated; 1: isolated.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Subnet where a CLB instance resides (meaningful only for private network VPC CLB)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * CLB instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Security group of a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_secureGroups;
                    bool m_secureGroupsHasBeenSet;

                    /**
                     * Basic information of a backend server bound to a CLB instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * Anycast CLB publishing region. For non-anycast CLB, this field returns an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_anycastZone;
                    bool m_anycastZoneHasBeenSet;

                    /**
                     * IP version. Valid values: ipv4, ipv6
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * VPC ID in a numeric form
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * ISP to which a CLB IP address belongs
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
                     * CLB instance isolation time
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
                     * Logset ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Log topic ID of CLB Log Service (CLS)
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDDos;
                    bool m_isDDosHasBeenSet;

                    /**
                     * Custom configuration ID at the CLB instance level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Whether a real server opens the traffic from a CLB instance to the internet
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * Private network dedicated cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * This field is meaningful only when the IP address version is `ipv6`. Valid values: IPv6Nat64, IPv6FullChain
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPv6Mode;
                    bool m_iPv6ModeHasBeenSet;

                    /**
                     * Whether to enable SnatPro.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * `SnatIp` list after SnatPro load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * Specification of the LCU-supported instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Whether VIP is blocked
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isBlock;
                    bool m_isBlockHasBeenSet;

                    /**
                     * Time blocked or unblocked
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isBlockTime;
                    bool m_isBlockTimeHasBeenSet;

                    /**
                     * Whether the IP type is the local BGP
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
                     * If the layer-7 listener of an IPv6FullChain CLB instance is enabled, the CLB instance can be bound with an IPv4 and an IPv6 CVM instance simultaneously.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Health check logset ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_healthLogSetId;
                    bool m_healthLogSetIdHasBeenSet;

                    /**
                     * Health check log topic ID of CLB CLS
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * CLB attribute
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_
