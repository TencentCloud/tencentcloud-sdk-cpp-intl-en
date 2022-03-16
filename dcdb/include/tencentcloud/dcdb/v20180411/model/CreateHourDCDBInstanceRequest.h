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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEHOURDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEHOURDCDBINSTANCEREQUEST_H_

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
                * CreateHourDCDBInstance request structure.
                */
                class CreateHourDCDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateHourDCDBInstanceRequest();
                    ~CreateHourDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shard memory in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     * @return ShardMemory Shard memory in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置Shard memory in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     * @param ShardMemory Shard memory in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取Shard capacity in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     * @return ShardStorage Shard capacity in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置Shard capacity in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     * @param ShardStorage Shard capacity in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取The number of nodes per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     * @return ShardNodeCount The number of nodes per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t GetShardNodeCount() const;

                    /**
                     * 设置The number of nodes per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     * @param ShardNodeCount The number of nodes per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    void SetShardNodeCount(const int64_t& _shardNodeCount);

                    /**
                     * 判断参数 ShardNodeCount 是否已赋值
                     * @return ShardNodeCount 是否已赋值
                     */
                    bool ShardNodeCountHasBeenSet() const;

                    /**
                     * 获取The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     * @return ShardCount The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     * @param ShardCount The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取The number of instances to be purchased
                     * @return Count The number of instances to be purchased
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of instances to be purchased
                     * @param Count The number of instances to be purchased
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     * @return ProjectId Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     * @param ProjectId Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     * @return VpcId VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     * @param VpcId VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID, which is required when `VpcId` is specified
                     * @return SubnetId VPC subnet ID, which is required when `VpcId` is specified
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID, which is required when `VpcId` is specified
                     * @param SubnetId VPC subnet ID, which is required when `VpcId` is specified
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The number of CPU cores per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     * @return ShardCpu The number of CPU cores per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t GetShardCpu() const;

                    /**
                     * 设置The number of CPU cores per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     * @param ShardCpu The number of CPU cores per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    void SetShardCpu(const int64_t& _shardCpu);

                    /**
                     * 判断参数 ShardCpu 是否已赋值
                     * @return ShardCpu 是否已赋值
                     */
                    bool ShardCpuHasBeenSet() const;

                    /**
                     * 获取Database engine version. Valid values:
10.0.10: MariaDB 10.0.10;
10.1.9: MariaDB 10.1.9;
5.7.17: Percona 5.7.17.
If this parameter is left empty, `10.1.9` will be used.
                     * @return DbVersionId Database engine version. Valid values:
10.0.10: MariaDB 10.0.10;
10.1.9: MariaDB 10.1.9;
5.7.17: Percona 5.7.17.
If this parameter is left empty, `10.1.9` will be used.
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置Database engine version. Valid values:
10.0.10: MariaDB 10.0.10;
10.1.9: MariaDB 10.1.9;
5.7.17: Percona 5.7.17.
If this parameter is left empty, `10.1.9` will be used.
                     * @param DbVersionId Database engine version. Valid values:
10.0.10: MariaDB 10.0.10;
10.1.9: MariaDB 10.1.9;
5.7.17: Percona 5.7.17.
If this parameter is left empty, `10.1.9` will be used.
                     */
                    void SetDbVersionId(const std::string& _dbVersionId);

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取AZs to deploy shard nodes. You can specify up to two AZs.
                     * @return Zones AZs to deploy shard nodes. You can specify up to two AZs.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置AZs to deploy shard nodes. You can specify up to two AZs.
                     * @param Zones AZs to deploy shard nodes. You can specify up to two AZs.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Security group ID
                     * @return SecurityGroupId Security group ID
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID
                     * @param SecurityGroupId Security group ID
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Custom name of the instance
                     * @return InstanceName Custom name of the instance
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Custom name of the instance
                     * @param InstanceName Custom name of the instance
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Whether IPv6 is supported
                     * @return Ipv6Flag Whether IPv6 is supported
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置Whether IPv6 is supported
                     * @param Ipv6Flag Whether IPv6 is supported
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取Array of tag key-value pairs
                     * @return ResourceTags Array of tag key-value pairs
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Array of tag key-value pairs
                     * @param ResourceTags Array of tag key-value pairs
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     * @return DcnRegion If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     */
                    std::string GetDcnRegion() const;

                    /**
                     * 设置If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     * @param DcnRegion If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     */
                    void SetDcnRegion(const std::string& _dcnRegion);

                    /**
                     * 判断参数 DcnRegion 是否已赋值
                     * @return DcnRegion 是否已赋值
                     */
                    bool DcnRegionHasBeenSet() const;

                    /**
                     * 获取If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     * @return DcnInstanceId If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     */
                    std::string GetDcnInstanceId() const;

                    /**
                     * 设置If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     * @param DcnInstanceId If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     */
                    void SetDcnInstanceId(const std::string& _dcnInstanceId);

                    /**
                     * 判断参数 DcnInstanceId 是否已赋值
                     * @return DcnInstanceId 是否已赋值
                     */
                    bool DcnInstanceIdHasBeenSet() const;

                    /**
                     * 获取List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; 0: case-sensitive; 1: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; 0: async; 1: strong sync; 2: downgradable strong sync; default value: 2).
                     * @return InitParams List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; 0: case-sensitive; 1: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; 0: async; 1: strong sync; 2: downgradable strong sync; default value: 2).
                     */
                    std::vector<DBParamValue> GetInitParams() const;

                    /**
                     * 设置List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; 0: case-sensitive; 1: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; 0: async; 1: strong sync; 2: downgradable strong sync; default value: 2).
                     * @param InitParams List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; 0: case-sensitive; 1: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; 0: async; 1: strong sync; 2: downgradable strong sync; default value: 2).
                     */
                    void SetInitParams(const std::vector<DBParamValue>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取ID of the instance to be rolled back
                     * @return RollbackInstanceId ID of the instance to be rolled back
                     */
                    std::string GetRollbackInstanceId() const;

                    /**
                     * 设置ID of the instance to be rolled back
                     * @param RollbackInstanceId ID of the instance to be rolled back
                     */
                    void SetRollbackInstanceId(const std::string& _rollbackInstanceId);

                    /**
                     * 判断参数 RollbackInstanceId 是否已赋值
                     * @return RollbackInstanceId 是否已赋值
                     */
                    bool RollbackInstanceIdHasBeenSet() const;

                    /**
                     * 获取Rollback time
                     * @return RollbackTime Rollback time
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置Rollback time
                     * @param RollbackTime Rollback time
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取Array of security group IDs (this parameter is compatible with the old parameter `SecurityGroupId`)
                     * @return SecurityGroupIds Array of security group IDs (this parameter is compatible with the old parameter `SecurityGroupId`)
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Array of security group IDs (this parameter is compatible with the old parameter `SecurityGroupId`)
                     * @param SecurityGroupIds Array of security group IDs (this parameter is compatible with the old parameter `SecurityGroupId`)
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Shard memory in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * Shard capacity in GB, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * The number of nodes per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t m_shardNodeCount;
                    bool m_shardNodeCountHasBeenSet;

                    /**
                     * The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * The number of instances to be purchased
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, which is required when `VpcId` is specified
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The number of CPU cores per shard, which can be obtained through the `DescribeShardSpec` API.
  
                     */
                    int64_t m_shardCpu;
                    bool m_shardCpuHasBeenSet;

                    /**
                     * Database engine version. Valid values:
10.0.10: MariaDB 10.0.10;
10.1.9: MariaDB 10.1.9;
5.7.17: Percona 5.7.17.
If this parameter is left empty, `10.1.9` will be used.
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * AZs to deploy shard nodes. You can specify up to two AZs.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Custom name of the instance
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Whether IPv6 is supported
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * Array of tag key-value pairs
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     */
                    std::string m_dcnRegion;
                    bool m_dcnRegionHasBeenSet;

                    /**
                     * If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated source instance so that the disaster recovery instance can sync data with the source instance over the Data Communication Network (DCN).
                     */
                    std::string m_dcnInstanceId;
                    bool m_dcnInstanceIdHasBeenSet;

                    /**
                     * List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; 0: case-sensitive; 1: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; 0: async; 1: strong sync; 2: downgradable strong sync; default value: 2).
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * ID of the instance to be rolled back
                     */
                    std::string m_rollbackInstanceId;
                    bool m_rollbackInstanceIdHasBeenSet;

                    /**
                     * Rollback time
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * Array of security group IDs (this parameter is compatible with the old parameter `SecurityGroupId`)
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEHOURDCDBINSTANCEREQUEST_H_
