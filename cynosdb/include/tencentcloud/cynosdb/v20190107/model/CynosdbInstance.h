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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceNetInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance information
                */
                class CynosdbInstance : public AbstractModel
                {
                public:
                    CynosdbInstance();
                    ~CynosdbInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User `Uin`
                     * @return Uin User `Uin`
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User `Uin`
                     * @param _uin User `Uin`
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
                     * 获取User `AppId`
                     * @return AppId User `AppId`
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User `AppId`
                     * @param _appId User `AppId`
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Instance status
                     * @return Status Instance status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance status
                     * @param _status Instance status
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
                     * 获取Instance status description
                     * @return StatusDesc Instance status description
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Instance status description
                     * @param _statusDesc Instance status description
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
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpu Number of CPU cores
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
                     * 获取Memory in GB
                     * @return Memory Memory in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory in GB
                     * @param _memory Memory in GB
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
                     * 获取Storage capacity in GB
                     * @return Storage Storage capacity in GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity in GB
                     * @param _storage Storage capacity in GB
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
                     * 获取Instance type
                     * @return InstanceType Instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceType Instance type
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Current instance role
                     * @return InstanceRole Current instance role
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Current instance role
                     * @param _instanceRole Current instance role
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

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
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取Private IP of instance
                     * @return Vip Private IP of instance
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP of instance
                     * @param _vip Private IP of instance
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
                     * 获取Private port of instance
                     * @return Vport Private port of instance
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Private port of instance
                     * @param _vport Private port of instance
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
                     * 获取Instance expiration time
                     * @return PeriodEndTime Instance expiration time
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param _periodEndTime Instance expiration time
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
                     * 获取Termination deadline
                     * @return DestroyDeadlineText Termination deadline
                     * 
                     */
                    std::string GetDestroyDeadlineText() const;

                    /**
                     * 设置Termination deadline
                     * @param _destroyDeadlineText Termination deadline
                     * 
                     */
                    void SetDestroyDeadlineText(const std::string& _destroyDeadlineText);

                    /**
                     * 判断参数 DestroyDeadlineText 是否已赋值
                     * @return DestroyDeadlineText 是否已赋值
                     * 
                     */
                    bool DestroyDeadlineTextHasBeenSet() const;

                    /**
                     * 获取Isolation time
                     * @return IsolateTime Isolation time
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time
                     * @param _isolateTime Isolation time
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Network type
                     * @return NetType Network type
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置Network type
                     * @param _netType Network type
                     * 
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Public domain name
                     * @return WanDomain Public domain name
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Public domain name
                     * @param _wanDomain Public domain name
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return WanIP Public IP
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置Public IP
                     * @param _wanIP Public IP
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取Public port
                     * @return WanPort Public port
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public port
                     * @param _wanPort Public port
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Public network status
                     * @return WanStatus Public network status
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置Public network status
                     * @param _wanStatus Public network status
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取Instance termination time
                     * @return DestroyTime Instance termination time
                     * 
                     */
                    std::string GetDestroyTime() const;

                    /**
                     * 设置Instance termination time
                     * @param _destroyTime Instance termination time
                     * 
                     */
                    void SetDestroyTime(const std::string& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取TDSQL-C kernel version
                     * @return CynosVersion TDSQL-C kernel version
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置TDSQL-C kernel version
                     * @param _cynosVersion TDSQL-C kernel version
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
                     * 获取Task in progress
                     * @return ProcessingTask Task in progress
                     * 
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置Task in progress
                     * @param _processingTask Task in progress
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
                     * 获取Renewal flag
                     * @return RenewFlag Renewal flag
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Renewal flag
                     * @param _renewFlag Renewal flag
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
                     * 获取Minimum number of CPU cores for serverless instance
                     * @return MinCpu Minimum number of CPU cores for serverless instance
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置Minimum number of CPU cores for serverless instance
                     * @param _minCpu Minimum number of CPU cores for serverless instance
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
                     * 获取Maximum number of CPU cores for serverless instance
                     * @return MaxCpu Maximum number of CPU cores for serverless instance
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置Maximum number of CPU cores for serverless instance
                     * @param _maxCpu Maximum number of CPU cores for serverless instance
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
                     * 获取Serverless instance status. Valid values:
resume
pause
                     * @return ServerlessStatus Serverless instance status. Valid values:
resume
pause
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置Serverless instance status. Valid values:
resume
pause
                     * @param _serverlessStatus Serverless instance status. Valid values:
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
                     * 获取Prepaid storage ID
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return StorageId Prepaid storage ID
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置Prepaid storage ID
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _storageId Prepaid storage ID
Note: this field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Storage billing mode
                     * @return StoragePayMode Storage billing mode
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置Storage billing mode
                     * @param _storagePayMode Storage billing mode
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
                     * 获取Physical zone
                     * @return PhysicalZone Physical zone
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置Physical zone
                     * @param _physicalZone Physical zone
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
                     * 获取Business type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BusinessType Business type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置Business type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _businessType Business type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tasks Task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tasks Task
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
                     * 获取The resource tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceTags The resource tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置The resource tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceTags The resource tag
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
                     * 获取Source AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MasterZone Source AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置Source AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _masterZone Source AZ
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Replica AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SlaveZones Replica AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置Replica AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _slaveZones Replica AZ
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Instance network information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceNetInfo Instance network information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceNetInfo> GetInstanceNetInfo() const;

                    /**
                     * 设置Instance network information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceNetInfo Instance network information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceNetInfo(const std::vector<InstanceNetInfo>& _instanceNetInfo);

                    /**
                     * 判断参数 InstanceNetInfo 是否已赋值
                     * @return InstanceNetInfo 是否已赋值
                     * 
                     */
                    bool InstanceNetInfoHasBeenSet() const;

                private:

                    /**
                     * User `Uin`
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * User `AppId`
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * Instance status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance status description
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Database type
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Database version
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage capacity in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Current instance role
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

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
                     * Private IP of instance
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private port of instance
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Billing mode
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Termination deadline
                     */
                    std::string m_destroyDeadlineText;
                    bool m_destroyDeadlineTextHasBeenSet;

                    /**
                     * Isolation time
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Network type
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Public domain name
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Public port
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Public network status
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * Instance termination time
                     */
                    std::string m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * TDSQL-C kernel version
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * Task in progress
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * Renewal flag
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Minimum number of CPU cores for serverless instance
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * Maximum number of CPU cores for serverless instance
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * Serverless instance status. Valid values:
resume
pause
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * Prepaid storage ID
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * Storage billing mode
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * Physical zone
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * Business type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * Task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Whether to freeze
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * The resource tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Source AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Replica AZ
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * Instance network information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceNetInfo> m_instanceNetInfo;
                    bool m_instanceNetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCE_H_
