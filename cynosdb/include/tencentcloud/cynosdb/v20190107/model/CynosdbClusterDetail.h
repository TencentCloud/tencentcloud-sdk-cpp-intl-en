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


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Cluster details
                */
                class CynosdbClusterDetail : public AbstractModel
                {
                public:
                    CynosdbClusterDetail();
                    ~CynosdbClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
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
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取AZ
                     * @return Zone AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param _zone AZ
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
                     * 获取Physical AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhysicalZone Physical AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置Physical AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _physicalZone Physical AZ
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
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
                     * 获取Status description
                     * @return StatusDesc Status description
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description
                     * @param _statusDesc Status description
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
                     * 获取Serverless cluster status when the database type is `SERVERLESS`. Valid values:
resume
resuming
pause
pausing
                     * @return ServerlessStatus Serverless cluster status when the database type is `SERVERLESS`. Valid values:
resume
resuming
pause
pausing
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置Serverless cluster status when the database type is `SERVERLESS`. Valid values:
resume
resuming
pause
pausing
                     * @param _serverlessStatus Serverless cluster status when the database type is `SERVERLESS`. Valid values:
resume
resuming
pause
pausing
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
                     * 获取Storage ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageId Storage ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置Storage ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageId Storage ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Storage capacity in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Storage Storage capacity in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storage Storage capacity in GB
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxStorageSize Maximum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置Maximum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxStorageSize Maximum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Minimum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinStorageSize Minimum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置Minimum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minStorageSize Minimum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Storage billing mode. Valid values: `1` (monthly subscription), `0` (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoragePayMode Storage billing mode. Valid values: `1` (monthly subscription), `0` (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置Storage billing mode. Valid values: `1` (monthly subscription), `0` (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storagePayMode Storage billing mode. Valid values: `1` (monthly subscription), `0` (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取VPC name
                     * @return VpcName VPC name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
                     * @param _vpcName VPC name
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
                     * 获取Unique VPC ID
                     * @return VpcId Unique VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique VPC ID
                     * @param _vpcId Unique VPC ID
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
                     * 获取Subnet name
                     * @return SubnetName Subnet name
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name
                     * @param _subnetName Subnet name
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
                     * 获取Character set
                     * @return Charset Character set
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置Character set
                     * @param _charset Character set
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Database type
                     * @return DbType Database type
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database type
                     * @param _dbType Database type
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
                     * 获取Database type. Valid values: `normal`, `serverless`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbMode Database type. Valid values: `normal`, `serverless`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database type. Valid values: `normal`, `serverless`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbMode Database type. Valid values: `normal`, `serverless`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database version
                     * @return DbVersion Database version
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置Database version
                     * @param _dbVersion Database version
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
                     * 获取Maximum storage space
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageLimit Maximum storage space
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Maximum storage space
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageLimit Maximum storage space
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Used capacity
                     * @return UsedStorage Used capacity
                     * 
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置Used capacity
                     * @param _usedStorage Used capacity
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
                     * 获取VIP
                     * @return Vip VIP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP
                     * @param _vip VIP
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
                     * 获取vport
                     * @return Vport vport
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置vport
                     * @param _vport vport
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
                     * 获取VIP u200dand vport of the read-only instance in a cluster
                     * @return RoAddr VIP u200dand vport of the read-only instance in a cluster
                     * 
                     */
                    std::vector<Addr> GetRoAddr() const;

                    /**
                     * 设置VIP u200dand vport of the read-only instance in a cluster
                     * @param _roAddr VIP u200dand vport of the read-only instance in a cluster
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
                     * 获取Features supported by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ability Features supported by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置Features supported by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ability Features supported by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取TDSQL-C version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CynosVersion TDSQL-C version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置TDSQL-C version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cynosVersion TDSQL-C version
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Business type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessType Business type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置Business type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessType Business type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether there is a secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasSlaveZone Whether there is a secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置Whether there is a secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasSlaveZone Whether there is a secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to freeze
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsFreeze Whether to freeze
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置Whether to freeze
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isFreeze Whether to freeze
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tasks Task list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Task list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tasks Task list
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterZone Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterZone Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Secondary AZ list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaveZones Secondary AZ list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置Secondary AZ list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _slaveZones Secondary AZ list
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance information
                     * @return InstanceSet Instance information
                     * 
                     */
                    std::vector<ClusterInstanceDetail> GetInstanceSet() const;

                    /**
                     * 设置Instance information
                     * @param _instanceSet Instance information
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
                     * 获取Billing mode
                     * @return PayMode Billing mode
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode
                     * @param _payMode Billing mode
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
                     * 获取Expiration time
                     * @return PeriodEndTime Expiration time
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置Expiration time
                     * @param _periodEndTime Expiration time
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
                     * 获取Project ID
                     * @return ProjectID Project ID
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID
                     * @param _projectID Project ID
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
                     * 获取Array of tags bound to instance
                     * @return ResourceTags Array of tags bound to instance
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Array of tags bound to instance
                     * @param _resourceTags Array of tags bound to instance
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
                     * 获取Proxy status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyStatus Proxy status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProxyStatus() const;

                    /**
                     * 设置Proxy status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyStatus Proxy status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Binlog switch. Valid values: `ON`, `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogBin Binlog switch. Valid values: `ON`, `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogBin() const;

                    /**
                     * 设置Binlog switch. Valid values: `ON`, `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logBin Binlog switch. Valid values: `ON`, `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to skip the transaction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSkipTrade Whether to skip the transaction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsSkipTrade() const;

                    /**
                     * 设置Whether to skip the transaction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSkipTrade Whether to skip the transaction
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取PITR type. Valid values: `normal`, `redo_pitr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PitrType PITR type. Valid values: `normal`, `redo_pitr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPitrType() const;

                    /**
                     * 设置PITR type. Valid values: `normal`, `redo_pitr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pitrType PITR type. Valid values: `normal`, `redo_pitr`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to enable password complexity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsOpenPasswordComplexity Whether to enable password complexity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsOpenPasswordComplexity() const;

                    /**
                     * 设置Whether to enable password complexity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isOpenPasswordComplexity Whether to enable password complexity
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkStatus Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetworkStatus() const;

                    /**
                     * 设置Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkStatus Network type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Information of the resource pack bound to a cluster Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourcePackages Information of the resource pack bound to a cluster Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置Information of the resource pack bound to a cluster Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourcePackages Information of the resource pack bound to a cluster Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The auto-renewal flag. Valid values: `0`: (manual renewal, default), `1` (auto-renewal). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag The auto-renewal flag. Valid values: `0`: (manual renewal, default), `1` (auto-renewal). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置The auto-renewal flag. Valid values: `0`: (manual renewal, default), `1` (auto-renewal). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag The auto-renewal flag. Valid values: `0`: (manual renewal, default), `1` (auto-renewal). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Physical AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Serverless cluster status when the database type is `SERVERLESS`. Valid values:
resume
resuming
pause
pausing
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * Storage ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * Storage capacity in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Maximum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Minimum storage specification in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * Storage billing mode. Valid values: `1` (monthly subscription), `0` (pay-as-you-go).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Unique VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet name
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Character set
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Database type
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Database type. Valid values: `normal`, `serverless`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * Database version
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Maximum storage space
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Used capacity
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * VIP u200dand vport of the read-only instance in a cluster
                     */
                    std::vector<Addr> m_roAddr;
                    bool m_roAddrHasBeenSet;

                    /**
                     * Features supported by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * TDSQL-C version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * Business type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * Whether there is a secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * Whether to freeze
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * Task list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Secondary AZ list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * Instance information
                     */
                    std::vector<ClusterInstanceDetail> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * Billing mode
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * Array of tags bound to instance
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Proxy status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyStatus;
                    bool m_proxyStatusHasBeenSet;

                    /**
                     * Binlog switch. Valid values: `ON`, `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logBin;
                    bool m_logBinHasBeenSet;

                    /**
                     * Whether to skip the transaction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isSkipTrade;
                    bool m_isSkipTradeHasBeenSet;

                    /**
                     * PITR type. Valid values: `normal`, `redo_pitr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pitrType;
                    bool m_pitrTypeHasBeenSet;

                    /**
                     * Whether to enable password complexity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isOpenPasswordComplexity;
                    bool m_isOpenPasswordComplexityHasBeenSet;

                    /**
                     * Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkStatus;
                    bool m_networkStatusHasBeenSet;

                    /**
                     * Information of the resource pack bound to a cluster Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * The auto-renewal flag. Valid values: `0`: (manual renewal, default), `1` (auto-renewal). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_
