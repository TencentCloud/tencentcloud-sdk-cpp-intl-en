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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWSCHEDULEROPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWSCHEDULEROPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Workflow Scheduling Details
                */
                class WorkflowSchedulerOpsDto : public AbstractModel
                {
                public:
                    WorkflowSchedulerOpsDto();
                    ~WorkflowSchedulerOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Creator CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _creator CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ModifyTime Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifyTime Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Latency, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DelayTime Latency, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置Latency, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _delayTime Latency, unit=minute
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
                     * 获取Start Time, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartupTime Start Time, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置Start Time, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startupTime Start Time, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartupTime(const uint64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取Task Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SelfDepend Task Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置Task Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _selfDepend Task Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSelfDepend(const std::string& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime End timeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Specified Running Time, Specified Time: e.g., Monday:1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAction Specified Running Time, Specified Time: e.g., Monday:1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Specified Running Time, Specified Time: e.g., Monday:1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAction Specified Running Time, Specified Time: e.g., Monday:1
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
                     * 获取Scheduling Cycle Type, Time Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleType Scheduling Cycle Type, Time Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Scheduling Cycle Type, Time Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleType Scheduling Cycle Type, Time Unit
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
                     * 获取Scheduling Period, Interval Step unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleStep Scheduling Period, Interval Step unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置Scheduling Period, Interval Step unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleStep Scheduling Period, Interval Step unit=minute
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
                     * 获取Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CrontabExpression Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _crontabExpression Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionStartTime Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionStartTime Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionEndTime Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionEndTime Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取Task Instance Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceInitStrategy Task Instance Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置Task Instance Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceInitStrategy Task Instance Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                    /**
                     * 获取Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow Self-Dependency
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DependencyWorkflow Workflow Self-Dependency
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Workflow Self-Dependency
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dependencyWorkflow Workflow Self-Dependency
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取Scheduling Plan Interpretation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchedulerDesc Scheduling Plan Interpretation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置Scheduling Plan Interpretation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schedulerDesc Scheduling Plan Interpretation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchedulerDesc(const std::string& _schedulerDesc);

                    /**
                     * 判断参数 SchedulerDesc 是否已赋值
                     * @return SchedulerDesc 是否已赋值
                     * 
                     */
                    bool SchedulerDescHasBeenSet() const;

                    /**
                     * 获取First Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstSubmitTime First Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置First Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstSubmitTime First Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFirstSubmitTime(const std::string& _firstSubmitTime);

                    /**
                     * 判断参数 FirstSubmitTime 是否已赋值
                     * @return FirstSubmitTime 是否已赋值
                     * 
                     */
                    bool FirstSubmitTimeHasBeenSet() const;

                    /**
                     * 获取Latest Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LatestSubmitTime Latest Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLatestSubmitTime() const;

                    /**
                     * 设置Latest Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _latestSubmitTime Latest Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLatestSubmitTime(const std::string& _latestSubmitTime);

                    /**
                     * 判断参数 LatestSubmitTime 是否已赋值
                     * @return LatestSubmitTime 是否已赋值
                     * 
                     */
                    bool LatestSubmitTimeHasBeenSet() const;

                private:

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Latency, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Start Time, unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * Task Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specified Running Time, Specified Time: e.g., Monday:1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Scheduling Cycle Type, Time Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Scheduling Period, Interval Step unit=minute
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Task Instance Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow Self-Dependency
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * Scheduling Plan Interpretation
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * First Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * Latest Submission Time of Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_latestSubmitTime;
                    bool m_latestSubmitTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWSCHEDULEROPSDTO_H_
