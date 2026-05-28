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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceInitInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyConfig.h>


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
                     * 获取<p>VPC network ID</p>
                     * @return VpcId <p>VPC network ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC network ID</p>
                     * @param _vpcId <p>VPC network ID</p>
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
                     * 获取<p>Subnet ID</p>
                     * @return SubnetId <p>Subnet ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID</p>
                     * @param _subnetId <p>Subnet ID</p>
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
                     * 获取<p>Database type</p><p>Enumeration value:</p><ul><li>MYSQL: MYSQL</li></ul>
                     * @return DbType <p>Database type</p><p>Enumeration value:</p><ul><li>MYSQL: MYSQL</li></ul>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>Database type</p><p>Enumeration value:</p><ul><li>MYSQL: MYSQL</li></ul>
                     * @param _dbType <p>Database type</p><p>Enumeration value:</p><ul><li>MYSQL: MYSQL</li></ul>
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
                     * 获取<p>Database version</p><p>Enumeration value:</p><ul><li>5.7: MySQL 5.7 edition</li><li>8.0: MySQL 8.0 edition</li></ul>
                     * @return DbVersion <p>Database version</p><p>Enumeration value:</p><ul><li>5.7: MySQL 5.7 edition</li><li>8.0: MySQL 8.0 edition</li></ul>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>Database version</p><p>Enumeration value:</p><ul><li>5.7: MySQL 5.7 edition</li><li>8.0: MySQL 8.0 edition</li></ul>
                     * @param _dbVersion <p>Database version</p><p>Enumeration value:</p><ul><li>5.7: MySQL 5.7 edition</li><li>8.0: MySQL 8.0 edition</li></ul>
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
                     * 获取<p>project-ID</p>
                     * @return ProjectId <p>project-ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>project-ID</p>
                     * @param _projectId <p>project-ID</p>
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
                     * 获取<p>Required when DbMode is NORMAL or left blank<br>Cpu cores of the regular instance</p>
                     * @return Cpu <p>Required when DbMode is NORMAL or left blank<br>Cpu cores of the regular instance</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Required when DbMode is NORMAL or left blank<br>Cpu cores of the regular instance</p>
                     * @param _cpu <p>Required when DbMode is NORMAL or left blank<br>Cpu cores of the regular instance</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Required when DbMode is NORMAL or left blank<br>Ordinary instance memory in GB</p>
                     * @return Memory <p>Required when DbMode is NORMAL or left blank<br>Ordinary instance memory in GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Required when DbMode is NORMAL or left blank<br>Ordinary instance memory in GB</p>
                     * @param _memory <p>Required when DbMode is NORMAL or left blank<br>Ordinary instance memory in GB</p>
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
                     * 获取<p>Instance count</p><p>Value ranges from [1, 16]</p><p>Default value: 2</p><ul><li>A value of 2 means one rw instance + one ro instance.</li><li>The transmitted n refers to one rw instance + n-1 ro instances (identical specifications).</li><li>For a more precise cluster composition collocation, please use InstanceInitInfos.</li><li>The value set by this parameter is suitable for provisioned resource cluster. If needed to set the specifications and quantity of Serverless cluster, please use the InstanceInitInfo structure in InstanceInitInfos.n.</li></ul>
                     * @return InstanceCount <p>Instance count</p><p>Value ranges from [1, 16]</p><p>Default value: 2</p><ul><li>A value of 2 means one rw instance + one ro instance.</li><li>The transmitted n refers to one rw instance + n-1 ro instances (identical specifications).</li><li>For a more precise cluster composition collocation, please use InstanceInitInfos.</li><li>The value set by this parameter is suitable for provisioned resource cluster. If needed to set the specifications and quantity of Serverless cluster, please use the InstanceInitInfo structure in InstanceInitInfos.n.</li></ul>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Instance count</p><p>Value ranges from [1, 16]</p><p>Default value: 2</p><ul><li>A value of 2 means one rw instance + one ro instance.</li><li>The transmitted n refers to one rw instance + n-1 ro instances (identical specifications).</li><li>For a more precise cluster composition collocation, please use InstanceInitInfos.</li><li>The value set by this parameter is suitable for provisioned resource cluster. If needed to set the specifications and quantity of Serverless cluster, please use the InstanceInitInfo structure in InstanceInitInfos.n.</li></ul>
                     * @param _instanceCount <p>Instance count</p><p>Value ranges from [1, 16]</p><p>Default value: 2</p><ul><li>A value of 2 means one rw instance + one ro instance.</li><li>The transmitted n refers to one rw instance + n-1 ro instances (identical specifications).</li><li>For a more precise cluster composition collocation, please use InstanceInitInfos.</li><li>The value set by this parameter is suitable for provisioned resource cluster. If needed to set the specifications and quantity of Serverless cluster, please use the InstanceInitInfo structure in InstanceInitInfos.n.</li></ul>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>This parameter is meaningless and abandoned.<br>Storage size, in GB.</p>
                     * @return Storage <p>This parameter is meaningless and abandoned.<br>Storage size, in GB.</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>This parameter is meaningless and abandoned.<br>Storage size, in GB.</p>
                     * @param _storage <p>This parameter is meaningless and abandoned.<br>Storage size, in GB.</p>
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
                     * 获取<p>Cluster name, length less than 64 characters, each character value ranges from uppercase/lowercase letters, digits, special symbols ('-', '_', '.')</p>
                     * @return ClusterName <p>Cluster name, length less than 64 characters, each character value ranges from uppercase/lowercase letters, digits, special symbols ('-', '_', '.')</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name, length less than 64 characters, each character value ranges from uppercase/lowercase letters, digits, special symbols ('-', '_', '.')</p>
                     * @param _clusterName <p>Cluster name, length less than 64 characters, each character value ranges from uppercase/lowercase letters, digits, special symbols ('-', '_', '.')</p>
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
                     * 获取<p>Account (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/ with any three types required)</p>
                     * @return AdminPassword <p>Account (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/ with any three types required)</p>
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置<p>Account (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/ with any three types required)</p>
                     * @param _adminPassword <p>Account (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/ with any three types required)</p>
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取<p>Port, default 3306, in the range of [0, 65535)</p>
                     * @return Port <p>Port, default 3306, in the range of [0, 65535)</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Port, default 3306, in the range of [0, 65535)</p>
                     * @param _port <p>Port, default 3306, in the range of [0, 65535)</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Pay-as-you-go billing</li><li>1: Monthly Subscription</li></ul><p>Default value: 0</p>
                     * @return PayMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Pay-as-you-go billing</li><li>1: Monthly Subscription</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Pay-as-you-go billing</li><li>1: Monthly Subscription</li></ul><p>Default value: 0</p>
                     * @param _payMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Pay-as-you-go billing</li><li>1: Monthly Subscription</li></ul><p>Default value: 0</p>
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
                     * 获取<p>Number of clusters to purchase. Optional value range: [1,50]. Default is 1.</p>
                     * @return Count <p>Number of clusters to purchase. Optional value range: [1,50]. Default is 1.</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>Number of clusters to purchase. Optional value range: [1,50]. Default is 1.</p>
                     * @param _count <p>Number of clusters to purchase. Optional value range: [1,50]. Default is 1.</p>
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
                     * 获取<p>Rollback type</p><p>Enumeration value:</p><ul><li>noneRollback: No rollback</li><li>snapRollback: Snapshot rollback</li><li>timeRollback: Point-in-time rollback</li></ul>
                     * @return RollbackStrategy <p>Rollback type</p><p>Enumeration value:</p><ul><li>noneRollback: No rollback</li><li>snapRollback: Snapshot rollback</li><li>timeRollback: Point-in-time rollback</li></ul>
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置<p>Rollback type</p><p>Enumeration value:</p><ul><li>noneRollback: No rollback</li><li>snapRollback: Snapshot rollback</li><li>timeRollback: Point-in-time rollback</li></ul>
                     * @param _rollbackStrategy <p>Rollback type</p><p>Enumeration value:</p><ul><li>noneRollback: No rollback</li><li>snapRollback: Snapshot rollback</li><li>timeRollback: Point-in-time rollback</li></ul>
                     * 
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     * 
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     * @return RollbackId <p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     * 
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置<p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     * @param _rollbackId <p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     * 
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     * 
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取<p>During rollback, input the source cluster ID to search for the source poolId</p>
                     * @return OriginalClusterId <p>During rollback, input the source cluster ID to search for the source poolId</p>
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置<p>During rollback, input the source cluster ID to search for the source poolId</p>
                     * @param _originalClusterId <p>During rollback, input the source cluster ID to search for the source poolId</p>
                     * 
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     * 
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     * @return ExpectTime <p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置<p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     * @param _expectTime <p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     * 
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     * 
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取<p>This parameter is meaningless and abandoned.<br>Point-in-time rollback, allowed range of specified time.</p>
                     * @return ExpectTimeThresh <p>This parameter is meaningless and abandoned.<br>Point-in-time rollback, allowed range of specified time.</p>
                     * 
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置<p>This parameter is meaningless and abandoned.<br>Point-in-time rollback, allowed range of specified time.</p>
                     * @param _expectTimeThresh <p>This parameter is meaningless and abandoned.<br>Point-in-time rollback, allowed range of specified time.</p>
                     * 
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     * 
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                    /**
                     * 获取<p>Ordinary instance storage cap, in GB<br>When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.</p>
                     * @return StorageLimit <p>Ordinary instance storage cap, in GB<br>When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>Ordinary instance storage cap, in GB<br>When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.</p>
                     * @param _storageLimit <p>Ordinary instance storage cap, in GB<br>When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.</p>
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
                     * 获取<p>Annual and monthly subscription duration</p>
                     * @return TimeSpan <p>Annual and monthly subscription duration</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Annual and monthly subscription duration</p>
                     * @param _timeSpan <p>Annual and monthly subscription duration</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>Annual and monthly subscription duration unit, ['s', 'd', 'm', 'y']</p>
                     * @return TimeUnit <p>Annual and monthly subscription duration unit, ['s', 'd', 'm', 'y']</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Annual and monthly subscription duration unit, ['s', 'd', 'm', 'y']</p>
                     * @param _timeUnit <p>Annual and monthly subscription duration unit, ['s', 'd', 'm', 'y']</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Whether Annual/Monthly Subscription is auto-renewed</p><p>Enumeration value:</p><ul><li>0: Default renewal method</li><li>1: Auto-renewal</li><li>2: No auto-renewal</li></ul><p>Default value: 0</p>
                     * @return AutoRenewFlag <p>Whether Annual/Monthly Subscription is auto-renewed</p><p>Enumeration value:</p><ul><li>0: Default renewal method</li><li>1: Auto-renewal</li><li>2: No auto-renewal</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Whether Annual/Monthly Subscription is auto-renewed</p><p>Enumeration value:</p><ul><li>0: Default renewal method</li><li>1: Auto-renewal</li><li>2: No auto-renewal</li></ul><p>Default value: 0</p>
                     * @param _autoRenewFlag <p>Whether Annual/Monthly Subscription is auto-renewed</p><p>Enumeration value:</p><ul><li>0: Default renewal method</li><li>1: Auto-renewal</li><li>2: No auto-renewal</li></ul><p>Default value: 0</p>
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
                     * 获取<p>Whether to automatically select voucher 1 Yes 0 No Default value: 0</p><p>Enumeration value:</p><ul><li>1: Yes</li><li>0: No</li></ul><p>Default value: 0</p>
                     * @return AutoVoucher <p>Whether to automatically select voucher 1 Yes 0 No Default value: 0</p><p>Enumeration value:</p><ul><li>1: Yes</li><li>0: No</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>Whether to automatically select voucher 1 Yes 0 No Default value: 0</p><p>Enumeration value:</p><ul><li>1: Yes</li><li>0: No</li></ul><p>Default value: 0</p>
                     * @param _autoVoucher <p>Whether to automatically select voucher 1 Yes 0 No Default value: 0</p><p>Enumeration value:</p><ul><li>1: Yes</li><li>0: No</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>Instance count (this parameter is deprecated and only for existing accommodative)</p>
                     * @return HaCount <p>Instance count (this parameter is deprecated and only for existing accommodative)</p>
                     * 
                     */
                    int64_t GetHaCount() const;

                    /**
                     * 设置<p>Instance count (this parameter is deprecated and only for existing accommodative)</p>
                     * @param _haCount <p>Instance count (this parameter is deprecated and only for existing accommodative)</p>
                     * 
                     */
                    void SetHaCount(const int64_t& _haCount);

                    /**
                     * 判断参数 HaCount 是否已赋值
                     * @return HaCount 是否已赋值
                     * 
                     */
                    bool HaCountHasBeenSet() const;

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
                     * 获取<p>tag Array info that should be bound for cluster creation</p>
                     * @return ResourceTags <p>tag Array info that should be bound for cluster creation</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>tag Array info that should be bound for cluster creation</p>
                     * @param _resourceTags <p>tag Array info that should be bound for cluster creation</p>
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
                     * 获取<p>Db type</p><p>Enumeration value:</p><ul><li>NORMAL: NORMAL instance</li><li>SERVERLESS: SERVERLESS instance</li></ul><p>Default value: NORMAL</p><p>Selectable when DbType is MYSQL (default NORMAL)</p>
                     * @return DbMode <p>Db type</p><p>Enumeration value:</p><ul><li>NORMAL: NORMAL instance</li><li>SERVERLESS: SERVERLESS instance</li></ul><p>Default value: NORMAL</p><p>Selectable when DbType is MYSQL (default NORMAL)</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db type</p><p>Enumeration value:</p><ul><li>NORMAL: NORMAL instance</li><li>SERVERLESS: SERVERLESS instance</li></ul><p>Default value: NORMAL</p><p>Selectable when DbType is MYSQL (default NORMAL)</p>
                     * @param _dbMode <p>Db type</p><p>Enumeration value:</p><ul><li>NORMAL: NORMAL instance</li><li>SERVERLESS: SERVERLESS instance</li></ul><p>Default value: NORMAL</p><p>Selectable when DbType is MYSQL (default NORMAL)</p>
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
                     * 获取<p>Required when DbMode is SERVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     * @return MinCpu <p>Required when DbMode is SERVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>Required when DbMode is SERVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     * @param _minCpu <p>Required when DbMode is SERVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取<p>Required when DbMode is SERVERLESS:<br>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @return MaxCpu <p>Required when DbMode is SERVERLESS:<br>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>Required when DbMode is SERVERLESS:<br>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @param _maxCpu <p>Required when DbMode is SERVERLESS:<br>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>No auto pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: yes</p><p>Take effect when DbMode is SERVERLESS</p>
                     * @return AutoPause <p>No auto pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: yes</p><p>Take effect when DbMode is SERVERLESS</p>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>No auto pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: yes</p><p>Take effect when DbMode is SERVERLESS</p>
                     * @param _autoPause <p>No auto pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: yes</p><p>Take effect when DbMode is SERVERLESS</p>
                     * 
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取<p>When DbMode is SERVERLESS, specify the delay for Cluster Auto-Pause in seconds. Optional range: [600,691200]<br>Default value: 600</p>
                     * @return AutoPauseDelay <p>When DbMode is SERVERLESS, specify the delay for Cluster Auto-Pause in seconds. Optional range: [600,691200]<br>Default value: 600</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>When DbMode is SERVERLESS, specify the delay for Cluster Auto-Pause in seconds. Optional range: [600,691200]<br>Default value: 600</p>
                     * @param _autoPauseDelay <p>When DbMode is SERVERLESS, specify the delay for Cluster Auto-Pause in seconds. Optional range: [600,691200]<br>Default value: 600</p>
                     * 
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取<p>The storage billing mode of the cluster. Pay-As-You-Go: 0, Monthly Subscription: 1. Default is Pay-As-You-Go.<br>When DbType is MYSQL and the compute billing mode of the cluster is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be Pay-As-You-Go.<br>Rollback and clone do not support Monthly Subscription storage.</p>
                     * @return StoragePayMode <p>The storage billing mode of the cluster. Pay-As-You-Go: 0, Monthly Subscription: 1. Default is Pay-As-You-Go.<br>When DbType is MYSQL and the compute billing mode of the cluster is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be Pay-As-You-Go.<br>Rollback and clone do not support Monthly Subscription storage.</p>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>The storage billing mode of the cluster. Pay-As-You-Go: 0, Monthly Subscription: 1. Default is Pay-As-You-Go.<br>When DbType is MYSQL and the compute billing mode of the cluster is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be Pay-As-You-Go.<br>Rollback and clone do not support Monthly Subscription storage.</p>
                     * @param _storagePayMode <p>The storage billing mode of the cluster. Pay-As-You-Go: 0, Monthly Subscription: 1. Default is Pay-As-You-Go.<br>When DbType is MYSQL and the compute billing mode of the cluster is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be Pay-As-You-Go.<br>Rollback and clone do not support Monthly Subscription storage.</p>
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
                     * 获取<p>Security group id array</p>
                     * @return SecurityGroupIds <p>Security group id array</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group id array</p>
                     * @param _securityGroupIds <p>Security group id array</p>
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
                     * 获取<p>Alarm policy Id array</p>
                     * @return AlarmPolicyIds <p>Alarm policy Id array</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置<p>Alarm policy Id array</p>
                     * @param _alarmPolicyIds <p>Alarm policy Id array</p>
                     * 
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                    /**
                     * 获取<p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive</p>
                     * @return ClusterParams <p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive</p>
                     * 
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置<p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive</p>
                     * @param _clusterParams <p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive</p>
                     * 
                     */
                    void SetClusterParams(const std::vector<ParamItem>& _clusterParams);

                    /**
                     * 判断参数 ClusterParams 是否已赋值
                     * @return ClusterParams 是否已赋值
                     * 
                     */
                    bool ClusterParamsHasBeenSet() const;

                    /**
                     * 获取<p>Transaction mode</p><p>Enumeration value:</p><ul><li>0: Place order and pay</li><li>1: Place order</li></ul><p>Default value: 0</p>
                     * @return DealMode <p>Transaction mode</p><p>Enumeration value:</p><ul><li>0: Place order and pay</li><li>1: Place order</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置<p>Transaction mode</p><p>Enumeration value:</p><ul><li>0: Place order and pay</li><li>1: Place order</li></ul><p>Default value: 0</p>
                     * @param _dealMode <p>Transaction mode</p><p>Enumeration value:</p><ul><li>0: Place order and pay</li><li>1: Place order</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取<p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     * @return ParamTemplateId <p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     * @param _paramTemplateId <p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Multi-AZ address</p>
                     * @return SlaveZone <p>Multi-AZ address</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>Multi-AZ address</p>
                     * @param _slaveZone <p>Multi-AZ address</p>
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     * @return InstanceInitInfos <p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     * 
                     */
                    std::vector<InstanceInitInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置<p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     * @param _instanceInitInfos <p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     * 
                     */
                    void SetInstanceInitInfos(const std::vector<InstanceInitInfo>& _instanceInitInfos);

                    /**
                     * 判断参数 InstanceInitInfos 是否已赋值
                     * @return InstanceInitInfos 是否已赋值
                     * 
                     */
                    bool InstanceInitInfosHasBeenSet() const;

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
                     * 获取<p>Database proxy configuration</p>
                     * @return ProxyConfig <p>Database proxy configuration</p>
                     * 
                     */
                    ProxyConfig GetProxyConfig() const;

                    /**
                     * 设置<p>Database proxy configuration</p>
                     * @param _proxyConfig <p>Database proxy configuration</p>
                     * 
                     */
                    void SetProxyConfig(const ProxyConfig& _proxyConfig);

                    /**
                     * 判断参数 ProxyConfig 是否已赋值
                     * @return ProxyConfig 是否已赋值
                     * 
                     */
                    bool ProxyConfigHasBeenSet() const;

                    /**
                     * 获取<p>Auto archive or not</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: no</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS</p>
                     * @return AutoArchive <p>Auto archive or not</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: no</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS</p>
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置<p>Auto archive or not</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: no</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS</p>
                     * @param _autoArchive <p>Auto archive or not</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: no</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS</p>
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                    /**
                     * 获取<p>Archiving processing time after pausing</p><p>Measurement unit: hour</p><p>Default value: 12</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS.</p>
                     * @return AutoArchiveDelayHours <p>Archiving processing time after pausing</p><p>Measurement unit: hour</p><p>Default value: 12</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS.</p>
                     * 
                     */
                    int64_t GetAutoArchiveDelayHours() const;

                    /**
                     * 设置<p>Archiving processing time after pausing</p><p>Measurement unit: hour</p><p>Default value: 12</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS.</p>
                     * @param _autoArchiveDelayHours <p>Archiving processing time after pausing</p><p>Measurement unit: hour</p><p>Default value: 12</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS.</p>
                     * 
                     */
                    void SetAutoArchiveDelayHours(const int64_t& _autoArchiveDelayHours);

                    /**
                     * 判断参数 AutoArchiveDelayHours 是否已赋值
                     * @return AutoArchiveDelayHours 是否已赋值
                     * 
                     */
                    bool AutoArchiveDelayHoursHasBeenSet() const;

                    /**
                     * 获取<p>Cluster level, optional. Example: P0, P1. (This field can be ignored)</p>
                     * @return ClusterLevel <p>Cluster level, optional. Example: P0, P1. (This field can be ignored)</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置<p>Cluster level, optional. Example: P0, P1. (This field can be ignored)</p>
                     * @param _clusterLevel <p>Cluster level, optional. Example: P0, P1. (This field can be ignored)</p>
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
                     * 获取<p>Kernel minor version</p>
                     * @return CynosVersion <p>Kernel minor version</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>Kernel minor version</p>
                     * @param _cynosVersion <p>Kernel minor version</p>
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                private:

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>VPC network ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Database type</p><p>Enumeration value:</p><ul><li>MYSQL: MYSQL</li></ul>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Database version</p><p>Enumeration value:</p><ul><li>5.7: MySQL 5.7 edition</li><li>8.0: MySQL 8.0 edition</li></ul>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>project-ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Required when DbMode is NORMAL or left blank<br>Cpu cores of the regular instance</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Required when DbMode is NORMAL or left blank<br>Ordinary instance memory in GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance count</p><p>Value ranges from [1, 16]</p><p>Default value: 2</p><ul><li>A value of 2 means one rw instance + one ro instance.</li><li>The transmitted n refers to one rw instance + n-1 ro instances (identical specifications).</li><li>For a more precise cluster composition collocation, please use InstanceInitInfos.</li><li>The value set by this parameter is suitable for provisioned resource cluster. If needed to set the specifications and quantity of Serverless cluster, please use the InstanceInitInfo structure in InstanceInitInfos.n.</li></ul>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>This parameter is meaningless and abandoned.<br>Storage size, in GB.</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Cluster name, length less than 64 characters, each character value ranges from uppercase/lowercase letters, digits, special symbols ('-', '_', '.')</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Account (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/ with any three types required)</p>
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * <p>Port, default 3306, in the range of [0, 65535)</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Pay-as-you-go billing</li><li>1: Monthly Subscription</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Number of clusters to purchase. Optional value range: [1,50]. Default is 1.</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>Rollback type</p><p>Enumeration value:</p><ul><li>noneRollback: No rollback</li><li>snapRollback: Snapshot rollback</li><li>timeRollback: Point-in-time rollback</li></ul>
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * <p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * <p>During rollback, input the source cluster ID to search for the source poolId</p>
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * <p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * <p>This parameter is meaningless and abandoned.<br>Point-in-time rollback, allowed range of specified time.</p>
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                    /**
                     * <p>Ordinary instance storage cap, in GB<br>When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * <p>Annual and monthly subscription duration</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Annual and monthly subscription duration unit, ['s', 'd', 'm', 'y']</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Whether Annual/Monthly Subscription is auto-renewed</p><p>Enumeration value:</p><ul><li>0: Default renewal method</li><li>1: Auto-renewal</li><li>2: No auto-renewal</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Whether to automatically select voucher 1 Yes 0 No Default value: 0</p><p>Enumeration value:</p><ul><li>1: Yes</li><li>0: No</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Instance count (this parameter is deprecated and only for existing accommodative)</p>
                     */
                    int64_t m_haCount;
                    bool m_haCountHasBeenSet;

                    /**
                     * <p>Order source</p>
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * <p>tag Array info that should be bound for cluster creation</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Db type</p><p>Enumeration value:</p><ul><li>NORMAL: NORMAL instance</li><li>SERVERLESS: SERVERLESS instance</li></ul><p>Default value: NORMAL</p><p>Selectable when DbType is MYSQL (default NORMAL)</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>Required when DbMode is SERVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>Required when DbMode is SERVERLESS:<br>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>No auto pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: yes</p><p>Take effect when DbMode is SERVERLESS</p>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>When DbMode is SERVERLESS, specify the delay for Cluster Auto-Pause in seconds. Optional range: [600,691200]<br>Default value: 600</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>The storage billing mode of the cluster. Pay-As-You-Go: 0, Monthly Subscription: 1. Default is Pay-As-You-Go.<br>When DbType is MYSQL and the compute billing mode of the cluster is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be Pay-As-You-Go.<br>Rollback and clone do not support Monthly Subscription storage.</p>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>Security group id array</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Alarm policy Id array</p>
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * <p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive</p>
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * <p>Transaction mode</p><p>Enumeration value:</p><ul><li>0: Place order and pay</li><li>1: Place order</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * <p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>Multi-AZ address</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     */
                    std::vector<InstanceInitInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * <p>Global database unique ID</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * <p>Database proxy configuration</p>
                     */
                    ProxyConfig m_proxyConfig;
                    bool m_proxyConfigHasBeenSet;

                    /**
                     * <p>Auto archive or not</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul><p>Default value: no</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS</p>
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * <p>Archiving processing time after pausing</p><p>Measurement unit: hour</p><p>Default value: 12</p><p>This parameter takes effect only when the primary instance of the current cluster is SERVERLESS.</p>
                     */
                    int64_t m_autoArchiveDelayHours;
                    bool m_autoArchiveDelayHoursHasBeenSet;

                    /**
                     * <p>Cluster level, optional. Example: P0, P1. (This field can be ignored)</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * <p>Kernel minor version</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
