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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/NetAddr.h>
#include <tencentcloud/cynosdb/v20190107/model/Ability.h>
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
                * Cluster information
                */
                class CynosdbCluster : public AbstractModel
                {
                public:
                    CynosdbCluster();
                    ~CynosdbCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster status. Valid values are as follows:
creating
running
isolating
isolated
activating (removing isolation)
offlining (deactivating)
offlined (deactivated)
deleting
deleted
                     * @return Status Cluster status. Valid values are as follows:
creating
running
isolating
isolated
activating (removing isolation)
offlining (deactivating)
offlined (deactivated)
deleting
deleted
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Cluster status. Valid values are as follows:
creating
running
isolating
isolated
activating (removing isolation)
offlining (deactivating)
offlined (deactivated)
deleting
deleted
                     * @param _status Cluster status. Valid values are as follows:
creating
running
isolating
isolated
activating (removing isolation)
offlining (deactivating)
offlined (deactivated)
deleting
deleted
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
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
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
                     * 获取Number of instances
                     * @return InstanceNum Number of instances
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置Number of instances
                     * @param _instanceNum Number of instances
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Engine type.
                     * @return DbType Engine type.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Engine type.
                     * @param _dbType Engine type.
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
                     * 获取User appid.
                     * @return AppId User appid.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User appid.
                     * @param _appId User appid.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Cluster status description
                     * @return StatusDesc Cluster status description
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Cluster status description
                     * @param _statusDesc Cluster status description
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
                     * 获取Cluster Creation Time
                     * @return CreateTime Cluster Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Cluster Creation Time
                     * @param _createTime Cluster Creation Time
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
                     * 获取Payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     * @return PayMode Payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     * @param _payMode Payment mode. 0: pay-as-you-go; 1: monthly subscription.
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
                     * 获取Expiration time.
                     * @return PeriodEndTime Expiration time.
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置Expiration time.
                     * @param _periodEndTime Expiration time.
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
                     * 获取Cluster read/write vip.
                     * @return Vip Cluster read/write vip.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Cluster read/write vip.
                     * @param _vip Cluster read/write vip.
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
                     * 获取Cluster read/write vport.
                     * @return Vport Cluster read/write vport.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Cluster read/write vport.
                     * @param _vport Cluster read/write vport.
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
                     * 获取Specifies the virtual private cloud ID.
                     * @return VpcId Specifies the virtual private cloud ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the virtual private cloud ID.
                     * @param _vpcId Specifies the virtual private cloud ID.
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
                     * 获取Specifies the subnet ID.
                     * @return SubnetId Specifies the subnet ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Specifies the subnet ID.
                     * @param _subnetId Specifies the subnet ID.
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
                     * 获取Specifies the cynos kernel version.
                     * @return CynosVersion Specifies the cynos kernel version.
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置Specifies the cynos kernel version.
                     * @param _cynosVersion Specifies the cynos kernel version.
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
                     * 获取Specifies the storage capacity.
                     * @return StorageLimit Specifies the storage capacity.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Specifies the storage capacity.
                     * @param _storageLimit Specifies the storage capacity.
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
                     * 获取Renewal Flag
                     * @return RenewFlag Renewal Flag
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Renewal Flag
                     * @param _renewFlag Renewal Flag
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
                     * 获取Task being processed.
                     * @return ProcessingTask Task being processed.
                     * 
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置Task being processed.
                     * @param _processingTask Task being processed.
                     * 
                     */
                    void SetProcessingTask(const std::string& _processingTask);

                    /**
                     * 判断参数 ProcessingTask 是否已赋值
                     * @return ProcessingTask 是否已赋值
                     * 
                     */
                    bool ProcessingTaskHasBeenSet() const;

                    /**
                     * 获取Task array of the cluster.
                     * @return Tasks Task array of the cluster.
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Task array of the cluster.
                     * @param _tasks Task array of the cluster.
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
                     * 获取Array of tags bound to the cluster.
                     * @return ResourceTags Array of tags bound to the cluster.
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Array of tags bound to the cluster.
                     * @param _resourceTags Array of tags bound to the cluster.
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
                     * 获取Db type (NORMAL, SERVERLESS).
                     * @return DbMode Db type (NORMAL, SERVERLESS).
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Db type (NORMAL, SERVERLESS).
                     * @param _dbMode Db type (NORMAL, SERVERLESS).
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
                     * 获取Specifies the status of the SERVERLESS cluster when the Db type is SERVERLESS. valid values:.
resume
pause
                     * @return ServerlessStatus Specifies the status of the SERVERLESS cluster when the Db type is SERVERLESS. valid values:.
resume
pause
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置Specifies the status of the SERVERLESS cluster when the Db type is SERVERLESS. valid values:.
resume
pause
                     * @param _serverlessStatus Specifies the status of the SERVERLESS cluster when the Db type is SERVERLESS. valid values:.
resume
pause
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
                     * 获取Cluster prepaid storage size.
                     * @return Storage Cluster prepaid storage size.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Cluster prepaid storage size.
                     * @param _storage Cluster prepaid storage size.
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
                     * 获取Cluster storage ID for prepaid storage, specifies the storage ID used for prepaid storage modification.
                     * @return StorageId Cluster storage ID for prepaid storage, specifies the storage ID used for prepaid storage modification.
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置Cluster storage ID for prepaid storage, specifies the storage ID used for prepaid storage modification.
                     * @param _storageId Cluster storage ID for prepaid storage, specifies the storage ID used for prepaid storage modification.
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
                     * 获取Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     * @return StoragePayMode Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     * @param _storagePayMode Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription.
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
                     * 获取Minimum storage value corresponding to cluster computing specifications.
                     * @return MinStorageSize Minimum storage value corresponding to cluster computing specifications.
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置Minimum storage value corresponding to cluster computing specifications.
                     * @param _minStorageSize Minimum storage value corresponding to cluster computing specifications.
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
                     * 获取The maximum storage value corresponding to the cluster computing specification.
                     * @return MaxStorageSize The maximum storage value corresponding to the cluster computing specification.
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置The maximum storage value corresponding to the cluster computing specification.
                     * @param _maxStorageSize The maximum storage value corresponding to the cluster computing specification.
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
                     * 获取Specifies the cluster network information.
                     * @return NetAddrs Specifies the cluster network information.
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrs() const;

                    /**
                     * 设置Specifies the cluster network information.
                     * @param _netAddrs Specifies the cluster network information.
                     * 
                     */
                    void SetNetAddrs(const std::vector<NetAddr>& _netAddrs);

                    /**
                     * 判断参数 NetAddrs 是否已赋值
                     * @return NetAddrs 是否已赋值
                     * 
                     */
                    bool NetAddrsHasBeenSet() const;

                    /**
                     * 获取Physical availability zone.
                     * @return PhysicalZone Physical availability zone.
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置Physical availability zone.
                     * @param _physicalZone Physical availability zone.
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
                     * 获取Primary AZ.
                     * @return MasterZone Primary AZ.
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置Primary AZ.
                     * @param _masterZone Primary AZ.
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
                     * 获取Whether there is an availability zone.
                     * @return HasSlaveZone Whether there is an availability zone.
                     * 
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置Whether there is an availability zone.
                     * @param _hasSlaveZone Whether there is an availability zone.
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
                     * 获取Secondary AZ.
                     * @return SlaveZones Secondary AZ.
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置Secondary AZ.
                     * @param _slaveZones Secondary AZ.
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
                     * 获取Business type.
                     * @return BusinessType Business type.
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置Business type.
                     * @param _businessType Business type.
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
                     * 获取Whether to freeze.
                     * @return IsFreeze Whether to freeze.
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置Whether to freeze.
                     * @param _isFreeze Whether to freeze.
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
                     * 获取Order Source
                     * @return OrderSource Order Source
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置Order Source
                     * @param _orderSource Order Source
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取Capacity.
                     * @return Ability Capacity.
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置Capacity.
                     * @param _ability Capacity.
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
                     * 获取Specifies the information of the resource package bound to the instance (only the storage resource package is returned here, that is, packageType=DISK).	
                     * @return ResourcePackages Specifies the information of the resource package bound to the instance (only the storage resource package is returned here, that is, packageType=DISK).	
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置Specifies the information of the resource package bound to the instance (only the storage resource package is returned here, that is, packageType=DISK).	
                     * @param _resourcePackages Specifies the information of the resource package bound to the instance (only the storage resource package is returned here, that is, packageType=DISK).	
                     * 
                     */
                    void SetResourcePackages(const std::vector<ResourcePackage>& _resourcePackages);

                    /**
                     * 判断参数 ResourcePackages 是否已赋值
                     * @return ResourcePackages 是否已赋值
                     * 
                     */
                    bool ResourcePackagesHasBeenSet() const;

                private:

                    /**
                     * Cluster status. Valid values are as follows:
creating
running
isolating
isolated
activating (removing isolation)
offlining (deactivating)
offlined (deactivated)
deleting
deleted
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

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
                     * Database version
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Number of instances
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Engine type.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * User appid.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Cluster status description
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Cluster Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Expiration time.
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Cluster read/write vip.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Cluster read/write vport.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * Specifies the virtual private cloud ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Specifies the subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Specifies the cynos kernel version.
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * Specifies the storage capacity.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Renewal Flag
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Task being processed.
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * Task array of the cluster.
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Array of tags bound to the cluster.
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Db type (NORMAL, SERVERLESS).
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * Specifies the status of the SERVERLESS cluster when the Db type is SERVERLESS. valid values:.
resume
pause
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * Cluster prepaid storage size.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Cluster storage ID for prepaid storage, specifies the storage ID used for prepaid storage modification.
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription.
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * Minimum storage value corresponding to cluster computing specifications.
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * The maximum storage value corresponding to the cluster computing specification.
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Specifies the cluster network information.
                     */
                    std::vector<NetAddr> m_netAddrs;
                    bool m_netAddrsHasBeenSet;

                    /**
                     * Physical availability zone.
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * Primary AZ.
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Whether there is an availability zone.
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * Secondary AZ.
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * Business type.
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * Whether to freeze.
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * Order Source
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * Capacity.
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * Specifies the information of the resource package bound to the instance (only the storage resource package is returned here, that is, packageType=DISK).	
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
