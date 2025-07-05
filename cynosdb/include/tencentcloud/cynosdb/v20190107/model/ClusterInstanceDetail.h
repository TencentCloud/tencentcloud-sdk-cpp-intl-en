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


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Cluster instance information
                */
                class ClusterInstanceDetail : public AbstractModel
                {
                public:
                    ClusterInstanceDetail();
                    ~ClusterInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Engine type
                     * @return InstanceType Engine type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Engine type
                     * @param _instanceType Engine type
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
                     * 获取Instance status
                     * @return InstanceStatus Instance status
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
                     * @param _instanceStatus Instance status
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance status description
                     * @return InstanceStatusDesc Instance status description
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置Instance status description
                     * @param _instanceStatusDesc Instance status description
                     * 
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * 
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return InstanceCpu Number of CPU cores
                     * 
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _instanceCpu Number of CPU cores
                     * 
                     */
                    void SetInstanceCpu(const int64_t& _instanceCpu);

                    /**
                     * 判断参数 InstanceCpu 是否已赋值
                     * @return InstanceCpu 是否已赋值
                     * 
                     */
                    bool InstanceCpuHasBeenSet() const;

                    /**
                     * 获取Memory
                     * @return InstanceMemory Memory
                     * 
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置Memory
                     * @param _instanceMemory Memory
                     * 
                     */
                    void SetInstanceMemory(const int64_t& _instanceMemory);

                    /**
                     * 判断参数 InstanceMemory 是否已赋值
                     * @return InstanceMemory 是否已赋值
                     * 
                     */
                    bool InstanceMemoryHasBeenSet() const;

                    /**
                     * 获取Disk
                     * @return InstanceStorage Disk
                     * 
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置Disk
                     * @param _instanceStorage Disk
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
                     * 获取Instance role
                     * @return InstanceRole Instance role
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Instance role
                     * @param _instanceRole Instance role
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
                     * 获取Execution start time (seconds from 0 o'clock).	
                     * @return MaintainStartTime Execution start time (seconds from 0 o'clock).	
                     * 
                     */
                    int64_t GetMaintainStartTime() const;

                    /**
                     * 设置Execution start time (seconds from 0 o'clock).	
                     * @param _maintainStartTime Execution start time (seconds from 0 o'clock).	
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
                     * 获取Specifies the continuous time. the unit is second.	
                     * @return MaintainDuration Specifies the continuous time. the unit is second.	
                     * 
                     */
                    int64_t GetMaintainDuration() const;

                    /**
                     * 设置Specifies the continuous time. the unit is second.	
                     * @param _maintainDuration Specifies the continuous time. the unit is second.	
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
                     * 获取Specifies the time when it can be executed. valid values: ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"].
                     * @return MaintainWeekDays Specifies the time when it can be executed. valid values: ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"].
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置Specifies the time when it can be executed. valid values: ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"].
                     * @param _maintainWeekDays Specifies the time when it can be executed. valid values: ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"].
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
                     * 获取serverless instance substatus.
                     * @return ServerlessStatus serverless instance substatus.
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置serverless instance substatus.
                     * @param _serverlessStatus serverless instance substatus.
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
                     * 获取Instance task information.
                     * @return InstanceTasks Instance task information.
                     * 
                     */
                    std::vector<ObjectTask> GetInstanceTasks() const;

                    /**
                     * 设置Instance task information.
                     * @param _instanceTasks Instance task information.
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
                     * 获取Instance machine type.
                     * @return InstanceDeviceType Instance machine type.
                     * 
                     */
                    std::string GetInstanceDeviceType() const;

                    /**
                     * 设置Instance machine type.
                     * @param _instanceDeviceType Instance machine type.
                     * 
                     */
                    void SetInstanceDeviceType(const std::string& _instanceDeviceType);

                    /**
                     * 判断参数 InstanceDeviceType 是否已赋值
                     * @return InstanceDeviceType 是否已赋值
                     * 
                     */
                    bool InstanceDeviceTypeHasBeenSet() const;

                    /**
                     * 获取Instance storage type.
                     * @return InstanceStorageType Instance storage type.
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置Instance storage type.
                     * @param _instanceStorageType Instance storage type.
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
                     * 获取Database type.
                     * @return DbMode Database type.
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database type.
                     * @param _dbMode Database type.
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
                     * 获取Node list
                     * @return NodeList Node list
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置Node list
                     * @param _nodeList Node list
                     * 
                     */
                    void SetNodeList(const std::vector<std::string>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                private:

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
                     * Engine type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance status description
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * Memory
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * Disk
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                    /**
                     * Instance role
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Execution start time (seconds from 0 o'clock).	
                     */
                    int64_t m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * Specifies the continuous time. the unit is second.	
                     */
                    int64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * Specifies the time when it can be executed. valid values: ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"].
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                    /**
                     * serverless instance substatus.
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * Instance task information.
                     */
                    std::vector<ObjectTask> m_instanceTasks;
                    bool m_instanceTasksHasBeenSet;

                    /**
                     * Instance machine type.
                     */
                    std::string m_instanceDeviceType;
                    bool m_instanceDeviceTypeHasBeenSet;

                    /**
                     * Instance storage type.
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                    /**
                     * Database type.
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * Node list
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
