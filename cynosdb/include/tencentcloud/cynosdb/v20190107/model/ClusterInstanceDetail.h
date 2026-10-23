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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/AIOptimizerStatus.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceNetInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceAbility.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Cluster information.
                */
                class ClusterInstanceDetail : public AbstractModel
                {
                public:
                    ClusterInstanceDetail();
                    ~ClusterInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User Uin.</p>
                     * @return Uin <p>User Uin.</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>User Uin.</p>
                     * @param _uin <p>User Uin.</p>
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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Engine type</p>
                     * @return InstanceType <p>Engine type</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Engine type</p>
                     * @param _instanceType <p>Engine type</p>
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
                     * 获取<p>Instance status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolating</li><li>isolated: Isolated</li><li>activating: Recovering</li><li>offlining: Offlining</li><li>offlined: Offline</li></ul>
                     * @return Status <p>Instance status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolating</li><li>isolated: Isolated</li><li>activating: Recovering</li><li>offlining: Offlining</li><li>offlined: Offline</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Instance status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolating</li><li>isolated: Isolated</li><li>activating: Recovering</li><li>offlining: Offlining</li><li>offlined: Offline</li></ul>
                     * @param _status <p>Instance status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolating</li><li>isolated: Isolated</li><li>activating: Recovering</li><li>offlining: Offlining</li><li>offlined: Offline</li></ul>
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
                     * 获取<p>Instance status</p>
                     * @return InstanceStatus <p>Instance status</p>
                     * @deprecated
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status</p>
                     * @param _instanceStatus <p>Instance status</p>
                     * @deprecated
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * @deprecated
                     */
                    bool InstanceStatusHasBeenSet() const;

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
                     * 获取<p>Instance status description</p>
                     * @return InstanceStatusDesc <p>Instance status description</p>
                     * @deprecated
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置<p>Instance status description</p>
                     * @param _instanceStatusDesc <p>Instance status description</p>
                     * @deprecated
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * @deprecated
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取<p>Cpu</p><p>Unit: core</p>
                     * @return Cpu <p>Cpu</p><p>Unit: core</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Cpu</p><p>Unit: core</p>
                     * @param _cpu <p>Cpu</p><p>Unit: core</p>
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
                     * 获取<p>cpu cores</p>
                     * @return InstanceCpu <p>cpu cores</p>
                     * @deprecated
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置<p>cpu cores</p>
                     * @param _instanceCpu <p>cpu cores</p>
                     * @deprecated
                     */
                    void SetInstanceCpu(const int64_t& _instanceCpu);

                    /**
                     * 判断参数 InstanceCpu 是否已赋值
                     * @return InstanceCpu 是否已赋值
                     * @deprecated
                     */
                    bool InstanceCpuHasBeenSet() const;

                    /**
                     * 获取<p>Lower limit of cpu for serverless instance</p><p>Unit: core</p>
                     * @return MinCpu <p>Lower limit of cpu for serverless instance</p><p>Unit: core</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>Lower limit of cpu for serverless instance</p><p>Unit: core</p>
                     * @param _minCpu <p>Lower limit of cpu for serverless instance</p><p>Unit: core</p>
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
                     * 获取<p>cpu upper limit of the serverless instance</p><p>Unit: core</p>
                     * @return MaxCpu <p>cpu upper limit of the serverless instance</p><p>Unit: core</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>cpu upper limit of the serverless instance</p><p>Unit: core</p>
                     * @param _maxCpu <p>cpu upper limit of the serverless instance</p><p>Unit: core</p>
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
                     * 获取<p>Memory</p><p>Unit: GB</p>
                     * @return Memory <p>Memory</p><p>Unit: GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Memory</p><p>Unit: GB</p>
                     * @param _memory <p>Memory</p><p>Unit: GB</p>
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
                     * 获取<p>Memory</p>
                     * @return InstanceMemory <p>Memory</p>
                     * @deprecated
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置<p>Memory</p>
                     * @param _instanceMemory <p>Memory</p>
                     * @deprecated
                     */
                    void SetInstanceMemory(const int64_t& _instanceMemory);

                    /**
                     * 判断参数 InstanceMemory 是否已赋值
                     * @return InstanceMemory 是否已赋值
                     * @deprecated
                     */
                    bool InstanceMemoryHasBeenSet() const;

                    /**
                     * 获取<p>Hard disk.</p>
                     * @return InstanceStorage <p>Hard disk.</p>
                     * 
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置<p>Hard disk.</p>
                     * @param _instanceStorage <p>Hard disk.</p>
                     * 
                     */
                    void SetInstanceStorage(const int64_t& _instanceStorage);

                    /**
                     * 判断参数 InstanceStorage 是否已赋值
                     * @return InstanceStorage 是否已赋值
                     * 
                     */
                    bool InstanceStorageHasBeenSet() const;

                    /**
                     * 获取<p>Instance role</p>
                     * @return InstanceRole <p>Instance role</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>Instance role</p>
                     * @param _instanceRole <p>Instance role</p>
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
                     * 获取<p>Execution start time (seconds from 00:00:00)</p>
                     * @return MaintainStartTime <p>Execution start time (seconds from 00:00:00)</p>
                     * 
                     */
                    int64_t GetMaintainStartTime() const;

                    /**
                     * 设置<p>Execution start time (seconds from 00:00:00)</p>
                     * @param _maintainStartTime <p>Execution start time (seconds from 00:00:00)</p>
                     * 
                     */
                    void SetMaintainStartTime(const int64_t& _maintainStartTime);

                    /**
                     * 判断参数 MaintainStartTime 是否已赋值
                     * @return MaintainStartTime 是否已赋值
                     * 
                     */
                    bool MaintainStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Continuous time (unit: second)</p>
                     * @return MaintainDuration <p>Continuous time (unit: second)</p>
                     * 
                     */
                    int64_t GetMaintainDuration() const;

                    /**
                     * 设置<p>Continuous time (unit: second)</p>
                     * @param _maintainDuration <p>Continuous time (unit: second)</p>
                     * 
                     */
                    void SetMaintainDuration(const int64_t& _maintainDuration);

                    /**
                     * 判断参数 MaintainDuration 是否已赋值
                     * @return MaintainDuration 是否已赋值
                     * 
                     */
                    bool MaintainDurationHasBeenSet() const;

                    /**
                     * 获取<p>The time when it can be executed. Enumeration values: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     * @return MaintainWeekDays <p>The time when it can be executed. Enumeration values: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置<p>The time when it can be executed. Enumeration values: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     * @param _maintainWeekDays <p>The time when it can be executed. Enumeration values: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     * 
                     */
                    void SetMaintainWeekDays(const std::vector<std::string>& _maintainWeekDays);

                    /**
                     * 判断参数 MaintainWeekDays 是否已赋值
                     * @return MaintainWeekDays 是否已赋值
                     * 
                     */
                    bool MaintainWeekDaysHasBeenSet() const;

                    /**
                     * 获取<p>Instance task information</p>
                     * @return InstanceTasks <p>Instance task information</p>
                     * 
                     */
                    std::vector<ObjectTask> GetInstanceTasks() const;

                    /**
                     * 设置<p>Instance task information</p>
                     * @param _instanceTasks <p>Instance task information</p>
                     * 
                     */
                    void SetInstanceTasks(const std::vector<ObjectTask>& _instanceTasks);

                    /**
                     * 判断参数 InstanceTasks 是否已赋值
                     * @return InstanceTasks 是否已赋值
                     * 
                     */
                    bool InstanceTasksHasBeenSet() const;

                    /**
                     * 获取<p>Instance Machine Type</p><p>Enumeration values:</p><ul><li>common: universal type</li><li>exclusive: dedicated</li></ul>
                     * @return DeviceType <p>Instance Machine Type</p><p>Enumeration values:</p><ul><li>common: universal type</li><li>exclusive: dedicated</li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance Machine Type</p><p>Enumeration values:</p><ul><li>common: universal type</li><li>exclusive: dedicated</li></ul>
                     * @param _deviceType <p>Instance Machine Type</p><p>Enumeration values:</p><ul><li>common: universal type</li><li>exclusive: dedicated</li></ul>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @return InstanceDeviceType <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @deprecated
                     */
                    std::string GetInstanceDeviceType() const;

                    /**
                     * 设置<p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @param _instanceDeviceType <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @deprecated
                     */
                    void SetInstanceDeviceType(const std::string& _instanceDeviceType);

                    /**
                     * 判断参数 InstanceDeviceType 是否已赋值
                     * @return InstanceDeviceType 是否已赋值
                     * @deprecated
                     */
                    bool InstanceDeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance storage type<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * @return InstanceStorageType <p>Instance storage type<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置<p>Instance storage type<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * @param _instanceStorageType <p>Instance storage type<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * 
                     */
                    void SetInstanceStorageType(const std::string& _instanceStorageType);

                    /**
                     * 判断参数 InstanceStorageType 是否已赋值
                     * @return InstanceStorageType 是否已赋值
                     * 
                     */
                    bool InstanceStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Database type</p>
                     * @return DbMode <p>Database type</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Database type</p>
                     * @param _dbMode <p>Database type</p>
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
                     * 获取<p>Node list<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * @return NodeList <p>Node list<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置<p>Node list<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * @param _nodeList <p>Node list<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     * 
                     */
                    void SetNodeList(const std::vector<std::string>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取<p>serverless instance sub-status</p>
                     * @return ServerlessStatus <p>serverless instance sub-status</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>serverless instance sub-status</p>
                     * @param _serverlessStatus <p>serverless instance sub-status</p>
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
                     * 获取<p>AI optimizer status</p>
                     * @return AIOptimizerStatus <p>AI optimizer status</p>
                     * 
                     */
                    AIOptimizerStatus GetAIOptimizerStatus() const;

                    /**
                     * 设置<p>AI optimizer status</p>
                     * @param _aIOptimizerStatus <p>AI optimizer status</p>
                     * 
                     */
                    void SetAIOptimizerStatus(const AIOptimizerStatus& _aIOptimizerStatus);

                    /**
                     * 判断参数 AIOptimizerStatus 是否已赋值
                     * @return AIOptimizerStatus 是否已赋值
                     * 
                     */
                    bool AIOptimizerStatusHasBeenSet() const;

                    /**
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
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
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
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
                     * 获取<p>Physical AZ of the instance location</p>
                     * @return PhysicalZone <p>Physical AZ of the instance location</p>
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置<p>Physical AZ of the instance location</p>
                     * @param _physicalZone <p>Physical AZ of the instance location</p>
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
                     * 获取<p>Database version.</p>
                     * @return DbVersion <p>Database version.</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>Database version.</p>
                     * @param _dbVersion <p>Database version.</p>
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
                     * 获取<p>Stored amount</p><p>Unit: GB</p>
                     * @return Storage <p>Stored amount</p><p>Unit: GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>Stored amount</p><p>Unit: GB</p>
                     * @param _storage <p>Stored amount</p><p>Unit: GB</p>
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
                     * 获取<p>Prepaid storage Id.</p>
                     * @return StorageId <p>Prepaid storage Id.</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>Prepaid storage Id.</p>
                     * @param _storageId <p>Prepaid storage Id.</p>
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
                     * 获取<p>Storage billing type.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     * @return StoragePayMode <p>Storage billing type.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>Storage billing type.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     * @param _storagePayMode <p>Storage billing type.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
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
                     * 获取<p>Isolation time</p>
                     * @return IsolateTime <p>Isolation time</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>Isolation time</p>
                     * @param _isolateTime <p>Isolation time</p>
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
                     * 获取<p>Instance destruction time</p>
                     * @return DestroyTime <p>Instance destruction time</p>
                     * 
                     */
                    std::string GetDestroyTime() const;

                    /**
                     * 设置<p>Instance destruction time</p>
                     * @param _destroyTime <p>Instance destruction time</p>
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
                     * 获取<p>Termination phase</p>
                     * @return DestroyDeadlineText <p>Termination phase</p>
                     * 
                     */
                    std::string GetDestroyDeadlineText() const;

                    /**
                     * 设置<p>Termination phase</p>
                     * @param _destroyDeadlineText <p>Termination phase</p>
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
                     * 获取<p>Network type</p>
                     * @return NetType <p>Network type</p>
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置<p>Network type</p>
                     * @param _netType <p>Network type</p>
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
                     * 获取<p>Public network IP</p>
                     * @return WanIP <p>Public network IP</p>
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置<p>Public network IP</p>
                     * @param _wanIP <p>Public network IP</p>
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
                     * 获取<p>External port</p>
                     * @return WanPort <p>External port</p>
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置<p>External port</p>
                     * @param _wanPort <p>External port</p>
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
                     * 获取<p>Public network enabled status</p>
                     * @return WanStatus <p>Public network enabled status</p>
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置<p>Public network enabled status</p>
                     * @param _wanStatus <p>Public network enabled status</p>
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
                     * 获取<p>Instance public domain name.</p>
                     * @return WanDomain <p>Instance public domain name.</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>Instance public domain name.</p>
                     * @param _wanDomain <p>Instance public domain name.</p>
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
                     * 获取<p>Network information of the instance</p>
                     * @return InstanceNetInfo <p>Network information of the instance</p>
                     * 
                     */
                    std::vector<InstanceNetInfo> GetInstanceNetInfo() const;

                    /**
                     * 设置<p>Network information of the instance</p>
                     * @param _instanceNetInfo <p>Network information of the instance</p>
                     * 
                     */
                    void SetInstanceNetInfo(const std::vector<InstanceNetInfo>& _instanceNetInfo);

                    /**
                     * 判断参数 InstanceNetInfo 是否已赋值
                     * @return InstanceNetInfo 是否已赋值
                     * 
                     */
                    bool InstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     * @return PayMode <p>Payment mode.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>Payment mode.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     * @param _payMode <p>Payment mode.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
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
                     * 获取<p>Renewal flag.</p>
                     * @return RenewFlag <p>Renewal flag.</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>Renewal flag.</p>
                     * @param _renewFlag <p>Renewal flag.</p>
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
                     * 获取<p>Task</p>
                     * @return Tasks <p>Task</p>
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置<p>Task</p>
                     * @param _tasks <p>Task</p>
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
                     * 获取<p>Whether to freeze</p>
                     * @return IsFreeze <p>Whether to freeze</p>
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置<p>Whether to freeze</p>
                     * @param _isFreeze <p>Whether to freeze</p>
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
                     * 获取<p>Resource label.</p>
                     * @return ResourceTags <p>Resource label.</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>Resource label.</p>
                     * @param _resourceTags <p>Resource label.</p>
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
                     * 获取<p>Supported capabilities of the current instance</p>
                     * @return InstanceAbility <p>Supported capabilities of the current instance</p>
                     * 
                     */
                    InstanceAbility GetInstanceAbility() const;

                    /**
                     * 设置<p>Supported capabilities of the current instance</p>
                     * @param _instanceAbility <p>Supported capabilities of the current instance</p>
                     * 
                     */
                    void SetInstanceAbility(const InstanceAbility& _instanceAbility);

                    /**
                     * 判断参数 InstanceAbility 是否已赋值
                     * @return InstanceAbility 是否已赋值
                     * 
                     */
                    bool InstanceAbilityHasBeenSet() const;

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

                private:

                    /**
                     * <p>User Uin.</p>
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
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Engine type</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Instance status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>isolating: Isolating</li><li>isolated: Isolated</li><li>activating: Recovering</li><li>offlining: Offlining</li><li>offlined: Offline</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance status</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Status description in Chinese of the instance</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>Instance status description</p>
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * <p>Cpu</p><p>Unit: core</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>cpu cores</p>
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * <p>Lower limit of cpu for serverless instance</p><p>Unit: core</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>cpu upper limit of the serverless instance</p><p>Unit: core</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>Memory</p><p>Unit: GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Memory</p>
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * <p>Hard disk.</p>
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                    /**
                     * <p>Instance role</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>Execution start time (seconds from 00:00:00)</p>
                     */
                    int64_t m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * <p>Continuous time (unit: second)</p>
                     */
                    int64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * <p>The time when it can be executed. Enumeration values: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                    /**
                     * <p>Instance task information</p>
                     */
                    std::vector<ObjectTask> m_instanceTasks;
                    bool m_instanceTasksHasBeenSet;

                    /**
                     * <p>Instance Machine Type</p><p>Enumeration values:</p><ul><li>common: universal type</li><li>exclusive: dedicated</li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     */
                    std::string m_instanceDeviceType;
                    bool m_instanceDeviceTypeHasBeenSet;

                    /**
                     * <p>Instance storage type<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                    /**
                     * <p>Database type</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>Node list<br>Description: This parameter returns a value only when the resource to query is LibraDB.</p>
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * <p>serverless instance sub-status</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>AI optimizer status</p>
                     */
                    AIOptimizerStatus m_aIOptimizerStatus;
                    bool m_aIOptimizerStatusHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Physical AZ of the instance location</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * <p>Database type</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Database version.</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>Stored amount</p><p>Unit: GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Prepaid storage Id.</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>Storage billing type.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Isolation time</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>Instance destruction time</p>
                     */
                    std::string m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * <p>Termination phase</p>
                     */
                    std::string m_destroyDeadlineText;
                    bool m_destroyDeadlineTextHasBeenSet;

                    /**
                     * <p>Instance expiration time</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

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
                     * <p>Network type</p>
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>Public network IP</p>
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * <p>External port</p>
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * <p>Public network enabled status</p>
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * <p>Instance public domain name.</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>Network information of the instance</p>
                     */
                    std::vector<InstanceNetInfo> m_instanceNetInfo;
                    bool m_instanceNetInfoHasBeenSet;

                    /**
                     * <p>Payment mode.</p><p>Valid values:</p><ul><li>0: postpaid</li><li>1: prepaid</li></ul>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Currently processing task</p>
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * <p>Renewal flag.</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Task</p>
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>Whether to freeze</p>
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * <p>Resource label.</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Supported capabilities of the current instance</p>
                     */
                    InstanceAbility m_instanceAbility;
                    bool m_instanceAbilityHasBeenSet;

                    /**
                     * <p>Global database unique ID</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
