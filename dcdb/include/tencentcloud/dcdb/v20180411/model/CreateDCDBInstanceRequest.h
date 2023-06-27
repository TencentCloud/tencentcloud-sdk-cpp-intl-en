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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDCDBINSTANCEREQUEST_H_

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
                * CreateDCDBInstance request structure.
                */
                class CreateDCDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDCDBInstanceRequest();
                    ~CreateDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZs to deploy shard nodes. You can specify up to two AZs. When the shard specification is 1-source-2-replica, two of the nodes are deployed in the first AZ.
The current purchasable AZ needs be pulled through `DescribeDCDBSaleInfo` API.
                     * @return Zones AZs to deploy shard nodes. You can specify up to two AZs. When the shard specification is 1-source-2-replica, two of the nodes are deployed in the first AZ.
The current purchasable AZ needs be pulled through `DescribeDCDBSaleInfo` API.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置AZs to deploy shard nodes. You can specify up to two AZs. When the shard specification is 1-source-2-replica, two of the nodes are deployed in the first AZ.
The current purchasable AZ needs be pulled through `DescribeDCDBSaleInfo` API.
                     * @param _zones AZs to deploy shard nodes. You can specify up to two AZs. When the shard specification is 1-source-2-replica, two of the nodes are deployed in the first AZ.
