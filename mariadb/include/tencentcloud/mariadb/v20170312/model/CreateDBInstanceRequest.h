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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEDBINSTANCEREQUEST_H_

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
                * CreateDBInstance request structure.
                */
                class CreateDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceRequest();
                    ~CreateDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZs to deploy instance nodes. You can specify up to two AZs (one as primary AZ and another as replica AZ). When the shard specification is 1-primary-2-replica, the primary and one of the replicas are deployed in the primary AZ.
                     * @return Zones AZs to deploy instance nodes. You can specify up to two AZs (one as primary AZ and another as replica AZ). When the shard specification is 1-primary-2-replica, the primary and one of the replicas are deployed in the primary AZ.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置AZs to deploy instance nodes. You can specify up to two AZs (one as primary AZ and another as replica AZ). When the shard specification is 1-primary-2-replica, the primary and one of the replicas are deployed in the primary AZ.
                     * @param _zones AZs to deploy instance nodes. You can specify up to two AZs (one as primary AZ and another as replica AZ). When the shard specification is 1-primary-2-replica, the primary and one of the replicas are deployed in the primary AZ.
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
                     * 获取Number of nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return NodeCount Number of nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _nodeCount Number of nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return Memory Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _memory Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
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
                     * 获取Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return Storage Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _storage Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
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
                     * 获取The number of instances to be purchased. Only one instance is queried for price by default.
                     * @return Count The number of instances to be purchased. Only one instance is queried for price by default.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of instances to be purchased. Only one instance is queried for price by default.
                     * @param _count The number of instances to be purchased. Only one instance is queried for price by default.
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
                     * 获取VPC ID. If this parameter is not passed in, the instance will be created on the classic network.
                     * @return VpcId VPC ID. If this parameter is not passed in, the instance will be created on the classic network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is not passed in, the instance will be created on the classic network.
                     * @param _vpcId VPC ID. If this parameter is not passed in, the instance will be created on the classic network.
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
                     * 获取Name of the instance, which can be customized.
                     * @return InstanceName Name of the instance, which can be customized.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Name of the instance, which can be customized.
                     * @param _instanceName Name of the instance, which can be customized.
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
                     * 获取Auto-renewal flag. Valid values: `1` (auto-renewal), `2` (no renewal upon expiration).
                     * @return AutoRenewFlag Auto-renewal flag. Valid values: `1` (auto-renewal), `2` (no renewal upon expiration).
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: `1` (auto-renewal), `2` (no renewal upon expiration).
                     * @param _autoRenewFlag Auto-renewal flag. Valid values: `1` (auto-renewal), `2` (no renewal upon expiration).
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
                     * 获取Whether IPv6 is supported.
                     * @return Ipv6Flag Whether IPv6 is supported.
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置Whether IPv6 is supported.
                     * @param _ipv6Flag Whether IPv6 is supported.
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

                private:

                    /**
                     * AZs to deploy instance nodes. You can specify up to two AZs (one as primary AZ and another as replica AZ). When the shard specification is 1-primary-2-replica, the primary and one of the replicas are deployed in the primary AZ.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Number of nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Validity period in months
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * The number of instances to be purchased. Only one instance is queried for price by default.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

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
                     * VPC ID. If this parameter is not passed in, the instance will be created on the classic network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, which is required when `VpcId` is specified.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Project ID, which can be obtained through the `DescribeProjects` API. If this parameter is not passed in, the instance will be associated with the default project.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Database engine version. Valid values: `5.7`, `8.0`, `10.0`, `10.1`.
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * Name of the instance, which can be customized.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * List of security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: `1` (auto-renewal), `2` (no renewal upon expiration).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether IPv6 is supported.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEDBINSTANCEREQUEST_H_
