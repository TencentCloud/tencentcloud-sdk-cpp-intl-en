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
                     * 获取<p>Cluster status. Valid values include:<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: De-isolating<br>offlining: Offline<br>offlined: Offline<br>deleting: Deleting<br>deleted: Deleted</p>
                     * @return Status <p>Cluster status. Valid values include:<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: De-isolating<br>offlining: Offline<br>offlined: Offline<br>deleting: Deleting<br>deleted: Deleted</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Cluster status. Valid values include:<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: De-isolating<br>offlining: Offline<br>offlined: Offline<br>deleting: Deleting<br>deleted: Deleted</p>
                     * @param _status <p>Cluster status. Valid values include:<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: De-isolating<br>offlining: Offline<br>offlined: Offline<br>deleting: Deleting<br>deleted: Deleted</p>
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
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
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
                     * 获取<p>Number of instances</p>
                     * @return InstanceNum <p>Number of instances</p>
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置<p>Number of instances</p>
                     * @param _instanceNum <p>Number of instances</p>
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
                     * 获取<p>User uin</p>
                     * @return Uin <p>User uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>User uin</p>
                     * @param _uin <p>User uin</p>
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
                     * 获取<p>Engine type</p>
                     * @return DbType <p>Engine type</p>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>Engine type</p>
                     * @param _dbType <p>Engine type</p>
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
                     * 获取<p>User appid</p>
                     * @return AppId <p>User appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>User appid</p>
                     * @param _appId <p>User appid</p>
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
                     * 获取<p>Cluster status description</p>
                     * @return StatusDesc <p>Cluster status description</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>Cluster status description</p>
                     * @param _statusDesc <p>Cluster status description</p>
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
                     * 获取<p>Cluster creation time</p>
                     * @return CreateTime <p>Cluster creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Cluster creation time</p>
                     * @param _createTime <p>Cluster creation time</p>
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
                     * 获取<p>Payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     * @return PayMode <p>Payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>Payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     * @param _payMode <p>Payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
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
                     * 获取<p>End time</p>
                     * @return PeriodEndTime <p>End time</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>End time</p>
                     * @param _periodEndTime <p>End time</p>
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
                     * 获取<p>Cluster read/write vip</p>
                     * @return Vip <p>Cluster read/write vip</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Cluster read/write vip</p>
                     * @param _vip <p>Cluster read/write vip</p>
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
                     * 获取<p>Cluster read/write vport</p>
                     * @return Vport <p>Cluster read/write vport</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Cluster read/write vport</p>
                     * @param _vport <p>Cluster read/write vport</p>
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
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
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
                     * 获取<p>cynos kernel version</p>
                     * @return CynosVersion <p>cynos kernel version</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>cynos kernel version</p>
                     * @param _cynosVersion <p>cynos kernel version</p>
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
                     * 获取<p>cynos version tag</p>
                     * @return CynosVersionTag <p>cynos version tag</p>
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置<p>cynos version tag</p>
                     * @param _cynosVersionTag <p>cynos version tag</p>
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
                     * 获取<p>Storage capacity</p>
                     * @return StorageLimit <p>Storage capacity</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>Storage capacity</p>
                     * @param _storageLimit <p>Storage capacity</p>
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
                     * 获取<p>Renewal flag</p>
                     * @return RenewFlag <p>Renewal flag</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>Renewal flag</p>
                     * @param _renewFlag <p>Renewal flag</p>
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
                     * 获取<p>Currently processing task</p>
                     * @return ProcessingTask <p>Currently processing task</p>
                     * 
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置<p>Currently processing task</p>
                     * @param _processingTask <p>Currently processing task</p>
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
                     * 获取<p>Task array of the cluster</p>
                     * @return Tasks <p>Task array of the cluster</p>
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置<p>Task array of the cluster</p>
                     * @param _tasks <p>Task array of the cluster</p>
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
                     * 获取<p>tag Array of cluster binding</p>
                     * @return ResourceTags <p>tag Array of cluster binding</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>tag Array of cluster binding</p>
                     * @param _resourceTags <p>tag Array of cluster binding</p>
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
                     * 获取<p>Db type (NORMAL, SERVERLESS)</p>
                     * @return DbMode <p>Db type (NORMAL, SERVERLESS)</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db type (NORMAL, SERVERLESS)</p>
                     * @param _dbMode <p>Db type (NORMAL, SERVERLESS)</p>
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
                     * 获取<p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>pause</p>
                     * @return ServerlessStatus <p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>pause</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>pause</p>
                     * @param _serverlessStatus <p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>pause</p>
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
                     * 获取<p>Cluster Prepaid storage size</p>
                     * @return Storage <p>Cluster Prepaid storage size</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>Cluster Prepaid storage size</p>
                     * @param _storage <p>Cluster Prepaid storage size</p>
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
                     * 获取<p>Storage ID of cluster storage in prepayment, used for prepaid storage configuration change</p>
                     * @return StorageId <p>Storage ID of cluster storage in prepayment, used for prepaid storage configuration change</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>Storage ID of cluster storage in prepayment, used for prepaid storage configuration change</p>
                     * @param _storageId <p>Storage ID of cluster storage in prepayment, used for prepaid storage configuration change</p>
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
                     * 获取<p>Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     * @return StoragePayMode <p>Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     * @param _storagePayMode <p>Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
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
                     * 获取<p>Minimum storage of the cluster compute specification</p>
                     * @return MinStorageSize <p>Minimum storage of the cluster compute specification</p>
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置<p>Minimum storage of the cluster compute specification</p>
                     * @param _minStorageSize <p>Minimum storage of the cluster compute specification</p>
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
                     * 获取<p>Maximum storage value of the cluster compute specification</p>
                     * @return MaxStorageSize <p>Maximum storage value of the cluster compute specification</p>
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置<p>Maximum storage value of the cluster compute specification</p>
                     * @param _maxStorageSize <p>Maximum storage value of the cluster compute specification</p>
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
                     * 获取<p>Cluster network information</p>
                     * @return NetAddrs <p>Cluster network information</p>
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrs() const;

                    /**
                     * 设置<p>Cluster network information</p>
                     * @param _netAddrs <p>Cluster network information</p>
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
                     * 获取<p>Secondary AZ</p>
                     * @return SlaveZones <p>Secondary AZ</p>
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置<p>Secondary AZ</p>
                     * @param _slaveZones <p>Secondary AZ</p>
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
                     * 获取<p>Order source</p>
                     * @return OrderSource <p>Order source</p>
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置<p>Order source</p>
                     * @param _orderSource <p>Order source</p>
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
                     * 获取<p>Capacity</p>
                     * @return Ability <p>Capacity</p>
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置<p>Capacity</p>
                     * @param _ability <p>Capacity</p>
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
                     * 获取<p>Instance bind resource package info (here only return storage resource package, for example packageType=DISK)</p>
                     * @return ResourcePackages <p>Instance bind resource package info (here only return storage resource package, for example packageType=DISK)</p>
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置<p>Instance bind resource package info (here only return storage resource package, for example packageType=DISK)</p>
                     * @param _resourcePackages <p>Instance bind resource package info (here only return storage resource package, for example packageType=DISK)</p>
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
                     * 获取<p>Global database unique ID</p>
                     * @return GdnId <p>Global database unique ID</p>
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置<p>Global database unique ID</p>
                     * @param _gdnId <p>Global database unique ID</p>
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
                     * 获取<p>Cluster role. Primary cluster - primary, slave cluster - standby. If GdnId is empty, the field is invalid.</p>
                     * @return GdnRole <p>Cluster role. Primary cluster - primary, slave cluster - standby. If GdnId is empty, the field is invalid.</p>
                     * 
                     */
                    std::string GetGdnRole() const;

                    /**
                     * 设置<p>Cluster role. Primary cluster - primary, slave cluster - standby. If GdnId is empty, the field is invalid.</p>
                     * @param _gdnRole <p>Cluster role. Primary cluster - primary, slave cluster - standby. If GdnId is empty, the field is invalid.</p>
                     * 
                     */
                    void SetGdnRole(const std::string& _gdnRole);

                    /**
                     * 判断参数 GdnRole 是否已赋值
                     * @return GdnRole 是否已赋值
                     * 
                     */
                    bool GdnRoleHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster status. Valid values include:<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: De-isolating<br>offlining: Offline<br>offlined: Offline<br>deleting: Deleting<br>deleted: Deleted</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

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
                     * <p>Database version</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Number of instances</p>
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * <p>User uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Engine type</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>User appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Cluster status description</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>Cluster creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>End time</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>Cluster read/write vip</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Cluster read/write vport</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>cynos kernel version</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>cynos version tag</p>
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * <p>Storage capacity</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * <p>Renewal flag</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Currently processing task</p>
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * <p>Task array of the cluster</p>
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>tag Array of cluster binding</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Db type (NORMAL, SERVERLESS)</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>When the Db type is SERVERLESS, the SERVERLESS cluster status. Available values:<br>resume<br>pause</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>Cluster Prepaid storage size</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Storage ID of cluster storage in prepayment, used for prepaid storage configuration change</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>Cluster storage payment mode. 0: pay-as-you-go; 1: monthly subscription</p>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>Minimum storage of the cluster compute specification</p>
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * <p>Maximum storage value of the cluster compute specification</p>
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * <p>Cluster network information</p>
                     */
                    std::vector<NetAddr> m_netAddrs;
                    bool m_netAddrsHasBeenSet;

                    /**
                     * <p>Physical AZ</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * <p>Primary AZ</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>Whether there is a secondary AZ</p>
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * <p>Secondary AZ</p>
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>Business type</p>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>Freeze or not</p>
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * <p>Order source</p>
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * <p>Capacity</p>
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * <p>Instance bind resource package info (here only return storage resource package, for example packageType=DISK)</p>
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * <p>Global database unique ID</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * <p>Cluster role. Primary cluster - primary, slave cluster - standby. If GdnId is empty, the field is invalid.</p>
                     */
                    std::string m_gdnRole;
                    bool m_gdnRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
