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
                     * 获取<p>Instance status</p>
                     * @return InstanceStatus <p>Instance status</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status</p>
                     * @param _instanceStatus <p>Instance status</p>
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
                     * 获取<p>Instance status description</p>
                     * @return InstanceStatusDesc <p>Instance status description</p>
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置<p>Instance status description</p>
                     * @param _instanceStatusDesc <p>Instance status description</p>
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
                     * 获取<p>cpu cores</p>
                     * @return InstanceCpu <p>cpu cores</p>
                     * 
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置<p>cpu cores</p>
                     * @param _instanceCpu <p>cpu cores</p>
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
                     * 获取<p>Memory</p>
                     * @return InstanceMemory <p>Memory</p>
                     * 
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置<p>Memory</p>
                     * @param _instanceMemory <p>Memory</p>
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
                     * 获取<p>hard disk</p>
                     * @return InstanceStorage <p>hard disk</p>
                     * 
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置<p>hard disk</p>
                     * @param _instanceStorage <p>hard disk</p>
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
                     * 获取<p>Execution start time (seconds from 00:00).</p>
                     * @return MaintainStartTime <p>Execution start time (seconds from 00:00).</p>
                     * 
                     */
                    int64_t GetMaintainStartTime() const;

                    /**
                     * 设置<p>Execution start time (seconds from 00:00).</p>
                     * @param _maintainStartTime <p>Execution start time (seconds from 00:00).</p>
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
                     * 获取<p>Duration (unit: s)</p>
                     * @return MaintainDuration <p>Duration (unit: s)</p>
                     * 
                     */
                    int64_t GetMaintainDuration() const;

                    /**
                     * 设置<p>Duration (unit: s)</p>
                     * @param _maintainDuration <p>Duration (unit: s)</p>
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
                     * 获取<p>The time when it can be executed, enumeration value: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     * @return MaintainWeekDays <p>The time when it can be executed, enumeration value: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置<p>The time when it can be executed, enumeration value: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     * @param _maintainWeekDays <p>The time when it can be executed, enumeration value: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
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
                     * 获取<p>serverless instance substatus</p>
                     * @return ServerlessStatus <p>serverless instance substatus</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>serverless instance substatus</p>
                     * @param _serverlessStatus <p>serverless instance substatus</p>
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
                     * 获取<p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @return InstanceDeviceType <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * 
                     */
                    std::string GetInstanceDeviceType() const;

                    /**
                     * 设置<p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @param _instanceDeviceType <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
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
                     * 获取<p>Instance storage type<br>Description: This parameter returns a value only when the resource belonging to the query is LibraDB.</p>
                     * @return InstanceStorageType <p>Instance storage type<br>Description: This parameter returns a value only when the resource belonging to the query is LibraDB.</p>
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置<p>Instance storage type<br>Description: This parameter returns a value only when the resource belonging to the query is LibraDB.</p>
                     * @param _instanceStorageType <p>Instance storage type<br>Description: This parameter returns a value only when the resource belonging to the query is LibraDB.</p>
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
                     * 获取<p>Node list<br>Description: This parameter returns a value only when querying resources belonging to LibraDB.</p>
                     * @return NodeList <p>Node list<br>Description: This parameter returns a value only when querying resources belonging to LibraDB.</p>
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置<p>Node list<br>Description: This parameter returns a value only when querying resources belonging to LibraDB.</p>
                     * @param _nodeList <p>Node list<br>Description: This parameter returns a value only when querying resources belonging to LibraDB.</p>
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

                private:

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
                     * <p>Engine type</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Instance status</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Instance status description</p>
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * <p>cpu cores</p>
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * <p>Memory</p>
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * <p>hard disk</p>
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                    /**
                     * <p>Instance role</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>Execution start time (seconds from 00:00).</p>
                     */
                    int64_t m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * <p>Duration (unit: s)</p>
                     */
                    int64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * <p>The time when it can be executed, enumeration value: ["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]</p>
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                    /**
                     * <p>serverless instance substatus</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>Instance task information</p>
                     */
                    std::vector<ObjectTask> m_instanceTasks;
                    bool m_instanceTasksHasBeenSet;

                    /**
                     * <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     */
                    std::string m_instanceDeviceType;
                    bool m_instanceDeviceTypeHasBeenSet;

                    /**
                     * <p>Instance storage type<br>Description: This parameter returns a value only when the resource belonging to the query is LibraDB.</p>
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                    /**
                     * <p>Database type</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>Node list<br>Description: This parameter returns a value only when querying resources belonging to LibraDB.</p>
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * <p>AI optimizer status</p>
                     */
                    AIOptimizerStatus m_aIOptimizerStatus;
                    bool m_aIOptimizerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
