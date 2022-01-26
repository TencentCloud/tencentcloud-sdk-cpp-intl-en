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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateClusters request structure.
                */
                class CreateClustersRequest : public AbstractModel
                {
                public:
                    CreateClustersRequest();
                    ~CreateClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ
                     * @return Zone AZ
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param Zone AZ
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param SubnetId Subnet ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Database type. Valid values: 
<li> MYSQL </li>
                     * @return DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database type. Valid values: 
<li> MYSQL </li>
                     * @param DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Database version. Valid values: 
<li> Valid values for `MYSQL`: 5.7 </li>
                     * @return DbVersion Database version. Valid values: 
<li> Valid values for `MYSQL`: 5.7 </li>
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置Database version. Valid values: 
<li> Valid values for `MYSQL`: 5.7 </li>
                     * @param DbVersion Database version. Valid values: 
<li> Valid values for `MYSQL`: 5.7 </li>
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of normal instance
                     * @return Cpu Number of CPU cores of normal instance
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores of normal instance
                     * @param Cpu Number of CPU cores of normal instance
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory of a non-serverless instance in GB
                     * @return Memory Memory of a non-serverless instance in GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory of a non-serverless instance in GB
                     * @param Memory Memory of a non-serverless instance in GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Storage capacity in GB
                     * @return Storage Storage capacity in GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity in GB
                     * @param Storage Storage capacity in GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Account password (it must contain 8-64 characters in at least three of the following four types: uppercase letters, lowercase letters, digits, and symbols (~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/).)
                     * @return AdminPassword Account password (it must contain 8-64 characters in at least three of the following four types: uppercase letters, lowercase letters, digits, and symbols (~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/).)
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置Account password (it must contain 8-64 characters in at least three of the following four types: uppercase letters, lowercase letters, digits, and symbols (~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/).)
                     * @param AdminPassword Account password (it must contain 8-64 characters in at least three of the following four types: uppercase letters, lowercase letters, digits, and symbols (~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/).)
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取Port. Default value: 5432
                     * @return Port Port. Default value: 5432
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port. Default value: 5432
                     * @param Port Port. Default value: 5432
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Billing mode. 0: pay-as-you-go; 1: monthly subscription. Default value: 0
                     * @return PayMode Billing mode. 0: pay-as-you-go; 1: monthly subscription. Default value: 0
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. 0: pay-as-you-go; 1: monthly subscription. Default value: 0
                     * @param PayMode Billing mode. 0: pay-as-you-go; 1: monthly subscription. Default value: 0
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Number of purchased items. Currently, only 1 can be passed in. If this parameter is left empty, 1 will be used by default.
                     * @return Count Number of purchased items. Currently, only 1 can be passed in. If this parameter is left empty, 1 will be used by default.
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of purchased items. Currently, only 1 can be passed in. If this parameter is left empty, 1 will be used by default.
                     * @param Count Number of purchased items. Currently, only 1 can be passed in. If this parameter is left empty, 1 will be used by default.
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Rollback type:
noneRollback: no rollback
snapRollback: rollback by snapshot
timeRollback: rollback by time point
                     * @return RollbackStrategy Rollback type:
noneRollback: no rollback
snapRollback: rollback by snapshot
timeRollback: rollback by time point
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置Rollback type:
noneRollback: no rollback
snapRollback: rollback by snapshot
timeRollback: rollback by time point
                     * @param RollbackStrategy Rollback type:
noneRollback: no rollback
snapRollback: rollback by snapshot
timeRollback: rollback by time point
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取`snapshotId` for snapshot rollback or `queryId` for time point rollback. 0 indicates to determine whether the time point is valid
                     * @return RollbackId `snapshotId` for snapshot rollback or `queryId` for time point rollback. 0 indicates to determine whether the time point is valid
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置`snapshotId` for snapshot rollback or `queryId` for time point rollback. 0 indicates to determine whether the time point is valid
                     * @param RollbackId `snapshotId` for snapshot rollback or `queryId` for time point rollback. 0 indicates to determine whether the time point is valid
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取Pass in the source cluster ID during rollback to find the source `poolId`
                     * @return OriginalClusterId Pass in the source cluster ID during rollback to find the source `poolId`
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置Pass in the source cluster ID during rollback to find the source `poolId`
                     * @param OriginalClusterId Pass in the source cluster ID during rollback to find the source `poolId`
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取Specified time for time point rollback or snapshot time for snapshot rollback
                     * @return ExpectTime Specified time for time point rollback or snapshot time for snapshot rollback
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置Specified time for time point rollback or snapshot time for snapshot rollback
                     * @param ExpectTime Specified time for time point rollback or snapshot time for snapshot rollback
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取Specified allowed time range for time point rollback
                     * @return ExpectTimeThresh Specified allowed time range for time point rollback
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置Specified allowed time range for time point rollback
                     * @param ExpectTimeThresh Specified allowed time range for time point rollback
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                    /**
                     * 获取The maximum storage of a non-serverless instance in GB
If `DbType` is `MYSQL` and the storage billing mode is prepaid, the parameter value cannot exceed the maximum storage corresponding to the CPU and memory specifications.
                     * @return StorageLimit The maximum storage of a non-serverless instance in GB
If `DbType` is `MYSQL` and the storage billing mode is prepaid, the parameter value cannot exceed the maximum storage corresponding to the CPU and memory specifications.
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置The maximum storage of a non-serverless instance in GB
If `DbType` is `MYSQL` and the storage billing mode is prepaid, the parameter value cannot exceed the maximum storage corresponding to the CPU and memory specifications.
                     * @param StorageLimit The maximum storage of a non-serverless instance in GB
If `DbType` is `MYSQL` and the storage billing mode is prepaid, the parameter value cannot exceed the maximum storage corresponding to the CPU and memory specifications.
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取Number of instances
                     * @return InstanceCount Number of instances
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances
                     * @param InstanceCount Number of instances
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Purchase duration of monthly subscription plan
                     * @return TimeSpan Purchase duration of monthly subscription plan
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase duration of monthly subscription plan
                     * @param TimeSpan Purchase duration of monthly subscription plan
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Purchase duration unit of monthly subscription plan
                     * @return TimeUnit Purchase duration unit of monthly subscription plan
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Purchase duration unit of monthly subscription plan
                     * @param TimeUnit Purchase duration unit of monthly subscription plan
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Whether auto-renewal is enabled for monthly subscription plan
                     * @return AutoRenewFlag Whether auto-renewal is enabled for monthly subscription plan
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether auto-renewal is enabled for monthly subscription plan
                     * @param AutoRenewFlag Whether auto-renewal is enabled for monthly subscription plan
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     * @return AutoVoucher Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     * @param AutoVoucher Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Number of instances (this parameter has been disused and is retained only for compatibility with existing instances)
                     * @return HaCount Number of instances (this parameter has been disused and is retained only for compatibility with existing instances)
                     */
                    int64_t GetHaCount() const;

                    /**
                     * 设置Number of instances (this parameter has been disused and is retained only for compatibility with existing instances)
                     * @param HaCount Number of instances (this parameter has been disused and is retained only for compatibility with existing instances)
                     */
                    void SetHaCount(const int64_t& _haCount);

                    /**
                     * 判断参数 HaCount 是否已赋值
                     * @return HaCount 是否已赋值
                     */
                    bool HaCountHasBeenSet() const;

                    /**
                     * 获取Order source
                     * @return OrderSource Order source
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置Order source
                     * @param OrderSource Order source
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取Array of tags to be bound to the created cluster
                     * @return ResourceTags Array of tags to be bound to the created cluster
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Array of tags to be bound to the created cluster
                     * @param ResourceTags Array of tags to be bound to the created cluster
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Database type
Valid values when `DbType` is `MYSQL` (default value: NORMAL):
<li>NORMAL</li>
<li>SERVERLESS</li>
                     * @return DbMode Database type
Valid values when `DbType` is `MYSQL` (default value: NORMAL):
<li>NORMAL</li>
<li>SERVERLESS</li>
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database type
Valid values when `DbType` is `MYSQL` (default value: NORMAL):
<li>NORMAL</li>
<li>SERVERLESS</li>
                     * @param DbMode Database type
Valid values when `DbType` is `MYSQL` (default value: NORMAL):
<li>NORMAL</li>
<li>SERVERLESS</li>
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取This parameter is required if `DbMode` is `SERVERLESS`
Minimum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     * @return MinCpu This parameter is required if `DbMode` is `SERVERLESS`
Minimum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置This parameter is required if `DbMode` is `SERVERLESS`
Minimum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     * @param MinCpu This parameter is required if `DbMode` is `SERVERLESS`
Minimum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取This parameter is required if `DbMode` is `SERVERLESS`:
Maximum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     * @return MaxCpu This parameter is required if `DbMode` is `SERVERLESS`:
Maximum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置This parameter is required if `DbMode` is `SERVERLESS`:
Maximum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     * @param MaxCpu This parameter is required if `DbMode` is `SERVERLESS`:
Maximum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取This parameter specifies whether the cluster will be automatically paused if `DbMode` is `SERVERLESS`. Valid values:
<li>yes</li>
<li>no</li>
Default value: yes
                     * @return AutoPause This parameter specifies whether the cluster will be automatically paused if `DbMode` is `SERVERLESS`. Valid values:
<li>yes</li>
<li>no</li>
Default value: yes
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置This parameter specifies whether the cluster will be automatically paused if `DbMode` is `SERVERLESS`. Valid values:
<li>yes</li>
<li>no</li>
Default value: yes
                     * @param AutoPause This parameter specifies whether the cluster will be automatically paused if `DbMode` is `SERVERLESS`. Valid values:
<li>yes</li>
<li>no</li>
Default value: yes
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取This parameter specifies the delay for automatic cluster pause in seconds if `DbMode` is `SERVERLESS`. Value range: [600,691200]
Default value: 600
                     * @return AutoPauseDelay This parameter specifies the delay for automatic cluster pause in seconds if `DbMode` is `SERVERLESS`. Value range: [600,691200]
Default value: 600
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置This parameter specifies the delay for automatic cluster pause in seconds if `DbMode` is `SERVERLESS`. Value range: [600,691200]
Default value: 600
                     * @param AutoPauseDelay This parameter specifies the delay for automatic cluster pause in seconds if `DbMode` is `SERVERLESS`. Value range: [600,691200]
Default value: 600
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取The billing mode of cluster storage. Valid values: `0` (postpaid), `1` (prepaid). Default value: `0`.
If `DbType` is `MYSQL` and the billing mode of cluster compute is pay-as-you-go (or the `DbMode` is `SERVERLESS`), the billing mode of cluster storage must be postpaid.
Clusters with storage billed in prepaid mode cannot be cloned or rolled back.
                     * @return StoragePayMode The billing mode of cluster storage. Valid values: `0` (postpaid), `1` (prepaid). Default value: `0`.
If `DbType` is `MYSQL` and the billing mode of cluster compute is pay-as-you-go (or the `DbMode` is `SERVERLESS`), the billing mode of cluster storage must be postpaid.
Clusters with storage billed in prepaid mode cannot be cloned or rolled back.
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置The billing mode of cluster storage. Valid values: `0` (postpaid), `1` (prepaid). Default value: `0`.
If `DbType` is `MYSQL` and the billing mode of cluster compute is pay-as-you-go (or the `DbMode` is `SERVERLESS`), the billing mode of cluster storage must be postpaid.
Clusters with storage billed in prepaid mode cannot be cloned or rolled back.
                     * @param StoragePayMode The billing mode of cluster storage. Valid values: `0` (postpaid), `1` (prepaid). Default value: `0`.
If `DbType` is `MYSQL` and the billing mode of cluster compute is pay-as-you-go (or the `DbMode` is `SERVERLESS`), the billing mode of cluster storage must be postpaid.
Clusters with storage billed in prepaid mode cannot be cloned or rolled back.
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取Array of security group IDs
                     * @return SecurityGroupIds Array of security group IDs
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Array of security group IDs
                     * @param SecurityGroupIds Array of security group IDs
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Array of alarm policy IDs
                     * @return AlarmPolicyIds Array of alarm policy IDs
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置Array of alarm policy IDs
                     * @param AlarmPolicyIds Array of alarm policy IDs
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Array of parameters
                     * @return ClusterParams Array of parameters
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置Array of parameters
                     * @param ClusterParams Array of parameters
                     */
                    void SetClusterParams(const std::vector<ParamItem>& _clusterParams);

                    /**
                     * 判断参数 ClusterParams 是否已赋值
                     * @return ClusterParams 是否已赋值
                     */
                    bool ClusterParamsHasBeenSet() const;

                    /**
                     * 获取Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     * @return DealMode Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     * @param DealMode Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取Parameter template ID
                     * @return ParamTemplateId Parameter template ID
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置Parameter template ID
                     * @param ParamTemplateId Parameter template ID
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                private:

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

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
                     * Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Database version. Valid values: 
<li> Valid values for `MYSQL`: 5.7 </li>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of CPU cores of normal instance
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory of a non-serverless instance in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage capacity in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Account password (it must contain 8-64 characters in at least three of the following four types: uppercase letters, lowercase letters, digits, and symbols (~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/).)
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * Port. Default value: 5432
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Billing mode. 0: pay-as-you-go; 1: monthly subscription. Default value: 0
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Number of purchased items. Currently, only 1 can be passed in. If this parameter is left empty, 1 will be used by default.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Rollback type:
noneRollback: no rollback
snapRollback: rollback by snapshot
timeRollback: rollback by time point
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * `snapshotId` for snapshot rollback or `queryId` for time point rollback. 0 indicates to determine whether the time point is valid
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * Pass in the source cluster ID during rollback to find the source `poolId`
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * Specified time for time point rollback or snapshot time for snapshot rollback
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * Specified allowed time range for time point rollback
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                    /**
                     * The maximum storage of a non-serverless instance in GB
If `DbType` is `MYSQL` and the storage billing mode is prepaid, the parameter value cannot exceed the maximum storage corresponding to the CPU and memory specifications.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Number of instances
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Purchase duration of monthly subscription plan
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Purchase duration unit of monthly subscription plan
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Whether auto-renewal is enabled for monthly subscription plan
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Number of instances (this parameter has been disused and is retained only for compatibility with existing instances)
                     */
                    int64_t m_haCount;
                    bool m_haCountHasBeenSet;

                    /**
                     * Order source
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * Array of tags to be bound to the created cluster
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Database type
Valid values when `DbType` is `MYSQL` (default value: NORMAL):
<li>NORMAL</li>
<li>SERVERLESS</li>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * This parameter is required if `DbMode` is `SERVERLESS`
Minimum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * This parameter is required if `DbMode` is `SERVERLESS`:
Maximum number of CPU cores. For the value range, please see the returned result of `DescribeServerlessInstanceSpecs`
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * This parameter specifies whether the cluster will be automatically paused if `DbMode` is `SERVERLESS`. Valid values:
<li>yes</li>
<li>no</li>
Default value: yes
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * This parameter specifies the delay for automatic cluster pause in seconds if `DbMode` is `SERVERLESS`. Value range: [600,691200]
Default value: 600
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * The billing mode of cluster storage. Valid values: `0` (postpaid), `1` (prepaid). Default value: `0`.
If `DbType` is `MYSQL` and the billing mode of cluster compute is pay-as-you-go (or the `DbMode` is `SERVERLESS`), the billing mode of cluster storage must be postpaid.
Clusters with storage billed in prepaid mode cannot be cloned or rolled back.
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * Array of security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Array of alarm policy IDs
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * Array of parameters
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * Parameter template ID
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
