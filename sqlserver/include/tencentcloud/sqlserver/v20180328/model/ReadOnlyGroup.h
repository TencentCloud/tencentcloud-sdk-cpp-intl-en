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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYGROUP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyInstance.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Read-Only Group Object
                */
                class ReadOnlyGroup : public AbstractModel
                {
                public:
                    ReadOnlyGroup();
                    ~ReadOnlyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Read-Only Group ID
                     * @return ReadOnlyGroupId Read-Only Group ID
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置Read-Only Group ID
                     * @param _readOnlyGroupId Read-Only Group ID
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取Read-Only Group Name
                     * @return ReadOnlyGroupName Read-Only Group Name
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置Read-Only Group Name
                     * @param _readOnlyGroupName Read-Only Group Name
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取Region ID of the Read-Only Group, same as the Primary Instance
                     * @return RegionId Region ID of the Read-Only Group, same as the Primary Instance
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID of the Read-Only Group, same as the Primary Instance
                     * @param _regionId Region ID of the Read-Only Group, same as the Primary Instance
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Read-Only Group's AZ ID, same as the Primary Instance
                     * @return ZoneId Read-Only Group's AZ ID, same as the Primary Instance
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Read-Only Group's AZ ID, same as the Primary Instance
                     * @param _zoneId Read-Only Group's AZ ID, same as the Primary Instance
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the timeout culling feature; 0 - disabled, 1 - enabled
                     * @return IsOfflineDelay Whether to enable the timeout culling feature; 0 - disabled, 1 - enabled
                     * 
                     */
                    int64_t GetIsOfflineDelay() const;

                    /**
                     * 设置Whether to enable the timeout culling feature; 0 - disabled, 1 - enabled
                     * @param _isOfflineDelay Whether to enable the timeout culling feature; 0 - disabled, 1 - enabled
                     * 
                     */
                    void SetIsOfflineDelay(const int64_t& _isOfflineDelay);

                    /**
                     * 判断参数 IsOfflineDelay 是否已赋值
                     * @return IsOfflineDelay 是否已赋值
                     * 
                     */
                    bool IsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取Timeout threshold used after enabling the timeout culling feature
                     * @return ReadOnlyMaxDelayTime Timeout threshold used after enabling the timeout culling feature
                     * 
                     */
                    int64_t GetReadOnlyMaxDelayTime() const;

                    /**
                     * 设置Timeout threshold used after enabling the timeout culling feature
                     * @param _readOnlyMaxDelayTime Timeout threshold used after enabling the timeout culling feature
                     * 
                     */
                    void SetReadOnlyMaxDelayTime(const int64_t& _readOnlyMaxDelayTime);

                    /**
                     * 判断参数 ReadOnlyMaxDelayTime 是否已赋值
                     * @return ReadOnlyMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取Minimum number of read-only replicas retained in the read-only group after enabling the timeout culling feature
                     * @return MinReadOnlyInGroup Minimum number of read-only replicas retained in the read-only group after enabling the timeout culling feature
                     * 
                     */
                    int64_t GetMinReadOnlyInGroup() const;

                    /**
                     * 设置Minimum number of read-only replicas retained in the read-only group after enabling the timeout culling feature
                     * @param _minReadOnlyInGroup Minimum number of read-only replicas retained in the read-only group after enabling the timeout culling feature
                     * 
                     */
                    void SetMinReadOnlyInGroup(const int64_t& _minReadOnlyInGroup);

                    /**
                     * 判断参数 MinReadOnlyInGroup 是否已赋值
                     * @return MinReadOnlyInGroup 是否已赋值
                     * 
                     */
                    bool MinReadOnlyInGroupHasBeenSet() const;

                    /**
                     * 获取Read-Only Group vip
                     * @return Vip Read-Only Group vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Read-Only Group vip
                     * @param _vip Read-Only Group vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Read-Only Group vport
                     * @return Vport Read-Only Group vport
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Read-Only Group vport
                     * @param _vport Read-Only Group vport
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Read-Only Group VPC ID
                     * @return VpcId Read-Only Group VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Read-Only Group VPC ID
                     * @param _vpcId Read-Only Group VPC ID
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
                     * 获取Read-Only Group VPC Subnet ID
                     * @return SubnetId Read-Only Group VPC Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Read-Only Group VPC Subnet ID
                     * @param _subnetId Read-Only Group VPC Subnet ID
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
                     * 获取Read-Only Group Status: 1-Running, 5-Creating
                     * @return Status Read-Only Group Status: 1-Running, 5-Creating
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Read-Only Group Status: 1-Running, 5-Creating
                     * @param _status Read-Only Group Status: 1-Running, 5-Creating
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Primary instance ID, in the form of mssql-sgeshe3th
                     * @return MasterInstanceId Primary instance ID, in the form of mssql-sgeshe3th
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置Primary instance ID, in the form of mssql-sgeshe3th
                     * @param _masterInstanceId Primary instance ID, in the form of mssql-sgeshe3th
                     * 
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取Read-Only Instance Replica Set
                     * @return ReadOnlyInstanceSet Read-Only Instance Replica Set
                     * 
                     */
                    std::vector<ReadOnlyInstance> GetReadOnlyInstanceSet() const;

                    /**
                     * 设置Read-Only Instance Replica Set
                     * @param _readOnlyInstanceSet Read-Only Instance Replica Set
                     * 
                     */
                    void SetReadOnlyInstanceSet(const std::vector<ReadOnlyInstance>& _readOnlyInstanceSet);

                    /**
                     * 判断参数 ReadOnlyInstanceSet 是否已赋值
                     * @return ReadOnlyInstanceSet 是否已赋值
                     * 
                     */
                    bool ReadOnlyInstanceSetHasBeenSet() const;

                    /**
                     * 获取RO group's public network address domain name
                     * @return DnsPodDomain RO group's public network address domain name
                     * 
                     */
                    std::string GetDnsPodDomain() const;

                    /**
                     * 设置RO group's public network address domain name
                     * @param _dnsPodDomain RO group's public network address domain name
                     * 
                     */
                    void SetDnsPodDomain(const std::string& _dnsPodDomain);

                    /**
                     * 判断参数 DnsPodDomain 是否已赋值
                     * @return DnsPodDomain 是否已赋值
                     * 
                     */
                    bool DnsPodDomainHasBeenSet() const;

                    /**
                     * 获取RO group's public network address port
                     * @return TgwWanVPort RO group's public network address port
                     * 
                     */
                    uint64_t GetTgwWanVPort() const;

                    /**
                     * 设置RO group's public network address port
                     * @param _tgwWanVPort RO group's public network address port
                     * 
                     */
                    void SetTgwWanVPort(const uint64_t& _tgwWanVPort);

                    /**
                     * 判断参数 TgwWanVPort 是否已赋值
                     * @return TgwWanVPort 是否已赋值
                     * 
                     */
                    bool TgwWanVPortHasBeenSet() const;

                private:

                    /**
                     * Read-Only Group ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * Read-Only Group Name
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * Region ID of the Read-Only Group, same as the Primary Instance
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Read-Only Group's AZ ID, same as the Primary Instance
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Whether to enable the timeout culling feature; 0 - disabled, 1 - enabled
                     */
                    int64_t m_isOfflineDelay;
                    bool m_isOfflineDelayHasBeenSet;

                    /**
                     * Timeout threshold used after enabling the timeout culling feature
                     */
                    int64_t m_readOnlyMaxDelayTime;
                    bool m_readOnlyMaxDelayTimeHasBeenSet;

                    /**
                     * Minimum number of read-only replicas retained in the read-only group after enabling the timeout culling feature
                     */
                    int64_t m_minReadOnlyInGroup;
                    bool m_minReadOnlyInGroupHasBeenSet;

                    /**
                     * Read-Only Group vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Read-Only Group vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Read-Only Group VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Read-Only Group VPC Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Read-Only Group Status: 1-Running, 5-Creating
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Primary instance ID, in the form of mssql-sgeshe3th
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * Read-Only Instance Replica Set
                     */
                    std::vector<ReadOnlyInstance> m_readOnlyInstanceSet;
                    bool m_readOnlyInstanceSetHasBeenSet;

                    /**
                     * RO group's public network address domain name
                     */
                    std::string m_dnsPodDomain;
                    bool m_dnsPodDomainHasBeenSet;

                    /**
                     * RO group's public network address port
                     */
                    uint64_t m_tgwWanVPort;
                    bool m_tgwWanVPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYGROUP_H_
