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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class CynosdbInstanceDetail : public AbstractModel
                {
                public:
                    CynosdbInstanceDetail();
                    ~CynosdbInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User Uin</p>
                     * @return Uin <p>User Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>User Uin</p>
                     * @param _uin <p>User Uin</p>
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
                     * 获取<p>User AppId</p>
                     * @return AppId <p>User AppId</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>User AppId</p>
                     * @param _appId <p>User AppId</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
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
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
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
                     * 获取<p>Instance status<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: Recovering<br>offlining: Offline<br>offlined: Offline</p>
                     * @return Status <p>Instance status<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: Recovering<br>offlining: Offline<br>offlined: Offline</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Instance status<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: Recovering<br>offlining: Offline<br>offlined: Offline</p>
                     * @param _status <p>Instance status<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: Recovering<br>offlining: Offline<br>offlined: Offline</p>
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
                     * 获取<p>Status description in Chinese of the instance</p>
                     * @return StatusDesc <p>Status description in Chinese of the instance</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>Status description in Chinese of the instance</p>
                     * @param _statusDesc <p>Status description in Chinese of the instance</p>
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
                     * 获取<p>Status of the serverless instance. Possible value:<br>resume<br>pause</p>
                     * @return ServerlessStatus <p>Status of the serverless instance. Possible value:<br>resume<br>pause</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>Status of the serverless instance. Possible value:<br>resume<br>pause</p>
                     * @param _serverlessStatus <p>Status of the serverless instance. Possible value:<br>resume<br>pause</p>
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
                     * 获取<p>Database type.</p>
                     * @return DbType <p>Database type.</p>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>Database type.</p>
                     * @param _dbType <p>Database type.</p>
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
                     * 获取<p>Cpu, unit: cores</p>
                     * @return Cpu <p>Cpu, unit: cores</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Cpu, unit: cores</p>
                     * @param _cpu <p>Cpu, unit: cores</p>
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
                     * 获取<p>Memory, unit: GB</p>
                     * @return Memory <p>Memory, unit: GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Memory, unit: GB</p>
                     * @param _memory <p>Memory, unit: GB</p>
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
                     * 获取<p>Stored amount, unit: GB</p>
                     * @return Storage <p>Stored amount, unit: GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>Stored amount, unit: GB</p>
                     * @param _storage <p>Stored amount, unit: GB</p>
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
                     * 获取<p>Instance type</p>
                     * @return InstanceType <p>Instance type</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance type</p>
                     * @param _instanceType <p>Instance type</p>
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
                     * 获取<p>Current instance role</p>
                     * @return InstanceRole <p>Current instance role</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>Current instance role</p>
                     * @param _instanceRole <p>Current instance role</p>
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
                     * 获取<p>Instance expiration time</p>
                     * @return PeriodEndTime <p>Instance expiration time</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>Instance expiration time</p>
                     * @param _periodEndTime <p>Instance expiration time</p>
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
                     * 获取<p>Network type.</p>
                     * @return NetType <p>Network type.</p>
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置<p>Network type.</p>
                     * @param _netType <p>Network type.</p>
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
                     * 获取<p>Instance private IP address</p>
                     * @return Vip <p>Instance private IP address</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Instance private IP address</p>
                     * @param _vip <p>Instance private IP address</p>
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
                     * 获取<p>Instance Intranet Port</p>
                     * @return Vport <p>Instance Intranet Port</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Instance Intranet Port</p>
                     * @param _vport <p>Instance Intranet Port</p>
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
                     * 获取<p>Instance public network domain name</p>
                     * @return WanDomain <p>Instance public network domain name</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>Instance public network domain name</p>
                     * @param _wanDomain <p>Instance public network domain name</p>
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
                     * 获取<p>Character set</p>
                     * @return Charset <p>Character set</p>
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置<p>Character set</p>
                     * @param _charset <p>Character set</p>
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
                     * 获取<p>Cynos kernel version</p>
                     * @return CynosVersion <p>Cynos kernel version</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>Cynos kernel version</p>
                     * @param _cynosVersion <p>Cynos kernel version</p>
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
                     * 获取<p>serverless instance cpu minimum</p>
                     * @return MinCpu <p>serverless instance cpu minimum</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>serverless instance cpu minimum</p>
                     * @param _minCpu <p>serverless instance cpu minimum</p>
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
                     * 获取<p>cpu cap of the serverless instance</p>
                     * @return MaxCpu <p>cpu cap of the serverless instance</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>cpu cap of the serverless instance</p>
                     * @param _maxCpu <p>cpu cap of the serverless instance</p>
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
                     * 获取<p>Db type:<li>NORMAL</li><li>SERVERLESS</li></p>
                     * @return DbMode <p>Db type:<li>NORMAL</li><li>SERVERLESS</li></p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db type:<li>NORMAL</li><li>SERVERLESS</li></p>
                     * @param _dbMode <p>Db type:<li>NORMAL</li><li>SERVERLESS</li></p>
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
                     * 获取<p>Cluster read/write instance Availability Zone</p>
                     * @return MasterZone <p>Cluster read/write instance Availability Zone</p>
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置<p>Cluster read/write instance Availability Zone</p>
                     * @param _masterZone <p>Cluster read/write instance Availability Zone</p>
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                private:

                    /**
                     * <p>User Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>User AppId</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * <p>Instance status<br>creating: Creating<br>running: Running<br>isolating: Isolation<br>isolated: Isolated<br>activating: Recovering<br>offlining: Offline<br>offlined: Offline</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description in Chinese of the instance</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>Status of the serverless instance. Possible value:<br>resume<br>pause</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>Database type.</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Database version</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>Cpu, unit: cores</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Memory, unit: GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Stored amount, unit: GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Instance type</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Current instance role</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Payment mode</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Instance expiration time</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>Network type.</p>
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>VPC network ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Instance private IP address</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Instance Intranet Port</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Instance public network domain name</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>Character set</p>
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * <p>Cynos kernel version</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>Renewal flag</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>serverless instance cpu minimum</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>cpu cap of the serverless instance</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>Db type:<li>NORMAL</li><li>SERVERLESS</li></p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>Cluster read/write instance Availability Zone</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEDETAIL_H_
