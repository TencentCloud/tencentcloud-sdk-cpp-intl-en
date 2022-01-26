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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/InstanceConfs.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Query the list of instances and return information about the instances.
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
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
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取The region where the instance belongs
                     * @return Region The region where the instance belongs
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region where the instance belongs
                     * @param Region The region where the instance belongs
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Health score
                     * @return HealthScore Health score
                     */
                    int64_t GetHealthScore() const;

                    /**
                     * 设置Health score
                     * @param HealthScore Health score
                     */
                    void SetHealthScore(const int64_t& _healthScore);

                    /**
                     * 判断参数 HealthScore 是否已赋值
                     * @return HealthScore 是否已赋值
                     */
                    bool HealthScoreHasBeenSet() const;

                    /**
                     * 获取Service
                     * @return Product Service
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service
                     * @param Product Service
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Number of exceptions
                     * @return EventCount Number of exceptions
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置Number of exceptions
                     * @param EventCount Number of exceptions
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: 1: MASTER, 2: DR, 3: RO, 4: SDR
                     * @return InstanceType Instance type. Valid values: 1: MASTER, 2: DR, 3: RO, 4: SDR
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values: 1: MASTER, 2: DR, 3: RO, 4: SDR
                     * @param InstanceType Instance type. Valid values: 1: MASTER, 2: DR, 3: RO, 4: SDR
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Number of cores
                     * @return Cpu Number of cores
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of cores
                     * @param Cpu Number of cores
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory in MB
                     * @return Memory Memory in MB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory in MB
                     * @param Memory Memory in MB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Disk storage in GB
                     * @return Volume Disk storage in GB
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Disk storage in GB
                     * @param Volume Disk storage in GB
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Database version
                     * @return EngineVersion Database version
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Database version
                     * @param EngineVersion Database version
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Private network address
                     * @return Vip Private network address
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private network address
                     * @param Vip Private network address
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private network port
                     * @return Vport Private network port
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Private network port
                     * @param Vport Private network port
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Access source
                     * @return Source Access source
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Access source
                     * @param Source Access source
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Group ID
                     * @return GroupId Group ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID
                     * @param GroupId Group ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Group name
                     * @return GroupName Group name
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name
                     * @param GroupName Group name
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: 0: Delivering, 1: Running, 4: Terminating, 5: Isolated
                     * @return Status Instance status. Valid values: 0: Delivering, 1: Running, 4: Terminating, 5: Isolated
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: 0: Delivering, 1: Running, 4: Terminating, 5: Isolated
                     * @param Status Instance status. Valid values: 0: Delivering, 1: Running, 4: Terminating, 5: Isolated
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Subnet unified ID
                     * @return UniqSubnetId Subnet unified ID
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet unified ID
                     * @param UniqSubnetId Subnet unified ID
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取cdb (TencentDB instance) type
                     * @return DeployMode cdb (TencentDB instance) type
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置cdb (TencentDB instance) type
                     * @param DeployMode cdb (TencentDB instance) type
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取cdb (TencentDB instance) initialization flag. Valid values: 0: not initialized, 1: initialized
                     * @return InitFlag cdb (TencentDB instance) initialization flag. Valid values: 0: not initialized, 1: initialized
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置cdb (TencentDB instance) initialization flag. Valid values: 0: not initialized, 1: initialized
                     * @param InitFlag cdb (TencentDB instance) initialization flag. Valid values: 0: not initialized, 1: initialized
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取Task status
                     * @return TaskStatus Task status
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置Task status
                     * @param TaskStatus Task status
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Unified VPC ID
                     * @return UniqVpcId Unified VPC ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unified VPC ID
                     * @param UniqVpcId Unified VPC ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Instance inspection/overview status
                     * @return InstanceConf Instance inspection/overview status
                     */
                    InstanceConfs GetInstanceConf() const;

                    /**
                     * 设置Instance inspection/overview status
                     * @param InstanceConf Instance inspection/overview status
                     */
                    void SetInstanceConf(const InstanceConfs& _instanceConf);

                    /**
                     * 判断参数 InstanceConf 是否已赋值
                     * @return InstanceConf 是否已赋值
                     */
                    bool InstanceConfHasBeenSet() const;

                    /**
                     * 获取Resource expiration time
                     * @return DeadlineTime Resource expiration time
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Resource expiration time
                     * @param DeadlineTime Resource expiration time
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is an instance supported by DBbrain.
                     * @return IsSupported Whether it is an instance supported by DBbrain.
                     */
                    bool GetIsSupported() const;

                    /**
                     * 设置Whether it is an instance supported by DBbrain.
                     * @param IsSupported Whether it is an instance supported by DBbrain.
                     */
                    void SetIsSupported(const bool& _isSupported);

                    /**
                     * 判断参数 IsSupported 是否已赋值
                     * @return IsSupported 是否已赋值
                     */
                    bool IsSupportedHasBeenSet() const;

                    /**
                     * 获取The status of instance security audit log. ON: enabled, OFF: disabled.
                     * @return SecAuditStatus The status of instance security audit log. ON: enabled, OFF: disabled.
                     */
                    std::string GetSecAuditStatus() const;

                    /**
                     * 设置The status of instance security audit log. ON: enabled, OFF: disabled.
                     * @param SecAuditStatus The status of instance security audit log. ON: enabled, OFF: disabled.
                     */
                    void SetSecAuditStatus(const std::string& _secAuditStatus);

                    /**
                     * 判断参数 SecAuditStatus 是否已赋值
                     * @return SecAuditStatus 是否已赋值
                     */
                    bool SecAuditStatusHasBeenSet() const;

                    /**
                     * 获取The status of instance audit log. ALL_AUDIT: full audit is enabled, RULE_AUDIT: rule audit is enabled, UNBOUND: audit is disabled.
                     * @return AuditPolicyStatus The status of instance audit log. ALL_AUDIT: full audit is enabled, RULE_AUDIT: rule audit is enabled, UNBOUND: audit is disabled.
                     */
                    std::string GetAuditPolicyStatus() const;

                    /**
                     * 设置The status of instance audit log. ALL_AUDIT: full audit is enabled, RULE_AUDIT: rule audit is enabled, UNBOUND: audit is disabled.
                     * @param AuditPolicyStatus The status of instance audit log. ALL_AUDIT: full audit is enabled, RULE_AUDIT: rule audit is enabled, UNBOUND: audit is disabled.
                     */
                    void SetAuditPolicyStatus(const std::string& _auditPolicyStatus);

                    /**
                     * 判断参数 AuditPolicyStatus 是否已赋值
                     * @return AuditPolicyStatus 是否已赋值
                     */
                    bool AuditPolicyStatusHasBeenSet() const;

                    /**
                     * 获取The running status of instance audit log. normal: running, paused: suspension due to arrears
                     * @return AuditRunningStatus The running status of instance audit log. normal: running, paused: suspension due to arrears
                     */
                    std::string GetAuditRunningStatus() const;

                    /**
                     * 设置The running status of instance audit log. normal: running, paused: suspension due to arrears
                     * @param AuditRunningStatus The running status of instance audit log. normal: running, paused: suspension due to arrears
                     */
                    void SetAuditRunningStatus(const std::string& _auditRunningStatus);

                    /**
                     * 判断参数 AuditRunningStatus 是否已赋值
                     * @return AuditRunningStatus 是否已赋值
                     */
                    bool AuditRunningStatusHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * The region where the instance belongs
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Health score
                     */
                    int64_t m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * Service
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Number of exceptions
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Instance type. Valid values: 1: MASTER, 2: DR, 3: RO, 4: SDR
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory in MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk storage in GB
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Database version
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Private network address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private network port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Access source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Instance status. Valid values: 0: Delivering, 1: Running, 4: Terminating, 5: Isolated
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Subnet unified ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * cdb (TencentDB instance) type
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * cdb (TencentDB instance) initialization flag. Valid values: 0: not initialized, 1: initialized
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * Task status
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Unified VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Instance inspection/overview status
                     */
                    InstanceConfs m_instanceConf;
                    bool m_instanceConfHasBeenSet;

                    /**
                     * Resource expiration time
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Whether it is an instance supported by DBbrain.
                     */
                    bool m_isSupported;
                    bool m_isSupportedHasBeenSet;

                    /**
                     * The status of instance security audit log. ON: enabled, OFF: disabled.
                     */
                    std::string m_secAuditStatus;
                    bool m_secAuditStatusHasBeenSet;

                    /**
                     * The status of instance audit log. ALL_AUDIT: full audit is enabled, RULE_AUDIT: rule audit is enabled, UNBOUND: audit is disabled.
                     */
                    std::string m_auditPolicyStatus;
                    bool m_auditPolicyStatusHasBeenSet;

                    /**
                     * The running status of instance audit log. normal: running, paused: suspension due to arrears
                     */
                    std::string m_auditRunningStatus;
                    bool m_auditRunningStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCEINFO_H_
