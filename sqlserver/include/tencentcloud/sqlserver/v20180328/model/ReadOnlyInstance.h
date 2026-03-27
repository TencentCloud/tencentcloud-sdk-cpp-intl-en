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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Read-Only Replica Instance
                */
                class ReadOnlyInstance : public AbstractModel
                {
                public:
                    ReadOnlyInstance();
                    ~ReadOnlyInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Read-Only Replica ID, in the format of: mssqlro-3l3fgqn7
                     * @return InstanceId Read-Only Replica ID, in the format of: mssqlro-3l3fgqn7
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Read-Only Replica ID, in the format of: mssqlro-3l3fgqn7
                     * @param _instanceId Read-Only Replica ID, in the format of: mssqlro-3l3fgqn7
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Name
                     * @return Name Read-Only Replica Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Read-Only Replica Name
                     * @param _name Read-Only Replica Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Unique UID
                     * @return Uid Read-Only Replica Unique UID
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置Read-Only Replica Unique UID
                     * @param _uid Read-Only Replica Unique UID
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Project ID
                     * @return ProjectId Read-Only Replica Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Read-Only Replica Project ID
                     * @param _projectId Read-Only Replica Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Status: 1: Creating, 2: Running, 3: Delayed Removal, 4: Isolated, 5: Recycling, 6: Recycled, 7: Task Executing, 8: Offline, 9: Instance Scaling, 10: Instance Migrating, 12: Restarting
                     * @return Status Read-Only Replica Status: 1: Creating, 2: Running, 3: Delayed Removal, 4: Isolated, 5: Recycling, 6: Recycled, 7: Task Executing, 8: Offline, 9: Instance Scaling, 10: Instance Migrating, 12: Restarting
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Read-Only Replica Status: 1: Creating, 2: Running, 3: Delayed Removal, 4: Isolated, 5: Recycling, 6: Recycled, 7: Task Executing, 8: Offline, 9: Instance Scaling, 10: Instance Migrating, 12: Restarting
                     * @param _status Read-Only Replica Status: 1: Creating, 2: Running, 3: Delayed Removal, 4: Isolated, 5: Recycling, 6: Recycled, 7: Task Executing, 8: Offline, 9: Instance Scaling, 10: Instance Migrating, 12: Restarting
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
                     * 获取Read-Only Replica Creation Time
                     * @return CreateTime Read-Only Replica Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Read-Only Replica Creation Time
                     * @param _createTime Read-Only Replica Creation Time
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
                     * 获取Read-Only Replica Update Time
                     * @return UpdateTime Read-Only Replica Update Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Read-Only Replica Update Time
                     * @param _updateTime Read-Only Replica Update Time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Memory Size (Unit: GB)
                     * @return Memory Read-Only Replica Memory Size (Unit: GB)
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Read-Only Replica Memory Size (Unit: GB)
                     * @param _memory Read-Only Replica Memory Size (Unit: GB)
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Storage Space Size (Unit: GB)
                     * @return Storage Read-Only Replica Storage Space Size (Unit: GB)
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Read-Only Replica Storage Space Size (Unit: GB)
                     * @param _storage Read-Only Replica Storage Space Size (Unit: GB)
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica cpu Core Count
                     * @return Cpu Read-Only Replica cpu Core Count
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Read-Only Replica cpu Core Count
                     * @param _cpu Read-Only Replica cpu Core Count
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Codenames
                     * @return Version Read-Only Replica Codenames
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Read-Only Replica Codenames
                     * @param _version Read-Only Replica Codenames
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Host Machine Code
                     * @return Type Host Machine Code
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Host Machine Code
                     * @param _type Host Machine Code
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Mode, 2-Standalone
                     * @return Model Read-Only Replica Mode, 2-Standalone
                     * 
                     */
                    int64_t GetModel() const;

                    /**
                     * 设置Read-Only Replica Mode, 2-Standalone
                     * @param _model Read-Only Replica Mode, 2-Standalone
                     * 
                     */
                    void SetModel(const int64_t& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Billing Mode, 1-yearly/monthly subscription, 0-pay-as-you-go
                     * @return PayMode Read-Only Replica Billing Mode, 1-yearly/monthly subscription, 0-pay-as-you-go
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Read-Only Replica Billing Mode, 1-yearly/monthly subscription, 0-pay-as-you-go
                     * @param _payMode Read-Only Replica Billing Mode, 1-yearly/monthly subscription, 0-pay-as-you-go
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Weight
                     * @return Weight Read-Only Replica Weight
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Read-Only Replica Weight
                     * @param _weight Read-Only Replica Weight
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Latency Time (Unit: seconds)
                     * @return DelayTime Read-Only Replica Latency Time (Unit: seconds)
                     * 
                     */
                    std::string GetDelayTime() const;

                    /**
                     * 设置Read-Only Replica Latency Time (Unit: seconds)
                     * @param _delayTime Read-Only Replica Latency Time (Unit: seconds)
                     * 
                     */
                    void SetDelayTime(const std::string& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Synchronization status between the read-only replica and the primary instance.

Init: Initializing

DeployReadOnlyInPorgress: Deploying replica in progress

DeployReadOnlySuccess: Replica deployment succeeded

DeployReadOnlyFail: Replica deployment failed

DeployMasterDBInPorgress: Adding replica database to primary node in progress

DeployMasterDBSuccess: Successfully added replica database to primary node

DeployMasterDBFail: Failed to add replica database to primary node

DeployReadOnlyDBInPorgress: Replica restoration and database joining started

DeployReadOnlyDBSuccess: Replica restoration and database joining succeeded

DeployReadOnlyDBFail: Replica restoration and database joining failed

SyncDelay: Synchronization delayed

SyncFail: Synchronization failed

SyncExcluded: Removed from read-only group

SyncNormal: Normal
                     * @return SynStatus Synchronization status between the read-only replica and the primary instance.

Init: Initializing

DeployReadOnlyInPorgress: Deploying replica in progress

DeployReadOnlySuccess: Replica deployment succeeded

DeployReadOnlyFail: Replica deployment failed

DeployMasterDBInPorgress: Adding replica database to primary node in progress

DeployMasterDBSuccess: Successfully added replica database to primary node

DeployMasterDBFail: Failed to add replica database to primary node

DeployReadOnlyDBInPorgress: Replica restoration and database joining started

DeployReadOnlyDBSuccess: Replica restoration and database joining succeeded

DeployReadOnlyDBFail: Replica restoration and database joining failed

SyncDelay: Synchronization delayed

SyncFail: Synchronization failed

SyncExcluded: Removed from read-only group

SyncNormal: Normal
                     * 
                     */
                    std::string GetSynStatus() const;

                    /**
                     * 设置Synchronization status between the read-only replica and the primary instance.

Init: Initializing

DeployReadOnlyInPorgress: Deploying replica in progress

DeployReadOnlySuccess: Replica deployment succeeded

DeployReadOnlyFail: Replica deployment failed

DeployMasterDBInPorgress: Adding replica database to primary node in progress

DeployMasterDBSuccess: Successfully added replica database to primary node

DeployMasterDBFail: Failed to add replica database to primary node

DeployReadOnlyDBInPorgress: Replica restoration and database joining started

DeployReadOnlyDBSuccess: Replica restoration and database joining succeeded

DeployReadOnlyDBFail: Replica restoration and database joining failed

SyncDelay: Synchronization delayed

SyncFail: Synchronization failed

SyncExcluded: Removed from read-only group

SyncNormal: Normal
                     * @param _synStatus Synchronization status between the read-only replica and the primary instance.

Init: Initializing

DeployReadOnlyInPorgress: Deploying replica in progress

DeployReadOnlySuccess: Replica deployment succeeded

DeployReadOnlyFail: Replica deployment failed

DeployMasterDBInPorgress: Adding replica database to primary node in progress

DeployMasterDBSuccess: Successfully added replica database to primary node

DeployMasterDBFail: Failed to add replica database to primary node

DeployReadOnlyDBInPorgress: Replica restoration and database joining started

DeployReadOnlyDBSuccess: Replica restoration and database joining succeeded

DeployReadOnlyDBFail: Replica restoration and database joining failed

SyncDelay: Synchronization delayed

SyncFail: Synchronization failed

SyncExcluded: Removed from read-only group

SyncNormal: Normal
                     * 
                     */
                    void SetSynStatus(const std::string& _synStatus);

                    /**
                     * 判断参数 SynStatus 是否已赋值
                     * @return SynStatus 是否已赋值
                     * 
                     */
                    bool SynStatusHasBeenSet() const;

                    /**
                     * 获取Databases not synchronized between the read-only replica and the primary instance
                     * @return DatabaseDifference Databases not synchronized between the read-only replica and the primary instance
                     * 
                     */
                    std::string GetDatabaseDifference() const;

                    /**
                     * 设置Databases not synchronized between the read-only replica and the primary instance
                     * @param _databaseDifference Databases not synchronized between the read-only replica and the primary instance
                     * 
                     */
                    void SetDatabaseDifference(const std::string& _databaseDifference);

                    /**
                     * 判断参数 DatabaseDifference 是否已赋值
                     * @return DatabaseDifference 是否已赋值
                     * 
                     */
                    bool DatabaseDifferenceHasBeenSet() const;

                    /**
                     * 获取Accounts not synchronized between the read-only replica and the primary instance
                     * @return AccountDifference Accounts not synchronized between the read-only replica and the primary instance
                     * 
                     */
                    std::string GetAccountDifference() const;

                    /**
                     * 设置Accounts not synchronized between the read-only replica and the primary instance
                     * @param _accountDifference Accounts not synchronized between the read-only replica and the primary instance
                     * 
                     */
                    void SetAccountDifference(const std::string& _accountDifference);

                    /**
                     * 判断参数 AccountDifference 是否已赋值
                     * @return AccountDifference 是否已赋值
                     * 
                     */
                    bool AccountDifferenceHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Billing Start Time
                     * @return StartTime Read-Only Replica Billing Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Read-Only Replica Billing Start Time
                     * @param _startTime Read-Only Replica Billing Start Time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Billing End Time
                     * @return EndTime Read-Only Replica Billing End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Read-Only Replica Billing End Time
                     * @param _endTime Read-Only Replica Billing End Time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Isolation Time
                     * @return IsolateTime Read-Only Replica Isolation Time
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Read-Only Replica Isolation Time
                     * @param _isolateTime Read-Only Replica Isolation Time
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Read-Only Replica Region Location
                     * @return RegionId Read-Only Replica Region Location
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Read-Only Replica Region Location
                     * @param _regionId Read-Only Replica Region Location
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
                     * 获取Read-Only Replica AZ Location
                     * @return ZoneId Read-Only Replica AZ Location
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Read-Only Replica AZ Location
                     * @param _zoneId Read-Only Replica AZ Location
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * Read-Only Replica ID, in the format of: mssqlro-3l3fgqn7
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Read-Only Replica Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Read-Only Replica Unique UID
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Read-Only Replica Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Read-Only Replica Status: 1: Creating, 2: Running, 3: Delayed Removal, 4: Isolated, 5: Recycling, 6: Recycled, 7: Task Executing, 8: Offline, 9: Instance Scaling, 10: Instance Migrating, 12: Restarting
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Read-Only Replica Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Read-Only Replica Update Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Read-Only Replica Memory Size (Unit: GB)
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Read-Only Replica Storage Space Size (Unit: GB)
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Read-Only Replica cpu Core Count
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Read-Only Replica Codenames
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Host Machine Code
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Read-Only Replica Mode, 2-Standalone
                     */
                    int64_t m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Read-Only Replica Billing Mode, 1-yearly/monthly subscription, 0-pay-as-you-go
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Read-Only Replica Weight
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Read-Only Replica Latency Time (Unit: seconds)
                     */
                    std::string m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Synchronization status between the read-only replica and the primary instance.

Init: Initializing

DeployReadOnlyInPorgress: Deploying replica in progress

DeployReadOnlySuccess: Replica deployment succeeded

DeployReadOnlyFail: Replica deployment failed

DeployMasterDBInPorgress: Adding replica database to primary node in progress

DeployMasterDBSuccess: Successfully added replica database to primary node

DeployMasterDBFail: Failed to add replica database to primary node

DeployReadOnlyDBInPorgress: Replica restoration and database joining started

DeployReadOnlyDBSuccess: Replica restoration and database joining succeeded

DeployReadOnlyDBFail: Replica restoration and database joining failed

SyncDelay: Synchronization delayed

SyncFail: Synchronization failed

SyncExcluded: Removed from read-only group

SyncNormal: Normal
                     */
                    std::string m_synStatus;
                    bool m_synStatusHasBeenSet;

                    /**
                     * Databases not synchronized between the read-only replica and the primary instance
                     */
                    std::string m_databaseDifference;
                    bool m_databaseDifferenceHasBeenSet;

                    /**
                     * Accounts not synchronized between the read-only replica and the primary instance
                     */
                    std::string m_accountDifference;
                    bool m_accountDifferenceHasBeenSet;

                    /**
                     * Read-Only Replica Billing Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Read-Only Replica Billing End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Read-Only Replica Isolation Time
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Read-Only Replica Region Location
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Read-Only Replica AZ Location
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_
