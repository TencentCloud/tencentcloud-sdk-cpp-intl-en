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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ShardInfo.h>
#include <tencentcloud/mongodb/v20190725/model/DBInstanceInfo.h>
#include <tencentcloud/mongodb/v20190725/model/TagInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Billing type. Valid value: 0 (pay-as-you-go)
                     * @return PayMode Billing type. Valid value: 0 (pay-as-you-go)
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Billing type. Valid value: 0 (pay-as-you-go)
                     * @param _payMode Billing type. Valid value: 0 (pay-as-you-go)
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Cluster type. Valid values: `0` (replica set instance), `1` (sharded instance).
                     * @return ClusterType Cluster type. Valid values: `0` (replica set instance), `1` (sharded instance).
                     * 
                     */
                    uint64_t GetClusterType() const;

                    /**
                     * 设置Cluster type. Valid values: `0` (replica set instance), `1` (sharded instance).
                     * @param _clusterType Cluster type. Valid values: `0` (replica set instance), `1` (sharded instance).
                     * 
                     */
                    void SetClusterType(const uint64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Region information
                     * @return Region Region information
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information
                     * @param _region Region information
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取AZ information
                     * @return Zone AZ information
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information
                     * @param _zone AZ information
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
                     * 获取Network type. Valid values: 0 (basic network), 1 (VPC)
                     * @return NetType Network type. Valid values: 0 (basic network), 1 (VPC)
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置Network type. Valid values: 0 (basic network), 1 (VPC)
                     * @param _netType Network type. Valid values: 0 (basic network), 1 (VPC)
                     * 
                     */
                    void SetNetType(const uint64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

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
                     * 获取Subnet ID of VPC
                     * @return SubnetId Subnet ID of VPC
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of VPC
                     * @param _subnetId Subnet ID of VPC
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
                     * 获取Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-2` (expired).
                     * @return Status Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-2` (expired).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-2` (expired).
                     * @param _status Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-2` (expired).
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
                     * 获取Instance IP
                     * @return Vip Instance IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance IP
                     * @param _vip Instance IP
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
                     * 获取Port number
                     * @return Vport Port number
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置Port number
                     * @param _vport Port number
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _createTime Instance creation time
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
                     * 获取Instance expiration time
                     * @return DeadLine Instance expiration time
                     * 
                     */
                    std::string GetDeadLine() const;

                    /**
                     * 设置Instance expiration time
                     * @param _deadLine Instance expiration time
                     * 
                     */
                    void SetDeadLine(const std::string& _deadLine);

                    /**
                     * 判断参数 DeadLine 是否已赋值
                     * @return DeadLine 是否已赋值
                     * 
                     */
                    bool DeadLineHasBeenSet() const;

                    /**
                     * 获取Instance version information
                     * @return MongoVersion Instance version information
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Instance version information
                     * @param _mongoVersion Instance version information
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Instance memory size in MB
                     * @return Memory Instance memory size in MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in MB
                     * @param _memory Instance memory size in MB
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in MB
                     * @return Volume Instance disk size in MB
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in MB
                     * @param _volume Instance disk size in MB
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of an instance
                     * @return CpuNum Number of CPU cores of an instance
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置Number of CPU cores of an instance
                     * @param _cpuNum Number of CPU cores of an instance
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取Instance machine type
                     * @return MachineType Instance machine type
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Instance machine type
                     * @param _machineType Instance machine type
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Number of secondary nodes of an instance
                     * @return SecondaryNum Number of secondary nodes of an instance
                     * 
                     */
                    uint64_t GetSecondaryNum() const;

                    /**
                     * 设置Number of secondary nodes of an instance
                     * @param _secondaryNum Number of secondary nodes of an instance
                     * 
                     */
                    void SetSecondaryNum(const uint64_t& _secondaryNum);

                    /**
                     * 判断参数 SecondaryNum 是否已赋值
                     * @return SecondaryNum 是否已赋值
                     * 
                     */
                    bool SecondaryNumHasBeenSet() const;

                    /**
                     * 获取Number of instance shards
                     * @return ReplicationSetNum Number of instance shards
                     * 
                     */
                    uint64_t GetReplicationSetNum() const;

                    /**
                     * 设置Number of instance shards
                     * @param _replicationSetNum Number of instance shards
                     * 
                     */
                    void SetReplicationSetNum(const uint64_t& _replicationSetNum);

                    /**
                     * 判断参数 ReplicationSetNum 是否已赋值
                     * @return ReplicationSetNum 是否已赋值
                     * 
                     */
                    bool ReplicationSetNumHasBeenSet() const;

                    /**
                     * 获取Instance auto-renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal), `2` (no renewal upon expiration)
                     * @return AutoRenewFlag Instance auto-renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal), `2` (no renewal upon expiration)
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Instance auto-renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal), `2` (no renewal upon expiration)
                     * @param _autoRenewFlag Instance auto-renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal), `2` (no renewal upon expiration)
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Used capacity in MB
                     * @return UsedVolume Used capacity in MB
                     * 
                     */
                    uint64_t GetUsedVolume() const;

                    /**
                     * 设置Used capacity in MB
                     * @param _usedVolume Used capacity in MB
                     * 
                     */
                    void SetUsedVolume(const uint64_t& _usedVolume);

                    /**
                     * 判断参数 UsedVolume 是否已赋值
                     * @return UsedVolume 是否已赋值
                     * 
                     */
                    bool UsedVolumeHasBeenSet() const;

                    /**
                     * 获取Start time of the maintenance time
                     * @return MaintenanceStart Start time of the maintenance time
                     * 
                     */
                    std::string GetMaintenanceStart() const;

                    /**
                     * 设置Start time of the maintenance time
                     * @param _maintenanceStart Start time of the maintenance time
                     * 
                     */
                    void SetMaintenanceStart(const std::string& _maintenanceStart);

                    /**
                     * 判断参数 MaintenanceStart 是否已赋值
                     * @return MaintenanceStart 是否已赋值
                     * 
                     */
                    bool MaintenanceStartHasBeenSet() const;

                    /**
                     * 获取End time of the maintenance time
                     * @return MaintenanceEnd End time of the maintenance time
                     * 
                     */
                    std::string GetMaintenanceEnd() const;

                    /**
                     * 设置End time of the maintenance time
                     * @param _maintenanceEnd End time of the maintenance time
                     * 
                     */
                    void SetMaintenanceEnd(const std::string& _maintenanceEnd);

                    /**
                     * 判断参数 MaintenanceEnd 是否已赋值
                     * @return MaintenanceEnd 是否已赋值
                     * 
                     */
                    bool MaintenanceEndHasBeenSet() const;

                    /**
                     * 获取Shard information
                     * @return ReplicaSets Shard information
                     * 
                     */
                    std::vector<ShardInfo> GetReplicaSets() const;

                    /**
                     * 设置Shard information
                     * @param _replicaSets Shard information
                     * 
                     */
                    void SetReplicaSets(const std::vector<ShardInfo>& _replicaSets);

                    /**
                     * 判断参数 ReplicaSets 是否已赋值
                     * @return ReplicaSets 是否已赋值
                     * 
                     */
                    bool ReplicaSetsHasBeenSet() const;

                    /**
                     * 获取Information of read-only instances
                     * @return ReadonlyInstances Information of read-only instances
                     * 
                     */
                    std::vector<DBInstanceInfo> GetReadonlyInstances() const;

                    /**
                     * 设置Information of read-only instances
                     * @param _readonlyInstances Information of read-only instances
                     * 
                     */
                    void SetReadonlyInstances(const std::vector<DBInstanceInfo>& _readonlyInstances);

                    /**
                     * 判断参数 ReadonlyInstances 是否已赋值
                     * @return ReadonlyInstances 是否已赋值
                     * 
                     */
                    bool ReadonlyInstancesHasBeenSet() const;

                    /**
                     * 获取Information of disaster recovery instances
                     * @return StandbyInstances Information of disaster recovery instances
                     * 
                     */
                    std::vector<DBInstanceInfo> GetStandbyInstances() const;

                    /**
                     * 设置Information of disaster recovery instances
                     * @param _standbyInstances Information of disaster recovery instances
                     * 
                     */
                    void SetStandbyInstances(const std::vector<DBInstanceInfo>& _standbyInstances);

                    /**
                     * 判断参数 StandbyInstances 是否已赋值
                     * @return StandbyInstances 是否已赋值
                     * 
                     */
                    bool StandbyInstancesHasBeenSet() const;

                    /**
                     * 获取Information of temp instances
                     * @return CloneInstances Information of temp instances
                     * 
                     */
                    std::vector<DBInstanceInfo> GetCloneInstances() const;

                    /**
                     * 设置Information of temp instances
                     * @param _cloneInstances Information of temp instances
                     * 
                     */
                    void SetCloneInstances(const std::vector<DBInstanceInfo>& _cloneInstances);

                    /**
                     * 判断参数 CloneInstances 是否已赋值
                     * @return CloneInstances 是否已赋值
                     * 
                     */
                    bool CloneInstancesHasBeenSet() const;

                    /**
                     * 获取Information of associated instances. For a regular instance, this field represents the information of its temp instance; for a temp instance, this field represents the information of its regular instance; and for a read-only instance or a disaster recovery instance, this field represents the information of its primary instance.
                     * @return RelatedInstance Information of associated instances. For a regular instance, this field represents the information of its temp instance; for a temp instance, this field represents the information of its regular instance; and for a read-only instance or a disaster recovery instance, this field represents the information of its primary instance.
                     * 
                     */
                    DBInstanceInfo GetRelatedInstance() const;

                    /**
                     * 设置Information of associated instances. For a regular instance, this field represents the information of its temp instance; for a temp instance, this field represents the information of its regular instance; and for a read-only instance or a disaster recovery instance, this field represents the information of its primary instance.
                     * @param _relatedInstance Information of associated instances. For a regular instance, this field represents the information of its temp instance; for a temp instance, this field represents the information of its regular instance; and for a read-only instance or a disaster recovery instance, this field represents the information of its primary instance.
                     * 
                     */
                    void SetRelatedInstance(const DBInstanceInfo& _relatedInstance);

                    /**
                     * 判断参数 RelatedInstance 是否已赋值
                     * @return RelatedInstance 是否已赋值
                     * 
                     */
                    bool RelatedInstanceHasBeenSet() const;

                    /**
                     * 获取Instance tag information set
                     * @return Tags Instance tag information set
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Instance tag information set
                     * @param _tags Instance tag information set
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
                     * 获取Instance version
                     * @return InstanceVer Instance version
                     * 
                     */
                    uint64_t GetInstanceVer() const;

                    /**
                     * 设置Instance version
                     * @param _instanceVer Instance version
                     * 
                     */
                    void SetInstanceVer(const uint64_t& _instanceVer);

                    /**
                     * 判断参数 InstanceVer 是否已赋值
                     * @return InstanceVer 是否已赋值
                     * 
                     */
                    bool InstanceVerHasBeenSet() const;

                    /**
                     * 获取Instance version
                     * @return ClusterVer Instance version
                     * 
                     */
                    uint64_t GetClusterVer() const;

                    /**
                     * 设置Instance version
                     * @param _clusterVer Instance version
                     * 
                     */
                    void SetClusterVer(const uint64_t& _clusterVer);

                    /**
                     * 判断参数 ClusterVer 是否已赋值
                     * @return ClusterVer 是否已赋值
                     * 
                     */
                    bool ClusterVerHasBeenSet() const;

                    /**
                     * 获取Protocol information. Valid values: `1` (mongodb), `2` (dynamodb).
                     * @return Protocol Protocol information. Valid values: `1` (mongodb), `2` (dynamodb).
                     * 
                     */
                    uint64_t GetProtocol() const;

                    /**
                     * 设置Protocol information. Valid values: `1` (mongodb), `2` (dynamodb).
                     * @param _protocol Protocol information. Valid values: `1` (mongodb), `2` (dynamodb).
                     * 
                     */
                    void SetProtocol(const uint64_t& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: 1 (promoted instance), 2 (temp instance), 3 (read-only instance), 4 (disaster recovery instance)
                     * @return InstanceType Instance type. Valid values: 1 (promoted instance), 2 (temp instance), 3 (read-only instance), 4 (disaster recovery instance)
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values: 1 (promoted instance), 2 (temp instance), 3 (read-only instance), 4 (disaster recovery instance)
                     * @param _instanceType Instance type. Valid values: 1 (promoted instance), 2 (temp instance), 3 (read-only instance), 4 (disaster recovery instance)
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance status description
                     * @return InstanceStatusDesc Instance status description
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置Instance status description
                     * @param _instanceStatusDesc Instance status description
                     * 
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * 
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取Physical instance ID. For an instance that has been rolled back and replaced, its InstanceId and RealInstanceId are different. The physical instance ID is needed in such scenarios as getting monitoring data from Barad
                     * @return RealInstanceId Physical instance ID. For an instance that has been rolled back and replaced, its InstanceId and RealInstanceId are different. The physical instance ID is needed in such scenarios as getting monitoring data from Barad
                     * 
                     */
                    std::string GetRealInstanceId() const;

                    /**
                     * 设置Physical instance ID. For an instance that has been rolled back and replaced, its InstanceId and RealInstanceId are different. The physical instance ID is needed in such scenarios as getting monitoring data from Barad
                     * @param _realInstanceId Physical instance ID. For an instance that has been rolled back and replaced, its InstanceId and RealInstanceId are different. The physical instance ID is needed in such scenarios as getting monitoring data from Barad
                     * 
                     */
                    void SetRealInstanceId(const std::string& _realInstanceId);

                    /**
                     * 判断参数 RealInstanceId 是否已赋值
                     * @return RealInstanceId 是否已赋值
                     * 
                     */
                    bool RealInstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MongosNodeNum Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mongosNodeNum Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMongosNodeNum(const uint64_t& _mongosNodeNum);

                    /**
                     * 判断参数 MongosNodeNum 是否已赋值
                     * @return MongosNodeNum 是否已赋值
                     * 
                     */
                    bool MongosNodeNumHasBeenSet() const;

                    /**
                     * 获取mongos node memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MongosMemory mongos node memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置mongos node memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mongosMemory mongos node memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMongosMemory(const uint64_t& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     * 
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MongosCpuNum Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMongosCpuNum() const;

                    /**
                     * 设置Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mongosCpuNum Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMongosCpuNum(const uint64_t& _mongosCpuNum);

                    /**
                     * 判断参数 MongosCpuNum 是否已赋值
                     * @return MongosCpuNum 是否已赋值
                     * 
                     */
                    bool MongosCpuNumHasBeenSet() const;

                    /**
                     * 获取Number of ConfigServer nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigServerNodeNum Number of ConfigServer nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConfigServerNodeNum() const;

                    /**
                     * 设置Number of ConfigServer nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configServerNodeNum Number of ConfigServer nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigServerNodeNum(const uint64_t& _configServerNodeNum);

                    /**
                     * 判断参数 ConfigServerNodeNum 是否已赋值
                     * @return ConfigServerNodeNum 是否已赋值
                     * 
                     */
                    bool ConfigServerNodeNumHasBeenSet() const;

                    /**
                     * 获取Memory of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigServerMemory Memory of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConfigServerMemory() const;

                    /**
                     * 设置Memory of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configServerMemory Memory of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigServerMemory(const uint64_t& _configServerMemory);

                    /**
                     * 判断参数 ConfigServerMemory 是否已赋值
                     * @return ConfigServerMemory 是否已赋值
                     * 
                     */
                    bool ConfigServerMemoryHasBeenSet() const;

                    /**
                     * 获取Disk size of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigServerVolume Disk size of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConfigServerVolume() const;

                    /**
                     * 设置Disk size of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configServerVolume Disk size of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigServerVolume(const uint64_t& _configServerVolume);

                    /**
                     * 判断参数 ConfigServerVolume 是否已赋值
                     * @return ConfigServerVolume 是否已赋值
                     * 
                     */
                    bool ConfigServerVolumeHasBeenSet() const;

                    /**
                     * 获取CPU number of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigServerCpuNum CPU number of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConfigServerCpuNum() const;

                    /**
                     * 设置CPU number of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configServerCpuNum CPU number of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigServerCpuNum(const uint64_t& _configServerCpuNum);

                    /**
                     * 判断参数 ConfigServerCpuNum 是否已赋值
                     * @return ConfigServerCpuNum 是否已赋值
                     * 
                     */
                    bool ConfigServerCpuNumHasBeenSet() const;

                    /**
                     * 获取Number of read-only nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadonlyNodeNum Number of read-only nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置Number of read-only nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _readonlyNodeNum Number of read-only nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

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
                     * Billing type. Valid value: 0 (pay-as-you-go)
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cluster type. Valid values: `0` (replica set instance), `1` (sharded instance).
                     */
                    uint64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Region information
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ information
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Network type. Valid values: 0 (basic network), 1 (VPC)
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of VPC
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-2` (expired).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port number
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    std::string m_deadLine;
                    bool m_deadLineHasBeenSet;

                    /**
                     * Instance version information
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Instance memory size in MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in MB
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Number of CPU cores of an instance
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * Instance machine type
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Number of secondary nodes of an instance
                     */
                    uint64_t m_secondaryNum;
                    bool m_secondaryNumHasBeenSet;

                    /**
                     * Number of instance shards
                     */
                    uint64_t m_replicationSetNum;
                    bool m_replicationSetNumHasBeenSet;

                    /**
                     * Instance auto-renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal), `2` (no renewal upon expiration)
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Used capacity in MB
                     */
                    uint64_t m_usedVolume;
                    bool m_usedVolumeHasBeenSet;

                    /**
                     * Start time of the maintenance time
                     */
                    std::string m_maintenanceStart;
                    bool m_maintenanceStartHasBeenSet;

                    /**
                     * End time of the maintenance time
                     */
                    std::string m_maintenanceEnd;
                    bool m_maintenanceEndHasBeenSet;

                    /**
                     * Shard information
                     */
                    std::vector<ShardInfo> m_replicaSets;
                    bool m_replicaSetsHasBeenSet;

                    /**
                     * Information of read-only instances
                     */
                    std::vector<DBInstanceInfo> m_readonlyInstances;
                    bool m_readonlyInstancesHasBeenSet;

                    /**
                     * Information of disaster recovery instances
                     */
                    std::vector<DBInstanceInfo> m_standbyInstances;
                    bool m_standbyInstancesHasBeenSet;

                    /**
                     * Information of temp instances
                     */
                    std::vector<DBInstanceInfo> m_cloneInstances;
                    bool m_cloneInstancesHasBeenSet;

                    /**
                     * Information of associated instances. For a regular instance, this field represents the information of its temp instance; for a temp instance, this field represents the information of its regular instance; and for a read-only instance or a disaster recovery instance, this field represents the information of its primary instance.
                     */
                    DBInstanceInfo m_relatedInstance;
                    bool m_relatedInstanceHasBeenSet;

                    /**
                     * Instance tag information set
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Instance version
                     */
                    uint64_t m_instanceVer;
                    bool m_instanceVerHasBeenSet;

                    /**
                     * Instance version
                     */
                    uint64_t m_clusterVer;
                    bool m_clusterVerHasBeenSet;

                    /**
                     * Protocol information. Valid values: `1` (mongodb), `2` (dynamodb).
                     */
                    uint64_t m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Instance type. Valid values: 1 (promoted instance), 2 (temp instance), 3 (read-only instance), 4 (disaster recovery instance)
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance status description
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * Physical instance ID. For an instance that has been rolled back and replaced, its InstanceId and RealInstanceId are different. The physical instance ID is needed in such scenarios as getting monitoring data from Barad
                     */
                    std::string m_realInstanceId;
                    bool m_realInstanceIdHasBeenSet;

                    /**
                     * Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * mongos node memory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * Number of mongos nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_mongosCpuNum;
                    bool m_mongosCpuNumHasBeenSet;

                    /**
                     * Number of ConfigServer nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configServerNodeNum;
                    bool m_configServerNodeNumHasBeenSet;

                    /**
                     * Memory of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configServerMemory;
                    bool m_configServerMemoryHasBeenSet;

                    /**
                     * Disk size of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configServerVolume;
                    bool m_configServerVolumeHasBeenSet;

                    /**
                     * CPU number of ConfigServer node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configServerCpuNum;
                    bool m_configServerCpuNumHasBeenSet;

                    /**
                     * Number of read-only nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEDETAIL_H_
