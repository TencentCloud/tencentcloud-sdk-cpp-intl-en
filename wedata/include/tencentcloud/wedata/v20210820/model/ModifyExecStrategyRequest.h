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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYEXECSTRATEGYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYEXECSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ProdSchedulerTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyExecStrategy request structure.
                */
                class ModifyExecStrategyRequest : public AbstractModel
                {
                public:
                    ModifyExecStrategyRequest();
                    ~ModifyExecStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule Group ID
                     * @return RuleGroupId Rule Group ID
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
                     * @param _ruleGroupId Rule Group ID
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取Monitoring Type 1. Not Configured, 2. Associated Production Scheduling, 3. Offline Cycle Detection
                     * @return MonitorType Monitoring Type 1. Not Configured, 2. Associated Production Scheduling, 3. Offline Cycle Detection
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置Monitoring Type 1. Not Configured, 2. Associated Production Scheduling, 3. Offline Cycle Detection
                     * @param _monitorType Monitoring Type 1. Not Configured, 2. Associated Production Scheduling, 3. Offline Cycle Detection
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Compute Queue
                     * @return ExecQueue Compute Queue
                     * 
                     */
                    std::string GetExecQueue() const;

                    /**
                     * 设置Compute Queue
                     * @param _execQueue Compute Queue
                     * 
                     */
                    void SetExecQueue(const std::string& _execQueue);

                    /**
                     * 判断参数 ExecQueue 是否已赋值
                     * @return ExecQueue 是否已赋值
                     * 
                     */
                    bool ExecQueueHasBeenSet() const;

                    /**
                     * 获取Execution Resource Group ID
                     * @return ExecutorGroupId Execution Resource Group ID
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Execution Resource Group ID
                     * @param _executorGroupId Execution Resource Group ID
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取Execution Resource Group Name
                     * @return ExecutorGroupName Execution Resource Group Name
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置Execution Resource Group Name
                     * @param _executorGroupName Execution Resource Group Name
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取Associated Production Scheduling Task List
                     * @return Tasks Associated Production Scheduling Task List
                     * 
                     */
                    std::vector<ProdSchedulerTask> GetTasks() const;

                    /**
                     * 设置Associated Production Scheduling Task List
                     * @param _tasks Associated Production Scheduling Task List
                     * 
                     */
                    void SetTasks(const std::vector<ProdSchedulerTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Offline Cycle Mode, Effective Date - Start Time
                     * @return StartTime Offline Cycle Mode, Effective Date - Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Offline Cycle Mode, Effective Date - Start Time
                     * @param _startTime Offline Cycle Mode, Effective Date - Start Time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Offline Cycle Mode, Effective Date - End Time
                     * @return EndTime Offline Cycle Mode, Effective Date - End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Offline Cycle Mode, Effective Date - End Time
                     * @param _endTime Offline Cycle Mode, Effective Date - End Time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Offline Cycle Mode, Scheduling Period 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     * @return CycleType Offline Cycle Mode, Scheduling Period 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Offline Cycle Mode, Scheduling Period 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     * @param _cycleType Offline Cycle Mode, Scheduling Period 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Offline Cycle Mode, Scheduling Step
                     * @return CycleStep Offline Cycle Mode, Scheduling Step
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置Offline Cycle Mode, Scheduling Step
                     * @param _cycleStep Offline Cycle Mode, Scheduling Step
                     * 
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取Offline Cycle Mode, Specified Time
                     * @return TaskAction Offline Cycle Mode, Specified Time
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Offline Cycle Mode, Specified Time
                     * @param _taskAction Offline Cycle Mode, Specified Time
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取Delayed Execution Time, Unit: Minute, Optional: <0-1439
                     * @return DelayTime Delayed Execution Time, Unit: Minute, Optional: <0-1439
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置Delayed Execution Time, Unit: Minute, Optional: <0-1439
                     * @param _delayTime Delayed Execution Time, Unit: Minute, Optional: <0-1439
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Database ID
                     * @return DatabaseId Database ID
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
                     * @param _databaseId Database ID
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取Data Source ID
                     * @return DatasourceId Data Source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
                     * @param _datasourceId Data Source ID
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Data Table ID
                     * @return TableId Data Table ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Data Table ID
                     * @param _tableId Data Table ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Running Execution Engine, Requests Default Execution Engine of the Data Source if Not Specified
                     * @return ExecEngineType Running Execution Engine, Requests Default Execution Engine of the Data Source if Not Specified
                     * 
                     */
                    std::string GetExecEngineType() const;

                    /**
                     * 设置Running Execution Engine, Requests Default Execution Engine of the Data Source if Not Specified
                     * @param _execEngineType Running Execution Engine, Requests Default Execution Engine of the Data Source if Not Specified
                     * 
                     */
                    void SetExecEngineType(const std::string& _execEngineType);

                    /**
                     * 判断参数 ExecEngineType 是否已赋值
                     * @return ExecEngineType 是否已赋值
                     * 
                     */
                    bool ExecEngineTypeHasBeenSet() const;

                    /**
                     * 获取Trigger scenario
                     * @return TriggerTypes Trigger scenario
                     * 
                     */
                    std::vector<std::string> GetTriggerTypes() const;

                    /**
                     * 设置Trigger scenario
                     * @param _triggerTypes Trigger scenario
                     * 
                     */
                    void SetTriggerTypes(const std::vector<std::string>& _triggerTypes);

                    /**
                     * 判断参数 TriggerTypes 是否已赋值
                     * @return TriggerTypes 是否已赋值
                     * 
                     */
                    bool TriggerTypesHasBeenSet() const;

                private:

                    /**
                     * Rule Group ID
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Monitoring Type 1. Not Configured, 2. Associated Production Scheduling, 3. Offline Cycle Detection
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Compute Queue
                     */
                    std::string m_execQueue;
                    bool m_execQueueHasBeenSet;

                    /**
                     * Execution Resource Group ID
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Execution Resource Group Name
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * Associated Production Scheduling Task List
                     */
                    std::vector<ProdSchedulerTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Offline Cycle Mode, Effective Date - Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Offline Cycle Mode, Effective Date - End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Offline Cycle Mode, Scheduling Period 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Offline Cycle Mode, Scheduling Step
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Offline Cycle Mode, Specified Time
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Delayed Execution Time, Unit: Minute, Optional: <0-1439
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Database ID
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Data Source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Running Execution Engine, Requests Default Execution Engine of the Data Source if Not Specified
                     */
                    std::string m_execEngineType;
                    bool m_execEngineTypeHasBeenSet;

                    /**
                     * Trigger scenario
                     */
                    std::vector<std::string> m_triggerTypes;
                    bool m_triggerTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYEXECSTRATEGYREQUEST_H_
