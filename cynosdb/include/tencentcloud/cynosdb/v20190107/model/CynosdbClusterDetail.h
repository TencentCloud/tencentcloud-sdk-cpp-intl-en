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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Addr.h>
#include <tencentcloud/cynosdb/v20190107/model/Ability.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/ClusterInstanceDetail.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ResourcePackage.h>
#include <tencentcloud/cynosdb/v20190107/model/SlaveZoneAttrItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Cluster details.
                */
                class CynosdbClusterDetail : public AbstractModel
                {
                public:
                    CynosdbClusterDetail();
                    ~CynosdbClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Region</p>
                     * @return Region <p>Region</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region</p>
                     * @param _region <p>Region</p>
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
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
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
                     * 获取<p>Physical AZ</p>
                     * @return PhysicalZone <p>Physical AZ</p>
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置<p>Physical AZ</p>
                     * @param _physicalZone <p>Physical AZ</p>
                     * 
                     */
                    void SetPhysicalZone(const std::string& _physicalZone);

                    /**
                     * 判断参数 PhysicalZone 是否已赋值
                     * @return PhysicalZone 是否已赋值
                     * 
                     */
                    bool PhysicalZoneHasBeenSet() const;

                    /**
                     * 获取<p>Status. Supported values are as follows:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolation</li><li>isolated: Isolated</li><li>activating: Restore from recycle bin</li><li>offlining: Offline</li><li>offlined: Offline</li><li>deleting: Deleting</li><li>deleted: Deleted</li></ul>
                     * @return Status <p>Status. Supported values are as follows:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolation</li><li>isolated: Isolated</li><li>activating: Restore from recycle bin</li><li>offlining: Offline</li><li>offlined: Offline</li><li>deleting: Deleting</li><li>deleted: Deleted</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status. Supported values are as follows:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolation</li><li>isolated: Isolated</li><li>activating: Restore from recycle bin</li><li>offlining: Offline</li><li>offlined: Offline</li><li>deleting: Deleting</li><li>deleted: Deleted</li></ul>
                     * @param _status <p>Status. Supported values are as follows:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolation</li><li>isolated: Isolated</li><li>activating: Restore from recycle bin</li><li>offlining: Offline</li><li>offlined: Offline</li><li>deleting: Deleting</li><li>deleted: Deleted</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Status description</p>
                     * @return StatusDesc <p>Status description</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>Status description</p>
                     * @param _statusDesc <p>Status description</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>resuming<br>pause<br>pausing</p>
                     * @return ServerlessStatus <p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>resuming<br>pause<br>pausing</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>resuming<br>pause<br>pausing</p>
                     * @param _serverlessStatus <p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>resuming<br>pause<br>pausing</p>
                     * 
                     */
                    void SetServerlessStatus(const std::string& _serverlessStatus);

                    /**
                     * 判断参数 ServerlessStatus 是否已赋值
                     * @return ServerlessStatus 是否已赋值
                     * 
                     */
                    bool ServerlessStatusHasBeenSet() const;

                    /**
                     * 获取<p>Storage Id</p>
                     * @return StorageId <p>Storage Id</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>Storage Id</p>
                     * @param _storageId <p>Storage Id</p>
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取<p>Storage size in GB</p>
                     * @return Storage <p>Storage size in GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>Storage size in GB</p>
                     * @param _storage <p>Storage size in GB</p>
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
                     * 获取<p>Maximum storage specification, in GB</p>
                     * @return MaxStorageSize <p>Maximum storage specification, in GB</p>
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置<p>Maximum storage specification, in GB</p>
                     * @param _maxStorageSize <p>Maximum storage specification, in GB</p>
                     * 
                     */
                    void SetMaxStorageSize(const int64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     * 
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Minimum storage specification, in GB</p>
                     * @return MinStorageSize <p>Minimum storage specification, in GB</p>
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置<p>Minimum storage specification, in GB</p>
                     * @param _minStorageSize <p>Minimum storage specification, in GB</p>
                     * 
                     */
                    void SetMinStorageSize(const int64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     * 
                     */
                    bool MinStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Storage billing type. Valid values: 1 (yearly/monthly subscription); 0 (pay-as-you-go).</p>
                     * @return StoragePayMode <p>Storage billing type. Valid values: 1 (yearly/monthly subscription); 0 (pay-as-you-go).</p>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>Storage billing type. Valid values: 1 (yearly/monthly subscription); 0 (pay-as-you-go).</p>
                     * @param _storagePayMode <p>Storage billing type. Valid values: 1 (yearly/monthly subscription); 0 (pay-as-you-go).</p>
                     * 
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取<p>VPC name</p>
                     * @return VpcName <p>VPC name</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>VPC name</p>
                     * @param _vpcName <p>VPC name</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>vpc Unique id</p>
                     * @return VpcId <p>vpc Unique id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc Unique id</p>
                     * @param _vpcId <p>vpc Unique id</p>
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
                     * 获取<p>Subnet name.</p>
                     * @return SubnetName <p>Subnet name.</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>Subnet name.</p>
                     * @param _subnetName <p>Subnet name.</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>Subnet ID.</p>
                     * @return SubnetId <p>Subnet ID.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID.</p>
                     * @param _subnetId <p>Subnet ID.</p>
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
                     * 获取<p>Character set.</p>
                     * @return Charset <p>Character set.</p>
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置<p>Character set.</p>
                     * @param _charset <p>Character set.</p>
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Database type</p>
                     * @return DbType <p>Database type</p>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>Database type</p>
                     * @param _dbType <p>Database type</p>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>Db type: <li>NORMAL</li><li>SERVERLESS</li></p>
                     * @return DbMode <p>Db type: <li>NORMAL</li><li>SERVERLESS</li></p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db type: <li>NORMAL</li><li>SERVERLESS</li></p>
                     * @param _dbMode <p>Db type: <li>NORMAL</li><li>SERVERLESS</li></p>
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取<p>Database version</p>
                     * @return DbVersion <p>Database version</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>Database version</p>
                     * @param _dbVersion <p>Database version</p>
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取<p>Storage space limit</p>
                     * @return StorageLimit <p>Storage space limit</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>Storage space limit</p>
                     * @param _storageLimit <p>Storage space limit</p>
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取<p>Used capacity</p>
                     * @return UsedStorage <p>Used capacity</p>
                     * 
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置<p>Used capacity</p>
                     * @param _usedStorage <p>Used capacity</p>
                     * 
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     * 
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取<p>vip address</p>
                     * @return Vip <p>vip address</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>vip address</p>
                     * @param _vip <p>vip address</p>
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
                     * 获取<p>vport port</p>
                     * @return Vport <p>vport port</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>vport port</p>
                     * @param _vport <p>vport port</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>vip address and vport of the cluster read-only instance</p>
                     * @return RoAddr <p>vip address and vport of the cluster read-only instance</p>
                     * 
                     */
                    std::vector<Addr> GetRoAddr() const;

                    /**
                     * 设置<p>vip address and vport of the cluster read-only instance</p>
                     * @param _roAddr <p>vip address and vport of the cluster read-only instance</p>
                     * 
                     */
                    void SetRoAddr(const std::vector<Addr>& _roAddr);

                    /**
                     * 判断参数 RoAddr 是否已赋值
                     * @return RoAddr 是否已赋值
                     * 
                     */
                    bool RoAddrHasBeenSet() const;

                    /**
                     * 获取<p>Functions supported by the cluster</p>
                     * @return Ability <p>Functions supported by the cluster</p>
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置<p>Functions supported by the cluster</p>
                     * @param _ability <p>Functions supported by the cluster</p>
                     * 
                     */
                    void SetAbility(const Ability& _ability);

                    /**
                     * 判断参数 Ability 是否已赋值
                     * @return Ability 是否已赋值
                     * 
                     */
                    bool AbilityHasBeenSet() const;

                    /**
                     * 获取<p>cynos version</p>
                     * @return CynosVersion <p>cynos version</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>cynos version</p>
                     * @param _cynosVersion <p>cynos version</p>
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取<p>Business type</p>
                     * @return BusinessType <p>Business type</p>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置<p>Business type</p>
                     * @param _businessType <p>Business type</p>
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether there is a secondary AZ</p>
                     * @return HasSlaveZone <p>Whether there is a secondary AZ</p>
                     * 
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置<p>Whether there is a secondary AZ</p>
                     * @param _hasSlaveZone <p>Whether there is a secondary AZ</p>
                     * 
                     */
                    void SetHasSlaveZone(const std::string& _hasSlaveZone);

                    /**
                     * 判断参数 HasSlaveZone 是否已赋值
                     * @return HasSlaveZone 是否已赋值
                     * 
                     */
                    bool HasSlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>Freeze or not</p>
                     * @return IsFreeze <p>Freeze or not</p>
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置<p>Freeze or not</p>
                     * @param _isFreeze <p>Freeze or not</p>
                     * 
                     */
                    void SetIsFreeze(const std::string& _isFreeze);

                    /**
                     * 判断参数 IsFreeze 是否已赋值
                     * @return IsFreeze 是否已赋值
                     * 
                     */
                    bool IsFreezeHasBeenSet() const;

                    /**
                     * 获取<p>Task List</p>
                     * @return Tasks <p>Task List</p>
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置<p>Task List</p>
                     * @param _tasks <p>Task List</p>
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>Primary AZ</p>
                     * @return MasterZone <p>Primary AZ</p>
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置<p>Primary AZ</p>
                     * @param _masterZone <p>Primary AZ</p>
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取<p>From the AZ list</p>
                     * @return SlaveZones <p>From the AZ list</p>
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置<p>From the AZ list</p>
                     * @param _slaveZones <p>From the AZ list</p>
                     * 
                     */
                    void SetSlaveZones(const std::vector<std::string>& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取<p>Instance information</p>
                     * @return InstanceSet <p>Instance information</p>
                     * 
                     */
                    std::vector<ClusterInstanceDetail> GetInstanceSet() const;

                    /**
                     * 设置<p>Instance information</p>
                     * @param _instanceSet <p>Instance information</p>
                     * 
                     */
                    void SetInstanceSet(const std::vector<ClusterInstanceDetail>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode</p>
                     * @return PayMode <p>Payment mode</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>Payment mode</p>
                     * @param _payMode <p>Payment mode</p>
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
                     * 获取<p>Expiry time.</p>
                     * @return PeriodEndTime <p>Expiry time.</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>Expiry time.</p>
                     * @param _periodEndTime <p>Expiry time.</p>
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Project ID.</p>
                     * @return ProjectID <p>Project ID.</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectID <p>Project ID.</p>
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>tag Array information for instance binding</p>
                     * @return ResourceTags <p>tag Array information for instance binding</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>tag Array information for instance binding</p>
                     * @param _resourceTags <p>tag Array information for instance binding</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Proxy status</p>
                     * @return ProxyStatus <p>Proxy status</p>
                     * 
                     */
                    std::string GetProxyStatus() const;

                    /**
                     * 设置<p>Proxy status</p>
                     * @param _proxyStatus <p>Proxy status</p>
                     * 
                     */
                    void SetProxyStatus(const std::string& _proxyStatus);

                    /**
                     * 判断参数 ProxyStatus 是否已赋值
                     * @return ProxyStatus 是否已赋值
                     * 
                     */
                    bool ProxyStatusHasBeenSet() const;

                    /**
                     * 获取<p>binlog switch, available values: ON, OFF</p>
                     * @return LogBin <p>binlog switch, available values: ON, OFF</p>
                     * 
                     */
                    std::string GetLogBin() const;

                    /**
                     * 设置<p>binlog switch, available values: ON, OFF</p>
                     * @param _logBin <p>binlog switch, available values: ON, OFF</p>
                     * 
                     */
                    void SetLogBin(const std::string& _logBin);

                    /**
                     * 判断参数 LogBin 是否已赋值
                     * @return LogBin 是否已赋值
                     * 
                     */
                    bool LogBinHasBeenSet() const;

                    /**
                     * 获取<p>Skip transaction or not</p>
                     * @return IsSkipTrade <p>Skip transaction or not</p>
                     * 
                     */
                    std::string GetIsSkipTrade() const;

                    /**
                     * 设置<p>Skip transaction or not</p>
                     * @param _isSkipTrade <p>Skip transaction or not</p>
                     * 
                     */
                    void SetIsSkipTrade(const std::string& _isSkipTrade);

                    /**
                     * 判断参数 IsSkipTrade 是否已赋值
                     * @return IsSkipTrade 是否已赋值
                     * 
                     */
                    bool IsSkipTradeHasBeenSet() const;

                    /**
                     * 获取<p>PITR type, available values: normal, redo_pitr</p>
                     * @return PitrType <p>PITR type, available values: normal, redo_pitr</p>
                     * 
                     */
                    std::string GetPitrType() const;

                    /**
                     * 设置<p>PITR type, available values: normal, redo_pitr</p>
                     * @param _pitrType <p>PITR type, available values: normal, redo_pitr</p>
                     * 
                     */
                    void SetPitrType(const std::string& _pitrType);

                    /**
                     * 判断参数 PitrType 是否已赋值
                     * @return PitrType 是否已赋值
                     * 
                     */
                    bool PitrTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to toggle on password complexity</p>
                     * @return IsOpenPasswordComplexity <p>Whether to toggle on password complexity</p>
                     * 
                     */
                    std::string GetIsOpenPasswordComplexity() const;

                    /**
                     * 设置<p>Whether to toggle on password complexity</p>
                     * @param _isOpenPasswordComplexity <p>Whether to toggle on password complexity</p>
                     * 
                     */
                    void SetIsOpenPasswordComplexity(const std::string& _isOpenPasswordComplexity);

                    /**
                     * 判断参数 IsOpenPasswordComplexity 是否已赋值
                     * @return IsOpenPasswordComplexity 是否已赋值
                     * 
                     */
                    bool IsOpenPasswordComplexityHasBeenSet() const;

                    /**
                     * 获取<p>Network type</p>
                     * @return NetworkStatus <p>Network type</p>
                     * 
                     */
                    std::string GetNetworkStatus() const;

                    /**
                     * 设置<p>Network type</p>
                     * @param _networkStatus <p>Network type</p>
                     * 
                     */
                    void SetNetworkStatus(const std::string& _networkStatus);

                    /**
                     * 判断参数 NetworkStatus 是否已赋值
                     * @return NetworkStatus 是否已赋值
                     * 
                     */
                    bool NetworkStatusHasBeenSet() const;

                    /**
                     * 获取<p>Package info of the bound resource for the cluster</p>
                     * @return ResourcePackages <p>Package info of the bound resource for the cluster</p>
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置<p>Package info of the bound resource for the cluster</p>
                     * @param _resourcePackages <p>Package info of the bound resource for the cluster</p>
                     * 
                     */
                    void SetResourcePackages(const std::vector<ResourcePackage>& _resourcePackages);

                    /**
                     * 判断参数 ResourcePackages 是否已赋值
                     * @return ResourcePackages 是否已赋值
                     * 
                     */
                    bool ResourcePackagesHasBeenSet() const;

                    /**
                     * 获取<p>Auto-renewal flag. 1 means auto-renewal, 0 means non-renewal upon expiration.</p>
                     * @return RenewFlag <p>Auto-renewal flag. 1 means auto-renewal, 0 means non-renewal upon expiration.</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal flag. 1 means auto-renewal, 0 means non-renewal upon expiration.</p>
                     * @param _renewFlag <p>Auto-renewal flag. 1 means auto-renewal, 0 means non-renewal upon expiration.</p>
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Node network type</p>
                     * @return NetworkType <p>Node network type</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>Node network type</p>
                     * @param _networkType <p>Node network type</p>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>Secondary availability zone property</p>
                     * @return SlaveZoneAttr <p>Secondary availability zone property</p>
                     * 
                     */
                    std::vector<SlaveZoneAttrItem> GetSlaveZoneAttr() const;

                    /**
                     * 设置<p>Secondary availability zone property</p>
                     * @param _slaveZoneAttr <p>Secondary availability zone property</p>
                     * 
                     */
                    void SetSlaveZoneAttr(const std::vector<SlaveZoneAttrItem>& _slaveZoneAttr);

                    /**
                     * 判断参数 SlaveZoneAttr 是否已赋值
                     * @return SlaveZoneAttr 是否已赋值
                     * 
                     */
                    bool SlaveZoneAttrHasBeenSet() const;

                    /**
                     * 获取<p>Version tag</p>
                     * @return CynosVersionTag <p>Version tag</p>
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置<p>Version tag</p>
                     * @param _cynosVersionTag <p>Version tag</p>
                     * 
                     */
                    void SetCynosVersionTag(const std::string& _cynosVersionTag);

                    /**
                     * 判断参数 CynosVersionTag 是否已赋值
                     * @return CynosVersionTag 是否已赋值
                     * 
                     */
                    bool CynosVersionTagHasBeenSet() const;

                    /**
                     * 获取<p>Unique ID of the global database network</p>
                     * @return GdnId <p>Unique ID of the global database network</p>
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置<p>Unique ID of the global database network</p>
                     * @param _gdnId <p>Unique ID of the global database network</p>
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                    /**
                     * 获取<p>Role of the cluster in the global data network.<br>Primary cluster - primary<br>Slave cluster - standby<br>If empty, the field is invalid.</p>
                     * @return GdnRole <p>Role of the cluster in the global data network.<br>Primary cluster - primary<br>Slave cluster - standby<br>If empty, the field is invalid.</p>
                     * 
                     */
                    std::string GetGdnRole() const;

                    /**
                     * 设置<p>Role of the cluster in the global data network.<br>Primary cluster - primary<br>Slave cluster - standby<br>If empty, the field is invalid.</p>
                     * @param _gdnRole <p>Role of the cluster in the global data network.<br>Primary cluster - primary<br>Slave cluster - standby<br>If empty, the field is invalid.</p>
                     * 
                     */
                    void SetGdnRole(const std::string& _gdnRole);

                    /**
                     * 判断参数 GdnRole 是否已赋值
                     * @return GdnRole 是否已赋值
                     * 
                     */
                    bool GdnRoleHasBeenSet() const;

                    /**
                     * 获取<p>Second-level storage usage in GB</p>
                     * @return UsedArchiveStorage <p>Second-level storage usage in GB</p>
                     * 
                     */
                    int64_t GetUsedArchiveStorage() const;

                    /**
                     * 设置<p>Second-level storage usage in GB</p>
                     * @param _usedArchiveStorage <p>Second-level storage usage in GB</p>
                     * 
                     */
                    void SetUsedArchiveStorage(const int64_t& _usedArchiveStorage);

                    /**
                     * 判断参数 UsedArchiveStorage 是否已赋值
                     * @return UsedArchiveStorage 是否已赋值
                     * 
                     */
                    bool UsedArchiveStorageHasBeenSet() const;

                    /**
                     * 获取<p>Archiving status. Enumeration value <li>normal: Normal</li><li>archiving: Archiving</li><li>resuming: Recovering</li><li>archived: Archived</li></p>
                     * @return ArchiveStatus <p>Archiving status. Enumeration value <li>normal: Normal</li><li>archiving: Archiving</li><li>resuming: Recovering</li><li>archived: Archived</li></p>
                     * 
                     */
                    std::string GetArchiveStatus() const;

                    /**
                     * 设置<p>Archiving status. Enumeration value <li>normal: Normal</li><li>archiving: Archiving</li><li>resuming: Recovering</li><li>archived: Archived</li></p>
                     * @param _archiveStatus <p>Archiving status. Enumeration value <li>normal: Normal</li><li>archiving: Archiving</li><li>resuming: Recovering</li><li>archived: Archived</li></p>
                     * 
                     */
                    void SetArchiveStatus(const std::string& _archiveStatus);

                    /**
                     * 判断参数 ArchiveStatus 是否已赋值
                     * @return ArchiveStatus 是否已赋值
                     * 
                     */
                    bool ArchiveStatusHasBeenSet() const;

                    /**
                     * 获取<p>Archive progress, percentage.</p>
                     * @return ArchiveProgress <p>Archive progress, percentage.</p>
                     * 
                     */
                    int64_t GetArchiveProgress() const;

                    /**
                     * 设置<p>Archive progress, percentage.</p>
                     * @param _archiveProgress <p>Archive progress, percentage.</p>
                     * 
                     */
                    void SetArchiveProgress(const int64_t& _archiveProgress);

                    /**
                     * 判断参数 ArchiveProgress 是否已赋值
                     * @return ArchiveProgress 是否已赋值
                     * 
                     */
                    bool ArchiveProgressHasBeenSet() const;

                    /**
                     * 获取<p>Cluster level. For example P0, P1</p>
                     * @return ClusterLevel <p>Cluster level. For example P0, P1</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置<p>Cluster level. For example P0, P1</p>
                     * @param _clusterLevel <p>Cluster level. For example P0, P1</p>
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable transparent data encryption</p>
                     * @return IsOpenTDE <p>Whether to enable transparent data encryption</p>
                     * 
                     */
                    bool GetIsOpenTDE() const;

                    /**
                     * 设置<p>Whether to enable transparent data encryption</p>
                     * @param _isOpenTDE <p>Whether to enable transparent data encryption</p>
                     * 
                     */
                    void SetIsOpenTDE(const bool& _isOpenTDE);

                    /**
                     * 判断参数 IsOpenTDE 是否已赋值
                     * @return IsOpenTDE 是否已赋值
                     * 
                     */
                    bool IsOpenTDEHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Physical AZ</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * <p>Status. Supported values are as follows:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolation</li><li>isolated: Isolated</li><li>activating: Restore from recycle bin</li><li>offlining: Offline</li><li>offlined: Offline</li><li>deleting: Deleting</li><li>deleted: Deleted</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>resuming<br>pause<br>pausing</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>Storage Id</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>Storage size in GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Maximum storage specification, in GB</p>
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * <p>Minimum storage specification, in GB</p>
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * <p>Storage billing type. Valid values: 1 (yearly/monthly subscription); 0 (pay-as-you-go).</p>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>VPC name</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>vpc Unique id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet name.</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Character set.</p>
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Database type</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Db type: <li>NORMAL</li><li>SERVERLESS</li></p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>Database version</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>Storage space limit</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * <p>Used capacity</p>
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * <p>vip address</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>vport port</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>vip address and vport of the cluster read-only instance</p>
                     */
                    std::vector<Addr> m_roAddr;
                    bool m_roAddrHasBeenSet;

                    /**
                     * <p>Functions supported by the cluster</p>
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * <p>cynos version</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>Business type</p>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>Whether there is a secondary AZ</p>
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * <p>Freeze or not</p>
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * <p>Task List</p>
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>Primary AZ</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>From the AZ list</p>
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>Instance information</p>
                     */
                    std::vector<ClusterInstanceDetail> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * <p>Payment mode</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Expiry time.</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>tag Array information for instance binding</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Proxy status</p>
                     */
                    std::string m_proxyStatus;
                    bool m_proxyStatusHasBeenSet;

                    /**
                     * <p>binlog switch, available values: ON, OFF</p>
                     */
                    std::string m_logBin;
                    bool m_logBinHasBeenSet;

                    /**
                     * <p>Skip transaction or not</p>
                     */
                    std::string m_isSkipTrade;
                    bool m_isSkipTradeHasBeenSet;

                    /**
                     * <p>PITR type, available values: normal, redo_pitr</p>
                     */
                    std::string m_pitrType;
                    bool m_pitrTypeHasBeenSet;

                    /**
                     * <p>Whether to toggle on password complexity</p>
                     */
                    std::string m_isOpenPasswordComplexity;
                    bool m_isOpenPasswordComplexityHasBeenSet;

                    /**
                     * <p>Network type</p>
                     */
                    std::string m_networkStatus;
                    bool m_networkStatusHasBeenSet;

                    /**
                     * <p>Package info of the bound resource for the cluster</p>
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * <p>Auto-renewal flag. 1 means auto-renewal, 0 means non-renewal upon expiration.</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Node network type</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>Secondary availability zone property</p>
                     */
                    std::vector<SlaveZoneAttrItem> m_slaveZoneAttr;
                    bool m_slaveZoneAttrHasBeenSet;

                    /**
                     * <p>Version tag</p>
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * <p>Unique ID of the global database network</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * <p>Role of the cluster in the global data network.<br>Primary cluster - primary<br>Slave cluster - standby<br>If empty, the field is invalid.</p>
                     */
                    std::string m_gdnRole;
                    bool m_gdnRoleHasBeenSet;

                    /**
                     * <p>Second-level storage usage in GB</p>
                     */
                    int64_t m_usedArchiveStorage;
                    bool m_usedArchiveStorageHasBeenSet;

                    /**
                     * <p>Archiving status. Enumeration value <li>normal: Normal</li><li>archiving: Archiving</li><li>resuming: Recovering</li><li>archived: Archived</li></p>
                     */
                    std::string m_archiveStatus;
                    bool m_archiveStatusHasBeenSet;

                    /**
                     * <p>Archive progress, percentage.</p>
                     */
                    int64_t m_archiveProgress;
                    bool m_archiveProgressHasBeenSet;

                    /**
                     * <p>Cluster level. For example P0, P1</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * <p>Whether to enable transparent data encryption</p>
                     */
                    bool m_isOpenTDE;
                    bool m_isOpenTDEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_
