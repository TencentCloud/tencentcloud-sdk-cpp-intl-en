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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Engine type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbType Engine type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Engine type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbType Engine type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId User `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId User `appid`
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusDesc Cluster status description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Cluster status description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusDesc Cluster status description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cluster creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Cluster creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Cluster creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Cluster creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing mode. `0`: Pay-as-you-go; `1`: Monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode. `0`: Pay-as-you-go; `1`: Monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. `0`: Pay-as-you-go; `1`: Monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing mode. `0`: Pay-as-you-go; `1`: Monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeriodEndTime End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _periodEndTime End time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cluster read-write VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip Cluster read-write VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Cluster read-write VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vip Cluster read-write VIP
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cluster read-write vport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vport Cluster read-write vport
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Cluster read-write vport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vport Cluster read-write vport
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectID Project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectID Project ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取TDSQL-C kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CynosVersion TDSQL-C kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置TDSQL-C kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cynosVersion TDSQL-C kernel version
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
                     * 获取Storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageLimit Storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageLimit Storage capacity
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
                     * 获取Renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task in progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessingTask Task in progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置Task in progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processingTask Task in progress
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Array of tasks in the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tasks Array of tasks in the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Array of tasks in the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tasks Array of tasks in the cluster
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
                     * 获取Array of tags bound to the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceTags Array of tags bound to the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Array of tags bound to the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceTags Array of tags bound to the cluster
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database type. Valid values: `NORMAL`, `SERVERLESS`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbMode Database type. Valid values: `NORMAL`, `SERVERLESS`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database type. Valid values: `NORMAL`, `SERVERLESS`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbMode Database type. Valid values: `NORMAL`, `SERVERLESS`.
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
                     * 获取Serverless cluster status when the database type is `SERVERLESS`. Valid values:
`resume`
`pause`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerlessStatus Serverless cluster status when the database type is `SERVERLESS`. Valid values:
`resume`
`pause`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置Serverless cluster status when the database type is `SERVERLESS`. Valid values:
`resume`
`pause`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverlessStatus Serverless cluster status when the database type is `SERVERLESS`. Valid values:
`resume`
`pause`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Prepaid cluster storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Storage Prepaid cluster storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Prepaid cluster storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storage Prepaid cluster storage capacity
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
                     * 获取Cluster storage ID used in prepaid storage modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageId Cluster storage ID used in prepaid storage modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置Cluster storage ID used in prepaid storage modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageId Cluster storage ID used in prepaid storage modification
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
                     * 获取Billing mode of cluster storage. Valid values: `0` (pay-as-you-go), `1` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoragePayMode Billing mode of cluster storage. Valid values: `0` (pay-as-you-go), `1` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置Billing mode of cluster storage. Valid values: `0` (pay-as-you-go), `1` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storagePayMode Billing mode of cluster storage. Valid values: `0` (pay-as-you-go), `1` (monthly subscription).
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
                     * 获取The minimum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinStorageSize The minimum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置The minimum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minStorageSize The minimum storage corresponding to the compute specification of the cluster
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
                     * 获取The maximum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxStorageSize The maximum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置The maximum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxStorageSize The maximum storage corresponding to the compute specification of the cluster
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
                     * 获取Network information of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetAddrs Network information of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrs() const;

                    /**
                     * 设置Network information of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _netAddrs Network information of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaveZones Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _slaveZones Secondary AZ
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
                     * 获取Order source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderSource Order source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置Order source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderSource Order source
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Capability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ability Capability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置Capability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ability Capability
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Engine type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * User `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Cluster status description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Cluster creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Billing mode. `0`: Pay-as-you-go; `1`: Monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Cluster read-write VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Cluster read-write vport
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * TDSQL-C kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * Storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Task in progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * Array of tasks in the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Array of tags bound to the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Database type. Valid values: `NORMAL`, `SERVERLESS`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * Serverless cluster status when the database type is `SERVERLESS`. Valid values:
`resume`
`pause`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * Prepaid cluster storage capacity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Cluster storage ID used in prepaid storage modification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * Billing mode of cluster storage. Valid values: `0` (pay-as-you-go), `1` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * The minimum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * The maximum storage corresponding to the compute specification of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Network information of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NetAddr> m_netAddrs;
                    bool m_netAddrsHasBeenSet;

                    /**
                     * Physical AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * Primary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Whether there is a secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * Secondary AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * Business type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * Whether to freeze
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * Order source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * Capability
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
