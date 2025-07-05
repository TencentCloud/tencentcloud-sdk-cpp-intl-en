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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDEDICATEDCLUSTERDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDEDICATEDCLUSTERDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ResourceTag.h>
#include <tencentcloud/dcdb/v20180411/model/DBParamValue.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CreateDedicatedClusterDCDBInstance request structure.
                */
                class CreateDedicatedClusterDCDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDedicatedClusterDCDBInstanceRequest();
                    ~CreateDedicatedClusterDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of created instances
                     * @return GoodsNum Number of created instances
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of created instances
                     * @param _goodsNum Number of created instances
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Shard count
                     * @return ShardNum Shard count
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置Shard count
                     * @param _shardNum Shard count
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取Shard memory size in GB
                     * @return ShardMemory Shard memory size in GB
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置Shard memory size in GB
                     * @param _shardMemory Shard memory size in GB
                     * 
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     * 
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取Shard disk size in GB
                     * @return ShardStorage Shard disk size in GB
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置Shard disk size in GB
                     * @param _shardStorage Shard disk size in GB
                     * 
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     * 
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取UUID of the dedicated cluster
                     * @return ClusterId UUID of the dedicated cluster
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置UUID of the dedicated cluster
                     * @param _clusterId UUID of the dedicated cluster
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取(Disused) AZ
                     * @return Zone (Disused) AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置(Disused) AZ
                     * @param _zone (Disused) AZ
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取(Disused) Number of CPU cores
                     * @return Cpu (Disused) Number of CPU cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置(Disused) Number of CPU cores
                     * @param _cpu (Disused) Number of CPU cores
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
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
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
                     * 获取(Disused) Shard model
                     * @return ShardMachine (Disused) Shard model
                     * 
                     */
                    std::string GetShardMachine() const;

                    /**
                     * 设置(Disused) Shard model
                     * @param _shardMachine (Disused) Shard model
                     * 
                     */
                    void SetShardMachine(const std::string& _shardMachine);

                    /**
                     * 判断参数 ShardMachine 是否已赋值
                     * @return ShardMachine 是否已赋值
                     * 
                     */
                    bool ShardMachineHasBeenSet() const;

                    /**
                     * 获取Number of shard nodes
                     * @return ShardNodeNum Number of shard nodes
                     * 
                     */
                    int64_t GetShardNodeNum() const;

                    /**
                     * 设置Number of shard nodes
                     * @param _shardNodeNum Number of shard nodes
                     * 
                     */
                    void SetShardNodeNum(const int64_t& _shardNodeNum);

                    /**
                     * 判断参数 ShardNodeNum 是否已赋值
                     * @return ShardNodeNum 是否已赋值
                     * 
                     */
                    bool ShardNodeNumHasBeenSet() const;

                    /**
                     * 获取(Disused) Number of node CPU cores. Value range: 1-100.
                     * @return ShardNodeCpu (Disused) Number of node CPU cores. Value range: 1-100.
                     * 
                     */
                    int64_t GetShardNodeCpu() const;

                    /**
                     * 设置(Disused) Number of node CPU cores. Value range: 1-100.
                     * @param _shardNodeCpu (Disused) Number of node CPU cores. Value range: 1-100.
                     * 
                     */
                    void SetShardNodeCpu(const int64_t& _shardNodeCpu);

                    /**
                     * 判断参数 ShardNodeCpu 是否已赋值
                     * @return ShardNodeCpu 是否已赋值
                     * 
                     */
                    bool ShardNodeCpuHasBeenSet() const;

                    /**
                     * 获取(Disused) Node memory size in GB
                     * @return ShardNodeMemory (Disused) Node memory size in GB
                     * 
                     */
                    int64_t GetShardNodeMemory() const;

                    /**
                     * 设置(Disused) Node memory size in GB
                     * @param _shardNodeMemory (Disused) Node memory size in GB
                     * 
                     */
                    void SetShardNodeMemory(const int64_t& _shardNodeMemory);

                    /**
                     * 判断参数 ShardNodeMemory 是否已赋值
                     * @return ShardNodeMemory 是否已赋值
                     * 
                     */
                    bool ShardNodeMemoryHasBeenSet() const;

                    /**
                     * 获取(Disused) Node disk size in GB
                     * @return ShardNodeStorage (Disused) Node disk size in GB
                     * 
                     */
                    int64_t GetShardNodeStorage() const;

                    /**
                     * 设置(Disused) Node disk size in GB
                     * @param _shardNodeStorage (Disused) Node disk size in GB
                     * 
                     */
                    void SetShardNodeStorage(const int64_t& _shardNodeStorage);

                    /**
                     * 判断参数 ShardNodeStorage 是否已赋值
                     * @return ShardNodeStorage 是否已赋值
                     * 
                     */
                    bool ShardNodeStorageHasBeenSet() const;

                    /**
                     * 获取Database version
                     * @return DbVersionId Database version
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置Database version
                     * @param _dbVersionId Database version
                     * 
                     */
                    void SetDbVersionId(const std::string& _dbVersionId);

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     * 
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取Security group ID
                     * @return SecurityGroupId Security group ID
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID
                     * @param _securityGroupId Security group ID
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取List of security group IDs
                     * @return SecurityGroupIds List of security group IDs
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置List of security group IDs
                     * @param _securityGroupIds List of security group IDs
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取DCN source instance ID
                     * @return DcnInstanceId DCN source instance ID
                     * 
                     */
                    std::string GetDcnInstanceId() const;

                    /**
                     * 设置DCN source instance ID
                     * @param _dcnInstanceId DCN source instance ID
                     * 
                     */
                    void SetDcnInstanceId(const std::string& _dcnInstanceId);

                    /**
                     * 判断参数 DcnInstanceId 是否已赋值
                     * @return DcnInstanceId 是否已赋值
                     * 
                     */
                    bool DcnInstanceIdHasBeenSet() const;

                    /**
                     * 获取Region of DCN source instance
                     * @return DcnRegion Region of DCN source instance
                     * 
                     */
                    std::string GetDcnRegion() const;

                    /**
                     * 设置Region of DCN source instance
                     * @param _dcnRegion Region of DCN source instance
                     * 
                     */
                    void SetDcnRegion(const std::string& _dcnRegion);

                    /**
                     * 判断参数 DcnRegion 是否已赋值
                     * @return DcnRegion 是否已赋值
                     * 
                     */
                    bool DcnRegionHasBeenSet() const;

                    /**
                     * 获取Custom instance name
                     * @return InstanceName Custom instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Custom instance name
                     * @param _instanceName Custom instance name
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
                     * 获取Tag
                     * @return ResourceTags Tag
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Tag
                     * @param _resourceTags Tag
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Whether IPv6 flag is supported. Valid values: `1` (yes), `0` (no).
                     * @return Ipv6Flag Whether IPv6 flag is supported. Valid values: `1` (yes), `0` (no).
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置Whether IPv6 flag is supported. Valid values: `1` (yes), `0` (no).
                     * @param _ipv6Flag Whether IPv6 flag is supported. Valid values: `1` (yes), `0` (no).
                     * 
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取(Disused) Pid, which can be queried by the `DescribeSpecInfo` API.
                     * @return Pid (Disused) Pid, which can be queried by the `DescribeSpecInfo` API.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置(Disused) Pid, which can be queried by the `DescribeSpecInfo` API.
                     * @param _pid (Disused) Pid, which can be queried by the `DescribeSpecInfo` API.
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取List of parameters. Valid values: `character_set_server` (character set; required), `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive), `innodb_page_size` (InnoDB data page; default size: 16 KB), `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync. Default value: `2`).
                     * @return InitParams List of parameters. Valid values: `character_set_server` (character set; required), `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive), `innodb_page_size` (InnoDB data page; default size: 16 KB), `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync. Default value: `2`).
                     * 
                     */
                    std::vector<DBParamValue> GetInitParams() const;

                    /**
                     * 设置List of parameters. Valid values: `character_set_server` (character set; required), `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive), `innodb_page_size` (InnoDB data page; default size: 16 KB), `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync. Default value: `2`).
                     * @param _initParams List of parameters. Valid values: `character_set_server` (character set; required), `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive), `innodb_page_size` (InnoDB data page; default size: 16 KB), `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync. Default value: `2`).
                     * 
                     */
                    void SetInitParams(const std::vector<DBParamValue>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取Specified UUID for the source node. If left empty, it will be assigned by the system randomly.
                     * @return MasterHostId Specified UUID for the source node. If left empty, it will be assigned by the system randomly.
                     * 
                     */
                    std::string GetMasterHostId() const;

                    /**
                     * 设置Specified UUID for the source node. If left empty, it will be assigned by the system randomly.
                     * @param _masterHostId Specified UUID for the source node. If left empty, it will be assigned by the system randomly.
                     * 
                     */
                    void SetMasterHostId(const std::string& _masterHostId);

                    /**
                     * 判断参数 MasterHostId 是否已赋值
                     * @return MasterHostId 是否已赋值
                     * 
                     */
                    bool MasterHostIdHasBeenSet() const;

                    /**
                     * 获取Specified UUID for the replica node. If left empty, it will be assigned by the system randomly.
                     * @return SlaveHostIds Specified UUID for the replica node. If left empty, it will be assigned by the system randomly.
                     * 
                     */
                    std::vector<std::string> GetSlaveHostIds() const;

                    /**
                     * 设置Specified UUID for the replica node. If left empty, it will be assigned by the system randomly.
                     * @param _slaveHostIds Specified UUID for the replica node. If left empty, it will be assigned by the system randomly.
                     * 
                     */
                    void SetSlaveHostIds(const std::vector<std::string>& _slaveHostIds);

                    /**
                     * 判断参数 SlaveHostIds 是否已赋值
                     * @return SlaveHostIds 是否已赋值
                     * 
                     */
                    bool SlaveHostIdsHasBeenSet() const;

                    /**
                     * 获取ID of the source instance to be rolled back
                     * @return RollbackInstanceId ID of the source instance to be rolled back
                     * 
                     */
                    std::string GetRollbackInstanceId() const;

                    /**
                     * 设置ID of the source instance to be rolled back
                     * @param _rollbackInstanceId ID of the source instance to be rolled back
                     * 
                     */
                    void SetRollbackInstanceId(const std::string& _rollbackInstanceId);

                    /**
                     * 判断参数 RollbackInstanceId 是否已赋值
                     * @return RollbackInstanceId 是否已赋值
                     * 
                     */
                    bool RollbackInstanceIdHasBeenSet() const;

                    /**
                     * 获取Rollback time
                     * @return RollbackTime Rollback time
                     * 
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置Rollback time
                     * @param _rollbackTime Rollback time
                     * 
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     * 
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return DcnSyncMode 
                     * 
                     */
                    int64_t GetDcnSyncMode() const;

                    /**
                     * 设置
                     * @param _dcnSyncMode 
                     * 
                     */
                    void SetDcnSyncMode(const int64_t& _dcnSyncMode);

                    /**
                     * 判断参数 DcnSyncMode 是否已赋值
                     * @return DcnSyncMode 是否已赋值
                     * 
                     */
                    bool DcnSyncModeHasBeenSet() const;

                private:

                    /**
                     * Number of created instances
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Shard count
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * Shard memory size in GB
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * Shard disk size in GB
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * UUID of the dedicated cluster
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * (Disused) AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * (Disused) Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * (Disused) Shard model
                     */
                    std::string m_shardMachine;
                    bool m_shardMachineHasBeenSet;

                    /**
                     * Number of shard nodes
                     */
                    int64_t m_shardNodeNum;
                    bool m_shardNodeNumHasBeenSet;

                    /**
                     * (Disused) Number of node CPU cores. Value range: 1-100.
                     */
                    int64_t m_shardNodeCpu;
                    bool m_shardNodeCpuHasBeenSet;

                    /**
                     * (Disused) Node memory size in GB
                     */
                    int64_t m_shardNodeMemory;
                    bool m_shardNodeMemoryHasBeenSet;

                    /**
                     * (Disused) Node disk size in GB
                     */
                    int64_t m_shardNodeStorage;
                    bool m_shardNodeStorageHasBeenSet;

                    /**
                     * Database version
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * List of security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * DCN source instance ID
                     */
                    std::string m_dcnInstanceId;
                    bool m_dcnInstanceIdHasBeenSet;

                    /**
                     * Region of DCN source instance
                     */
                    std::string m_dcnRegion;
                    bool m_dcnRegionHasBeenSet;

                    /**
                     * Custom instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Whether IPv6 flag is supported. Valid values: `1` (yes), `0` (no).
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * (Disused) Pid, which can be queried by the `DescribeSpecInfo` API.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * List of parameters. Valid values: `character_set_server` (character set; required), `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive), `innodb_page_size` (InnoDB data page; default size: 16 KB), `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync. Default value: `2`).
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * Specified UUID for the source node. If left empty, it will be assigned by the system randomly.
                     */
                    std::string m_masterHostId;
                    bool m_masterHostIdHasBeenSet;

                    /**
                     * Specified UUID for the replica node. If left empty, it will be assigned by the system randomly.
                     */
                    std::vector<std::string> m_slaveHostIds;
                    bool m_slaveHostIdsHasBeenSet;

                    /**
                     * ID of the source instance to be rolled back
                     */
                    std::string m_rollbackInstanceId;
                    bool m_rollbackInstanceIdHasBeenSet;

                    /**
                     * Rollback time
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_dcnSyncMode;
                    bool m_dcnSyncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDEDICATEDCLUSTERDCDBINSTANCEREQUEST_H_