The current purchasable AZ needs be pulled through `DescribeDCDBSaleInfo` API.
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
                     * 获取Validity period in months
                     * @return Period Validity period in months
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Validity period in months
                     * @param _period Validity period in months
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Shard memory size in GB, which can be obtained 
 by querying the instance specification through `DescribeShardSpec` API.
                     * @return ShardMemory Shard memory size in GB, which can be obtained 
 by querying the instance specification through `DescribeShardSpec` API.
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置Shard memory size in GB, which can be obtained 
 by querying the instance specification through `DescribeShardSpec` API.
                     * @param _shardMemory Shard memory size in GB, which can be obtained 
 by querying the instance specification through `DescribeShardSpec` API.
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
                     * 获取Shard storage size in GB, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     * @return ShardStorage Shard storage size in GB, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置Shard storage size in GB, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     * @param _shardStorage Shard storage size in GB, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
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
                     * 获取Number of nodes in a single shard, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     * @return ShardNodeCount Number of nodes in a single shard, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     * 
                     */
                    int64_t GetShardNodeCount() const;

                    /**
                     * 设置Number of nodes in a single shard, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     * @param _shardNodeCount Number of nodes in a single shard, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     * 
                     */
                    void SetShardNodeCount(const int64_t& _shardNodeCount);

                    /**
                     * 判断参数 ShardNodeCount 是否已赋值
                     * @return ShardNodeCount 是否已赋值
                     * 
                     */
                    bool ShardNodeCountHasBeenSet() const;

                    /**
                     * 获取The number of shards in the instance. Value range: 2-8. You can increase up to 64 shards by upgrading your instance.
                     * @return ShardCount The number of shards in the instance. Value range: 2-8. You can increase up to 64 shards by upgrading your instance.
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置The number of shards in the instance. Value range: 2-8. You can increase up to 64 shards by upgrading your instance.
                     * @param _shardCount The number of shards in the instance. Value range: 2-8. You can increase up to 64 shards by upgrading your instance.
                     * 
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取The number of instances to be purchased
                     * @return Count The number of instances to be purchased
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of instances to be purchased
                     * @param _count The number of instances to be purchased
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     * @return ProjectId Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     * @param _projectId Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
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
                     * 获取VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     * @return VpcId VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
                     * @param _vpcId VPC ID. If this parameter is left empty or not passed in, the instance will be created on the classic network.
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
                     * 获取VPC subnet ID, which is required when `VpcId` is specified.
                     * @return SubnetId VPC subnet ID, which is required when `VpcId` is specified.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID, which is required when `VpcId` is specified.
                     * @param _subnetId VPC subnet ID, which is required when `VpcId` is specified.
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
                     * 获取Database engine version. Valid values: `5.7`, `8.0`, `10.0`, `10.1`.
                     * @return DbVersionId Database engine version. Valid values: `5.7`, `8.0`, `10.0`, `10.1`.
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置Database engine version. Valid values: `5.7`, `8.0`, `10.0`, `10.1`.
                     * @param _dbVersionId Database engine version. Valid values: `5.7`, `8.0`, `10.0`, `10.1`.
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
                     * 获取Whether to automatically use vouchers. This option is disabled by default.
                     * @return AutoVoucher Whether to automatically use vouchers. This option is disabled by default.
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers. This option is disabled by default.
                     * @param _autoVoucher Whether to automatically use vouchers. This option is disabled by default.
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Voucher ID list. Currently, you can specify only one voucher.
                     * @return VoucherIds Voucher ID list. Currently, you can specify only one voucher.
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list. Currently, you can specify only one voucher.
                     * @param _voucherIds Voucher ID list. Currently, you can specify only one voucher.
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

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
                     * 获取Custom name of the instance
                     * @return InstanceName Custom name of the instance
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Custom name of the instance
                     * @param _instanceName Custom name of the instance
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
                     * 获取Whether IPv6 is supported. Valid values: `0` (unsupported), `1` (supported).
                     * @return Ipv6Flag Whether IPv6 is supported. Valid values: `0` (unsupported), `1` (supported).
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置Whether IPv6 is supported. Valid values: `0` (unsupported), `1` (supported).
                     * @param _ipv6Flag Whether IPv6 is supported. Valid values: `0` (unsupported), `1` (supported).
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
                     * 获取Array of tag key-value pairs
                     * @return ResourceTags Array of tag key-value pairs
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Array of tag key-value pairs
                     * @param _resourceTags Array of tag key-value pairs
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
                     * 获取List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync; default value: `2`).
                     * @return InitParams List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync; default value: `2`).
                     * 
                     */
                    std::vector<DBParamValue> GetInitParams() const;

                    /**
                     * 设置List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync; default value: `2`).
                     * @param _initParams List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync; default value: `2`).
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
                     * 获取DCN source region
                     * @return DcnRegion DCN source region
                     * 
                     */
                    std::string GetDcnRegion() const;

                    /**
                     * 设置DCN source region
                     * @param _dcnRegion DCN source region
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
                     * 获取Renewal mode. Valid values: `0` (manual renewal, which is the default mode), `1` (auto-renewal), `2` (manual renewal, which is specified by users).  If no renewal is required, set it to `0`.
                     * @return AutoRenewFlag Renewal mode. Valid values: `0` (manual renewal, which is the default mode), `1` (auto-renewal), `2` (manual renewal, which is specified by users).  If no renewal is required, set it to `0`.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal mode. Valid values: `0` (manual renewal, which is the default mode), `1` (auto-renewal), `2` (manual renewal, which is specified by users).  If no renewal is required, set it to `0`.
                     * @param _autoRenewFlag Renewal mode. Valid values: `0` (manual renewal, which is the default mode), `1` (auto-renewal), `2` (manual renewal, which is specified by users).  If no renewal is required, set it to `0`.
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
                     * 获取Security group IDs in array. This parameter is compatible with the old parameter `SecurityGroupId`.
                     * @return SecurityGroupIds Security group IDs in array. This parameter is compatible with the old parameter `SecurityGroupId`.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group IDs in array. This parameter is compatible with the old parameter `SecurityGroupId`.
                     * @param _securityGroupIds Security group IDs in array. This parameter is compatible with the old parameter `SecurityGroupId`.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * AZs to deploy shard nodes. You can specify up to two AZs. When the shard specification is 1-source-2-replica, two of the nodes are deployed in the first AZ.
The current purchasable AZ needs be pulled through `DescribeDCDBSaleInfo` API.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Validity period in months
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Shard memory size in GB, which can be obtained 
 by querying the instance specification through `DescribeShardSpec` API.
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * Shard storage size in GB, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * Number of nodes in a single shard, which can be obtained
 by querying the instance specification through `DescribeShardSpec` API.
                     */
                    int64_t m_shardNodeCount;
                    bool m_shardNodeCountHasBeenSet;

                    /**
                     * The number of shards in the instance. Value range: 2-8. You can increase up to 64 shards by upgrading your instance.
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
                     * VPC subnet ID, which is required when `VpcId` is specified.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Database engine version. Valid values: `5.7`, `8.0`, `10.0`, `10.1`.
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * Whether to automatically use vouchers. This option is disabled by default.
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list. Currently, you can specify only one voucher.
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

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
                     * Whether IPv6 is supported. Valid values: `0` (unsupported), `1` (supported).
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * Array of tag key-value pairs
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * List of parameters. Valid values: `character_set_server` (character set; required); `lower_case_table_names` (table name case sensitivity; required; `0`: case-sensitive; `1`: case-insensitive); `innodb_page_size` (InnoDB data page size; default size: 16 KB); `sync_mode` (sync mode; `0`: async; `1`: strong sync; `2`: downgradable strong sync; default value: `2`).
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * DCN source region
                     */
                    std::string m_dcnRegion;
                    bool m_dcnRegionHasBeenSet;

                    /**
                     * DCN source instance ID
                     */
                    std::string m_dcnInstanceId;
                    bool m_dcnInstanceIdHasBeenSet;

                    /**
                     * Renewal mode. Valid values: `0` (manual renewal, which is the default mode), `1` (auto-renewal), `2` (manual renewal, which is specified by users).  If no renewal is required, set it to `0`.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Security group IDs in array. This parameter is compatible with the old parameter `SecurityGroupId`.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDCDBINSTANCEREQUEST_H_
