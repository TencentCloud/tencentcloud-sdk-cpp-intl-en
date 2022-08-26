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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return Name Instance name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name
                     * @param Name Instance name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Project ID of instance
                     * @return ProjectId Project ID of instance
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID of instance
                     * @param ProjectId Project ID of instance
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Instance region ID
                     * @return RegionId Instance region ID
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Instance region ID
                     * @param RegionId Instance region ID
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Instance AZ ID
                     * @return ZoneId Instance AZ ID
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Instance AZ ID
                     * @param ZoneId Instance AZ ID
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Instance VPC ID, which will be 0 if the basic network is used
                     * @return VpcId Instance VPC ID, which will be 0 if the basic network is used
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置Instance VPC ID, which will be 0 if the basic network is used
                     * @param VpcId Instance VPC ID, which will be 0 if the basic network is used
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Instance VPC subnet ID, which will be 0 if the basic network is used
                     * @return SubnetId Instance VPC subnet ID, which will be 0 if the basic network is used
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置Instance VPC subnet ID, which will be 0 if the basic network is used
                     * @param SubnetId Instance VPC subnet ID, which will be 0 if the basic network is used
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: <li>1: creating</li> <li>2: running</li> <li>3: instance operations restricted (due to the ongoing primary-replica switch)</li> <li>4: isolated</li> <li>5: repossessing</li> <li>6: repossessed</li> <li>7: running tasks (such as backup and rollback tasks)</li> <li>8: eliminated</li> <li>9: expanding capacity</li> <li>10: migrating</li> <li>11: read-only</li> <li>12: restarting</li>  <li>13: modifying configuration and waiting for switch</li> <li>14: implementing pub/sub</li> <li>15: modifying pub/sub configuration</li> <li>16: modifying configuration and switching</li> <li>17: creating read-only instances</li>
                     * @return Status Instance status. Valid values: <li>1: creating</li> <li>2: running</li> <li>3: instance operations restricted (due to the ongoing primary-replica switch)</li> <li>4: isolated</li> <li>5: repossessing</li> <li>6: repossessed</li> <li>7: running tasks (such as backup and rollback tasks)</li> <li>8: eliminated</li> <li>9: expanding capacity</li> <li>10: migrating</li> <li>11: read-only</li> <li>12: restarting</li>  <li>13: modifying configuration and waiting for switch</li> <li>14: implementing pub/sub</li> <li>15: modifying pub/sub configuration</li> <li>16: modifying configuration and switching</li> <li>17: creating read-only instances</li>
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: <li>1: creating</li> <li>2: running</li> <li>3: instance operations restricted (due to the ongoing primary-replica switch)</li> <li>4: isolated</li> <li>5: repossessing</li> <li>6: repossessed</li> <li>7: running tasks (such as backup and rollback tasks)</li> <li>8: eliminated</li> <li>9: expanding capacity</li> <li>10: migrating</li> <li>11: read-only</li> <li>12: restarting</li>  <li>13: modifying configuration and waiting for switch</li> <li>14: implementing pub/sub</li> <li>15: modifying pub/sub configuration</li> <li>16: modifying configuration and switching</li> <li>17: creating read-only instances</li>
                     * @param Status Instance status. Valid values: <li>1: creating</li> <li>2: running</li> <li>3: instance operations restricted (due to the ongoing primary-replica switch)</li> <li>4: isolated</li> <li>5: repossessing</li> <li>6: repossessed</li> <li>7: running tasks (such as backup and rollback tasks)</li> <li>8: eliminated</li> <li>9: expanding capacity</li> <li>10: migrating</li> <li>11: read-only</li> <li>12: restarting</li>  <li>13: modifying configuration and waiting for switch</li> <li>14: implementing pub/sub</li> <li>15: modifying pub/sub configuration</li> <li>16: modifying configuration and switching</li> <li>17: creating read-only instances</li>
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance access IP
                     * @return Vip Instance access IP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance access IP
                     * @param Vip Instance access IP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Instance access port
                     * @return Vport Instance access port
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Instance access port
                     * @param Vport Instance access port
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

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
                     * 获取Instance update time
                     * @return UpdateTime Instance update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Instance update time
                     * @param UpdateTime Instance update time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Instance billing start time
                     * @return StartTime Instance billing start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Instance billing start time
                     * @param StartTime Instance billing start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Instance billing end time
                     * @return EndTime Instance billing end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Instance billing end time
                     * @param EndTime Instance billing end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Instance isolation time
                     * @return IsolateTime Instance isolation time
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Instance isolation time
                     * @param IsolateTime Instance isolation time
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Instance memory size in GB
                     * @return Memory Instance memory size in GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB
                     * @param Memory Instance memory size in GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Used storage capacity of instance in GB
                     * @return UsedStorage Used storage capacity of instance in GB
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置Used storage capacity of instance in GB
                     * @param UsedStorage Used storage capacity of instance in GB
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取Instance storage capacity in GB
                     * @return Storage Instance storage capacity in GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance storage capacity in GB
                     * @param Storage Instance storage capacity in GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Instance version
                     * @return VersionName Instance version
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Instance version
                     * @param VersionName Instance version
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Instance renewal flag
                     * @return RenewFlag Instance renewal flag
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Instance renewal flag
                     * @param RenewFlag Instance renewal flag
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取High-availability instance type. Valid values: 1 (dual-server high-availability), 2 (standalone), 3 (multi-AZ), 4 (multi-AZ cluster), 5 (cluster), 9 (private consumption)
                     * @return Model High-availability instance type. Valid values: 1 (dual-server high-availability), 2 (standalone), 3 (multi-AZ), 4 (multi-AZ cluster), 5 (cluster), 9 (private consumption)
                     */
                    int64_t GetModel() const;

                    /**
                     * 设置High-availability instance type. Valid values: 1 (dual-server high-availability), 2 (standalone), 3 (multi-AZ), 4 (multi-AZ cluster), 5 (cluster), 9 (private consumption)
                     * @param Model High-availability instance type. Valid values: 1 (dual-server high-availability), 2 (standalone), 3 (multi-AZ), 4 (multi-AZ cluster), 5 (cluster), 9 (private consumption)
                     */
                    void SetModel(const int64_t& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Instance region name, such as ap-guangzhou
                     * @return Region Instance region name, such as ap-guangzhou
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region name, such as ap-guangzhou
                     * @param Region Instance region name, such as ap-guangzhou
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Instance AZ name, such as ap-guangzhou-1
                     * @return Zone Instance AZ name, such as ap-guangzhou-1
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ name, such as ap-guangzhou-1
                     * @param Zone Instance AZ name, such as ap-guangzhou-1
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Backup time point
                     * @return BackupTime Backup time point
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置Backup time point
                     * @param BackupTime Backup time point
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. 0: pay-as-you-go
                     * @return PayMode Instance billing mode. 0: pay-as-you-go
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. 0: pay-as-you-go
                     * @param PayMode Instance billing mode. 0: pay-as-you-go
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Instance UID
                     * @return Uid Instance UID
                     */
                    std::string GetUid() const;

                    /**
                     * 设置Instance UID
                     * @param Uid Instance UID
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of instance
                     * @return Cpu Number of CPU cores of instance
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores of instance
                     * @param Cpu Number of CPU cores of instance
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance version code
                     * @return Version Instance version code
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Instance version code
                     * @param Version Instance version code
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Physical server code
                     * @return Type Physical server code
                     */
                    std::string GetType() const;

                    /**
                     * 设置Physical server code
                     * @param Type Physical server code
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Billing ID
                     * @return Pid Billing ID
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Billing ID
                     * @param Pid Billing ID
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Unique string-type ID of instance VPC in the format of `vpc-xxx`, which is an empty string if the basic network is used
                     * @return UniqVpcId Unique string-type ID of instance VPC in the format of `vpc-xxx`, which is an empty string if the basic network is used
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unique string-type ID of instance VPC in the format of `vpc-xxx`, which is an empty string if the basic network is used
                     * @param UniqVpcId Unique string-type ID of instance VPC in the format of `vpc-xxx`, which is an empty string if the basic network is used
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Unique string-type ID of instance subnet in the format of `subnet-xxx`, which is an empty string if the basic network is used
                     * @return UniqSubnetId Unique string-type ID of instance subnet in the format of `subnet-xxx`, which is an empty string if the basic network is used
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Unique string-type ID of instance subnet in the format of `subnet-xxx`, which is an empty string if the basic network is used
                     * @param UniqSubnetId Unique string-type ID of instance subnet in the format of `subnet-xxx`, which is an empty string if the basic network is used
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance isolation.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsolateOperator Instance isolation.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIsolateOperator() const;

                    /**
                     * 设置Instance isolation.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsolateOperator Instance isolation.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsolateOperator(const std::string& _isolateOperator);

                    /**
                     * 判断参数 IsolateOperator 是否已赋值
                     * @return IsolateOperator 是否已赋值
                     */
                    bool IsolateOperatorHasBeenSet() const;

                    /**
                     * 获取Pub/sub flag. Valid values: SUB (subscribe instance), PUB (publish instance). If it is left empty, it refers to a regular instance without a pub/sub design.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubFlag Pub/sub flag. Valid values: SUB (subscribe instance), PUB (publish instance). If it is left empty, it refers to a regular instance without a pub/sub design.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubFlag() const;

                    /**
                     * 设置Pub/sub flag. Valid values: SUB (subscribe instance), PUB (publish instance). If it is left empty, it refers to a regular instance without a pub/sub design.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SubFlag Pub/sub flag. Valid values: SUB (subscribe instance), PUB (publish instance). If it is left empty, it refers to a regular instance without a pub/sub design.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubFlag(const std::string& _subFlag);

                    /**
                     * 判断参数 SubFlag 是否已赋值
                     * @return SubFlag 是否已赋值
                     */
                    bool SubFlagHasBeenSet() const;

                    /**
                     * 获取Read-only flag. Valid values: RO (read-only instance), MASTER (primary instance with read-only instances). If it is left empty, it refers to an instance which is not read-only and has no RO group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ROFlag Read-only flag. Valid values: RO (read-only instance), MASTER (primary instance with read-only instances). If it is left empty, it refers to an instance which is not read-only and has no RO group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetROFlag() const;

                    /**
                     * 设置Read-only flag. Valid values: RO (read-only instance), MASTER (primary instance with read-only instances). If it is left empty, it refers to an instance which is not read-only and has no RO group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ROFlag Read-only flag. Valid values: RO (read-only instance), MASTER (primary instance with read-only instances). If it is left empty, it refers to an instance which is not read-only and has no RO group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetROFlag(const std::string& _rOFlag);

                    /**
                     * 判断参数 ROFlag 是否已赋值
                     * @return ROFlag 是否已赋值
                     */
                    bool ROFlagHasBeenSet() const;

                    /**
                     * 获取Disaster recovery type. Valid values: MIRROR (image), ALWAYSON (AlwaysOn), SINGLE (singleton).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HAFlag Disaster recovery type. Valid values: MIRROR (image), ALWAYSON (AlwaysOn), SINGLE (singleton).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHAFlag() const;

                    /**
                     * 设置Disaster recovery type. Valid values: MIRROR (image), ALWAYSON (AlwaysOn), SINGLE (singleton).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HAFlag Disaster recovery type. Valid values: MIRROR (image), ALWAYSON (AlwaysOn), SINGLE (singleton).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHAFlag(const std::string& _hAFlag);

                    /**
                     * 判断参数 HAFlag 是否已赋值
                     * @return HAFlag 是否已赋值
                     */
                    bool HAFlagHasBeenSet() const;

                    /**
                     * 获取The list of tags associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ResourceTags The list of tags associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置The list of tags associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ResourceTags The list of tags associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node (default value)), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node (valid for Always On clusters)), `slave_no_pkg` (do not archive the backup files of the replica node (valid for Always On clusters)). This parameter is invalid for read-only instances.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BackupModel Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node (default value)), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node (valid for Always On clusters)), `slave_no_pkg` (do not archive the backup files of the replica node (valid for Always On clusters)). This parameter is invalid for read-only instances.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetBackupModel() const;

                    /**
                     * 设置Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node (default value)), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node (valid for Always On clusters)), `slave_no_pkg` (do not archive the backup files of the replica node (valid for Always On clusters)). This parameter is invalid for read-only instances.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param BackupModel Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node (default value)), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node (valid for Always On clusters)), `slave_no_pkg` (do not archive the backup files of the replica node (valid for Always On clusters)). This parameter is invalid for read-only instances.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBackupModel(const std::string& _backupModel);

                    /**
                     * 判断参数 BackupModel 是否已赋值
                     * @return BackupModel 是否已赋值
                     */
                    bool BackupModelHasBeenSet() const;

                    /**
                     * 获取Instance backup info
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceNote Instance backup info
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceNote() const;

                    /**
                     * 设置Instance backup info
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceNote Instance backup info
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceNote(const std::string& _instanceNote);

                    /**
                     * 判断参数 InstanceNote 是否已赋值
                     * @return InstanceNote 是否已赋值
                     */
                    bool InstanceNoteHasBeenSet() const;

                    /**
                     * 获取Backup cycle
                     * @return BackupCycle Backup cycle
                     */
                    std::vector<int64_t> GetBackupCycle() const;

                    /**
                     * 设置Backup cycle
                     * @param BackupCycle Backup cycle
                     */
                    void SetBackupCycle(const std::vector<int64_t>& _backupCycle);

                    /**
                     * 判断参数 BackupCycle 是否已赋值
                     * @return BackupCycle 是否已赋值
                     */
                    bool BackupCycleHasBeenSet() const;

                    /**
                     * 获取Backup cycle type. Valid values: `daily`, `weekly`, `monthly`.
                     * @return BackupCycleType Backup cycle type. Valid values: `daily`, `weekly`, `monthly`.
                     */
                    std::string GetBackupCycleType() const;

                    /**
                     * 设置Backup cycle type. Valid values: `daily`, `weekly`, `monthly`.
                     * @param BackupCycleType Backup cycle type. Valid values: `daily`, `weekly`, `monthly`.
                     */
                    void SetBackupCycleType(const std::string& _backupCycleType);

                    /**
                     * 判断参数 BackupCycleType 是否已赋值
                     * @return BackupCycleType 是否已赋值
                     */
                    bool BackupCycleTypeHasBeenSet() const;

                    /**
                     * 获取Data (log) backup retention period
                     * @return BackupSaveDays Data (log) backup retention period
                     */
                    int64_t GetBackupSaveDays() const;

                    /**
                     * 设置Data (log) backup retention period
                     * @param BackupSaveDays Data (log) backup retention period
                     */
                    void SetBackupSaveDays(const int64_t& _backupSaveDays);

                    /**
                     * 判断参数 BackupSaveDays 是否已赋值
                     * @return BackupSaveDays 是否已赋值
                     */
                    bool BackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `HA` (high-availability), `RO` (read-only), `SI` (basic edition), `BI` (business intelligence service).
                     * @return InstanceType Instance type. Valid values: `HA` (high-availability), `RO` (read-only), `SI` (basic edition), `BI` (business intelligence service).
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values: `HA` (high-availability), `RO` (read-only), `SI` (basic edition), `BI` (business intelligence service).
                     * @param InstanceType Instance type. Valid values: `HA` (high-availability), `RO` (read-only), `SI` (basic edition), `BI` (business intelligence service).
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The target region of cross-region backup. If this parameter left empty, it indicates that cross-region backup is disabled.
                     * @return CrossRegions The target region of cross-region backup. If this parameter left empty, it indicates that cross-region backup is disabled.
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置The target region of cross-region backup. If this parameter left empty, it indicates that cross-region backup is disabled.
                     * @param CrossRegions The target region of cross-region backup. If this parameter left empty, it indicates that cross-region backup is disabled.
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取Cross-region backup status. Valid values: `enable` (enabled), `disable` (disabed)
                     * @return CrossBackupEnabled Cross-region backup status. Valid values: `enable` (enabled), `disable` (disabed)
                     */
                    std::string GetCrossBackupEnabled() const;

                    /**
                     * 设置Cross-region backup status. Valid values: `enable` (enabled), `disable` (disabed)
                     * @param CrossBackupEnabled Cross-region backup status. Valid values: `enable` (enabled), `disable` (disabed)
                     */
                    void SetCrossBackupEnabled(const std::string& _crossBackupEnabled);

                    /**
                     * 判断参数 CrossBackupEnabled 是否已赋值
                     * @return CrossBackupEnabled 是否已赋值
                     */
                    bool CrossBackupEnabledHasBeenSet() const;

                    /**
                     * 获取The retention period of cross-region backup. Default value: 7 days
                     * @return CrossBackupSaveDays The retention period of cross-region backup. Default value: 7 days
                     */
                    uint64_t GetCrossBackupSaveDays() const;

                    /**
                     * 设置The retention period of cross-region backup. Default value: 7 days
                     * @param CrossBackupSaveDays The retention period of cross-region backup. Default value: 7 days
                     */
                    void SetCrossBackupSaveDays(const uint64_t& _crossBackupSaveDays);

                    /**
                     * 判断参数 CrossBackupSaveDays 是否已赋值
                     * @return CrossBackupSaveDays 是否已赋值
                     */
                    bool CrossBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取Domain name of the public network address
                     * @return DnsPodDomain Domain name of the public network address
                     */
                    std::string GetDnsPodDomain() const;

                    /**
                     * 设置Domain name of the public network address
                     * @param DnsPodDomain Domain name of the public network address
                     */
                    void SetDnsPodDomain(const std::string& _dnsPodDomain);

                    /**
                     * 判断参数 DnsPodDomain 是否已赋值
                     * @return DnsPodDomain 是否已赋值
                     */
                    bool DnsPodDomainHasBeenSet() const;

                    /**
                     * 获取Port number of the public network
                     * @return TgwWanVPort Port number of the public network
                     */
                    int64_t GetTgwWanVPort() const;

                    /**
                     * 设置Port number of the public network
                     * @param TgwWanVPort Port number of the public network
                     */
                    void SetTgwWanVPort(const int64_t& _tgwWanVPort);

                    /**
                     * 判断参数 TgwWanVPort 是否已赋值
                     * @return TgwWanVPort 是否已赋值
                     */
                    bool TgwWanVPortHasBeenSet() const;

                    /**
                     * 获取Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     * @return Collation Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     */
                    std::string GetCollation() const;

                    /**
                     * 设置Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     * @param Collation Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     */
                    void SetCollation(const std::string& _collation);

                    /**
                     * 判断参数 Collation 是否已赋值
                     * @return Collation 是否已赋值
                     */
                    bool CollationHasBeenSet() const;

                    /**
                     * 获取System time zone. Default value: `China Standard Time`.
                     * @return TimeZone System time zone. Default value: `China Standard Time`.
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置System time zone. Default value: `China Standard Time`.
                     * @param TimeZone System time zone. Default value: `China Standard Time`.
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project ID of instance
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance region ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Instance AZ ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Instance VPC ID, which will be 0 if the basic network is used
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Instance VPC subnet ID, which will be 0 if the basic network is used
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance status. Valid values: <li>1: creating</li> <li>2: running</li> <li>3: instance operations restricted (due to the ongoing primary-replica switch)</li> <li>4: isolated</li> <li>5: repossessing</li> <li>6: repossessed</li> <li>7: running tasks (such as backup and rollback tasks)</li> <li>8: eliminated</li> <li>9: expanding capacity</li> <li>10: migrating</li> <li>11: read-only</li> <li>12: restarting</li>  <li>13: modifying configuration and waiting for switch</li> <li>14: implementing pub/sub</li> <li>15: modifying pub/sub configuration</li> <li>16: modifying configuration and switching</li> <li>17: creating read-only instances</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance access IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Instance access port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Instance billing start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Instance billing end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Instance isolation time
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Instance memory size in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Used storage capacity of instance in GB
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * Instance storage capacity in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Instance version
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Instance renewal flag
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * High-availability instance type. Valid values: 1 (dual-server high-availability), 2 (standalone), 3 (multi-AZ), 4 (multi-AZ cluster), 5 (cluster), 9 (private consumption)
                     */
                    int64_t m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Instance region name, such as ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance AZ name, such as ap-guangzhou-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Backup time point
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Instance billing mode. 0: pay-as-you-go
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance UID
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Number of CPU cores of instance
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance version code
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Physical server code
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Billing ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Unique string-type ID of instance VPC in the format of `vpc-xxx`, which is an empty string if the basic network is used
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Unique string-type ID of instance subnet in the format of `subnet-xxx`, which is an empty string if the basic network is used
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Instance isolation.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateOperator;
                    bool m_isolateOperatorHasBeenSet;

                    /**
                     * Pub/sub flag. Valid values: SUB (subscribe instance), PUB (publish instance). If it is left empty, it refers to a regular instance without a pub/sub design.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subFlag;
                    bool m_subFlagHasBeenSet;

                    /**
                     * Read-only flag. Valid values: RO (read-only instance), MASTER (primary instance with read-only instances). If it is left empty, it refers to an instance which is not read-only and has no RO group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rOFlag;
                    bool m_rOFlagHasBeenSet;

                    /**
                     * Disaster recovery type. Valid values: MIRROR (image), ALWAYSON (AlwaysOn), SINGLE (singleton).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hAFlag;
                    bool m_hAFlagHasBeenSet;

                    /**
                     * The list of tags associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node (default value)), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node (valid for Always On clusters)), `slave_no_pkg` (do not archive the backup files of the replica node (valid for Always On clusters)). This parameter is invalid for read-only instances.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_backupModel;
                    bool m_backupModelHasBeenSet;

                    /**
                     * Instance backup info
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceNote;
                    bool m_instanceNoteHasBeenSet;

                    /**
                     * Backup cycle
                     */
                    std::vector<int64_t> m_backupCycle;
                    bool m_backupCycleHasBeenSet;

                    /**
                     * Backup cycle type. Valid values: `daily`, `weekly`, `monthly`.
                     */
                    std::string m_backupCycleType;
                    bool m_backupCycleTypeHasBeenSet;

                    /**
                     * Data (log) backup retention period
                     */
                    int64_t m_backupSaveDays;
                    bool m_backupSaveDaysHasBeenSet;

                    /**
                     * Instance type. Valid values: `HA` (high-availability), `RO` (read-only), `SI` (basic edition), `BI` (business intelligence service).
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The target region of cross-region backup. If this parameter left empty, it indicates that cross-region backup is disabled.
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * Cross-region backup status. Valid values: `enable` (enabled), `disable` (disabed)
                     */
                    std::string m_crossBackupEnabled;
                    bool m_crossBackupEnabledHasBeenSet;

                    /**
                     * The retention period of cross-region backup. Default value: 7 days
                     */
                    uint64_t m_crossBackupSaveDays;
                    bool m_crossBackupSaveDaysHasBeenSet;

                    /**
                     * Domain name of the public network address
                     */
                    std::string m_dnsPodDomain;
                    bool m_dnsPodDomainHasBeenSet;

                    /**
                     * Port number of the public network
                     */
                    int64_t m_tgwWanVPort;
                    bool m_tgwWanVPortHasBeenSet;

                    /**
                     * Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * System time zone. Default value: `China Standard Time`.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_
