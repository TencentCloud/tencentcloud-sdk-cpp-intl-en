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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINETASKADDPARAM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINETASKADDPARAM_H_

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
                * New Parameter for Offline Task
                */
                class OfflineTaskAddParam : public AbstractModel
                {
                public:
                    OfflineTaskAddParam();
                    ~OfflineTaskAddParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return WorkflowName Name
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Name
                     * @param _workflowName Name
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Dependencies: yes, no
                     * @return DependencyWorkflow Dependencies: yes, no
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Dependencies: yes, no
                     * @param _dependencyWorkflow Dependencies: yes, no
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
                     * 获取Task Start Data Time. Not Empty. Default to Current Time
                     * @return StartTime Task Start Data Time. Not Empty. Default to Current Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task Start Data Time. Not Empty. Default to Current Time
                     * @param _startTime Task Start Data Time. Not Empty. Default to Current Time
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
                     * 获取Task End Data Time. Not Empty. Default to Current Time
                     * @return EndTime Task End Data Time. Not Empty. Default to Current Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task End Data Time. Not Empty. Default to Current Time
                     * @param _endTime Task End Data Time. Not Empty. Default to Current Time
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
                     * 获取Cycle Type. One-time task: 6, Minute Task: 1, Hourly task: 2, Daily Task: 3, Weekly Task: 4, Monthly Task: 5, Cron task: 0
                     * @return CycleType Cycle Type. One-time task: 6, Minute Task: 1, Hourly task: 2, Daily Task: 3, Weekly Task: 4, Monthly Task: 5, Cron task: 0
                     * 
                     */
                    uint64_t GetCycleType() const;

                    /**
                     * 设置Cycle Type. One-time task: 6, Minute Task: 1, Hourly task: 2, Daily Task: 3, Weekly Task: 4, Monthly Task: 5, Cron task: 0
                     * @param _cycleType Cycle Type. One-time task: 6, Minute Task: 1, Hourly task: 2, Daily Task: 3, Weekly Task: 4, Monthly Task: 5, Cron task: 0
                     * 
                     */
                    void SetCycleType(const uint64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Interval, optional, default is 1. Not null. Default is 1
                     * @return CycleStep Interval, optional, default is 1. Not null. Default is 1
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置Interval, optional, default is 1. Not null. Default is 1
                     * @param _cycleStep Interval, optional, default is 1. Not null. Default is 1
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
                     * 获取Delayed Execution Time, in minutes
                     * @return DelayTime Delayed Execution Time, in minutes
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置Delayed Execution Time, in minutes
                     * @param _delayTime Delayed Execution Time, in minutes
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
                     * 获取Task cron expression, used only for cron tasks, else defaults to empty
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CrontabExpression Task cron expression, used only for cron tasks, else defaults to empty
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Task cron expression, used only for cron tasks, else defaults to empty
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _crontabExpression Task cron expression, used only for cron tasks, else defaults to empty
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
                     * 获取Retry Wait
                     * @return RetryWait Retry Wait
                     * 
                     */
                    uint64_t GetRetryWait() const;

                    /**
                     * 设置Retry Wait
                     * @param _retryWait Retry Wait
                     * 
                     */
                    void SetRetryWait(const uint64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取Is Retry Allowed
                     * @return Retriable Is Retry Allowed
                     * 
                     */
                    uint64_t GetRetriable() const;

                    /**
                     * 设置Is Retry Allowed
                     * @param _retriable Is Retry Allowed
                     * 
                     */
                    void SetRetriable(const uint64_t& _retriable);

                    /**
                     * 判断参数 Retriable 是否已赋值
                     * @return Retriable 是否已赋值
                     * 
                     */
                    bool RetriableHasBeenSet() const;

                    /**
                     * 获取Retry Limit
                     * @return TryLimit Retry Limit
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置Retry Limit
                     * @param _tryLimit Retry Limit
                     * 
                     */
                    void SetTryLimit(const uint64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取Priority
                     * @return RunPriority Priority
                     * 
                     */
                    uint64_t GetRunPriority() const;

                    /**
                     * 设置Priority
                     * @param _runPriority Priority
                     * 
                     */
                    void SetRunPriority(const uint64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取Product
                     * @return ProductName Product
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product
                     * @param _productName Product
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取1 Ordered Serialization, one at a time, queued orderly
2 Unordered Serial, one at a time, not queued serial
3 Parallel, multiple at a time parallel
                     * @return SelfDepend 1 Ordered Serialization, one at a time, queued orderly
2 Unordered Serial, one at a time, not queued serial
3 Parallel, multiple at a time parallel
                     * 
                     */
                    uint64_t GetSelfDepend() const;

                    /**
                     * 设置1 Ordered Serialization, one at a time, queued orderly
2 Unordered Serial, one at a time, not queued serial
3 Parallel, multiple at a time parallel
                     * @param _selfDepend 1 Ordered Serialization, one at a time, queued orderly
2 Unordered Serial, one at a time, not queued serial
3 Parallel, multiple at a time parallel
                     * 
                     */
                    void SetSelfDepend(const uint64_t& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取Time Specification, such as 1,3 for monthly tasks, enter 1,3. Not empty. Default ""
Monthly Task: for specific days like "1,3", specifying end of month as "L" alone, cannot be mixed with specific dates
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAction Time Specification, such as 1,3 for monthly tasks, enter 1,3. Not empty. Default ""
Monthly Task: for specific days like "1,3", specifying end of month as "L" alone, cannot be mixed with specific dates
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Time Specification, such as 1,3 for monthly tasks, enter 1,3. Not empty. Default ""
Monthly Task: for specific days like "1,3", specifying end of month as "L" alone, cannot be mixed with specific dates
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAction Time Specification, such as 1,3 for monthly tasks, enter 1,3. Not empty. Default ""
Monthly Task: for specific days like "1,3", specifying end of month as "L" alone, cannot be mixed with specific dates
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
                     * 获取Scheduled Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionEndTime Scheduled Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Scheduled Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionEndTime Scheduled Execution End Time
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
                     * 获取Scheduled Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionStartTime Scheduled Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Scheduled Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionStartTime Scheduled Execution Start Time
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
                     * 获取Is Auto-submit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAutoSubmit Is Auto-submit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetTaskAutoSubmit() const;

                    /**
                     * 设置Is Auto-submit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAutoSubmit Is Auto-submit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskAutoSubmit(const bool& _taskAutoSubmit);

                    /**
                     * 判断参数 TaskAutoSubmit 是否已赋值
                     * @return TaskAutoSubmit 是否已赋值
                     * 
                     */
                    bool TaskAutoSubmitHasBeenSet() const;

                    /**
                     * 获取Instance Generation Method, T_PLUS_0 schedule task on the same day / T_PLUS_1 schedule task the next day
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceInitStrategy Instance Generation Method, T_PLUS_0 schedule task on the same day / T_PLUS_1 schedule task the next day
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置Instance Generation Method, T_PLUS_0 schedule task on the same day / T_PLUS_1 schedule task the next day
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceInitStrategy Instance Generation Method, T_PLUS_0 schedule task on the same day / T_PLUS_1 schedule task the next day
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

                private:

                    /**
                     * Name
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Dependencies: yes, no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * Task Start Data Time. Not Empty. Default to Current Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task End Data Time. Not Empty. Default to Current Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Cycle Type. One-time task: 6, Minute Task: 1, Hourly task: 2, Daily Task: 3, Weekly Task: 4, Monthly Task: 5, Cron task: 0
                     */
                    uint64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Interval, optional, default is 1. Not null. Default is 1
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Delayed Execution Time, in minutes
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Task cron expression, used only for cron tasks, else defaults to empty
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Retry Wait
                     */
                    uint64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * Is Retry Allowed
                     */
                    uint64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * Retry Limit
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * Priority
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * Product
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 1 Ordered Serialization, one at a time, queued orderly
2 Unordered Serial, one at a time, not queued serial
3 Parallel, multiple at a time parallel
                     */
                    uint64_t m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Time Specification, such as 1,3 for monthly tasks, enter 1,3. Not empty. Default ""
Monthly Task: for specific days like "1,3", specifying end of month as "L" alone, cannot be mixed with specific dates
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Scheduled Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Scheduled Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Is Auto-submit
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_taskAutoSubmit;
                    bool m_taskAutoSubmitHasBeenSet;

                    /**
                     * Instance Generation Method, T_PLUS_0 schedule task on the same day / T_PLUS_1 schedule task the next day
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINETASKADDPARAM_H_
