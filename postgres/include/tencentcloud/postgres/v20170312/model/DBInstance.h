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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>
#include <tencentcloud/postgres/v20170312/model/NetworkAccess.h>
#include <tencentcloud/postgres/v20170312/model/DBNode.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class DBInstance : public AbstractModel
                {
                public:
                    DBInstance();
                    ~DBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance region such as ap-guangzhou, which corresponds to the `Region` field of `RegionSet`
                     * @return Region Instance region such as ap-guangzhou, which corresponds to the `Region` field of `RegionSet`
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region such as ap-guangzhou, which corresponds to the `Region` field of `RegionSet`
                     * @param Region Instance region such as ap-guangzhou, which corresponds to the `Region` field of `RegionSet`
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Instance AZ such as ap-guangzhou-3, which corresponds to the `Zone` field of `ZoneSet`
                     * @return Zone Instance AZ such as ap-guangzhou-3, which corresponds to the `Zone` field of `ZoneSet`
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ such as ap-guangzhou-3, which corresponds to the `Zone` field of `ZoneSet`
                     * @param Zone Instance AZ such as ap-guangzhou-3, which corresponds to the `Zone` field of `ZoneSet`
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取SubnetId
                     * @return SubnetId SubnetId
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置SubnetId
                     * @param SubnetId SubnetId
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param DBInstanceId Instance ID
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return DBInstanceName Instance name
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param DBInstanceName Instance name
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: `applying`, `init` (to be initialized), `initing` (initializing), `running`, `limited run`, `isolated`, `recycling`, `recycled`, `job running`, `offline`, `migrating`, `expanding`, `waitSwitch` (waiting for switch), `switching`, `readonly`, `restarting`, `network changing`
                     * @return DBInstanceStatus Instance status. Valid values: `applying`, `init` (to be initialized), `initing` (initializing), `running`, `limited run`, `isolated`, `recycling`, `recycled`, `job running`, `offline`, `migrating`, `expanding`, `waitSwitch` (waiting for switch), `switching`, `readonly`, `restarting`, `network changing`
                     */
                    std::string GetDBInstanceStatus() const;

                    /**
                     * 设置Instance status. Valid values: `applying`, `init` (to be initialized), `initing` (initializing), `running`, `limited run`, `isolated`, `recycling`, `recycled`, `job running`, `offline`, `migrating`, `expanding`, `waitSwitch` (waiting for switch), `switching`, `readonly`, `restarting`, `network changing`
                     * @param DBInstanceStatus Instance status. Valid values: `applying`, `init` (to be initialized), `initing` (initializing), `running`, `limited run`, `isolated`, `recycling`, `recycled`, `job running`, `offline`, `migrating`, `expanding`, `waitSwitch` (waiting for switch), `switching`, `readonly`, `restarting`, `network changing`
                     */
                    void SetDBInstanceStatus(const std::string& _dBInstanceStatus);

                    /**
                     * 判断参数 DBInstanceStatus 是否已赋值
                     * @return DBInstanceStatus 是否已赋值
                     */
                    bool DBInstanceStatusHasBeenSet() const;

                    /**
                     * 获取Assigned instance memory size in GB
                     * @return DBInstanceMemory Assigned instance memory size in GB
                     */
                    uint64_t GetDBInstanceMemory() const;

                    /**
                     * 设置Assigned instance memory size in GB
                     * @param DBInstanceMemory Assigned instance memory size in GB
                     */
                    void SetDBInstanceMemory(const uint64_t& _dBInstanceMemory);

                    /**
                     * 判断参数 DBInstanceMemory 是否已赋值
                     * @return DBInstanceMemory 是否已赋值
                     */
                    bool DBInstanceMemoryHasBeenSet() const;

                    /**
                     * 获取Assigned instance storage capacity in GB
                     * @return DBInstanceStorage Assigned instance storage capacity in GB
                     */
                    uint64_t GetDBInstanceStorage() const;

                    /**
                     * 设置Assigned instance storage capacity in GB
                     * @param DBInstanceStorage Assigned instance storage capacity in GB
                     */
                    void SetDBInstanceStorage(const uint64_t& _dBInstanceStorage);

                    /**
                     * 判断参数 DBInstanceStorage 是否已赋值
                     * @return DBInstanceStorage 是否已赋值
                     */
                    bool DBInstanceStorageHasBeenSet() const;

                    /**
                     * 获取Number of assigned CPUs
                     * @return DBInstanceCpu Number of assigned CPUs
                     */
                    uint64_t GetDBInstanceCpu() const;

                    /**
                     * 设置Number of assigned CPUs
                     * @param DBInstanceCpu Number of assigned CPUs
                     */
                    void SetDBInstanceCpu(const uint64_t& _dBInstanceCpu);

                    /**
                     * 判断参数 DBInstanceCpu 是否已赋值
                     * @return DBInstanceCpu 是否已赋值
                     */
                    bool DBInstanceCpuHasBeenSet() const;

                    /**
                     * 获取Purchasable specification ID
                     * @return DBInstanceClass Purchasable specification ID
                     */
                    std::string GetDBInstanceClass() const;

                    /**
                     * 设置Purchasable specification ID
                     * @param DBInstanceClass Purchasable specification ID
                     */
                    void SetDBInstanceClass(const std::string& _dBInstanceClass);

                    /**
                     * 判断参数 DBInstanceClass 是否已赋值
                     * @return DBInstanceClass 是否已赋值
                     */
                    bool DBInstanceClassHasBeenSet() const;

                    /**
                     * 获取Instance type. 1: primary (master instance), 2: readonly (read-only instance), 3: guard (disaster recovery instance), 4: temp (temp instance)
                     * @return DBInstanceType Instance type. 1: primary (master instance), 2: readonly (read-only instance), 3: guard (disaster recovery instance), 4: temp (temp instance)
                     */
                    std::string GetDBInstanceType() const;

                    /**
                     * 设置Instance type. 1: primary (master instance), 2: readonly (read-only instance), 3: guard (disaster recovery instance), 4: temp (temp instance)
                     * @param DBInstanceType Instance type. 1: primary (master instance), 2: readonly (read-only instance), 3: guard (disaster recovery instance), 4: temp (temp instance)
                     */
                    void SetDBInstanceType(const std::string& _dBInstanceType);

                    /**
                     * 判断参数 DBInstanceType 是否已赋值
                     * @return DBInstanceType 是否已赋值
                     */
                    bool DBInstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance edition. Currently, only `standard` edition (dual-server high-availability one-master-one-slave edition) is supported
                     * @return DBInstanceVersion Instance edition. Currently, only `standard` edition (dual-server high-availability one-master-one-slave edition) is supported
                     */
                    std::string GetDBInstanceVersion() const;

                    /**
                     * 设置Instance edition. Currently, only `standard` edition (dual-server high-availability one-master-one-slave edition) is supported
                     * @param DBInstanceVersion Instance edition. Currently, only `standard` edition (dual-server high-availability one-master-one-slave edition) is supported
                     */
                    void SetDBInstanceVersion(const std::string& _dBInstanceVersion);

                    /**
                     * 判断参数 DBInstanceVersion 是否已赋值
                     * @return DBInstanceVersion 是否已赋值
                     */
                    bool DBInstanceVersionHasBeenSet() const;

                    /**
                     * 获取Instance database character set
                     * @return DBCharset Instance database character set
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置Instance database character set
                     * @param DBCharset Instance database character set
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取PostgreSQL version number
                     * @return DBVersion PostgreSQL version number
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置PostgreSQL version number
                     * @param DBVersion PostgreSQL version number
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param CreateTime Instance creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance last modified time
                     * @return UpdateTime Instance last modified time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Instance last modified time
                     * @param UpdateTime Instance last modified time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Instance expiration time
                     * @return ExpireTime Instance expiration time
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param ExpireTime Instance expiration time
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Instance isolation time
                     * @return IsolatedTime Instance isolation time
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置Instance isolation time
                     * @param IsolatedTime Instance isolation time
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Billing mode. postpaid: pay-as-you-go
                     * @return PayType Billing mode. postpaid: pay-as-you-go
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置Billing mode. postpaid: pay-as-you-go
                     * @param PayType Billing mode. postpaid: pay-as-you-go
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Whether to renew automatically. 1: yes, 0: no
                     * @return AutoRenew Whether to renew automatically. 1: yes, 0: no
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Whether to renew automatically. 1: yes, 0: no
                     * @param AutoRenew Whether to renew automatically. 1: yes, 0: no
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Instance network connection information
                     * @return DBInstanceNetInfo Instance network connection information
                     */
                    std::vector<DBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置Instance network connection information
                     * @param DBInstanceNetInfo Instance network connection information
                     */
                    void SetDBInstanceNetInfo(const std::vector<DBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取Machine type
                     * @return Type Machine type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Machine type
                     * @param Type Machine type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取User `AppId`
                     * @return AppId User `AppId`
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User `AppId`
                     * @param AppId User `AppId`
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Instance `Uid`
                     * @return Uid Instance `Uid`
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置Instance `Uid`
                     * @param Uid Instance `Uid`
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Whether the instance supports IPv6 address access. Valid values: 1 (yes), 0 (no)
                     * @return SupportIpv6 Whether the instance supports IPv6 address access. Valid values: 1 (yes), 0 (no)
                     */
                    uint64_t GetSupportIpv6() const;

                    /**
                     * 设置Whether the instance supports IPv6 address access. Valid values: 1 (yes), 0 (no)
                     * @param SupportIpv6 Whether the instance supports IPv6 address access. Valid values: 1 (yes), 0 (no)
                     */
                    void SetSupportIpv6(const uint64_t& _supportIpv6);

                    /**
                     * 判断参数 SupportIpv6 是否已赋值
                     * @return SupportIpv6 是否已赋值
                     */
                    bool SupportIpv6HasBeenSet() const;

                    /**
                     * 获取The information of tags associated with instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagList The information of tags associated with instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置The information of tags associated with instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TagList The information of tags associated with instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Primary instance information, which is returned only when the instance is read-only
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MasterDBInstanceId Primary instance information, which is returned only when the instance is read-only
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置Primary instance information, which is returned only when the instance is read-only
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MasterDBInstanceId Primary instance information, which is returned only when the instance is read-only
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of read-only instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReadOnlyInstanceNum Number of read-only instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetReadOnlyInstanceNum() const;

                    /**
                     * 设置Number of read-only instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ReadOnlyInstanceNum Number of read-only instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReadOnlyInstanceNum(const int64_t& _readOnlyInstanceNum);

                    /**
                     * 判断参数 ReadOnlyInstanceNum 是否已赋值
                     * @return ReadOnlyInstanceNum 是否已赋值
                     */
                    bool ReadOnlyInstanceNumHasBeenSet() const;

                    /**
                     * 获取The status of a instance in a read-only group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusInReadonlyGroup The status of a instance in a read-only group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatusInReadonlyGroup() const;

                    /**
                     * 设置The status of a instance in a read-only group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StatusInReadonlyGroup The status of a instance in a read-only group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatusInReadonlyGroup(const std::string& _statusInReadonlyGroup);

                    /**
                     * 判断参数 StatusInReadonlyGroup 是否已赋值
                     * @return StatusInReadonlyGroup 是否已赋值
                     */
                    bool StatusInReadonlyGroupHasBeenSet() const;

                    /**
                     * 获取Elimination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OfflineTime Elimination time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Elimination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OfflineTime Elimination time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBKernelVersion Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DBKernelVersion Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取Network access list of the instance (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NetworkAccessList Network access list of the instance (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<NetworkAccess> GetNetworkAccessList() const;

                    /**
                     * 设置Network access list of the instance (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param NetworkAccessList Network access list of the instance (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNetworkAccessList(const std::vector<NetworkAccess>& _networkAccessList);

                    /**
                     * 判断参数 NetworkAccessList 是否已赋值
                     * @return NetworkAccessList 是否已赋值
                     */
                    bool NetworkAccessListHasBeenSet() const;

                    /**
                     * 获取PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBMajorVersion PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DBMajorVersion PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取Instance node information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBNodeSet Instance node information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置Instance node information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DBNodeSet Instance node information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDBNodeSet(const std::vector<DBNode>& _dBNodeSet);

                    /**
                     * 判断参数 DBNodeSet 是否已赋值
                     * @return DBNodeSet 是否已赋值
                     */
                    bool DBNodeSetHasBeenSet() const;

                    /**
                     * 获取Whether the instance supports TDE data encryption. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IsSupportTDE Whether the instance supports TDE data encryption. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsSupportTDE() const;

                    /**
                     * 设置Whether the instance supports TDE data encryption. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param IsSupportTDE Whether the instance supports TDE data encryption. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetIsSupportTDE(const int64_t& _isSupportTDE);

                    /**
                     * 判断参数 IsSupportTDE 是否已赋值
                     * @return IsSupportTDE 是否已赋值
                     */
                    bool IsSupportTDEHasBeenSet() const;

                private:

                    /**
                     * Instance region such as ap-guangzhou, which corresponds to the `Region` field of `RegionSet`
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance AZ such as ap-guangzhou-3, which corresponds to the `Zone` field of `ZoneSet`
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * SubnetId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * Instance status. Valid values: `applying`, `init` (to be initialized), `initing` (initializing), `running`, `limited run`, `isolated`, `recycling`, `recycled`, `job running`, `offline`, `migrating`, `expanding`, `waitSwitch` (waiting for switch), `switching`, `readonly`, `restarting`, `network changing`
                     */
                    std::string m_dBInstanceStatus;
                    bool m_dBInstanceStatusHasBeenSet;

                    /**
                     * Assigned instance memory size in GB
                     */
                    uint64_t m_dBInstanceMemory;
                    bool m_dBInstanceMemoryHasBeenSet;

                    /**
                     * Assigned instance storage capacity in GB
                     */
                    uint64_t m_dBInstanceStorage;
                    bool m_dBInstanceStorageHasBeenSet;

                    /**
                     * Number of assigned CPUs
                     */
                    uint64_t m_dBInstanceCpu;
                    bool m_dBInstanceCpuHasBeenSet;

                    /**
                     * Purchasable specification ID
                     */
                    std::string m_dBInstanceClass;
                    bool m_dBInstanceClassHasBeenSet;

                    /**
                     * Instance type. 1: primary (master instance), 2: readonly (read-only instance), 3: guard (disaster recovery instance), 4: temp (temp instance)
                     */
                    std::string m_dBInstanceType;
                    bool m_dBInstanceTypeHasBeenSet;

                    /**
                     * Instance edition. Currently, only `standard` edition (dual-server high-availability one-master-one-slave edition) is supported
                     */
                    std::string m_dBInstanceVersion;
                    bool m_dBInstanceVersionHasBeenSet;

                    /**
                     * Instance database character set
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * PostgreSQL version number
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance last modified time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Instance isolation time
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Billing mode. postpaid: pay-as-you-go
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Whether to renew automatically. 1: yes, 0: no
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Instance network connection information
                     */
                    std::vector<DBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * Machine type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * User `AppId`
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Instance `Uid`
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Whether the instance supports IPv6 address access. Valid values: 1 (yes), 0 (no)
                     */
                    uint64_t m_supportIpv6;
                    bool m_supportIpv6HasBeenSet;

                    /**
                     * The information of tags associated with instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Primary instance information, which is returned only when the instance is read-only
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * Number of read-only instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_readOnlyInstanceNum;
                    bool m_readOnlyInstanceNumHasBeenSet;

                    /**
                     * The status of a instance in a read-only group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusInReadonlyGroup;
                    bool m_statusInReadonlyGroupHasBeenSet;

                    /**
                     * Elimination time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * Network access list of the instance (this field has been deprecated)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<NetworkAccess> m_networkAccessList;
                    bool m_networkAccessListHasBeenSet;

                    /**
                     * PostgreSQL major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * Instance node information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * Whether the instance supports TDE data encryption. Valid values: 0 (no), 1 (yes)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isSupportTDE;
                    bool m_isSupportTDEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
