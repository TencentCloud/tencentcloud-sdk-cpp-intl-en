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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEHOURDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEHOURDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ResourceTag.h>
#include <tencentcloud/mariadb/v20170312/model/DBParamValue.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateHourDBInstance request structure.
                */
                class CreateHourDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateHourDBInstanceRequest();
                    ~CreateHourDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZs to deploy instance nodes. You can specify up to two AZs. If each shard has one primary node and two replica nodes, two of the three will be deployed in the first AZ you have specified.
                     * @return Zones AZs to deploy instance nodes. You can specify up to two AZs. If each shard has one primary node and two replica nodes, two of the three will be deployed in the first AZ you have specified.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置AZs to deploy instance nodes. You can specify up to two AZs. If each shard has one primary node and two replica nodes, two of the three will be deployed in the first AZ you have specified.
                     * @param Zones AZs to deploy instance nodes. You can specify up to two AZs. If each shard has one primary node and two replica nodes, two of the three will be deployed in the first AZ you have specified.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Number of nodes.
                     * @return NodeCount Number of nodes.
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes.
                     * @param NodeCount Number of nodes.
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Memory size in GB.
                     * @return Memory Memory size in GB.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB.
                     * @param Memory Memory size in GB.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Storage size in GB.
                     * @return Storage Storage size in GB.
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage size in GB.
                     * @param Storage Storage size in GB.
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Number of instances to purchase.
                     * @return Count Number of instances to purchase.
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of instances to purchase.
                     * @param Count Number of instances to purchase.
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Project ID. If this parameter is not passed in, the default project will be used.
                     * @return ProjectId Project ID. If this parameter is not passed in, the default project will be used.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. If this parameter is not passed in, the default project will be used.
                     * @param ProjectId Project ID. If this parameter is not passed in, the default project will be used.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of the network. If this parameter is not passed in, the classic network will be used.
                     * @return VpcId Unique ID of the network. If this parameter is not passed in, the classic network will be used.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of the network. If this parameter is not passed in, the classic network will be used.
                     * @param VpcId Unique ID of the network. If this parameter is not passed in, the classic network will be used.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of the subnet. If `VpcId` is specified, this parameter is required.
                     * @return SubnetId Unique ID of the subnet. If `VpcId` is specified, this parameter is required.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Unique ID of the subnet. If `VpcId` is specified, this parameter is required.
                     * @param SubnetId Unique ID of the subnet. If `VpcId` is specified, this parameter is required.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

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
                     * 获取Custom name of the instance.
                     * @return InstanceName Custom name of the instance.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Custom name of the instance.
                     * @param InstanceName Custom name of the instance.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Security group ID. If this parameter is not passed in, no security groups will be associated when the instance is created.
                     * @return SecurityGroupIds Security group ID. If this parameter is not passed in, no security groups will be associated when the instance is created.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID. If this parameter is not passed in, no security groups will be associated when the instance is created.
                     * @param SecurityGroupIds Security group ID. If this parameter is not passed in, no security groups will be associated when the instance is created.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Whether IPv6 is supported.
                     * @return Ipv6Flag Whether IPv6 is supported.
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置Whether IPv6 is supported.
                     * @param Ipv6Flag Whether IPv6 is supported.
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取Array of tag key-value pairs.
                     * @return ResourceTags Array of tag key-value pairs.
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Array of tag key-value pairs.
                     * @param ResourceTags Array of tag key-value pairs.
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     * @return DcnRegion If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     */
                    std::string GetDcnRegion() const;

                    /**
                     * 设置If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     * @param DcnRegion If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     */
                    void SetDcnRegion(const std::string& _dcnRegion);

                    /**
                     * 判断参数 DcnRegion 是否已赋值
                     * @return DcnRegion 是否已赋值
                     */
                    bool DcnRegionHasBeenSet() const;

                    /**
                     * 获取If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     * @return DcnInstanceId If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     */
                    std::string GetDcnInstanceId() const;

                    /**
                     * 设置If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     * @param DcnInstanceId If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
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
                     * 获取ID of the instance whose backup data will be rolled back to the new instance you create.
                     * @return RollbackInstanceId ID of the instance whose backup data will be rolled back to the new instance you create.
                     */
                    std::string GetRollbackInstanceId() const;

                    /**
                     * 设置ID of the instance whose backup data will be rolled back to the new instance you create.
                     * @param RollbackInstanceId ID of the instance whose backup data will be rolled back to the new instance you create.
                     */
                    void SetRollbackInstanceId(const std::string& _rollbackInstanceId);

                    /**
                     * 判断参数 RollbackInstanceId 是否已赋值
                     * @return RollbackInstanceId 是否已赋值
                     */
                    bool RollbackInstanceIdHasBeenSet() const;

                    /**
                     * 获取Rollback time.
                     * @return RollbackTime Rollback time.
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置Rollback time.
                     * @param RollbackTime Rollback time.
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     */
                    bool RollbackTimeHasBeenSet() const;

                private:

                    /**
                     * AZs to deploy instance nodes. You can specify up to two AZs. If each shard has one primary node and two replica nodes, two of the three will be deployed in the first AZ you have specified.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Number of nodes.
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Memory size in GB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage size in GB.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Number of instances to purchase.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Project ID. If this parameter is not passed in, the default project will be used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Unique ID of the network. If this parameter is not passed in, the classic network will be used.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique ID of the subnet. If `VpcId` is specified, this parameter is required.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

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
                     * Custom name of the instance.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Security group ID. If this parameter is not passed in, no security groups will be associated when the instance is created.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Whether IPv6 is supported.
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * Array of tag key-value pairs.
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * If you create a disaster recovery instance, you need to use this parameter to specify the region of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     */
                    std::string m_dcnRegion;
                    bool m_dcnRegionHasBeenSet;

                    /**
                     * If you create a disaster recovery instance, you need to use this parameter to specify the ID of the associated primary instance so that the disaster recovery instance can sync data with the primary instance over the Data Communication Network (DCN).
                     */
                    std::string m_dcnInstanceId;
                    bool m_dcnInstanceIdHasBeenSet;

                    /**
                     * List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; 0: case-sensitive; 1: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; 0: async; 1: strong sync; 2: downgradable strong sync; default value: 2).
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * ID of the instance whose backup data will be rolled back to the new instance you create.
                     */
                    std::string m_rollbackInstanceId;
                    bool m_rollbackInstanceIdHasBeenSet;

                    /**
                     * Rollback time.
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEHOURDBINSTANCEREQUEST_H_
