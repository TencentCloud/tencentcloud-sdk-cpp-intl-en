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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECSTRATEGY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Quality Rule Execution Strategy
                */
                class RuleGroupExecStrategy : public AbstractModel
                {
                public:
                    RuleGroupExecStrategy();
                    ~RuleGroupExecStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Monitoring Type 1. Not configured, 2. Associated with production scheduling, 3. Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorType Monitoring Type 1. Not configured, 2. Associated with production scheduling, 3. Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置Monitoring Type 1. Not configured, 2. Associated with production scheduling, 3. Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorType Monitoring Type 1. Not configured, 2. Associated with production scheduling, 3. Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Calculation Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecQueue Calculation Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecQueue() const;

                    /**
                     * 设置Calculation Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _execQueue Calculation Queue
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupId Execution Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Execution Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupId Execution Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupName Execution Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置Execution Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupName Execution Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tasks Associated Production Scheduling Task List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ProdSchedulerTask> GetTasks() const;

                    /**
                     * 设置Associated Production Scheduling Task List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tasks Associated Production Scheduling Task List
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Cycle Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Cycle Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Cycle Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Cycle Start Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Cycle End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime Cycle End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Cycle End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime Cycle End Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleType Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleType Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Delayed Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DelayTime Delayed Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置Delayed Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _delayTime Delayed Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleStep Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleStep Interval
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Time Specification
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAction Time Specification
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Time Specification
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAction Time Specification
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Execution engine to run, if not provided, the default execution engine for this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecEngineType Execution engine to run, if not provided, the default execution engine for this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecEngineType() const;

                    /**
                     * 设置Execution engine to run, if not provided, the default execution engine for this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _execEngineType Execution engine to run, if not provided, the default execution engine for this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Execution planNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecPlan Execution planNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecPlan() const;

                    /**
                     * 设置Execution planNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _execPlan Execution planNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecPlan(const std::string& _execPlan);

                    /**
                     * 判断参数 ExecPlan 是否已赋值
                     * @return ExecPlan 是否已赋值
                     * 
                     */
                    bool ExecPlanHasBeenSet() const;

                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleId Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleId Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleName Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleName Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Trigger Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerTypes Trigger Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTriggerTypes() const;

                    /**
                     * 设置Trigger Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerTypes Trigger Type
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Monitoring Type 1. Not configured, 2. Associated with production scheduling, 3. Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Calculation Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_execQueue;
                    bool m_execQueueHasBeenSet;

                    /**
                     * Execution Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Execution Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * Associated Production Scheduling Task List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<ProdSchedulerTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Cycle Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Cycle End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Delayed Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Time Specification
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Execution engine to run, if not provided, the default execution engine for this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_execEngineType;
                    bool m_execEngineTypeHasBeenSet;

                    /**
                     * Execution planNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_execPlan;
                    bool m_execPlanHasBeenSet;

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Trigger Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_triggerTypes;
                    bool m_triggerTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECSTRATEGY_H_
